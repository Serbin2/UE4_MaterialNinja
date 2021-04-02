// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "NinjaMaterialComponent.h"
#include "BaseMatCharacter.generated.h"



UCLASS(Blueprintable)
class NITEST_API ABaseMatCharacter : public ACharacter
{
	GENERATED_BODY()

public:


protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		UNinjaMaterialComponent* NinjaMaterial;

public:
	// Sets default values for this character's properties
	ABaseMatCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
