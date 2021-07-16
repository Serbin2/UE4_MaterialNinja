// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseMatCharacter.h"


// Sets default values
ABaseMatCharacter::ABaseMatCharacter()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//NinjaMaterial = CreateDefaultSubobject<UNinjaMaterialComponent>(TEXT("NinjaMaterial"));
	//NinjaMaterial->SetupAttachment()

	//Root = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
	//SetRootComponent(CreateDefaultSubobject<UBoxComponent>(TEXT("SceneRoot")));

}

// Called when the game starts or when spawned
void ABaseMatCharacter::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ABaseMatCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABaseMatCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

