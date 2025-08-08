/* == A Practice on Enums and typedef == */
// Build a traffic light simulator
// user inputs color, it outputs the action
#include <iostream>
#include <string>

using namespace std;
enum TrafficLightColor { RED = 1, YELLOW, GREEN };
typedef TrafficLightColor TLC;

int main()
{
  int colorFromUser;
  TLC color;
  // I just a learned a shortcut on how to jump to a specific line;
  // `CTRL + G`, then input the line number, hit `ENTER`, you are there

  cout << "Enter one color (1. Red, 2. Green, 3. Yellow): ";
  cout << "Which color do you choose \n 1. Red \n 2. Yellow \n 3. Green \n:";

  cin >> colorFromUser;

  switch (colorFromUser)
  {
  case RED:
    cout << "STOP!!!";
    break;
  case YELLOW:
    cout << "Get Ready!";
    break;
  case GREEN:
    cout << "Go...";
    break;
  default:
    break;
  }
  cout << "\n";
}