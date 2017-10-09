#ifndef FISH_H
#define FISH_H
#include <string>
#include "animal.h"

class Fish : public Animal
{
public:
	Fish(std::string);

	// freshwater?
	bool GetFreshwater() const;
	void SetFreshwater(bool);

	// habitat
	std::string GetHabitat() const;
	void SetHabitat(std::string);

	// predator?
	bool GetPredator() const;
	void SetPredator(bool);

	std::string toString() const;
	
private:
	bool _freshwater;
	std::string _habitat;
	bool _predator;		
};
#endif