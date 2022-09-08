#include <iostream>
#include "drawingcircle.h"

using namespace std;

int main()
{
    DrawingCircle temp;
    temp.SetCentreCol(0);
    temp.SetCentreRow(0);
    temp.SetRadius(13);
    temp.DrawCircle();
    return 0;
}
