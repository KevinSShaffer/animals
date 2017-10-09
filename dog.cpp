
#include <sstream>
#include <string>
#include "dog.h"
#include "str_func.h"

Dog::Dog(std::string filePath) :
	Animal(filePath)
{
	std::vector<std::string> params = str_func::split(GetCsvLine(), ',');

	if (params.size() != 5)
		throw "Not enough parameters";

	SetName(params[0]);
	SetBreed(params[1]);
	SetAge(std::stoi(params[2]));
	SetColor(params[3]);
	SetWeight(std::stod(params[4]));	
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