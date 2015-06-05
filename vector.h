#ifndef VECTOR_H
#define VECTOR_H


class Vector
{
    double r_x, r_y, r_z;
    double lenght;

    friend std::ostream& operator << (std::ostream&, const Vector&);

public:

    Vector(double, double, double);

    double getX() const;

    double getY() const;

    double getZ() const;

    double getLenght() const;

    Vector operator* (double);

    double operator* (const Vector& r);

    Vector operator+ (const Vector& r);

    Vector operator- (const Vector& r);

    Vector operator^ (const Vector& r);

    Vector norm();

};

Vector operator* (double, const Vector&);

#endif // VECTOR_H
