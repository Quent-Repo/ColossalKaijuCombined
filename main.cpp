//grrkek
#include <iostream>
#include <random>
#include <vector>
using namespace std;

int main() {
    vector<string> g2,d2;
    // TODO: Add a vector or an Array to pull the text from the image

    std::random_device random;

    for (int x = 0; x < 4; x++) {
        cout << "\n" << (random() % 10) + 1 << " ";
    }

    cout << "\n";
    for(int x = 0;x < 3;x++){
        cout << ((random()) % 10) +1 << " ";
    }

    cout << "\n";
    for(int d=0;d<1;d++){
        switch (d) {
            case 0:
            for (int x = 0; x < 3; x++) {
                cout << ((random()) % 15) + 1 << " ";
            }
            case 1:
                cout << "\n";
                break;
            default:
                break;
        }
        for(int x = 0;x < 3;x++){
            cout << ((random()) % 19) +1 << " ";
        }
    }


}