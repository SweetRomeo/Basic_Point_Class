//
// Created by BERKE on 25.04.2023.
//

#ifndef MAINPROGRAM_POINT_H
#define MAINPROGRAM_POINT_H


class Point {
public:
    Point();
    explicit Point(const double& x);
    Point(const double& x,const double& y);
    Point(const double& x,const double& y,const double& z);
    double distance()const;
    double distance(Point& other)const;
    double distance(const double& x1,const double& y1,const double& z1) const;
    void offset(double& dxyz);
    void offset(double& dx,double& dy,double& dz);
    static void print(const double& x,const double& y,const double& z);
    static void print(Point& p) ;
private:
    double m_x;
    double m_y;
    double m_z;
};


#endif //MAINPROGRAM_POINT_H
