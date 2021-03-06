/*
 * startup.c
 *
 * Created: 26.02.2021
 * Author: Nicolas-Klatzer
 * Description: Main Interface and display for the Startup
 */ 

#include "interface/print.h"
#include "asm/cpuid.h"

/// Prints a small sign saying KudOS
void print_start_symbol() {
  char *display_name[7] = {
    "   ___   _  __   __  ______   _______   _______  \n",
    "  |   | | ||  | |  ||      | |       | |       | \n",
    "  |   |_| ||  | |  ||  _    ||   _   | |  _____| \n",
    "  |      _||  |_|  || | |   ||  | |  | | |_____  \n",
    "  |     |_ |       || |_|   ||  |_|  | |_____  | \n",
    "  |    _  ||       ||       ||       |  _____| | \n",
    "  |___| |_||_______||______| |_______| |_______| \n",
  };

  print_new_lines(7);
  print_chars('*', NUM_COLS);

  for (uint8_t i = 0; i < 7; i++)
  {
    print_spaces(15);
    print(display_name[i]);
  }
  print_chars('*', NUM_COLS);
}

/// Fetches the basic hardware info about the system and displays it
void show_startup_hardware_info()
{
  clear_screen();
  newline();
  print_line("HARDWARE INFO:");

  char string[13] = "";
  get_vendor_id(string);
  print("Vendor-ID: ");
  print(string);
}