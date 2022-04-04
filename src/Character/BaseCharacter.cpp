//
// Created by mkuja on 3.4.2022.
//

#include "BaseCharacter.h"

BaseCharacter::BaseCharacter(Stats *stats) : stats(stats) {}

BaseCharacter::~BaseCharacter() {
    delete stats;
}


// Base stats
int BaseCharacter::getStrength() const {
    return stats->strength;
}

int BaseCharacter::getStrengthMod() const {
    return getStrength() / 2 - 5;
}

void BaseCharacter::setStrength(int strength) {
    stats->strength = strength;
}

int BaseCharacter::getDexterity() const {
    return stats->dexterity;
}

int BaseCharacter::getDexterityMod() const {
    return getDexterity() / 2 - 5;
}

void BaseCharacter::setDexterity(int dexterity) {
    stats->dexterity = dexterity;
}

int BaseCharacter::getConstitution() const {
    return stats->constitution;
}

int BaseCharacter::getConstitutionMod() const {
    return getConstitution() / 2 - 5;
}

void BaseCharacter::setConstitution(int constitution) {
    stats->constitution = constitution;
}

int BaseCharacter::getIntelligence() const {
    return stats->intelligence;
}

int BaseCharacter::getIntelligenceMod() const {
    return getIntelligence() / 2 - 5;
}

void BaseCharacter::setIntelligence(int intelligence) {
    stats->intelligence = intelligence;
}

int BaseCharacter::getWisdom() const {
    return stats->wisdom;
}

int BaseCharacter::getWisdomMod() const {
    return getWisdom() / 2 - 5;
}

void BaseCharacter::setWisdom(int wisdom) {
    stats->wisdom = wisdom;
}

int BaseCharacter::getCharisma() const {
    return stats->charisma;
}

int BaseCharacter::getCharismaMod() const {
    return getCharisma() / 2 - 5;
}

void BaseCharacter::setCharisma(int charisma) {
    stats->charisma = charisma;
}


// Saving throws.
bool BaseCharacter::isStrengthProf() const {
    return stats->strength_prof;
}

int BaseCharacter::getStrengthSavingThrowMod() const {
    if (isStrengthProf()) {
        return getStrengthMod() + getProficiencyBonus();
    }
    return getStrengthMod();
}

void BaseCharacter::setStrengthProf(bool strengthProf) {
    stats->strength_prof = strengthProf;
}

bool BaseCharacter::isDexterityProf() const {
    return stats->dexterity_prof;
}

int BaseCharacter::getDexteritySavingThrowMod() const {
    if (isDexterityProf()) {
        return getDexterityMod() + getProficiencyBonus();
    }
    return getDexterityMod();
}

void BaseCharacter::setDexterityProf(bool dexterityProf) {
    stats->dexterity_prof = dexterityProf;
}

bool BaseCharacter::isConstitutionProf() const {
    return stats->constitution_prof;
}

int BaseCharacter::getConstitutionSavingThrowMod() const {
    if (isConstitutionProf()) {
        return getConstitutionMod() + getProficiencyBonus();
    }
    return getConstitutionMod();
}

void BaseCharacter::setConstitutionProf(bool constitutionProf) {
    stats->constitution_prof = constitutionProf;
}

bool BaseCharacter::isIntelligenceProf() const {
    return stats->intelligence_prof;
}

int BaseCharacter::getIntelligenceSavingThrowMod() const {
    if (isIntelligenceProf()) {
        return getIntelligenceMod() + getProficiencyBonus();
    }
    return getIntelligenceMod();
}

void BaseCharacter::setIntelligenceProf(bool intelligenceProf) {
    stats->intelligence_prof = intelligenceProf;
}

bool BaseCharacter::isWisdomProf() const {
    return stats->wisdom_prof;
}

int BaseCharacter::getWisdomSavingThrowMod() const {
    if (stats->wisdom_prof) {
        return getWisdomMod() + getProficiencyBonus();
    }
    return getWisdomMod();
}

void BaseCharacter::setWisdomProf(bool wisdomProf) {
    stats->wisdom_prof = wisdomProf;
}

