#pragma once

#include <string>

/**
 * @brief Класс, представляющий последовательность ДНК.
 *
 * Ответственность класса:
 * хранение последовательности нуклеотидов
 * и проверка её корректности.
 */
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