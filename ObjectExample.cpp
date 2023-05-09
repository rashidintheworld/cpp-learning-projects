#include <iostream>
using namespace std;

class Spaceship {
private:
    string color;
    int speed;
    int travelTime;

public:
    Spaceship(string color, int speed, int travelTime) {
        this->color = color;
        this->speed = speed;
        this->travelTime = travelTime;
    }

    void accelerate(int increase) {
        speed += increase;
        cout << "Spaceship speed is " << speed << " km/s" << endl;
    }

    void stop() {
        speed = 0;
        cout << "Spaceship stopped." << endl;
    }

    void showTravelTime() {
        cout << "Spaceship will travel for " << travelTime << " seconds." << endl;
    }
};

int main() {
    Spaceship ship("Blue", 100, 5000);

    cout << "Spaceship color: " << ship.color << endl;

    ship.accelerate(50);
    ship.showTravelTime();

    ship.accelerate(100);
    ship.showTravelTime();

    ship.stop();

    return 0;
}
