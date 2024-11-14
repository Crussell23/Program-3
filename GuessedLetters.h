#ifndef GUESSEDLETTERS_H
#define GUESSEDLETTERS_H
#include <vector>
#include <string>

using namespace std;
class GuessedLetters
{
    private:
        vector <char> m_guessed;

    public:
        GuessedLetters();
        string getLetters();
        void addLetter(char letter);
};

#endif // GUESSEDLETTERS_H
