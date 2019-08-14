// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/CapsuleComponent.h"
#include "TreeCapsuleComponent.generated.h"

/**
 * 
 */
UCLASS(ClassGroup=(BonsaiGolf), meta=(BlueprintSpawnableComponent) )
class BONSAIGOLF_API UTreeCapsuleComponent : public UCapsuleComponent
{
	GENERATED_BODY()

public:

//Use to get Procedural Mesh and array of capsules from Branch Data Struct
UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName ="Branch Index" , Category ="Bonsai Trees")
int32 BranchIndex;

//Use to get all the children in the capsule array from Branch Data Struct
UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName ="Capsule Index" , Category ="Bonsai Trees")
int32 CapsuleIndex;
	
};


