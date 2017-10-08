
#include "animal.h"
#include <string>

// name
std::string Animal::GetName() const
{
	return _name;
}
void Animal::SetName(std::string value)
{
	_name = value;
}

// color
std::string Animal::GetColor() const
{
	return _color;
}
void Animal::SetColor(std::string value)
{
	_color = value;
}
