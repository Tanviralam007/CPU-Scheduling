# **SJF Scheduling**
## **Test Implementation of Shortest Job First (SJF) Scheduling**

The **Shortest Job First (SJF)** algorithm, a CPU scheduling technique that selects the process with the smallest burst time for execution next. Below is an example of its implementation:

---

### **Sample Input**

```plaintext
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
```

---

### **SJF Scheduling Results**

| **PID** | **Process**   | **Arrival Time** | **Burst Time** | **Completion Time** | **Turnaround Time** | **Waiting Time** |
|---------|---------------|------------------|----------------|---------------------|---------------------|------------------|
| 1       | Process A     | 0                | 6              | 6                   | 6                   | 0                |
| 2       | Process B     | 1                | 4              | 12                  | 11                  | 7                |
| 3       | Process C     | 2                | 2              | 8                   | 6                   | 4                |
| 4       | Process D     | 3                | 8              | 20                  | 17                  | 9                |

---

### **Performance Metrics**

- **Average Waiting Time**: `5`
- **Average Turnaround Time**: `10`

---