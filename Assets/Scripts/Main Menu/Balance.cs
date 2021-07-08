using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Balance : MonoBehaviour
{
    private int _balance;
    public int balance
    {
        get { return _balance; }
        set { _balance = value; SetBalance(); }
    }

    private void Start()
    {
        balance = PlayerPrefs.GetInt("balance");
    }

    private void SetBalance()
    {
        PlayerPrefs.SetInt("balance", _balance);
    }
}
