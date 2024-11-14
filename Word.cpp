#include "Word.h"
#include <algorithm> //for find
using namespace std;

Word::Word(string word) : m_word(word)
{
    for (char c : m_word)
    {
        m_currentWord.push_back('_');
    }
}

string Word::getWord()
{
    string w;
    for (char c : m_currentWord)
        {
            w += c;
            w += ' ';
        }
        return w;
}

void Word::addLetter(char letter)
{
    for (size_t i = 0; i< m_word.size(); ++i)
    {
        if(m_word[i] == letter)
           {
               m_currentWord[i] = letter;
           }
    }
}

bool Word:: findLetter(char letter)
{
    size_t pos = m_word.find(letter);
    if (pos != string::npos)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool Word:: solved()
{
    return find(m_currentWord.begin(), m_currentWord.end(), '_')
        == m_currentWord.end();

}
