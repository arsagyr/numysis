package polynom

type Polynom struct {
	Arguement    float32
	Coefficients []float32
}

func MakePolynom(a float32, c []float32) Polynom {
	return Polynom{
		Arguement:    a,
		Coefficients: c,
	}
}
func (p Polynom) AddCoefficient(nc float32) {
	p.Coefficients = append(p.Coefficients, nc)
}

func (p Polynom) SetCoefficient(c float32, i int) {
	if i < len(p.Coefficients) {
		p.Coefficients[i] = c
	} else {
		panic("Out a range of the slice")
	}
}

func (p Polynom) SetArguemet(x float32) {
	p.Arguement = x
}

func (p Polynom) GetSum() float32 {
	var sum float32 = 0
	var i int
	l := len(p.Coefficients)
	for i = l - 1; i > 0; i-- {
		sum = p.Arguement * (sum + p.Coefficients[i])
	}
	sum += p.Coefficients[i]
	return sum
}
