#ifndef HORSE_H
#define HORSE_H
#include <string>
#include "animal.h"
#include "exceptions.h"

class Horse : public Animal
{
public:
	Horse(std::string);

	// manecolor
	std::string GetManeColor() const;
	void SetManeColor(std::string);

	// age
	int GetAge() const;
	void SetAge(int);

	// height
	double GetHeight() const;
	void SetHeight(double);

	std::string toString() const;
	
private:
	std::string _maneColor;
	int _age;
	double _height;	
};
#endif