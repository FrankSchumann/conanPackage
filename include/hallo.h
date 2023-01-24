#pragma once


#ifdef _WIN32
  #define HALLO_EXPORT __declspec(dllexport)
#else
  #define HALLO_EXPORT
#endif

HALLO_EXPORT void hallo();
