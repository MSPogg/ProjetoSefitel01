#include "statistics.h"

double Average(const std::vector<double>& Measurements)
{
    if(Measurements.empty())
        return 0.0;

    double Sum {0};

    for(double Temp : Measurements)
        Sum += Temp;
    
    return (double)(Sum / Measurements.size());
}

double StandardDeviation(const std::vector<double>& Measurements, double Average)
{
    if(Measurements.empty())
        return 0.0;
        
    double A {1.0 /(Measurements.size() - 1.0)};
    double B {0};

    for(double Temp : Measurements)
    {
        B += std::pow(Temp - Average, 2);
    }

    double C = A * B;

    return std::sqrt(C);
}

double StandardError(const std::vector<double>& Measurements, double Deviation)
{
    return (double)(Deviation / std::sqrt(Measurements.size()));
}