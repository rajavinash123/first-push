#include <stdio.h>
#include <stdlib.h>

// Define a structure for the hash map
typedef struct {
    int key;
    int value;
} HashMap;

// Function to find the two sum
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    HashMap* map = (HashMap*)malloc(numsSize * sizeof(HashMap));
    int mapSize = 0;

    for (int i = 0; i < numsSize; i++) {
        int complement = target - nums[i];
        for (int j = 0; j < mapSize; j++) {
            if (map[j].key == complement) {
                int* result = (int*)malloc(2 * sizeof(int));
                result[0] = map[j].value;
                result[1] = i;
                *returnSize = 2;
                free(map);
                return result;
            }
        }
        map[mapSize].key = nums[i];
        map[mapSize].value = i;
        mapSize++;
    }

    *returnSize = 0;
    free(map);
    return NULL;
}

int main() {
    int nums[] = {2, 7, 11, 15};
    int target = 9;
    int returnSize;
    int* result = twoSum(nums, 4, target, &returnSize);

    if (result != NULL) {
        printf("Indices: [%d, %d]\n", result[0], result[1]);
        free(result);
    } else {
        printf("No solution found.\n");
    }

    return 0;
}
