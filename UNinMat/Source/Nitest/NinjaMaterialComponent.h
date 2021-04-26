// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "NinjaMaterialComponent.generated.h"

UENUM(BlueprintType)
enum class ENinijaMaterial : uint8
{
	eNone = 0	UMETA(DisplayName = "MatNone"),
	ePaper		UMETA(DisplayName = "MatPaper"),
	eWood		UMETA(DisplayName = "MatWood"),
	eStone		UMETA(DisplayName = "MatStone"),
	eIron		UMETA(DisplayName = "MatIron"),
	eRubber		UMETA(DisplayName = "MatRubber"),
	eFire		UMETA(DisplayName = "MatFire"),
	eWater		UMETA(DisplayName = "MatWater"),


	eMax
};

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent), Blueprintable )
class NITEST_API UNinjaMaterialComponent : public USceneComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UNinjaMaterialComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;


	UFUNCTION(BlueprintCallable)
		void ChangeMaterial(ENinijaMaterial mat);

public:

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		ENinijaMaterial myMaterial;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		int massLevel = 0;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		FName MaterialName;

};
