In the `cpp` directory, there is a program that spawns 1,000,000 threads. In the `go` directory is a program that spawns 1,000,000 goroutines. Guess which one allocated less memory?

```
Million:
pmap -x $(pgrep -f goroutines-test)
3,295,268 kB
pmap -x $(pgrep -f cpp)
8,202,104 kB

How about ten million threads and goroutines?:
Go: 12,501,400 kB
C++: crashed "Resource temporarily unavailable"
```
