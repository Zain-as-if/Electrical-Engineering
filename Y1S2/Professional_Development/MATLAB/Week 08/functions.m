v = [16 5 9 4; 2 11 7 14; 9 7 5 3]
z = sum(v)
z = sum(v, 2)

a = 2
b = 2
c = plus(a, b)
c = minus(a, b)

x = [1 2 3 4]
y = [5 6 7 8]
w = times(x, y)

d = [1 2; 3 4]
e = [5 6; 7 8]
f = mtimes(d, e)
f = rdivide(d, e)
f = ldivide(d, e)
f = mrdivide(d, e)
f = mldivide(d, e)
f = power(d, e)

v = 1 : 5
w = cumsum(v)

v = [1 3 5; 2 4 6]
w = cumsum(v)
w = cumsum(v, 1)
w = cumsum(v, 2)

v = [1 3 5; 2 4 6]
z = prod(v)
z = prod(v, 2)

G = [0.1 1.9 3.2; 7.9 4.4 9.1]
z = ceil(G)
z = floor(G)

A = -pi : 0.6 : pi
H = sin(A)
J = sind(A)
K = cos(A)
L = cosd(A)
M = tan(A)
N = tand(A)
O = cot(A)
P = cotd(A)
Q = exp(A)
R = log(A)
S = sqrt(A)

str = string(A)

chararray = 'Four'
string1 = string(chararray)
string2 = 'years'
string3 = 'ago'
appstring = append(string1, string2, string3)

str = 'Find the starting indices'
Ind = strfind(str, 'in')
chr = 'The quick brown fox'
newchr = strrep(chr, 'quick', 'sly')
strcomp = strcmp(chr, newchr)

str = num2str(9)
numb = str2double('74')
str1 = num2str(pi)
numb = str2double(str1)

A = 'twenty-three'
B = 'Twenty-three'
C = ' is '
D = num2str(23)
E = append(A, C, D)
F = append(B, C, D)
strcomp = strcmp(E, F)
G = strfind(B, 't')

E = zeros(5, 3)
F = zeros(4)
G = ones(2, 3)
H = ones(3)

E = rand(5, 1)
F = rand(4)
G = diag(E)
H = diag(F)

A = linspace(2, 10, 5)
B = size(A)
C = length(A)

E = [3 5 2; 6 7 4; 9 2 7]
F = fliplr(E)
G = flipud(E)
H = rot90(E)

A = [3 8 9 4 2 5]
B = min(A)
C = [23 42; 15 52; 65 25]
D = min(C)
E = min(C, [], 2)

B = max(A)
D = max(C)
E = max(C, [], 2)

A = [3 8 9 4 2 5]
C = [23 42; 15 52; 65 25]
B = mean(A)
D = mean(C)
E = mean(C, 2)

B = median(A)
D = median(C)
E = median(C, 2)

B = std(A)
D = std(C)
E = std(C, 0, 2)

B = var(A)
D = var(C)
E = var(C, 0, 2)

[vol, area] = conevolumearea(4, 9)