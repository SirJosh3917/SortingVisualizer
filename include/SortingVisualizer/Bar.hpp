#pragma once
#include <SFML/Graphics/Color.hpp>
#include <stdint.h>
#include <vector>

struct Bar
{
	uint64_t value;
	sf::Color color;
};

std::vector<Bar> toBars(std::vector<uint64_t> values);
