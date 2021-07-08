using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RestartGame : MonoBehaviour
{
    [SerializeField] private GameObject _gameOverPanel;
    [SerializeField] private ChunkCreator _chunkCreator;

    public void Restart()
    {
        _chunkCreator.RestartGame();
        _gameOverPanel.SetActive(false);
    }
}
