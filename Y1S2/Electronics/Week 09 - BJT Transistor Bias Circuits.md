Previously separate battery $V_{BB}$ used to bias the base-emitter junction

More practical method is to use the $V_{CC}$ supply and one of the following configurations to develop base bias voltage

Biasing Configurations:
- Base
- Emitter
- Voltage Divider
- Previous stage output bias level

# Base Bias

Uses $V_{CC}$ as single base source
![[Pasted image 20260528001630.png]]

## Analysis Of Circuit For Linear Region

Voltage drop $V_{RB}$ across $R_B$ is: $$V_{RB}=(V_{CC}-V_{BE})\ \text{\&}\ V_{RB}=I_{B}R_{B}$$
Hence: $$I_{B}=\frac{V_{CC}-V_{BE}}{R_{B}}$$
And: $$I_{C}=\beta_{dc}I_{B}$$ $$V_{CE}=V_{CC}-I_{C}R_{C}$$
Substituting $\beta_{dc}I_{B}$ for $I_C$: $$V_{CE}=V_{CC}-\beta_{dc}I_{B}R_{C}$$
Problems: $I_C$ and $V_{CE}$ equations are $\beta_{dc}$ dependant, will thus affect the Q-point (Changing transistor $\beta_{dc}$ changes $Q_{pt}$)

Therefore changing the transistor (even same type) will alter the performance of the circuit

# Emitter Bias

Uses both a +ve and -ve supply voltage
![[Pasted image 20260528002057.png]]

$$\begin{align*}
V_{RB}+V_{BE}+V_{RE}+V_{EE}&=0\\ I_{B}R_{B}+V_{BE}+I_{E}R_{E}+V_{EE}&=0\\ \left( \frac{I_{E}}{\beta_{dc}} \right)R_{B}+V_{BE}+I_{E}R_{E}&=-V_{EE}\\ I_{E}&=\frac{-V_{EE}-V_{BE}}{R_{E}+\frac{R_{B}}{\beta_{dc}}}\\ V_{E}&=I_{E}R_{E}+V_{EE}\\ V_{B}&=V_{E}+V_{BE}\\ V_{C}&=V_{CC}-I_{C}R_{C}
\end{align*}$$
Provides excellent bias stability despite changes in $\beta$ or temperature

# Voltage Divider Bias

Most  widely used arrangement for linear discrete circuits 

![[Pasted image 20260528002527.png]]

Bias voltage at base is developed by resistive voltage-divider. At point A, there are two current paths to ground: one through $R_2$ and one through BE junction of transistor ($I_B$)

If base current is smaller than current through $R_2$, bias circuit can be viewed as simplified voltage-divider consisting of $R_1$ and $R_2$ 

If $I_B$ is not small enough to neglect compared to $I_2$ then the dc input resistance, $R_{in(Base)}$ looking in at the base of the transistor must be considered

$R_{in(Base)}$ appears parallel with $R_2$
## Analysis Of Voltage Divider Bias

Assume $R_{in(Base)} \approx \beta_{dc}R_{E}$ 
$R_X=R_2$ in parallel with $R_{in(Base)}$ 

![[Pasted image 20260528002946.png]]

Voltage at the base $$V=\frac{R_{2}}{R_{1}+R_{2}} \cdot V_{CC}$$
Taking $R_{in}$ into account
$$V_{B}=\frac{R_{X}}{R_{1}+R_{X}} \cdot V_{CC}$$
![[Pasted image 20260528003112.png]]
Common rule of thumb: if two resistors are in parallel and one is at least 10 times the other the total resistance can be taken to be equal to the smallest value 

Hence if $\beta_{dc}R_{E}>10R_{2}$ then resistance of the transistor can be ignored

So if $\beta_{dc}R_{E}>10R_{2}$ then: $$V_{B}\approx \frac{R_{2}}{R_{1}+R_{2}}\cdot V_{CC}$$
Once base voltage is known, emitter voltage is a $V_{BE}$ less (0.7V for Si and 0.3V for Ge) $$V_{E}=V_{B}-V_{BE}$$
$$I_{E}=\frac{V_{E}}{R_{E}}$$
Once $I_E$ is known all other circuit values can be found: $$I_{C}\approx I_{E}$$
$$V_{C}=V_{CC}-I_{C}R_{C}$$
$$V_{CE}=V_{C}-V_{E}$$
OR: $$V_{CE} \approx V_{CC}-I_{E}R_{C}-I_{E}R_{E}$$
Therefore: $$V_{CE} \approx V_{CC}-I_{E}(R_{C}+R_{E})$$
# Previous Stage Output Bias

