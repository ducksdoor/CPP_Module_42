
#include <iostream>
#include <fstream>
#include <cstring> 
#include <string>

#define RED    "\033[0;91m"
#define RESET  "\033[0m"

void ft_error(int argc)
{
	if (argc < 4)
	{
		std::cout << RED << "Error" << std::endl;
		std::cout << RED << "Pepe the replacer needs more arguments to work his magic." << RESET  << std::endl;
	}
	if (argc > 4)
	{
		std::cout << RED << "Error" << std::endl;
		std::cout << RED  << "Pepe the replacer is confused because he needs fewer arguments." << RESET  << std::endl;
	}
}

std::string ft_replace(std::string line, std::string s1, std::string s2)
{
	std::string result;
	size_t		x;
	size_t		found;

	x = 0;
	found = 0;
	while ((found = line.find(s1, x)) != std::string::npos)
	{
		result.append(line, x, found - x);
		result.append(s2);
		x = found + s1.length();
		if (x > line.length())
		{
			std::cout << x << std::endl;
			std::cout << RED << "Error" << std::endl;
			std::cout << RED  << "Pepe the replacer is confused because the line is so sort." << RESET  << std::endl;
			return "NULL";
		}
	}
	result.append(line, x, std::string::npos);
	return result;
}

int main (int argc, char **argv)
{
	std::string line;
	std::string newname;
	std::string new_line;

	if (argc != 4)
	{
		ft_error(argc);
		return 1;
	}
	if (std::string(argv[1]).empty() || std::string(argv[2]).empty() || std::string(argv[2]).empty())
	{
		std::cout << RED << "Error" << std::endl;
		std::cout << RED  << "Pepe says: WTF??, I don't work with empty strings except in the last position" << RESET  << std::endl;
		return 2;
	}
	newname = argv[1];
	std::ifstream inputFile(argv[1]);
	if (!inputFile)
	{
		std::cerr << "Error: coudnt open the files." << std::endl;
		return 1;
	}
	std::ofstream outputFile((newname + ".replace").c_str());
	if (!outputFile)
	{
		std::cerr << "Error: coudnt created the files." << std::endl;
		return 1;
	}
	while (std::getline(inputFile, line))
	{
		new_line = ft_replace(line, argv[2], argv[3]);
		if (new_line == "NULL")
			break;
		outputFile << new_line <<std::endl;
	}
	inputFile.close();
	outputFile.close();
	return 0;
}
