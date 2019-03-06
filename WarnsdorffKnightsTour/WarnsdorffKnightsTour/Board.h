#pragma once

class Board {//the board that displays (1) the position of the knight, (2) the untraversible/traversed spaces, (3) the order of traversed spaces, (4) the number of adjacent possibilities
private:
	int boardSize;
	int boardGrid[10][10];//contains the board. holds 0-8 for the number of available next spaces, holds -1 for traversed and untraversible spaces, holds -2 for the knight
	void Initialiseer(int boardSize);//fill the board with 8's and the knight

public:
	Board();
	Board(int boardSize);
	void Draw(/*int &boardSize*/);
};