#ifndef PROCESS_H
#define PROCESS_H

struct Process {
    int id;         
    int arrival_time;
    int burst_time;
    int waiting_time;
    int turnaround_time;
    int completion_time;
};

#endif // PROCESS_H