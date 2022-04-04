//
// Created by mkuja on 3.4.2022.
//

#ifndef DND5E_CHARACTER_CREATOR_DWARF_H
#define DND5E_CHARACTER_CREATOR_DWARF_H

#include <string>
#include "BaseCharacter.h"
#include "Races.h"



/**
 * RacialStatsCharacter
 *
 * Contains overrides for the six basic stats which account for racial bonuses.
 * Contains methods for adjusting these basic stats and resetting the adjustments.
 *
 * Adjustments must be used for the races that have free-choice stats upon creation.
 */
class RacialStatsCharacter : public BaseCharacter{
private:
    struct SelectableStats {
        int strength{};
        int dexterity{};
        int constitution{};
        int intelligence{};
        int wisdom{};
        int charisma{};
    };

protected:
    Race race;
    SelectableStats selectable_stats{};
public:
    RacialStatsCharacter(Stats *stats, Race race);

    [[nodiscard]] int getMovementSpeed() const;

    void adjustStrenght(int adjustment);
    void adjustDexterity(int adjustment);
    void adjustConstitution(int adjustment);
    void adjustIntelligence(int adjustment);
    void adjustWisdom(int adjustment);
    void adjustCharisma(int adjustment);

    void resetAdjustments();
    void resetStreghtAdjustment();
    void resetDexterityAdjustment();
    void resetConstitutionAdjustment();
    void resetIntelligenceAdjustment();
    void resetWisdomAdjustment();
    void resetCharismaAdjustment();

    virtual ~RacialStatsCharacter();

    std::string getRace();

    [[nodiscard]] int getStrength() const override;
    [[nodiscard]] int getDexterity() const override;
    [[nodiscard]] int getConstitution() const override;
    [[nodiscard]] int getIntelligence() const override;
    [[nodiscard]] int getWisdom() const override;
    [[nodiscard]] int getCharisma() const override;
};


#endif //DND5E_CHARACTER_CREATOR_DWARF_H
