package main

import (
	"fmt"
	"time"
)

func main() {
	fmt.Println("vim-go")

	for {
		fmt.Println("vim-go test")
		time.Sleep(time.Second)
	}
}
