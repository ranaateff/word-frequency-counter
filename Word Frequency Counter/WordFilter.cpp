#include "WordFilter.h"
#include "TextProcessor.h"
#include <map>
#include<iostream>
#include<string>
#include <vector>
using namespace std;





void WordFilter::filter(TextProcessor& textprocess)
{
    vector<string> unnecessary_words = { "he","she","it","is" ,"we","you","are","they","the","a","an","in","on","at","of","or","so","to","for","very" };
    string word;
    char choice = 'l';
    while (choice != 'n')
    {
        cout << "enter the word you want to filter from your paragraph: " << endl;
        cin >> word;
        unnecessary_words.push_back(word);
        cout << "do you want to enter another word? " << endl;
        cout << "enter y for yes or n for no: " << endl;
        cin >> choice;
        if (choice != 'y' && choice != 'n') {
            cout << "you entered wrong character, please try again: " << endl;
            cin >> choice;
        }
    }/// ask user if he want to delete another repeated word from the paragraph
    for (auto it = unnecessary_words.begin(); it != unnecessary_words.end(); it++)
    {
        map<string, int>::iterator iter = textprocess.words.find(*it);
        if (iter == textprocess.words.end()) {
            continue;
        }
        else {
            textprocess.words.erase(*it);
        }
    }

    textprocess.sortedfreq();
}
