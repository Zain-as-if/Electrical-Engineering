Most commonly used combinational circuits used are:
- Adders
- Multiplexers
- Decoders

# Binary Addition

Binary Addition E.g.:
$$\begin{align*}
&1001\\&1000\ +\\ &-- \\ 1&0001
\end{align*}$$
## Half Adder  (2 Bit Addition)

Binary **half adder** adds two single bit binary numbers A and B giving a SUM (S) and CARRY (C) output
$$\begin{array}{|c|c|c|}
\hline
A & B & C & S \\
\hline
0 & 0 & 0 & 0 \\
0 & 1 & 0 & 1 \\
1 & 0 & 0 & 1 \\
1 & 1 & 1 & 0 \\
\hline
\end{array}$$
Carry: 
$$\begin{array}{c|cccc}
B \backslash A & 0 & 1\\
\hline
0 & 0 & 0\\
1 & 0 & 1\\
\end{array}$$
$C=AB$

Sum:
$$\begin{array}{c|cccc}
B \backslash A & 0 & 1\\
\hline
0 & 0 & 1\\
1 & 1 & 0\\
\end{array}$$
$S=A'B+AB'$
$\ \ = A \oplus B$ 

![[Pasted image 20260526151408.png]]

## Full Adder (3 Bit Addition)

$$\begin{array}{|c|c|c|}
\hline
A & B & C_{i} & C_{0} & S \\
\hline
0 & 0 & 0 & 0 & 0 \\
0 & 0 & 1 & 0 & 1 \\
0 & 1 & 0 & 0 & 1 \\
0 & 1 & 1 & 1 & 0 \\
1 & 0 & 0 & 0 & 1 \\
1 & 0 & 1 & 1 & 0 \\
1 & 1 & 0 & 1 & 0 \\
1 & 1 & 1 & 1 & 1 \\
\hline
\end{array}$$
Carry: 
$$\begin{array}{c|cccc}
C_{i} \backslash AB & 00 & 01 & 11 & 10\\
\hline
0 & 0 & 0 & 1 & 0\\
1 & 0 & 1 & 1 & 1\\
\end{array}$$
$C=AB+AC_{i}+BC_{i}$

Sum: 
$$\begin{array}{c|cccc}
C_{i} \backslash AB & 00 & 01 & 11 & 10\\
\hline
0 & 0 & 1 & 0 & 1\\
1 & 1 & 0 & 1 & 0\\
\end{array}$$
$S = A'B'C_{i}+A'BC_{i}'+ABC_{i}+AB'C_{i}'$

![[Pasted image 20260526152024.png]]

Adding the 3 inputs together is equivalent to adding two together (A & B) then adding the third $C_{i}$

Full adder can be produced using two half adders and therefore is more modular and easier to design
![[Pasted image 20260526152110.png]]

## Adder Circuit Implementation

Addition operations in digital systems e.g. computers mostly performed in parallel: 
- Faster mode of operation 
- More complex circuitry 
Serial additions:
- Require less circuitry
- Slow operation compared to parallel

## Multi-Bit Addition

![[Pasted image 20260526152240.png]]
![[Pasted image 20260526152246.png]]

# Decoders

N to M line decoder

Discrete quantities of information represented using binary codes in digital circuits

Binary code of n bits capable of representing $2^n$ unique outputs 
(3 bits => 8 possible outputs, 8 minterms on truth table)

Decoder combinational circuit that converts the n input binary information into a maximum of $2^n$ outputs (minterms)

Decoders are **n** (i/p) to **m** (o/p) line decoders where **m** <= $2^n$ 
- E.g. 3 to 8 decoder: 3 inputs & 8 outputs
- Typical decoder sizes: 2x4, 3x8, 4x16

## 3 -> 8 Line Decoder

Mutually exclusive - Only 1 output can be equal to logic '1' at any one time

Output line whose value is logic '1' represents the minterm of the binary number presently available in the input lines

