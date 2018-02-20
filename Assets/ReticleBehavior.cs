using System.Collections;
using System.Collections.Generic;
using UnityEngine;
/// <summary>
/// If the center of screen is pointing to a plane the reticle is activated. 
/// Also put the function for activating/deactivating planes here cause I'm lazy.
/// </summary>
public class ReticleBehavior : MonoBehaviour {

	public GameObject reticle;
	private bool planesActive = true;
	
	void Update() {
		Ray ray = Camera.main.ViewportPointToRay(new Vector3(0.5F, 0.5F, 0));
		RaycastHit hit;
		if (Physics.Raycast (ray, out hit)) {
			if (hit.transform.CompareTag ("plane"))
				reticle.SetActive (true);
		} else {
			reticle.SetActive (false);
		}
	}

	//button hidden for aesthetic purposes(press in top right of screen to activate or deactivate planes
	public void HidePlanes(){
		GameObject[] planes = GameObject.FindGameObjectsWithTag ("plane");
		if (planesActive) {
			planesActive = false;
			foreach (GameObject plane in planes) {
				plane.GetComponent<MeshRenderer> ().enabled = false;
			}
		} else {
			planesActive = true;
			foreach (GameObject plane in planes) {
				plane.GetComponent<MeshRenderer> ().enabled = true;
			}
		}
	}
}
