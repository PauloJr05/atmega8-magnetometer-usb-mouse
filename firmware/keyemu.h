/* Name: keyemu.h
 *
 * See the .c file for more information
 */

#ifndef __keyemu_h_included__
#define __keyemu_h_included__

#include "common.h"
#include "sensor.h"


// Copies a string from PGM to string_output_buffer and also sets
// string_output_pointer.
#define output_pgm_string(str) do { \
		strcpy_P(string_output_buffer, str); \
		string_output_pointer = string_output_buffer; \
	} while(0)


extern uchar *string_output_pointer;
extern uchar string_output_buffer[80];


// Init does nothing
#define init_keyboard_emulation() do{ }while(0)

void build_report_from_char(uchar c);
uchar send_next_char();

uchar nibble_to_hex(uchar n);
void uchar_to_hex(uchar v, uchar *str);
void int_to_hex(int v, uchar *str);
uchar* int_to_dec(int v, uchar *str);
uchar* append_newline_to_str(uchar *str);
uchar* array_to_hexdump(uchar *data, uchar len, uchar *str);
uchar* debug_print_X_Y_Z_to_string_output_buffer(XYZVector* vector);


#endif  // __keyemu_h_included____

// vim:noexpandtab tabstop=4 shiftwidth=4 foldmethod=marker foldmarker={{{,}}}