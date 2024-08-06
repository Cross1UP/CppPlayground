// IntAvg.cpp This quick project will take the average of 2-5 integers based on the user's input

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    cout << "How many numbers to add: ";
    int size;
    cin >> size;

    //Ensure the input does not go out of bounds
    while (size > 5 || size < 1) {
	   cout << "Invalid input, please enter a number between 2-5\n";
	   cin >> size;
    }

    // Create a vector of integers with 'size' elements
    vector<int> myVector(size);

    for (int i = 0; i < size; i++) {
	   cout << "Add: ";
	   int item;
	   cin >> item;

	   myVector[i] = item;
    }

    double total = 0;
    for (int i = 0; i < size; i++) {
	   total = total + myVector[i];
    }

    double average = total / size;

    cout << "Average: " << average << endl;

    return 0;
}