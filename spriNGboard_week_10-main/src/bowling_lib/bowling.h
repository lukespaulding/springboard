#pragma once

namespace Bowling
{
  class Game
  {
    public: 
      int score;
      bool isComplete();
      void record_ball(int);
      int get_score();
  };
}

