#include "GameEngine/GameEngine.h"
#include "Constants/GameStateConstant.h"
#include "GameCharacter/Characters/Player/Inventory.h"
#include "GameCharacter/Characters/Player/Player.h"
#include "GameCharacter/Characters/Ennemy/Ennemy.h"
#include "GameCharacter/Items/ConsumableItem.h"
#include <vector>
#include <iostream>
#include <array>

int main(int argc, char *argv[]){
    // Player tests
    /*
    std::string j = "jordy";
    Inventory* i = new Inventory();
    std::array<int,2> a = {1,1};
    std::vector<Quest> questbook;
    Player* Jordy = new Player(j,1,1,1,male,*i,a,questbook,100,0,0,1);
    Jordy->print();
    */
    /*ConsumableItem* i = new ConsumableItem(4002);

    std::cout << i->getID() << " " << i->getName() << " - " << i->getDescription() <<
    " | Buy : " << i->getBuyValue() << " - Sell : " << i->getSellValue() << std::endl <<
    "Health bonus : " << i->getHealthBonus() << std::endl;*/
    std::string j = "jordy";
    Ennemy * e =  new Ennemy(j,0,0,0,male,1,0,0,1); e->print();
    GameEngine game;
    game.init("Alter Ego");

    game.changeState(GameStateConstant::IntroState);

    while(game.isRunning()){
		game.handleEvents();
		game.update();
		game.draw();
	}
	game.cleanup();
	cout << "The Real End" << endl;

	return 0;
}
