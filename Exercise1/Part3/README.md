# Reasons for concurrency and parallelism


To complete this exercise you will have to use git. Create one or several commits that adds answers to the following questions and push it to your groups repository to complete the task.

When answering the questions, remember to use all the resources at your disposal. Asking the internet isn't a form of "cheating", it's a way of learning.

 ### What is concurrency? What is parallelism? What's the difference?
 > - Concurrency is when tasks are performed at exactly the same time. 
 - Parallelism is when tasks are performed "side-by-side" but not necessarily at the exact same time.
 
 ### Why have machines become increasingly multicore in the past decade?
 > CPU's have reached a limit and can not get much faster. This is because of: power consumption, heat generation, limits of speed in the physical conductors.
 The solution is then to run multiple cores to achieve faster computing.

 ### What kinds of problems motivates the need for concurrent execution?
 (Or phrased differently: What problems do concurrency help in solving?)
 > In the real world, alot of things happen at the same time. To get this behaviour on computers, we need concurrency.
 When we have multiple cores, we need to use them -> concurrency.
 
 ### Does creating concurrent programs make the programmer's life easier? Harder? Maybe both?
 (Come back to this after you have worked on part 4 of this exercise)
 > - It makes it easier in the way that it is a logical way to think, and makes it easier to abstract the problem.
 - It makes it harder in the way that it can be difficult to make all the threads cooperate and interact. e.g. sharing of memory etc.
 
 ### What are the differences between processes, threads, green threads, and coroutines?
 > - Process: 
 - Thread: Managed and scheduled by the OS
 - Green Thread: Managed and scheduled by the runtime (i.e. not OS-managed)
 - Coroutines:
 
 ### Which one of these do `pthread_create()` (C/POSIX), `threading.Thread()` (Python), `go` (Go) create?
 > - pthread_create(): Thread (OS-managed)
 - threading.Thread(): Thread (OS-managed) (but is influenced by GIL)
 - go: coroutine, looks like green threads to the programmer but is not entirely true.

 ### How does pythons Global Interpreter Lock (GIL) influence the way a python Thread behaves?
 > The python interpreter can only interpret one piece of code at a time, so no two threads can run the interpreter at once. Spawning more OS threads does not increase performance, the OS will just run whatever thread the python interpreter has made runnable.
 
 ### With this in mind: What is the workaround for the GIL (Hint: it's another module)?
 > - Spawn more interpreters (Use the "Multiprocessing" module)
 - Share memory between the interpreters (which run in their own processes) using memory mapping
 
 ### What does `func GOMAXPROCS(n int) int` change? 
 > - Distributes/maps goroutines over more OS threads
 - Switching between OS threads is much slower than switching between goroutines, so increasing GOMAXPROCS does not necessarily increase performance