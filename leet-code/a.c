#include <stdio.h>
#include<string.h>

int main() {
    int i,count;
    char word[100];
    char comp[200] = {0};
     // Declare a char array to store a string
    printf("Enter a word: ");
    scanf("%s", word);  // Read the input into the array
    int n = strlen(word);  // Get the length of the input word
    int pos = 0;
    count=1;  // Position in the `comp` array for appending
    for(int i=0;i<n;i++){
        
        if(word[i]==word[i+1]){
            count=count+1;
           
        }
        else
        {
            pos += sprintf(&comp[pos], "%d", count);
            pos += sprintf(&comp[pos], "%c", word[i]);
            
            count=1;
        }
        if(count>=9){
            
           pos += sprintf(&comp[pos], "%d", count);
            pos += sprintf(&comp[pos], "%c", word[i]);
            count=1;
        }
    } 
    printf("%s\n", comp); // Print the string
    return 0;
}
