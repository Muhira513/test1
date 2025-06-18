#include <iostream>
#include <vector>
#include <random>

int main() {
    std::vector<int> numbers = { 1, 2, 3, 4};

    // ���� ������ �ʱ�ȭ
    std::random_device rd;
    std::mt19937 gen(rd());

    // �յ� ���� ���� (0���� numbers.size()-1 ����)
    std::uniform_int_distribution<> dis(0, numbers.size() - 1);

    // ���� �ε��� ���� �� ��� ����
    int randomIndex = dis(gen);
    int randomElement = numbers[randomIndex];

    std::cout << "���� ���: " << randomElement << std::endl;

    return 0;
}