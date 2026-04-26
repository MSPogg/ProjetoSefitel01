#ifndef STATISTICS_H
#define STATISTICS_H

#include <vector>
#include <cmath>

double Average(const std::vector<double>& Measurements);
double StandardDeviation(const std::vector<double>& Measurements, double Average);
double StandardError(const std::vector<double>& Measurements, double Deviation);

#endif