using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ReticleBehavior : MonoBehaviour {

	public GameObject reticle;
	
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
}
