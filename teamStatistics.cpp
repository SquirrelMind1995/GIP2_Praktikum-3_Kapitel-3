//
// Created by Alex Jansen on 18.05.2021.
//

#include "inc/teamStatistics.hpp"


TeamStatistics::TeamStatistics(string abbrev) {
    std::transform(abbrev.begin(), abbrev.end(),abbrev.begin(), ::toupper);
    team_abbreviation_ = abbrev;
}

int TeamStatistics::GoalDifference() const{
    return goals_shot_ - goals_received_;
}

void TeamStatistics::Print() const {
    /* cout << left << setw(10) << team_abbreviation_ <<
                    setw(10 ) << num_games_played_ <<
                    setw(10) << points_ <<
                    goals_shot_ << ":" << setw(36) << goals_received_ <<
                    setw(5) << showpos << GoalDifference() << noshowpos << endl; */

        cout << team_abbreviation_ << " " << num_games_played_ << " " << points_ << " " << goals_shot_ << ":" << goals_received_ << " " << showpos << GoalDifference() << noshowpos << endl;
}

void TeamStatistics::AddGame(unsigned int goals_shot, unsigned int goals_received) {
    num_games_played_ += 1;
    goals_shot_ += goals_shot;
    goals_received_ += goals_received;
    if (goals_shot == goals_received) {        //Unentschieden
        points_ += 1;
    }
    else if (goals_shot > goals_received) {    //Gewonnen
        points_ += 3;
    }
}

bool TeamStatistics::operator<(const TeamStatistics &other) const {
    if (this->points_ > other.points_) {
        return true;
    } else if (this->points_ == other.points_) {
        if (this->GoalDifference() > other.GoalDifference()) {
            return true;
        } else if (this->GoalDifference() == other.GoalDifference()) {
            if (this->goals_shot_ > other.goals_shot_) {
                return true;
            } else if (this->goals_shot_ == other.goals_shot_) {
                if (this->team_abbreviation_ < other.team_abbreviation_) {
                    return true;
                } else return false;
            }
        }
    }
    return this->team_abbreviation_ < other.team_abbreviation_;
}



