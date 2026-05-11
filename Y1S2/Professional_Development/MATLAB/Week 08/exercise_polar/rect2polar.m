function [r, theta] = rect2polar(x, y)
r = sqrt(x^2 + y^2)
theta = ((180/pi) * atan2(y,x))