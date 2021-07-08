using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ChunkHolder : MonoBehaviour
{
    [SerializeField] private GameObject _chunkGameObject;
    [SerializeField] private int _chunksAmount;
    [SerializeField] private List<GameObject> _allCopyes;


    private void Start()
    {
        for(int i = 0; i < _chunksAmount; i++)
        {
            GameObject chunkCopy = Instantiate(_chunkGameObject);
            chunkCopy.transform.position = Vector3.zero;
            chunkCopy.SetActive(false);
            _allCopyes.Add(chunkCopy);
        }
    }

    public GameObject GetChunk()
    {
        for(int i = 0; i < _allCopyes.Count; i++)
        {
            if(_allCopyes[i].activeSelf == false)
            {
                return _allCopyes[i];
            }
            
        }
        return _allCopyes[0];
    }


    public void DeactivateChunks()
    {
        for(int i = 0; i < _allCopyes.Count; i++)
        {
            _allCopyes[i].gameObject.SetActive(false);
        }
    }
}
