#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main() {
  srand(time(NULL)); // This initializes the random generator.
  int rnd = 0;
  for (int i = 0; i<20; i++) {
    rnd = rand() % 5; // generate a random number in the range [0, 4]
    try {
      switch (rnd) {
      case 0:
        throw 3.2f;
        break;
      case 1:
        throw double(43.56);
        break;
      case 3:
        throw "Abrakadabra";
        break;
      case 4:
        throw false;
        break;
      default:
        throw 12;
        break;
      }
    } catch (float f) {
      cout << f << endl;
    }
    catch (double d) {
      cout << d << endl;
    }
    catch (char* c) {
      cout << c << endl;
    }
    catch (bool b) {
      cout << b << endl;
    }
    catch (...) {
      cout << 12 << endl;
    }
  
    // Write catch blocks for each possibly thrown exception.
    // In each catch block write out what the exception's type was. And what the exceptions value was.

  }
  return 0;
}