#include <vector>
#include <iostream>
#include <vector>
#include <iterator>
#include <fstream>
#include <string>
#include <algorithm>
#include <sstream>
#include"Libaries.h"

int main() {
	HighScoreTable hst("highscores.txt");
	std::vector<HighScoreEntry> topScores = hst.topNNScores(10);

	hst.pruneBottomNNScores(3);
}
