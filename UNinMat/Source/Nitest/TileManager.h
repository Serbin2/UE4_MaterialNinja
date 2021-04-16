// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include <vector>
#include "TileManager.generated.h"

UCLASS()
class NITEST_API ATileManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATileManager();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void LoadFile();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


protected:

	std::vector<std::vector<int>> worldTileMap;

   
};
