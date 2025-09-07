package polynom

func PolynomSum(a float32, numbers ...float32) float32 {
	var sum float32 = 0
	for _, number := range numbers {
		sum = a * (sum + number)
	}
	return sum
}
