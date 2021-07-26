#include <iostream>

using namespace std;

int volume(int height, int width, int length);

struct Box{
  int box1;
  int box2;
};
// 1. Define a structure called Box
// have the integer data types Height, Width, Length

// Do not change the main function
int main() {
  int box1;
  int box1height,box1width,box1length;
    // 2. Create a variable called box1 of the Box structure type
    // int box1Height, box1Width, box1Length;
    // 3. Create a variable called box2 of the Box structure type
  int box2;
  int box2height,box2width,box2length;
    
    // int box2Height, box2Width, box2Length;
    int totalVolume;
    
    // 4. Input the height, width, lenght of box1 and box2
    cout << "Enter Box 1 Height : ";
    cin >> box1height;
    cout << "Enter Box 1 Width : ";
    cin >> box1width;
    cout << "Enter Box 1 Length : ";
    cin >> box1length;
    
    cout << "Enter Box 2 Height : ";
    cin >> box2height;
    cout << "Enter Box 2 Width : ";
    cin >> box2width;
    cout << "Enter Box 2 Length : ";
    cin >> box2length;
    
    // 5. Replace the coding below to pass the Box type structure
    totalVolume = volume(box1height,box1width,box1length )
             + volume(box2height,box2width,box2length );
    
    cout << "Volume of Box is " << totalVolume << endl;
    
    return 0;
}

// Implement the functions here
int volume(int height, int width, int length)
{
  return height * width * length;
}