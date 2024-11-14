#include "GameState.h"

GameState::GameState() : m_nextState(0)
{

}

string GameState::getState()
{
    string result;
    for (const auto& state : m_state)
    {
        result+= state + " ";
    }
    return result;
}

void GameState:: addState()
{
    if (m_nextState < m_allStates.size())
    {
        m_state.push_back(m_allStates[m_nextState]);
        ++m_nextState;
    }
}

bool GameState:: gameOver()
{
    return m_nextState >= m_allStates.size();
}
