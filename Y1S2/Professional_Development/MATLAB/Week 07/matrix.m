Temp = [[5.0, 6.2, 7.5]; [8.8, 10.1, 15.2]; [9.8, 12.5, 11.8]; [11.5, 18.6, 14.4]];
disp(Temp);

disp(Temp(3,2));

E = [1 2 ; 3 4];
disp(E);
E(5, 8) = 100;
disp(E);

% Transpose
disp(Temp');
disp(' ')

Temp_new = [[7 8.3 5.6]; [7.9 11.4 12.6]; [6.9 9.6 10.7]; [8.9 15.3 16.8]];
disp(Temp_new);

disp(" ");
disp(Temp + Temp_new);
disp(" ");
disp(Temp - Temp_new);

disp(" ");
Vout = 0.01 * Temp;
disp(Vout);
Vout_new = 0.01 * Temp_new;

disp(" ");
Taverage = ((Vout + Vout_new) / 2) / 0.01;
disp(Taverage)
disp(" ");

a = [[10 5 5]; [2 9 0]; [6 8 8]];
b = [[1 0 2]; [0 0 0]; [1 1 0]];

disp(a);
disp(" ");
disp(b);

c = [a; b];
disp(" ");
disp(c);
d = [c c];
disp(" ");
disp(d);

v = [16 5 9 3; 2 11 7 14];
z = v(1, :);
disp(" ");
disp(v);
disp(" ");
disp(z);

x = [16 5; 9 3; 2 11; 7 14];
w = x(:, 2);
disp(" ");
disp(x);
disp(" ");
disp(w);

a = [1 2 3 4 5 6 7 8];
b = a(5 : end);
c = a(end);

disp(" ");
disp(" ");
disp(" ");

disp(a);
disp(" ");
disp(b);
disp(" ");
disp(c);

disp(" ");
disp(" ");
disp(" ");

d = [1 2 3 4; 5 6 7 8; 9 10 11 12];
e = d(2 : end, 2: end);
disp(d);
disp(" ");
disp(e);

disp(" ");
disp(" ");
disp(" ");

x = [1 2 3; 4 5 6; 7 8 0];
disp(x);
x(3, :) = [];
disp(" ");
disp(x);
x = [x(1, :); x(2, :); [7 8 0]];
disp(" ");
disp(x);
