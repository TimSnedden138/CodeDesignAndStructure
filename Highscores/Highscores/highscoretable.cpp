#include "Libaries.h"
#include <vector>
#include <iostream>
#include <vector>
#include <iterator>
#include <fstream>
#include <string>
#include <algorithm>
#include <sstream>
std::vector<HighScoreEntry> HighScoreTable::topNNScores(int topRows)
{
	return std::vector<HighScoreEntry>();
}

bool HighScoreTable::pruneBottomNNScores(int bottomRows)
{
	return false;
}

std::vector<std::string> HighScoreTable::split(std::string & line)
{
	std::vector<std::string> result;
	std::stringstream lineStream(line);
	std::string cell;
	while (std::getline(lineStream, cell, ','))
		result.push_back(cell);
	if (!lineStream && cell.empty())
		result.push_back("");
	return result;

}

HighScoreTable::HighScoreTable()
{
}

HighScoreTable::HighScoreTable(std::string fileName)
{
	HighScoreTable hst("highscores.txt");
	std::fstream file("highscores.txt", std::ios::in);
	std::string buffer;
	std::vector <std::string> rtn;
	HighScoreEntry tmpItem(" ");
	while (std::getline(file, buffer))  // iterates until error or EOF
	{
		rtn = split(buffer);
		tmpItem.name = std::stof(rtn.back());
		rtn.pop_back();
		tmpItem.score = std::stoi(rtn.back().c_str());
		rtn.pop_back();
		tmpItem.level = rtn.back();
		rtn.pop_back();
	}
	file.close();

}

HighScoreTable::~HighScoreTable()
{
}