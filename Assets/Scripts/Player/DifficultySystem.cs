using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class DifficultySystem : MonoBehaviour
{

    [SerializeField] private Movement _movement;
    

    public void DifficultyUpdate()
    {
        _movement.speed += 0.1f;
    }




    

   


   

}
