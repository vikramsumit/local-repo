// Write a program to take input & print address of 5 persons

#include<stdio.h>
struct address{
    int houseNo;
    int block;
    char city[100];
    char district[100];
    char state[100];
};

void printAdd(struct address add);

int main(){
    struct address adds[5];

    printf("Enter info of first person1: ");
    scanf("%d", &adds[0].houseNo);
    scanf("%d", &adds[0].block);
    scanf("%s", adds[0].city);
    scanf("%s", adds[0].district);
    scanf("%s", adds[0].state);

    printf("Enter info of first person2: ");
    scanf("%d", &adds[1].houseNo);
    scanf("%d", &adds[1].block);
    scanf("%s", adds[1].city);
    scanf("%s", adds[1].district);
    scanf("%s", adds[1].state);

    printf("Enter info of first person3: ");
    scanf("%d", &adds[2].houseNo);
    scanf("%d", &adds[2].block);
    scanf("%s", adds[2].city);
    scanf("%s", adds[2].district);
    scanf("%s", adds[2].state);

    printf("Enter info of first person4: ");
    scanf("%d", &adds[3].houseNo);
    scanf("%d", &adds[3].block);
    scanf("%s", adds[3].city);
    scanf("%s", adds[3].district);
    scanf("%s", adds[3].state);

    printf("Enter info of first person5: ");
    scanf("%d", &adds[4].houseNo);
    scanf("%d", &adds[4].block);
    scanf("%s", adds[4].city);
    scanf("%s", adds[4].district);
    scanf("%s", adds[4].state);

    printAdd(adds[0]);
    printAdd(adds[1]);
    printAdd(adds[2]);
    printAdd(adds[3]);
    printAdd(adds[4]);

    return 0;
}

void printAdd(struct address add){
    printf("address is : %d, %d, %s, %s, %s\n", add.houseNo, add.block,add.city, add.district, add.state);
}

