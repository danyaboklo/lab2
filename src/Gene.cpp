#include "Gene.hpp"

#include <iostream>


Gene::Gene(const std::string& name, const std::string& sequence)
    : name_{name},
      dnaSequence_{sequence}
{
    std::cout << "Создан ген: "
              << name_
              << std::endl;
}


Gene::~Gene()
{
    std::cout << "Удалён ген: "
              << name_
              << std::endl;
}


void Gene::ActivateExpression()
{
    std::cout << "Экспрессия гена "
              << name_
              << " активирована"
              << std::endl;
}


void Gene::PrintInfo() const
{
    std::cout << "Ген: "
              << name_
              << std::endl;

    dnaSequence_.PrintSequence();
}