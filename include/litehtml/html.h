#ifndef LH_HTML_H
#define LH_HTML_H

#include <stdlib.h>
#include <string>
#include <ctype.h>
#include <vector>
#include <map>
#include <cstring>
#include <algorithm>
#include <sstream>
#include <functional>
#include "os_types.h"
#include "types.h"
#include "utf8_strings.h"
#include "background.h"
#include "borders.h"
#include "html_tag.h"
#include "web_color.h"
#include "media_query.h"
#include "document_container.h"

namespace litehtml
{
	void trim(string &s);
	void lcase(string &s);
	int	 value_index(const string& val, const string& strings, int defValue = -1, char delim = ';');
    string index_value(int index, const string& strings, char delim = ';');
	bool value_in_list(const string& val, const string& strings, char delim = ';');
	string::size_type find_close_bracket(const string &s, string::size_type off, char open_b = '(', char close_b = ')');
	void split_string(const string& str, string_vector& tokens, const string& delims, const string& delims_preserve = "", const string& quote = "\"");
	void join_string(string& str, const string_vector& tokens, const string& delims);
    double t_strtod(const char* string, char** endPtr);
    string get_escaped_string(const string& in_str);

	int t_strcasecmp(const char *s1, const char *s2);
	int t_strncasecmp(const char *s1, const char *s2, size_t n);
	
	inline int t_isdigit(int c)
	{
		return (c >= '0' && c <= '9');
	}
	
	inline int t_tolower(int c)
	{
		return (c >= 'A' && c <= 'Z' ? c + 'a' - 'A' : c);
	}
	
	inline int round_f(float val)
	{
		int int_val = (int) val;
		if(val - int_val >= 0.5)
		{
			int_val++;
		}
		return int_val;
	}

	inline int round_d(double val)
	{
		int int_val = (int) val;
		if(val - int_val >= 0.5)
		{
			int_val++;
		}
		return int_val;
	}
}

#endif  // LH_HTML_H
