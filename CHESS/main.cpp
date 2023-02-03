#include  <iostream>
using namespace std;

#define UPPER_LEFT_ANGLE (char)218
#define UPPER_RIGHT_ANGLE (char)191
#define LOWER_LEFT_ANGLE (char)192
#define LOWER_RIGHT_ANGLE (char)


void main()
{
	setlocale(LC_ALL, "Russian");
	
	int n;
	cout << "¬ведите размер доски:"; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
		
			cout << "* ";
		}
		cout << endl;
	}
}