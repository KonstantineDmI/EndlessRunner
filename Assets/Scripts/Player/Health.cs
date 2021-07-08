using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Health : MonoBehaviour
{

    [SerializeField] private GameObject _gameOverPanel;
    [SerializeField] private Slider _healthSlider;
    [SerializeField] private int _health = 100;
    [SerializeField] private Movement _playersMovement;
    [SerializeField] private Session _currentSession;
 
    public int health 
    { 
        get { return _health; } 
        set { _health = value; } 
    }

    private void Start()
    {
        _healthSlider.value = health;
    }

    public void TakeDamage(int damage)
    {
        _health -= damage;
        _healthSlider.value -= damage;
        if(_health <= 0)
        {
            GameOver();
        }
    }


    private void GameOver()
    {
        _currentSession.SetValues();
        _gameOverPanel.SetActive(true);
        _playersMovement.enabled = false;
    }
    

    public void Heal(int hp)
    {
         health = hp;
        _healthSlider.value = health;
        _playersMovement.enabled = true;
    }


}
