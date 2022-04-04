//
// Created by mkuja on 4.4.2022.
//

#include <gtest/gtest.h>
#include "../src/Character/BaseCharacter.h"


class TestBaseCharacter : public ::testing::Test {
protected:
    BaseCharacter* character;
    Stats* stats;

    void SetUp() override {
        stats = new Stats{
                9, 10, 11, 12, 13, 14,
                true, true, true, false, false, false,
                true, true, true,
                true, true, true,
                true, true, true,
                true, true, true,
                true, true, true,
                true, true, true,
                1
        };
        character = new BaseCharacter(stats); // character is responsible for freeing stats.

    }

    void TearDown() override {
        delete character;
    }

};


TEST_F(TestBaseCharacter, TestBaseStatsReturnCorrectValues) {
    EXPECT_EQ(character->getStrength(), 9);
    EXPECT_EQ(character->getDexterity(), 10);
    EXPECT_EQ(character->getConstitution(), 11);
    EXPECT_EQ(character->getIntelligence(), 12);
    EXPECT_EQ(character->getWisdom(), 13);
    EXPECT_EQ(character->getCharisma(), 14);
}

TEST_F(TestBaseCharacter, TestBaseStatModifiers) {
    EXPECT_EQ(character->getStrengthMod(), -1);
    EXPECT_EQ(character->getDexterityMod(), 0);
    EXPECT_EQ(character->getConstitutionMod(), 0);
    EXPECT_EQ(character->getIntelligenceMod(), 1);
    EXPECT_EQ(character->getWisdomMod(), 1);
    EXPECT_EQ(character->getCharismaMod(), 2);
}

TEST_F(TestBaseCharacter, TestProficiencyBonus) {
    EXPECT_EQ(character->getAcrobaticsMod(), 2); // Dexterity = 10 (0) + prof (+2)
    character->setAcrobaticsProf(false);
    EXPECT_EQ(character->getAcrobaticsMod(), 0); // No proficiency this time.

    character->setCharacterLevel(4);
    EXPECT_EQ(character->getAnimalHandlingMod(), 3)
                        << "getAnimalHandlingMod() -> " << character->getAnimalHandlingMod()
                        << " getProficiencyBonus() -> " << character->getProficiencyBonus()
                        << "Should total to 3.";
    character->setAnimalHandlingProf(false);
    EXPECT_EQ(character->getAnimalHandlingMod(), 1); // No proficiency this time.

    character->setCharacterLevel(5);
    EXPECT_EQ(character->getArcanaMod(), 4); // Intelligence 12 (+1) + prof (+3)
    character->setArcanaProf(false);
    EXPECT_EQ(character->getArcanaMod(), 1); // No proficiency this time.

    character->setCharacterLevel(8); // Prof bonus of +3
    EXPECT_EQ(character->getAthleticsMod(), 2); // Strength 9 (-1) + prof (+3)
    character->setAthleticsProf(false);
    EXPECT_EQ(character->getAthleticsMod(), -1); // No proficiency this time.

    character->setCharacterLevel(9); // Prof bonus of +4
    EXPECT_EQ(character->getDeceptionMod(), 6); // Charisma 14 (+2) + prof (+4)
    character->setDeceptionProf(false);
    EXPECT_EQ(character->getDeceptionMod(), 2); // No proficiency this time.
}
