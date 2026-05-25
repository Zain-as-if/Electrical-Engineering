Boolean algebra involves manipulating expressions which are comprised of constants, variables, functions, identities and theorems

Constants - 0/1 (i.e. false/true, off/on)

Variables - quantities that may take values either 0 or 1. These can be referred to as A,B,X,Y,x,y etc.

Functions - there are 3 fundamental boolean functions, AND, OR, NOT. Mapped into hardware using logic gates

## Identities

![[Pasted image 20260516210235.png]]

## Boolean Laws/Theorem

![[Pasted image 20260516210252.png]]

# Algebraic Simplification

E.g.:
D = A'B'C + BC' + A'BC + ABC
- 3 Inverters
- 4 AND gates
- 1 OR gate

Simplifying:
$$\begin{align*}D&=A'B'C+BC'+A'BC+ABC\\&=A'B'C+BC'+BC(A'+A)\ \ \ \ \text{(Distributive Law)}\\&=A'B'C+BC'+BC\ \ \ \ \text{(A+A'=1)}\\&=A'B'C+B(C'+C)\ \ \ \ \text{(Distributive Law)}\\&=A'B'C+B\ \ \  \ \text{(A+A'=1)}\\&=A'C+B\ \ \ \ \text{(A+A'B=A+B)}\end{align*}$$
- 1 inverter
- 1 AND gate
- 1 OR gate

![[Pasted image 20260516211347.png]]

Combinational circuits are more normally made out of NAND and NOR gates rather than AND and OR gates as they use less hardware and are readily available in IC form.

NAND & NOR gates called universal gates as any digital system can be implemented with them

To do this must show it possible to implement the logical operations AND, OR and NOT with NAND or NOR gates

Two distinct methods available. De-Morgan's Theorem & Diagrammatical implementation. 

# De-Morgan's Theorem

## Method 1. NAND & NOR Circuit

Break the bar, change the sign

![[Pasted image 20260516211904.png]]

![[Pasted image 20260516211914.png]]
![[Pasted image 20260516212017.png]]

# Boolean Shorthand 

![[Pasted image 20260516212308.png]]![[Pasted image 20260516212315.png]]

## Sum Of Products & Product Of Sums

All previous examples have been expressed as a sum of products. (1's)

Boolean function also can be represented as product of sums. (0's)
![[Pasted image 20260516212527.png]]

# Karnaugh-Maps

Made up of boxes

Each box represents a minterm, place a '1' in the boxes specified by the truth table.

To achieve direct correspondence to hardware we draw boxes around groups adjacent '1's in the K-map & determine the boolean functions for the groups

![[Pasted image 20260516212736.png]]

Bigger the box, less terms are needed to represent those minterms 
![[Pasted image 20260516212838.png]]

![[Pasted image 20260516213117.png]]
![[Pasted image 20260516213125.png]]

## Examples

![[Pasted image 20260516213443.png]]
![[Pasted image 20260516213453.png]]
![[Pasted image 20260516213502.png]]
![[Pasted image 20260516213910.png]]
![[Pasted image 20260516213919.png]]

Only considered where the boolean function takes values 0 or 1

In practice there are occasions when function is undefined (Don't care if O/P = 1 or O/P = 0)

E.g. Binary Coded Decimal counter has 6 unspecified states.
(Possible count 0-15 but only codes 0-9 used for decimal) 

We "don't care" which value is assumed by unused minterms as generally the input will not occur

These can be used to simplify the map

![[Pasted image 20260516214128.png]]