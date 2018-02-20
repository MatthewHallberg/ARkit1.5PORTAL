using System;
using System.Collections.Generic;

namespace UnityEngine.XR.iOS
{
	public class UnityARHitTestExample : MonoBehaviour
	{
		public Transform m_HitTransform;
		public float maxRayDistance = 30.0f;
		public LayerMask collisionLayer = 1 << 10;  //ARKitPlane layer
		public PortalBehavior portalBlue,portalOrange;
		public CubeBehavior cube;

		private int resultCount = 0;

        bool HitTestWithResultType (ARPoint point, ARHitTestResultType resultTypes)
        {
            List<ARHitTestResult> hitResults = UnityARSessionNativeInterface.GetARSessionNativeInterface ().HitTest (point, resultTypes);
            if (hitResults.Count > 0) {
                foreach (var hitResult in hitResults) {
                    Debug.Log ("Got hit!");
					Vector3 pos = UnityARMatrixOps.GetPosition (hitResult.worldTransform);
					Quaternion rot = UnityARMatrixOps.GetRotation (hitResult.worldTransform);

					if (!cube.isColliding) {
						cube.PlaceCube (pos, rot);
					} else {
						resultCount++;
						if (resultCount % 2 == 0) {
							portalBlue.ShootPortal (pos, rot);
						} else {
							portalOrange.ShootPortal (pos, rot);
						}
					}

                   // Debug.Log (string.Format ("x:{0:0.######} y:{1:0.######} z:{2:0.######}", m_HitTransform.position.x, m_HitTransform.position.y, m_HitTransform.position.z));
                    return true;
                }
            }
            return false;
        }
		
		// Update is called once per frame
		void Update () {
			//#else
			if (Input.touchCount > 0 && m_HitTransform != null)
			{
				var touch = Input.GetTouch(0);
				if (touch.phase == TouchPhase.Began)
				{
					if (cube.isBeingCarried) {
						cube.DropCube ();
					} else {
						var screenPosition = Camera.main.ScreenToViewportPoint(touch.position);
						ARPoint point = new ARPoint {
							x = screenPosition.x,
							y = screenPosition.y
						};

	                    // prioritize reults types
	                    ARHitTestResultType[] resultTypes = {
							//ARHitTestResultType.ARHitTestResultTypeExistingPlaneUsingGeometry,
	                        ARHitTestResultType.ARHitTestResultTypeExistingPlaneUsingExtent, 
	                        // if you want to use infinite planes use this:
	                        //ARHitTestResultType.ARHitTestResultTypeExistingPlane,
	                        //ARHitTestResultType.ARHitTestResultTypeEstimatedHorizontalPlane, 
							//ARHitTestResultType.ARHitTestResultTypeEstimatedVerticalPlane, 
							//ARHitTestResultType.ARHitTestResultTypeFeaturePoint
	                    }; 
						
	                    foreach (ARHitTestResultType resultType in resultTypes)
	                    {
	                        if (HitTestWithResultType (point, resultType))
	                        {
	                            return;
	                        }
	                    }
				}
			}
			}

		}
	}
}

