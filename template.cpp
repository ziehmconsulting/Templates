/*H********************************************************************************************
** FILENAME :        main.cpp
** Version  :        1.0.1
** DESCRIPTION :
**       Converter from Networktime as a String to integer
**
** PUBLIC FUNCTIONS :
**       int    concat()
**       void setSerials()
**       void setupNT-Converter()
**       int convertNT2Integer()
**
** NOTES :
**      The naming of the prefixes of the variables and functions results from the variable type or
**       the variable type of the return value.
**       "c" stands for "char", an "s" for "short",
**       "v" for "void", a "u" for "unsigned" and
**       "x" for all non-standard types
**
** AUTHOR :            Tjark Ziehm        START DATE :    06 Juli 2024
** Copyright&Licence:  Tjark Ziehm, 2024
** Convention:         <major>.<minor>.<patch>
** CHANGES :
**            v.0.0.1 add and test functions to read&seperate the char elements in array Networktime
**            v.1.0.0 add the converter and the concationation function to get as result integers
**            v.1.1.0 seperate the code to implementable feature
**
*********************************************************************************************H*/

/// @brief Reconnects the WiFi uses InitWiFi if the connection has been removed
/// @return Returns true as soon as a connection has been established again
bool reconnect() {
  // Check to ensure we aren't connected yet
  const wl_status_t status = WiFi.status();
  if (status == WL_CONNECTED) {
    return true;
  }

  // If we aren't establish a new connection to the given WiFi network
  InitWiFi();
  return true;
}
