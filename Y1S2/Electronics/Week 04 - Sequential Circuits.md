Already considered combinational logic where the output is dependent upon current inputs ONLY
- Basic blocks: NAND, NOR, etc

Most real systems also require **memory** elements
- remembers **previous state** e.g. **counters, memory registers**

System is described in terms of sequential logic

![[Pasted image 20260526165036.png]]

## Sequential Circuits

Memory elements store 'bits' of information

This information stores the state of the system

The present and next output (state) are determined by the inputs and current state
- e.g. Counters: If the present state is 6 and we add 1, next state is 7 (circuit needs to remember it is currently at 6 before it can increment to 7)

Two types of sequential circuit:
- Synchronous (Clocked) - States determined at discrete instances of time
- Asynchronous (Not Clocked) - States determined as a response to input changes at any time

## Synchronous (Clocked) Sequential Circuits

Memory elements must be affected only at discrete instants of time

Master clock required, clock pulses determined when the memory cells accept new values. Synchronises many circuit blocks to operate at a set time

Basic memory device generally given term **flip-flop**

So called because outputs "flip-flop" between 0 and 1

# Flip-Flops

- Flip-Flop : edge-triggered device (Synchronous)
- Latch : level sensitive device (Asynchronous)

Major differences are the numbers of inputs and manner of operation 

## Bistable Multivibrator (Flip-Flop)

Both output states are stable

Example of a T-type (bistable) multivibrator operation![[Pasted image 20260526165530.png]]

## Flip-Flops - Synchronous Edge Triggered Devices

State of a flip-flop switched by momentary change in input clock signal, a trigger

Asynchronous LATCHES are triggered by signal level (a change in the input will have an immediate effect on the output) 

Synchronous (clocked) flip-flops triggered by pulses

Flip-flops can either be triggered on the +ve or -ve edge of a clock pulse

## Why Edge Triggered Device

Problems will occur in sequential circuit if output of a LATCH is changing whilst new values are being sampled 

If output of latch do not change until enable signal has returned to 0, this problem is removed

This is hard to ensure however, so instead make the device sensitive to the **transition** rather than the level, termed a **flip-flop**
## Clock Pulse

![[Pasted image 20260526170342.png]]
# Latches
## S-R Latch (Using NOR Gates)

![[Pasted image 20260526165558.png]]
## S-R Latch (Using NAND Gates: Level Triggered)

![[Pasted image 20260526165706.png]]

## S-R Latches Active Modes

S-R Latch Active HIGH = NOR, R, S, Q, Q'
S-R Latch Active LOW = NAND, S', R', Q, Q'

![[Pasted image 20260526165748.png]]
![[Pasted image 20260526165853.png]]

## Gated S-R Latch

![[Pasted image 20260526165931.png]]![[Pasted image 20260526165938.png]]

## SR Flip-Flop

+Ve Edge Flip-Flop
![[Pasted image 20260526181255.png]]
## D Type Latch

D(ata) latch

Data IN = Data OUT

One way of ensuring we never achieve the indeterminate state where S=R=1, is to make one of the inverse of the other (R=S')

Achieved by modifying the S-R latch, as follows into a D type latch

![[Pasted image 20260526170048.png]]
![[Pasted image 20260526170101.png]]

## D Type Flip-Flop

Most commonly used flip-flop in practical design ICs

D type flip-flop edge triggered version of the D type latch

![[Pasted image 20260526170537.png]]
![[Pasted image 20260526170542.png]]

## T Type Operation

T for TOGGLE

T type flip-flop not available as a package but operation is useful in certain circuits such as a counter ![[Pasted image 20260526170621.png]]
![[Pasted image 20260526184832.png]]

# Asynchronous Inputs

Input D of D type flip-flops only has effect on appropriate clock (Clk) transition. Hence, input termed **synchronous**

There is generally need to set or clear the output at any time (independent of the clock). Inputs able to perform this task are termed **asynchronous**

The asynchronous inputs are PRESET and CLEAR
- Other possible name pairs are
	- DC SET & DC CLEAR
	- SET & RESET
	- DIRECT SET & DIRECT CLEAR

![[Pasted image 20260526170807.png]]
FOR ACTIVE LOW: 0 considered ON, 1 considered OFF
If SET = 1 RESET = 1 CLK follows D, where D = 0 Q = 0, D = 1 Q = 1
If SET = 0 CLK = 1
If RESET = 0 CLK = 0
SET = 0 RESET = 0 Forbidden

FOR ACTIVE HIGH: 0 considered OFF, 1 considered ON
If SET = 1 RESET = 1 CLK follows D, where D = 0 Q = 0, D = 1 Q = 1
If SET = 0 CLK = 0
If RESET = 0 CLK = 1
SET = 0 RESET = 0 Forbidden
# Memory Registers

Store digital information in the form of data or programs

Group of binary cells which hold binary information

Widely used in most digital systems
- Computers, calculators, etc

Register information can be used directly in calculations
- Used within accumulator circuitry of the CPU of a computer

An **n**-bit register contains **n** memory devices

D type latches or flip-flops were shown to be able to store one bit of data

Paralleling several devices enables WORDS of data to be stored, e.g. A 4-bit memory register![[Pasted image 20260526171002.png]]

## Shift Register

Used to convert data structures

Communication channels serial data i.e. fax, computer network, etc.
- Transmission channel - wire, optical fibre, radio signal 
![[Pasted image 20260526171110.png]]

SISO - Serial IN, Serial OUT - One Bit IN, One Bit OUT
SIPO - Serial IN, Parallel OUT - One Bit IN, All Bits OUT
PISO - Parallel IN, Serial OUT - All Bits IN, One Bit OUT
PIPO - Parallel IN, Parallel OUT - All Bits IN, All Bits OUT
Bi-Directional - Can Shift Both Left & Right
Universal - Can Do All The Above
![[Pasted image 20260526190833.png]]
![[Pasted image 20260526190753.png|697]]
![[Pasted image 20260526190852.png]]
### Applications 

Used to enable data to be input or output to or from digital ICs
- Serial input and output of data is required since the number of connection pins is limited on integrated circuit packages
- Parallel data processing on chip is required to increase speed of operation
![[Pasted image 20260526171204.png]]
![[Pasted image 20260526171209.png]]
![[Pasted image 20260526171213.png]]

### Bi-Directional Shift Register Operation

![[Pasted image 20260526171240.png]]

# Practice Qs 

## 1
![[Pasted image 20260526180647.png]]
![[Pasted image 20260526180655.png]]
## 2
![[Pasted image 20260526180701.png]]![[Pasted image 20260526180706.png]]
## 3
![[Pasted image 20260526182352.png]]
![[Pasted image 20260526182429.png]]
## 4
![[Pasted image 20260526182435.png]]
![[Pasted image 20260526190454.png]]
## 5
![[Pasted image 20260526184218.png]]
![[Pasted image 20260526184212.png]]
If SET = 1 RESET = 1 CLK follows D 
If either SET = 0 OR RESET = 0, CLK follows SET = Q' OR RESET = Q 
SET = 0 RESET = 0 Forbidden