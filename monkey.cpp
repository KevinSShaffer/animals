
#include <sstream>
#include <string>
#include <stdexcept>
#include "monkey.h"
#include "str_func.h"
#include "exceptions.h"

Monkey::Monkey(std::string filePath) :
	Animal(filePath)
{
	std::vector<std::string> params = str_func::split(GetCsvLine(), ',');

	if (params.size() != 6)
		throw UnableToInitialize(GetCsvLine());

	try
	{
		SetName(params[0]);
		SetColor(params[1]);
		SetAge(std::stoi(params[2]));
		SetWild(str_func::toBool(params[3]));
		SetHome(params[4]);
		SetEndangered(str_func::toBool(params[5]));
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

// age
int Monkey::GetAge() const
{
	return _age;
}
void Monkey::SetAge(int value)
{
	_age = value;
}

// wild?
bool Monkey::GetWild() const
{
	return _wild;
}
void Monkey::SetWild(bool value)
{
	_wild = value;
}

// home
std::string Monkey::GetHome() const
{
	return _home;
}
void Monkey::SetHome(std::string value)
{
	_home = value;
}

// endangered?
bool Monkey::GetEndangered() const
{
	return _endangered;
}
void Monkey::SetEndangered(bool value)
{
	_endangered = value;
}

std::string Monkey::toString() const
{
	std::ostringstream s;
	s << GetName() << " the Monkey" << std::endl <<
		"Color:\t" << GetColor() << std::endl <<
		"Age:\t" << GetAge() << std::endl <<
		"IsWild:\t" << (GetWild() ? "True" : "False") << std::endl <<
		"Home:\t" << GetHome() << std::endl <<
		"IsEndangered:\t" << (GetEndangered() ? "True" : "False") << std::endl;

	return s.str();
}