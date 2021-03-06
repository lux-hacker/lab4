#ifndef LAB4_LOG_H
#define LAB4_LOG_H

#include "string.h"
#include "stdlib.h"
#include "stdio.h"

typedef enum ImportanceLevel{
    DEBUG = 0,
    INFO = 1,
    WARN = 2,
    ERROR = 3,
    FATAL = 4
} ImportanceLevel;

typedef struct Log{
    int ID;
    ImportanceLevel level;
    char* text;
} Log;

void copyLog(Log*, const Log*);
char* logToString(const Log*);
char* levelToString(ImportanceLevel);
Log* stringToLog(char*, Log*);
ImportanceLevel stringToLevel(char*);

int compID(const Log*, const Log*);
int compLevel(const Log*, const Log*);
int compText(const Log*, const Log*);

int(*getComp(int))(const Log*, const Log*);

#endif
