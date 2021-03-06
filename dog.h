#ifndef DOG_H
#define DOG_H
#include <string>
#include "animal.h"
#include "exceptions.h"

class Dog : public Animal
{
public:
	Dog(std::string);

	// breed
	std::string GetBreed() const;
	void SetBreed(std::string);

	// age
	int GetAge() const;
	void SetAge(int);

	// weight
	double GetWeight() const;
	void SetWeight(double);

	std::string toString() const;
	
private:
	std::string _breed;
	int _age;
	double _weight;		
};
#endif