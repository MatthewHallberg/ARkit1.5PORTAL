using System.Collections;
using System.Collections.Generic;
using UnityEngine;
/// <summary>
/// Shoots portal out of gun, interpolates and scales to its hit position on a plane. 
/// </summary>
public class PortalBehavior : MonoBehaviour {

	public Transform portalGun;
	private Vector3 desiredPosition = Vector3.zero;
	private Vector3 desiredScale = Vector3.one;
	
	// Update is called once per frame
	void Update () {
		if (desiredPosition != Vector3.zero) {
			transform.position = Vector3.Lerp (transform.position, desiredPosition, 3f * Time.deltaTime);
			transform.localScale = Vector3.Lerp (transform.localScale, desiredScale, 2f * Time.deltaTime);
		}
	}

	public void ShootPortal(Vector3 hitPosition, Quaternion hitRotation){
		transform.position = portalGun.position;
		transform.rotation = hitRotation;
		transform.localScale = Vector3.zero;
		desiredPosition = hitPosition;
		GetComponent<AudioSource> ().Play ();
	}
}
