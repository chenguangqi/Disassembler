// record_management.h
#ifndef RECORD_MANAGEMENT_H
  #define RECORD_MANAGEMENT_H
  #include "memory_management.h"

  typedef struct Record {
    struct Record *next;
    unsigned short int size, address;
    unsigned char *bytecode;
  } record;

  record *create_record(unsigned short int, unsigned short int, unsigned char *, record *);
  record *destroy_record(record *);
  record *record_reverse(record *);
  record *record_for_each(record *(*)(record *), record *);
#endif
