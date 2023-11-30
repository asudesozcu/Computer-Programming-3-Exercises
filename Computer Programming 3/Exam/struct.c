#include <stdio.h>
struct test{
    int marks_scored;
    int total_marks;
    float percentage;
    char grade;
    // function pointer
    float (*calculate_percentage)(int a,int b);
} ;

float calculate(int a,int b){
     float percentage=((float)a/(float)b)*100;
     return percentage;
}

int main () {
        struct test maths;
        maths.marks_scored=120;
        maths.total_marks=200;
//assigning a function to function pointer
        maths.calculate_percentage = calculate;
//calling the function using function pointer
    maths.percentage=maths.calculate_percentage(maths.marks_scored,maths.total_marks);
        printf ("Percentage is: %f\n", maths.percentage);
        return 0;
}
