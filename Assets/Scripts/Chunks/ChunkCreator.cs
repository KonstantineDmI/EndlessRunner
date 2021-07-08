using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ChunkCreator : MonoBehaviour
{
    [SerializeField] private Transform _playerTransform;
    [SerializeField] private Transform _cameraTransform;
    [SerializeField] private Chunk _firstChunk;
    [SerializeField] private ChunkHolder[] _chunkHolders;
    [SerializeField] private Coin[] _allCoins;

    private Vector3 _nativeCarPosition = new Vector3(16f, 18.9f, 10f);
    private Vector3 _nativeChunkPosition = new Vector3(15.4f, 0f, 21.9f);
    private Vector3 _nativeCameraPosition = new Vector3(16f, 23.73f, 10f);
    
    private int _maxCount = 5;

    public List<Chunk> _spawnedChunks = new List<Chunk>();



    private void Start()
    {
        _spawnedChunks.Add(_firstChunk);
    }

    private void Update()
    {
        if (_playerTransform.position.z > _spawnedChunks[_spawnedChunks.Count - 1].end.position.z - 150)
        {
            SpawnChunk();
        }
    }

    
    public void RestartGame()
    {
        _spawnedChunks.Clear();
        for (int i = 0; i < _chunkHolders.Length; i++)
        {
            _chunkHolders[i].DeactivateChunks();
        }
        _firstChunk.gameObject.SetActive(false);
        GameObject newChunk = _chunkHolders[Random.Range(0, _chunkHolders.Length)].GetChunk();
        _spawnedChunks.Add(newChunk.GetComponent<Chunk>());
        newChunk.SetActive(true);
        newChunk.transform.position = _nativeChunkPosition;
        _playerTransform.position = _nativeCarPosition;
        _cameraTransform.position = _nativeCameraPosition;
        _playerTransform.GetComponent<Health>().Heal(100);
        _playerTransform.GetComponent<Movement>().SetDefaultSpeed();

    }

    private void SpawnChunk()
    {
        GameObject newChunk = _chunkHolders[Random.Range(0, _chunkHolders.Length)].GetChunk();
        Chunk currentChunk = newChunk.GetComponent<Chunk>();
        newChunk.transform.position = Vector3.zero;
        newChunk.transform.position = _spawnedChunks[_spawnedChunks.Count - 1].end.position - currentChunk.begin.position;
        newChunk.SetActive(true);
        _spawnedChunks.Add(currentChunk);

        //for (int i = 0; i < currentChunk._allCoins.Length; i++)
        //{

        //    GameObject freeCoin = currentChunk._allCoins[i].gameObject;
        //    freeCoin.SetActive(true);
            
        //}

        if (_spawnedChunks.Count > _maxCount)
        { 
            _spawnedChunks[0].gameObject.SetActive(false);
            _spawnedChunks.RemoveAt(0);
            
        }

       

    }

 
}
