// Forward declarations of the netvar classes, generated from the receive tables of the game, do not edit.
#pragma once

namespace Netvar {

template <class Self, class Base> struct C_AI_BaseNPC;
template <class Self, class Base> struct DT_AnimTimeMustBeFirst;
template <class Self, class Base> struct DT_Animationlayer;
template <class Self, class Base> struct DT_BCCLocalPlayerExclusive;
template <class Self, class Base> struct C_BaseAnimating;
template <class Self, class Base> struct C_BaseAnimatingOverlay;
template <class Self, class Base> struct C_TEBaseBeam;
template <class Self, class Base> struct C_BaseCSGrenade;
template <class Self, class Base> struct C_BaseCSGrenadeProjectile;
template <class Self, class Base> struct C_BaseCombatCharacter;
template <class Self, class Base> struct C_BaseCombatWeapon;
template <class Self, class Base> struct C_BaseDoor;
template <class Self, class Base> struct C_BaseEntity;
template <class Self, class Base> struct C_BaseFlex;
template <class Self, class Base> struct C_BaseGrenade;
template <class Self, class Base> struct C_BaseParticleEntity;
template <class Self, class Base> struct C_BasePlayer;
template <class Self, class Base> struct C_BasePropDoor;
template <class Self, class Base> struct C_BaseTempEntity;
template <class Self, class Base> struct C_BaseViewModel;
template <class Self, class Base> struct C_Beam;
template <class Self, class Base> struct DT_BeamPredictableId;
template <class Self, class Base> struct C_BoneFollower;
template <class Self, class Base> struct C_BreakableProp;
template <class Self, class Base> struct C_BreakableSurface;
template <class Self, class Base> struct C_Fish;
template <class Self, class Base> struct C_Hostage;
template <class Self, class Base> struct DT_CSGameRules;
template <class Self, class Base> struct C_CSGameRulesProxy;
template <class Self, class Base> struct DT_CSLocalPlayerExclusive;
template <class Self, class Base> struct DT_CSNonLocalPlayerExclusive;
template <class Self, class Base> struct C_CSPlayer;
template <class Self, class Base> struct C_CSPlayerResource;
template <class Self, class Base> struct C_CSRagdoll;
template <class Self, class Base> struct C_CSTeam;
template <class Self, class Base> struct DT_CollisionProperty;
template <class Self, class Base> struct C_ColorCorrection;
template <class Self, class Base> struct C_ColorCorrectionVolume;
template <class Self, class Base> struct C_EnvDetailController;
template <class Self, class Base> struct C_DynamicLight;
template <class Self, class Base> struct C_DynamicProp;
template <class Self, class Base> struct DT_EffectData;
template <class Self, class Base> struct C_Embers;
template <class Self, class Base> struct C_EntityDissolve;
template <class Self, class Base> struct C_EntityFlame;
template <class Self, class Base> struct C_EntityParticleTrail;
template <class Self, class Base> struct DT_EntityParticleTrailInfo;
template <class Self, class Base> struct C_EnvParticleScript;
template <class Self, class Base> struct C_EnvProjectedTexture;
template <class Self, class Base> struct C_EnvScreenEffect;
template <class Self, class Base> struct C_EnvScreenOverlay;
template <class Self, class Base> struct C_EnvTonemapController;
template <class Self, class Base> struct C_EnvWind;
template <class Self, class Base> struct DT_EnvWindShared;
template <class Self, class Base> struct C_FireSmoke;
template <class Self, class Base> struct C_FireTrail;
template <class Self, class Base> struct C_Flashbang;
template <class Self, class Base> struct C_FootstepControl;
template <class Self, class Base> struct C_FuncAreaPortalWindow;
template <class Self, class Base> struct C_FuncConveyor;
template <class Self, class Base> struct C_FuncLadder;
template <class Self, class Base> struct C_FuncMonitor;
template <class Self, class Base> struct C_FuncOccluder;
template <class Self, class Base> struct C_FuncSmokeVolume;
template <class Self, class Base> struct C_FuncTrackTrain;
template <class Self, class Base> struct C_Func_Dust;
template <class Self, class Base> struct C_Func_LOD;
template <class Self, class Base> struct C_GameRulesProxy;
template <class Self, class Base> struct C_HEGrenade;
template <class Self, class Base> struct C_HandleTest;
template <class Self, class Base> struct C_InfoLadderDismount;
template <class Self, class Base> struct C_InfoLightingRelative;
template <class Self, class Base> struct C_LightGlow;
template <class Self, class Base> struct DT_Local;
template <class Self, class Base> struct DT_LocalActiveWeaponData;
template <class Self, class Base> struct DT_LocalActiveWeaponKnifeData;
template <class Self, class Base> struct DT_LocalPlayerExclusive;
template <class Self, class Base> struct DT_LocalWeaponData;
template <class Self, class Base> struct C_MaterialModifyControl;
template <class Self, class Base> struct C_MovieExplosion;
template <class Self, class Base> struct DT_OverlayVars;
template <class Self, class Base> struct C_ParticleFire;
template <class Self, class Base> struct C_ParticleSmokeGrenade;
template <class Self, class Base> struct C_PhysBox;
template <class Self, class Base> struct C_PhysBoxMultiplayer;
template <class Self, class Base> struct C_PhysMagnet;
template <class Self, class Base> struct C_PhysicsProp;
template <class Self, class Base> struct C_PhysicsPropMultiplayer;
template <class Self, class Base> struct C_PlantedC4;
template <class Self, class Base> struct C_Plasma;
template <class Self, class Base> struct C_PlayerResource;
template <class Self, class Base> struct DT_PlayerState;
template <class Self, class Base> struct C_PointCamera;
template <class Self, class Base> struct C_PointCommentaryNode;
template <class Self, class Base> struct C_PoseController;
template <class Self, class Base> struct C_Precipitation;
template <class Self, class Base> struct DT_PredictableId;
template <class Self, class Base> struct C_PredictedViewModel;
template <class Self, class Base> struct C_PropJeep;
template <class Self, class Base> struct C_PropVehicleDriveable;
template <class Self, class Base> struct C_Test_ProxyToggle_Networkable;
template <class Self, class Base> struct DT_ProxyToggle_ProxiedData;
template <class Self, class Base> struct C_EnvQuadraticBeam;
template <class Self, class Base> struct C_RagdollProp;
template <class Self, class Base> struct C_RagdollManager;
template <class Self, class Base> struct C_RagdollPropAttached;
template <class Self, class Base> struct C_RocketTrail;
template <class Self, class Base> struct C_RopeKeyframe;
template <class Self, class Base> struct C_SceneEntity;
template <class Self, class Base> struct DT_ServerAnimationData;
template <class Self, class Base> struct C_ShadowControl;
template <class Self, class Base> struct C_SmokeGrenade;
template <class Self, class Base> struct C_SmokeStack;
template <class Self, class Base> struct C_SmokeTrail;
template <class Self, class Base> struct C_SporeExplosion;
template <class Self, class Base> struct C_SporeTrail;
template <class Self, class Base> struct C_SpotlightEnd;
template <class Self, class Base> struct C_Sprite;
template <class Self, class Base> struct C_SpriteTrail;
template <class Self, class Base> struct C_SteamJet;
template <class Self, class Base> struct C_Sun;
template <class Self, class Base> struct C_TEArmorRicochet;
template <class Self, class Base> struct C_TEBSPDecal;
template <class Self, class Base> struct C_TEBeamEntPoint;
template <class Self, class Base> struct C_TEBeamEnts;
template <class Self, class Base> struct C_TEBeamFollow;
template <class Self, class Base> struct C_TEBeamLaser;
template <class Self, class Base> struct C_TEBeamPoints;
template <class Self, class Base> struct C_TEBeamRing;
template <class Self, class Base> struct C_TEBeamRingPoint;
template <class Self, class Base> struct C_TEBeamSpline;
template <class Self, class Base> struct C_TEBloodSprite;
template <class Self, class Base> struct C_TEBloodStream;
template <class Self, class Base> struct C_TEBreakModel;
template <class Self, class Base> struct C_TEBubbleTrail;
template <class Self, class Base> struct C_TEBubbles;
template <class Self, class Base> struct C_TEDecal;
template <class Self, class Base> struct C_TEDust;
template <class Self, class Base> struct C_TEDynamicLight;
template <class Self, class Base> struct C_TEEffectDispatch;
template <class Self, class Base> struct C_TEEnergySplash;
template <class Self, class Base> struct C_TEExplosion;
template <class Self, class Base> struct C_TEFireBullets;
template <class Self, class Base> struct C_TEFizz;
template <class Self, class Base> struct C_TEFootprintDecal;
template <class Self, class Base> struct C_TEGaussExplosion;
template <class Self, class Base> struct C_TEGlowSprite;
template <class Self, class Base> struct C_TEImpact;
template <class Self, class Base> struct C_TEKillPlayerAttachments;
template <class Self, class Base> struct C_TELargeFunnel;
template <class Self, class Base> struct C_TEMetalSparks;
template <class Self, class Base> struct C_TEMuzzleFlash;
template <class Self, class Base> struct C_TEParticleSystem;
template <class Self, class Base> struct C_TEPhysicsProp;
template <class Self, class Base> struct C_TEPlantBomb;
template <class Self, class Base> struct C_TEPlayerAnimEvent;
template <class Self, class Base> struct C_TEPlayerDecal;
template <class Self, class Base> struct C_TEProjectedDecal;
template <class Self, class Base> struct C_TERadioIcon;
template <class Self, class Base> struct C_TEShatterSurface;
template <class Self, class Base> struct C_TEShowLine;
template <class Self, class Base> struct C_TESmoke;
template <class Self, class Base> struct C_TESparks;
template <class Self, class Base> struct C_TESprite;
template <class Self, class Base> struct C_TESpriteSpray;
template <class Self, class Base> struct C_TEWorldDecal;
template <class Self, class Base> struct C_Team;
template <class Self, class Base> struct C_Tesla;
template <class Self, class Base> struct C_TestTraceline;
template <class Self, class Base> struct C_VGuiScreen;
template <class Self, class Base> struct C_WaterBullet;
template <class Self, class Base> struct C_WaterLODControl;
template <class Self, class Base> struct C_AK47;
template <class Self, class Base> struct C_WeaponAWP;
template <class Self, class Base> struct C_WeaponAug;
template <class Self, class Base> struct C_C4;
template <class Self, class Base> struct C_WeaponCSBase;
template <class Self, class Base> struct C_WeaponCSBaseGun;
template <class Self, class Base> struct C_WeaponCubemap;
template <class Self, class Base> struct C_WeaponCycler;
template <class Self, class Base> struct C_DEagle;
template <class Self, class Base> struct C_WeaponElite;
template <class Self, class Base> struct C_WeaponFamas;
template <class Self, class Base> struct C_WeaponFiveSeven;
template <class Self, class Base> struct C_WeaponG3SG1;
template <class Self, class Base> struct C_WeaponGalil;
template <class Self, class Base> struct C_WeaponGlock;
template <class Self, class Base> struct C_Knife;
template <class Self, class Base> struct C_WeaponM249;
template <class Self, class Base> struct C_WeaponM3;
template <class Self, class Base> struct C_WeaponM4A1;
template <class Self, class Base> struct C_WeaponMAC10;
template <class Self, class Base> struct C_WeaponMP5Navy;
template <class Self, class Base> struct C_WeaponP228;
template <class Self, class Base> struct C_WeaponP90;
template <class Self, class Base> struct C_WeaponSG550;
template <class Self, class Base> struct C_WeaponSG552;
template <class Self, class Base> struct C_WeaponScout;
template <class Self, class Base> struct C_WeaponTMP;
template <class Self, class Base> struct C_WeaponUMP45;
template <class Self, class Base> struct C_WeaponUSP;
template <class Self, class Base> struct C_WeaponXM1014;
template <class Self, class Base> struct C_World;

} // namespace Netvar

