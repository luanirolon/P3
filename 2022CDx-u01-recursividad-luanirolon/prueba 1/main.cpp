//
// Created by Luani on 20/9/2023.
//
#include <iostream>

using namespace std;

void invertir(int num){
// condicion base
    if(num == 0){
        return;
    }
// recursion
    cout<<num % 10;
    invertir(num/10);
}
/*
 * invertir(31502)
 * 31502 % 10 => cout<<2
 * 31502 / 10 =>  3150 => invertir(3150)
 *                        3150 % 10 => cout<<0
 *                        3150 / 10 => 315 => invertir(315)
 *                                            315 % 10 => cout<<5
 *                                            315 / 10 => 31 => invertir(31)
 *                                                              31 % 10 => cout<<1
 *                                                              31 / 10 => 3 => invertir(3)
 *                                                                              3 % 10 => cout<<3
 *                                                                              3 / 10 => 0 => invertir(0)
 *                                                                                             0 == 0 => return
 */


//int main(){
//    int num;
//    cout<<"Ingrese el numero a invertir: ";
//    cin>>num;
//    cout<<num<<endl;
//    invertir(num);
//    return 0;
// }

int suma_par(int *arr, int pos){
// condicion base
    if(pos < 0){
        return 0;
    }
    // recursividad
    if(pos % 2 == 0){
        return arr[pos] + suma_par(arr, pos - 2);
    }
    return suma_par(arr, pos-1);
}
//      pos: 0  1  2  3  4
/* arr[5] = {8, 2, 4, 4, 2}
 * suma_par(arr, 4) => 14               12
 * 4 % 2 == 0 => true => arr[4] + suma_par(arr, 4-2)                       8
 *                         2        2 % 2 == 0 => true => arr[2] + suma_par(arr, 2-2)               0
 *                                                          4      0 % 2 == 0 => true => arr[0] + suma_par(arr, 0 - 2)
 *                                                                                         8      -2 < 0 => true => 0
 */

int main(){
    int arr[5] = {8, 2, 4, 4, 2};
    cout<<suma_par(arr, 4);
    return 0;
}

