/*
 * startup.h
 *
 * Created: 26.02.2021
 * Author: Nicolas-Klatzer
 * Description: Main Interface and display for the Startup
 */ 
#pragma once

#include "types.h"

#ifndef STARTUP_H_
#define STARTUP_H_

#if __cplusplus
extern "C" {
#endif

void print_start_symbol();
void show_startup_hardware_info();

#if __cplusplus
}
#endif

#endif
