//
// Created by BERKE on 25.04.2023.
//

#include "Point.h"
#include <cmath>
#include <iostream>

Point::Point() : m_x{},m_y{},m_z{}{}
Point::Point(const double& x) : m_x{x},m_y{},m_z{} {}
Point::Point(const double& x,const double& y) : m_x{x},m_y{y},m_z{}  {}
Point::Point(const double& x,const double& y,const double& z) : m_x{x},m_y{y},m_z{} {}

double Point::distance()const{
    return distance(0,0,0);
}

double Point::distance(Point& other)const {
    return distance(other.m_x,other.m_y,other.m_z);
}

double Point::distance(const double &x1, const double &y1, const double &z1) const {
    return sqrt(pow(m_x - x1,2) + pow(m_y - y1,2) + pow(m_z - z1,2));
}

void Point::offset(double& dxyz)
{
    offset(dxyz,dxyz,dxyz);
}

void Point::offset(double& dx,double& dy,double& dz) {
    m_x += dx;
    m_y += dy;
    m_z += dz;
}

void Point::print(const double &x, const double &y, const double &z) {
    std::cout << "x : " << x << "\ny : " << y << "\nz : " << z << '\n';
}

void Point::print(Point& p) {
    std::cout << "x : " << p.m_x << "\ny : " << p.m_y << "\nz : " << p.m_z << '\n';
}






