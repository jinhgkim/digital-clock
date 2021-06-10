#include<iostream>
#include<windows.h> 
using namespace std;

int main()
{
	int hour = 0, minute = 0, second = 0;

	while (true)
	{
		for (; ; hour++)
		{
			for (; minute < 60; minute++)
			{
				for (; second < 60; second++)
				{
					system("cls");
					cout << "=================== Count-up ===================" << endl;
					cout << endl;
					cout << hour << " : " << minute << " : " << second << endl;
					Sleep(1000);
				}
				second = 0;
			}
			minute = 0;
		}
	}
}
