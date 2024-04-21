#include "HistoryOrganizer.h"
#include "Reader.h"
#include "TextProcessor.h"
#include "WordFilter.h"
#include <iostream>
int main() {
	Reader r;
	std::string a = r.read();
	std::cout << a;
	return 0;
}