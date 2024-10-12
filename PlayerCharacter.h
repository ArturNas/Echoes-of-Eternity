#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PlayerCharacter.generated.h"

UCLASS()
class YOURPROJECT_API APlayerCharacter : public ACharacter
{
    GENERATED_BODY()

public:
    APlayerCharacter();

protected:
    virtual void Tick(float DeltaTime) override;

private:
    float WorldTime = 0.0f;
    bool bIsRewindingTime = false;
    float TimeRewindAmount;
    float StartTime;

    UPROPERTY(EditAnywhere, Category = "Echo")
    TSubclassOf<class AEchoCharacter> EchoCharacterClass;

    void RewindTime(float DeltaTime);
    void SummonEcho();
    void DealDamageToEnemy(AActor* Enemy);
};