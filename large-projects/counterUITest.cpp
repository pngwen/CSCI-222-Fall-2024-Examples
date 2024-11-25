#include <iostream>
#include "counterUI.h"

int main() {
    Counter counter("Test Counter");
    CounterUI ui{&counter};

    ui.execute();

    return 0;
}