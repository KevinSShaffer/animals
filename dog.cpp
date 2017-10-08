
#include "dog.h"
#include <string>

Dog Dog::Create(std::string csvLine)
{
	return Dog();
}

// breed
std::string Dog::GetBreed() const
{
	return _breed;
}
void Dog::SetBreed(std::string value)
{
	_breed = value;
}

// age
int Dog::GetAge() const
{
	return _age;
}
void Dog::SetAge(int value)
{
	_age = value;
}

// weight
double Dog::GetWeight() const
{
	return _weight;
}
void Dog::SetWeight(double value)
{
	_weight = value;
}