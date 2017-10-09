
#include <sstream>
#include <string>
#include "dog.h"
#include "str_func.h"

Dog Dog::Create(std::string csvLine)
{
	Dog dog;
	std::vector<std::string> params = str_func::split(csvLine, ',');

	if (params.size() != 5)
		throw "Not enough parameters";

	dog.SetName(params[0]);
	dog.SetBreed(params[1]);
	dog.SetAge(std::stoi(params[2]));
	dog.SetColor(params[3]);
	dog.SetWeight(std::stod(params[4]));

	return dog;
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

std::string Dog::toString() const
{
	std::ostringstream s;
	s << GetName() << " the Dog" << std::endl <<
		"Breed:\t" << GetBreed() << std::endl <<
		"Age:\t" << GetAge() << std::endl <<
		"Color:\t" << GetColor() << std::endl <<
		"Weight:\t" << GetWeight() << std::endl;

	return s.str();
}