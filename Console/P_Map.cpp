#include <iostream>
#include <random>
#include <vector>
#include "GameMap.h"

using namespace std;
// 맵의 크기
const int WIDTH = 10;
const int HEIGHT = 10;

// 맵을 나타내는 2차원 벡터
std::vector<std::vector<int>> map(HEIGHT, std::vector<int>(WIDTH, 0));

void addRandomElements(int numberOfElements, int elementValue) {
    std::random_device rd; // 난수 생성을 위한 장치
    std::mt19937 gen(rd()); // 메르센 트위스터 난수 생성 엔진
    std::uniform_int_distribution<> disX(0, WIDTH - 1); // X좌표를 위한 분포
    std::uniform_int_distribution<> disY(0, HEIGHT - 1); // Y좌표를 위한 분포

    for (int i = 0; i < numberOfElements; ++i) {
        int x, y;
        do {
            x = disX(gen);
            y = disY(gen);
        } while (map[y][x] != 0); // 이미 다른 요소가 있으면 다시 시도

        map[y][x] = elementValue; // 지정된 요소 값을 맵에 배치
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