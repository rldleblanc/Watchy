#ifndef SETTINGS_H
#define SETTINGS_H

//Weather Settings
//#define CITY_ID "5781860" //Spanish Fork, UT https://openweathermap.org/current#cityid
#define CITY_ID "5781993" //Springville, UT https://openweathermap.org/current#cityid
#define OPENWEATHERMAP_APIKEY "31752bf2f9776be2afeb0c6d5c63796a" //use your own API key :)
#define OPENWEATHERMAP_URL "http://api.openweathermap.org/data/2.5/weather?id=" //open weather api
#define TEMP_UNIT "imperial" //metric = Celsius , imperial = Fahrenheit
#define TEMP_LANG "en"
#define WEATHER_UPDATE_INTERVAL 30 //must be greater than 5, measured in minutes
//NTP Settings
#define NTP_SERVER "pool.ntp.org"
#define GMT_OFFSET_SEC 3600 * -7 // Mountain Time

watchySettings settings{
    CITY_ID,
    OPENWEATHERMAP_APIKEY,
    OPENWEATHERMAP_URL,
    TEMP_UNIT,
    TEMP_LANG,
    WEATHER_UPDATE_INTERVAL,
    NTP_SERVER,
    GMT_OFFSET_SEC
};

#endif
