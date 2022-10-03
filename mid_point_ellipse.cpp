// C++ program for implementing
// Mid-Point Ellipse Drawing Algorithm
#include <bits/stdc++.h>
using namespace std;

void midptellipse(int rx, int ry,
				int xc, int yc)
{
	float dx, dy, d1, d2, x, y;
	x = 0;
	y = ry;

	// Initial decision parameter of region 1
	d1 = (ry * ry) - (rx * rx * ry) +
					(0.25 * rx * rx);
	dx = 2 * ry * ry * x;
	dy = 2 * rx * rx * y;
cout<<" initial d1:"<<d1<<endl;
cout<<" initial dx: "<<dx<<endl;
cout<<" initi dy: "<<dy<<endl;
	// For region 1
	while (dx < dy)
	{

		// Print points 
		cout << x + xc << " , " << y + yc << endl;
		// Checking and updating value of
		// decision parameter based on algorithm
		if (d1 < 0)
		{
			x++;
			dx = dx + (2 * ry * ry);
			cout<<"  r1 if condition\n";
			cout<<" dx = dx + (2 * ry * ry) "<<dx<<endl;
			d1 = d1 + dx + (ry * ry);
			cout<<" d1 = d1 + dx + (ry * ry) "<<d1<<endl;

		}
		else
		{
			x++;
			y--;
			dx = dx + (2 * ry * ry);
			cout<<" r1 else condition\n";
			cout<<" dx = dx + (2 * ry * ry): "<<dx<<endl;
			dy = dy - (2 * rx * rx);
			cout<<" dy = dy - (2 * rx * rx): "<<dy<<endl;
			d1 = d1 + dx - dy + (ry * ry);
			cout<<" d1 = d1 + dx - dy + (ry * ry): "<<d1<<endl;
		}
	}

	// Decision parameter of region 2
	d2 = ((ry * ry) * ((x + 0.5) * (x + 0.5))) +
		((rx * rx) * ((y - 1) * (y - 1))) -
		(rx * rx * ry * ry);
		cout<<" d2: "<<d2<<endl;

	// Plotting points of region 2
	while (y >= 0)
	{

		// Print points based on 4-way symmetry
		cout << x + xc << " , " << y + yc << endl;
		

		// Checking and updating parameter
		// value based on algorithm
		if (d2 > 0)
		{
			y--;
			dy = dy - (2 * rx * rx);
			cout<<" r2 if condition\n";
			cout<<" dy = dy - (2 * rx * rx): "<<dy<<endl;
			d2 = d2 + (rx * rx) - dy;
			cout<<"d2 = d2 + (rx * rx) - dy: "<<d2<<endl;
		}
		else
		{
			y--;
			x++;
			dx = dx + (2 * ry * ry);
			cout<<" r2 else condition\n";
			cout<<" dx = dx + (2 * ry * ry): "<<dx<<endl;
			dy = dy - (2 * rx * rx);
			cout<<" dy = dy - (2 * rx * rx): "<<dy<<endl;

			d2 = d2 + dx - dy + (rx * rx);
			cout<<"d2 = d2 + dx - dy + (rx * rx): "<<d2<<endl;
		}
	}
}

// Driver code
int main()
{
	// To draw a ellipse of major and
	// minor radius 15, 10 centered at (50, 50)
	midptellipse(10, 15, 50, 50);

	return 0;
}

// This code is contributed
// by Akanksha Rai
