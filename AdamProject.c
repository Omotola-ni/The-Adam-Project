#include <stdio.h>
#include <string.h>





int main(){

    char steps_taken[100][100];
    int steps[100];
    int adam_trials;
    
    /* This is opening a file called Adam.in.txt and writing to it. */
    FILE * inputfile = fopen("/Users/rufus/Desktop/Adam project/adam project/adamproject/Adam.in.txt","w");
    /* This is opening a file called Adam.in.txt and reading from it. */
    FILE *file = fopen("/Users/rufus/Desktop/Adam project/adam project/adam project/Adam.in.txt", "r");
    
    
    
    while(fscanf(file, "%d", &adam_trials) != EOF){
        printf("Adam's numbers of trials: %d", adam_trials);
        printf("\n");
        printf("\n Adam's number of steps, either U or D: \n");
        break;
    }
    
    /* This is checking if the file is empty or not. */
    if (fscanf(file, "%d", &adam_trials) == EOF){
        printf("Adam's number of trials: ");
        scanf("%d", &adam_trials);
        printf("\nAdam's number of steps either U or D: \n");
        for(int i =0; i < adam_trials; i++ ){
            scanf("%s", steps_taken[i]);
            //fprintf(inputfile, "%s", steps[i]);
        }
    }
    //fprintf(inputfile, "%d", trial);
    fclose(inputfile);
    
    for (int i = 0; i< adam_trials; i++) {
        fscanf(file, "%s", steps_taken[i]);
        steps[i] = single_test_case(steps_taken[i]);
    }

    fclose(file);
   
    /* This is a for loop that is used to iterate through the array of strings. */
    for (int i = 0; i < adam_trial; i++)
    {
        printf("%c  %d", capital(steps_taken[i]), steps[i]);
    }
    
    
    printf("\n\n");
    
    
    /* This is a for loop that is used to iterate through the array of strings. */
    for (int i = 0; i< adam_trials; i++) {
        if (step[i] > 0)
        {
            printf("The child took %d steps before falling\n", steps[i]);
        }
        
        else if(step"[i] <= 0){
            printf("The child could not take any step\n");
        }
        
    }
    printf("\n");
}

int single_test_case(char walks[100]){
    int walk = 0;
    
   
    int n = strlen(walks);
  
    for (int i = 0; i < n; i++)
    {
       
        if (walks[i] == 'U' || walks[i] == 'u'){
        
            walk = i + 1;
        }
       
        else if (walks[i] == 'D' || walks[i] == 'd')
        {
            break;
        }
      
        else{
            printf("\nInvaid input\n\n");
            break;
        }
    }
    return walk;
}


