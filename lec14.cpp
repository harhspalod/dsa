#include <iostream>
#include <vector>
#include <utility> // Required for std::pair
using namespace std;
std::pair<long, long> find_indexes(std::vector<long long> v, long long x) {
    long long mid, start = 0, end = v.size() - 1;
    long long leftmost = -1, rightmost = -1;

   
    while (start <= end) {
        mid = start + (end - start) / 2;
        
        if (v[mid] == x) {
            leftmost = mid;
            end = mid - 1;
        } else if (v[mid] > x) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }

    start = 0;
    end = v.size() - 1;

    
    while (start <= end) {
        mid = start + (end - start) / 2;

        if (v[mid] == x) {
            rightmost = mid;
            start = mid + 1;
        } else if (v[mid] > x) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }

    
    return {leftmost, rightmost};
}