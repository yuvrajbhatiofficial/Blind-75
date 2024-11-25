#include <iostream>
using namespace std;

bool duplicateContain(int n[], int size){
    for (int i=0 ; i <size ; i++){
        for (int j = 0 ; j<i; j++){
            if(n[j] == n[i]){
                return true;
            }
        }
    }
    return false;
}







int main(){
int n[4] = {1,2,3,4};
if (duplicateContain(n , 4)){
    cout<<"duplicate found"<<endl;
}
else{
    cout<<"not found"<<endl;
}

    return 0;
}
