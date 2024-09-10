#include <iostream>
#include "task.h"
using namespace std;

int main()
{
    task task1("Do loundry", "today", true), task2("Cook a dinner", "7 o'clock", false);
    cout << task1.printEverything() << task2.printEverything() << endl;

    task1.changeName("Clean the house").changePriority();
    cout << task1.printEverything() << task2.printEverything();

    task* task3 = new task("Go to the gym", "tomorrow", false);

    cout << task3->printEverything() << endl;
    delete task3;

    cout << "--------------------------------------" << endl;
    task1.deleteTask();
    cout << task1.printEverything() << task2.printEverything();

    return 0;
}