#pragma once

#include <string>

#include "DnaSequence.hpp"


class Gene
{
private:
    std::string name_;
    DnaSequence dnaSequence_;

public:
    Gene(const std::string& name, const std::string& sequence);

    ~Gene();

    void ActivateExpression();

    void PrintInfo() const;
};