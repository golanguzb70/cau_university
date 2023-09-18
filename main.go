package main

import "fmt"

func fibonnacci(n int) int {
	if n <= 2 {
		return 1
	}

	return fibonnacci(n - 1) + fibonnacci(n - 2)
}

func main() {
	fmt.Println(fibonnacci(34))
}