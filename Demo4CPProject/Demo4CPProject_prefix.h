//
//  
//  Demo4CPProject
//
//  Created by foolsparadise on 2018/7/17.
//  Copyright © 2018 github.com/foolsparadise All rights reserved.
//

#ifndef Demo4CPProject_prefix_h
#define Demo4CPProject_prefix_h

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/socket.h>  
#include <netinet/in.h>  
#include <pthread.h>
#include <arpa/inet.h>  
#include <netdb.h> 
#include <stdarg.h>
#include <signal.h>
#include <dirent.h>
#include <net/if.h>
#include <pthread.h>
#include <sys/ioctl.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/socket.h>
#include <netinet/in.h>  
#include <arpa/inet.h>  
#include <netdb.h>  
#include <pthread.h>
#include <time.h>
#include <sys/time.h>
#include <unistd.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/stat.h>

#define LOGFILE "/dev/console"
#define Global_Print(fmt, arg...)    do {    FILE *log_fp = fopen(LOGFILE, "w+"); \
                        fprintf(log_fp, "%s:%s:%d:" fmt "\n", __FILE__, __func__, __LINE__, ##arg); \
                        printf("[%s:%d]" fmt"\n", __FILE__, __LINE__, ##arg);\
                        fclose(log_fp); \
                    } while(0)


//全局变量,extern后可调用
extern int global_bianliang; 


#endif /* Demo4CPProject_prefix_h */
