#ifndef RARCLIB_HPP
#define RARCLIB_HPP

#ifndef RARCLIB_STATIC
#   if defined(_WIN32)
#       define RARCLIB_API_EXPORT __declspec(dllexport)
#       define RARCLIB_API_IMPORT __declspec(dllimport)
#   elif __GNUC__ >=  4
#       define RARCLIB_API_EXPORT __attribute__((__visibility__("default")))
#       define RARCLIB_API_IMPORT __attribute__((__visibility__("default")))
#   else
#       define RARCLIB_API_EXPORT
#       define RARCLIB_API_IMPORT
#   endif
#else
#   define RARCLIB_API_EXPORT
#   define RARCLIB_API_IMPORT
#endif

#endif // RARCLIB_HPP
