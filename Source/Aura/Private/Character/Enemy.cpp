// Copyright Salvatore Franzese


#include "Character/Enemy.h"

AEnemy::AEnemy()
{
	GetMesh()->SetCollisionResponseToChannel(ECC_Visibility, ECR_Block);
}

void AEnemy::HighlightActor()
{

}

void AEnemy::UnHighlightActor()
{

}
