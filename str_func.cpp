
#include <vector>
#include <string>
#include "str_func.h"

std::vector<std::string> str_func::split(std::string sentence, char delimiter)
{
	std::vector<std::string> vec;

	// loop through each letter in sentence
	for (int front = 0, back = 0; back < sentence.length(); ++back, front = back)
	{
		// find next delimiter
		while (back < sentence.length() && sentence[back] != delimiter)
			back++;

		// add substring to vec
		if (back < sentence.length())
			vec.push_back(sentence.substr(front, back - front));
		else
			vec.push_back(sentence.substr(front, sentence.length() - front));
	}

	return vec;
}