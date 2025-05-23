// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "EngineMinimal.h"
#include "GameFramework/Actor.h"
#include "LevelCreater.generated.h"

UCLASS()
class NITEST_API ALevelCreater : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALevelCreater();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TArray<FString> LevelData;


	UFUNCTION(BlueprintCallable)
		bool WriteLevelToFile(TArray<FString> data, const FString filePath, FString fileName);

	UFUNCTION(BlueprintCallable)
		bool ReadLevelFromFile(TArray<FString>& target, FString filePath, FString fileName);

	UFUNCTION(BlueprintCallable)
		bool OpenFileDialog(const FString& DialogTitle, const FString& DefaultPath, const FString& FileTypes, TArray<FString>& OutFileNames);

	UFUNCTION(BlueprintCallable)
		bool LoadLevelFromName(TArray<FString>& OutData, const FString Name);

};
