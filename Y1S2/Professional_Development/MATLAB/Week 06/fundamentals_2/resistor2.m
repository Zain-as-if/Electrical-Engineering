I = [0.02, 0.04, 0.06, 0.08, 0.10];
Vl = [2.1, 2.5, 2.8, 3.1, 3.3];
Vs = [3, 6, 9, 12, 18];

resistance = (Vs - Vl) ./ I;
disp(resistance);
