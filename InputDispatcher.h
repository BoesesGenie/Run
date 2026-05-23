#pragma once
#include <SFML/Graphics.hpp>
#include "InputRceiver.h"

using namespace sf;

class InputDispatcher
{
private:
	RenderWindow* m_Window;
	vector <InputRceiver*> m_InputRceivers;
public:
	InputDispatcher(RenderWindow* window);
	void dispatchInputEvents();
	void registerNewInputRceiver(InputRceiver* ir);
};
