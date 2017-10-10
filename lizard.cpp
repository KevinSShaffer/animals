
#include <sstream>
#include <string>
#include "lizard.h"
#include "str_func.h"
#include "exceptions.h"

Lizard::Lizard(std::string filePath) :
	Animal(filePath)
{
	std::vector<std::string> params = str_func::split(GetCsvLine(), ',');

	if (params.size() != 5)
		throw UnableToInitialize(GetCsvLine());

	try
	{
		SetName(params[0]);
		SetColor(params[1]);
		SetHabitat(params[2]);
		SetProtected(str_func::toBool(params[3]));
		SetWeight(std::stod(params[4]));	
	}
	catch(std::invalid_argument)
	{
		throw UnableToInitialize(GetCsvLine());
	}
	catch(std::out_of_range)
	{
		throw UnableToInitialize(GetCsvLine());
	}
}

// habitat
std::string Lizard::GetHabitat() const
{
	return _habitat;
}
void Lizard::SetHabitat(std::string value)
{
	_habitat = value;
}

// protected?
bool Lizard::GetProtected() const
{
	return _protected;
}
void Lizard::SetProtected(bool value)
{
	_protected = value;
}

// weight
double Lizard::GetWeight() const
{
	return _weight;
}
void Lizard::SetWeight(double value)
{
	_weight = value;
}

std::string Lizard::toString() const
{
	std::ostringstream s;
	s << GetName() << " the Lizard" << std::endl <<
		"Color:\t" << GetColor() << std::endl <<
		"Habitat:\t" << GetHabitat() << std::endl <<
		"Protected:\t" << (GetProtected() ? "True" : "False") << std::endl <<
		"Weight:\t" << GetWeight() << std::endl;

	return s.str();
}