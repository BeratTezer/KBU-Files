// Predict the output of following C programs

#include <stdio.h>

enum State {WORKING = 0, FAILED, FREEZED};
enum State currState = 2;

enum State FindState() {
    return currState;
}

int main() {
    (FindState() == WORKING)? printf("WORKING"): printf("Not WORKING");
    return 0;
}