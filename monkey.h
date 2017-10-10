#ifndef MONKEY_H
#define MONKEY_H
#include <string>
#include "animal.h"
#include "exceptions.h"

class Monkey : public Animal
{
public:
	Monkey(std::string);

	// age
	int GetAge() const;
	void SetAge(int);

	// wild?
	bool GetWild() const;
	void SetWild(bool);

	// home
	std::string GetHome() const;
	void SetHome(std::string);

	// endangered?
	bool GetEndangered() const;
	void SetEndangered(bool);

	std::string toString() const;
	
private:
	int _age;
	bool _wild;
	std::string _home;
	bool _endangered;	
};
#endif