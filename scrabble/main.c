#include <stdio.h>

int main()
{

    char word[50];
    int i,j,k=0;
    
    printf("Enter your word: ");
    scanf("%s",&word);

    for(i=0;i<strlen(word);i++)
    {
        word[i]=toupper(word[i]);
    }

    for(j=0;j<strlen(word);j++)
    {
        switch(word[j])
        {
            case 'A':
            k = k+1;
            break;
            case 'E':
            k = k+1;
            break;
            case 'I':
            k = k+1;
            break;
            case 'L':
            k = k+1;
            break;
            case 'N':
            k = k+1;
            break;
            case 'O':
            k = k+1;
            break;
            case 'R':
            k = k+1;
            break;
            case 'S':
            k = k+1;
            break;
            case 'T':
            k = k+1;
            break;
            case 'U':
            k = k+1;
            break;
            case 'D':
            k = k+2;
            break;
            case 'G':
            k = k+2;
            break;
            case 'B':
            k = k+3;
            break;
            case 'C':
            k = k+3;
            break;
            case 'M':
            k = k+3;
            break;
            case 'P':
            k = k+3;
            break;
            case 'F':
            k = k+4;
            break;
            case 'H':
            k = k+4;
            break;
            case 'V':
            k = k+4;
            break;
            case 'W':
            k = k+4;
            break;
            case 'Y':
            k = k+4;
            break;
            case 'K':
            k = k+5;
            break;
            case 'J':
            k = k+8;
            break;
            case 'X':
            k = k+8;
            break;
            case 'Q':
            k = k+10;
            break;
            case 'Z':
            k = k+10;
            break;
        }
    }
    
    
    printf("  Scrabble value: %d",k);
    
    printf("\n\n");
    
    main();
}
