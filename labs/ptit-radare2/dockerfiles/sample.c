#include <stdio.h>
#include <string.h>
#include <ctype.h>

void secret_function(char *input)
{
    int count[256] = {0};

    for (int i = 0; i < strlen(input); i++)
    {
        if (isalpha(input[i]) || isdigit(input[i]))
        {
            count[(unsigned char)input[i]]++;
        }
    }
    for (int i = 0; i < 256; i++)
    {
        if (count[i] > 0)
        {
            printf("%c\t%d\n", i, count[i]);
        }
    }
}

int main(int argc, char *argv[])
{
    char new_str[1000] = "";

    if (argc > 1){
        strcpy(new_str, argv[1]); 
    }
    else
    {
        printf("Nhap chuoi: ");
        fgets(new_str, sizeof(new_str), stdin); 
    	new_str[strcspn(new_str, "\n")] = '\0';
    }
	char char1 = chr1;
    char char2 = chr2;
    char char3 = chr3;
    char char4 = chr4;

    char newString[1000]; 
    newString[0] = char1;
    newString[1] = char2;
    newString[2] = '\0';
    strcat(newString, new_str);
    char endString[1000]; 
    endString[0] = char3;
    endString[1] = char4;
    endString[2] = '\0';
    strcat(newString, endString);
    printf("Chuoi moi: %s\n", newString);
    secret_function(newString);
    return 0;
}
