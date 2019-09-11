/*
Kevin Lehman  - 1463553
Tarrant County College - COSC 1437- Fall 2017
Assignment 3 - Week 7
*/

#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

const int MAX = 5;

struct PrimaryDriver
{
	string firstName;
	string middleName;
	string lastName;
	string licenseNum;
	Location licenseLocation;
	Date age;
};

struct Location
{
	string city;
	string state;
	Address place;
};

struct Address
{
	int streetNumber;
	string streetName;
	int zipCode;
};

struct Date
{
	int month;
	int day;
	int year;
};

struct Time
{
	int hour;
	int minutes;
};

struct Payment
{
	bool paymentOnline;
	float paymentTotal;
};

struct Vehicle
{
	string make;
	string model;
	int year;
};

struct AlternateDriver
{
	PrimaryDriver altDriverList[MAX];
};

struct Booking
{
	Date BookingDay;
	Time BookingTime;
	Vehicle BookedCar;
};

struct ReservationStart
{
	Booking reservation;
	Location pickup;
};

struct PlannedReturn
{
	ReservationStart returnPlan;
};

struct ActualReturn
{
	ReservationStart actualReturn;
	Payment total;
};

int main()
{

}
