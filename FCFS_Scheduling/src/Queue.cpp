#include "../include/Queue.h"

void Queue::enqueue(const Process& process) {
    processQueue.push(process);
}

Process Queue::dequeue() {
    Process front = processQueue.front();
    processQueue.pop();
    return front;
}

bool Queue::isEmpty() {
    return processQueue.empty();
}

int Queue::size() {
    return processQueue.size();
}
