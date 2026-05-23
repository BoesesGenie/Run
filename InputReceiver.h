#pragma once
#include <SFML/Graphics.hpp>

using namespace sf;

class InputReceiver
{
private:
	std::vector <Event> m_Events;
public:
	void addEvent(const Event& event);
	std::vector<Event>& getEvents();
	void clearEvents();
};
