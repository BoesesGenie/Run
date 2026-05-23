#include "InputDispatcher.h"

InputDispatcher::InputDispatcher(RenderWindow* window)
{
	m_Window = window;
}

void InputDispatcher::dispatchInputEvents()
{
	while (const std::optional event = m_Window->pollEvent())
	{
		if (const auto* key = event->getIf<sf::Event::KeyPressed>())
		{
			if (key->code == Keyboard::Key::Escape)
			{
				m_Window->close();
			}
		}

		for (const auto& ir : m_InputReceivers)
		{
			ir->addEvent(*event);
		}
	}
}

void InputDispatcher::registerNewInputRceiver(InputReceiver* ir)
{
	m_InputReceivers.push_back(ir);
}
