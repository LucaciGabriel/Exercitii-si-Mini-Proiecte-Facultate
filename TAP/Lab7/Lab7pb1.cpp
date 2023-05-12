#include<iostream>
using namespace std;
template <class t>
const t max(const t* a,const int n)
{
	t maxaux;
	int i;
	maxaux = a[0];
	for (i = 1; i < n; ++i)
	{
		if (a[i] > maxaux) maxaux = a[i];
	}
	return maxaux;
}
template <class t>
const t min(const t* a, const int n)
{
	t minaux;
	int i;
	minaux = a[0];
	for (i = 1; i < n; ++i)
	{
		if (a[i] < minaux) minaux = a[i];
	}
	return minaux;
}
template <class t>
const int cautaresecv(const t* a, const int n, const t b)
{
	int i;
	for (i = 0; i < n; ++i)
	{
		if (a[i] == b) return i;
	}
	return -1;
}
int main()
{
	int a[20];
	int i;
	for (i = 0; i < 20; i++)
	{
		a[i] = i;
		if (i == 11)a[i] = 99;
	}
	char b[20];
	for (i = 0; i < 20; i++)
	{
		b[i] = 97+i;
		if (i == 13)b[i] = '/';
	}
	cout << "Maximul din a: " << ::max<int>(a, 20) << endl;
	cout << "Minimul din a: " << ::min<int>(a, 20) << endl;
	cout << "Maximul din b: " << ::max<char>(b, 20) << endl;
	cout << "Minimul din b: " << ::min<char>(b, 20) << endl;
	cout << "99 a fost gasit pe pozitia "<< ::cautaresecv<int>(a, 20, 99) << endl;
	cout << "/ a fost gasit pe pozitia " << ::cautaresecv<char>(b, 20, '/') << endl;
	getchar();
	return 0;
}