#ifndef LIZARD_H
#define LIZARD_H
#include <string>
#include "animal.h"
#include "exceptions.h"

class Lizard : public Animal
{
public:
	Lizard(std::string);

	// habitat
	std::string GetHabitat() const;
	void SetHabitat(std::string);

	// protected?
	bool GetProtected() const;
	void SetProtected(bool);

	// weight
	double GetWeight() const;
	void SetWeight(double);

	std::string toString() const;
	
private:
	std::string _habitat;
	bool _protected;
	double _weight;
};
#endif