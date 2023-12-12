#include <iostream>
using namespace std;

// eighteenth algo. = 

// void update(int *p) {
//     *p = (*p) * 2;
// }


// nineteenth algo . =

// void fun(int arr[]) {
//     cout << arr[0] << endl;
// }


// twentieth algo. =

// void square(int *p) {
//     int a = 70;
//     p = &a;
//     *p = (*p) * (*p);
// }

// void increment(int **p) {
//     ++(**p);
// }

int main() {  

    // first algo. =

    // int first = 8;
    // int second = 18;
    // int *ptr = &second;
    // *ptr = 9;
    // cout << first << " " <<  second << endl;





    // second algo. =

    // int first = 6;
    // int *p = &first;
    // int *q = p;
    // (*q)++;
    // cout << first << endl;






    // third algo. =

    // int first = 8;
    // int *ptr = &first;
    // cout << (*ptr)++ << " ";
    // cout << first << endl;






    // fourth algo. =

    // int *ptr = 0;
    // int first = 110;
    // *ptr = first;           // for ptr = &first , it will run, otherwise not
    // cout << *ptr << endl;






    // fifth algo. =
    // int first = 8;
    // int second = 11;
    // int *third = &second;
    // first = *third;
    // *third = *third + 2;
    // cout << first << " " << second << endl;






    // sixth algo. =
    // float f = 12.5;
    // float p = 21.5;
    // float *ptr = &f;
    // (*ptr)++;
    // *ptr = p;
    // cout << *ptr << " " << f << " " << p << endl;







    // seventh algo. =

    // int arr[5];
    // int *ptr;
    // cout << sizeof(arr) << " " << sizeof(ptr) << endl;







    // eighth algo. =

    // int arr[] = {11, 21, 13, 14};
    // cout << *(arr) << " " << *(arr + 1) << endl;









    // ninth algo. =

    // int arr[6] = {11, 12, 31};
    // cout << arr << " " << &arr << endl; 









    // tenth algo. =

    // int arr[6] = {11, 12, 31};
    // cout << (arr + 1) << endl;








    // eleventh algo. =

    // int arr[6] = {11, 12, 31};
    // int *p = arr;
    // cout << p[2] << endl;        // *(p + 2)









    // twelft algo. =

    // int arr[] = {11, 12, 13, 14, 15};
    // cout << *(arr) << " " << *(arr + 3) << endl;








    // thirteenth algo. =

    // int arr[] = {11, 21, 31, 41};
    // int *ptr = arr++;   // changing value should be modifiable.    // arr = arr + 1; (wrong)
    //                     // symbol table cannot be changed.
    // cout << *ptr << endl; 







    
    // fourteenth algo.

    // char ch = 'a';
    // char *ptr = &ch;
    // ch++;
    // cout << *ptr << endl; 








    // fifteenth algo. = 

    // char arr[] = "abcde";
    // char *p = &arr[0];
    // cout << p << endl;      // Address won't be printed over here.







    // sixteenth algo. = 

    // char arr[] = "abcde";
    // char *p = &arr[0];
    // p++;
    // cout << p << endl;









    // seventeenth algo. = 

    // char str[] = "khushi";
    // char *p = str;
    // cout << str[0] << " " << p[0] << endl;








    // eighteenth algo. =

    // int i = 10;
    // update(&i);
    // cout << i << endl;








    // nineteenth algo. =

    // int arr[] = {11, 12, 13, 14};
    // fun(arr + 1);
    // cout << arr[0] << endl;








    // twentieth algo. =

    // int a = 70;
    // square(&a);
    // cout << a << endl;








    // twenty one algo. =

    // int first = 110;
    // int *p = &first;
    // int **q = &p;
    // int second = (**q)++ + 9;
    // cout << first << " " << second << endl;








    // twenty two algo. =
      
    // int first = 100;
    // int *p = &first;
    // int **q = &p;
    // int second = ++(**q);
    // int *r = *q;
    // ++(*r);
    // cout << first << " " << second << endl;









    // twenty three algo. =

    // int num = 110;
    // int *ptr = &num;
    // increment(&ptr);
    // cout << num << endl;

    return 0;
}