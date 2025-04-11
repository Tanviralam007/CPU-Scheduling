#include <iostream>
#include <vector>
#include "../include/FCFS_Scheduler.h"

int main() {
    std::vector<Process> processes = {
        {1, 0, 4, 0, 0, 0},
        {2, 1, 3, 0, 0, 0},
        {3, 2, 5, 0, 0, 0},
        {4, 3, 2, 0, 0, 0},
        {5, 4, 1, 0, 0, 0},
        {6, 5, 4, 0, 0, 0},
        {7, 6, 3, 0, 0, 0},
        {8, 7, 2, 0, 0, 0},
        {9, 8, 1, 0, 0, 0},
        {10, 9, 4, 0, 0, 0}
    };

    FCFS_Scheduler scheduler(processes);  
    scheduler.schedule();  
    scheduler.printResults();

    return 0;
}