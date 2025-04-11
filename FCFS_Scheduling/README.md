## FCFS Scheduling
- test implementation of the **First-Come, First-Served (FCFS)** a simplest CPU scheduling algorithm.

### Sample Output
| Process ID | Arrival Time | Burst Time | Waiting Time | Turnaround Time | Completion Time |
|------------|--------------|------------|--------------|-----------------|-----------------|
| 1          | 0            | 4          | 0            | 4               | 4               |
| 2          | 1            | 3          | 3            | 6               | 7               |
| 3          | 2            | 5          | 5            | 10              | 12              |
| 4          | 3            | 2          | 9            | 11              | 14              |
| 5          | 4            | 1          | 10           | 11              | 15              |
| 6          | 5            | 4          | 10           | 14              | 19              |
| 7          | 6            | 3          | 13           | 16              | 22              |
| 8          | 7            | 2          | 15           | 17              | 24              |
| 9          | 8            | 1          | 16           | 17              | 25              |
| 10         | 9            | 4          | 16           | 20              | 29              |