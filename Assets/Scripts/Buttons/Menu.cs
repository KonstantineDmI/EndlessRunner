using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class Menu : MonoBehaviour
{
    [SerializeField] private Balance _totalBalance;
    [SerializeField] private Session _session;
    public void GoToMenu()
    {
        _totalBalance.balance += _session.coinsAmount;
        SceneManager.LoadScene(0);
    }

}
