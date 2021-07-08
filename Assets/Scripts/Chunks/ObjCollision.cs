using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObjCollision : MonoBehaviour
{
    public string playerTag = "Player";

    void OnCollisionEnter(Collision col)
    {
      if(col.gameObject.tag == playerTag)
      {
        gameObject.GetComponent<Rigidbody>().useGravity = true;
      }
    }
}
