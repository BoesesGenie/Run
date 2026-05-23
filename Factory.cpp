#include "Factory.h"
#include <iostream>

Factory::Factory(RenderWindow* window)
{
	m_Window = window;
	m_Texture = new Texture();
	
	if (!m_Texture->loadFromFile("graphics/texture.png"))
	{
		std::cerr << "Failed to load texture" << std::endl;
	}
}

void Factory::loadLevel(
	std::vector<GameObject>& gameObjects,
	VertexArray& canvas,
	InputDispatcher& inputDispatcher
)
{
	// TODO
}
