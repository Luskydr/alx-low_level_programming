#ifndef MAIN_H
#define MAIN_H

int convert_binary_to_decimal(const char *binary_string);
void print_binary_representation(unsigned long int number);
int get_nth_bit(unsigned long int number, unsigned int index);
int set_nth_bit(unsigned long int *number, unsigned int index);
int clear_nth_bit(unsigned long int *number, unsigned int index);
unsigned int calculate_flipped_bits_count(unsigned long int number1,unsigned long int number2);
int convert_string_to_integer(const char *string);
int write_character(char character);
int determine_endianness(void);

#endif

