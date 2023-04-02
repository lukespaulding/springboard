#pragma once

namespace Bowling
{
  class Game
  {
    public: 
      int score;
      bool isComplete();
      int record_ball(int);
      int get_score();
  };
}

