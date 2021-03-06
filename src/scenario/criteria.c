#include "criteria.h"

#include "Data/Scenario.h"

int scenario_is_open_play()
{
    return Data_Scenario.isOpenPlay;
}

int scenario_criteria_population_enabled()
{
    return Data_Scenario.winCriteria_populationEnabled;
}

int scenario_criteria_population()
{
    return Data_Scenario.winCriteria_population;
}

int scenario_criteria_culture_enabled()
{
    return Data_Scenario.winCriteria.cultureEnabled;
}

int scenario_criteria_culture()
{
    return Data_Scenario.winCriteria.culture;
}

int scenario_criteria_prosperity_enabled()
{
    return Data_Scenario.winCriteria.prosperityEnabled;
}

int scenario_criteria_prosperity()
{
    return Data_Scenario.winCriteria.prosperity;
}

int scenario_criteria_peace_enabled()
{
    return Data_Scenario.winCriteria.peaceEnabled;
}

int scenario_criteria_peace()
{
    return Data_Scenario.winCriteria.peace;
}

int scenario_criteria_favor_enabled()
{
    return Data_Scenario.winCriteria.favorEnabled;
}

int scenario_criteria_favor()
{
    return Data_Scenario.winCriteria.favor;
}

int scenario_criteria_time_limit_enabled()
{
    return Data_Scenario.winCriteria.timeLimitYearsEnabled;
}

int scenario_criteria_time_limit_years()
{
    return Data_Scenario.winCriteria.timeLimitYears;
}

int scenario_criteria_survival_enabled()
{
    return Data_Scenario.winCriteria.survivalYearsEnabled;
}

int scenario_criteria_survival_years()
{
    return Data_Scenario.winCriteria.survivalYears;
}
