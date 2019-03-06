#include "Board.h";

Board::Board(int size) {
	Initialiseer(size);
}

Board::Initialiseer(int size) {
	boardGrid = int[size][size];
	//boardGrid = int[boardSize][boardSize];
	//fill board elements with the number 8, which will decrease everytime, when an adjacent move is taken.
}

void Board::Draw(/*int boardSize*/) {
	//for loops to display the board in ascii
	for (int i = 0; i < boardSize * boardSize; i++) {
		
	}
}