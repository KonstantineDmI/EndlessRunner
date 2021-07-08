using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Player : MonoBehaviour
{
    [SerializeField] private Session _currentSession;
    [SerializeField] private Text _coinsCountText;
    private bool _isDead = false;

    public bool isDead
    {
        get { return _isDead;}
        set { _isDead = value; }
    }
    

    public void CoinsAdd(int amount)
    {
        _currentSession.coinsAmount += amount;
        _coinsCountText.text = _currentSession.coinsAmount + "x";
    }




}
