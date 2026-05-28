Operational amplifier is a circuit with certain special features, which is developed by connecting several basic single stage transistor circuits previously discussed ![[Pasted image 20260528010058.png]]
![[Pasted image 20260528010105.png]]

# Common Mode Input

![[Pasted image 20260528010117.png]]

Input voltage is common to both inputs (common mode signal) therefore $V_{in}=0$

Ideally $V_{out}=0$ (Since $Av_{ol}V_{in}=0$)

In practice amplifiers slightly affected by common mode noise signals

Noise: unwanted voltage signals which are the result of radiated energy on the input lines from adjacent lines or the 50Hz power lines or other sources

## Common Mode Rejection Ratio

Common-Mode Rejection Ratio (CMRR):
- Measure of how well device rejects common-mode signals (noise)
Ratio of amplifier response produced by the differential mode signal to the response produced by the common-mode signal of the same amplitude and frequency 

$CMRR=Av_{ol}=Av_{cm}$
$CMRR\ \text{in dBs}=20\log\left( \frac{Av_{ol}}{Av_{cm}} \right)$

Higher the CMRR better the rejection of common-mode signal noise of the amplifier

Op-amp CMRR values:
- Typical : 80-120 dB
- 741 : ~90 dB
- High Performance : 160+ dB

# Input Offset Voltage

Ideal Op-amp $V_{out}=0V$ if $V_{in}=0V$ 

Practical Op-amp a small dc voltage appears at the output when no differential input voltage is applied ($741 \approx 2mV$)

Input offset voltage ($V_{os}$) is the differential dc voltage required to force the output to be 0V![[Pasted image 20260528010655.png]]

## Input Bias Current

DC Current required to allow first stage of amplifiers internal circuitry to operate correctly 
![[Pasted image 20260528010723.png]]

In practice the two input currents are not identical. The difference is called the input offset current 
$741\ \text{Op-amp} \approx 10nA$

## Input Impedance

Two basic methods of specifying:
![[Pasted image 20260528010814.png]]

Very high input impedance means that the Op-amp requires low current levels to operate

## Output Impedance

Resistance is viewed from the Op-amp output terminal
![[Pasted image 20260528010850.png]]

Very low output impedance means that the Op-amp can drive high current levels without achieving a large drop in output voltage

# Common-Mode Range & Open Loop Gain

Common-mode range is the range of input voltages which when applied to both inputs will not cause the output to clip or distort

Open-Loop voltages gain is the gain of the Op-amp without any external feedback from output to input

# Slew Rate

Maximum rate of change of the output voltage in response to a step input voltage is slew rate of the Op-amp
![[Pasted image 20260528011025.png]]

# Feedback

All active amplifiers suffer from variability in gain due to temperature, voltage supply and component tolerances, etc

To stabilise the gain, feedback (negative) is required

Feedback systems monitor the output and use it to modify the input signal to achieve desired result

Simplifies system design and reduces the effects of component accuracy and linearity 

# Non-Inverting Amplifier

![[Pasted image 20260528011157.png]]
Ideally since $Av_{ol}$ is infinite and $V_{out}$ is finite, differential input voltage (V+)-(V-)=0 (Virtual Earth)
$V+=V-=V_{in}$

![[Pasted image 20260528011249.png]]
![[Pasted image 20260528011254.png]]
# Differential Amplifier (Subtractor)

![[Pasted image 20260528011314.png]]
![[Pasted image 20260528011319.png]]
## Example
![[Pasted image 20260528011330.png]]
# Inverting Summing Amplifier (Adder)

![[Pasted image 20260528011344.png]]

## Example
![[Pasted image 20260528011357.png]]

# Integrator

![[Pasted image 20260528011407.png]]
![[Pasted image 20260528011411.png]]

# Differentiator 

![[Pasted image 20260528011425.png]]![[Pasted image 20260528011432.png]]
