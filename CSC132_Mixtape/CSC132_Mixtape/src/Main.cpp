#include <iostream>
#include "Song.h"
#include "Mixtape.h"
#define Log(x) {std::cout << x << std::endl;}



int main() {
	Song s("Maybellene", "Chuck Berry", "Classic Rock", 143);
	Song s1("No Particular Place to Go", "Chuck Berry", "Classic Rock", 163);
	Song s2("Johnny B. Goode", "Chuck Berry", "Classic Rock", 161);
	Song s3("Roll Over Beethoven", "Chuck Berry", "Classic Rock", 184);
	Song s4("Run Rudolph Run", "Chuck Berry", "Classic Rock", 165);
	Mixtape m;
	m.AddSong(s);
	m.AddSong(s1);
	m.AddSong(s2);
	m.AddSong(s3);
	m.AddSong(s4);

	bool isRunning = true;
	int userChoice = 0;
	Log("Welcome to Michael's Playlist");
	// Start of program loop
	while (isRunning) {
		Log("");
		for (int i = 0; i < 5; i++) {
			std::cout << i + 1 << ". Play Track: " << i + 1 << std::endl;
		}
		Log("6. Play All Tracks");
		Log("7. Quit");
		Log("");

		std::cout << "Select an option to play: ";
		std::cin >> userChoice;

		if (userChoice > 0 && userChoice < 6) {
			Log("");
			m.GetSong(userChoice - 1).Print();
		}
		else if (userChoice == 6) {
			Log("");
			for (int i = 0; i < 5; i++) {
				m.GetSong(i).Print();
			}
		}
		else if (userChoice == 7) {
			Log("");
			Log("Quitting. . .");
			isRunning = false;
		}
		else {
			Log("Make Sure Input is a number 1<->8");
		}
	}
}