#pragma once
#include "entities/Player.h"
#include "entities/Istota.h"
#include "systems/Kostka.h"
#include "platform/Platform.h"

class Walka
{
public:
    static bool rozpocznijWalke(Player& player, Istota& przeciwnik);
};
