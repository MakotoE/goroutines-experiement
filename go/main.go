package main

import (
	"sync"
	"time"
)

const million = 1000000

func main() {
	wg := sync.WaitGroup{}
	wg.Add(million)

	for i := 0; i < million; i++ {
		go func() {
			time.Sleep(time.Hour)
			wg.Done()
		}()
	}
	wg.Wait()
}
