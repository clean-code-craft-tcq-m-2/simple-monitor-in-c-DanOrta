#include "printMessages.h"

const string ErrorMessage[][NUMBER_OF_LANGUAGES] =
{
    {"Temperature out of range!", "¡La temperatura está fuera de rango!", "Temperatur außerhalb des Bereichs!"},
    {"State of charge is out of range!", "¡El estado de carga está fuera de rango!", "Ladezustand außerhalb des Bereichs!"},
    {"Charge rate out of range!", "¡La tasa de carga está fuera de rango!", "Der Ladestrom liegt außerhalb des zulässigen Bereichs!"},
};

string GetErrorMessage(ErrorID errorID, Language language)
{
    if (errorID <= 0U) return "";
    return (string)ErrorMessage[errorID - 1][language];
}