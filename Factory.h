#pragma once
#include <vector>
#include <SFML/Graphics.hpp>
#include "GameObject.h"
#include "InputDispatcher.h"

using namespace sf;

class Factory
{
private:
	RenderWindow* m_Window;
public:
	Factory(RenderWindow* window);
	void loadLevel(
		std::vector<GameObject*>& gameObjects,
		VertexArray& canvas,
		InputDispatcher& inputDispatcher
	);
	Texture* m_Texture;
};
