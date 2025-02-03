#include <vector>
using namespace std;
void insertionSort(vector<int>& nums) {
    int n = nums.size();
    for (int i = 1; i < n; i++) {
        int key = nums[i];  // Current element to be placed correctly
        int j = i - 1;

        // Move elements greater than key one position ahead
        while (j >= 0 && nums[j] > key) {
            nums[j + 1] = nums[j];
            j--;
        }
        nums[j + 1] = key;  // Insert key at the correct position
    }
}