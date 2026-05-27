Provide a way of approximating a function with a polynomial 
## Maclaurin Series<
$$f(x)=f(0)+f'(0)x+\frac{1}{2}f''(0)x^2+\dots+\frac{1}{n!}f^{n}(0)x^n=\sum_{n=0}^\infty \frac{1}{n!}f^{n}(0)x^n$$
## Taylor Series
Generalizes the Maclaurin series to consider an expansion at a point other than $x=0$, $x=a$, this gives: $$f(x)=f(a)+f'(a)(x-a)+\frac{1}{2}f''(a)(x-a)^2+\dots+\frac{1}{n!}f^{n}(a)(x-a)^n$$
$$=\sum_{n=0}^\infty \frac{1}{n!}f^{n}(a)(x-a)^n$$
Note that for $a=0$ this gives the Maclaurin series
Taking a finite number of terms in the series gives us an approximation to $f(x)$ near $x=a$ 