using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Session : MonoBehaviour
{
    [SerializeField] private Transform _player;
    [SerializeField] private Text _coinsText;
    [SerializeField] private Text[] _rangeText;
    [SerializeField] private Text _scoreText;

    private DifficultySystem _difficultySystem;
    private float _oldZPosition = 0f;
    private int _sessionCoinsAmount = 0;
    private float _sessionRange;
    private int _sessionScore;

    private void Start()
    {
        _difficultySystem = transform.GetComponent<DifficultySystem>();
        _oldZPosition = _player.transform.position.z;
    }

    public int coinsAmount
    {
        get { return _sessionCoinsAmount; }
        set { _sessionCoinsAmount = value; }
    }

    private void Update()
    {
        if (_player.transform.position.z - _oldZPosition >= 10f)
        {
            ScoreCounter(1);
            _sessionRange = _player.transform.position.z;
            _difficultySystem.DifficultyUpdate();
            _oldZPosition = _player.transform.position.z;
            _rangeText[0].text = Convert.ToInt32(_player.transform.position.z).ToString();

        }
    }


    public void SetCoins()
    {
        int currentBalance = PlayerPrefs.GetInt("balance");
        PlayerPrefs.SetInt("balance", _sessionCoinsAmount + currentBalance);
    }

    public void SetValues()
    {
        _coinsText.text = _sessionCoinsAmount.ToString();
        _rangeText[1].text = _sessionRange.ToString();
        


    }

    private void ScoreCounter(int _currentScore)
    {
        _sessionScore += _currentScore;
        _scoreText.text = _sessionScore.ToString();
    }




}
