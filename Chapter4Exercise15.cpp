/*FileName:Chapter4Exercise15.cpp
ProgrammerName:Charles Sherwood
Date:2/25
Requirements:Calculates Shipping cost 
if its at a rate of blank per 500 miles 
*/

#include <iomanip>
#include <cmath>
#include <iostream>
using namespace std;

int main()
{
	//double weight = Weight();
	//double distance = Distance();
	double rate;
	double distance;
	double weight;

	cout << "Please enter the weight of your Package:";
	cin >> weight;
	if (weight <= 0 && weight > 20)
	{
		cout << "PLease enter a valid weight";
		cin >> weight;
	}
	cout << "The weight of your package is:" << weight << endl;
	return weight;

	cout << "Please enter the distance the package is being shipped:";
	cin >> distance;
	cout << "The distance you want to ship is:" << distance << " Miles" << endl;
	return distance;

	if (weight <= 2)
	{
		rate = 1.10;
		cout << "Your rate would be $" << rate << endl;
	}

	else if (weight <= 6)
	{
		rate = 2.20;
		cout << fixed<<setprecision(2)<<"Your rate would be $" << rate << endl;
	}
	else if (weight <= 10)
	{
		rate = 3.70;
		cout << fixed<<setprecision(2)<<"Your rate would be $" << rate << endl;
	}
	else
	{		rate = 4.80;
	cout << fixed<<setprecision(2)<<"Your rate would be $" << rate << endl;
	}

	double Distance2 = distance / 500;
	double final = Distance2 * rate;
	
	cout << setw(20) << fixed << setprecision(2) << "Your Total Shipping Cost is: $" << final << endl;
	
	
	return 0;
}

