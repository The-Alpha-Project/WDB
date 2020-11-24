struct CGPetition
{
  int m_entryId;
  int m_recordSize;
  int m_petitionID;
  unsigned __int64 m_petitioner;
  char *m_title;
  char *m_bodyText;
  int m_flags;
  int m_minSignatures;
  int m_maxSignatures;
  int m_deadLine;
  int m_issueDate;
  int m_allowedGuildID;
  int m_allowedClasses;
  int m_allowedRaces;
  short m_allowedGender;
  int m_allowedMinLevel;
  int m_allowedMaxLevel;
  char *m_choicetext[10];
  int m_numChoices;
  unsigned int m_muid;
};

struct CreatureStats
{
  int m_entryId;
  int m_recordSize;
  char *m_name[4];
  char *m_title;
  int m_flags;
  int m_creatureType;
  int m_creatureFamily;
  int m_rank;
};

struct GameObjectStats
{
  int m_entryId;
  int m_recordSize;
  int m_typeID;
  int m_displayID;
  char *m_name[4];
  int m_propValue[10];
};

struct ItemStats
{
  int m_entryId;
  int m_recordSize;
  int m_class;
  int m_subclass;
  char *m_displayName[4];
  int m_displayInfoID;
  int m_overallQualityID;
  int m_flags;
  int m_buyPrice;
  int m_sellPrice;
  int m_inventoryType;
  int m_allowableClass;
  int m_allowableRace;
  int m_itemLevel;
  int m_requiredLevel;
  int m_requiredSkill;
  int m_requiredSkillRank;
  int m_maxCount;
  int m_stackable;
  int m_containerSlots;
  int m_bonusStat[10];
  int m_bonusAmount[10];
  int m_minDamage[5];
  int m_maxDamage[5];
  int m_damageType[5];
  int m_resistances[6];
  int m_delay;
  int m_ammunitionType;
  int m_maxDurability;
  int m_spellID[5];
  int m_spellTrigger[5];
  int m_spellCharges[5];
  int m_spellCooldown[5];
  int m_spellCategory[5];
  int m_spellCategoryCooldown[5];
  int m_bonding;
  char *m_description;
  int m_pageText;
  int m_languageID;
  int m_pageMaterial;
  int m_startQuestID;
  int m_lockID;
  int m_material;
  int m_sheatheType;
  int m_randomPropertyID;
  int m_durability;
};

struct NameCache
{
  int m_entryId;
  int m_recordSize;
  char *m_name;
  unsigned __int64 m_guid;
  unsigned int m_race;
  unsigned int m_sex;
  char m_temp;
  unsigned int m_class;
};

struct PetNameCache
{
  int m_entryId;
  int m_recordSize;
  char *m_name;
  unsigned int m_ID;
  unsigned int m_timestamp;
};

struct PageTextCache
{
  int m_entryId;
  int m_recordSize;
  char *m_text;
  int m_nextPage;
};

struct QuestCache
{
  int m_entryId;
  int m_recordSize;
  int m_questId;
  int m_questType;
  int m_questLevel;
  int m_questSortID;
  int m_questInfoID;
  int m_rewardNextQuest;
  int m_rewardMoney;
  int m_startItem;
  int m_unknown1;
  int m_unknown2;
  int m_unknown3;
  int m_unknown4;
  int m_rewardItems[4];
  int m_rewardAmount[4];
  int m_rewardChoiceItems[6];
  int m_rewardChoiceAmount[6];
  int m_POIContinent;
  float m_POIx;
  float m_POIy;
  int m_POIPriority;
  char *m_logTitle;
  char *m_logDescription;
  char *m_questDescription;
  char *m_areaDescription;
  int m_monsterToKill[4];
  int m_monsterToKillQuantity[4];
  int m_itemToGet[4];
  int m_itemToGetQuantity[4];
  char *m_getDescription[4];
};

struct GuildStats
{
  int m_entryId;
  int m_recordSize;
  unsigned int m_guildID;
  char *m_guildName;
  int m_emblemStyle;
  int m_emblemColor;
  int m_borderStyle;
  int m_borderColor;
  int m_backgroundColor;
};

struct NPCText
{
  int m_entryId;
  int m_recordSize;
  Options options[8];
};

struct NPCText::Options
{
  float m_probability;
  char *m_text[2];
  int m_language;
  int m_emotes[3][2];
};