bool BaseCharacter::isCharismaProf() const {
    return stats->charisma_prof;
}

int BaseCharacter::getCharismaSavingThrowMod() const {
    if (stats->charisma_prof) {
        return getCharismaMod() + getProficiencyBonus();
    }
    return getCharismaMod();
}

void BaseCharacter::setCharismaProf(bool charismaProf) {
    stats->charisma_prof = charismaProf;
}


// Skills
bool BaseCharacter::isAcrobaticsProf() const {
    return stats->acrobatics_prof;
}

int BaseCharacter::getAcrobaticsMod() const {
    if (stats->acrobatics_prof) {
        return getDexterityMod() + getProficiencyBonus();
    }
    return getDexterityMod();
}

void BaseCharacter::setAcrobaticsProf(bool acrobaticsProf) {
    stats->acrobatics_prof = acrobaticsProf;
}

bool BaseCharacter::isAnimalHandlingProf() const {
    return stats->animal_handling_prof;
}

int BaseCharacter::getAnimalHandlingMod() const {
    if (stats->animal_handling_prof) {
        return getWisdomMod() + getProficiencyBonus();
    }
    return getWisdomMod();
}

void BaseCharacter::setAnimalHandlingProf(bool animalHandlingProf) {
    stats->animal_handling_prof = animalHandlingProf;
}

bool BaseCharacter::isArcanaProf() const {
    return stats->arcana_prof;
}

int BaseCharacter::getArcanaMod() const {
    if (stats->arcana_prof) {
        return getIntelligenceMod() + getProficiencyBonus();
    }
    return getIntelligenceMod();
}

void BaseCharacter::setArcanaProf(bool arcanaProf) {
    stats->arcana_prof = arcanaProf;
}

bool BaseCharacter::isAthleticsProf() const {
    return stats->arcana_prof;
}

int BaseCharacter::getAthleticsMod() const {
    if (stats->athletics_prof) {
        return getStrengthMod() + getProficiencyBonus();
    }
    return getStrengthMod();
}

void BaseCharacter::setAthleticsProf(bool athleticsProf) {
    stats->athletics_prof = athleticsProf;
}

bool BaseCharacter::isDeceptionProf() const {
    return stats->deception_prof;
}

int BaseCharacter::getDeceptionMod() const {
    if (stats->deception_prof) {
        return getCharismaMod() + getProficiencyBonus();
    }
    return getCharismaMod();
}

void BaseCharacter::setDeceptionProf(bool deceptionProf) {
    stats->deception_prof = deceptionProf;
}

bool BaseCharacter::isHistoryProf() const {
    return stats->history_prof;
}

int BaseCharacter::getHistoryMod() const {
    if (stats->history_prof) {
        return getIntelligenceMod() + getProficiencyBonus();
    }
    return getProficiencyBonus();
}

void BaseCharacter::setHistoryProf(bool historyProf) {
    stats->history_prof = historyProf;
}

bool BaseCharacter::isInsightProf() const {
    return stats->insight_prof;
}

int BaseCharacter::getInsightMod() const {
    if (stats->insight_prof) {
        return getWisdomMod() + getProficiencyBonus();
    }
    return getWisdomMod();
}

void BaseCharacter::setInsightProf(bool insightProf) {
    stats->insight_prof = insightProf;
}

bool BaseCharacter::isIntimidationProf() const {
    return stats->intimidation_prof;
}

int BaseCharacter::getIntimidationMod() const {
    if (stats->intimidation_prof) {
        return getCharismaMod() + getProficiencyBonus();
    }
    return getCharismaMod();
}

void BaseCharacter::setIntimidationProf(bool intimidationProf) {
    stats->intimidation_prof = intimidationProf;
}

bool BaseCharacter::isInvestigationProf() const {
    return stats->investigation_prof;
}

int BaseCharacter::getInvestigationMod() const {
    if (stats->investigation_prof) {
        return getIntelligenceMod() + getProficiencyBonus();
    }
    return getIntelligenceMod();
}

