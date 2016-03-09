#ifndef BattleState_H
#define BattleState_H

#include "GameStateConstant.h"
#include "PlayState.h"
#include "BattleContext.h"

class BattleState : public PlayState {
    public:
        void init();
        void cleanup();

        void pause();
        void resume();

        void handleEvents(GameEngine *game);
        void update(GameEngine *game);
        void draw(GameEngine *game);

        void print(ostream &flux) const{
            flux << "BattleState";
        }

        static BattleState* instance() {
            return &m_BattleState;
        }

    private:
        static BattleState m_BattleState;
        sf::Sprite m_sprite;
        sf::Texture m_texture;
        BattleContext *m_context;
};

#endif // BattleState_H