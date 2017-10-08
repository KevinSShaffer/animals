
#include <string>

class Animal
{
public:
	// name
	std::string GetName() const;
	void SetName(std::string);

	// color
	std::string GetColor() const;
	void SetColor(std::string);
private:
	std::string _name;
	std::string _color;
};