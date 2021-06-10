#include<iostream>
#include<windows.h> 
using namespace std;

int main()
{
	int hour, minute, second;

	cout << "=================== Current time ===================" << endl;
	cout << endl;
	cout << "HH: "; cin >> hour; cout << endl;
	cout << "MM: "; cin >> minute; cout << endl;
	cout << "SS: "; cin >> second; cout << endl;

	while (true)
	{
		for (hour; hour < 24; hour++)
		{
			for (minute; minute < 60; minute++)
			{
				for (second; second < 60; second++)
				{
					system("cls");
					cout << "=================== Current time ===================" << endl;
					cout << endl;
					cout << hour << " : " << minute << " : " << second << endl;
					Sleep(1000);
				}
				second = 0;
			}
			minute = 0;
		}
		hour = 0;
	}
}
