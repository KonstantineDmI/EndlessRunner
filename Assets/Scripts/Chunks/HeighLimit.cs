using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HeighLimit : MonoBehaviour
{
    private void OnTriggerEnter(Collider other)
    {
        if(other.GetComponent<Player>() != null)
        {
            other.transform.position = new Vector3(other.transform.position.x, other.transform.position.y - 10f, other.transform.position.z);
        }
    }
}
