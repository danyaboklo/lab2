#include "DnaSequence.hpp"
#include "Gene.hpp"
#include "GeneticConstruction.hpp"

#include <iostream>


int main()
{
    std::cout << "=== Композиция ===\n";

    // Демонстрация композиции:
    // DnaSequence является частью Gene и уничтожается вместе с ним.
    {
        Gene gene(
            "FluorescentProtein",
            "ATGC"
        );

        gene.PrintInfo();
    }


    std::cout << "\n=== Агрегация ===\n";

    // Демонстрация агрегации:
    // Gene создаётся отдельно и передаётся в GeneticConstruction.
    Gene* externalGene = new Gene(
        "Insulin",
        "ATGC"
    );


    {
        GeneticConstruction construction(
            "Medical construction",
            externalGene
        );

        construction.CheckConstruction();
        construction.PrintInfo();
    }


    // Проверка времени жизни объекта при агрегации:
    // после удаления GeneticConstruction объект Gene продолжает существовать.
    std::cout << "Ген всё ещё существует:\n";

    externalGene->PrintInfo();

    // Удаление объекта, созданного через new.
    delete externalGene;


    std::cout << "\n=== Проверка правила ===\n";

    // Корректная последовательность ДНК.
    DnaSequence correct("ATGC");

    // Некорректная последовательность ДНК.
    DnaSequence incorrect("ATGX");


    std::cout << "\n=== new/delete ===\n";

    // Динамическое создание и удаление объекта.
    Gene* dynamicGene = new Gene(
        "DynamicGene",
        "ATGC"
    );

    dynamicGene->PrintInfo();

    delete dynamicGene;


    std::cout << "\n=== Ссылка и указатель ===\n";

    Gene gene(
        "ReferenceGene",
        "ATGC"
    );


    // Работа с объектом через ссылку.
    Gene& reference = gene;
    reference.PrintInfo();


    // Работа с объектом через указатель.
    Gene* pointer = &gene;
    pointer->PrintInfo();


    std::cout << "\n=== Массив объектов ===\n";

    // Статический массив объектов класса.
    Gene genes[2] =
    {
        Gene("Gene1", "ATGC"),
        Gene("Gene2", "ATGC")
    };


    std::cout << "\n=== Динамический массив ===\n";

    // Массив динамических объектов.
    Gene** dynamicGenes = new Gene*[2];

    dynamicGenes[0] = new Gene("GeneA", "ATGC");
    dynamicGenes[1] = new Gene("GeneB", "ATGC");


    delete dynamicGenes[0];
    delete dynamicGenes[1];

    delete[] dynamicGenes;


    return 0;
}