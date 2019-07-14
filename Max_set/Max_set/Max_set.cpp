#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

typedef struct _point
{
	int x;
	int y;
}point_s;

bool mycmp(const point_s& a, const point_s& b)
{
	return a.y > b.y;
}

int main(int argc, char *argv[])
{
	int i, n, flag_x;
	vector<point_s> points;
	point_s point_tmp;

	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d%d", &point_tmp.x, &point_tmp.y);
		points.push_back(point_tmp);
	}

	sort(points.begin(), points.end(), mycmp); //将所有的点按照y值降序排列

	for (i = 0; i < n; i++)
	{
		if (i == 0)
		{
			printf("%d %d\n", points[i].x, points[i].y);
			flag_x = points[i].x;
		}
		else
		{
			if (points[i].x > flag_x)
			{
				flag_x = points[i].x;
				printf("%d %d\n", points[i].x, points[i].y);
			}
		}
	}

	return 0;
}