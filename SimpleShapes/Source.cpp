#include<iostream>
#include<conio.h>
using namespace std;
int printmenu()
{
	int selectedoption = 0;
	cout << "options:" << endl;
	cout << "0--------quit" << endl;
	cout << "1--------solid square" << endl;
	cout << "2--------solid rectangle" << endl;
	cout << "3--------multiple solid rectancle" << endl;
	cout << "4--------multiple solid rectancle using function call" << endl;
	cout << "5--------find max and min" << endl;
	cout << "6--------print prime" << endl;
	cout << "select your option" << endl;
	cin >> selectedoption;
	return selectedoption;

}
void solidsquare(int a, char b)
{
	int i = 0, j = 0;
	cout << "enter length" << endl;
	cin >> a;
	cout << "enter symbol" << endl;
	cin >> b;
	for (j = 0; j<a; j++)
	{
		for (i = 0; i<a; i++)
		{
			cout << b;
		}

		cout << endl;
	}

}
void solidrectangle(int a, int c, char b)
{
	int i = 0, j = 0;
	cout << "enter length" << endl;
	cin >> a;
	cout << "enter width" << endl;
	cin >> c;
	cout << "enter symbol" << endl;
	cin >> b;
	for (j = 0; j<c; j++)
	{
		for (i = 0; i<a; i++)
		{
			cout << b;
		}

		cout << endl;
	}

}
void printprime(int number)
{
	int i = 0, k = 0, num = 0, z = 0;
	cout << "enter the limit of prime" << endl;
	cin >> num;
	for (int i = 2; i<num; i++)
		for (int j = 2; j<i; j++)
		{
			if (i % j == 0)
				break;
			else if (i == j + 1)
				cout << " " << i << endl;

		}
}
void multiplesolidrectangle(int a, int d, int c, char b)
{
	int i = 0, j = 0, k = 0;
	cout << "enter length" << endl;
	cin >> a;
	cout << "enter width" << endl;
	cin >> c;
	cout << "enter symbol" << endl;
	cin >> b;
	cout << "enter number of rectangle" << endl;
	cin >> d;
	for (k = 0; k<d; k++)
	{
		for (j = 0; j<c; j++)
		{
			for (i = 0; i<a; i++)
			{
				cout << b;
			}

			cout << endl;
		}
		cout << "rectangle" << k + 1;

		cout << endl;

	}


}
int minimum(int o, int p)
{
	if (o<p)
		return o;
	else
		return p;
}
int largest(int x, int y)
{
	if (x >= y)
		return x;
	else
		return y;
}

void maxmin(int &max, int &min)
{
	int num = 0;


	do
	{
		min = minimum(min, num);

		max = largest(max, num);

		cout << " enter number" << endl;
		cin >> num;
	} while (num != -1);


}
void main()
{
	int selectedoption = 0, c = 0, d = 0, e = 0, f = 0, max = 0, min = 0, numb = 0, i = 0;

	selectedoption = printmenu();

	while (selectedoption != 0)     // Keep showing the menu until user enters 0 to Quit
	{
		if (selectedoption == 1)
		{
			solidsquare(c, d);
		}
		else if (selectedoption == 2)
		{
			solidrectangle(c, d, e);
		}
		else if (selectedoption == 3 || selectedoption == 4)
		{
			multiplesolidrectangle(c, d, e, f);
		}
		else if (selectedoption == 5)
		{
			maxmin(max, min);
			cout << "\n\nMinimum Number Entered:\t" << min << endl;
			cout << "Maximum Number Entered:\t" << max << endl;
		}
		else if (selectedoption == 6)
		{
			printprime(numb);

		}
		cout << "User Entered Option:\t" << selectedoption << endl;
		selectedoption = printmenu();


	}
}
