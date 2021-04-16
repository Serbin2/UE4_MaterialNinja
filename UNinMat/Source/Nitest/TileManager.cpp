// Fill out your copyright notice in the Description page of Project Settings.


#include "TileManager.h"

// Sets default values
ATileManager::ATileManager()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATileManager::BeginPlay()
{
	Super::BeginPlay();
	
}

void ATileManager::LoadFile()
{
	FString str;
	str = TEXT("map data");
	str = str + str;

	char* tmp = TCHAR_TO_ANSI(*str);
	int len = str.Len();

	reinterpret_cast<uint8*>(tmp);

	FString input = FString("A");

	FString SaveDirectory = "D:\\ProtectFile";
	FString FileName = FString("SaveFile.txt");
	FString TextToSave = input;
	FString AbsoluteFilePath;
	FString thefirst = FString::SanitizeFloat(1);
	bool AllowOverwriting = true;

	IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();

	if (!PlatformFile.DirectoryExists(*SaveDirectory)) {
		PlatformFile.CreateDirectoryTree(*SaveDirectory);


	}

	AbsoluteFilePath = SaveDirectory + "/" + FileName;

	FFileHelper::SaveStringToFile(TextToSave, *AbsoluteFilePath);

	//FFileHelper::LoadFileToString(result, *AbsoluteFilePath);
}

// Called every frame
void ATileManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

