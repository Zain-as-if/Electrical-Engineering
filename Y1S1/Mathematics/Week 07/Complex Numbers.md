$$\sqrt{ -1 }=i$$
$z= a+bi$
Complex Number 

a = real part
b = imaginary part 

$a = R(z)$
$b= I(z)$

$\bar{Z}=a-bi$
Complex Conjugate Of Z

# Argand Diagram

![[Pasted image 20260112031158.png]]

# Algebra Of Complex Numbers

$+$ = Same as algebra
$-$ = Same as algebra
$\times$ = Same as algebra

To divide a complex number by another, multiply top and bottom by the complex conjugate of the denominator i.e. rationalise the denominator 

$$\begin{align*}
z_{1}&=3+5j\\
z_{2}&=2-3j\\
\frac{z_{1}}{z_{2}}&=\frac{3+5j}{2-3j}\\
&=\frac{3+5j}{2-3j}\frac{2+3j}{2+3j}\\
&=\frac{6+9j+10j+15j^2}{4+6j-6j-9j^2}\\
&=\frac{6+19j-15}{4+9}\\
&=\frac{-9+19j}{13}
\end{align*}$$
# Modulus

$|z|=\sqrt{ x^2+y^2 }$

Where
$$z=x+iy$$
![[Pasted image 20260112031811.png]]

Modulus of $z$ would be the distance from origin to point $z$
# Polar Form

$$z=r(\cos \theta+i\sin \theta)$$
$$z=r\angle\theta$$
$\theta$ called an argument of $z$
$$\theta=arg(z)$$
![[Pasted image 20260112031759.png]]

## Arg(z)

If $\theta_{0}$ is an argument of $z$ then the angles $\theta_{0}\pm 2\pi,\theta_{0} \pm 4\boldsymbol{\pi}\dots$ are also valid arguments of $z$

In practice we find $\theta$ by using the trig equation $\tan \theta=\frac{y}{x}$

Because the 'tan' function is $\pi$ periodic some care must be taken when solving this equation

Calculator will only give angles that satisfy $-\frac{\pi}{2}<\tan^-1\left( \frac{y}{x} \right)< \frac{\pi}{2}$
i.e. Angles in the first and fourth quadrant (CAST), must choose $\theta$ consistent with quadrant in which our complex number $z$ located on argand diagram. May require adding or subtracting $\pi$ to $\tan^-1\left( \frac{y}{x} \right)$ when appropriate

![[Pasted image 20260112032215.png]]

## Principle Argument

Symbol $arg(z)$ actually represents a set of values,  but argument $\theta$ of a complex number that lies in the interval $-\pi<\theta\leq \pi$ is called the **principle value** of $arg(z)$ or the **principle argument** of $z$

Principle argument of $z$ is unique and is represented by the symbol $Arg(z)$ that is: 
![[Pasted image 20260112032424.png]]

In general $arg(z)$ and $Arg(z)$ are related by: 
$$arg(z)=Arg(z)+2n\pi,\ n=0, \pm 1, \pm 2,\dots$$![[Pasted image 20260112032528.png]]

## Multiplication & Division

$$\Large \begin{align*}
z_{1}&=r_{1}(\cos \theta_{1}+i\sin \theta_{1})\\
z_{2}&=r_{2}(\cos \theta_{2}+i\sin \theta_{2})\\ \\
z_{1}z_{2}&=r_{1}r_{2}[\cos(\theta_{1}+\theta_{2})+i\sin(\theta_{1}+\theta_{2})]\\ \\
\frac{z_{1}}{z_{2}}&=\frac{r_{1}}{r_{2}}[\cos(\theta_{1}-\theta_{2})+i\sin(\theta_{1}-\theta_{2})]\\ \\
arg(z_{1}z_{2})&=arg(z_{1})+arg(z_{2})\\
arg\left( \frac{z_{1}}{z_{2}} \right)&=arg(z_{1})-arg(z_{2})
\end{align*}$$
![[Pasted image 20260112032815.png]]

## Integer Powers Of Z

$$z^n=r^n(\cos n\theta+i\sin n\theta)$$
![[Pasted image 20260112032844.png]]

## Roots

Suppose:
$$\begin{align*}
w^n&=z\\ \\
z&=r(\cos \theta+i\sin \theta)\\
w&=\rho(\cos \phi+i\sin \phi)\\ \\
\rho^n(\cos n\phi+i\sin n\phi)&=r(\cos \theta+i\sin \theta)\\
\rho^n&=r\implies \rho=\sqrt[n]{ r }\\
\cos n\phi+i\sin n\phi&=\cos \theta+i\sin \theta\\
&\implies \cos n\phi=\cos \theta\\
&\implies \sin n\phi=\sin \theta\\
n\phi&=\theta+2k\pi\\
&\implies \phi=\frac{\theta+2k\pi}{n}
\end{align*}$$
$nth$ roots of a nonzero complex number given by:
$$w_{k}=\sqrt[n]{ r }\left[\cos \left( \frac{\theta+2k\pi}{n} \right)+i\sin \left(\frac{\theta+2k\pi}{n} \right)\right]$$
where: 
$$k=0,1,2,\dots,n-1$$
### Example 1

![[Pasted image 20260112033537.png]]

### Example 2

![[Pasted image 20260112033547.png]]

# Exponential Form

$$e^{j\theta}=\cos \theta+j\sin \theta$$
$$e^{-j\theta}=\cos \theta-j\sin \theta$$
By adding and subtracting the expressions we can get: 
$$\begin{align*}
e^{j\theta}+e^{-j\theta}&=\cos \theta+\cos \theta+j\sin \theta-j\sin \theta\\
e^{j\theta}+e^{-j\theta}&=2\cos \theta\\
\cos \theta&=\frac{e^{j\theta}+e^{-j\theta}}{2}
\end{align*}$$
$$\begin{align*}
e^{j\theta}-e^{-j\theta}&=\cos \theta-\cos \theta+j\sin \theta--j\sin \theta\\
e^{j\theta}-e^{-j\theta}&=2j\sin \theta\\
\sin \theta&=\frac{e^{j\theta}-e^{-j\theta}}{2j}
\end{align*}$$
From polar form can right in this way:
$$\begin{align*}
z&=r(\cos \theta+j\sin \theta)\\
z&=re^{j\theta}
\end{align*}$$
Always use radians 