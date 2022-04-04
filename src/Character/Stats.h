//
// Created by mkuja on 3.4.2022.
//

#ifndef DND5E_CHARACTER_CREATOR_STATS_H
#define DND5E_CHARACTER_CREATOR_STATS_H

struct Stats {
    // Base stats
    int strength{};
    int dexterity{};
    int constitution{};
    int intelligence{};
    int wisdom{};
    int charisma{};

    // Saving throw proficiencies
    bool strength_prof{};
    bool dexterity_prof{};
    bool constitution_prof{};
    bool intelligence_prof{};
    bool wisdom_prof{};
    bool charisma_prof{};

    // Skill proficiencies
    bool acrobatics_prof{};
    bool animal_handling_prof{};
    bool arcana_prof{};
    bool athletics_prof{};
    bool deception_prof{};
    bool history_prof{};
    bool insight_prof{};
    bool intimidation_prof{};
    bool investigation_prof{};
    bool medicine_prof{};
    bool nature_prof{};
    bool perception_prof{};
    bool performance_prof{};
    bool persuasion_prof{};
    bool religion_prof{};
    bool sleight_of_hand_prof{};
    bool stealth_prof{};
    bool survival_prof{};

    // Misc
    int character_level{1};
};


#endif //DND5E_CHARACTER_CREATOR_STATS_H
