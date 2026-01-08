# Trapezium Rule

Approximation of the integral $\int_{a}^{b}f(x)\ dx$
Area of trapezium is:$$\frac{h}{2}(a+b)$$
Trapezium Rule
$$\int_{a}^{b}f(x)\ dx \approx \frac{h}{2}[y_{0}+2(y_{1}+y_{2}+\dots+y_{n-1})+y_{n}]$$
where $$h=\frac{b-a}{n}$$
E.g. 
Use trapezium rule with 3 strips to find approximate value of: $$\int_{0}^{1.5}\sqrt{x^2+2x}\ dx$$
$$\begin{align*}
n=3, a&=0, b=1.5\\
h&=\frac{1.5-0}{3}=0.5\\
\int_{0}^{1.5}\sqrt{x^2+2x}\ dx&\approx \frac{h}{2}[y_{0}+2(y_{1}+y_{2}+\dots+y_{n-1})+y_{n}]\\
&=\frac{0.5}{2}[0+2(1.118\dots+1.732\dots)+2.291\dots]\\
&=\frac{1}{4}[7.991\dots]\\
&=2.00\ (3.sf)
\end{align*}$$
Will either be an overestimate or underestimate
Depends on the shape of the graph and whether trapeziums lie above the curve or stay above
# Simpson's Rule

Approximation of the integral $\int_{a}^{b}f(x)\ dx$
$$\begin{align*}
\int_{a}^{b}f(x)\ dx&\approx S_{n}\\
&=\frac{h}{3}(y_{0}+4y_{1}+2y_{2}+4y_{3}+2y_{4}+\dots+2y_{n-2}+4y_{n-1}+y_{n})\\
&=\frac{h}{3}(\sum y_{\text{ends}}+4\sum y_{\text{odds}}+2\sum y_{\text{evens}})
\end{align*}$$
Same as trapezium rule where: $$h=\frac{b-a}{n}$$
E.g. 
Use simpsons rule with $n=4$ intervals (strips) to evaluate $\int_{1}^{3} \frac{2}{\sqrt{x}}\ dx$
$$\begin{align*}
\int_{1}^{3} \frac{2}{\sqrt{x}}\ dx&\approx \frac{1}{3}(0.5)[(2.0000+1.1547)+4(1.6330+1.2649)+2(1.4142)]\\
&=\frac{1}{3}(0.5)[3.1547+11.5916+2.8284]\\
&=2.929\ \text{3.dp}
\end{align*}$$
