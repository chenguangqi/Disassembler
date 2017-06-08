// record_management.h
 
#ifndef RECORD_MANAGEMENT_H
  #define RECORD_MANAGEMENT_H
  #include "file_management.h"
  #include "text_management.h"
 
  typedef enum {DATA, END} mode;
 
  typedef struct Record {
    unsigned short int size, address;
    unsigned char *bytecode, checksum;
    mode mode;
    struct Record *record;
  } record;
 
  record *create_record(unsigned short int, unsigned short int, mode, unsigned char *, unsigned char, record *);
  record *destroy_record(record *);
  record *copy_record_from_offset(record *, unsigned short int, unsigned short int, record *);
  record *reverse_records(record *);
  record *align_instructions(record *);
  extern record *hex_file_to_records(char *);
  extern record *print_record(record *);
#endif
