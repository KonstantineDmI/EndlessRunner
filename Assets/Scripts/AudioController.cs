using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AudioController : MonoBehaviour
{
    [SerializeField] private AudioSource _audioSource;
    [SerializeField] private AudioClip[] _audioClips;

    private int _randomTrack;

    private void Start()
    {
        _randomTrack = Random.Range(0, _audioClips.Length);
        _audioSource.clip = _audioClips[_randomTrack];
        _audioSource.Play();
    }

}
