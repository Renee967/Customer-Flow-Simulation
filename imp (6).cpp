#include<iostream>
#include<fstream>
#include<string>
using namespace std;
#include "header_h.h"

void viewTasks(Task tasks[], int numOfTasks) {

	cout << numOfTasks << " tasks records read ... " << endl;

	cout << "name" << '\t' << "dueDay/dueMonth/dueYear" << '\t' << "priority" << endl;

	for (int j = 0; j < numOfTasks; j++) {



		cout << tasks[j].name << '\t' << tasks[j].dueDay << '/' << tasks[j].dueMonth << '/' << tasks[j].dueYear << '\t' << tasks[j].priority << endl;

	}

}
void input(Task tasks[], int &numOfTasks)

{

	//read in the tasks records from a file

	string result = "not completed";

	ifstream ifs("tasksRecords.txt");

	string name;

	int dueDay, dueMonth, dueYear, priority;



	if (ifs.fail()) {

		cout << "Error opening tasks records file (tasksRecords.txt)" << endl;

		exit(1);

	}

	while (!ifs.eof()) {

		ifs >> name >> dueDay >> dueMonth >> dueYear >> priority;



		tasks[numOfTasks].name = name;

		tasks[numOfTasks].dueDay = dueDay;

		tasks[numOfTasks].dueMonth = dueMonth;

		tasks[numOfTasks].dueYear = dueYear;

		tasks[numOfTasks].priority = priority;

		numOfTasks++;

	}

	ifs.close();

}


void removeTasks(Task tasks[], int &numOfTasks) {
string name;
cout << "Enter the name of the task you want to remove"<<endl;
cin >> name;
for (int i = 0; i < numOfTasks; i++)
{
if (tasks[i].name == name)
{
tasks[i] = tasks[numOfTasks - 1];
numOfTasks--;
}
}

}
void addTasks(Task tasks[], int &numOfTasks) {
string n;
int d, m, y, p;
if (numOfTasks < MAX_SIZE)
{
cout << "Enter the name of the task, the priority, and then the date in the format: 'name priority month day year'" << endl;
cin.ignore();
cout<<"The task is: "<<endl;
getline(cin, n);
cin >> p;
cin>> m >> d >> y;
Task t;
t.name = n;
t.dueMonth = m;
t.dueDay = d;
t.dueYear = y;
t.priority = p;
tasks[numOfTasks] = t;
numOfTasks++;
}
}
