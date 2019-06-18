// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Player_Test.generated.h"

UCLASS()
class TEST_PROJECTUNNAMED_API APlayer_Test : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APlayer_Test();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Player Stats")
		int health = 1;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Player Stats")
		int armor;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Player Stats")
		float speed;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Player Stats")
		float jumpheight;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Player Equipment")
		TArray<AActor*> inventory;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Player Equipment")
		AActor* weapon;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
