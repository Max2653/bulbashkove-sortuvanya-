#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;

    
    std::vector<int> arr(n);

    
    srand(static_cast<unsigned int>(time(0)));

   
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100 + 1;
        std::cout << arr[i] << " "; 
    }

    std::cout << "\n";

    
    std::sort(arr.begin(), arr.end());

    
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " "; 
    }

    return 0;
}