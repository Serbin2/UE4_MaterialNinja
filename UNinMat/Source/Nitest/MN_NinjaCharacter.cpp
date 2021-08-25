// Fill out your copyright notice in the Description page of Project Settings.


#include "MN_NinjaCharacter.h"

// Sets default values
AMN_NinjaCharacter::AMN_NinjaCharacter()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMN_NinjaCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMN_NinjaCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMN_NinjaCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

