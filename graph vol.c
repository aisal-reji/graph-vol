#include <stdio.h>

int maxVolumeWithTwoBars(int bar_heights[], int n) {
    int max_volume = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int distance = j - i;
            int volume = (bar_heights[i] < bar_heights[j] ? bar_heights[i] : bar_heights[j]) * distance;
            if (volume > max_volume) {
                max_volume = volume;
            }
        }
    }

    return max_volume;
}
int main() {
    int bar_heights[] = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int n = sizeof(bar_heights) / sizeof(bar_heights[0]);

    int result = maxVolumeWithTwoBars(bar_heights, n);
    printf("Maximum volume with two bars: %d\n", result);

    return 0;
}