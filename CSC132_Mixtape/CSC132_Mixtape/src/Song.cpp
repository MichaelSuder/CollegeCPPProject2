#include <iostream>
#include "Song.h"

Song::Song() {
	title = "None";
	artist = "None";
	genre = "None";
	time_s = 0;
}

Song::Song(const char* titleIn, const char* artistIn, const char* genreIn, int time_sIn) {
	title = titleIn;
	artist = artistIn;
	genre = genreIn;
	time_s = time_sIn;
}

void Song::Print() {
	std::cout << "Title: " << title << "\nArtist: " << artist << "\nGenre: " << genre << "\nDuration: " << time_s << "s " << "\n" << std::endl;
}