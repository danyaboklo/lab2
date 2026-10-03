#include "DnaSequence.hpp"

#include <iostream>


DnaSequence::DnaSequence(const std::string& sequence)
    : sequence_{ sequence }
{
    if (!Validate())
    {
        std::cout << "Ошибка: некорректная последовательность ДНК\n";
    }
    else
    {
        std::cout << "Создана последовательность ДНК\n";
    }
}


DnaSequence::~DnaSequence()
{
    std::cout << "Уничтожена последовательность ДНК\n";
}


bool DnaSequence::Validate() const
{
    for (const char nucleotide : sequence_)
    {
        if (nucleotide != 'A' &&
            nucleotide != 'T' &&
            nucleotide != 'G' &&
            nucleotide != 'C')
        {
            return false;
        }
    }

    return true;
}


void DnaSequence::PrintSequence() const
{
    std::cout << "Последовательность ДНК: "
              << sequence_
              << std::endl;
}