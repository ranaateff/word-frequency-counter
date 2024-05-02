#pragma once
#ifndef HISTORYORGANIZER_H
#define HISTORYORGANIZER_H
#include "Reader.h"
#include <stack>

#include <string>
#include <chrono>
#include <ctime>
#pragma warning(disable : 4996)
class HistoryOrganizer
{
	std::stack<std::string> history;
	const std::string directoryPath = "word_freq/Word Frequency Counter/Files";
	std::string fileName;
	std::time_t now;
	std::tm* localtm;
	std::fstream newFile;

	/*
		
	*/
public:
	HistoryOrganizer();
	bool CheckFile();
	void CreateFile();
	void SaveFile();



};
#endif
