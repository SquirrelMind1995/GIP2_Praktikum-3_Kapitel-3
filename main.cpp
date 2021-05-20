#include <iostream>
#include "inc/teamStatistics.hpp"
#include "inc/league.hpp"


using std::cin;
using std::cout;
using std::endl;

std::ostream& operator<<(std::ostream& os, const TeamStatistics& teamStats) {
    os << teamStats.team_abbreviation_ << teamStats.num_games_played_ << teamStats.points_ << teamStats.goals_shot_ << teamStats.goals_received_;
    return os;
}


int main() {
        League my_league;
        /*
        my_league.AddTeam("PHY");
        my_league.AddTeam("GIP");
        my_league.AddTeam("MAT");

        my_league.AddGame("MAT", "GIP", 2, 8);
        my_league.AddGame("PHY", "MAT", 9, 1);
         */

        /*
        unsigned int amount_teams = 0;
        cin >> amount_teams;
        if (std::cin.good()) {

            for (int i = 0; i < amount_teams; ++i) {
                string team;
                cin >> team;
                if (!std::cin.good()) {
                    break;
                }
                my_league.AddTeam(team);
            }

            while (true) {
                string home;
                string guest;
                unsigned int goals_home;
                unsigned int goals_guest;

                cin >> home >> goals_home >> goals_guest >> guest;
                if (!std::cin.good()) {
                    break;
                }
                my_league.AddGame(home, guest, goals_home, goals_guest);
            }

                cout << left << setw(10) << "[KUERZEL]" <<
                        left << setw(10) << "[Spiele]" <<
                        left << setw(10) << "[Punkte]" <<
                        left << setw(38) << "[geschossene Tore]:[erhaltene Tore]" <<
                        left << setw(5) << "[Tordifferenz]" << endl;

                my_league.Print();
        }*/
        TeamStatistics team("alex");
        cout << team << endl; 

    return EXIT_SUCCESS;
}
