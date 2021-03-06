#ifndef PLAYCONTEXT_H
#define PLAYCONTEXT_H

#include "Constants/StatsConstant.h"
#include "Constants/ReturnConstant.h"
#include "GameCharacter/Character.h"
#include "World/Map.h"
#include <vector>
#include <iostream>
using namespace std;

class PlayContext {

    public:
        ~PlayContext() {}
        void init();
        int loadFromSave(int id);
        int getCurrentMapID(){
            return m_currentMapID;
        }
        static PlayContext* instance() {
            return &m_PlayContext;
        }

    private:
        static PlayContext m_PlayContext;
        static Character m_player;
        static int m_currentMapID;
};

#endif // PLAYCONTEXT_H
