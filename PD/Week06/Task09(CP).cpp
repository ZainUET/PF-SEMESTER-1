#include <iostream>
#include <string>

using namespace std;

string checkPointPosition(int h, int x, int y);


int main() {
    int h, x, y;
    
    cout << "Enter block size (h): ";
    cin >> h;
    cout << "Enter x coordinate: ";
    cin >> x;
    cout << "Enter y coordinate: ";
    cin >> y;

    string result = checkPointPosition(h, x, y);
    cout << result << endl;

    return 0;
}

string checkPointPosition(int h, int x, int y)
 {
    if (x < 0 || y < 0 || x > 2 * h || y > 4 * h) {
        return "Outside";
    }

    bool insideLowerLeft = (x >= 0 && x <= h && y >= 0 && y <= h);
    bool insideLowerMiddle = (x >= h && x <= 2 * h && y >= 0 && y <= h);
    bool insideMiddleMiddle = (x >= h && x <= 2 * h && y >= h && y <= 2 * h);
    bool insideUpperMiddle = (x >= h && x <= 2 * h && y >= 2 * h && y <= 4 * h);

    if (insideLowerLeft || insideLowerMiddle || insideMiddleMiddle || insideUpperMiddle) {
        bool onBorderLowerLeft = (x == 0 || x == h) && (y >= 0 && y <= h) || (y == 0 || y == h) && (x >= 0 && x <= h);
        bool onBorderLowerMiddle = (x == h || x == 2 * h) && (y >= 0 && y <= h) || (y == 0 || y == h) && (x >= h && x <= 2 * h);
        bool onBorderMiddleMiddle = (x == h || x == 2 * h) && (y >= h && y <= 2 * h) || (y == h || y == 2 * h) && (x >= h && x <= 2 * h);
        bool onBorderUpperMiddle = (x == h || x == 2 * h) && (y >= 2 * h && y <= 4 * h) || (y == 2 * h || y == 4 * h) && (x >= h && x <= 2 * h);

        if (onBorderLowerLeft || onBorderLowerMiddle || onBorderMiddleMiddle || onBorderUpperMiddle) {
            return "Border";
        }
        
        return "Inside";
    }

    return "Outside";
}
