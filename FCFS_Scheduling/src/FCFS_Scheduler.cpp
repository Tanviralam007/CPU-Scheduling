#include "../include/FCFS_Scheduler.h"
#include <iostream>
#include <algorithm>

FCFS_Scheduler::FCFS_Scheduler(std::vector<Process>& processes)
    : processes_(processes) {}

void FCFS_Scheduler::schedule() {
    int current_time = 0;
    for (auto& process : processes_) {
        process.waiting_time = current_time - process.arrival_time;

        if (process.waiting_time < 0) 
            process.waiting_time = 0;  // Ensure no negative waiting time
        
        process.completion_time = current_time + process.burst_time;
        process.turnaround_time = process.completion_time - process.arrival_time;
        current_time = process.completion_time;
    }
}

void FCFS_Scheduler::printResults() {
    std::cout << "Process ID | Arrival Time | Burst Time | Waiting Time | Turnaround Time | Completion Time\n";
    for (const auto& process : processes_) {
        std::cout << process.id << "\t\t" 
                  << process.arrival_time << "\t\t" 
                  << process.burst_time << "\t\t" 
                  << process.waiting_time << "\t\t" 
                  << process.turnaround_time << "\t\t" 
                  << process.completion_time << "\n";
    }
}
