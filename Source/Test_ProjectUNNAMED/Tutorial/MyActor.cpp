// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
AMyActor::AMyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MyMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MyC++Mesh"));
	MySceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("MyScene"));

	RootComponent = MySceneComponent;

	MyMeshComponent->SetupAttachment(RootComponent);




}

// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	MyMeshComponent->AddLocalRotation(FRotator(0.f, 0.f, 1.f), false);

}

