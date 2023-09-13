#include "iostream"
#include "cmath"

void S() {
    double v, t;
    std::cout << "Введите скорость и время: ";
    std::cin >> v >> t;
    std::cout << v * t << " пройденное расстояние\n";
}

void eqv() {
    double a, b, c;
    std::cout << "Введите коэффициенты a, b и c: ";
    std::cin >> a >> b >> c;

    // Вычисляем дискриминант
    double discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        // Два действительных корня
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        std::cout << "Два корня: " << root1 << " и " << root2 << std::endl;
    } else if (discriminant == 0) {
        // Один действительный корень
        double root = -b / (2 * a);
        std::cout << "Один корень: " << root << std::endl;
    } else {
        // Комплексные корни
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        std::cout << "Комплексные корни: " << realPart << " + " << imaginaryPart << "i и " << realPart << " - "
                  << imaginaryPart << "i" << std::endl;
    }
}

int main() {
    
    S();
    eqv();
    return 0;
}
