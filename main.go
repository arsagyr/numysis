package main

import (
	"fmt"
	"numysis/error"
	"numysis/polynom"
)

func main() {

	var p polynom.Polynom
	s := []float32{144.6, -78.24, 58.2, 19.6, 4.3, -1.2}
	p = polynom.Polynom{
		Arguement:    -5,
		Coefficients: s,
	}
	fmt.Println(p.GetSum())
	error.Cos2Xerror(-0.75, 10, 0.000001)
}
