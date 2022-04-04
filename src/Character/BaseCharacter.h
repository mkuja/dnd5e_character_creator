//
// Created by mkuja on 3.4.2022.
//

#ifndef DND5E_CHARACTER_CREATOR_BASECHARACTER_H
#define DND5E_CHARACTER_CREATOR_BASECHARACTER_H

#include "Stats.h"


/**
 * Base character
 *
 * Keeps track of basic 6 stats, calculates their modifiers and calculates proficiency bonus.
 * Also keeps track of character level. Oh yeah, and a lot of bools to keep track of
 * proficiencies. That is all.
 *
 * Proficiency bonus is being added to what skill-mod getters return if applicable.
 */
class BaseCharacter {
public:
    BaseCharacter(Stats *stats);

    virtual ~BaseCharacter();


    // Base stats.
    [[nodiscard]] virtual int getStrength() const;
    [[nodiscard]] int getStrengthMod() const;
    void setStrength(int strength);

    [[nodiscard]] virtual int getDexterity() const;
    [[nodiscard]] int getDexterityMod() const;
    void setDexterity(int dexterity);

    [[nodiscard]] virtual int getConstitution() const;
    [[nodiscard]] int getConstitutionMod() const;
    void setConstitution(int constitution);

    [[nodiscard]] virtual int getIntelligence() const;
    [[nodiscard]] int getIntelligenceMod() const;
    void setIntelligence(int intelligence);

    [[nodiscard]] virtual int getWisdom() const;
    [[nodiscard]] int getWisdomMod() const;
    void setWisdom(int wisdom);

    [[nodiscard]] virtual int getCharisma() const;
    [[nodiscard]] int getCharismaMod() const;
    void setCharisma(int charisma);


    // Saving throws
    [[nodiscard]] bool isStrengthProf() const;
    [[nodiscard]] int getStrengthSavingThrowMod() const;
    void setStrengthProf(bool strengthProf);

    [[nodiscard]] bool isDexterityProf() const;
    [[nodiscard]] int getDexteritySavingThrowMod() const;
    void setDexterityProf(bool dexterityProf);

    [[nodiscard]] bool isConstitutionProf() const;
    [[nodiscard]] int getConstitutionSavingThrowMod() const;
    void setConstitutionProf(bool constitutionProf);

    [[nodiscard]] bool isIntelligenceProf() const;
    [[nodiscard]] int getIntelligenceSavingThrowMod() const;
    void setIntelligenceProf(bool intelligenceProf);

    [[nodiscard]] bool isWisdomProf() const;
    [[nodiscard]] int getWisdomSavingThrowMod() const;
    void setWisdomProf(bool wisdomProf);

    [[nodiscard]] bool isCharismaProf() const;
    [[nodiscard]] int getCharismaSavingThrowMod() const;
    void setCharismaProf(bool charismaProf);


    // Skill proficiencies.
    [[nodiscard]] bool isAcrobaticsProf() const;
    [[nodiscard]] int getAcrobaticsMod() const;
    void setAcrobaticsProf(bool acrobaticsProf);

    [[nodiscard]] bool isAnimalHandlingProf() const;
    [[nodiscard]] int getAnimalHandlingMod() const;
    void setAnimalHandlingProf(bool animalHandlingProf);

    [[nodiscard]] bool isArcanaProf() const;
    [[nodiscard]] int getArcanaMod() const;
    void setArcanaProf(bool arcanaProf);

    [[nodiscard]] bool isAthleticsProf() const;
    [[nodiscard]] int getAthleticsMod() const;
    void setAthleticsProf(bool athleticsProf);

    [[nodiscard]] bool isDeceptionProf() const;
    [[nodiscard]] int getDeceptionMod() const;
    void setDeceptionProf(bool deceptionProf);

    [[nodiscard]] bool isHistoryProf() const;
    [[nodiscard]] int getHistoryMod() const;
    void setHistoryProf(bool historyProf);

    [[nodiscard]] bool isInsightProf() const;
    [[nodiscard]] int getInsightMod() const;
    void setInsightProf(bool insightProf);

    [[nodiscard]] bool isIntimidationProf() const;
    [[nodiscard]] int getIntimidationMod() const;
    void setIntimidationProf(bool intimidationProf);

    [[nodiscard]] bool isInvestigationProf() const;
    [[nodiscard]] int getInvestigationMod() const;
    void setInvestigationProf(bool investigationProf);

    [[nodiscard]] bool isMedicineProf() const;
    [[nodiscard]] int getMedicineMod() const;
    void setMedicineProf(bool medicineProf);

    [[nodiscard]] bool isNatureProf() const;
    [[nodiscard]] int getNatureMod() const;
    void setNatureProf(bool natureProf);

    [[nodiscard]] bool isPerceptionProf() const;
    [[nodiscard]] int getPerceptionMod() const;
    void setPerceptionProf(bool perceptionProf);

    [[nodiscard]] bool isPerformanceProf() const;
    [[nodiscard]] int getPerformanceMod() const;
    void setPerformanceProf(bool performanceProf);

    [[nodiscard]] bool isPersuasionProf() const;
    [[nodiscard]] int getPersuasionMod() const;
    void setPersuasionProf(bool persuasionProf);

    [[nodiscard]] bool isReligionProf() const;
    [[nodiscard]] int getReligionMod() const;
    void setReligionProf(bool religionProf);

    [[nodiscard]] bool isSleightOfHandProf() const;
    [[nodiscard]] int getSleightOfHandMod() const;
    void setSleightOfHandProf(bool sleightOfHandProf);

    [[nodiscard]] bool isStealthProf() const;
    [[nodiscard]] int getStealthMod() const;
    void setStealthProf(bool stealthProf);

    [[nodiscard]] bool isSurvivalProf() const;
    [[nodiscard]] int getSurvivalMod() const;
    void setSurvivalProf(bool survivalProf);

    [[nodiscard]] int getCharacterLevel() const;
    void setCharacterLevel(int characterLevel);

    [[nodiscard]] int getProficiencyBonus() const;
private:
    Stats *stats;
};


#endif //DND5E_CHARACTER_CREATOR_BASECHARACTER_H
