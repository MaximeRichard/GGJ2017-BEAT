// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "EnemyProjecile.h"
#include "Components/ActorComponent.h"
#include "EnemyManager.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class GGJ2017_API UEnemyManager : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UEnemyManager();

	// Called when the game starts
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void TickComponent( float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction ) override;

	UFUNCTION(BlueprintCallable, Category = "Shoot")
	void Shoot();

	UPROPERTY(EditAnywhere)
	FVector ShootingOffset = FVector(0.f);

	UFUNCTION(BlueprintCallable, Category = "Shoot")
	void OnHit();
	void DestroyEnemy();

	void SpawnProjectile();

	UPROPERTY(BlueprintReadWrite)
	int Health = 5;

	UPROPERTY(BlueprintReadWrite)
	TSubclassOf<AEnemyProjecile> Projectile;

	
	
};
