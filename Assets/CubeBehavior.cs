using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CubeBehavior : MonoBehaviour {

	[HideInInspector]
	public bool isColliding = false;
	[HideInInspector]
	public bool isBeingCarried = false;

	public Transform bluePortal,orangePortal;
	public Transform cubeHolder;

	private Rigidbody rb;
	private BoxCollider boxCollider;

	void Awake(){
		rb = GetComponent<Rigidbody> ();
		boxCollider = GetComponent<BoxCollider> ();
	}

	public void PlaceCube(Vector3 pos,Quaternion rot){
		transform.rotation = rot;
		transform.position = pos + new Vector3 (0, 3, 0);
		rb.useGravity = true;
	}

	void Update(){
		if (transform.position.y < -100f) {
			transform.position = new Vector3 (0, 100, 0);
			rb.useGravity = false;
			rb.velocity = Vector3.zero;
		}

		if (isBeingCarried) {
			transform.position = cubeHolder.position;
		}
	}

	void OnCollisionEnter(Collision col){
		if (col.gameObject.CompareTag ("plane")) {
			isColliding = true;
		} else if (col.gameObject.CompareTag ("orangePortal")) {
			StartCoroutine (TransitionCubeRoutine (orangePortal, bluePortal));
		} else if (col.gameObject.CompareTag ("bluePortal")) {
			StartCoroutine (TransitionCubeRoutine (bluePortal, orangePortal));
		} else if (col.gameObject.CompareTag ("gun")) {
			isBeingCarried = true;
		}
	}

	IEnumerator TransitionCubeRoutine(Transform inPortal,Transform outPortal){
		boxCollider.enabled = false;
		rb.useGravity = false;
		rb.AddForce (inPortal.up * -1);
		yield return new WaitForSeconds(.5f);
		rb.velocity = Vector3.zero;
		transform.position = outPortal.position;
		rb.AddForce (outPortal.up * 1f);
		yield return new WaitForSeconds(.5f);
		boxCollider.enabled = true;
		rb.useGravity = true;
	}

	void OnCollisionExit(Collision col){
		if (col.gameObject.CompareTag ("plane")) {
			isColliding = false;
		}
	}
}
