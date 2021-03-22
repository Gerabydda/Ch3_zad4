#include <iostream>
int main()
{
	using namespace std;
	long long time;
	const int days = 24;
	const int hours = 60;
	const int min = 60;
	cout << "Vvedite time v sekyndah: ";
	cin >> time;
	cout << time / (hours * min * days) << " Days " << (time % (hours * min * days)) / (hours * min) << " hours ";
	cout << ((time % (hours * min * days)) % (hours * min)) / hours << " minutes " << (((time % (hours * min * days)) % (hours * min)) % hours) << " seconds.";
	return 0;
}