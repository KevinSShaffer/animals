
#include <string>
#include "animal.h"

class Dog : public Animal
{
public:
	static Dog Create(std::string);

	// breed
	std::string GetBreed() const;
	void SetBreed(std::string);

	// age
	int GetAge() const;
	void SetAge(int);

	// weight
	double GetWeight() const;
	void SetWeight(double);
	
private:
	std::string _breed;
	int _age;
	double _weight;		
};