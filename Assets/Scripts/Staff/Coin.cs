using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Coin : MonoBehaviour
{
    [SerializeField] private int _coinValue = 5;

    private void OnTriggerEnter(Collider other)
    {
        if (other.GetComponent<Player>() != null)
        {
            gameObject.SetActive(false);
            other.GetComponent<Player>().CoinsAdd(_coinValue);
        }
    }
}
