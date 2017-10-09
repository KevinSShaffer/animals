
#include <sstream>
#include <string>
#include "fish.h"
#include "str_func.h"

Fish Fish::Create(std::string csvLine)
{
	Fish fish;
	std::vector<std::string> params = str_func::split(csvLine, ',');

	if (params.size() != 5)
		throw "Not enough parameters";

	fish.SetName(params[0]);
	fish.SetColor(params[1]);
	fish.SetFreshwater(str_func::toBool(params[2]));
	fish.SetHabitat(params[3]);
	fish.SetPredator(str_func::toBool(params[4]));

	return fish;
}

// breed
bool Fish::GetFreshwater() const
{
	return _freshwater;
}
void Fish::SetFreshwater(bool value)
{
	_freshwater = value;
}

// age
std::string Fish::GetHabitat() const
{
	return _habitat;
}
void Fish::SetHabitat(std::string value)
{
	_habitat = value;
}

// weight
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