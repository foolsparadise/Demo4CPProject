//
//  
//  Demo4CPProject
//
//  Created by foolsparadise on 2018/7/17.
//  Copyright © 2018 github.com/foolsparadise All rights reserved.
//

#include "Demo.h"

int ServerLoop(void)
{
	for(;;)
	{
		//do something
		Global_Print("%d", global_bianliang);
		sleep(1);
	}
	return 0;
}
