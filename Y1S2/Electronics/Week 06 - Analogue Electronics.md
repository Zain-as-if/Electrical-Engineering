Most physical information is essentially analogue, that is, quantities take one of a large (infinite) set of values e.g.
- Temperature, speeds, heights, weights etc

Most electronic systems are mixed devices, both analogue & digital

Analogue: Provides an interface with humans (audio signals) and transmission of signals (radio waveforms)

Digital: Enables rapid accurate processing of data to be performed with high noise immunity

## Real World Systems

![[Pasted image 20260527160435.png]]
![[Pasted image 20260527160440.png]]

## Why Do We Need Amplifier Circuits

All real systems inherently add noise/distortion to a signal which needs removing through a filter

Signal amplitudes from sensors, receivers, etc are too small to utilise by most standard circuitry
- mV, $\mu V$ etc, therefore needs boosting

Passive RC filters attenuate signals: not only reduces noise content but also reduce signal amplitude 
- Therefore active filters which use amplifiers are required 

In order to boost signals to the amplitude required in most systems **amplification** is required

# Passive & Active Devices

Passive Devices (Electrical Principles):
- Resistor (R)
- Capacitor (C)
- Inductor (L)
- Transformer
- RC Filters reduce the overall amplitude of a signal
Active Devices:
- Diodes
- Transistors
- Active Filters contains amplifiers therefore can boost amplitudes as well as attenuate 

# Direct & Alternating Current

Currents in electrical circuits may be constant or may vary with time

When currents vary with time, may be unidirectional or alternating 

When current flowing in a conductor always flows in the same direction this is direct current (DC)

When current flowing in a conductor periodically changes this is alternating current (AC)

# Resistors, Capacitors & Inductors

Resistors provide resistance
- Oppose the flow of electricity 
- measured in Ohms ($\Omega$)
Capacitors provide capacitance
- Store energy in an electric field
- measured in Farads (F)
Inductors provide inductance 
- Store energy in a magnetic field
- measured in Henry (H)

# Ohm's Law

Current flowing in a conductor is directly proportional to the applied voltage V and inversely proportional to its resistance R $$V=IR$$
## Resistors In Series

![[Pasted image 20260527161149.png]]

## Resistors In Parallel

![[Pasted image 20260527161211.png]]

# Kirchhoff's Current Law

At any instant the algebraic sum of currents flowing into any junction in a circuit is zero
E.g.
![[Pasted image 20260527161248.png]]

# Kirchhoff's Voltage Law

At any instant the algebraic sum of voltages around any loop in a circuit is zero
E.g.
![[Pasted image 20260527161321.png]]

# Power Dissipation In Resistors 

Instantaneous power dissipation P of a resistor is given by the product of voltage across it and the current passing through it. Combining this result with Ohm's Law gives: $$\begin{align*}
P&=VI\\ P&=I^2R \\ P&=\frac{V^2}{R}
\end{align*}$$
# Resistor Potential Dividers

![[Pasted image 20260527161520.png]]![[Pasted image 20260527161526.png]]![[Pasted image 20260527161529.png]]

# Semiconductors

Semiconductor components (transistors) have the ability to amplify signals 

Two main transistor types:
- Bipolar: Low impedance, current operated
- FET: High impedance, voltage operated

Basic building blocks for all analogue & digital circuits

R, C, and L can also be fabricated on silicon but are large compared to the transistors

To achieve different electrical properties on silicon (Si), germanium (Ge) or gallium arsenide (GaAs) DOPANTS: impurities are added which effect the crystal structure, giving two significant material types:
- N Type - Excess number of electrons
- P Type - Electron deficient

## PN Junction

Doping silicone with adjacent p and n type regions forms a pn junction

Existence of +ve (p) and -ve (n) charges on either side of the junction produces an electrical field (potential barrier) which charge carriers must overcome to cross the junction

No applied voltage: the junction is in equilibrium - diffusion and drift current are equal

Adding potential (voltage) can either increase or decrease the potential barrier to carrier flow

# Diodes

