#ifndef basketball_teamvector_h
#define basketball_teamvector_h

#include "headers.h"

namespace BASKETBALL_SPACE{
  using namespace std;

  class BasketballTeamVector{
    public:
        //Default Constructor
        BasketballTeamVector();

        //Adds team to the list
        void addTeam(Basketball_Team team);

        //Get team from the list using thier name
        Basketball_Team getTeam(string name);

        void printTop5(Basketball_Team team);
        //Add any function for vector manipulation

    private:
        vector<Basketball_Team> teamlist;

      // vector<Basketball_Team> vector1;
      // vector<Basketball_Team> vector2;
      // vector<Basketball_Team> vector3;

  }; //end of BasketBall_team class
  
} //end of BASKETBALL_SPACE

#endif //end of basketball_team_h 

