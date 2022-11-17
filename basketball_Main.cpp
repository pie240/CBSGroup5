/*
Group Members: Andy Almeida, Kao Saephan, Nicholas Valencia, Umaran Ahmadzai, Shanil Prasad

*/


#include "unittests.h"
#include "basketball_team.h"
#include "headers.h"

//using namespace std; 
using namespace BASKETBALL_SPACE;

int main() {
    //testing Kao's cumulative win rate function
    BasketballTeamVector teamCoders;
    teamCoders.setYear2019();
    teamCoders.setYear2020();
    teamCoders.setYear2021();

    //User interface, allows the search of any team, then prints their scores
    string control = "";
    while (control != "1"){
        cout << "Enter a team name or 1 to quit: ";
        getline(cin, control);

        if (teamCoders.checkName(control) == true){
            teamCoders.printData(control);
        }
        else {
            cout << "That team does not exist." << endl;
        }
        cout << endl;
    }

    cout << "Cumulative win rate for SF is: " << teamCoders.calcTotalWinrate("San Francisco") << " %" << endl;

    //testing Nichola's 2020 read function
    BasketballTeamVector team3;
    team3.setYear2020();
    cout << team3.getTeam("San Francisco", 2020).getName() << " 2020" << endl;
    cout << "SF 2020 Win Rate is: " << team3.getTeam("San Francisco", 2020).calculateWinrate(team3.getTeam("San Francisco",2020).getGamesWon(), team3.getTeam("San Francisco",2020).getGamesPlayed()) << endl;
    cout << "SF 2020 Weighted Score is: " << team3.getTeam("San Francisco", 2020).calculateWeightedScore(team3.getTeam("San Francisco", 2020).getOffensePoints(), team3.getTeam("San Francisco", 2020).getDefensePoints()) << endl;
    cout << "SF 2020 Chance at Championship is: " << team3.getTeam("San Francisco", 2020).toStr_yourChampionshipChance(team3.getTeam("San Francisco", 2020).calculateTeamsChances(team3.getTeam("San Francisco",2020).calculateWeightedScore(team3.getTeam("San Francisco",2020).getOffensePoints(), team3.getTeam("San Francisco",2020).getDefensePoints()))) << endl; //end of Nicholas' tests

    //testing Shanil's function
    BasketballTeamVector team2;
    team2.setYear2019();


    cout << team2.getTeam("San Francisco", 2019).getName() << " 2019" << endl;
    cout << "SF 2019 Win Rate is: " << team2.getTeam("San Francisco", 2019).calculateWinrate(team2.getTeam("San Francisco",2019).getGamesWon(), team2.getTeam("San Francisco",2019).getGamesPlayed()) << endl;
    cout << "SF 2019 Weighted Score is: " << team2.getTeam("San Francisco", 2019).calculateWeightedScore(team2.getTeam("San Francisco", 2019).getOffensePoints(), team2.getTeam("San Francisco", 2019).getDefensePoints()) << endl;
    cout << "SF 2019 Chance at Championship is: " << team2.getTeam("San Francisco", 2019).toStr_yourChampionshipChance(team2.getTeam("San Francisco", 2019).calculateTeamsChances(team2.getTeam("San Francisco",2019).calculateWeightedScore(team2.getTeam("San Francisco",2019).getOffensePoints(), team2.getTeam("San Francisco",2019).getDefensePoints()))) << endl; //end of Shanil's tests



    //testing nicholas' function
    BasketballTeamVector team1;
    team1.setYear2021();
    //Basketball_Team testTeam = team1.getTeam("San Francisco");

    cout << team1.getTeam("San Francisco",2021).getName() << " 2021" << endl;
    cout << "SF 2021 Win Rate is: " << team1.getTeam("San Francisco",2021).calculateWinrate(team1.getTeam("San Francisco",2021).getGamesWon(), team1.getTeam("San Francisco",2021).getGamesPlayed()) << endl;
    cout << "SF 2021 Weighted Score is: " << team1.getTeam("San Francisco",2021).calculateWeightedScore(team1.getTeam("San Francisco",2021).getOffensePoints(), team1.getTeam("San Francisco",2021).getDefensePoints()) << endl;
    cout << "SF 2021 Chance at Championship is: " << team1.getTeam("San Francisco",2021).toStr_yourChampionshipChance(team1.getTeam("San Francisco",2021).calculateTeamsChances(team1.getTeam("San Francisco" ,2021).calculateWeightedScore(team1.getTeam("San Francisco",2021).getOffensePoints(), team1.getTeam("San Francisco",2021).getDefensePoints()))) << endl; //end of nicholas' tests


    //testing basketball_team class and functions
    Basketball_Team Coding;

    vector<Basketball_Team> testingStuff;
    testingStuff.push_back(Basketball_Team("theCoders", "codeConference", 99, 100, 101, 102));

    cout << "Testing for Nicholas. The team name is: " << testingStuff.at(0).getName() << endl;
    
    Basketball_Team Coders("theCoders", "codeConference", 99, 100, 101, 102 );
     

    cout << "the Coders win rate is " << Coders.calculateWinrate(Coders.getGamesWon(), Coders.getGamesPlayed()) << endl;
    cout << "the Coders weighted score is " << Coders.calculateWeightedScore(Coders.getOffensePoints(), Coders.getDefensePoints()) << endl;
    cout << "the Coders championship chance is: " << Coders.toStr_yourChampionshipChance(Coders.calculateTeamsChances(Coders.calculateWeightedScore(Coders.getOffensePoints(), Coders.getDefensePoints()))) << endl;

    cout << "program runs fine :)" << endl; //end of basketball_team testing

    


    return 0; 

} //end of main function
