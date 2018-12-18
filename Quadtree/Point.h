#pragma once

// Used to hold details of a point
struct Point
{
	int x;
	int y;

	Point(int _x, int _y)
	{
		x = _x;
		y = _y;
	}
	Point()
	{
		x = 0;
		y = 0;
	}
};