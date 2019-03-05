#ifndef _KNIGHT_ //make sure that this header file is only defined once
#define _KNIGHT_
#include "SpriteRenderer.h";
	//if not public, the inheriting of SpriteRenderer would make this Update function inaccessible
	//for further information, see https://bit.ly/2OGCENo and https://bit.ly/2GcOk9S
	class Knight : public SpriteRenderer
	{
	private:

	public:
		//override the Update function from SpriteRenderer
		void Update(Time deltaTime);
	};
#endif