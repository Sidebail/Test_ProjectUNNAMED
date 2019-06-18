// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_Interactable.h"

// Sets default values
ACPP_Interactable::ACPP_Interactable()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACPP_Interactable::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACPP_Interactable::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

