using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MenuController : MonoBehaviour
{
    [SerializeField] private Balance _totalBalance;
    [SerializeField] private Text _balanceTxt;
    private void Start()
    {
        _balanceTxt.text = "Balance: " + _totalBalance.balance.ToString();
    }
}
