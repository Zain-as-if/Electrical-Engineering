![[Pasted image 20260527170409.png]]

# Signal Rectification 

## Half Wave

One of most common diode applications is to convert alternating voltage supply to direct voltage (AC to DC conversion)
![[Pasted image 20260527170513.png]]
Voltage source ($V_{s}$) is defined as the potential of A with respect to B

If $V_{s}$ is +ve, A is +ve with respect to (wrt) B

While $V_{s} > V_{t}$ of the diode ($V_{t}$ threshold voltage), diode conducts and ($V_{s}-V_{t}$) appears across the load ($V_{o}=V_{s}-V_{t}$)

On the -ve half cycle the diode does not conduct, no current flows through the load and no voltage appears across it, since the reverse bias voltage is smaller than the voltage at B
$V_{o} = 0\ V$   ($V_{s}<V_{t}$)
![[Pasted image 20260527170846.png]]

To make the output voltage smoother, we add a capacitor C across the load

![[Pasted image 20260527170924.png]]

On the +ve half cycle C is charged up to $V_{max}$ through the diode (shown with blue arrows)

As $V_S$ drops below $V_{pk}$ the diode starts to turn-off then reverse biased as $V_C > V_S$ 

Hence C cannot discharge through the diode into the source. C and $R_{L}$ are effectively isolated and C discharges through $R_{L}$ with current flowing in the same direction (shown with grey arrow)

On the next +ve half cycle C will start charging up again once $V_{max} > V_C$ 

When $V_C = V_{max}$ the process repeats
![[Pasted image 20260527171217.png]]
![[Pasted image 20260527171231.png]]
![[Pasted image 20260527171350.png]]

## Full Wave

To reduce the ripple voltage by utilising both half cycles of the supply waveform, a full-wave rectifier is used 
![[Pasted image 20260527171445.png]]

Initially assume the capacitor is not in place

With terminal A +ve wrt B:
- D2 & D3 forward based and so conduct
- D1 & D4 reverse biased, no current passes 
Current (I) passes from terminal A to B through D2 -> $R_{L}$ -> D3
![[Pasted image 20260527171631.png]]

With terminal B +ve wrt A:
- D4 & D1 forward biased 
- D2 & D3 reverse biased
Current (I) passes from B to A through D4 -> $R_{L}$ -> D1
![[Pasted image 20260527171803.png]]
Direction of current (I) through resistor is the same for both input half cycles and the polarity of the output voltage is therefore unchanged

Both the +ve & -ve half cycles produced +ve peaks. Due to the same direction of current flow through $R_L$ for both half cycles

Assume that the capacitor is in place, which will generate a smoother output as in the half-rectifier

Time during which capacitor must maintain charged is now reduced (halved)

Remaining 'ripple' on the supply can be removed using zener diodes (voltage regulation)
![[Pasted image 20260527171935.png]]
![[Pasted image 20260527171957.png]]

# Zener Diodes

Designed to have an **accurate breakdown** voltage $V_B$ termed $V_Z$ 
This means that it can conduct current in both directions, can operate in the 'reverse breakdown' region providing a stable, constant voltage

This voltage can then be used as a reference voltage for voltage stabilizer circuits 
![[Pasted image 20260527172046.png]]

# Voltage Regulation Using Zener Diodes

Typical application of zener diode is a voltage regulator

![[Pasted image 20260527172118.png]]

Input voltage $V_{FW}$ is poorly regulated (supplied from full-wave rectifier) and is applied to a series combination of a resistor and a zener diode

If $V_{FW} < V_Z$:
- Zener diode will only conduct negligible current and so there is negligible voltage drop across the resistor
- No regulation of $V_o$ 
If $V_{FW} > V_Z$: 
- Zener diode will be in breakdown and conduct current drawn through the resistor R
- Diode prevents the $V_o$ exceeding $V_Z$ and so generates a constant output voltage $V_o = V_Z$ 
- $V_{FW}=V_{R}+V_{Z}$ 
- Thus, as $V_{FW}$ increases the zener conducts more current $I_Z$ causing $V_R$ to increase since $V_Z$ is constant 
- R must be chosen so the voltage drop caused by this current is not enough to reduce the voltage across the zener diode below $V_Z$ 
- V = min. value to determine the max. value of R
- But the power dissipated by the resistor & diode are increased as R decreases, so balance has to be struck as we don't want to burn up the resistor or diode
- V = max. value to determine the worst-case power dissipation 

$$P=\frac{V^2}{R}$$ etc.
$$\therefore \text{if V is constant}\ R = \text{small},\ I=\text{large},\ P=\text{large}$$
## Voltage Regulator Example

Problem
- Find value of R
- Calculate power ratings of diode and resistor
![[Pasted image 20260527172945.png]]

<u>Determine value of R</u> (use $V_{S(min)}$)
- Voltage across diode is 3.6V
- Assume $V_o = V_{Z}$ (if $V_S > V_Z + I_LR$)
- Thus current flowing into load ($I_{L}$) is:
$$I_{L}=\frac{V_{o}}{R_{L}}=\frac{3.6}{200}=18mA$$
$I_Z$ is minimal