Frequently used in power supplies when AC to DC conversion is required (such diodes are called rectifiers)

Diodes & rectifiers can be made from a variety of materials and so have a range of operating characteristics 

Diode is a component manufactured out of 2 types of semiconductor material called **p-type** and **n-type** regions which are in contact

![[Pasted image 20260527162225.png]]

Basically same material as in **npn** and **pnp** **BJT** transistors

Point of contact called a pn junction

![[Pasted image 20260527162316.png]]

In forward bias, significant current can only flow in direction of the arrow, from **anode** to **cathode** but not in the reverse direction from cathode to anode

## Forward Bias Diode

Physical properties of a pn junction allow current to flow easily from the p-type to the n-type material (+ve to -ve)

Very low resistance to current flow (behaves more like a short circuit), this is known as forward bias

Forward bias: +V to p-type, -V to n-type

![[Pasted image 20260527162535.png]]

## Reverse Bias Diode

In opposite direction, very high resistance to current flow (behaves more like an open circuit), this is known as reverse bias

Reverse bias: -V to p-type, +V to n-type 

![[Pasted image 20260527162651.png]]
## Ideal Diode Characteristics

Diode acts as a:
- Short Circuit - If voltage (anode to cathode, p->n-type) is +ve
- Open Circuit - if voltage (anode to cathode, p->n-type) is -ve

Transfer characteristic of an ideal diode is shown:
![[Pasted image 20260527162857.png]]

If the V (anode to cathode) voltage is -ve,
- Diode is reverse biased
- Current (I) through diode is zero
If the V (anode to cathode) voltage is +ve,
- Diode is forward biased 
- Current (I) through diode can be arbitrarily high
- In fact, V is never greater than 0 since an ideal diode acts as a zero-resistance short circuit and V=IR $\therefore \text{if}\ R=0\ \Omega,V=0\ V$

## Real Diodes

Has resistance less than infinity ($\infty$) when reverse biased and greater than zero when forward biased![[Pasted image 20260527163411.png]]

When forward biased, diode acts as a small non-linear resistance, voltage drop increases with current but not proportionally 

Note turn-on voltage

When reverse biased, small amount of leakage current flows (normally ignored)

If voltage is large and -ve, diode breaks down and large amounts of current flows. This point called breakdown voltage $V_{B}$ (process called avalanching)

## Approximation Of Diode Characteristics

Often reasonable to approximate the transfer characteristic by straight line response to calculate the diode resistance ($r_{D}$), forward resistance

$r_{D}$ is the ac dynamic resistance since it only considers a small change in V ($\Delta V$) causing change in I ($\Delta I$)

![[Pasted image 20260527163731.png]]

$V_{t}$ is the diode voltage drop (threshold voltage $V_{t}$ or $V_{th}$)

![[Pasted image 20260527163819.png]]
# Practice Qs

## 1
![[Pasted image 20260527163940.png]]
![[Pasted image 20260527164111.png]]![[Pasted image 20260527164205.png]]![[Pasted image 20260527164329.png]]
## 2

![[Pasted image 20260527164338.png]]
![[Pasted image 20260527164440.png]]
![[Pasted image 20260527164642.png]]
![[Pasted image 20260527164816.png]]
## 3
![[Pasted image 20260527164906.png]]
![[Pasted image 20260527164909.png]]
## 4
![[Pasted image 20260527164926.png]]
![[Pasted image 20260527165205.png]]
## 5
![[Pasted image 20260527165439.png]]
![[Pasted image 20260527165502.png]]![[Pasted image 20260527165558.png]]
![[Pasted image 20260527165721.png]]
## 6
![[Pasted image 20260527165811.png]]
![[Pasted image 20260527165806.png]]
This is because threshold voltage for silicon is 0.7V

Right side is forward bias, forward bias (current is flowing) needs voltage to meet a certain threshold as diodes need voltage to overcome barrier that the pn junction creates

Left side is reverse bias, reverse bias (current is not flowing) only a tiny leakage of current flows however if voltage becomes very large diode suddenly conducts heavily allowing current to flow through, this is the breakdown voltage 