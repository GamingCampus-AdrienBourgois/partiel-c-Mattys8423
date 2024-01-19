#include "Solution1.h"

// Don't fortget to enable the exercise in the SudentConfiguration.h file !
//* Celsius to Fahrenheit °F = 9 / 5 (°C)+32
//* Kelvin to Fahrenheit °F = 9 / 5 (K - 273,15) + 32
//* Fahrenheit to Celsius °C = 5 / 9 (°F - 32)
//* Celsius to Kelvin K = °C + 273
//* Kelvin to Celsius °C = K - 273
//* Fahrenheit to Kelvin K = 5 / 9 (°F - 32) + 273
#include "StudentConfiguration.h"
#ifdef COMPILE_EXERCICE_1

float Solution1::ConvertTemperature(float _value, TemperatureUnits _from, TemperatureUnits _to)
{
	//partant de celsius
	if (_from == TemperatureUnits::CELSIUS) {
		if (_to == TemperatureUnits::FAHRENHEIT) {
			return (_value * 9 / 5) + 32;
		}
		else if (_to == TemperatureUnits::KELVIN) {
			return _value + 273,15;
		}
		else if (_to == TemperatureUnits::CELSIUS) {
			return _value;
		}
	};
	//partant de farenheit
	if (_from == TemperatureUnits::FAHRENHEIT) {
		if (_to == TemperatureUnits::CELSIUS) {
			return (_value -32) * 5/9;
		}
		else if (_to == TemperatureUnits::KELVIN) {
			return ((_value - 32) * 5 / 9) + 273,15;
		}
		else if (_to == TemperatureUnits::FAHRENHEIT) {
			return _value;
		}
	};
	//partant de kelvin
	if (_from == TemperatureUnits::KELVIN) {
		if (_to == TemperatureUnits::FAHRENHEIT) {
			return ((_value - 273,15) * 9 / 5) + 32;
		}
		else if (_to == TemperatureUnits::CELSIUS) {
			return _value - 273,15;
		}
		else if (_to == TemperatureUnits::KELVIN) {
			return _value;
		}
	};
}

#endif
