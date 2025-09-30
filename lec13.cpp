class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start = 0, end = nums.size() - 1;
        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (nums[mid] == target) {
                return mid; 
            } 
            else if (nums[mid] < target) {
                start = mid + 1; 
            } 
            else {
                end = mid - 1;
            }
        }
        return -1; 
    }
};


#include <iostream>
#include <vector>
#include <utility> // Required for std::pair

// The function to find the first and last occurrences of an element
std::pair<long, long> find_indexes(std::vector<long long> v, long long x) {
    long long mid, start = 0, end = v.size() - 1;
    long long leftmost = -1, rightmost = -1;

    // --- First Binary Search: Find the leftmost index ---
    // This loop will find an occurrence of 'x', and then keep
    // searching in the left half to find the very first one.
    while (start <= end) {
        // Using this formula for mid prevents potential integer overflow
        mid = start + (end - start) / 2;
        
        if (v[mid] == x) {
            leftmost = mid;
            end = mid - 1; // Keep searching in the left half
        } else if (v[mid] > x) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }

    // --- Reset start and end for the second search ---
    start = 0;
    end = v.size() - 1;

    // --- Second Binary Search: Find the rightmost index ---
    // This loop will find an occurrence of 'x', and then keep
    // searching in the right half to find the very last one.
    while (start <= end) {
        mid = start + (end - start) / 2;

        if (v[mid] == x) {
            rightmost = mid;
            start = mid + 1; // Keep searching in the right half
        } else if (v[mid] > x) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }

    // Return the pair of found indices
    return {leftmost, rightmost};
}

int main() {
    // --- Hardcoded Data ---
    std::vector<long long> v = {1, 3, 5, 5, 5, 5, 67, 123, 125};
    long long x = 5; // The number we are searching for

    // --- Function Call ---
    std::pair<long, long> result = find_indexes(v, x);

    // --- Print the result ---
    std::cout << "Array: ";
    for (long long num : v) {
        std::cout << num << " ";
    }
    std::cout << "\nSearching for: " << x << std::endl;
    std::cout << "First occurrence index: " << result.first << std::endl;
    std::cout << "Last occurrence index: " << result.second << std::endl;
    
    // --- Example for a number not in the array ---
    std::cout << "\n-------------------------------------\n";
    x = 25;
    result = find_indexes(v, x);
    std::cout << "Searching for: " << x << std::endl;
    std::cout << "First occurrence index: " << result.first << std::endl;
    std::cout << "Last occurrence index: " << result.second << std::endl;

    return 0;
}
