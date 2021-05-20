//
// Created by Alex Jansen on 18.05.2021.
//

#ifndef GIP_2_TEAMSTATISTICS_HPP
#define GIP_2_TEAMSTATISTICS_HPP

#include <algorithm>
#include <iostream>
#include <iomanip> //setw()
#include <string>


using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::showpos;
using std::noshowpos;
using std::setw;
using std::left;


class TeamStatistics {

public:
    explicit TeamStatistics(string abbrev);
    void Print() const;
    void Print_num_games_played() const;
    //
    /*[[nodiscard]]*/ int GoalDifference() const;
    void AddGame(unsigned int goals_shot, unsigned int goals_conceded);

    bool operator<(const TeamStatistics& other) const;

    friend std::ostream& operator<<(std::ostream& os, const TeamStatistics& teamStats);
    //std::ostream& operator<<(std::ostream& os, const TeamStatistics& TeamStats);

private:
    string team_abbreviation_;
    unsigned int num_games_played_ = 0;
    unsigned int points_ = 0;
    unsigned int goals_shot_ = 0;
    unsigned int goals_received_ = 0;
};


#endif //GIP_2_TEAMSTATISTICS_HPP
