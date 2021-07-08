using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Movement : MonoBehaviour
{
    [SerializeField] private float _speed = 20f;
    [SerializeField] private Transform _carTransform;
    [SerializeField] private Rigidbody _rigidBody;
    [SerializeField] private Vector2 _LimitX = new Vector2(-40, 40);
    [SerializeField] private Vector2 _LimitY = new Vector2(160, 200);
    private float _lookRateSpeed = 120f;
    private Vector2 _lookInput, _screenCenter, _mouseDistance;

    
    public float speed 
    { 
        get { return _speed; }
        set { _speed = value; }
    }



    private void Start()
    {
        _rigidBody.Sleep();
        _speed = 20f;
        _screenCenter.x = Screen.width * .5f;
        _screenCenter.y = Screen.height * .5f;

    }

    private void Update()
    {
        _lookInput.x = Input.mousePosition.x;
        _lookInput.y = Input.mousePosition.y;

        _mouseDistance.x = (_lookInput.x - _screenCenter.x) / _screenCenter.x;
        _mouseDistance.y = (_lookInput.y - _screenCenter.y) / _screenCenter.y;

        _mouseDistance = Vector2.ClampMagnitude(_mouseDistance, 1f);

        CheckX();
        CheckY();
        
        _carTransform.position += -transform.forward * _speed * Time.deltaTime;
        _carTransform.Rotate(_mouseDistance.y * _lookRateSpeed * Time.deltaTime, _mouseDistance.x * _lookRateSpeed * Time.deltaTime, 0f, Space.Self);




    }

    private void CheckY()
    {
       
        Vector3 Angle = _carTransform.eulerAngles;

        Angle.y = Mathf.Clamp(Angle.y, _LimitY.x, _LimitY.y);

        _carTransform.eulerAngles = new Vector3(_carTransform.eulerAngles.x, Angle.y, 0f);
    }


    private void CheckX()
    {
        Vector3 Angle = _carTransform.eulerAngles;
        while (Angle.x > 180f)
            Angle.x -= 360f;
        while (Angle.x < -180f)
            Angle.x += 360f;

        Angle.x = Mathf.Clamp(Angle.x, _LimitX.x, _LimitX.y);

        _carTransform.eulerAngles = new Vector3(Angle.x, _carTransform.eulerAngles.y, 0f);

    }

    public void SetDefaultSpeed()
    {
        speed = 20f;
    }



}







