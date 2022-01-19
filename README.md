```
Million:
pmap -x $(pgrep -f goroutines-test)
3295268 kB
pmap -x $(pgrep -f cpp)
8202104 kB

Ten million:
Go: 12501400 kB
C++: crashed "Resource temporarily unavailable"
```
