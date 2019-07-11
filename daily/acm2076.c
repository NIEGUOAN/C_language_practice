#pragma warning(disable:4996)
#include<stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	float angle, dh, dm;
	int h, m, s, n;
	scanf("%d", &n);
	while (n--)
	{
		scanf("%d %d %d", &h, &m, &s);
		if (h > 12)
			h = h % 12;
		if (m > 60)
			m = m % 60;
		if (s > 60)
			s = s % 60;
		dh = (30 * h) + (0.5 * m) + (1 / 120.0 * s);
		dm = (6 * m) + (0.1 * s);
		angle = (dh - dm);
		if (angle < 0)
			angle = -angle;
		while (angle > 360)
			angle -= 360;
		if (angle > 180)
			angle = 360 - angle;
		printf("%d\n", (int)angle);
	}
	return 0;
}