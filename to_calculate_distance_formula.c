#include <stdio.h>
#include <string.h>
#include <math.h>

struct points
{
    int x;
    int y;
};

int main()
{
    struct points p1, p2;
    // created two variables of points type to store points information ...

    printf("enter the x & y cordinates of point 1:\n");
    scanf("%d %d", &p1.x, &p1.y);
    printf("enter the x & y cordinates of point 2:\n");
    scanf("%d %d", &p2.x, &p2.y);
    // inouted the points infor mation from user;

    float result;
    result = sqrt(pow((p2.x - p1.x), 2) + pow((p2.y - p1.y), 2));
    printf("the distance b/w these points are %.3f\n", result);

    return 0;
}
//completed...