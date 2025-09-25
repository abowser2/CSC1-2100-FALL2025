#include <iostream>
using namespace std;
// axb = image
// cxd = paper
int calculateMaxPercentage(int A, int B, int C, int D) {
    if ((A <= C && B <= D) || (B <= C && A <= D))
    {
        return 100; // Image fits without scaling
    }
    // TODO: Calculate the maximum percentage for both orientations
    double scaling_factor_og = min((double)C/A, (double)D/B);
    double scaling_factor_rot = min((double)C/B, (double)D/A);
    // Compute percentage for original orientation
    int percentage_og = (int)(scaling_factor_og * 100);
    // Compute percentage for rotated orientation
    int percentage_rot = (int)(scaling_factor_rot * 100);
    // Return the maximum of the two
    return max(percentage_og, percentage_rot);
    // If you have a better idea than the above steps, feel free to do it anyway.
}

int main() {
    int A, B, C, D, line_num(1);

    while (line_num < 1000) {
        // Input four integers
        cin >> A >> B >> C >> D;
        
        // Check for the terminating condition
        if (A == 0 && B == 0 && C == 0 && D == 0) {
            break;
        }

        // Calculate and display the maximum percentage
        int percentage = calculateMaxPercentage(A, B, C, D);
        cout << percentage << "%" << endl;
        line_num++;
    }

    return 0;
}