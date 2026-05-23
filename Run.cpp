#pragma once
#include "SFML/Graphics.hpp"
#include <vector>
#include "GameObject.h"
#include "Factory.h"
#include "InputDispatcher.h"

using namespace std;
using namespace sf;

int main()
{
	RenderWindow window(VideoMode::getDesktopMode(), "Booster", sf::State::Fullscreen);
	VertexArray canvas(PrimitiveType::Triangles, 6);
	InputDispatcher inputDispatcher(&window);
	vector<GameObject> gameObjects;
	Factory factory(&window);

	factory.loadLevel(gameObjects, canvas, inputDispatcher);

	Clock clock;
	const Color BACKGROUND_COLOR(100, 100, 100, 255);

	while (window.isOpen())
	{
		float tymeTakenInSeconds = clock.restart().asSeconds();

		inputDispatcher.dispatchInputEvents();
		window.clear(BACKGROUND_COLOR);

		for (auto& gameObject : gameObjects)
		{
			gameObject.update(tymeTakenInSeconds);
		}

		for (auto& gameObject : gameObjects)
		{
			gameObject.draw(canvas);
		}

		window.display();
	}

	return 0;
}
