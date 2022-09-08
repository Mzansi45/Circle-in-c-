#ifndef DRAWINGCIRCLE_H
#define DRAWINGCIRCLE_H

#include <cmath>
#include <iostream>

using namespace std;

class DrawingCircle
{
    public:
        DrawingCircle();
        virtual ~DrawingCircle();
        DrawingCircle(const DrawingCircle& other);
        void DrawCircle();
        int CalculateDistance(int x1,int x2,int y1,int y2);
        void SetRadius(int radius);
        void SetCentreRow(int r);
        void SetCentreCol(int c);

    private:
        int _centreRow;
        int _centreCol;
        int _radius;
};

#endif // DRAWINGCIRCLE_H
