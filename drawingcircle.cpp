#include "drawingcircle.h"

DrawingCircle::DrawingCircle()
{
    //ctor
}

DrawingCircle::~DrawingCircle()
{
    //dtor
}

DrawingCircle::DrawingCircle(const DrawingCircle& other)
{
    //copy ctor
}

int DrawingCircle::CalculateDistance(int x1,int x2,int y1,int y2)
{
    int distance;
    distance = sqrt(pow(x1-x2,2)+ pow(y1-y2,2));

    return distance;
}

void DrawingCircle::DrawCircle()
{
    for(double r=20;r>=0;r=r-1)
    {
        for(double c =0;c<=20;c=c+1)
        {
          if( CalculateDistance(_centreRow,r,_centreCol,c) < _radius)
          {
              cout << "* ";
          }
          else if(r==0|| c ==0 || c==20 || r==20)
          {
              cout << "o ";
          }
          else cout << "  ";
        }
        cout << endl;
    }

}
void DrawingCircle::SetRadius(int radius)
{
    _radius = radius;
}
void DrawingCircle::SetCentreRow(int r)
{
    _centreRow = r;
}
void DrawingCircle::SetCentreCol(int c)
{
    _centreCol = c;
}
