// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor.generated.h"

UCLASS()
class TEST_PROJECTUNNAMED_API AMyActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "MyComponents")
		UStaticMeshComponent* MyMeshComponent;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "MyComponents")
		USceneComponent* MySceneComponent;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, Category = "Stats", BlueprintReadWrite)
		int health;

	UPROPERTY(EditAnywhere, Category = "Stats", BlueprintReadWrite)
		float speed;

	UPROPERTY(EditAnywhere, Category = "Stats", BlueprintReadWrite)
		float jumpRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		AActor* weapon;

	

};
