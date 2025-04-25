# **SJF Scheduling**
- Test Impelementation of the **Shortest Job First**, a CPU Scheduling Algorithm

## **Sample Input-Output**

Enter the number of processes: 4

Process 1 details:
Process ID: 1
Process Name: Process A
Arrival Time: 0
Burst Time: 6

Process 2 details:
Process ID: 2
Process Name: Process B
Arrival Time: 1
Burst Time: 4

Process 3 details:
Process ID: 3
Process Name: Process C
Arrival Time: 2
Burst Time: 2

Process 4 details:
Process ID: 4
Process Name: Process D
Arrival Time: 3
Burst Time: 8

Shortest Job First (SJF) Scheduling Results:
------------------------------------------------------------------------------
PID     Process        Arrival     Burst       Completion  Turnaround  Waiting     
------------------------------------------------------------------------------
1       Process A      0           6           6           6           0           
2       Process B      1           4           12          11          7           
3       Process C      2           2           8           6           4           
4       Process D      3           8           20          17          9           
------------------------------------------------------------------------------
Average Waiting Time: 5
Average Turnaround Time: 10