#include<iostream>
using namespace std;
#include<cstdlib>
#include<ctime>
#include<vector>
#include<algorithm>
class person
{
public:
	void myscore();
	int m_score;
};
bool mysort(int v1, int v2)
{
	return v1 > v2;
}
void person::myscore()
{
	srand((unsigned)time(NULL));
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		int j = rand() % 10 + 1;
		v.push_back(j);
	}
	sort(v.begin(), v.end(),mysort);
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << endl;
	}
}
template<class T>
void func02(T arr[],int a)
{
	for (int i = 0; i < a; i++)
	{
		int max = i;
		int min = i;
		for (int j = i + 1; j < a; j++)
		{
			if (arr[j] > arr[max])
			{
				max = j;
			}
			if (arr[j] < arr[min])
			{
				min = j;
			}
		}
		if (arr[a] != arr[min])
		{
			int temp = arr[a];
			arr[a] = arr[min];
			arr[min] = temp;
		}
		if (arr[i] != arr[max])
		{
			int temp = arr[i];
			arr[i] = arr[max];
			arr[max] = temp;
		}
	}
	for (int k = 0; k < a; k++)
	{
		cout << arr[k] << endl;
	}
}
void func03()
{
	int arr[10] = { 1,3,2,4,6,5,7,9,8,10 };
	int i = sizeof(arr) / sizeof(arr[1]);
	func02(arr, i);
}
void func04()
{
	char ch[] ="lkasasd";
	int i = sizeof(ch) / sizeof(ch[1]);
	func02(ch,i);
}
void func01()
{
	person p1;
	p1.myscore();
}
int main()
{
	func03();
	//func01();
	//func04();
	return 0;
}