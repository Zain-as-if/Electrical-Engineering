function [volume, area] = conevolumearea(r, h)
volume = pi * r^2 * h / 3
area = pi * r * (r + (h^2 + r^2)^(1 / 2))