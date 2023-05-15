#pragma once
#include<windows.h>
#include<stdio.h>
#include<iostream>
#include<conio.h>
#include<string>
#include<vector>


using namespace std;
struct stats
{
	size_t comparison_count = 0;
	size_t copy_count = 0;
};

template<class T>
stats BubbleSort(vector<T>& vec);
 
template<class T>
stats HBSort(vector<T>& vec);

template<class T>
stats shaker_sort(vector<T>& vec);

class UserClass
{
private:
	float data;

public:
	UserClass(float data = 0);

	bool operator > (const UserClass& obj) const;

	bool operator < (const UserClass& obj) const;

	bool operator == (const UserClass& obj) const;



	float GetVal() const;

	void SetVal(float val);
	friend istream& operator >>(istream& input, UserClass& MyClass)
	{

		system("CLS");
		float val;
		bool right;

		while (true)
		{
			right = true;
			cout << "input float value: ";
			while (!(cin >> val) || (cin.peek() != '\n'))
			{
				cin.clear();
				while (cin.get() != '\n')
				
				cout << "that's text, enter again" << endl;
				right = false;
				break;



			}
			if (right == true)break;
			else continue;
		}
		MyClass.data = val;
		return input;
	}
	friend ostream& operator << (ostream& output, const UserClass& MyClass)
	{
		output << MyClass.data << " ";
		return output;
	}

};

template stats BubbleSort(vector<int>& vec);
template stats BubbleSort(vector<double>& vec);
template stats BubbleSort(vector<float>& vec);
template stats BubbleSort(vector<string>& vec);
template stats BubbleSort(vector<UserClass>& vec);

template stats shaker_sort(vector<int>& vec);
template stats shaker_sort(vector<double>& vec);
template stats shaker_sort(vector<float>& vec);
template stats shaker_sort(vector<string>& vec);
template stats shaker_sort(vector<UserClass>& vec);

template stats HBSort(vector<int>& vec);
template stats HBSort(vector<double>& vec);
template stats HBSort(vector<float>& vec);
template stats HBSort(vector<string>& vec);
template stats HBSort(vector<UserClass>& vec);