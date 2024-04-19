#pragma once
#ifndef TEXTPROCESSOR_H
#define TEXTPROCESSOR_H

#include<map> 
#include <string>
class TextProcessor
{
	std::map<std::string, int> words;

public:
	std::map<std::string,int> WordSplitter(std::string);

};
#endif

