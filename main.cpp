#include <iostream>

using namespace std;

template<class T>
T Half(T num)
{
	T result = num / 2;

	if (num != result * 2)
	{
		return ++result;
	}
	else
	{
		return result;
	}

}



int main()
{
	double a = 7.0;
	float b = 5.0f;
	int c = 3;

	cout << Half(a) << endl;
	cout << Half(b) << endl;
	cout << Half(c) << endl;
}