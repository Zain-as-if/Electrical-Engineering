% Amount Of Money
A = [750, 1000, 3000, 5000, 11999];
% Years
n = 10;
% Interest Rate
r = 0.09;

% Balance After n Years
balance = A*((1+r)^n);

disp('Final Balances Are:')
disp(balance)

format short g

disp('Final Balances After "format short g":')
disp(balance)

