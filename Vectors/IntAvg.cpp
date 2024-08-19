#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main()
{
    cout << "In this program, we will take the average test score from your students.\nPlease enter the number of students there are (2 -10): ";
    int size;
    cin >> size;

    //Ensure the input does not go out of bounds
    while (size > 10 || size < 2) {
        cout << "Invalid input, please enter a number between 2-10: ";
        cin >> size;
    }

    // Create a vector of integers with 'size' elements
    vector<int> myVector(size);

    for (int i = 0; i < size; i++) {
        cout << "Student " << i + 1 << ": ";
        double score;
        cin >> score;

       while (score > 100 || score < 0) {
            cout << "Invalid score, please enter a number between 0 - 100.\nStudent " << i+1 << ": ";
            cin >> score;
       }

        myVector[i] = score;
    }

    double total = 0;
    for (int i = 0; i < size; i++) {
        total = total + myVector[i];
    }

    double average = total / size;

    cout << "Average Score: " << setprecision(5) << average << endl;

    return 0;
}
