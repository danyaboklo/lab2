#include "GeneticConstruction.hpp"

#include "Gene.hpp"

#include <iostream>


GeneticConstruction::GeneticConstruction(
    const std::string& name,
    Gene* gene)
    : name_{name},
      gene_{gene}
{
    std::cout << "Создана генетическая конструкция: "
              << name_
              << std::endl;
}


GeneticConstruction::~GeneticConstruction()
{
    std::cout << "Удалена генетическая конструкция: "
              << name_
              << std::endl;
}


void GeneticConstruction::CheckConstruction() const
{
    if (gene_ == nullptr)
    {
        std::cout << "Ошибка: конструкция не содержит ген"
                  << std::endl;
        return;
    }

    std::cout << "Проверка конструкции пройдена"
              << std::endl;
}


void GeneticConstruction::PrintInfo() const
{
    std::cout << "Конструкция: "
              << name_
              << std::endl;

    if (gene_ != nullptr)
    {
        gene_->PrintInfo();
    }
}