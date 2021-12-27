#pragma once
#ifndef Mixtape_h
#define Mixtape_h
#include "Song.h"

class Mixtape {
	Song mixtape[5];
	int count = 0;

public:
	Mixtape();
	
	void AddSong(Song s);
	void RemoveSong(int i);
	Song GetSong(int index);

};



#endif // !Mixtape_h
