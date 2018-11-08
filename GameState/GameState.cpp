#include "GameState.h"
#include<iostream>
void GameState::operator=(GameState const &)
{
}

int GameState::getState()
{
	return state;
}

int GameState::setState(int newState)
{
	state = newState;
	return 0;
}

GameState & GameState::GetInstance()
{
	static GameState* instance = new GameState();
	return *instance;

}

GameState::~GameState()
{
}
GameState::GameState()
{
}
