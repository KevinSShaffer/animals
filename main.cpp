
#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include "str_func.h"
#include "dog.h"

std::string readCsvLine(std::string);

int main()
{
	std::string csvLine = readCsvLine("files\\Dog.csv");

	std::vector<std::string> vec = str_func::split(csvLine, ',');

	for (int i = 0; i < vec.size(); i++)
		std::cout << vec[i] << std::endl;

	cin >> csvLine;

	return 0;
}

std::string readCsvLine(std::string filePath)
{
	std::string line;
	std::ifstream fs;
	fs.open(filePath.c_str());

	if (!std::getline(fs, line))
		throw "Unable to read file.";
	else
		return line;
}