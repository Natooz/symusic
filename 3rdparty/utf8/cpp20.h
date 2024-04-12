// Copyright 2022 Nemanja Trifunovic

/*
Permission is hereby granted, free of charge, to any person or organization
obtaining a copy of the software and accompanying documentation covered by
this license (the "Software") to use, reproduce, display, distribute,
execute, and transmit the Software, and to prepare derivative works of the
Software, and to permit third-parties to whom the Software is furnished to
do so, all subject to the following:

The copyright notices in the Software and this entire statement, including
the above license grant, this restriction and the following disclaimer,
must be included in all copies of the Software, in whole or in part, and
all derivative works of the Software, unless such copies or derivative
works are solely in the form of machine-executable object code generated by
a source language processor.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE, TITLE AND NON-INFRINGEMENT. IN NO EVENT
SHALL THE COPYRIGHT HOLDERS OR ANYONE DISTRIBUTING THE SOFTWARE BE LIABLE
FOR ANY DAMAGES OR OTHER LIABILITY, WHETHER IN CONTRACT, TORT OR OTHERWISE,
ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
DEALINGS IN THE SOFTWARE.
*/


#ifndef UTF8_FOR_CPP_207e906c01_03a3_4daf_b420_ea7ea952b3c9
#define UTF8_FOR_CPP_207e906c01_03a3_4daf_b420_ea7ea952b3c9

#include "cpp17.h"

namespace utf8
{
    inline std::u8string utf16tou8(const std::u16string& s)
    {
        std::u8string result;
        utf16to8(s.begin(), s.end(), std::back_inserter(result));
        return result;
    }

    inline std::u8string utf16tou8(std::u16string_view s)
    {
        std::u8string result;
        utf16to8(s.begin(), s.end(), std::back_inserter(result));
        return result;
    }

    inline std::u16string utf8to16(const std::u8string& s)
    {
        std::u16string result;
        utf8to16(s.begin(), s.end(), std::back_inserter(result));
        return result;
    }

    inline std::u16string utf8to16(const std::u8string_view& s)
    {
        std::u16string result;
        utf8to16(s.begin(), s.end(), std::back_inserter(result));
        return result;
    }

    inline std::u8string utf32tou8(const std::u32string& s)
    {
        std::u8string result;
        utf32to8(s.begin(), s.end(), std::back_inserter(result));
        return result;
    }

    inline std::u8string utf32tou8(const std::u32string_view& s)
    {
        std::u8string result;
        utf32to8(s.begin(), s.end(), std::back_inserter(result));
        return result;
    }

    inline std::u32string utf8to32(const std::u8string& s)
    {
        std::u32string result;
        utf8to32(s.begin(), s.end(), std::back_inserter(result));
        return result;
    }

    inline std::u32string utf8to32(const std::u8string_view& s)
    {
        std::u32string result;
        utf8to32(s.begin(), s.end(), std::back_inserter(result));
        return result;
    }

    inline std::size_t find_invalid(const std::u8string& s)
    {
        std::u8string::const_iterator invalid = find_invalid(s.begin(), s.end());
        return (invalid == s.end()) ? std::string_view::npos : static_cast<std::size_t>(invalid - s.begin());
    }

    inline bool is_valid(const std::u8string& s)
    {
        return is_valid(s.begin(), s.end());
    }

    inline std::u8string replace_invalid(const std::u8string& s, char32_t replacement)
    {
        std::u8string result;
        replace_invalid(s.begin(), s.end(), std::back_inserter(result), replacement);
        return result;
    }

    inline std::u8string replace_invalid(const std::u8string& s)
    {
        std::u8string result;
        replace_invalid(s.begin(), s.end(), std::back_inserter(result));
        return result;
    }

    inline bool starts_with_bom(const std::u8string& s)
    {
        return starts_with_bom(s.begin(), s.end());
    }

} // namespace utf8

#endif // header guard
