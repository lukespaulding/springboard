#include "bowling.h"

#include <catch2/catch_test_macros.hpp>

TEST_CASE ("this test will fail")
{
  REQUIRE(false);
}

TEST_CASE("Test that Games are created and not complete"){
  //create game
  Game bowlingGame;
  //run game with complete test

  //check that it is not complete on creation
  REQUIRE(false == bowlingGame.getStatus());
}


TEST_CASE("Test that Games can complete"){
  //create game
  Game bowlingGame;
  //run game with complete test

  //finish game and complete check
  REQUIRE(false);
}


TEST_CASE("Test that Games can complete"){
  //create game

  //run game with complete test

  //finish game and complete check
  REQUIRE(false);
}


TEST_CASE("Test that Games can increment score"){
  //create game
  Game bowlingGame;
  //"throw" a ball
  bowlingGame.recordBall();
  //get score
  
}




