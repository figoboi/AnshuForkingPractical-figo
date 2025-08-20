//bit destuffing
#include<stdio.h>
#include<string.h>

int main()
{
    char bit[50];
    char destuff[50];
    int i=0;
    int j=0;
    int count=0;

    printf("Enter the sequence to be destuffed : ");
    scanf("%s",bit);

    destuff[j++]='0';
    destuff[j++]='1';
    destuff[j++]='1';
    destuff[j++]='1';
    destuff[j++]='1';
    destuff[j++]='1';
    destuff[j++]='1';
    destuff[j++]='0';
    //Praveshforking

    for(i=0;i<strlen(bit);i++)
    {
        if(bit[i]=='0')
        {
            count=0;
        }
        else if(bit[i]=='1')
        {
            count++;
        }
    destuff[j]=bit[i];
    j++;

    if(count== 5)
    {
        count=0;
        i++;
    }
    }
    destuff[j++]='0';
    destuff[j++]='1';
    destuff[j++]='1';
    destuff[j++]='1';
    destuff[j++]='1';
    destuff[j++]='1';
    destuff[j++]='1';
    destuff[j++]='0';

    destuff[j]='\0';

    printf("The sequence after destuffing is: ");
    printf("%s",destuff);

    return 0;
}
