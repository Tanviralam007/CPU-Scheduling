#include "../include/process.h"
#include "../include/scheduler.h"
#include <iostream>
#include <limits>

void clearInputBuffer() {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

int main() {
    Scheduler scheduler;
    
    std::cout << "Shortest Job First (SJF) CPU Scheduler Implementation\n";
    std::cout << "====================================================\n\n";
    
    int numProcesses;
    std::cout << "Enter the number of processes: ";
    std::cin >> numProcesses;
    
    if (std::cin.fail() || numProcesses <= 0) {
        std::cout << "Invalid input. Please enter a positive integer.\n";
        return 1;
    }
    
    // Input process details
    for (int i = 0; i < numProcesses; i++) {
        int pid, arrivalTime, burstTime;
        std::string processName;
        
        std::cout << "\nProcess " << (i + 1) << " details:\n";
        
        std::cout << "Process ID: ";
        std::cin >> pid;
        
        clearInputBuffer();
        std::cout << "Process Name: ";
        std::getline(std::cin, processName);
        
        std::cout << "Arrival Time: ";
        std::cin >> arrivalTime;
        
        std::cout << "Burst Time: ";
        std::cin >> burstTime;
        
        if (std::cin.fail() || arrivalTime < 0 || burstTime <= 0) {
            std::cout << "Invalid input. Please restart and enter valid values.\n";
            return 1;
        }
        
        Process process(pid, processName, arrivalTime, burstTime);
        scheduler.addProcess(process);
    }
    
    // Run SJF scheduling algorithm
    scheduler.runSJFScheduling();
    
    scheduler.displaySchedule();
    
    return 0;
}