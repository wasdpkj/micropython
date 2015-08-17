/*
 * This file is part of the Micro Python project, http://micropython.org/
 *
 * The MIT License (MIT)
 *
 * Copyright (c) 2015 Damien P. George
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */
#ifndef __MICROPY_INCLUDED_MICROBIT_MODMICROBIT_H__
#define __MICROPY_INCLUDED_MICROBIT_MODMICROBIT_H__

#include "py/objtuple.h"

extern const struct _microbit_display_obj_t microbit_display_obj;
extern const struct _microbit_button_obj_t microbit_button_a_obj;
extern const struct _microbit_button_obj_t microbit_button_b_obj;
extern const struct _microbit_accelerometer_obj_t microbit_accelerometer_obj;
extern const struct _microbit_compass_obj_t microbit_compass_obj;
extern const mp_obj_module_t microbit_module;

#endif // __MICROPY_INCLUDED_MICROBIT_MODMICROBIT_H__