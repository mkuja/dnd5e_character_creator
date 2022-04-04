//
// Created by mkuja on 4.4.2022.
//

#include <gtest/gtest.h>
#include "../src/Character/RacialStatsCharacter.h"


class TestRacialStatsCharacter : public ::testing::Test {
protected:
    RacialStatsCharacter* tiefling;
    RacialStatsCharacter* half_orc;
    RacialStatsCharacter* half_elf;
    RacialStatsCharacter* forest_gnome;
    RacialStatsCharacter* rock_gnome;
    RacialStatsCharacter* dragonborn;
    RacialStatsCharacter* stout_halfling;
    RacialStatsCharacter* lightfoot_halfling;
    RacialStatsCharacter* dark_elf;
    RacialStatsCharacter* high_elf;
    RacialStatsCharacter* wood_elf;
    RacialStatsCharacter* mountain_dwarf;
    RacialStatsCharacter* hill_dwarf;
    RacialStatsCharacter* human;
    Stats** stats;

    void SetUp() override {
        stats = new Stats*[14];
        for (int i = 0; i < 14; ++i) {
            stats[i] = new Stats{ // Setting everything to false and 10, so everything should return +0 except where adjusted.
                    10, 10, 10, 10, 10, 10,
                    false, false, false, false, false, false,
                    false, false, false,
                    false, false, false,
                    false, false, false,
                    false, false, false,
                    false, false, false,
                    false, false, false,
                    1
            };
        }

        tiefling = new RacialStatsCharacter(stats[0], Race::Tiefling);
        half_orc = new RacialStatsCharacter(stats[1], Race::HalfOrc);
        half_elf = new RacialStatsCharacter(stats[2], Race::HalfElf);
        forest_gnome = new RacialStatsCharacter(stats[3], Race::ForestGnome);
        rock_gnome = new RacialStatsCharacter(stats[4], Race::RockGnome);
        dragonborn = new RacialStatsCharacter(stats[5], Race::Dragonborn);
        stout_halfling = new RacialStatsCharacter(stats[6], Race::StoutHalfling);
        lightfoot_halfling = new RacialStatsCharacter(stats[7], Race::LightfootHalfling);
        dark_elf = new RacialStatsCharacter(stats[8], Race::DarkElf);
        high_elf = new RacialStatsCharacter(stats[9], Race::HighElf);
        wood_elf = new RacialStatsCharacter(stats[10], Race::WoodElf);
        mountain_dwarf = new RacialStatsCharacter(stats[11], Race::MountainDwarf);
        hill_dwarf = new RacialStatsCharacter(stats[12], Race::HillDwarf);
        human = new RacialStatsCharacter(stats[13], Race::Human);

    }

    void TearDown() override {
        delete tiefling;
        delete half_orc;
        delete half_elf;
        delete forest_gnome;
        delete rock_gnome;
        delete dragonborn;
        delete stout_halfling;
        delete lightfoot_halfling;
        delete dark_elf;
        delete high_elf;
        delete wood_elf;
        delete mountain_dwarf;
        delete hill_dwarf;
        delete human;
        delete stats;
    }
};

TEST_F(TestRacialStatsCharacter, TestTiefling) {
    EXPECT_EQ(tiefling->getDeceptionMod(), 1);
    tiefling->adjustCharisma(2);
    EXPECT_EQ(tiefling->getDeceptionMod(), 2)
    << "Expected -> 2, got -> " << tiefling->getDeceptionMod() << std::endl;

    EXPECT_EQ(tiefling->getIntelligence(), 11);

}

TEST_F(TestRacialStatsCharacter, TestHalfOrc) {
    EXPECT_EQ(half_orc->getStrength(), 12);
    EXPECT_EQ(half_orc->getConstitution(), 11);
}

TEST_F(TestRacialStatsCharacter, TestHalfElf) {
    EXPECT_EQ(half_elf->getCharisma(), 12);
    half_elf->adjustConstitution(-1);
    EXPECT_EQ(half_elf->getConstitution(), 9);
}

TEST_F(TestRacialStatsCharacter, TestForestGnome) {
    EXPECT_EQ(forest_gnome->getIntelligence(), 12);
    EXPECT_EQ(forest_gnome->getDexterity(), 11);
}

TEST_F(TestRacialStatsCharacter, TestRockGnome) {
    EXPECT_EQ(rock_gnome->getIntelligence(), 12);
    EXPECT_EQ(rock_gnome->getConstitution(), 11);
}

TEST_F(TestRacialStatsCharacter, TestDragonborn) {
    EXPECT_EQ(dragonborn->getStrength(), 12);
    EXPECT_EQ(dragonborn->getCharisma(), 11);
}

TEST_F(TestRacialStatsCharacter, TestStoutHalfling) {
    EXPECT_EQ(stout_halfling->getDexterity(), 12);
    EXPECT_EQ(stout_halfling->getConstitution(), 11);
}

TEST_F(TestRacialStatsCharacter, TestLightfootHalfling) {
    EXPECT_EQ(lightfoot_halfling->getDexterity(), 12);
    EXPECT_EQ(lightfoot_halfling->getCharisma(), 11);
}

TEST_F(TestRacialStatsCharacter, TestDarkElf) {
    EXPECT_EQ(dark_elf->getDexterity(), 12);
    EXPECT_EQ(dark_elf->getCharisma(), 11);
}

TEST_F(TestRacialStatsCharacter, TestHighElf) {
    EXPECT_EQ(high_elf->getDexterity(), 12);
    EXPECT_EQ(high_elf->getIntelligence(), 11);
}

TEST_F(TestRacialStatsCharacter, TestWoodElf) {
    EXPECT_EQ(wood_elf->getDexterity(), 12);
    EXPECT_EQ(wood_elf->getWisdom(), 11);
}

TEST_F(TestRacialStatsCharacter, TestMountainDwarf) {
    EXPECT_EQ(mountain_dwarf->getConstitution(), 12);
    EXPECT_EQ(mountain_dwarf->getStrength(), 12);
}

TEST_F(TestRacialStatsCharacter, TestHillDwarf) {
    EXPECT_EQ(hill_dwarf->getConstitution(), 12);
    EXPECT_EQ(hill_dwarf->getWisdom(), 11);
}

TEST_F(TestRacialStatsCharacter, TestHuman) {
    EXPECT_EQ(human->getDexterity(), 11);
    EXPECT_EQ(human->getStrength(), 11);
    EXPECT_EQ(human->getConstitution(), 11);
    EXPECT_EQ(human->getIntelligence(), 11);
    EXPECT_EQ(human->getCharisma(), 11);
    EXPECT_EQ(human->getWisdom(), 11);
}
