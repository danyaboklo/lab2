#pragma once

#include <string>


class Gene;


class GeneticConstruction
{
private:
    std::string name_;
    Gene* gene_;

public:
    GeneticConstruction(const std::string& name, Gene* gene);

    ~GeneticConstruction();

    void CheckConstruction() const;

    void PrintInfo() const;
};