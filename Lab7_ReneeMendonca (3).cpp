#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include "header_h.h"

using namespace std;
enum Actions { stop = 0, view = 1, remove_r = 2, add = 3, mark = 4 };
int main() {

	Task tasks[MAX_SIZE];

	int numOfTasks = 0;

	int action;

	input(tasks, numOfTasks);

	do {

		cout << "\nMenu:" << endl;

		cout << "0 - exit" << endl;

		cout << "1 - view tasks" << endl;

		cout << "2 - remove a task" << endl;

		cout << "3 - add a tasks" << endl;

		cout << "4 - mark task as completed" << endl;

		cout << "What would you like to do next? Enter a number: ";

		cin >> action;



		switch (action) {

		case stop:

			cout << "Thank you for choosing Anderson Inc. Hope to see you soon!" << endl;

			break;

		case view:

			viewTasks(tasks, numOfTasks);

			break;

		case remove_r:

			removeTasks(tasks, numOfTasks);

			break;

		case add:

			addTasks(tasks,numOfTasks);

			break;

		case mark:

			break;

		}



	} while (action != stop);



	return 0;







}

