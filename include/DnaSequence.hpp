#pragma once

#include <string>


class DnaSequence
{
private:
    std::string sequence_;

public:
    DnaSequence(const std::string& sequence);

    ~DnaSequence();

    bool Validate() const;

    void PrintSequence() const;
};