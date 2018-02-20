using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TogglePlaneBehavior : MonoBehaviour {
	
	private bool planesActive = true;

	//button hidden for aesthetic purposes(press in top right of screen to activate or deactivate planes
	public void TogglePlanes(){
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
