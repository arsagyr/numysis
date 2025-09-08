package error

import (
	"fmt"
	"math"
)

func Cos2XerrorDIS(x float32, n int) float32 {
	return -(x * x * 2) / float32((2*n-1)*n)
}

func Cos2Xerror(x float32, n int, e float64) {
	x1 := 4 * x * x / 2
	var sum float32 = 1 - x1
	for i := 2; i < n; i++ {
		x1 *= Cos2XerrorDIS(x, i)
		sum = sum + x1
		if math.Abs(float64(x1)) < e {
			fmt.Println(i)
			break
		}
	}
	fmt.Println(sum)
}
