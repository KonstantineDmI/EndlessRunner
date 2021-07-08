using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraFollow : MonoBehaviour
{
    [SerializeField] private Transform _player;
    [SerializeField] private Transform _cameraPoint;
    [SerializeField] private float _yDist = 3f;
    [SerializeField] private float _zDist = 12f;

    Vector3 dir;
    Quaternion rot;

    public float yDist 
    { 
        get { return _yDist; } 
        set { _yDist = value;} 
    }

    private float _smoothTime = 0.2f;
    private Vector3 velocity = Vector3.zero;

    private void Update()
    {
        Vector3 cameraPos = new Vector3(_player.position.x, _player.position.y + _yDist, _player.position.z - _zDist);
        transform.position = Vector3.SmoothDamp(transform.position, cameraPos, ref velocity, _smoothTime);
        //transform.rotation = Quaternion.LookRotation(_player.position);
        //transform.LookAt(_player);
        LookRotation();
        
       

        
    }

    private void LookRotation()
    {
        dir = _player.position - transform.position;
        rot = Quaternion.LookRotation(dir);
        transform.rotation = Quaternion.Slerp(transform.rotation, rot, 3.5f * Time.deltaTime);
    }
}
