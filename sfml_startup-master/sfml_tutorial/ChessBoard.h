#ifndef _CHESSBOARD_
#define _CHESSBOARD_

#include <SFML\Graphics.hpp>
#include "Knight.h"

using namespace sf;
using std::vector;

	class ChessBoard
	{
	private:
		vector<RectangleShape>		_tiles;
		vector<SpriteRenderer*>		_sprites;
		Knight						_knightRenderer;
		Clock						_deltaClock;

		void Update();
		void InitializeTiles(int w, int h);
		void Draw(RenderWindow &window);
		void DrawChessBoard(RenderWindow &window);

	public:
		ChessBoard(RenderWindow &window); //constructor
		~ChessBoard(); //destructor
	};

#endif