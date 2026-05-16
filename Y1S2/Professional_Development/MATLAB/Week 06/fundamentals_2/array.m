%row vector (1xn)
h = [1, 2, 3];
disp(h);
%column vector (nx1)
v = [1; 2; 3];
disp(v);
%: define evenly spaced row arrays
H = 1 : 6;
I = 1 : 2 : 6;
%2 is stepping value, 1st value = start, 3rd = end
disp(H);
disp(I);

A = [3 2 1];
A(1, 1);
A(1, 2);
A(1, 3);
disp(A);

B = [4 5 9];
B(1, 3) = 6;
disp(B);

A+B;
3*A; 
% A*B error matrix dimensions

% . before operation symbol for element wise operations
A .* B; 
A ./ B; 
A .^ B;
disp(A .* B);

x = 1;
y = 1;
z = 4i;
t = 10 + 10i;
disp(t);

student(1).name = 'John Doe';
student(1).addr1 = '123 Main Street';
student(1).city = 'Anytown';
student(1).post = '61223';
student(2).name = 'Chris Smith';
student(2).addr1 = '456 Boulevard Road';
student(2).city = 'Chigao';
student(2).post = '919321';
disp('Structs');
disp(student);

% cell data type used for storying unstructured info
% each element can have any data type
D{1,1} = [-7; 6; 1];
D{2,1} = [3.0 + 4.0i -5.0];
D{1,2} = 'This is text';
D{2,2} = [];
disp('Cells:\n');
disp(D)