// Every table once: NETVAR_FOR_EACH_TABLE(X) calls X(Class, Table) for each class: the class to instantiate, and the table of the game that it is the class of.
#define NETVAR_FOR_EACH_TABLE(X) \
    X(C_AI_BaseNPC, DT_AI_BaseNPC) \
    X(DT_AnimTimeMustBeFirst, DT_AnimTimeMustBeFirst) \
    X(DT_Animationlayer, DT_Animationlayer) \
    X(DT_BCCLocalPlayerExclusive, DT_BCCLocalPlayerExclusive) \
    X(C_BaseAnimating, DT_BaseAnimating) \
    X(C_BaseAnimatingOverlay, DT_BaseAnimatingOverlay) \
    X(C_TEBaseBeam, DT_BaseBeam) \
    X(C_BaseCSGrenade, DT_BaseCSGrenade) \
    X(C_BaseCSGrenadeProjectile, DT_BaseCSGrenadeProjectile) \
    X(C_BaseCombatCharacter, DT_BaseCombatCharacter) \
    X(C_BaseCombatWeapon, DT_BaseCombatWeapon) \
    X(C_BaseDoor, DT_BaseDoor) \
    X(C_BaseEntity, DT_BaseEntity) \
    X(C_BaseFlex, DT_BaseFlex) \
    X(C_BaseGrenade, DT_BaseGrenade) \
    X(C_BaseParticleEntity, DT_BaseParticleEntity) \
    X(C_BasePlayer, DT_BasePlayer) \
    X(C_BasePropDoor, DT_BasePropDoor) \
    X(C_BaseTempEntity, DT_BaseTempEntity) \
    X(C_BaseViewModel, DT_BaseViewModel) \
    X(C_Beam, DT_Beam) \
    X(DT_BeamPredictableId, DT_BeamPredictableId) \
    X(C_BoneFollower, DT_BoneFollower) \
    X(C_BreakableProp, DT_BreakableProp) \
    X(C_BreakableSurface, DT_BreakableSurface) \
    X(C_Fish, DT_CFish) \
    X(C_Hostage, DT_CHostage) \
    X(DT_CSGameRules, DT_CSGameRules) \
    X(C_CSGameRulesProxy, DT_CSGameRulesProxy) \
    X(DT_CSLocalPlayerExclusive, DT_CSLocalPlayerExclusive) \
    X(DT_CSNonLocalPlayerExclusive, DT_CSNonLocalPlayerExclusive) \
    X(C_CSPlayer, DT_CSPlayer) \
    X(C_CSPlayerResource, DT_CSPlayerResource) \
    X(C_CSRagdoll, DT_CSRagdoll) \
    X(C_CSTeam, DT_CSTeam) \
    X(DT_CollisionProperty, DT_CollisionProperty) \
    X(C_ColorCorrection, DT_ColorCorrection) \
    X(C_ColorCorrectionVolume, DT_ColorCorrectionVolume) \
    X(C_EnvDetailController, DT_DetailController) \
    X(C_DynamicLight, DT_DynamicLight) \
    X(C_DynamicProp, DT_DynamicProp) \
    X(DT_EffectData, DT_EffectData) \
    X(C_Embers, DT_Embers) \
    X(C_EntityDissolve, DT_EntityDissolve) \
    X(C_EntityFlame, DT_EntityFlame) \
    X(C_EntityParticleTrail, DT_EntityParticleTrail) \
    X(DT_EntityParticleTrailInfo, DT_EntityParticleTrailInfo) \
    X(C_EnvParticleScript, DT_EnvParticleScript) \
    X(C_EnvProjectedTexture, DT_EnvProjectedTexture) \
    X(C_EnvScreenEffect, DT_EnvScreenEffect) \
    X(C_EnvScreenOverlay, DT_EnvScreenOverlay) \
    X(C_EnvTonemapController, DT_EnvTonemapController) \
    X(C_EnvWind, DT_EnvWind) \
    X(DT_EnvWindShared, DT_EnvWindShared) \
    X(C_FireSmoke, DT_FireSmoke) \
    X(C_FireTrail, DT_FireTrail) \
    X(C_Flashbang, DT_Flashbang) \
    X(C_FootstepControl, DT_FootstepControl) \
    X(C_FuncAreaPortalWindow, DT_FuncAreaPortalWindow) \
    X(C_FuncConveyor, DT_FuncConveyor) \
    X(C_FuncLadder, DT_FuncLadder) \
    X(C_FuncMonitor, DT_FuncMonitor) \
    X(C_FuncOccluder, DT_FuncOccluder) \
    X(C_FuncSmokeVolume, DT_FuncSmokeVolume) \
    X(C_FuncTrackTrain, DT_FuncTrackTrain) \
    X(C_Func_Dust, DT_Func_Dust) \
    X(C_Func_LOD, DT_Func_LOD) \
    X(C_GameRulesProxy, DT_GameRulesProxy) \
    X(C_HEGrenade, DT_HEGrenade) \
    X(C_HandleTest, DT_HandleTest) \
    X(C_InfoLadderDismount, DT_InfoLadderDismount) \
    X(C_InfoLightingRelative, DT_InfoLightingRelative) \
    X(C_LightGlow, DT_LightGlow) \
    X(DT_Local, DT_Local) \
    X(DT_LocalActiveWeaponData, DT_LocalActiveWeaponData) \
    X(DT_LocalActiveWeaponKnifeData, DT_LocalActiveWeaponKnifeData) \
    X(DT_LocalPlayerExclusive, DT_LocalPlayerExclusive) \
    X(DT_LocalWeaponData, DT_LocalWeaponData) \
    X(C_MaterialModifyControl, DT_MaterialModifyControl) \
    X(C_MovieExplosion, DT_MovieExplosion) \
    X(DT_OverlayVars, DT_OverlayVars) \
    X(C_ParticleFire, DT_ParticleFire) \
    X(C_ParticleSmokeGrenade, DT_ParticleSmokeGrenade) \
    X(C_PhysBox, DT_PhysBox) \
    X(C_PhysBoxMultiplayer, DT_PhysBoxMultiplayer) \
    X(C_PhysMagnet, DT_PhysMagnet) \
    X(C_PhysicsProp, DT_PhysicsProp) \
    X(C_PhysicsPropMultiplayer, DT_PhysicsPropMultiplayer) \
    X(C_PlantedC4, DT_PlantedC4) \
    X(C_Plasma, DT_Plasma) \
    X(C_PlayerResource, DT_PlayerResource) \
    X(DT_PlayerState, DT_PlayerState) \
    X(C_PointCamera, DT_PointCamera) \
    X(C_PointCommentaryNode, DT_PointCommentaryNode) \
    X(C_PoseController, DT_PoseController) \
    X(C_Precipitation, DT_Precipitation) \
    X(DT_PredictableId, DT_PredictableId) \
    X(C_PredictedViewModel, DT_PredictedViewModel) \
    X(C_PropJeep, DT_PropJeep) \
    X(C_PropVehicleDriveable, DT_PropVehicleDriveable) \
    X(C_Test_ProxyToggle_Networkable, DT_ProxyToggle) \
    X(DT_ProxyToggle_ProxiedData, DT_ProxyToggle_ProxiedData) \
    X(C_EnvQuadraticBeam, DT_QuadraticBeam) \
    X(C_RagdollProp, DT_Ragdoll) \
    X(C_RagdollManager, DT_RagdollManager) \
    X(C_RagdollPropAttached, DT_Ragdoll_Attached) \
    X(C_RocketTrail, DT_RocketTrail) \
    X(C_RopeKeyframe, DT_RopeKeyframe) \
    X(C_SceneEntity, DT_SceneEntity) \
    X(DT_ServerAnimationData, DT_ServerAnimationData) \
    X(C_ShadowControl, DT_ShadowControl) \
    X(C_SmokeGrenade, DT_SmokeGrenade) \
    X(C_SmokeStack, DT_SmokeStack) \
    X(C_SmokeTrail, DT_SmokeTrail) \
    X(C_SporeExplosion, DT_SporeExplosion) \
    X(C_SporeTrail, DT_SporeTrail) \
    X(C_SpotlightEnd, DT_SpotlightEnd) \
    X(C_Sprite, DT_Sprite) \
    X(C_SpriteTrail, DT_SpriteTrail) \
    X(C_SteamJet, DT_SteamJet) \
    X(C_Sun, DT_Sun) \
    X(C_TEArmorRicochet, DT_TEArmorRicochet) \
    X(C_TEBSPDecal, DT_TEBSPDecal) \
    X(C_TEBeamEntPoint, DT_TEBeamEntPoint) \
    X(C_TEBeamEnts, DT_TEBeamEnts) \
    X(C_TEBeamFollow, DT_TEBeamFollow) \
    X(C_TEBeamLaser, DT_TEBeamLaser) \
    X(C_TEBeamPoints, DT_TEBeamPoints) \
    X(C_TEBeamRing, DT_TEBeamRing) \
    X(C_TEBeamRingPoint, DT_TEBeamRingPoint) \
    X(C_TEBeamSpline, DT_TEBeamSpline) \
    X(C_TEBloodSprite, DT_TEBloodSprite) \
    X(C_TEBloodStream, DT_TEBloodStream) \
    X(C_TEBreakModel, DT_TEBreakModel) \
    X(C_TEBubbleTrail, DT_TEBubbleTrail) \
    X(C_TEBubbles, DT_TEBubbles) \
    X(C_TEDecal, DT_TEDecal) \
    X(C_TEDust, DT_TEDust) \
    X(C_TEDynamicLight, DT_TEDynamicLight) \
    X(C_TEEffectDispatch, DT_TEEffectDispatch) \
    X(C_TEEnergySplash, DT_TEEnergySplash) \
    X(C_TEExplosion, DT_TEExplosion) \
    X(C_TEFireBullets, DT_TEFireBullets) \
    X(C_TEFizz, DT_TEFizz) \
    X(C_TEFootprintDecal, DT_TEFootprintDecal) \
    X(C_TEGaussExplosion, DT_TEGaussExplosion) \
    X(C_TEGlowSprite, DT_TEGlowSprite) \
    X(C_TEImpact, DT_TEImpact) \
    X(C_TEKillPlayerAttachments, DT_TEKillPlayerAttachments) \
    X(C_TELargeFunnel, DT_TELargeFunnel) \
    X(C_TEMetalSparks, DT_TEMetalSparks) \
    X(C_TEMuzzleFlash, DT_TEMuzzleFlash) \
    X(C_TEParticleSystem, DT_TEParticleSystem) \
    X(C_TEPhysicsProp, DT_TEPhysicsProp) \
    X(C_TEPlantBomb, DT_TEPlantBomb) \
    X(C_TEPlayerAnimEvent, DT_TEPlayerAnimEvent) \
    X(C_TEPlayerDecal, DT_TEPlayerDecal) \
    X(C_TEProjectedDecal, DT_TEProjectedDecal) \
    X(C_TERadioIcon, DT_TERadioIcon) \
    X(C_TEShatterSurface, DT_TEShatterSurface) \
    X(C_TEShowLine, DT_TEShowLine) \
    X(C_TESmoke, DT_TESmoke) \
    X(C_TESparks, DT_TESparks) \
    X(C_TESprite, DT_TESprite) \
    X(C_TESpriteSpray, DT_TESpriteSpray) \
    X(C_TEWorldDecal, DT_TEWorldDecal) \
    X(C_Team, DT_Team) \
    X(C_Tesla, DT_Tesla) \
    X(C_TestTraceline, DT_TestTraceline) \
    X(C_VGuiScreen, DT_VGuiScreen) \
    X(C_WaterBullet, DT_WaterBullet) \
    X(C_WaterLODControl, DT_WaterLODControl) \
    X(C_AK47, DT_WeaponAK47) \
    X(C_WeaponAWP, DT_WeaponAWP) \
    X(C_WeaponAug, DT_WeaponAug) \
    X(C_C4, DT_WeaponC4) \
    X(C_WeaponCSBase, DT_WeaponCSBase) \
    X(C_WeaponCSBaseGun, DT_WeaponCSBaseGun) \
    X(C_WeaponCubemap, DT_WeaponCubemap) \
    X(C_WeaponCycler, DT_WeaponCycler) \
    X(C_DEagle, DT_WeaponDEagle) \
    X(C_WeaponElite, DT_WeaponElite) \
    X(C_WeaponFamas, DT_WeaponFamas) \
    X(C_WeaponFiveSeven, DT_WeaponFiveSeven) \
    X(C_WeaponG3SG1, DT_WeaponG3SG1) \
    X(C_WeaponGalil, DT_WeaponGalil) \
    X(C_WeaponGlock, DT_WeaponGlock) \
    X(C_Knife, DT_WeaponKnife) \
    X(C_WeaponM249, DT_WeaponM249) \
    X(C_WeaponM3, DT_WeaponM3) \
    X(C_WeaponM4A1, DT_WeaponM4A1) \
    X(C_WeaponMAC10, DT_WeaponMAC10) \
    X(C_WeaponMP5Navy, DT_WeaponMP5Navy) \
    X(C_WeaponP228, DT_WeaponP228) \
    X(C_WeaponP90, DT_WeaponP90) \
    X(C_WeaponSG550, DT_WeaponSG550) \
    X(C_WeaponSG552, DT_WeaponSG552) \
    X(C_WeaponScout, DT_WeaponScout) \
    X(C_WeaponTMP, DT_WeaponTMP) \
    X(C_WeaponUMP45, DT_WeaponUMP45) \
    X(C_WeaponUSP, DT_WeaponUSP) \
    X(C_WeaponXM1014, DT_WeaponXM1014) \
    X(C_World, DT_World)
