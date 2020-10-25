#pragma once

#include "Survival.h"

namespace PapyrusSurvival
{
	using VM = RE::BSScript::IVirtualMachine;
	using StackID = RE::VMStackID;
	using Severity = RE::BSScript::ErrorLogger::Severity;
	using Feature = Survival::Feature;

	void ForceEnable(RE::StaticFunctionTag*, Feature a_feature);
	void RequestDisable(RE::StaticFunctionTag*, Feature a_feature);
	void UserEnable(RE::StaticFunctionTag*, Feature a_feature);
	void UserDisable(RE::StaticFunctionTag*, Feature a_feature);
	void UserReset(RE::StaticFunctionTag*, Feature a_feature);
	bool IsEnabledByMods(RE::StaticFunctionTag*, Feature a_feature);
	bool IsDisabledByMods(RE::StaticFunctionTag*, Feature a_feature);
	bool IsEnabledByUser(RE::StaticFunctionTag*, Feature a_feature);
	bool IsDisabledByUser(RE::StaticFunctionTag*, Feature a_feature);

	void SetCloakWarmBonus(RE::StaticFunctionTag*, float warmth);
	void SetCloakNormalBonus(RE::StaticFunctionTag*, float warmth);
	void SetCloakColdBonus(RE::StaticFunctionTag*, float warmth);

	float GetCloakWarmBonus(RE::StaticFunctionTag*);
	float GetCloakNormalBonus(RE::StaticFunctionTag*);
	float GetCloakColdBonus(RE::StaticFunctionTag*);

	bool RegisterFuncs(VM* a_vm);
}
