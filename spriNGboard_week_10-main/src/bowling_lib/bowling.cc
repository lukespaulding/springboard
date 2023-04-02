#include "bowling.h"

namespace Bowling
{
    int score = 0;
    int current_pins = 10;
    int frame = 0;
    int roll = 0;
    int round_scores[10][2];
    bool strike = false;
    bool complete = false;

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
        //Strike
        if((current_pins - num_pins == 0) && (roll == 0)){
            round_scores[frame][roll] = num_pins;
            round_scores[frame][roll+1] = 0;
            frame++;
            roll = 0; 
        }
        //We will handle Spares in the total calculation logic, we don't need to store the info now.
        else {
            round_scores[frame][roll] = num_pins;
            current_pins -= num_pins;
            //if it is the first roll, go to the next frame and reset the rolls
            if (roll == 1){
                frame++;
                roll = 0;
            }
            //else, move to the next roll with the same frame.
            else {
                roll++;
            }
        }
    }

    int main(){
        //create a new game 

        Game bowlingGame;

        bowlingGame.record_ball(6);

        bowlingGame.get_score();


    }
}

