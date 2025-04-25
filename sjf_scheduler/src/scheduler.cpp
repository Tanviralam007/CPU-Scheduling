#include "../include/scheduler.h"
#include <iostream>
#include <algorithm>
#include <iomanip>
#include <limits>

Scheduler::Scheduler() : averageWaitingTime(0), averageTurnaroundTime(0) {}

void Scheduler::addProcess(const Process& process) {
    processes.push_back(process);
}

void Scheduler::runSJFScheduling() {
    if (processes.empty()) {
        std::cout << "No processes to schedule.\n";
        return;
    }
    
    // Sort processes by arrival time initially
    std::sort(processes.begin(), processes.end(), 
              [](const Process& p1, const Process& p2) {
                  return p1.getArrivalTime() < p2.getArrivalTime();
              });
    
    int currentTime = processes[0].getArrivalTime();
    int completedProcesses = 0;
    int n = processes.size();
    
    // Continue until all processes are completed
    while (completedProcesses < n) {
        // Find the process with the shortest burst time among the arrived processes
        int shortestJobIndex = -1;
        int shortestBurstTime = std::numeric_limits<int>::max();
        
        for (int i = 0; i < n; i++) {
            // If the process has arrived and is not completed
            if (processes[i].getArrivalTime() <= currentTime && 
                !processes[i].getIsCompleted() && 
                processes[i].getBurstTime() < shortestBurstTime) {
                
                shortestJobIndex = i;
                shortestBurstTime = processes[i].getBurstTime();
            }
        }
        
        // If no process is found, advance time
        if (shortestJobIndex == -1) {
            currentTime++;
            continue;
        }
        
        // Execute the process
        currentTime += processes[shortestJobIndex].getBurstTime();
        processes[shortestJobIndex].setCompletionTime(currentTime);
        processes[shortestJobIndex].setIsCompleted(true);
        completedProcesses++;
        
        // Calculate turnaround time and waiting time
        int turnaroundTime = processes[shortestJobIndex].getCompletionTime() - 
                             processes[shortestJobIndex].getArrivalTime();
        
        int waitingTime = turnaroundTime - processes[shortestJobIndex].getBurstTime();
        
        processes[shortestJobIndex].setTurnaroundTime(turnaroundTime);
        processes[shortestJobIndex].setWaitingTime(waitingTime);
    }
    
    calculateMetrics();
}

void Scheduler::calculateMetrics() {
    int totalWaitingTime = 0;
    int totalTurnaroundTime = 0;
    
    for (const auto& process : processes) {
        totalWaitingTime += process.getWaitingTime();
        totalTurnaroundTime += process.getTurnaroundTime();
    }
    
    averageWaitingTime = static_cast<double>(totalWaitingTime) / processes.size();
    averageTurnaroundTime = static_cast<double>(totalTurnaroundTime) / processes.size();
}

void Scheduler::displaySchedule() const {
    std::cout << "\nShortest Job First (SJF) Scheduling Results:\n";
    std::cout << "----------------------------------------------------------------------\n";
    std::cout << std::left << std::setw(8) << "PID" 
              << std::setw(15) << "Process" 
              << std::setw(12) << "Arrival" 
              << std::setw(12) << "Burst" 
              << std::setw(12) << "Completion" 
              << std::setw(12) << "Turnaround" 
              << std::setw(12) << "Waiting" << "\n";
    std::cout << "------------------------------------------------------------------------\n";
    
    for (const auto& process : processes) {
        std::cout << std::left << std::setw(8) << process.getProcessId()
                  << std::setw(15) << process.getProcessName()
                  << std::setw(12) << process.getArrivalTime()
                  << std::setw(12) << process.getBurstTime()
                  << std::setw(12) << process.getCompletionTime()
                  << std::setw(12) << process.getTurnaroundTime()
                  << std::setw(12) << process.getWaitingTime() << "\n";
    }
    
    std::cout << "-------------------------------------------------------------------------\n";
    std::cout << "Average Waiting Time: " << averageWaitingTime << "\n";
    std::cout << "Average Turnaround Time: " << averageTurnaroundTime << "\n";
}

double Scheduler::getAverageWaitingTime() const {
    return averageWaitingTime;
}

double Scheduler::getAverageTurnaroundTime() const {
    return averageTurnaroundTime;
}