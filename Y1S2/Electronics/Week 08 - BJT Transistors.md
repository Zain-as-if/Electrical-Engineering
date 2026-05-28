Bipolar junction transistor (BJT), commonly used until early 1990s, now mainly used for high frequency applications i.e. RF

Metal Oxide Silicon FET (MOSFET): First used as PMOS and NMOS from 1970s to 1980s and later NMOS and PMOS combined to form Complementary MOS (CMOS)

CMOS - most popular due to its benefits in analogue and digital ICs

DC Parameters: Indicated by CAPITAL letters
AC Parameters: Indicated by LOWER CASE letters

# BJT Basic Construction & Operation

![[Pasted image 20260527232147.png]]

Base-emitter (BE) junction is forward biased and the base collector (BC) is reverse biased

For the transistor to function correctly $$V_{C} > V_{B} > V_{E}$$
![[Pasted image 20260527232348.png]]

## Transistor Current Gain Parameters

$$I_{E}=I_{C}+I_{B}$$
Ratio of collector current $I_{C}$ to the base current $I_{B}$ is the DC current gain $\beta_{dc}$ of the transistor
$$\beta_{dc}=\frac{I_{C}}{I_{B}}$$
OR $$I_{C}=I_{B}\beta_{dc}$$
# DC Analysis Of NPN Transistor

![[Pasted image 20260527232551.png]]

$V_{BB}$ forward biases the BE junction ($V_{CC} > V_{BB}$) and $V_{CC}$ reverse-biases the BC junction

When the BE junction is forward biased, it is like a diode and has a voltage drop off:
$$V_{BB} \approx 0.7V\ (= V_{t}\ \text{of diode})$$
Voltage across $R_B$:
$$\begin{align*}
V_{RB}&=V_{BB}-V_{BE}\\ V_{RB}&=I_{B}R_{B}
\end{align*}$$
Substituting $I_{B}R_{B}=V_{BB}-V_{BE}$
Determine: $$I_{B}=\frac{V_{BB}-V_{BE}}{R_{B}}$$
![[Pasted image 20260527233217.png]]

Drop across $R_C$ ($V_{RC}$) is:
$$V_{RC}=I_{C}R_{C}$$
Voltage between collector and emitter (ground) is:
$$V_{CE}=V_{CC}-I_{C}R_{C}$$
Voltage between the base and collector is:
$$V_{CB}=V_{CE}-V_{BE}$$
# Operation Of Transistor Circuit (Collector Curves)

![[Pasted image 20260527233715.png]]

If $V_{CC}$ gradually increases 
- $V_{CE}$ will increase and so will $I_C$
- Portion indicated between A & B on curve
When $V_{CE} \approx 0.7V\ (I_{B}\ \text{constant})$
- BC junction becomes reverse biased 
- $I_C$ reaches its full value determined by the relationship $I_{C}=\beta_{dc}I_{B}$
- At this point the $I_C$ levels off to almost constant value as $V_{CE}$ continues to increase
- Curve beyond point B: Active Region ($I_{C}R_{B}$ constant)
By using other values of $I_B$ additional $I_C$ versus $V_{CE}$ curves can be produced

## Regions Of Transistor Operation

![[Pasted image 20260527234208.png]]

### Cut-Off Region

With $V_{CC}$ constant 
When $I_B=0$ transistor is 'Cut-Off'. In 'Cut-Off' both BE and BC junctions are reverse biased since $V_{BE} < 0.7V$ 

![[Pasted image 20260527234516.png]]

### Saturation Region

When $I_B$ is increased
- $I_C$ increases 
- $V_{CE}$ decreases since $V_{RC}$ increases
- When $V_{CE}$ decreases to value called $V_{CE(sat)}$ the base collector (BC) junction becomes forward-biased and $I_C$ can increase no further even with a continued increase in $I_B$ (Following $R_C$ load line)

At point of saturation and below, the relationship $$I_{C}=\beta_{dc}I_{B}$$
no longer valid 

![[Pasted image 20260527234715.png]]

$V_{CE(sat)}$ for transistor occurs somewhere below the knee of the collector curves and is a few tenths of a volt for silicon transistors 

Cut-Off and Saturation Regions can be exploited to operate a transistor circuit as a switch

#### Bipolar Transistor As A Switch

![[Pasted image 20260527234904.png]]

Cut-Off
- In (a), transistor is cut-off because $V_{BE}<0.7V$ 
- Open circuit between C & E $$V_{CE(cut-off)}\approx V_{{CC}}$$ $$I_{B}=I_{C}=0A$$
Saturation
- In (b) transistor is saturated because $I_B$ large enough to cause $I_C$ to reach its saturated value 
- Short circuit between C & E
- Since $V_{CE} \approx 0V$ 
- At saturation $$I_{C} \approx \frac{V_{CC}}{R_{C}}$$
- Value of base current to produce saturation is: $$I_{B(min)}=\frac{I_{C(sat)}}{\beta_{dc}}$$
### Linear Region (Normal Operating Region)

Transistor must be DC biased to operate as an amplifier, improper biasing can cause distortion in the output signal 
![[Pasted image 20260527235244.png]]

# DC Operating Point

SBiasing transistor establishes certain current and voltage conditions ($I_C$ and $V_{CE}$ are given specified values). DC operating point is often referred to as the Q-point (quiescent point)

![[Pasted image 20260527235354.png]]

Initially $V_{BB}$ is adjusted to produce an $I_B=300 \mu A$
Thus $I_{C}=\beta_{dc}I_{B}=30mA$
and $V_{CE}=V_{CC}-I_CR_C=10V-6V=4V\ (\text{point}\ Q_1)$

Now $V_{BB}$ is increased to produce $I_B=400\mu A$ 
Thus $I_C=40mA$
and $V_{CE}=2V\ (\text{point}\ Q_{2})$  

Finally $V_{BB}$ reduced to give $I_B=200\mu A$ 
Thus $I_C=20mA$
and $V_{CE}=6V\ (\text{point}\ Q_{3})$ 

Notice load line (line connecting each Q-point) intersects the $V_{CE}$ axis at 10V; the point where $V_{CE}=V_{CC}$. This is transistor cut-off point $I_B$ and $I_C$ are 0

Next notice that the load line intersects the $I_C$ axis at 50mA. This is the transistor saturation point because $I_C$ is maximum at the point where $V_{CE}=0V$ and $I_{C}=\frac{V_{CC}}{R_{C}}=\frac{10V}{200\Omega}=50mA$

Linear Region
- The region along the load line, including all points between saturation and cut-off known as linear region of transistor operation. As long as transistor is operated in this region, output voltage is a **linear** reproduction of the input
- Optimal quiescent Q point $Q_{opt}=V_{CEQ}=0.5V_{CC}$, gives maximum signal swing without clipping
- Determined by values of $R_B$ and $R_C$ $$V_{CC}=I_{CQ}R_{C}+V_{CEQ}$$
- $R_B$ used to determine $I_B$, which in turn determines $I_C$

![[Pasted image 20260528000555.png]]
![[Pasted image 20260528000634.png]]

# Practice Q

## 1
![[Pasted image 20260528000737.png]]
![[Pasted image 20260528001444.png]]