#pragma once
#include<iostream>
#include<vector>
#include<string>
#include<regex>
#include<fstream>

class FileLoader {

private:
public:
	std::vector<std::vector<std::string>> fileVector;
	FileLoader();
	~FileLoader();
	void printFile(std::vector<std::vector<std::string>>,char ch0,char ch1);

	std::vector<std::vector<std::string>> loadFile(std::string path, std::regex delimeter);
};