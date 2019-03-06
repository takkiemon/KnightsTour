#include "pch.h"
#include "Board.h"

Board::Board(int size) {
	Initialiseer(size);
}

Board::Board() {
	Initialiseer(6);
}

void Board::Initialiseer(int size) {
	int* boardGrid = new int[size][size];
	//fill board elements with the number 8, which will decrease everytime, when an adjacent move is taken.
}

void Board::Draw(/*int boardSize*/) {
	//for loops to display the board in ascii
	for (int i = 0; i < boardSize * boardSize; i++) {
		
	}
}