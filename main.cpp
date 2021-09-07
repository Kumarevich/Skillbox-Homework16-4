#include <iostream>
#include <string>

enum notes
{
    C = 1,
    D = 2,
    E = 4,
    F = 8,
    G = 16,
    A = 32,
    H = 64
};

std::string input () {
    std::string tempInput;
    std::string music = "";
    for (int i = 0; i < 12; ++i) {
        std::cout << "Input combination #" << i + 1 << ": ";
        std::cin >> tempInput;
        music += tempInput + " ";
    }
    return music;
}

char note_to_text (int temp) {
    if (temp & C) {
        return 'C';
    }
    if (temp & D) {
        return 'D';
    }
    if (temp & E) {
        return 'E';
    }
    if (temp & F) {
        return 'F';
    }
    if (temp & G) {
        return 'G';
    }
    if (temp & A) {
        return 'A';
    }
    if (temp & H) {
        return 'H';
    }
}

int main() {
    std::string music = input();
    char ch = '1';

    for (int i = 0; i < music.length(); ++i) {
        int temp = 1;
        int shift;
        if (music[i] == ' ') {
            std::cout << music[i];
        } else {
            shift = (int)music[i] - 49;
            temp = temp << shift;
            std::cout << note_to_text(temp);
        }
    }

    return 0;
}
