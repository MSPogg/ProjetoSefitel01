#include "terminal.h"

void Menu()
{
    std::cout << "---------- CALCULADORA DE ERRO DE MEDIDAS ----------" << std::endl << std::endl; 

    std::cout << "Digite suas medidas (-1 para parar): ";
}

void Results(double Average, double StandardDeviation, double StandardError, size_t T)
{
    std::cout << std::fixed << std::setprecision(2);
    std::cout << std::endl;

    std::cout << "Quantidade de medidas: " << T << std::endl << std::endl;
    std::cout << "Media: " << Average <<std::endl;
    std::cout << "Desvio padrao: " << StandardDeviation << std::endl;
    std::cout << "Erro padrao: " << StandardError << std::endl << std::endl;
    std::cout << "Resultado final: " << Average << "  +- " << StandardError << std::endl;
}   