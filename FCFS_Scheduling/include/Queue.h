#ifndef QUEUE_H
#define QUEUE_H

#include <queue>
#include "../include/Process.h"

class Queue {
public:
    void enqueue(const Process& process);
    Process dequeue();
    bool isEmpty();
    int size();

private:
    std::queue<Process> processQueue;
};

#endif // QUEUE_H
