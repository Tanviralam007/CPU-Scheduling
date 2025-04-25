#ifndef PROCESS_H
#define PROCESS_H

#include <string>

class Process {
private:
    int processId;
    std::string processName;
    int arrivalTime;
    int burstTime;
    int completionTime;
    int turnaroundTime;
    int waitingTime;
    bool isCompleted;

public:
    Process(int id, const std::string& name, int arrival, int burst);
    
    int getProcessId() const;
    std::string getProcessName() const;
    int getArrivalTime() const;
    int getBurstTime() const;
    int getCompletionTime() const;
    int getTurnaroundTime() const;
    int getWaitingTime() const;
    bool getIsCompleted() const;
    
    void setCompletionTime(int time);
    void setTurnaroundTime(int time);
    void setWaitingTime(int time);
    void setIsCompleted(bool completed);
    
    void printProcessInfo() const;
};

#endif // PROCESS_H