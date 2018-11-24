#pragma once

#include<iostream>
#include<string>
#include<vector>
#include<regex>
#include"fileLoader.h"
#include"CImg.h"
FileLoader* fileLoader;
int main() {
	fileLoader = new FileLoader();
	std::regex delim("[[:d:]]+");
	std::string filepath = "assets/level1.txt";
	std::vector<std::vector<std::string>> v;
	v=fileLoader->loadFile(filepath, delim);
	fileLoader->printFile(v,' ','*');
	
	std::cin.get();
	return 0;
}