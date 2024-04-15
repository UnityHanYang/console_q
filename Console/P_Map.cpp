#include <iostream>
#include <random>
#include <vector>
#include "GameMap.h"

using namespace std;
// ���� ũ��
const int WIDTH = 10;
const int HEIGHT = 10;

// ���� ��Ÿ���� 2���� ����
std::vector<std::vector<int>> map(HEIGHT, std::vector<int>(WIDTH, 0));

void addRandomElements(int numberOfElements, int elementValue) {
    std::random_device rd; // ���� ������ ���� ��ġ
    std::mt19937 gen(rd()); // �޸��� Ʈ������ ���� ���� ����
    std::uniform_int_distribution<> disX(0, WIDTH - 1); // X��ǥ�� ���� ����
    std::uniform_int_distribution<> disY(0, HEIGHT - 1); // Y��ǥ�� ���� ����

    for (int i = 0; i < numberOfElements; ++i) {
        int x, y;
        do {
            x = disX(gen);
            y = disY(gen);
        } while (map[y][x] != 0); // �̹� �ٸ� ��Ұ� ������ �ٽ� �õ�

        map[y][x] = elementValue; // ������ ��� ���� �ʿ� ��ġ
    }
}

void printMap() {
    for (const auto& row : map) {
        for (int tile : row) {
            std::cout << tile << " ";
        }
        std::cout << std::endl;
    }
}

void main() {
    GameMap gm;
    gm.CreateMap();
}