% Current Of LED
Iled=0.02;
% Voltage Of LED
Vled=2.1;
% Source Voltage
Vs=[3, 6, 9, 12, 18];

Resistor_Values = (Vs-Vled)/Iled;

disp('Final Resistor Values:')
disp(Resistor_Values)