%% Logical Data Type
% Logical True / False 
x = [true, true, false, true, false];
x

%% Char Data Type
% Used For Storing Alphanumeric Characters
% Array Of Characters Called A String
w = 'Hello World';
w

%% Double Data Type
% Created When Assigning A Numerical Value To Variable
x = 1
y = 1
z = 4i
t = 10 + 10i

%% Struct Data Type
% Contains Several Data Types (Stored In Different Fields)
% For Example: Struct Data Used When Creating Array Representing Student Defined By Name & ID Number
% Struct Array Name And Fields Seperated By Dot '.' 
% Index/Indices Specified In Parenthesis Next To Array Name
student(1).name='John Doe';
student(1).addr1='123 Main Street';
student(1).city='Anytown';
student(1).state='LA';
student(1).zip=71211;
student(2).name='Chris Smith';
student(2).addr1='456 Boulevard Road';
student(2).city='Chicago';
student(2).state='Illinois';
student(2).zip=74901;
student(1)
student(2)

%% Cell Data Type
% Storing Unstructored Information 
% Each Element Of Cell Array Can Have Any Data Type (Inc. Other Cells)
% ELements Of Cell Array Indexed & Concatenated Using Braces '{}'
a{1,1}=[-7; 6; 1];
a{2,1}=[3.0 + 4.0i -5.0];
a{1,2}='This Is A Text String';
a{2,2}=[];
a

% Cell + Struct Data Types Most Common For Storing Heterogeneous Data 
% Difference Between Them Is How We Index Data
% Struct = Stores Hierarchical Data Of Mixed Type 
% Cell = Array Of Containers Of Mixed Type