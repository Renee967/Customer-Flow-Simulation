#ifndef HEADER_H
#define HEADER_H
#define MAX_SIZE 15

using namespace std; 
struct Task {
	string name;
	int dueDay;
	int dueMonth;
	int dueYear;
	bool isComplete = false;
	int priority;
};
void viewTasks(Task[], int);
void removeTasks(Task[], int&);
void addTasks(Task[], int&);
void input(Task[], int&);




#endif
