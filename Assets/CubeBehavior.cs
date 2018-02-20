using System.Collections;
using System.Collections.Generic;
using UnityEngine;
/// <summary>
/// A cube is only placed on a plane if its fallen through the ground. 
/// </summary>
public class CubeBehavior : MonoBehaviour {

	[HideInInspector]
	public bool isBeingCarried = false;
	[HideInInspector]
	public bool isColliding = false;

	public Transform bluePortal,orangePortal;
	public Transform cubeHolder;
	public BoxCollider cubeGunCollider;

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

	public void DropCube(){
		isBeingCarried = false;
		StartCoroutine (CoolDownColliderRoutine ());
	}

	void GrabCube(){
		isBeingCarried = true;
		rb.velocity = Vector3.zero;
	}

	IEnumerator CoolDownColliderRoutine(){
		cubeGunCollider.enabled = false;
		yield return new WaitForSeconds (1f);
		cubeGunCollider.enabled = true;
	}

	void Update(){
		//if plane falls through the ground allow it to be placed again.
		if (transform.position.y < -100f) {
			transform.position = new Vector3 (0, 100, 0);
			rb.useGravity = false;
			rb.velocity = Vector3.zero;
			isColliding = false;
		}
		//if we are currently being carried by the gun, set out position to that of the cube holder
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
		} else if (col.gameObject.CompareTag ("gun") && !isBeingCarried) {
			GrabCube ();
		}
	}

	IEnumerator TransitionCubeRoutine(Transform inPortal,Transform outPortal){
		boxCollider.enabled = false;
		rb.useGravity = false;
		rb.AddForce (inPortal.up * -1);
		transform.GetChild (0).GetComponent<MeshRenderer> ().enabled = false;
		yield return new WaitForSeconds(.5f);
		rb.velocity = Vector3.zero;
		transform.position = outPortal.position;
		rb.AddForce (outPortal.up * 1f);
		yield return new WaitForSeconds(.1f);
		transform.GetChild (0).GetComponent<MeshRenderer> ().enabled = true;
		yield return new WaitForSeconds (.4f);
		boxCollider.enabled = true;
		rb.useGravity = true;
	}
}
