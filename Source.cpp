#include<iostream>
#include<windows.h> 
using namespace std;

int main()
{
	int hour, minute, second;

	cout << "=================== Set timer ===================" << endl;
	cout << endl;
	cout << "HH: "; cin >> hour; cout << endl;
	cout << "MM: "; cin >> minute; cout << endl;
	cout << "SS: "; cin >> second; cout << endl;

	while (true)
	{
		for (hour; hour >= 0; hour--)
		{
			for (minute; minute >= 0; minute--)
			{
				for (second; second >= 0; second--)
				{
					system("cls");
					cout << "=================== Time left ===================" << endl;
					cout << endl;
					cout << hour << " : " << minute << " : " << second << endl;
					Sleep(1000);
				}
				second = 59;
			}
			minute = 59;
		}
		cout << endl;
		cout << "Time's up!!!" << endl;
		break;
	}
	
	system("Pause");
	return 0;
}