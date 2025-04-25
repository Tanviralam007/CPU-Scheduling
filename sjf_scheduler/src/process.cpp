#include "../include/process.h"
#include <iostream>

Process::Process(int id, const std::string& name, int arrival, int burst)
    : processId(id), processName(name), arrivalTime(arrival), burstTime(burst),
      completionTime(0), turnaroundTime(0), waitingTime(0), isCompleted(false) {}


int Process::getProcessId() const{
    return processId;
}

std::string Process::getProcessName() const {
    return processName;
}

int Process::getArrivalTime() const {
    return arrivalTime;
}

int Process::getBurstTime() const {
    return burstTime;
}

int Process::getCompletionTime() const {
    return completionTime;
}

int Process::getTurnaroundTime() const {
    return turnaroundTime;
}

int Process::getWaitingTime() const {
    return waitingTime;
}

bool Process::getIsCompleted() const {
    return isCompleted;
}

void Process::setCompletionTime(int time) {
    completionTime = time;
}

void Process::setTurnaroundTime(int time) {
    turnaroundTime = time;
}

void Process::setWaitingTime(int time) {
    waitingTime = time;
}

void Process::setIsCompleted(bool completed) {
    isCompleted = completed;
}

void Process::printProcessInfo() const {
    std::cout << "Process ID: " << processId << "\n"
              << "Process Name: " << processName << "\n"
              << "Arrival Time: " << arrivalTime << "\n"
              << "Burst Time: " << burstTime << "\n"
              << "Completion Time: " << completionTime << "\n"
              << "Turnaround Time: " << turnaroundTime << "\n"
              << "Waiting Time: " << waitingTime << "\n"
              << "Is Completed: " << (isCompleted ? "Yes" : "No") << "\n";
}