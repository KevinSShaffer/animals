#ifndef STR_FUNC_H
#define STR_FUNC_H 
#include <vector>
#include <string>

namespace str_func
{
	std::vector<std::string> split(std::string, char);
	std::string toLower(std::string);
	bool toBool(std::string);
}
#endif