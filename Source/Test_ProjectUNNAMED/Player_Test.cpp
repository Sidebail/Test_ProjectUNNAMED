// Fill out your copyright notice in the Description page of Project Settings.


#include "Player_Test.h"

// Sets default values
APlayer_Test::APlayer_Test()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APlayer_Test::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlayer_Test::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APlayer_Test::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

