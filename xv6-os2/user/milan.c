//
// Created by os on 2/6/22.
//
#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"
int main(int argc, char* argv[]){
    if(argc<2){
        printf("Neispravan broj argumenata...\n");
        exit(0);
    }

   if(strcmp(argv[1],"CFS")==0){
       if( sel_alg_of_sched(1,1,1)<0){
            printf("Nepravilno zadat argument/greska u sp...\n");
            exit(0);
       }
    }else{
        if(sel_alg_of_sched(0, atoi(argv[2]),atoi(argv[3]))<0) {
            printf("Nepravilno zadat argument/greska u sp...\n");
            exit(0);
        }
    }
    exit(1);
}