void BaseCharacter::setInvestigationProf(bool investigationProf) {
    stats->investigation_prof = investigationProf;
}

bool BaseCharacter::isMedicineProf() const {
    return stats->medicine_prof;
}

int BaseCharacter::getMedicineMod() const {
    if (stats->medicine_prof) {
        return getWisdomMod() + getProficiencyBonus();
    }
    return getWisdomMod();
}

void BaseCharacter::setMedicineProf(bool medicineProf) {
    stats->medicine_prof = medicineProf;
}

bool BaseCharacter::isNatureProf() const {
    return stats->nature_prof;
}

int BaseCharacter::getNatureMod() const {
    if (stats->nature_prof) {
        return getIntelligenceMod() + getProficiencyBonus();
    }
    return getIntelligenceMod();
}

void BaseCharacter::setNatureProf(bool natureProf) {
    stats->nature_prof = natureProf;
}

bool BaseCharacter::isPerceptionProf() const {
    return stats->perception_prof;
}

int BaseCharacter::getPerceptionMod() const {
    if (stats->perception_prof) {
        return getWisdomMod() + getProficiencyBonus();
    }
    return getWisdomMod();
}

void BaseCharacter::setPerceptionProf(bool perceptionProf) {
    stats->perception_prof = perceptionProf;
}

bool BaseCharacter::isPerformanceProf() const {
    return stats->performance_prof;
}

int BaseCharacter::getPerformanceMod() const {
    if (stats->performance_prof) {
        return getCharismaMod() + getProficiencyBonus();
    }
    return getCharismaMod();
}

void BaseCharacter::setPerformanceProf(bool performanceProf) {
    stats->performance_prof = performanceProf;
}

bool BaseCharacter::isPersuasionProf() const {
    return stats->persuasion_prof;
}

int BaseCharacter::getPersuasionMod() const {
    if (stats->persuasion_prof) {
        return getCharismaMod() + getProficiencyBonus();
    }
    return getCharismaMod();
}

void BaseCharacter::setPersuasionProf(bool persuasionProf) {
    stats->persuasion_prof = persuasionProf;
}

bool BaseCharacter::isReligionProf() const {
    return stats->religion_prof;
}

int BaseCharacter::getReligionMod() const {
    if (stats->religion_prof) {
        return getIntelligenceMod() + getProficiencyBonus();
    }
    return getIntelligenceMod();
}

void BaseCharacter::setReligionProf(bool religionProf) {
    stats->religion_prof = religionProf;
}

bool BaseCharacter::isSleightOfHandProf() const {
    return stats->sleight_of_hand_prof;
}

int BaseCharacter::getSleightOfHandMod() const {
    if (stats->sleight_of_hand_prof) {
        return getDexterityMod() + getProficiencyBonus();
    }
    return getDexterityMod();
}

void BaseCharacter::setSleightOfHandProf(bool sleightOfHandProf) {
    stats->sleight_of_hand_prof = sleightOfHandProf;
}

bool BaseCharacter::isStealthProf() const {
    return stats->stealth_prof;
}

int BaseCharacter::getStealthMod() const {
    if (stats->stealth_prof) {
        return getDexterityMod() + getProficiencyBonus();
    }
    return getDexterityMod();
}

void BaseCharacter::setStealthProf(bool stealthProf) {
    stats->stealth_prof = stealthProf;
}

bool BaseCharacter::isSurvivalProf() const {
    return stats->survival_prof;
}

int BaseCharacter::getSurvivalMod() const {
    if (stats->survival_prof) {
        return getWisdomMod() + getProficiencyBonus();
    }
    return getWisdomMod();
}

void BaseCharacter::setSurvivalProf(bool survivalProf) {
    stats->survival_prof = survivalProf;
}

int BaseCharacter::getCharacterLevel() const {
    return stats->character_level;
}

void BaseCharacter::setCharacterLevel(int characterLevel) {
    stats->character_level = characterLevel;
}

int BaseCharacter::getProficiencyBonus() const {
    return (stats->character_level - 1) / 4 + 2;
}


