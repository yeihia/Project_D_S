#pragma once
#include"UIClass.h"
#include "Queue.h"
#include "PriorityQueue.h"
#include "Cargo.h"
#include "Truck.h"
#include"PreparationEvent.h"
#include"PromotionEvent.h"
#include"CancellationEvent.h"
#include"Event.h"
#include"Time.h"
#include<fstream>
class Company
{
	// Input file variables 
	
	int N; // Count of normal trucks 
	int S;	//Count of special trucks
	int V;	//Count of VIP trucks 
	int NTruckSpeed;
	int VTruckSpeed;
	int STruckSpeed;
	int NTruckCapacity;
	int VTruckCapacity;
	int STruckCapacity;
	int NTruckCheckupDuration;
	int STruckCheckupDuration; 
	int VTruckChekcupDuration; 
	int MaxW;
	int AutoP; // time for automatic promotion 
	int EventCount;
	int JourneyCount;


	// Cargos for Display
	PriorityQueue<Cargo*> WaitingCargos;
	Queue<Cargo*> MovingCargos;
	Queue<Cargo*> DeliveredCargos;

	// Trucks for display 
	Queue<Truck*> LoadingTrucks;
	Queue<Truck*> EmptyTrucks;
	Queue<Truck*> InCheckupTrucks;

	//Trucks
	Queue<Truck*>NormalTrucks;
	Queue<Truck*>SpecialTrucks;
	Queue<Truck*>VIPTrucks;

	//Cargos
	Queue<Cargo*>NormalCargos;
	Queue<Cargo*>SpecialCargos;
	Queue<Cargo*>VIPCargos;
	
	//Events
	PriorityQueue<Event*> Events;
	
	Time CurrentTime;
	UIClass* pUI;
	
	//Utility functions
	void SimulateAutomatic();
	void PrintConsole();
	void SimulateStepbyStep();
public:
	Company();
	void LoadCargos();
	void IncrementHour();
	void setMaxW(int);
	void setcurtime(Time time);
	Time getcurtime();
	bool isClosed();
	/*bool AddtoVIPTruck(Cargo*);
	bool AddtoNormalTruck(Cargo*);
	bool AddtoSpecialTruck(Cargo*);*/
//	void Update_UI_Interface(Time T);
	void Loading_File();
	void AddCargotoWaiting(Cargo*);
	bool UpdatetoVIP(int ID);
	void GeneralSimulate();
	void OutputFile();
	void ExecuteEvents();
	
};

