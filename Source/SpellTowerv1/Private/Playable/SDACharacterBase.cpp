// Fill out your copyright notice in the Description page of Project Settings.


#include "Playable/SDACharacterBase.h"

// Sets default values
ASDACharacterBase::ASDACharacterBase()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASDACharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASDACharacterBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ASDACharacterBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

