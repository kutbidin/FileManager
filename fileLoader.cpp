#include "fileLoader.h"
FileLoader::FileLoader() {}
FileLoader::~FileLoader() {}

std::vector<std::vector<std::string>> FileLoader::loadFile(std::string path, std::regex delimeter)
{
	//std::vector<std::vector<std::string>> v;
	std::string line;
	std::smatch matches;
	std::ifstream inputFile;
	inputFile.open(path);

	if (inputFile.fail()) {
		std::cerr << "open file :[ " <<path<<" ] failed!"<< std::endl;
	}
	else {
		for (line; std::getline(inputFile, line);) {
			std::vector<std::string> rowV;
			while (std::regex_search(line, matches, delimeter)) {
				rowV.push_back(matches.str());
				line = matches.suffix();
			}
			fileVector.push_back(rowV);
		}

	}
	return fileVector;
}

void FileLoader::printFile(std::vector<std::vector<std::string>> v,char ch0,char ch1) {
	for (int r = 0; r < v.size(); r++) {
		for (int c = 0; c < v[r].size(); c++) {
			if (std::stoi(v[r][c]) == 1)
			{
				//system("Color a0");
				std::cerr << ch1;
			}
			else
			{
				//system("Color 2b");
			std::cout <<ch0;
			}

		}
		std::cout << std::endl;
	}
		system("netstat -na|findstr (ES){1}(.)*");
}
