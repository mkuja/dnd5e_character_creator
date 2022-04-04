//
// Created by mkuja on 3.4.2022.
//

#include <stdexcept>
#include "RacialStatsCharacter.h"

int RacialStatsCharacter::getStrength() const {
    switch (race) {
        case Race::MountainDwarf:
        case Race::Dragonborn:
        case Race::HalfOrc:
            return BaseCharacter::getStrength() + 2 + selectable_stats.strength;
        case Race::Human:
            return BaseCharacter::getStrength() + 1 + selectable_stats.strength;
        default:
            return BaseCharacter::getStrength() + selectable_stats.strength;
    }
}

int RacialStatsCharacter::getDexterity() const {
    switch (race) {
        case Race::HighElf:
        case Race::WoodElf:
        case Race::DarkElf:
        case Race::LightfootHalfling:
        case Race::StoutHalfling:
            return BaseCharacter::getDexterity() + 2 + selectable_stats.dexterity;
        case Race::ForestGnome:
        case Race::Human:
            return BaseCharacter::getDexterity() + 1 + selectable_stats.dexterity;
        default:
            return BaseCharacter::getDexterity() + selectable_stats.dexterity;
    }
}

int RacialStatsCharacter::getConstitution() const {
    switch(race) {
        case Race::HillDwarf:
        case Race::MountainDwarf:
            return BaseCharacter::getConstitution() + 2 + selectable_stats.constitution;
        case Race::Human:
        case Race::RockGnome:
        case Race::HalfOrc:
            return BaseCharacter::getConstitution() + 1 + selectable_stats.constitution;
        default:
            return BaseCharacter::getConstitution() + selectable_stats.constitution;
    }
}

int RacialStatsCharacter::getIntelligence() const {
    switch (race) {
        case Race::HighElf:
        case Race::Tiefling:
        case Race::Human:
            return BaseCharacter::getIntelligence() + 1 + selectable_stats.intelligence;
        case Race::RockGnome:
        case Race::ForestGnome:
            return BaseCharacter::getIntelligence() + 2 + selectable_stats.intelligence;
        default:
            return BaseCharacter::getIntelligence() + selectable_stats.intelligence;
    }
}

int RacialStatsCharacter::getWisdom() const {
    switch (race) {
        case Race::HillDwarf:
        case Race::WoodElf:
        case Race::Human:
            return BaseCharacter::getWisdom() + 1 + selectable_stats.wisdom;
        default:
            return BaseCharacter::getWisdom() + selectable_stats.wisdom;
    }
}

int RacialStatsCharacter::getCharisma() const {
    switch (race) {
        case Race::Human:
        case Race::DarkElf:
        case Race::LightfootHalfling:
        case Race::Dragonborn:
            return BaseCharacter::getCharisma() + 1 + selectable_stats.charisma;
        case Race::HalfElf:
        case Race::Tiefling:
            return BaseCharacter::getCharisma() + 2 + selectable_stats.charisma;
        default:
            return BaseCharacter::getCharisma() + selectable_stats.charisma;
    }
}

std::string RacialStatsCharacter::getRace() {
    switch (race) {
        case Race::Human:
            return "Human";
        case Race::Tiefling:
            return "Tiefling";
        case Race::Dragonborn:
            return "Dragonborn";
        case Race::LightfootHalfling:
            return "Lightfoot Halfling";
        case Race::StoutHalfling:
            return "Stout Halfling";
        case Race::DarkElf:
            return "Drow";
        case Race::HighElf:
            return "High Elf";
        case Race::WoodElf:
            return "Wood Elf";
        case Race::HalfElf:
            return "Half Elf";
        case Race::HalfOrc:
            return "Half Orc";
        case Race::ForestGnome:
            return "Forest Gnome";
        case Race::RockGnome:
            return "Rock Gnome";
        case Race::HillDwarf:
            return "Hill Dwarf";
        case Race::MountainDwarf:
            return "Mountain Dwarf";
        default:
            throw std::invalid_argument("No such race. See RacialStatsCharacter.cpp");
    }
}

RacialStatsCharacter::RacialStatsCharacter(Stats *stats, Race race)
: BaseCharacter(stats), race(race) {}

RacialStatsCharacter::~RacialStatsCharacter() {
}

int RacialStatsCharacter::getMovementSpeed() const {
    switch (race) {
        case Race::HillDwarf:
        case Race::MountainDwarf:
        case Race::LightfootHalfling:
        case Race::StoutHalfling:
        case Race::RockGnome:
        case Race::ForestGnome:
            return 25;
        case Race::WoodElf:
        case Race::HighElf:
        case Race::DarkElf:
        case Race::Human:
        case Race::Dragonborn:
        case Race::HalfElf:
        case Race::HalfOrc:
        case Race::Tiefling:
            return 30;
        default:
            throw std::invalid_argument("Unknown race. Check RacialStatsCharacter.cpp/h.");
    }
}

void RacialStatsCharacter::adjustStrenght(int adjustment) {
    selectable_stats.strength += adjustment;
}

void RacialStatsCharacter::adjustDexterity(int adjustment) {
    selectable_stats.dexterity += adjustment;
}

void RacialStatsCharacter::adjustConstitution(int adjustment) {
    selectable_stats.constitution += adjustment;
}

void RacialStatsCharacter::adjustIntelligence(int adjustment) {
    selectable_stats.constitution += adjustment;
}

void RacialStatsCharacter::adjustWisdom(int adjustment) {
    selectable_stats.wisdom += adjustment;
}

void RacialStatsCharacter::adjustCharisma(int adjustment) {
    selectable_stats.charisma += adjustment;
}

void RacialStatsCharacter::resetStreghtAdjustment() {
    selectable_stats.strength = 0;
}

void RacialStatsCharacter::resetDexterityAdjustment() {
    selectable_stats.dexterity = 0;
}

void RacialStatsCharacter::resetConstitutionAdjustment() {
    selectable_stats.constitution = 0;
}

void RacialStatsCharacter::resetIntelligenceAdjustment() {
    selectable_stats.intelligence = 0;
}

void RacialStatsCharacter::resetWisdomAdjustment() {
    selectable_stats.wisdom = 0;
}

void RacialStatsCharacter::resetCharismaAdjustment() {
    selectable_stats.charisma = 0;
}

void RacialStatsCharacter::resetAdjustments() {
    resetCharismaAdjustment();
    resetConstitutionAdjustment();
    resetDexterityAdjustment();
    resetIntelligenceAdjustment();
    resetStreghtAdjustment();
    resetWisdomAdjustment();
}

