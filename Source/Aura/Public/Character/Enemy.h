// Copyright Salvatore Franzese

#pragma once

#include "CoreMinimal.h"
#include "Character/BaseCharacter.h"
#include "Interaction/EnemyInterface.h"
#include "Enemy.generated.h"

/**
 * 
 */
UCLASS()
class AURA_API AEnemy : public ABaseCharacter, public IEnemyInterface
{
	GENERATED_BODY()

public:
	AEnemy();

	/** Begin Enemy Interface */
	virtual void HighlightActor() override;
	virtual void UnHighlightActor() override;
	/** End Enemy Interface */

protected:
	virtual void BeginPlay() override;
};
