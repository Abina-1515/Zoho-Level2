#include <stdio.h>

int main()
{
    char str[100];
    scanf("%s",str);
    int len,row,col,mid,space;
    
    for(len=0;str[len];len++);
    space = len-1;
    for(row=1;row<=len/2+1;row++,space--,printf("\n"))
    {
        for(col=1;col<=space;printf(" "),col++);
        for(col=1,mid=len/2;col<=(len-space);col++)
            printf("%c",str[mid++]);
    }
    
    for(row=1;row<=len/2;row++,space--,printf("\n"))
    {
        for(col=1;col<=space;printf(" "),col++);
        for(mid=len/2;str[mid];mid++)
            printf("%c",str[mid]);
        for(col=1;col<=row;col++)
            printf("%c",str[col-1]);
    }

    return 0;
}
