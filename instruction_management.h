// instruction_management.h
#ifndef INSTRUCTION_MANAGEMENT_H
  #define INSTRUCTION_MANAGEMENT_H
  #include "record_management.h"

  typedef enum {
    ONE_BYTE_INSTRUCTION, ADDR_11, DIRECT, IMMEDIATE,
    OFFSET, BIT, NOT_BIT, ADDR_16, IMMEDIATE_16, BIT_OFFSET,
    DIRECT_IMMEDIATE, DIRECT_DIRECT, IMMEDIATE_OFFSET, DIRECT_OFFSET
  } instruction_type;

  instruction_type instruction_types[256];
  unsigned char instruction_size(unsigned char);
  extern record *extract_instructions(char *);
#endif