$$\begin{array}{|c|c|c|cccccccc|c|}
\hline
A & B & C & D_{0} & D_{1} & D_{2} & D_{3} & D_{4} & D_{5} & D_{6} & D_{7} & \text{minterm} \\
\hline
0 & 0 & 0 & 1 & 0 & 0 & 0 & 0 & 0 & 0 & 0 & 0 \\
0 & 0 & 1 & 0 & 1 & 0 & 0 & 0 & 0 & 0 & 0 & 1 \\
0 & 1 & 0 & 0 & 0 & 1 & 0 & 0 & 0 & 0 & 0 & 2 \\
0 & 1 & 1 & 0 & 0 & 0 & 1 & 0 & 0 & 0 & 0 & 3 \\
1 & 0 & 0 & 0 & 0 & 0 & 0 & 1 & 0 & 0 & 0 & 4 \\
1 & 0 & 1 & 0 & 0 & 0 & 0 & 0 & 1 & 0 & 0 & 5 \\
1 & 1 & 0 & 0 & 0 & 0 & 0 & 0 & 0 & 1 & 0 & 6 \\
1 & 1 & 1 & 0 & 0 & 0 & 0 & 0 & 0 & 0 & 1 & 7 \\
\hline
\end{array}$$
Where A, B, C are inputs, $D_{0-7}$ are outputs

![[Pasted image 20260526152943.png]]

![[Pasted image 20260526152953.png]]

## Implementation Of Combinational Circuits Using Decoders

Any combinational circuit with **n** inputs and **x** outputs can be implemented using decoders
- **n** to $2^n$ decoder and **x** OR/NOR gates

If number of used states i.e. output = 1, is LESS than the unused then an external OR gate generally used 

If number of unused states i.e. output = 0, is LESS than the used then an external NOR gate generally used 

If the numbers are the same then either an OR gate or NOR gate can be used with their respective output states (if using OR gate outputs = 1, if NOR gate outputs = 0)

E.g.: Adder

![[Pasted image 20260526153137.png]]

# Multiplexer

Multiplexing: transmission of large quantity of data units over a small number of channels or lines

Combinational circuit that selects binary information from 1 or many input lines and directs it to single output

Normally $2^n$ input lines (**n** is number of selection lines whose binary value determines which input is selected)

Multiplex often abbreviated to MUX

## MUX Applications

Used to connect two or more sources to single destination within computers

Useful in construction of common bus systems 
- MUX selects data to go onto the BUS

Multiplexers can be used to implement any Boolean/characteristic circuit function
- Generate any function of n+1 variables with a $2^n$ to 1 MUX
- E.g. 4 variables, n = 3 $\therefore \ 2^3$ to 1 = 8 to 1 MUX

Multiplexers essentially decoders with the OR gates available internally 

![[Pasted image 20260526153531.png]]![[Pasted image 20260526153535.png]]![[Pasted image 20260526153541.png]]

## Implementing Boolean Functions With Multiplexers

If we have Boolean function in (n+1) variables, we take **n** of these as select lines

Remaining variable used for input of MUX, if this variable is **A**, inputs to the MUX are taken to be **A, A', 1, 0**

### Example

![[Pasted image 20260526153738.png]]

## General Procedure

For implementation of a Boolean function in **n** variables with a $2^{n-1}:1$ MUX 

1. Express function in sum of minterms form
2. Assume ordered sequence of variables is **ABCD**
3. Connect the (n-1) variables **BCD**... to select lines, with B connected to high order line
4. Draw MUX implementation table
5. Circle all minterms of output function
6. Inspect each column of implementation table individually 
7. If **both** minterms in a column are **not circled**, apply **0** to that input
8. If **both** minterms in a column are **circled**, apply **1** to that input
9. If the **bottom** minterm is circled but the top one is not, apply **A**
10. Else apply **A'**

### Example

![[Pasted image 20260526154031.png]]![[Pasted image 20260526154037.png]]
![[Pasted image 20260526154046.png]]![[Pasted image 20260526154049.png]]

# Practice Qs
## 1

![[Pasted image 20260526194712.png]]
![[Decoder.excalidraw]]
## 2
![[Pasted image 20260526194955.png]]
![[Multiplexer.excalidraw]]
