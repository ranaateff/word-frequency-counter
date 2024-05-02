#pragma once
#ifndef TEXTPROCESSOR_H
#define TEXTPROCESSOR_H

#include<map> 
#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
using namespace std;
class TextProcessor
{
	
	vector<pair<string, int>> sortedwords;

public:
	std::map<std::string, int> words;
	TextProcessor(string paragraph);
	void WordSplitter(std::string);
	bool searchWordFrequency(std::string word, std::map<std::string, int> wordFrequency);
	void sortedfreq();
	int rankkingbyitChar(std::string s);
	int rankkingbyfreq(std::string s);
	bool contain(string s);
	string Tolowercase(string sentence);
	void Display();



};
#endif

