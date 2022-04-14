#include <iostream>

using namespace std;

class Room {
  public:
    Room(double l, double w) {
      length = l;
      width = w;
    }
  double Area() {
    return length * width;
  }
  int compareArea(Room room) {
    return this -> Area() < room.Area();
  }

  private:
    double length;
    double width;
};

int main() {
  double room_1_length;
  double room_1_width;
  double room_2_length;
  double room_2_width;
  cout << "Enter the length of Room #1." << endl;
  cin >> room_1_length;
  cout << endl;
  cout << "Enter the width of Room #1." << endl;
  cin >> room_1_width;
  cout << endl;
  cout << "Enter the length of Room #2." << endl;
  cin >> room_2_length;
  cout << endl;
  cout << "Enter the width of Room #2." << endl;
  cin >> room_2_width;
  cout << endl;
  Room Room1(room_1_length, room_1_width);
  Room Room2(room_2_length, room_2_width);

  if (Room1.compareArea(Room2)) {
    cout << "The area of Room #2 is larger than that of Room #1." << endl;
  } else {
    cout << "The area of Room #2 is equal to or smaller than that of Room #1." << endl;
  }

  return 0;
}
