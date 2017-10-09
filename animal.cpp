
#include <sstream>
#include <string>
#include <fstream>
#include "animal.h"

Animal::Animal(std::string filePath)
{
	std::string line;
	std::ifstream fs;
	fs.open(filePath.c_str());

	if (!std::getline(fs, line))
		throw "Unable to read file.";
	else
		_csvLine = line;	
}

std::string Animal::GetCsvLine() const
{
	return _csvLine;
}

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

std::string Animal::toString() const
{
	std::ostringstream s;
	s << GetName() << " the Animal" << std::endl <<
		"Color:\t" << GetColor() << std::endl;

	return s.str();
}
