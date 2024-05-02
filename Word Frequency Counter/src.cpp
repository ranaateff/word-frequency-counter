#include "HistoryOrganizer.h"
#include "Reader.h"
#include "TextProcessor.h"
#include "WordFilter.h"
#include <iostream>

int main() {
	//HistoryOrganizer t;
	//t.CreateFile();
	//t.CheckFile();
	TextProcessor t("Hi bla bla bla hi test ismail mohammed test eslam basel she he it test yo mahmoud abdelaleem rana maryam ibrahim ");
	WordFilter a;
	a.filter(t);
	//cout<<t.rankkingbyfreq("bla");
	cout<<t.rankkingbyitChar("bla");
	t.Display();

	return 0;
}