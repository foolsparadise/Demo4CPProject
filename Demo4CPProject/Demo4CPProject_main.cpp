//
//  
//  Demo4CPProject
//
//  Created by foolsparadise on 2018/7/17.
//  Copyright © 2018 github.com/foolsparadise All rights reserved.
//

#include "Demo4CPProject_main.h"


int main(int argc , char** argv)
{

    if(argc!=3) {
        Global_Print("Usage: Demo4CPProject argv1 argv2\n"\
        "Like this: ./Demo4CPProject 100 200\n");
        return 1;
    }  

    Global_Print("%s %s", argv[1], argv[2]);
    Global_Print("%d", global_bianliang);

    global_bianliang=atoi(argv[2]);

    Global_Print("%d", global_bianliang);

    //run server
	ServerLoop();
	
    return 0;
}
