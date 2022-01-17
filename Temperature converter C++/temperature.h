float ftoc(float farenheit)
{
    float celcius = (farenheit-32)/1.8;
    return celcius;
}

float ctof(float celcius)
{
    float faranheit = (celcius*1.8)+32;
    return faranheit;
}