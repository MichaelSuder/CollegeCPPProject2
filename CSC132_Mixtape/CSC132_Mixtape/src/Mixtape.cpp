#include <iostream>
#include "Mixtape.h"


Mixtape::Mixtape() {}

Song Mixtape::GetSong(int index) {
	return mixtape[index];
}

void Mixtape::AddSong(Song s) {
	if (count < 5 && count > -1) {
		mixtape[count] = s;
		count++;
	}
}


void Mixtape::RemoveSong(int i) {
	if (count < 5 && count > -1) {
		mixtape[i] = Song::Song();
		count--;
	}
}