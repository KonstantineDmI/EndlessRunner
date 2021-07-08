using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class StartGameButton : MonoBehaviour
{
    public void StartGame()
    {
       
        
    }

    private void OnMouseDown()
    {
        if (Input.GetMouseButton(0))
        {
            SceneManager.LoadScene(1);
        }

    }

 

}
