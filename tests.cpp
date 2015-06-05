#include <iostream>
#include "vector.h"

using namespace std;

void test_constructor_and_output() {

    cout << "=== Construction and toString convesion ===" << endl;

    Vector r1(0, 0, 0);
    Vector r2(1, 1, 1);
    Vector r3(1.5, 2.5, 3.5);
    cout << "(0, 0, 0)" << " -> " << r1 << " lenght: " << r1.getLenght() << endl
         << "(1, 1, 1)" << " -> " << r2 << " lenght: " << r2.getLenght() << endl
         << "(1.5, 2.5, 3.5)" << " -> " << r3 << " lenght: " << r3.getLenght() << endl;



    cout << "===========================================" << endl;

}


void test_scalar_multiplication() {

    cout << "=== Scalar multiplication ===" << endl;

    Vector r1(5, 6, 7);

    Vector r2 = 2.0 * r1;

    cout << "2.0 * (5, 6, 7)" << " -> " << r2 << " lenght: " << r2.getLenght() << endl;

    Vector r3 = r1 * 2.0;

    cout << "(5, 6, 7) * 2.0" << " -> " << r3 << " lenght: " << r3.getLenght() << endl;

    cout << r1 << " * " << Vector(0, 0, 0) << " = " << r1 * Vector(0, 0, 0) << endl;

    cout << r1 << " * " << Vector(1, 1, 1) << " = " << r1 * Vector(1, 1, 1) << endl;

    cout << r2 << " * " << r3 << " = " << r2 * r3 << endl;

    cout << "=============================" << endl;
}


void run_all_tests() {

    test_constructor_and_output();

    test_scalar_multiplication();

}