Type of biasing not used in semiconductor circuitry because **dc blocking capacitors** and **resistors** require relatively large areas of silicon compared with transistors 

Voltage dividers dissipate large amounts of current even when no input signal is present, Constant current path from $V_{CC}$ to GND
![[Pasted image 20260528003635.png]]

In semiconductor circuitry biasing of a stage is determined from the output of the previous stage to minimise the use of capacitors, resistors and power dissipation

Requires good knowledge of transistor circuit design and the use of both NPN and PNP transistors
![[Pasted image 20260528003745.png]]

## AC Analysis & Amplifier Circuit Configurations

3 Main circuit configurations:
- Common-Emitter (C-E) also C-E + emitter resistor
	- Generally used as an inter-stage amplifier circuit due to high gain
- Common-Base (C-B)
	- Not commonly used 
	- Application amplify radio frequencies to coaxial freq. Low impedance matches that of coaxial ($50\Omega$) avoiding signal reflections
- Common-Collector (C-C) : (emitter follower)
	- Buffer amplifier (gain $\approx$ 1)
	- Good output stage: isolates other stages from large output load and can drive large loads

## Simplified Small-Signal Model

Small-signal model for a BJT can be developed from the AC diode model. Consider BJT with its collector open circuit. Hence forward biased BE diode can be represented by its slope resistance
$$r_{e}=\frac{V_{be}}{i_{e}}$$ $$V_{CE}=\text{constant}$$
![[Pasted image 20260528004132.png]]

## Common-Emitter Configuration

![[Pasted image 20260528004229.png]]
$$\begin{align*}
R_{in}&\approx r_{e}\beta\ \ \ \text{LOW}\\ A_{v}&\approx -\frac{R_{C}}{r_{e}}\ \ \ \text{HIGH}\\ R_{out}&\approx R_{C}\ \ \ \text{HIGH}\\ A_{i}&\approx -\beta\ \ \ \text{HIGH}
\end{align*}$$
## Common-Base Configuration

![[Pasted image 20260528004406.png]]

$$\begin{align*}
r_{in}&\approx r_{e}\ \ \ \text{VERY LOW}\\ A_{v}&\approx -\frac{R_{C}}{r_{e}}\ \ \ \text{HIGH}\\ R_{out}&\approx R_{C}\ \ \ \text{HIGH}\\ A_{i}&\approx1\ \ \ \text{LOW}
\end{align*}$$
## Common-Collector Configuration

![[Pasted image 20260528004510.png]]
$$\begin{align*}
r_{in}&\approx \beta(r_{e}+R_{E})\ \ \ \text{HIGH}\\ A_{v}&\approx 1\ \ \ \text{LOW}\\ R_{out}&\approx r_{e}\ \ \ \text{VERY LOW}\\ A_{i}&\approx \beta\ \ \ \text{HIGH}
\end{align*}$$
### DC Biasing Single Stage Common-Emitter Amplifier Example

![[Pasted image 20260528004639.png]]

Common-emitter amplifier with voltage-divider bias and coupling capacitors on input and output and a bypass capacitor from emitter to ground

## DC Analysis

DC equivalent circuit is developed by replacing the coupling and bypass capacitors with opens
$$R_{in(base)}=\beta_{dc}R_{E}=150(600)=90k\Omega$$
![[Pasted image 20260528004747.png]]
Bypass capacitor => open circuit for DC since $f_{c}=0$
$$Z_{C}=\frac{1}{2\pi f_{c}}=\infty$$
Since this is more than ten times $R_2$, it can be neglected when calculating the base voltage

$$\begin{align*}
V_{B}&=\frac{R_{2}}{R_{1}+R_{2}} \cdot V_{CC} = \frac{4.7k\Omega}{22k\Omega+4.7k\Omega} \cdot 12=2.11V\\ V_{E}&=V_{B}-V_{BE}=2.11-0.7=1.41V\\ I_{E}&=\frac{V_{E}}{R_{E}}=\frac{1.41}{600}=2.35mA\\
\end{align*}$$
Since $I_{C}\approx I_{E}$, then: $$\begin{align*}
V_{C}&=V_{CC}-I_{C}R_{C}=12-(2.35\cdot 10^{-3} \cdot 1 \cdot 10^3)=9.65V\\ V_{CE}&=V_{C}-V_{E}=9.65-1.41=8.24V
\end{align*}$$
# Practice Q (CHEATED)

## 1
![[Pasted image 20260528005653.png]]
## 2
![[Pasted image 20260528005708.png]]
![[Pasted image 20260528005713.png]]
## 3
![[Pasted image 20260528005723.png]]![[Pasted image 20260528005728.png]]
## 4
![[Pasted image 20260528005737.png]]
