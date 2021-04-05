// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NinjaMaterialComponent.h"
#include "BaseTile.generated.h"

UCLASS(Blueprintable)
class NITEST_API ABaseTile : public AActor
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintImplementableEvent)
		void MaterialCollide(AActor* target);

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		USceneComponent* Root;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		UStaticMeshComponent* TileCube;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		UNinjaMaterialComponent* NinjaMaterial;


public:	
	// Sets default values for this actor's properties
	ABaseTile();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
