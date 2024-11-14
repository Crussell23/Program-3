#ifndef GAMESTATE_H
#define GAMESTATE_H
#include <string>
#include <vector>

using namespace std;

class GameState
{
    private:
        vector<string> m_state;
        vector <string> m_allStates = {
        "PLATFORM", "HEAD", "BODY", "LEFT_ARM", "RIGHT_ARM", "LEFT_LEG", "RIGHT_LEG"
        };
        size_t m_nextState;

    public:
        GameState();
        string getState();
        void addState();
        bool gameOver();


};

#endif // GAMESTATE_H
