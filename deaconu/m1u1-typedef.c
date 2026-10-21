#include <stdio.h>

typedef struct {
    const char* identifier;
    int x;
    int y;
    int z;
  } Point;

// function needs to be defined before being called
void printPoint(Point *pp);

int main(int narg, char *arg[])
{


  Point myPoint;

  myPoint.identifier = "Main Point";
  myPoint.x = 10;
  myPoint.y = 7;
  myPoint.z = 1;
 
  Point *myPointer = &myPoint;

  printPoint(myPointer);
  
  return 0;
}

void printPoint(Point *pp) {
  printf("%s has coordinates x:%d y:%d z:%d\n", pp->identifier, pp->x, pp->y, pp->z);
}