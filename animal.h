#ifndef ANIMAL_H
#define ANIMAL_H
#include <string>

class Animal
{
public:
	Animal(std::string);

	std::string GetCsvLine() const;

	// name
	std::string GetName() const;
	void SetName(std::string);

	// color
	std::string GetColor() const;
	void SetColor(std::string);

	std::string toString() const;
private:
	std::string _csvLine;
	std::string _name;
	std::string _color;
};
#endif