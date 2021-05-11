// Fill out your copyright notice in the Description page of Project Settings.


#include "LevelCreater.h"

// saving file
//#include "Misc/FileHelper.h"
//#include "Misc/Paths.h"

// file dialog
#include "Developer/DesktopPlatform/Public/IDesktopPlatform.h"
#include "Developer/DesktopPlatform/Public/DesktopPlatformModule.h"


// Sets default values
ALevelCreater::ALevelCreater()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ALevelCreater::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ALevelCreater::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

bool ALevelCreater::WriteLevelToFile(TArray<FString> data, const FString filePath, FString fileName)
{
	TArray<FString> OutFileNames;
	bool result = false;

	if (GEngine)
	{
		if (GEngine->GameViewport)
		{
			void* ParentWindowHandle = GEngine->GameViewport->GetWindow()->GetNativeWindow()->GetOSWindowHandle();
			IDesktopPlatform* DesktopPlatform = FDesktopPlatformModule::Get();
			if (DesktopPlatform)
			{
				
				//Opening the file picker!
				uint32 SelectionFlag = 0; //A value of 0 represents single file selection while a value of 1 represents multiple file selection
				result = DesktopPlatform->SaveFileDialog(ParentWindowHandle, FString("SaveLevel"), filePath, FString(""), FString("MNLevel|*.mnl"), SelectionFlag, OutFileNames);
			}
		}
	}

	//FString tmp = filePath + fileName;
	if (result)
	{
		return FFileHelper::SaveStringArrayToFile(data, *OutFileNames[0]);
	}

	return result;
}

bool ALevelCreater::ReadLevelFromFile(TArray<FString>& target, FString filePath, FString fileName)
{
	TArray<FString> OutFileNames;
	bool result = false;

	if (GEngine)
	{
		if (GEngine->GameViewport)
		{
			void* ParentWindowHandle = GEngine->GameViewport->GetWindow()->GetNativeWindow()->GetOSWindowHandle();
			IDesktopPlatform* DesktopPlatform = FDesktopPlatformModule::Get();
			if (DesktopPlatform)
			{

				//Opening the file picker!
				uint32 SelectionFlag = 0; //A value of 0 represents single file selection while a value of 1 represents multiple file selection
				result = DesktopPlatform->OpenFileDialog(ParentWindowHandle, FString("LoadLevel"), filePath, FString(""), FString("MNLevel|*.mnl"), SelectionFlag, OutFileNames);
			}
		}
	}

	//FString tmp = filePath + fileName;
	if (result)
	{
		return FFileHelper::LoadFileToStringArray(target, *OutFileNames[0]);
	}

	return result;
}

bool ALevelCreater::OpenFileDialog(const FString& DialogTitle, const FString& DefaultPath, const FString& FileTypes, TArray<FString>& OutFileNames)
{
	if (GEngine)
	{
		if (GEngine->GameViewport)
		{
			void* ParentWindowHandle = GEngine->GameViewport->GetWindow()->GetNativeWindow()->GetOSWindowHandle();
			IDesktopPlatform* DesktopPlatform = FDesktopPlatformModule::Get();
			if (DesktopPlatform)
			{
				//Opening the file picker!
				uint32 SelectionFlag = 0; //A value of 0 represents single file selection while a value of 1 represents multiple file selection
				return DesktopPlatform->OpenFileDialog(ParentWindowHandle, DialogTitle, DefaultPath, FString(""), FileTypes, SelectionFlag, OutFileNames);
			}
		}
	}
	return false;
}

