#pragma once
#include <SFML/Graphics.hpp>
#include "Component.h"
#include "Update.h"

using namespace sf;

class Graphics :
    public Component
{
public:
	Graphics();
	virtual void assemble(
		VertexArray& canvas,
		std::shared_ptr<Update> genericUpdate,
		IntRect texCoords
	) = 0;
	virtual void draw(VertexArray& canvas) = 0;
};
