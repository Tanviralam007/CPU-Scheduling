#ifndef SCHEDULER_H
#define SCHEDULER_H

#include "../include/process.h"
#include <vector>

class Scheduler {
private:
    std::vector<Process> processes;
    double averageWaitingTime;
    double averageTurnaroundTime;
    
public:
    Scheduler();
    
    void addProcess(const Process& process);
    
    // Run SJF scheduling algorithm (non-preemptive)
    void runSJFScheduling();
    
    // Calculate and set metrics for all processes
    void calculateMetrics();
    
    void displaySchedule() const;
    
    double getAverageWaitingTime() const;
    double getAverageTurnaroundTime() const;
};

#endif // SCHEDULER_H