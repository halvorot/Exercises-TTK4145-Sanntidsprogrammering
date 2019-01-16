# Mutex and Channel basics

### What is an atomic operation?
> Operations that run completely independently of any other processes. The operation is NOT communicating with, interfering with or being affected by other tasks while the operation is being performed. 

### What is a semaphore?
> A non—negative integer Variable that, apart from initialization, can only be acted upon by two procedures. These procedures are called "wait" and "signal".
> (1) wait(S) — If the Value of the semaphore S, is greater than zero then decrement its Value by 1; otherwise delay the task until S is greater than zero (and then decrement its value).
> (2) signal (S) — Increment the value of the semaphore, S, by 1.

### What is a mutex?
> A flag that indicates that a resource is in use and can not be accessed by any other process. 
> When a task locks (acquires) a mutex only it can unlock (release) it. If a task tries to unlock a mutex it hasn’t locked (thus doesn’t own) then an error condition is encountered and the mutex is not unlocked.

### What is the difference between a mutex and a binary semaphore?
> Mutex can be released only by thread that had acquired it, while you can signal semaphore from any other thread (or process).

### What is a critical section?
> *Your answer here*

### What is the difference between race conditions and data races?
 > *Your answer here*

### List some advantages of using message passing over lock-based synchronization primitives.
> *Your answer here*

### List some advantages of using lock-based synchronization primitives over message passing.
> *Your answer here*
