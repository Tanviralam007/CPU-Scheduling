#ifndef FCFS_SCHEDULER_H
#define FCFS_SCHEDULER_H

#include <vector>
#include "../include/Process.h" 

class FCFS_Scheduler {
public:
    FCFS_Scheduler(std::vector<Process>& processes);  
    void schedule();  
    void printResults(); 

private:
    std::vector<Process>& processes_;
};

#endif // FCFS_SCHEDULER_H
