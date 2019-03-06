// WarnsdorffKnightsTour.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <vector>
#include "Board.h"
#include "Knight.h"

using namespace std;

Knight knight;

int boardSize;

int main()
{
    cout << "boardSize: "; 
	cin >> boardSize;
	Board chessBoard = Board(boardSize);
	knight = Knight();

	//create a loop, in which the board updates and moves the knight around according to warnsdorff algorithm and wait for player input to continue to next frame
	/*for (int i = 0; i < boardSize * boardSize; i++) {
		knight.MoveKnight();
		chessBoard.Draw(/*boardSize*//*);
	}*/

	//knight checks for available moves and the numbers they hold (don't check out of bounds)
	//knight chooses a space with the lowest number above 0
	//knight is moved to that space
	//previous space now holds -1
	//current space now holds -2
	//all adjacent move-spaces are lowered by one, except if they're -1
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
