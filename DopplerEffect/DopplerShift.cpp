#include <iostream>
#include <string>
using namespace std;

/* program that calculates the relativistic doppler effect from variables given by the user */

int main() {

  const int c = 299792458; // propagation speed of light in a vacuum in m/s
  double f_source; // actual frequency in m/s
  double f_observed; // observer's observed frequency in m/s
  double v_observer; // velocity of observer in m/s
  double v_source; // velocity of source in m/s

  double f_observed_unknown = ((c + v_observer)/(c + v_source))*f_source;
  double f_source_unknown = ((c + v_source)/(c + v_observer))*f_observed;

  string calculationChoice;
  cout << "Which do you want to calculate: Observed frequency (OF) or source frequency (SF)? \n";
  cin >> calculationChoice; // get user input from keyboard
  cout << "You are choosing to calculate: " << calculationChoice << "\n";

  if (calculationChoice == "OF") {
    cout << "You are choosing to calculate: " << "Observed frequency. \n";
    cout << "Input the velocity of the observer in m/s. \n";
    cin >> v_observer;
    cout << "Input the velocity of the source in m/s. \n";
    cin >> v_source;
    cout << "Input the frequency of the source in Hz. \n";
    cin >> f_source;
    cout << "The observed frequency is: \n";
    cout << f_observed_unknown;
    cout << " Hz \n";
    return 0;
  } else if (calculationChoice == "SF") {
    cout << "You are choosing to calculate: " << "Source frequency. \n";
    cout << "Input the velocity of the observer in m/s. \n";
    cin >> v_observer;
    cout << "Input the velocity of the source in m/s. \n";
    cin >> v_source;
    cout << "Input the frequency of the observer in Hz. \n";
    cin >> f_observed;
    cout << "The source frequency is: \n";
    cout << f_source_unknown;
    cout << " Hz \n";
    return 0;
  } else {
    cout << "Cannot read input. Choose either Observed frequency (OF) or source frequency (SF). \n";
    return 0;
  }
}
