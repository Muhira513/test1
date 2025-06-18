#include <iostream>
#include <vector>
#include <random>

int main() {
    std::vector<int> numbers = { 1, 2, 3, 4};

    // 난수 생성기 초기화
    std::random_device rd;
    std::mt19937 gen(rd());

    // 균등 분포 정의 (0부터 numbers.size()-1 까지)
    std::uniform_int_distribution<> dis(0, numbers.size() - 1);

    // 랜덤 인덱스 생성 및 요소 선택
    int randomIndex = dis(gen);
    int randomElement = numbers[randomIndex];

    std::cout << "랜덤 요소: " << randomElement << std::endl;

    return 0;
}