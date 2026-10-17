#pragma once
#include "entities/Potwor.h"
#include <vector>

class Potwory 
{
private:
    std::vector<Potwor> monsters;

public:
    Potwory();
    ~Potwory() = default;

    const std::vector<Potwor>& getMonsters() const { return monsters; }
    void printAllMonsters() const;
};