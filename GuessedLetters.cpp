#include "GuessedLetters.h"
#include <string>
#include <algorithm>


using namespace std;

GuessedLetters::GuessedLetters()
{

}

string GuessedLetters::getLetters()
{
    return string(m_guessed.begin(), m_guessed.end());
}

void GuessedLetters::addLetter(char letter)
{
    if (find(m_guessed.begin(), m_guessed.end(), letter) == m_guessed.end())
    {
        m_guessed.push_back(letter);
    }
}
