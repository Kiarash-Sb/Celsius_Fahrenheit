#include<iostream>
using namespace std;
int main()
{
	float c;
	cout << "Enter temperature in Cilsius:	";
	cin >> c;
	float f= (1.8*c)+32;
	f+=32;
	cout << "Temperature in Fahrenheit:	" << f;
}
