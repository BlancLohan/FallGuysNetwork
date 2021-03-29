// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "MainPlayerState.generated.h"

/**
 * 
 */
UCLASS()
class PROJETFALLGUYS_API AMainPlayerState : public APlayerState
{
	GENERATED_BODY()

	FName name;
	
	UFUNCTION(BlueprintCallable)
	void SetPseudo(FName _name);
	UFUNCTION(BlueprintCallable)
	FName GetPseudo(){return name;}
};