- Voltage across the resistor plus the voltage across the diode is equal to the input voltage V 
$$V_{S}=V_{R}+V_{Z}=I_{R}R+V_{Z}$$
- Current through R ($I_R$) is divided between the diode ($I_Z$) and the load ($I_L$) $$I_{R}=I_{L}+I_{Z}$$
![[Pasted image 20260527173541.png]]
- Any change (ripple) in $V_S$ causes a change in $I_R$ and subsequently the voltage across R, but the diode voltage ($V_Z$) remains constant. ($I_L$ is constant)
- If $V_S$ increases then $I_R$ increases so $I_Z$ increases and $V_R$ increases
![[Pasted image 20260527173551.png]]
- Consider the case where $V_S$ is at its min ($V_{S(min)}$), thus making the required $V_R$ a minimum
$$V_{S(min)}=V_{R}+V_{Z}=I_{R}R+V_{Z}=(I_{L}+I_{Z})R+V_{Z}$$
Assume $I_{Z}$ is zero, (only just in breakdown)
Thus: $$V_{S(min)}=I_{L}R+V_{Z}$$
Rearrange:
$$R=\frac{V_{S(min)}-V_{Z}}{I_{L}}=\frac{4.5-3.6}{0.018}=50\Omega$$
Select R value to give the required min. $V_R$

- Zener diode must conduct small amount of current to keep it in breakdown
- Therefore nearest standard **lower** resistor R = $47 \Omega$ is taken

<u>Calculate power ratings of diode and resistor</u> (use $V_{S(max)}$)

- Power dissipation/loss $P=VI=V^2/R$ 
- Power dissipation in R is: $$\begin{align*}
P_{R}&=\frac{V_{R}^2}{R}\\ &= \frac{(V_{S(max)}-V_{Z})^2}{R}
\end{align*}$$
- Maximum voltage drop required
- Taking worst-case power dissipation when $V_S=5.5V$ (when power loss is greatest), maximum value of $P_R$ is: $$P_{R}=\frac{(5.5-3.6)^2}{47}=77mW$$
- Power loss in the zener diode $P_Z$ is: $$\begin{align*}
P_{Z}&=V_{Z}I_{Z}\\ I_{Z}&=I_{R}-I_{L}\\ &=\frac{V_{R}}{R}-I_{L}\\ &=\frac{(V_{S}-V_{Z})}{R}-I_{L}\\ &=\frac{(5.5-3.6)}{47}-0.018=22.4mA
\end{align*}$$
- Then $$P_{Z}=V_{Z}I_{Z}=3.6*0.0224=81mW$$
# Practice Qs

## 1
![[Pasted image 20260527174803.png]]
![[Pasted image 20260527174955.png]]Voltage source defined as the potential of A wrt B
If $V_S$ is +ve, A is +ve
While $V_{S} > V_{t}$ of the diode, diode conducts and ($V_{S}-V_{t}$) appears across the load ($V_{o}=V_{S}-V_{t}$)
On the -ve half cycle diode does not conduct, no current flows through load, no voltage appears across it since reverse bias voltage is smaller than the voltage at B ($V_{o}=0V, V_{S}<V_{t}$)
![[Pasted image 20260527175236.png]]
## 2
![[Pasted image 20260527175257.png]]
![[Pasted image 20260527175558.png]]
With terminal A +ve wrt B:
- D2 & D3 forward biased so current flows however
- D1 & D4 reverse biased so no current flows
- Current (I) flows from A to B through D2 -> $R_{L}$ -> D3
With terminal B +ve wrt A:
- D4 & D1 forward biased
- D2 & D3 reverse biased
- Current (I) flows from B to A through D4 -> $R_{L}$ -> D1
Direction of current through resistor is same for both input half cycles and polarity of output voltage is therefore unchanged

![[Pasted image 20260527175746.png]]
## 3
![[Pasted image 20260527175804.png]]![[Pasted image 20260527180524.png]]
ii) 
1. Calculate $I_{L}$
2. $I_{R}=I_{Z}+I_{L}$
3. Assume $I_{Z}=0$ as zener only just turning on
4. $\therefore I_{R}=I_{L}$ 
5. Use minimum $V_{S}$ voltage as that is the worst-case condition for keeping the zener conducting properly
6. $V_{S(min)}=I_{R}R+V_Z$ 
7. Rearrange for R
8. Calculate R
![[Pasted image 20260527181304.png]]
---
iii)
1. Maximum power dissipation generated when input voltage at its maximum
2. As output voltage fixed, voltage across resistance
3. $V_{R}=V_{S}-V_{Z}$
4. $\therefore$ maximum power dissipation in resistor:
5. $P_{R}=\frac{V^2}{R}$
6. Power dissipated in zener diode $P_{Z}$ is:
7. $P_{Z}=V_{Z}I_{Z}=V_{Z}(I_{R}-I_{L})$
8. $I_{R}=\frac{V_{R}}{R}$
9. $P_{Z}=V_{Z}\left( \frac{V_{R}}{R}-I_{L} \right)$
## 4

## 5

