#include <iostream>
#include <cmath>

using namespace std;

double deg2rad(double degree)
{
    return degree * (M_PI / 180);
}

double rad2deg(double radian)
{
    return radian * (180 / M_PI);
}

double findXComponent(double length1, double length2, double radian1, double radian2)
{
    return (length1 * cos(radian1)) + (length2 * cos(radian2));
}
double findYComponent(double length1, double length2, double radian1, double radian2)
{
    return (length1 * sin(radian1)) + (length2 * sin(radian2));
    ;
}

double pythagoras(double xcomp, double ycomp)
{
    return pow(abs(xcomp * xcomp + ycomp * ycomp), 0.5);
}

void showResult(double result_vec_length, double result_vec_direction)
{
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
    cout << "Length of the resultant vector = " << result_vec_length << endl;
    cout << "Direction of the resultant vector (deg) = " << result_vec_direction << endl;
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%";
}

int main()
{
    double l1, l2, a1, a2, xcomp, ycomp, result_vec_length, result_vec_direction;
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;

    // l1 = 1;
    // a1 = 0;
    // l2 = 2.5;
    // a2 = 102.5;

    // l1 = 12.7;
    // a1 = -45;
    // l2 = 4.5;
    // a2 = 30;

    a1 = deg2rad(a1);
    a2 = deg2rad(a2);
    xcomp = findXComponent(l1, l2, a1, a2);
    ycomp = findYComponent(l1, l2, a1, a2);
    result_vec_length = pythagoras(xcomp, ycomp);
    result_vec_direction = rad2deg(atan2(ycomp, xcomp));

    showResult(result_vec_length, result_vec_direction);
}
