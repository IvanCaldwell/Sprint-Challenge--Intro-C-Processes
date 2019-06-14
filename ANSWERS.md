**1. List all of the main states a process may be in at any point in time on a standard Unix system. Briefly explain what each of these states means.**
Sleeping: the process is blocked waiting for some event, or it has been put to sleep.
Ready to Run: the process is awake and ready to be scheduled on a CPU as soon as one frees up.
Running: the process is running on the CPU.

**2. What is a zombie process?**
A zombie process is a child process that has died, and it has not been reaped by its parent.


**3. How does a zombie process get created? How does one get destroyed?**
I feel this question is redundant... A zombie process is created when the parent process hasn't reaped
their child process. The zombie process can be destroy when the parent read the child exit status by
calling wait().


**4. What are some of the benefits of working in a compiled language versus a non-compiled language? More specifically, what benefits are there to be had from taking the extra time to compile our code?**
I'm assuming the question is referring to compiled language execute faster than interpreted languages because
they are compiled into machine code, while interpreted languages execute slower because each line of code has to 
interpreted into machine code every time... I don't know... 