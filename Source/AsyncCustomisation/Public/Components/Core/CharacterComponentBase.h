﻿#pragma once

#include "CharacterComponentBase.generated.h"

class ABaseCharacter;

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class UCharacterComponentBase : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UCharacterComponentBase();

	virtual void Activate(bool bReset) override;
	virtual void Deactivate() override;

	//virtual void OnPlayerChangeHandler(UBattlePlayerModel* InPlayer);

	virtual void BindCharacter(ABaseCharacter* InCharacter);
	virtual void UnbindCharacter(ABaseCharacter* InCharacter);
	//virtual void BindPlayer(UBattlePlayerModel* InPlayer);
	//virtual void UnbindPlayer(UBattlePlayerModel* InPlayer);

	//UFUNCTION(BlueprintPure)
	//UBattlePlayerModel* GetOwningPlayer();
	//UFUNCTION(BlueprintPure)
	//ACharacter* GetOwningCharacter();

	void UpdateOwner();

protected:

	//UPROPERTY()
	//TWeakObjectPtr<UBattlePlayerModel> OwningPlayer;
	UPROPERTY()
	TWeakObjectPtr<ABaseCharacter> OwningCharacter;
};
