//
// Created by Alex Jansen on 19.05.2021.
//

#ifndef MAIN_LEAGUE_HPP
#define MAIN_LEAGUE_HPP

#include "teamStatistics.hpp"

#include <map>
#include <string>
#include <list>

using std::map;
using std::string;
using std::list;

class League{

public:
    void AddTeam(const string& abbreviation);
    void AddGame(const string& home, const string& guest, unsigned int goals_home, unsigned int goals_guest);

    void Print() const;


private:
    map<string, TeamStatistics> teams_;

};

#endif //MAIN_LEAGUE_HPP
