#include <iostream>
#include <algorithm>
#include <vector>

int calculate_min_moves(std::vector<int>& seats, std::vector<int>& students) {
    sort(seats.begin(), seats.end());
    sort(students.begin(), students.end());
    
    int shift = 0;
    for(int i = 0 ; i < seats.size(); i++){
        shift += abs(seats[i] - students[i]);
    }
    return shift;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> seats(n);
    std::vector<int> students(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> seats[i];
    }
    for (int i = 0; i < n; ++i) {
        std::cin >> students[i];
    }
    int result = calculate_min_moves(seats, students);
    std::cout << result << std::endl;
    return 0;
}
