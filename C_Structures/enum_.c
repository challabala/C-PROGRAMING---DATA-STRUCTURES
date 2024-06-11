#include <stdio.h>

// Define an enumeration for days of the week
enum Day {
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};

int main() {
    enum Day today = WEDNESDAY;

    if (today == WEDNESDAY) {
        printf("Today is Wednesday.\n");
    }

    // Print all days of the week
    for (int day = SUNDAY; day <= SATURDAY; day++) {
        printf("Day %d\n", day);
    }

    return 0;
}
/* ::::::::::::: OUTPUT ::::::::::::::::
   Today is Wednesday.
   Day 0
   Day 1
   Day 2
   Day 3
   Day 4
   Day 5
   Day 6
*/
