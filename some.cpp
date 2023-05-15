#include<windows.h>
#include<stdio.h>
#include<iostream>
#include<conio.h>
#include<string>
#include<vector>
#include<fstream>
#include<time.h>
#include<cstdlib>
#include<ctime>
#include "SortsStatsClass.hpp"

#define ESC 27
#define UP 72
#define DOWN 80
#define LEFT 75
#define RIGHT 77
#define ENTER 13
#define STD_ACT 6
#define STD_COL 15
using namespace std;

//void RevSort(vector<int>& vec)
//{
//	auto left = vec.begin();
//	auto right = vec.end() - 1;
//	bool swapped = true;
//	while (swapped)
//	{
//		swapped = false;
//		for (auto it = left; it != right; ++it)
//		{
//			if (*it < *(it + 1))
//			{
//				iter_swap(it, it + 1);
//				swapped = true;
//			}
//		}
//		if (!swapped) break;
//		--right;
//		swapped = false;
//		for (auto it = right; it != left; --it)
//		{
//			if (*it > *(it - 1))
//			{
//				iter_swap(it, it - 1);
//				swapped = true;
//			}
//		}
//		left++;
//	}
//}
//
//void RIGsort(vector<int>& vec)
//{
//	auto left = vec.begin();
//	auto right = vec.end() - 1;
//	bool swapped = true;
//	while (swapped)
//	{
//		swapped = false;
//		for (auto it = left; it != right; ++it)
//		{
//			if (*it > *(it + 1))
//			{
//				iter_swap(it, it + 1);
//				swapped = true;
//			}
//		}
//		if (!swapped) break;
//		--right;
//		swapped = false;
//		for (auto it = right; it != left; --it)
//		{
//			if (*it < *(it - 1))
//			{
//				iter_swap(it, it - 1);
//				swapped = true;
//			}
//		}
//		left++;
//	}
//}
//
//
//
//
//void tests()
//{
//
//	ofstream outfile_b1("BubbleSort_avg.csv");
//	ofstream outfile_s1("ShakerSort_avg.csv");
//	ofstream outfile_m1("HBSort_avg.csv");
//	ofstream outfile_b2("BubbleSort_sorted.csv");
//	ofstream outfile_s2("ShakerSort_sorted.csv");
//	ofstream outfile_m2("HBSort_sorted.csv");
//	ofstream outfile_b3("BubbleSort_reverse_sorted.csv");
//	ofstream outfile_s3("ShakerSort_reverse_sorted.csv");
//	ofstream outfile_m3("HBSort_reverse_sorted.csv");
//
//	for (int k = 1000; k < 20001; k += 1000)
//	{
//		cout << k << endl;
//		double bbl_avg_cmpr = 0;
//		double bbl_avg_copy = 0;
//		double bbl_avg_time = 0;
//
//		double bbl_srtd_cmpr = 0;
//		double bbl_srtd_copy = 0;
//		double bbl_srtd_time = 0;
//
//		double bbl_rev_cmpr = 0;
//		double bbl_rev_copy = 0;
//		double bbl_rev_time = 0;
//
//
//		double shk_avg_cmpr = 0;
//		double shk_avg_copy = 0;
//		double shk_avg_time = 0;
//
//		double shk_srtd_cmpr = 0;
//		double shk_srtd_copy = 0;
//		double shk_srtd_time = 0;
//
//		double shk_rev_cmpr = 0;
//		double shk_rev_copy = 0;
//		double shk_rev_time = 0;
//
//
//		double hb_avg_cmpr = 0;
//		double hb_avg_copy = 0;
//		double hb_avg_time = 0;
//
//		double hb_srtd_cmpr = 0;
//		double hb_srtd_copy = 0;
//		double hb_srtd_time = 0;
//
//		double hb_rev_cmpr = 0;
//		double hb_rev_copy = 0;
//		double hb_rev_time = 0;
//
//		srand(time(0));
//		vector<int> vec;
//		for (int i = 0; i < k; i++)
//		{
//			vec.push_back((int)rand());
//		}
//
//		cout << "vec is filled" << endl;
//
//		vector<int> sorting_vec = vec;
//
//
//		clock_t start = clock();
//		stats st = BubbleSort(sorting_vec);
//		clock_t end = clock();
//		bbl_avg_time += (double)(end - start) / CLOCKS_PER_SEC;
//		bbl_avg_cmpr += (double)st.comparison_count;
//		bbl_avg_copy += (double)st.copy_count;
//		cout << "vec is bubble sorted" << endl;
//
//
//		sorting_vec = vec;
//		start = clock();
//		st = shaker_sort(sorting_vec);
//		end = clock();
//		shk_avg_time += (double)(end - start) / CLOCKS_PER_SEC;
//		shk_avg_cmpr += (double)st.comparison_count;
//		shk_avg_copy += (double)st.copy_count;
//		cout << "vec is shaker sorted" << endl;
//		sorting_vec = vec;
//		start = clock();
//		st = HBSort(sorting_vec);
//		end = clock();
//		hb_avg_time += (double)(end - start) / CLOCKS_PER_SEC;
//		hb_avg_cmpr += (double)st.comparison_count;
//		hb_avg_copy += (double)st.copy_count;
//		cout << "vec is merge sorted" << endl;
//
//		sorting_vec = vec;
//		RIGsort(sorting_vec);
//		start = clock();
//		st = BubbleSort(sorting_vec);
//		end = clock();
//		bbl_srtd_time += (double)(end - start) / CLOCKS_PER_SEC;
//		bbl_srtd_cmpr += (double)st.comparison_count;
//		bbl_srtd_copy += (double)st.copy_count;
//		cout << "sorted vec is bubble sorted" << endl;
//
//
//		sorting_vec = vec;
//		RIGsort(sorting_vec);
//		start = clock();
//		st = shaker_sort(sorting_vec);
//		end = clock();
//		shk_srtd_time += (double)(end - start) / CLOCKS_PER_SEC;
//		shk_srtd_cmpr += (double)st.comparison_count;
//		shk_srtd_copy += (double)st.copy_count;
//		cout << "sorted vec is shaker sorted" << endl;
//
//		sorting_vec = vec;
//		RIGsort(sorting_vec);
//		start = clock();
//		st = HBSort(sorting_vec);
//		end = clock();
//		hb_srtd_time += (double)(end - start) / CLOCKS_PER_SEC;
//		hb_srtd_cmpr += (double)st.comparison_count;
//		hb_srtd_copy += (double)st.copy_count;
//		cout << "sorted vec is merge sorted" << endl;
//
//
//		sorting_vec = vec;
//		RevSort(sorting_vec);
//		start = clock();
//		st = BubbleSort(sorting_vec);
//		end = clock();
//		bbl_rev_time += (double)(end - start) / CLOCKS_PER_SEC;
//		bbl_rev_cmpr += (double)st.comparison_count;
//		bbl_rev_copy += (double)st.copy_count;
//		cout << "reverse vec is bubble sorted" << endl;
//
//		sorting_vec = vec;
//		RevSort(sorting_vec);
//		start = clock();
//		st = shaker_sort(sorting_vec);
//		end = clock();
//		shk_rev_time += (double)(end - start) / CLOCKS_PER_SEC;
//		shk_rev_cmpr += (double)st.comparison_count;
//		shk_rev_copy += (double)st.copy_count;
//		cout << "reverse vec is sheker sorted" << endl;
//
//		sorting_vec = vec;
//		RevSort(sorting_vec);
//		start = clock();
//		st = HBSort(sorting_vec);
//		end = clock();
//		hb_rev_time += (double)(end - start) / CLOCKS_PER_SEC;
//		hb_rev_cmpr += (double)st.comparison_count;
//		hb_rev_copy += (double)st.copy_count;
//		cout << "reverse vec is merge sorted" << endl;
//
//		outfile_b1 << bbl_avg_time / 100 << "," << bbl_avg_cmpr / 100 << "," << bbl_avg_copy / 100 << "\n";
//		cout << "bubble is written" << endl;
//
//		outfile_s1 << shk_avg_time / 100 << "," << shk_avg_cmpr / 100 << "," << shk_avg_copy / 100 << "\n";
//		cout << "sh is written" << endl;
//
//		outfile_m1 << hb_avg_time / 100 << "," << hb_avg_cmpr / 100 << "," << hb_avg_copy / 100 << "\n";
//		cout << "mrg is written" << endl;
//
//		outfile_b2 << bbl_srtd_time << "," << bbl_srtd_cmpr << "," << bbl_srtd_copy << "\n";
//		cout << "bubble is written" << endl;
//
//		outfile_s2 << shk_srtd_time << "," << shk_srtd_cmpr << "," << shk_srtd_copy << "\n";
//		cout << "sh is written" << endl;
//
//		outfile_m2 << hb_srtd_time << "," << hb_srtd_cmpr << "," << hb_srtd_copy << "\n";
//		cout << "mrg is written" << endl;
//
//		outfile_b3 << bbl_rev_time << "," << bbl_rev_cmpr << "," << bbl_rev_copy << "\n";
//		cout << "bubble is written" << endl;
//
//		outfile_s3 << shk_rev_time << "," << shk_rev_cmpr << "," << shk_rev_copy << "\n";
//		cout << "sh is written" << endl;
//
//		outfile_m3 << hb_rev_time << "," << hb_rev_cmpr << "," << hb_rev_copy << "\n";
//		cout << "mrg is written" << endl;
//	}
//
//	outfile_b1.close();
//	outfile_s1.close();
//	outfile_m1.close();
//	outfile_b2.close();
//	outfile_s2.close();
//	outfile_m2.close();
//	outfile_b3.close();
//	outfile_s3.close();
//	outfile_m3.close();
//}








UserClass::UserClass(float val) : data(val) {}
bool UserClass::operator == (const UserClass& obj) const
{
	return data == obj.data;
}
bool UserClass::operator > (const UserClass& obj) const
{
	return data > obj.data;
}
bool UserClass::operator < (const UserClass& obj) const
{
	return data < obj.data;
}
float UserClass::GetVal() const
{
	return data;
}
void UserClass::SetVal(float val)
{
	data = val;
}