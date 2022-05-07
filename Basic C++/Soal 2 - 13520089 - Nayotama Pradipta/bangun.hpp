#ifndef BANGUN_HPP
#define BANGUN_HPP
#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
using namespace std;

#define PI 3.141592653589793


double getAreaCircle(int radius);

double getCircumferenceCircle(int radius);

double getAreaRAT(int base, int height);

double getPerimeterRAT(int base, int height);

int getAreaRectangle(int length, int width);

int getPerimeterRectangle(int length, int width);

void printSpecBangun(string bangun);

#endif