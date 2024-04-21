#pragma once
#ifndef READER_H
#define READER_H


#include <fstream>
#include <string>
#include <iostream>
class Reader
{
	std::fstream paragraphFile;
	std::string paragraphPath;
	std::string line;
	std::string paragraph;
public:
	Reader();
	Reader(std::string&);
	std::string read();
	void write(std::string&);
	~Reader();

};
#endif

