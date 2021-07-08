using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DamageZone : MonoBehaviour
{
    private Vector3 _startPos;
    private Quaternion _startRot;
    private float _speed = 30f;
    private Vector3 _direction;
    private Rigidbody _rigidBody;
    private BoxCollider _boxCollider;

    private void Start()
    {
        _startRot = transform.rotation;
        _rigidBody = gameObject.GetComponent<Rigidbody>();
        _boxCollider = gameObject.GetComponent<BoxCollider>();
        _rigidBody.Sleep();
    }


    private void OnCollisionEnter(Collision collision)
    {
        
        if (collision.gameObject.GetComponent<Player>() != null)
        {
            _startPos = transform.position;
            //GetComponent<BoxCollider>().enabled = false;
            collision.gameObject.GetComponent<Health>().TakeDamage(5);
            _direction = (transform.position - collision.transform.position).normalized;
            StartCoroutine(Collision());
        }
    }

    private IEnumerator Collision()
    {
        SetGravity(true);
        _rigidBody.AddForce(_direction * _speed, ForceMode.Impulse);
        yield return new WaitForSeconds(1f);
        SetGravity(false);
        SetNativePosition();

        
    }

    

    private void SetNativePosition()
    {
        gameObject.transform.position = _startPos;
        gameObject.transform.rotation = _startRot;
        //GetComponent<BoxCollider>().enabled = true;
    }
    
    private void SetGravity(bool state)
    {
        _rigidBody.useGravity = state;
        _rigidBody.isKinematic = !state;
    }

}
