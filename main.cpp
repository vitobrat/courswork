#include <iostream>
#include "main1.cpp"
#include "main2.cpp"
#include "main3.cpp"
#include "main4.cpp"


int main() {
    cout << "Which number of lab do you want to see?:";
    int numberLab = checkInput();
    cin.sync();
    switch (numberLab) {
        case 1:
            main1();
            break;
        case 2:
            main2();
            break;
        case 3:
            main3();
            break;
        case 4:
            main4();
            break;
    }
    main();
    return 0;
}
