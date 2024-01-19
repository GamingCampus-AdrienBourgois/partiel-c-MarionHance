#include "Solution1.h"

// Don't fortget to enable the exercise in the SudentConfiguration.h file !
#include "StudentConfiguration.h"
#ifdef COMPILE_EXERCICE_1

float Solution1::ConvertTemperature(float _value, TemperatureUnits _from, TemperatureUnits _to)
{
	switch (_from)
	{
	case TemperatureUnits::CELSIUS:
		switch (_to)
		{
		case TemperatureUnits::CELSIUS: // Si l'unité d'origine est Celsius et qu'on cherche à la convertir en Celsius -> alors on retourne juste la valeur d'origine
			return _value;
		case TemperatureUnits::FAHRENHEIT: // Si on cherche à convertir le Celsius en Fahrenheit on doit multiplier la valeur d'origine par 9 puis la divier par 5, et ajouter 32
			return (_value * 9 / 5) + 32;
		case TemperatureUnits::KELVIN: // Si on cherche a convertir le Celsius en Kelvin il faut ajouter 273 à la valeur d'origine
			return _value + 273;
		}
		break;

	case TemperatureUnits::FAHRENHEIT:
		switch (_to)
		{
		case TemperatureUnits::CELSIUS:
			return (_value - 32) * 5 / 9;
		case TemperatureUnits::FAHRENHEIT:
			return _value;
		case TemperatureUnits::KELVIN:
			return (_value - 32) * 5 / 9 + 273;
		}
		break;

	case TemperatureUnits::KELVIN:
		switch (_to)
		{
		case TemperatureUnits::CELSIUS:
			return _value - 273;
		case TemperatureUnits::FAHRENHEIT:
			return (_value - 273) * 9 / 5 + 32;
		case TemperatureUnits::KELVIN:
			return _value;
		}
		break;		
	}

	return -1.0f;
}

#endif
