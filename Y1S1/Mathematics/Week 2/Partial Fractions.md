<h4>Discriminant:</h4>
$$\Delta=b^2-4ac$$$\Delta>0$ $$f(x)=a(x-x_{1})(x-x_{2})$$
where $(x-x_{1})$ and $(x-x_{2})$ are distinct factors

$\Delta=0$ $$f(x)=a(x-x_{1})^2$$
where $(x-x_{1})$ is a repeated liner factor

$\Delta<0$ $$\sqrt{-x},\ \text{no real factors}$$
where $x_{1},x_{2}$ are complex numbers 

# Rational Functions

Ratios of polynomial functions $\frac{P(X)}{Q(X)}$

[[Polynomials|In the case]]: $deg(P)<deg(Q)$

E.g.
$$\frac{7x+2}{x^2+x-2}$$
$$\begin{align*}
P(x) &= 7x+2\\ Q(x)&=x^2+x-2
\end{align*}$$
First, Factorise Q(x), Then split the fraction up into a sum of simpler fractions: $$\frac{7x+2}{x^2+x-2}=\frac{7x+2}{(x-1)(x+2)}=\frac{A}{x-1}+\frac{B}{x+2}$$
Then add the partial fractions together and cancel out the denominator from both sides: $$7x+2=A(x+2)+B(x-1)=(A+B)x+(2A-B)$$
2 methods for then solving A & B
<h4>Substitution Method</h4>
Sub a suitable number for x to leave you with just one constant on the RHS 
E.g. x = -2:
$$\begin{align*}
7(-2)+2&=A(0)+B(-2-1)\\
-14+2&=-3B\\
-12&=-3B\Rightarrow B=4
\end{align*}$$
E.g. x = 1:
$$\begin{align*}
7(1)+2&=A(1+2)+B(0)\\
9&=3A\Rightarrow A=3
\end{align*}$$
$$\therefore \frac{7x+2}{x^2+x-2}=\frac{3}{x-1}+\frac{4}{x+2}$$
<h4>Equating Coefficients</h4>
Equate constant terms and coefficients of x, then solve equations for A & B simultaneously
E.g.$$\begin{align*}
7x+2&=(A+B)x+(2A-B)\\
7&=A+B\\
2&=2A-B\\
\text{Solving for A gives:}\ A&=3\\
\text{Solving for B gives:}\ B&=4
\end{align*}
$$
# General Rules

Decomposition in partial fractions of the rational function $$f(x)=\frac{P(x)}{Q(x)}$$ depends on the factorisation of $Q(x)$
![[Pasted image 20251230014235.png]]

