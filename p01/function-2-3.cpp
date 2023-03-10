#include <iostream>

void two_five_nine(int arr[], int n) {
    int count[3] = {0}; // initialize all elements to 0
    for (int i = 0; i < n; i++) {
        switch (arr[i]) {
            case 2:
                count[0]++;
                break;
            case 5:
                count[1]++;
                break;
            case 9:
                count[2]++;
                break;
        }
    }
    std::cout << "2:" << count[0] << ";5:" << count[1] << ";9:" << count[2] << ";\n";
}
