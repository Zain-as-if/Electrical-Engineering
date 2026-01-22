%% Row Vector (1xn), only commas (or spaces) used: 
% Commas
c = [1, 2, 3]

% Spaces
s = [1 2 3]

%% Colon Vector (nx1), only semi-colons used:
% Semi-Colons
sc = [1; 2; 3]

% Semi Colons Create New Rows 
% Spaces / Commas Seperate Elements In Same Row

%% Colon Operator
% 1 Through 6 Inclusive
colon = 1 : 6
% 1 Through 6 Step Of 2 
increment = 1 : 2 : 6
% 0.01*pi through 1.00*pi Step Of 0.01
angles = (0.01:0.01:1.00) * pi

%% Accessing Array Elements
% Row Always Specified First
A = [3 2 1];
disp('Display Element A(1,1):')
disp(A(1,1))
disp('Display Element A(1,2):')
disp(A(1,2))
disp('Display Element A(1,3):')
disp(A(1,3))

% Similar Syntax Used When Assigning New Value To Element
B = [3 5 9];
disp('Previous Element Value Of B(1,3):')
disp(B(1,3))

B(1,3)=6;

disp('Element Value Of B(1,3) After:')
disp(B(1,3))

%% Dot Operator
A = [3 2 1];
B = [1 2 3];

% A*B Doesn't Work As Doesn't Follow Matrix Multiplication 
% To Do Element-Wise Operations Use Dot '.' Then Operation
A.*B
A./B
A.^B