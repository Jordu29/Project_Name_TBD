#ifndef INTROSTATE_H
#define INTROSTATE_H

#include "GameStateConstant.h"
#include "GameState.h"
#include "IntroContext.h"

class IntroState : public GameState {
    public:
        void init();
        void cleanup();

        void pause();
        void resume();

        void handleEvents(GameEngine *game);
        void update(GameEngine *game);
        void draw(GameEngine *game);

        void print(ostream &flux) const{
            flux << "IntroState";
        }

        static IntroState* instance() {
            return &m_IntroState;
        }

    private:
        static IntroState m_IntroState;
        sf::Sprite m_sprite;
        sf::Texture m_texture;
        IntroContext *m_context;
};

#endif // INTROSTATE_H
