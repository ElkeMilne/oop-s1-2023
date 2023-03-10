#include <iostream>

void count_digits(int array[4][4]){
    int zeros = 0;
    int ones = 0;
    int twos = 0;
    int threes = 0;
    int fours = 0;
    int fives = 0;
    int sixs = 0;
    int sevens = 0;
    int eights = 0;
    int nines = 0;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++){
            if (array[i][j] == 0){
                zeros++;
            }
            if (array[i][j] == 1){
                ones++;
            }
            if (array[i][j] == 2){
                twos++;
            }
            if (array[i][j] == 3){
                threes++;
            }
            if (array[i][j] == 4){
                fours++;
            }
            if (array[i][j] == 5){
                fives++;
            }
            if (array[i][j] == 6){
                sixs++;
            }
            if (array[i][j] == 7){
                sevens++;
            }
            if (array[i][j] == 8){
                eights++;
            }
            if (array[i][j] == 9){
                nines++;
        }
        }

}
std::cout << "0:" << zeros << ";1:" << ones << ";2:" << twos << ";3:" << threes << ";4:" << fours << ";5:" << fives << ";6:" << sixs << ";7:" << sevens << ";8:" << eights << ";9:" << nines << ";" << std::endl;
}