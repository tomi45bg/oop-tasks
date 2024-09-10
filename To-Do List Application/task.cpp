#include "task.h"
#include <sstream>

task::task(string n, string t, bool p) {
	name = n;
	time = t;
	priority = p;
}

task& task::changeName(string n) {
	this->name = n;
	return *this;
}

task& task::changeTime(string t) {
	this->time = t;
	return *this;
}

task& task::changePriority() {
	if (this->priority == true) {
		this->priority = false;
	}
	else {
		this->priority = true;
	}

	return *this;
}

string task::printEverything() {
	stringstream ss;

	if (name == "" || time == "") {
		ss << "This task is deleted!" << endl;
	}
    else {
		ss << name << "      " << time << "     " << priority << endl;
	}

	string string = ss.str();

	return string;
}

void task::deleteTask() {
	this->changeName("");
	this->changeTime("");

	cout << "Deleted!" << endl;
	this->printEverything();
	cout << endl;
}