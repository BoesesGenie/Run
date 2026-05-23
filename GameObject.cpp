#include "GameObject.h"
#include "Update.h"
#include "Graphics.h"

using namespace sf;

void GameObject::addComponent(std::shared_ptr<Component> component) {
	m_Components.push_back(component);
}

void GameObject::update(float elapsedTime) {
	for (auto component : m_Components) {
		if (component->m_IsUpdate)
		{
			static_pointer_cast<Update>(component)->update(elapsedTime);
		}
	}
}

void GameObject::draw(VertexArray& canvas) {
	for (auto component : m_Components) {
		if (component->m_IsGraphics)
		{
			static_pointer_cast<Graphics>(component)->draw(canvas);
		}
	}
}
