using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class CoinsCreator : MonoBehaviour
{
    //[SerializeField] private int _coinsAmount = 50;
    //[SerializeField] private GameObject _coin;
    //[SerializeField] private List<GameObject> _allCoins;

    ////[SerializeField] private GameObject _chunkCreator;

    //private void Start()
    //{
    //    for(int i = 0; i < _coinsAmount; i++)
    //    {
    //        GameObject newCoin = Instantiate(_coin);
    //        newCoin.SetActive(false);
    //        _allCoins.Add(newCoin);
    //    }
    //}


    ////public void SpawnCoin(GameObject currentChunk)
    ////{
    ////    List<SpawnPoint> allSpawnPoints = _chunkCreator.GetComponent<ChunkCreator>()._spawnedChunks[0].gameObject.GetComponent<Chunk>()._allSpawnPoints;
    ////    SpawnPoint emptySpawnPoint = allSpawnPoints.Find(spawnPoint => spawnPoint.isEmpty == false);

    ////    for (int i = 0; i < _allCoins.Count; i++)
    ////    {
    ////        if (_allCoins[i].activeSelf == false)
    ////        {
    ////            _allCoins[i].transform.position = emptySpawnPoint.transform.position;
    ////            _allCoins[i].SetActive(true);
    ////        }
    ////    }
    ////}

    //public GameObject GetCoin()
    //{
    //    for(int i = 0; i < _allCoins.Count; i++)
    //    {
    //        if (_allCoins[i].activeSelf == false)
    //        {
    //            return _allCoins[i];
    //        }
    //    }
    //    return null;
    //}


}
