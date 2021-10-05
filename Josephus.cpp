#include<stdio.h>

void josephus(int total_people,int skip){
    // Function to find the safe number
    int flag = 0,count,pos = 1;
    int exec[total_people];
    // Here an array is used to list out the positions that get executed
    for(count = 0; count < total_people-1; count++){
        exec[count] = pos % total_people;
        pos = pos+skip;
    }
    for(int i = 0; i < total_people ; i++){
        for(count = 0; count< total_people; count++){
            if(exec[count] == i){
                flag = 0;
                break;
            }
            else
            flag = 1;
        }
        if(flag == 1){
            printf("%d is the safe position",i-1);
        }
    }
}

int main(){
    int a,b;
    // Number of people
    a = 10;
    // Number of people skipped after every execution
    b = 3:
    josephus(a,b);
}
