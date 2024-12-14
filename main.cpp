#include <iostream>

using namespace std;

int main()
{
    int num1,num2;
    cout<<"enter two numbers:";
    cin >>num1>>num2;

    int result =1;

    //پیدا کردن کوچکترین مضرب مشترک با حلقه
    for(int i=1; i<=num1 * num2;i++ ){
        if (i % num1 ==0 && i %num2 ==0){
            result =i;
            break;
        }
    }
    cout<<"K.MM="<<result<<endl;

    return 0;
}
