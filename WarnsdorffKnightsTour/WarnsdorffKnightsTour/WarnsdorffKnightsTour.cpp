// WarnsdorffKnightsTour.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <conio.h>
#include <vector>

using namespace std;


int boardSize;
int frameNumber;
int knightX, knightY;
vector<int> availableMoves;
vector<vector<int> > board;

void InitBoard(int boardSize, vector<vector<int> >& board);
void DrawBoard(int boardSize, vector<vector<int> >& board);
void CheckAvailableMoves(int boardSize, vector<vector<int> >& board, vector<int> moves, int& X, int& Y);
void MoveKnight(int boardSize, vector<vector<int> >& board, vector<int> moves, int& X, int& Y);
void DecreaseAdjacentMoves(int boardSize, vector<vector<int> >& board, vector<int> moves, int& X, int& Y);

int main()
{
	frameNumber = 1;
    cout << "boardSize: "; 
	cin >> boardSize;
	cout << "X of Knight: ";
	cin >> knightX;
	cout << "Y of Knight: ";
	cin >> knightY;

	InitBoard(boardSize, board);
	board[knightX][knightY] = -2;

	//create a loop, in which the board updates and moves the knight around according to warnsdorff algorithm and wait for player input to continue to next frame
	for (int i = 0; i < boardSize * boardSize; i++) {
		cout << " This is frame: " << frameNumber << "\n";
		DrawBoard(boardSize, board);
		cout << "press any key to go to next frame\n";
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
	vector<int> v(0);
	for (int j = 0; j < boardSize; j++) {
		for (int i = 0; i < boardSize; i++) {
			v.push_back(8);
		}
		boardGrid.push_back(v);
	}
}

void DrawBoard(int boardSize, vector<vector<int> >& boardGrid) {
	for (int j = 0; j < boardSize; j++) {
		for (int i = 0; i < boardSize; i++) {
			if (boardGrid[i][j] >= 0) {
				cout << boardGrid[i][j];
			}
			else if (boardGrid[i][j] == -2) {
				cout << "K";
			}
		}
		cout << "\n";
	}
}

void CheckAvailableMoves(int boardSize, vector<vector<int> >& board, vector<int> moves, int& kx, int& ky) {
	moves.clear();
	//going clock-wise
	if (kx < boardSize - 1 && ky > 1 && board[kx + 1][ky - 2] >= 0) {
		moves.push_back(kx + 1);
		moves.push_back(ky - 2);
	}
	if (kx < boardSize - 2 && ky > 0 && board[kx + 2][ky - 1] >= 0) {
		moves.push_back(kx + 2);
		moves.push_back(ky - 1);
	}
	if (kx < boardSize - 2 && ky < boardSize - 1 && board[kx + 2][ky + 1] >= 0) {
		moves.push_back(kx + 2);
		moves.push_back(ky + 1);
	}
	if (kx < boardSize - 1 && ky < boardSize - 2 && board[kx + 1][ky + 2] >= 0) {
		moves.push_back(kx + 1);
		moves.push_back(ky + 2);
	}
	if (kx > 0 && ky < boardSize - 2 && board[kx + 1][ky - 2] >= 0) {
		moves.push_back(kx - 1);
		moves.push_back(ky + 2);
	}
	if (kx > 1 && ky < boardSize - 1 && board[kx + 1][ky - 2] >= 0) {
		moves.push_back(kx - 2);
		moves.push_back(ky + 1);
	}
	if (kx > 1 && ky > 0 && board[kx + 1][ky - 2] >= 0) {
		moves.push_back(kx - 2);
		moves.push_back(ky - 1);
	}
	if (kx > 0 && ky > 1 && board[kx + 1][ky - 2] >= 0) {
		moves.push_back(kx - 1);
		moves.push_back(ky - 2);
	}
}

void MoveKnight(int boardSize, vector<vector<int> >& board, vector<int> moves, int& kx, int& ky)
{
	int tempLowestNumber;
	int currentBestX;
	int currentBestY;

	for (int i = 0; i < moves.size(); i += 2) {

	}
}

void DecreaseAdjacentMoves(int boardSize, vector<vector<int>>& board, vector<int> moves, int& kx, int& ky)
{
	
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
