function [x, y] = polar2rect(r, theta)
x = r * cosd(theta)
y = r * sind(theta)