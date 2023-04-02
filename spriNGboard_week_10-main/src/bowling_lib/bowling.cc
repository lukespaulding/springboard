#include "bowling.h"

namespace Bowling
{
    int score = 0;
    int current_pins;

    bool complete = false;

    Game::Game(){

    }


    int Game::get_score(){
        return score;
    }

    bool Game::isComplete(){
        return complete;
    }

    void Game::record_ball(int num_pins){
        if (num_pins > 10 || num_pins < 0 || num_pins > current_pins){
            throw "Error in pin input";
        }
        
        current_pins -= num_pins;
    }

    int main(){
        //create a new game 

        Game bowlingGame;

        bowlingGame.record_ball(6);

        bowlingGame.get_score();


    }
}

