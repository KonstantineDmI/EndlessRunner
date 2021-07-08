using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LowZone : MonoBehaviour
{
    [SerializeField] private CameraFollow _cameraFollow;

    private void OnTriggerEnter(Collider other)
    {
        if (other.GetComponent<Player>() != null)
        {
            _cameraFollow.yDist = 1f;
        }

    }

    private void OnTriggerExit(Collider other)
    {
        if (other.GetComponent<Player>() != null)
        {
            _cameraFollow.yDist = 3f;
        }
    }
}
