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


void test_addition() {

    cout << "=== Addition ===" << endl;

    Vector r0(0, 0, 0);

    Vector r1(1, 1, 1);

    Vector r2(5, 6, 7);

    Vector r3(3, 1, 5);

    cout << r0 << " + " << r2 << " = " << (r0 + r2) << " lenght: " << (r0+r2).getLenght() << endl;
    cout << r1 << " + " << r3 << " = " << (r1 + r3) << " lenght: " << (r1+r3).getLenght() << endl;
    cout << r2 << " + " << r3 << " = " << (r2 + r3) << " lenght: " << (r2+r3).getLenght() << endl;

    cout << "================" << endl;
}


void test_substraction() {

    cout << "=== Substraction ===" << endl;

    Vector r0(0, 0, 0);

    Vector r1(1, 1, 1);

    Vector r2(5, 6, 7);

    Vector r3(3, 1, 5);

    cout << r0 << " - " << r2 << " = " << (r0 - r2) << " lenght: " << (r0-r2).getLenght() << endl;
    cout << r1 << " - " << r3 << " = " << (r1 - r3) << " lenght: " << (r1-r3).getLenght() << endl;
    cout << r2 << " - " << r3 << " = " << (r2 - r3) << " lenght: " << (r2-r3).getLenght() << endl;

    cout << "====================" << endl;
}

void test_cross_multiplication() {
    cout << "=== Cross multiplication ===" << endl;

    Vector r1(5, 6, 7);

    Vector r2(1, 2, 3);

    cout <<r1 <<" x " <<r2 << " -> " << (r1^r2) << " lenght: " << (r1^r2).getLenght() << endl;

    cout << "============================" << endl;
}

void test_norm(){

    cout << "=== Norm ===" << endl;

    Vector r0(0, 0, 0);

    Vector r1(1, 1, 1);

    Vector r2(4, 0, 0);

    cout << r0 << " lenght: " << r0.getLenght() << " -> " << r0.norm() << " lenght: " << (r0.norm()).getLenght() << endl;

    cout << r1 << " lenght: " << r1.getLenght() << " -> " << r1.norm() << " lenght: " << (r1.norm()).getLenght() << endl;

    cout << r2 << " lenght: " << r2.getLenght() << " -> " << r2.norm() << " lenght: " << (r2.norm()).getLenght() << endl;

    cout << "============" << endl;

}

void run_all_tests() {

    test_constructor_and_output();

    test_scalar_multiplication();

    test_cross_multiplication();

    test_addition();

    test_substraction();

    test_norm();

}
