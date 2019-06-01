#include "Knight.h";
using namespace std;
#include <iostream>

void Knight::Update(Time deltaTime)
{
	randomVariable = 2;
	//printf("Kniggit::Update %d %d\n", _position.y, randomVariable);
	std::cout << _position.x << ", " << _position.y ;
	
	//call the base class's Update function
	SpriteRenderer::Update(deltaTime);
	//update the knight's position
	if (Keyboard::isKeyPressed(Keyboard::D)) {
		_position += Vector2f(10, 10);
	}
	printf("\n");
}