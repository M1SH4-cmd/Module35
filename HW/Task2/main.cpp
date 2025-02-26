#include <iostream>
#include <vector>
#include <unordered_set>
#include <memory>

auto unify = [](std::vector<int> vec1, int num) {
    std::unordered_set<int> buffer;
    int count;
    std::vector<int> newVec;

    for (auto i : vec1) {
        buffer.insert(i);
    }

    for (int i : vec1) {
        if (i == num) {
            count++;
        }
    }

    std::cout << "Number " << num << " found " << count << " times." << std::endl;

    for (auto i : buffer) {
        newVec.push_back(i);
    }

    auto new_vec_ptr = std::make_unique<std::vector<int>>(newVec);
    return new_vec_ptr;
};

int main() {
    std::vector<int> vec = {1, 5, 2, 3, 2, 3, 2, 4, 2, 4, 1, 2, 3, 4, 1, 2, 3, 4, 1, 2};
    int num = 2;
    auto unique_vec = unify(vec, num);

    for (auto &i : *unique_vec) {
        std::cout << i << " ";
    }

    return 0;
}
