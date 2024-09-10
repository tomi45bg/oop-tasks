#pragma once
#include <iostream>
#include <string>

using namespace std;

class task
{
private:

	string name;
	string time;
	bool priority;

public:
    task(string n, string t, bool p);

	task& changeName(string n);
	task& changeTime(string n);
	task& changePriority();

	string printEverything();
	void deleteTask();
};

