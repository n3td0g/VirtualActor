// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "VirtualActorHUD.generated.h"

UCLASS()
class AVirtualActorHUD : public AHUD
{
	GENERATED_BODY()

public:
	AVirtualActorHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

