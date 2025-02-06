#include <iostream>

//Task 2
//int dilnik(int a, int b) {
//    if (b == 0)
//        return a;
//    return dilnik(b, a % b);
//}
//
//int main() {
//    int number1, number2;
//    std::cout << "Vvedit dva chysla: ";
//    std::cin >> number1 >> number2;
//    int rezult = dilnik(number1, number2);
//    std::cout  << rezult << std::endl;
//    return 0;
//}
// Task 3
//int main() {
//    int N;
//    std::cout << "Vvedit chislo  : ";
//    std::cin >> N;
//
//    if (N > 0) {
//        std::cout << "*";
//        for (int i = 1; i < N; i++) {
//            std::cout << "*";
//        }
//    }
//
//    std::cout << std::endl;
//
//    return 0;
//}
//
//Task 4
//int sumInRange(int a, int b) {
//    if (a > b) {
//        return 0;
//    }
//    return a + sumInRange(a + 1, b);
//}
//
//int main() {
//    int a, b;
//    std::cout << "Vvedit a: ";
//    std::cin >> a;
//    std::cout << "Vvedit b: ";
//    std::cin >> b;
//
//    if (a > b) {
//        std::cout << "Chislo a ne mozhe buti bilshe chisla b." << std::endl;
//    }
//    else {
//        int result = sumInRange(a, b);
//        std::cout << result << std::endl;
//    }
//
//    return 0;
//}
