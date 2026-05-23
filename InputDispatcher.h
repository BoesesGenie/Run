#pragma once
#include <SFML/Graphics.hpp>
#include "InputReceiver.h"

using namespace sf;

class InputDispatcher
{
private:
	RenderWindow* m_Window;
	std::vector <InputReceiver*> m_InputReceivers;
public:
	InputDispatcher(RenderWindow* window);
	void dispatchInputEvents();
	void registerNewInputRceiver(InputReceiver* ir);
};
