#include "HistoryOrganizer.h"
HistoryOrganizer::HistoryOrganizer() {
	this->now = time(0);
	this->localtm = localtime(&now);
}


bool HistoryOrganizer::CheckFile() {
	std::ifstream file(this->directoryPath + "/" + asctime(this->localtm));
	return file.good();
}

void HistoryOrganizer::CreateFile() {
	std::ifstream file(this->directoryPath);
	file.open("test.txt");
}
