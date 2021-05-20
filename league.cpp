//
// Created by Alex Jansen on 19.05.2021.
//

#include "inc/league.hpp"

void League::AddTeam(const string& abbreviation) {
    teams_.insert({abbreviation, TeamStatistics(abbreviation)});
}


void League::Print() const {
    list<TeamStatistics> scoreboard;
    for (const auto& abbrev_stats : teams_) {
        scoreboard.push_back(abbrev_stats.second);
    }
    scoreboard.sort();
    for (const auto& stats : scoreboard) {
        stats.Print();
    }
}


void League::AddGame(const string &home, const string &guest, unsigned int goals_home, unsigned int goals_guest) {
    auto home_found = teams_.find(home);
    auto guest_found = teams_.find(guest);
    // TODO: make sure home and guest exist
    home_found->second.AddGame(goals_home, goals_guest);
    guest_found->second.AddGame(goals_guest, goals_home);
}

