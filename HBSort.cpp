#include<windows.h>
#include<stdio.h>
#include<iostream>
#include<conio.h>
#include<string>
#include<vector>
#include "SortsStatsClass.hpp"
using namespace std;

template<typename T>
stats HBSort(vector<T>& vec)
{
	stats statistic;
	int n = 0; // количество перестановок
	double fakt = 1.2473309;
	double step = vec.size() - 1;

	while (step >= 1)
	{
		for (int i = 0; i + step < vec.size(); ++i)
		{
			statistic.comparison_count++;
			if (vec[i] > vec[i + step])
			{
				swap(vec[i], vec[i + step]);
				statistic.copy_count++;
			}
		}
		step /= fakt;
	}
	// сортировка пузырьком
	for (int i = 0; i < vec.size() - 1; i++)
	{
		bool swapped = false;
		for (int j = 0; j < vec.size() - i - 1; j++)
		{
			statistic.comparison_count++;
			if (vec[j] > vec[j + 1]) {
				swap(vec[j], vec[j + 1]);
				swapped = true;
				statistic.copy_count++;
			}
		}

		if (!swapped)
			break;
	}
	return statistic;
}