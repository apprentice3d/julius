#include "src/SoundDevice.h"

void SoundDevice_open()
{}
void SoundDevice_close()
{}

void SoundDevice_initChannels(int numChannels, const char filenames[][32])
{}
int SoundDevice_hasChannel(int channel)
{
	return 0;
}
int SoundDevice_isChannelPlaying(int channel)
{
	return 0;
}

void SoundDevice_setMusicVolume(int volumePercentage)
{}
void SoundDevice_setChannelVolume(int channel, int volumePercentage)
{}
void SoundDevice_setChannelPanning(int channel, int left, int right)
{}

void SoundDevice_playMusic(const char *filename)
{}
void SoundDevice_playSoundOnChannel(const char *filename, int channel)
{}
void SoundDevice_playChannel(int channel)
{}
void SoundDevice_stopMusic()
{}
void SoundDevice_stopChannel(int channel)
{}