
#include <sstream>
#include <string>
#include "horse.h"
#include "str_func.h"

Horse::Horse(std::string filePath) :
	Animal(filePath)
{
	std::vector<std::string> params = str_func::split(GetCsvLine(), ',');

	if (params.size() != 5)
		throw "Not enough parameters";

	SetName(params[0]);
	SetColor(params[1]);
	SetManeColor(params[2]);
	SetAge(std::stoi(params[3]));
	SetHeight(std::stod(params[4]));
}

// manecolor
std::string Horse::GetManeColor() const
{
	return _maneColor;
}
void Horse::SetManeColor(std::string value)
{
	_maneColor = value;
}

// age
int Horse::GetAge() const
{
	return _age;
}
void Horse::SetAge(int value)
{
	_age = value;
}

// height
double Horse::GetHeight() const
{
	return _height;
}
void Horse::SetHeight(double value)
{
	_height = value;
}

std::string Horse::toString() const
{
	std::ostringstream s;
	s << GetName() << " the Horse" << std::endl <<
		"Color:\t" << GetColor() << std::endl <<
		"Mane Color:\t" << GetManeColor() << std::endl <<
		"Age:\t" << GetAge() << std::endl <<
		"Height:\t" << GetHeight() << std::endl;

	return s.str();
}