#ifndef WORD_H
#define WORD_H
#include "GuessedLetters.h" //Include class
#include <string>
#include <vector>

using namespace std;

class Word
{
    private:
        vector<char> m_currentWord;
        string m_word;

    public:
        Word(string word);
        string getWord();
        void addLetter(char letter);
        bool findLetter(char letter);
        bool solved();

};

#endif // WORD_H
