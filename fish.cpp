
#include <sstream>
#include <string>
#include <stdexcept>
#include "fish.h"
#include "str_func.h"
#include "exceptions.h"

Fish::Fish(std::string filePath) :
	Animal(filePath)
{
	std::vector<std::string> params = str_func::split(GetCsvLine(), ',');

	if (params.size() != 5)
		throw UnableToInitialize(GetCsvLine());

	try
	{
		SetName(params[0]);
		SetColor(params[1]);
		SetFreshwater(str_func::toBool(params[2]));
		SetHabitat(params[3]);
		SetPredator(str_func::toBool(params[4]));
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

// freshwater?
bool Fish::GetFreshwater() const
{
	return _freshwater;
}
void Fish::SetFreshwater(bool value)
{
	_freshwater = value;
}

// habitat
std::string Fish::GetHabitat() const
{
	return _habitat;
}
void Fish::SetHabitat(std::string value)
{
	_habitat = value;
}

// predator?
bool Fish::GetPredator() const
{
	return _predator;
}
void Fish::SetPredator(bool value)
{
	_predator = value;
}

std::string Fish::toString() const
{
	std::ostringstream s;
	s << GetName() << " the Fish" << std::endl <<
		"Color:\t" << GetColor() << std::endl <<
		"IsFreshwater:\t" << (GetFreshwater() ? "True" : "False") << std::endl <<
		"Habitat:\t" << GetHabitat() << std::endl <<
		"IsPredator:\t" << (GetPredator() ? "True" : "False") << std::endl;

	return s.str();
}