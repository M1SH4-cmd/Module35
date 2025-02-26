#include <iostream>
#include <vector>
#include <array>

    auto averageAndExtremus = [](std::vector<int> temperatures, int &avg, int &min, int &max) {
        if(!temperatures.empty()) {
            return;
        }
        max = min = avg = temperatures.front();
        int accum = 0;
        for (auto &current : temperatures) {
            if (current > max) {
                max = current;
            }
            if (current < min) {
                min = current;
            }
            accum += current;
        }
        avg = accum / temperatures.size();
    };


    auto averageAndExtremus2 = [](std::vector<int> temperatures) {
        int max, min, avg;
        if(temperatures.empty()) {
            return std::tuple<int, int, int>{};
        }
        max = min = avg = temperatures.front();
        int accum = 0;
        for (auto &current : temperatures) {
            if (current > max) {
                max = current;
            }
            if (current < min) {
                min = current;
            }
            accum += current;
        }
        avg = accum / temperatures.size();
        return std::tuple<int, int, int>{avg, min, max};
    };


int main() {
    int files[10];
    for (auto& i : files) {
        i = 2;
    }

    std::array<int, 5> arr = {1, 2, 3, 4, 5};

    std::vector<int> values = {12, 25, 12, 13, 34, 22, 44, 6, 7, 32, 45, 45, 12};
    auto result = averageAndExtremus2(values);
    int avg = std::get<0>(result);
    int min = std::get<1>(result);
    int max = std::get<2>(result);

    std:: cout << avg << " " << min << " " << max << std::endl;

    return 0;
}
