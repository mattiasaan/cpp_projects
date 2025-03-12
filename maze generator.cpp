#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <algorithm>

using namespace std;

const int LARGHEZZA = 31;
const int ALTEZZA = 31;

char labirinto[ALTEZZA][LARGHEZZA];

void inizializzaLabirinto() {
    for (int y = 0; y < ALTEZZA; y++) {
        for (int x = 0; x < LARGHEZZA; x++) {
            labirinto[y][x] = '#';
        }
    }
}

void generaLabirinto(int x, int y) {
    labirinto[y][x] = '.';  // passaggio

    vector<pair<int, int>> direzioni = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
    
    random_shuffle(direzioni.begin(), direzioni.end());

    for (auto dir : direzioni) {
        int nx = x + dir.first * 2;
        int ny = y + dir.second * 2;

        if (nx > 0 && nx < LARGHEZZA - 1 && ny > 0 && ny < ALTEZZA - 1 && labirinto[ny][nx] == '#') {
            labirinto[y + dir.second][x + dir.first] = '.';
            generaLabirinto(nx, ny);
        }
    }
}

void aggiungiVicoliCiechi() {
    for (int i = 0; i < 50; i++) {  //vicoli ciechi
        int x = (rand() % (LARGHEZZA / 2)) * 2 + 1;
        int y = (rand() % (ALTEZZA / 2)) * 2 + 1;

        for (int j = 0; j < 3; j++) {  // vicolo cieco lungo
            if (x > 1 && x < LARGHEZZA - 2 && y > 1 && y < ALTEZZA - 2) {
                labirinto[y][x] = '.';
                x += (rand() % 3 - 1) * 2;
                y += (rand() % 3 - 1) * 2;
            }
        }
    }
}

void stampaLabirinto() {
    for (int y = 0; y < ALTEZZA; y++) {
        for (int x = 0; x < LARGHEZZA; x++) {
            cout << labirinto[y][x] << " ";
        }
        cout << endl;
    }
}

int main() {
    srand(time(nullptr));

    inizializzaLabirinto();
    generaLabirinto(1, 1);
    aggiungiVicoliCiechi();
    stampaLabirinto();

    return 0;
}
