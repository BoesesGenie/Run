#pragma once
#include <SFML/Graphics.hpp>

using namespace sf;
using namespace std;

class InputReceiver
{
private:
	vector <Event> m_Events;
public:
	void addEvent(const Event& event);
	vector<Event>& getEvents();
	void clearEvents();
};
