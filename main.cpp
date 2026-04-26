#include "statistics.h"
#include "terminal.h"

int main()
{
    std::vector<double> Medidas;
    double Num {0};

    Menu();

    while(true)
    {
        std::cin >> Num;
        
        if(Num != -1)
            Medidas.push_back(Num);

        else 
            break;
    }
    
    size_t Tamanho {Medidas.size()};
    double Media {Average(Medidas)};
    double Desvio {StandardDeviation(Medidas, Media)};
    double Erro = {StandardError(Medidas, Desvio)};

    Results(Media, Desvio, Erro, Tamanho);

    return 0;
}