#include "Reader.h"

Reader::Reader() {
	this->paragraphPath = "default.txt";
}
Reader::Reader(std::string& paragraphPath){
	this->paragraphPath = paragraphPath;
}

std::string Reader::read() {
	paragraphFile.open(paragraphPath, std::ios::in);
	try {
		if (paragraphFile.is_open()) {
			while (std::getline(paragraphFile, line))
				paragraph += line + "\n";
		}	
		else 
			throw std::runtime_error("Error: File is not open");
	}
	catch (const std::exception& e) {
		std::cout << e.what();
	}
	return paragraph;
}

void Reader::write(std::string& paragraph) {
	paragraphFile.open(paragraphPath, std::ios::out);
	try {
		for (int i = 0; !paragraph.empty(); ++i)
			paragraphFile << paragraph[i];
	}
	catch (const std::exception& e) {
		std::cout << e.what();
	}
	paragraphFile.close();
}
Reader::~Reader() {
	if (paragraphFile.is_open())
		paragraphFile.close();
}

