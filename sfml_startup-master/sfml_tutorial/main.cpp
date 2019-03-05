#include <SFML\Graphics.hpp>;
#include "ChessBoard.h";
using namespace sf;

int main()
{
	RenderWindow window(VideoMode(512, 512), "SFML Tutorial", Style::Titlebar | Style::Close);
	window.setFramerateLimit(60);	

	ChessBoard board(window);
	return 0;
}