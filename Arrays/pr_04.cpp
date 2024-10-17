#include <iostream>
using namespace std;

void InputArray(int num[], int size){
    for(int i=0;i<size;i++){
        cout<<"Enter the number"<<endl;
        cin>>num[i];
    }
}

int maxNum(int num[], int size){
    int largest;
     largest = num[0];

    for (int i = 1; i <size; i++)
    {
        if (num[i] > largest)
        {
            largest = num[i];
        }
    }
    return largest;
}

int minNum(int num[],int size){
    int smallest;
     smallest = num[0];
    for (int i = 1; i <size; i++)
    {
        if (num[i] < smallest)
        {
            smallest = num[i];
        }
    }
    return smallest;
}

float averageNum(int num[],int size){
    int sum = 0;
     for (int i = 0; i < 10; i++)
    {
        sum += num[i];
    }
    float average = static_cast<float>(sum) /size;
    return average;
}

int main(){
    int size = 10;
    int numbers[size];

    InputArray(numbers,size);
    int max = maxNum(numbers,size);
    cout<<"The largest number is: "<<max<<endl;
    int min = (numbers,size);
    cout<<"The smallest number is: "<<min<<endl;
   float average = averageNum(numbers,size);
    cout<<"The average number is: "<<average<<endl;
 
    return 0;
}