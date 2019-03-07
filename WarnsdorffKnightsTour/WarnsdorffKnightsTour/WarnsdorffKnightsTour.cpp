// WarnsdorffKnightsTour.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <conio.h>
#include <vector>

using namespace std;


int boardSize;
int frameNumber;
vector<vector<int> > board;

void InitBoard(int boardSize, vector<vector<int> >& board);
void DrawBoard(int boardSize, vector<vector<int> > board);


int main()
{
	frameNumber = 1;
    cout << "boardSize: "; 
	cin >> boardSize;

	InitBoard(boardSize, board);

	//create a loop, in which the board updates and moves the knight around according to warnsdorff algorithm and wait for player input to continue to next frame
	for (int i = 0; i < boardSize * boardSize; i++) {
		cout << " This is frame: " << frameNumber << "\n";
		DrawBoard(boardSize, board);
		cout << "press any key to go to next frame";
		char input = _getch();//just to stall the 'animation'
		frameNumber++;
	}

	//knight checks for available moves and the numbers they hold (don't check out of bounds)
	//knight chooses a space with the lowest number above 0
	//knight is moved to that space
	//previous space now holds -1
	//current space now holds -2
	//all adjacent move-spaces are lowered by one, except if they're -1
}

void InitBoard(int boardSize, vector<vector<int> >& boardGrid) {
	vector<int> v(boardSize);
	cout << "test001\n";
	for (int j = 0; j < boardSize; j++) {
		for (int i = 0; i < boardSize; i++) {
			cout << "test002 " << i << " " << j << "\n";
			v.push_back(i * 10 + j);
		}
		boardGrid.push_back(v);
	}
}

void DrawBoard(int boardSize, vector<vector<int> > boardGrid) {
	cout << "test003\n";
	for (int j = 0; j < boardSize; j++) {
		for (int i = 0; i < boardSize; i++) {
			cout << "test004 " << i << " " << j << "\n";
			cout << boardGrid[i][j];
		}
		cout << "\n";
	}
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
