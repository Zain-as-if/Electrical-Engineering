investments = [750, 1000, 3000, 5000, 11999];

balance = investments .* ((1 + 0.09)^10);
disp(balance);

format short g;
disp(balance);
