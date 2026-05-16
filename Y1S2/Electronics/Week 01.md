Digital - quantities w/ discrete values
Analogue - quantities w/ continuous values

Most physical info analogue, quantities take on of a large (infinite) set of values, e.g. temperatures, speeds, heights, weights, etc.

When working digitally will always be some approximation in measurements

Advantages of using digital processes rather than analogue: 
- Many binary sensors/actuators are simpler than analogue i.e. on/off (thermostat) rather than variable resistance
- Digital info more easily transmitted, processed & stored & less affected by noise
- Noise (unwanted voltage fluctuations) does not affect digital data nearly as much as it dose analogue signals 

Digital electronics involves circuits & systems in which there are only 2 possible states, on/off, 1/0, high/low

![[Pasted image 20260516204458.png]]
![[Pasted image 20260516204602.png]]![[Pasted image 20260516204618.png]]

## Gray Codes

Has the property that only 1-bit changes from one code to the next

Gray codes used in construction of Karnaugh maps, i.e. codes for adjacent elements varied in only one variable

Used in numerous applications where changing quantities are to be read e.g. rotating motor where the angular position is measured. D

![[Pasted image 20260516204814.png]]

3 basic types of logic gates: AND, OR and NOT gates

Constructed using transistors

# Logic Gates
## AND Gate

![[Pasted image 20260516205007.png]]
## OR Gate

![[Pasted image 20260516205018.png]]

## Not Gate

![[Pasted image 20260516205040.png]]

# Compound Gates 

3 basic logic types can be combined to form any logic function

## NAND Gate

![[Pasted image 20260516205156.png]]

## NOR Gate

![[Pasted image 20260516205217.png]]

## XOR Gate

![[Pasted image 20260516205234.png]]

## XNOR Gate

![[Pasted image 20260516205249.png]]

# Truth Tables

![[Pasted image 20260516205334.png]]

Each row in which output is '1' is called *minterm* 

Generate expression for each minterm and then OR these minterms to determine logic circuit 

Minterms in our example are A'B'C, A'BC' & AB'C'

This expression is in *sum of products* form
Hence S = A'.B'.C + A'.B.C' + A.B'.C'
Where '.' = Product & '+' = Sum

![[Pasted image 20260516205547.png]]

Each row in which output is '0' is called maxterm

Generate expression for each maxterm and then AND these maxterms to determine logic circuit

Maxterms in example are A+B+C, A+B'+C, A'+B+C', A'+B'+C and A'+B'+C'

Expression is in product of sums form
Hence S = (A + B + C) . (A + B' + C') . (A' + B + C) . (A' + B' + C') . (A' + B + C') 
Where '.' = Product & '.' = Sum