#include <iostream>
#include <cmath> 
#define M_PI 3.14
using namespace std;

void calculateCircleArea(double radius, double& area) {
    area = M_PI * radius * radius; 
}

int main() {
    setlocale(0, "ru");
    double radius1, radius2;
    double area1, area2;

    cout << "Введите радиус первого круга: ";
    cin >> radius1;

   cout << "Введите радиус второго круга: ";
   cin >> radius2;

    calculateCircleArea(radius1, area1);
    calculateCircleArea(radius2, area2);

   cout << "Площадь круга с радиусом " << radius1 << " равна: " << area1 << endl;
   cout << "Площадь круга с радиусом " << radius2 << " равна: " << area2 << endl;

    return 0;
}
