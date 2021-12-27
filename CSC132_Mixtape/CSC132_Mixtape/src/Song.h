#pragma once
#ifndef Song_h
#define Song_h

class Song {
	const char* title = "";
	const char* artist = "";
	const char* genre = "";
	int time_s;

public:
	Song();
	Song(const char* title, const char* artist, const char* genre, int time_s);
	
	void Print();
	const char* GetTitle()  { return title;  }
	const char* GetArtist() { return artist; }
	const char* GetGenre()  { return genre;  }
	int GetTime()			{ return time_s; }

};




#endif // !Song_h
