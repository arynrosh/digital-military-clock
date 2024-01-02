/*DIGITAL MILITARY CLOCK BY ARYAN ROSHAN*/


#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
    {
        
        int hour, min, sec;
    
    // Welcome screen!
    printf("Welcome to the digital clock by Aryan Roshan! \n");
    
    // Set up screen
    printf("Set the time for hours:");
    scanf("%d", &hour);
    
    //Checks if hours exceeds 24 hours
    if (hour < 0 || hour > 23) {
        printf("Error: Not Possible! \n");
        return 0;
    }

    printf("Set the time for minutes:");
    scanf("%d", &min);

    // Checks if minutes exceeds 60 minutes
    if (min < 0 || min > 59) {
        printf("Error: Not Possible! \n");
        return 0;
        
    }
    
    printf("Set the time for seconds:");
    scanf("%d", &sec);


    // Checks if seconds exceeds 60 seconds
        if (sec < 0 || sec > 59) {
        printf("Error: Not Possible! \n");
        return 0;
        
    }
    
    while(1){ // Conditions when the second, minute or hour exceeds their maximum limit.
        sec++;
        if (sec > 59){
            min++;
            sec = 0;
        }
        if (min > 59){
            hour++;
            min = 0;
        }
        if (hour > 23){
            hour = 0;
        }
        
         // Provided all conditions are met, the clock is set up and ready to use! 
        printf("\rClock: %02d:%02d:%02d", hour, min, sec);
        fflush(stdout);
        
        if(hour == 0 && min == 0 && sec == 0){
            printf("\rHappy New Year!");
            fflush(stdout);
        }
        
        // Wait for 1 second, allows for better presentation.
        sleep(1);
    }
    
    
        
    return 0;
}

