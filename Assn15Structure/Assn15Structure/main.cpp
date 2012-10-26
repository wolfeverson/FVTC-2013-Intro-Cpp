#include <iostream>
#include <iomanip>
#include <conio.h>
#include <string>
#include <vector>
using namespace std;

struct employee
{
	int num;
	string name;
	float rate;
	double hours;
};

void main()
{
	////testdata
	//employee jobs;
	//jobs.num = 3462;
	//jobs.name = "Jobs";
	//jobs.rate = 4.62;
	//jobs.hours = 40;
	//employee hoop;
	//hoop.num = 6793;
	//hoop.name = "Hooper";
	//hoop.rate = 5.83;
	//hoop.hours = 38;
	////testdata end
	double totalgrass = 0; //assignment asks for "total grass pay for all employees"...rate * hours 
	bool isQuit = false;
	vector<employee> empList(1);
	//empList[0] = jobs;
	//empList[1] = hoop;
	int empIndex = 0; //2 for testdata


	
	while (!isQuit)
	{
		//increases vector size to allocate memory as needed
		if (empIndex >= empList.size())
		{
			empList.resize(empIndex +5);
		}
		//input
		employee tempEmp;
		cout << "Employee Name?(last)";
		cin >> tempEmp.name;
		cout << "Employee Number?";
		cin >> tempEmp.num;
		cout << "Employee Hours?";
		cin >> tempEmp.hours;
		cout << "Employee Rate?";
		cin >> tempEmp.rate;
		//checks loop 
		if (tempEmp.name != "q")
		{
			empList.at(empIndex) = tempEmp;
			empIndex++;
		}
		else
		{
			isQuit = true;
		}
	}
	//output
	cout << "\n\n\n\n\n\n\n";
	cout << setw(10) << "Number" << setw(10) << "Name" << setw(10) << "Rate" << setw(10) << "Hours" << endl;
	for (int i = 0; i < empIndex; i++)
	{
		cout << setw(10) << empList.at(i).num << setw(10) << empList.at(i).name << setw(10) << empList.at(i).rate << setw(10) << empList.at(i).hours;
		totalgrass += (empList.at(i).hours * empList.at(i).rate);
		cout << endl;
	}
	cout << endl << endl << "Total for all employees is: " << totalgrass;
	getch();

}
