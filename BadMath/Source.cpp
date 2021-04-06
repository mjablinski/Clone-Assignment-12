#include <iostream>
#include <iomanip>
using namespace std;

float average(int i1, int i2, int i3)
{
	return (i1 + i2 + i3) / 3.0f; //added parenthesis to corectly calculate the average
}

int main()
{
	int num1 =0 , num2 = 0, num3 = 0;
	cout << "This program calculates the average of three numbers." << endl;
	cout << "First number: "; 
	cin >> num1;
	cout << "Second number: "; 
	cin >> num2;
	cout << "Third number: "; 
	cin >> num3; //changed this cin from num2 to num3 

	float avg = average(num1, num2, num3);

	cout << setprecision(1) << fixed << "The average is " << avg << endl;

	system("pause"); 
	return 0;
}