#include <stdio.h>

int main(){
    //file you want to copy
    FILE * file = fopen("origin.txt", "r");
    //new file name to be copied to
    FILE * target = fopen("newOrigin.txt", "w");

    if(file != NULL){
        //move cursor to end of file
        fseek(file, 0L, SEEK_END);
        //store the size
        long size = ftell(file);
        //move back cursor to start
        fseek(file, 0L, SEEK_SET);

        //set up enough space for buffer
        char buff[1024 * 1024];
        //size transfer at one time
        size_t s = 0;
        //total size transferred
        size_t all = 0;
        //check if the current read size is bigger than 0
        //if it is bigger than 0, it means there's more content
        //to copy over
        while((s = fread(buff, sizeof(char), 1024*1024, file)) > 0){
            //write the new content saved in buff over to new file
            fwrite(buff, sizeof(char), 1024*1024, target);
            //update total transfered size
            all = all + s;
            //print out progress
            printf("current progress %.1f%% \n", (double) all / (double) size * 100) ;
        }

        fclose(file);
        //fclose(target);
    }
}