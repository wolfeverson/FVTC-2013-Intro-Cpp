#include <iostream>
#include <iomanip>
#include <conio.h>
#include <string>
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
		//testdata
	employee jobs;
	jobs.num = 3462;
	jobs.name = "Jobs";
	jobs.rate = 4.62;
	jobs.hours = 40;
	employee hoop;
	hoop.num = 6793;
	hoop.name = "Hooper";
	hoop.rate = 5.83;
	hoop.hours = 38;
	//testdata end
	double totalgrass = 0; //assignment asks for "total grass pay for all employees"...rate * hours 
	bool isQuit = false;
	employee *empList  =  new employee[2];  //debug
	empList[0] = jobs;
	empList[1] = hoop;
	int empIndex = 2; //2 for debug


	
	while (!isQuit)
	{
		if (empIndex >= (sizeof(empList[0])/sizeof(empList)))
		{

		}
		employee tempEmp;
		cout << "Employee Name?(last)";
		getline(cin, tempEmp.name);
		cout << "Employee Number?";
		cin >> tempEmp.num;
		cout << "Employee Hours?";
		cin >> tempEmp.hours;
		cout << "Employee Rate?";
		cin >> tempEmp.rate;
		if (tempEmp.name != "q")
		{
			empList[empIndex] = tempEmp;
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
		cout << setw(10) << empList[i].num << setw(10) << empList[i].name << setw(10) << empList[i].rate << setw(10) << empList[i].hours;
		totalgrass += (empList[i].hours * empList[i].rate);
		cout << endl;
	}
	cout << endl << endl << "Total for all employees is: " << totalgrass;
	getch();

}
