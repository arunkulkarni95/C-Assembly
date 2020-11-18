//wclist.h file 
//hw9
#ifndef __WCList
#define __WCList

#define MAX_RECORDS 10
#define MAX_DSIZE   10 

struct CListRecord
{
	int valid; 
	int taskid; 
	int state; 
	char *dptr; 
	char token; 
	char dummy;
	short recordid; 
};

#endif
