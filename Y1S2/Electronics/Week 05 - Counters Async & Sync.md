Sequential circuits that go through prescribed sequences of states on the application of input clock pulses

They use n Flip-flops and count in binary from 0 to $2^{n}-1$

Most efficient Flip-flop to use is the T type Flip-flops

![[Pasted image 20260527111407.png]]

![[Pasted image 20260527111418.png]]

# Asynchronous Counters 

Counters either **synchronous** or **asynchronous**
- Synchronous - All the flip-flops are pulsed/triggered by the same master clock
	- Variable count sequence set using additional combinational logic (within set count range)
- Asynchronous - Ripple counters, flip-flops triggered by the output transition of other flip-flops 
	- Ripple binary count up or down within set count range

![[Pasted image 20260527111619.png]]
![[Pasted image 20260527111626.png]]
![[Pasted image 20260527111633.png]]![[Pasted image 20260527111637.png]]![[Pasted image 20260527111740.png]]

## Frequency Dividers

Each stage (flip-flop) represents a **frequency halver**

**n** number of stages the clock frequency is divided by $2^n$ 
E.g.: Digital watches can use 15 stages of division to divide the oscillations of a quartz crystal at 32768 Hz to 1 Hz ($2^{15} = 32768$)
![[Pasted image 20260527111920.png]]![[Pasted image 20260527111924.png]]

## Modulo-N Counters

Modulo-8 counter (8 possible states, 0-7)

Generates binary representation of the number of clock pulses specified by N (modulo-8)
i.e.:
- 1 Clk => 001 (1)
- 2 Clk => 010 (2)
- 7 Clk => 111 (7)
- 8 Clk => 000 (0)
- 9 Clk => 001 (1)

Modulo-8 counter counts up to the binary equivalent of 7 and restarts at zero, therefore has 8 distinct values

Increase the count by increasing the number of stages, i.e. modulo-$2^n$ where n is the number of stages. Counts from $0\ \text{to} \ 2^n-1$

Typical examples:
- Modulo-6 (0-5)
- Modulo-10 (0-9) - Binary Coded Decimal Counter

![[Pasted image 20260527112257.png]]![[Pasted image 20260527112304.png]]![[Pasted image 20260527112703.png]]

# Counter Limitations
## Asynchronous Counter Limitations

Not suitable for high speed use since each flip-flop has a propagation delay $t_{pd}$, which is the time taken to react to an input

An **n** stage ripple counter has a propagation delay of $n \cdot t_{pd}$ 

If the counter is read during the $n \cdot t_{pd}$ time period, the output value will be corrupted 

This limits the clock speed, since we can't have a new input clock (Clk) pulse until the last stage has reacted $$\text{Max Clk Frequency} = \frac{1}{time} = \frac{1}{n \cdot t_{pd}}$$
## Synchronous Counter Limitations

Requires a single master Clk input to trigger all flip-flops

Thus, no excessive propagation delays through circuit since all flip-flops change at the same time 
- Propagation delay: only $t_{pd}$ of one flip-flop

Many synchronous counters exist in IC form, therefore not generally necessary to design your own 

Since all stages of counter are triggered by the same clock, different method required to determine which stages change state and which remain the same

Finite State Machines (FSM)

## Binary Synchronous Counter

As was the case with for the asynchronous counters the number of stages can be extended to give a synchronous count of any required length

All outputs change at the same time

Configured to be modulo-N, UP, DOWN, or UP/DOWN or any irregular count sequence i.e. 0,2,4,5,7,0 etc.

Can operate much faster than asynchronous due to only one flip-flop propagation delay. Therefore can be used with very high Clk speeds

# Synchronous Counters

![[Pasted image 20260527113530.png]]![[Pasted image 20260527113548.png]]![[Pasted image 20260527113643.png]]![[Pasted image 20260527113723.png]]![[Pasted image 20260527113728.png]]![[Pasted image 20260527113816.png]]![[Pasted image 20260527113823.png]]![[Pasted image 20260527113828.png]]![[Pasted image 20260527113835.png]]

# Practice Qs
## 1
![[Pasted image 20260527120646.png]]
![[Pasted image 20260527120639.png]]
Make sure to add this before the diagram to show ![[Pasted image 20260527121215.png]]

![[Pasted image 20260527121546.png]]
![[Pasted image 20260527121911.png]]
## 2

![[Pasted image 20260527121920.png]]
![[Pasted image 20260527121943.png]]
![[Pasted image 20260527122249.png]]![[Pasted image 20260527123142.png]]
![[Pasted image 20260527124553.png]]
## 3
![[Pasted image 20260527124633.png]]![[Pasted image 20260527124636.png]]
![[Pasted image 20260527124850.png]]
![[Pasted image 20260527125338.png]]
![[Pasted image 20260527130119.png]]
# Cheat Sheet?
## Async Binary UP
![[Pasted image 20260527130741.png]]
![[Pasted image 20260527130911.png|579]]
## Async Binary DOWN
![[Pasted image 20260527131020.png]]![[Pasted image 20260527131106.png]]
## Async Binary UP/DOWN
![[Pasted image 20260527131747.png]]
## Async Modulo-6
![[Pasted image 20260527132938.png]]
## Synchronous Counters

![[Pasted image 20260527134341.png]]
