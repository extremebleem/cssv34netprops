// Forward declarations of the netvar classes, generated from the receive tables of the game, do not edit.
#pragma once

namespace Netvar {

template <class Self, class Base> struct DT_AI_BaseNPC;
template <class Self, class Base> struct DT_AnimTimeMustBeFirst;
template <class Self, class Base> struct DT_Animationlayer;
template <class Self, class Base> struct DT_BCCLocalPlayerExclusive;
template <class Self, class Base> struct DT_BaseAnimating;
template <class Self, class Base> struct DT_BaseAnimatingOverlay;
template <class Self, class Base> struct DT_BaseBeam;
template <class Self, class Base> struct DT_BaseCSGrenade;
template <class Self, class Base> struct DT_BaseCSGrenadeProjectile;
template <class Self, class Base> struct DT_BaseCombatCharacter;
template <class Self, class Base> struct DT_BaseCombatWeapon;
template <class Self, class Base> struct DT_BaseDoor;
template <class Self, class Base> struct DT_BaseEntity;
template <class Self, class Base> struct DT_BaseFlex;
template <class Self, class Base> struct DT_BaseGrenade;
template <class Self, class Base> struct DT_BaseParticleEntity;
template <class Self, class Base> struct DT_BasePlayer;
template <class Self, class Base> struct DT_BasePropDoor;
template <class Self, class Base> struct DT_BaseTempEntity;
template <class Self, class Base> struct DT_BaseViewModel;
template <class Self, class Base> struct DT_Beam;
template <class Self, class Base> struct DT_BeamPredictableId;
template <class Self, class Base> struct DT_BoneFollower;
template <class Self, class Base> struct DT_BreakableProp;
template <class Self, class Base> struct DT_BreakableSurface;
template <class Self, class Base> struct DT_CFish;
template <class Self, class Base> struct DT_CHostage;
template <class Self, class Base> struct DT_CSGameRules;
template <class Self, class Base> struct DT_CSGameRulesProxy;
template <class Self, class Base> struct DT_CSLocalPlayerExclusive;
template <class Self, class Base> struct DT_CSNonLocalPlayerExclusive;
template <class Self, class Base> struct DT_CSPlayer;
template <class Self, class Base> struct DT_CSPlayerResource;
template <class Self, class Base> struct DT_CSRagdoll;
template <class Self, class Base> struct DT_CSTeam;
template <class Self, class Base> struct DT_CollisionProperty;
template <class Self, class Base> struct DT_ColorCorrection;
template <class Self, class Base> struct DT_ColorCorrectionVolume;
template <class Self, class Base> struct DT_DetailController;
template <class Self, class Base> struct DT_DynamicLight;
template <class Self, class Base> struct DT_DynamicProp;
template <class Self, class Base> struct DT_EffectData;
template <class Self, class Base> struct DT_Embers;
template <class Self, class Base> struct DT_EntityDissolve;
template <class Self, class Base> struct DT_EntityFlame;
template <class Self, class Base> struct DT_EntityParticleTrail;
template <class Self, class Base> struct DT_EntityParticleTrailInfo;
template <class Self, class Base> struct DT_EnvParticleScript;
template <class Self, class Base> struct DT_EnvProjectedTexture;
template <class Self, class Base> struct DT_EnvScreenEffect;
template <class Self, class Base> struct DT_EnvScreenOverlay;
template <class Self, class Base> struct DT_EnvTonemapController;
template <class Self, class Base> struct DT_EnvWind;
template <class Self, class Base> struct DT_EnvWindShared;
template <class Self, class Base> struct DT_FireSmoke;
template <class Self, class Base> struct DT_FireTrail;
template <class Self, class Base> struct DT_Flashbang;
template <class Self, class Base> struct DT_FootstepControl;
template <class Self, class Base> struct DT_FuncAreaPortalWindow;
template <class Self, class Base> struct DT_FuncConveyor;
template <class Self, class Base> struct DT_FuncLadder;
template <class Self, class Base> struct DT_FuncMonitor;
template <class Self, class Base> struct DT_FuncOccluder;
template <class Self, class Base> struct DT_FuncSmokeVolume;
template <class Self, class Base> struct DT_FuncTrackTrain;
template <class Self, class Base> struct DT_Func_Dust;
template <class Self, class Base> struct DT_Func_LOD;
template <class Self, class Base> struct DT_GameRulesProxy;
template <class Self, class Base> struct DT_HEGrenade;
template <class Self, class Base> struct DT_HandleTest;
template <class Self, class Base> struct DT_InfoLadderDismount;
template <class Self, class Base> struct DT_InfoLightingRelative;
template <class Self, class Base> struct DT_LightGlow;
template <class Self, class Base> struct DT_Local;
template <class Self, class Base> struct DT_LocalActiveWeaponData;
template <class Self, class Base> struct DT_LocalActiveWeaponKnifeData;
template <class Self, class Base> struct DT_LocalPlayerExclusive;
template <class Self, class Base> struct DT_LocalWeaponData;
template <class Self, class Base> struct DT_MaterialModifyControl;
template <class Self, class Base> struct DT_MovieExplosion;
template <class Self, class Base> struct DT_OverlayVars;
template <class Self, class Base> struct DT_ParticleFire;
template <class Self, class Base> struct DT_ParticleSmokeGrenade;
template <class Self, class Base> struct DT_PhysBox;
template <class Self, class Base> struct DT_PhysBoxMultiplayer;
template <class Self, class Base> struct DT_PhysMagnet;
template <class Self, class Base> struct DT_PhysicsProp;
template <class Self, class Base> struct DT_PhysicsPropMultiplayer;
template <class Self, class Base> struct DT_PlantedC4;
template <class Self, class Base> struct DT_Plasma;
template <class Self, class Base> struct DT_PlayerResource;
template <class Self, class Base> struct DT_PlayerState;
template <class Self, class Base> struct DT_PointCamera;
template <class Self, class Base> struct DT_PointCommentaryNode;
template <class Self, class Base> struct DT_PoseController;
template <class Self, class Base> struct DT_Precipitation;
template <class Self, class Base> struct DT_PredictableId;
template <class Self, class Base> struct DT_PredictedViewModel;
template <class Self, class Base> struct DT_PropJeep;
template <class Self, class Base> struct DT_PropVehicleDriveable;
template <class Self, class Base> struct DT_ProxyToggle;
template <class Self, class Base> struct DT_ProxyToggle_ProxiedData;
template <class Self, class Base> struct DT_QuadraticBeam;
template <class Self, class Base> struct DT_Ragdoll;
template <class Self, class Base> struct DT_RagdollManager;
template <class Self, class Base> struct DT_Ragdoll_Attached;
template <class Self, class Base> struct DT_RocketTrail;
template <class Self, class Base> struct DT_RopeKeyframe;
template <class Self, class Base> struct DT_SceneEntity;
template <class Self, class Base> struct DT_ServerAnimationData;
template <class Self, class Base> struct DT_ShadowControl;
template <class Self, class Base> struct DT_SmokeGrenade;
template <class Self, class Base> struct DT_SmokeStack;
template <class Self, class Base> struct DT_SmokeTrail;
template <class Self, class Base> struct DT_SporeExplosion;
template <class Self, class Base> struct DT_SporeTrail;
template <class Self, class Base> struct DT_SpotlightEnd;
template <class Self, class Base> struct DT_Sprite;
template <class Self, class Base> struct DT_SpriteTrail;
template <class Self, class Base> struct DT_SteamJet;
template <class Self, class Base> struct DT_Sun;
template <class Self, class Base> struct DT_TEArmorRicochet;
template <class Self, class Base> struct DT_TEBSPDecal;
template <class Self, class Base> struct DT_TEBeamEntPoint;
template <class Self, class Base> struct DT_TEBeamEnts;
template <class Self, class Base> struct DT_TEBeamFollow;
template <class Self, class Base> struct DT_TEBeamLaser;
template <class Self, class Base> struct DT_TEBeamPoints;
template <class Self, class Base> struct DT_TEBeamRing;
template <class Self, class Base> struct DT_TEBeamRingPoint;
template <class Self, class Base> struct DT_TEBeamSpline;
template <class Self, class Base> struct DT_TEBloodSprite;
template <class Self, class Base> struct DT_TEBloodStream;
template <class Self, class Base> struct DT_TEBreakModel;
template <class Self, class Base> struct DT_TEBubbleTrail;
template <class Self, class Base> struct DT_TEBubbles;
template <class Self, class Base> struct DT_TEDecal;
template <class Self, class Base> struct DT_TEDust;
template <class Self, class Base> struct DT_TEDynamicLight;
template <class Self, class Base> struct DT_TEEffectDispatch;
template <class Self, class Base> struct DT_TEEnergySplash;
template <class Self, class Base> struct DT_TEExplosion;
template <class Self, class Base> struct DT_TEFireBullets;
template <class Self, class Base> struct DT_TEFizz;
template <class Self, class Base> struct DT_TEFootprintDecal;
template <class Self, class Base> struct DT_TEGaussExplosion;
template <class Self, class Base> struct DT_TEGlowSprite;
template <class Self, class Base> struct DT_TEImpact;
template <class Self, class Base> struct DT_TEKillPlayerAttachments;
template <class Self, class Base> struct DT_TELargeFunnel;
template <class Self, class Base> struct DT_TEMetalSparks;
template <class Self, class Base> struct DT_TEMuzzleFlash;
template <class Self, class Base> struct DT_TEParticleSystem;
template <class Self, class Base> struct DT_TEPhysicsProp;
template <class Self, class Base> struct DT_TEPlantBomb;
template <class Self, class Base> struct DT_TEPlayerAnimEvent;
template <class Self, class Base> struct DT_TEPlayerDecal;
template <class Self, class Base> struct DT_TEProjectedDecal;
template <class Self, class Base> struct DT_TERadioIcon;
template <class Self, class Base> struct DT_TEShatterSurface;
template <class Self, class Base> struct DT_TEShowLine;
template <class Self, class Base> struct DT_TESmoke;
template <class Self, class Base> struct DT_TESparks;
template <class Self, class Base> struct DT_TESprite;
template <class Self, class Base> struct DT_TESpriteSpray;
template <class Self, class Base> struct DT_TEWorldDecal;
template <class Self, class Base> struct DT_Team;
template <class Self, class Base> struct DT_Tesla;
template <class Self, class Base> struct DT_TestTraceline;
template <class Self, class Base> struct DT_VGuiScreen;
template <class Self, class Base> struct DT_WaterBullet;
template <class Self, class Base> struct DT_WaterLODControl;
template <class Self, class Base> struct DT_WeaponAK47;
template <class Self, class Base> struct DT_WeaponAWP;
template <class Self, class Base> struct DT_WeaponAug;
template <class Self, class Base> struct DT_WeaponC4;
template <class Self, class Base> struct DT_WeaponCSBase;
template <class Self, class Base> struct DT_WeaponCSBaseGun;
template <class Self, class Base> struct DT_WeaponCubemap;
template <class Self, class Base> struct DT_WeaponCycler;
template <class Self, class Base> struct DT_WeaponDEagle;
template <class Self, class Base> struct DT_WeaponElite;
template <class Self, class Base> struct DT_WeaponFamas;
template <class Self, class Base> struct DT_WeaponFiveSeven;
template <class Self, class Base> struct DT_WeaponG3SG1;
template <class Self, class Base> struct DT_WeaponGalil;
template <class Self, class Base> struct DT_WeaponGlock;
template <class Self, class Base> struct DT_WeaponKnife;
template <class Self, class Base> struct DT_WeaponM249;
template <class Self, class Base> struct DT_WeaponM3;
template <class Self, class Base> struct DT_WeaponM4A1;
template <class Self, class Base> struct DT_WeaponMAC10;
template <class Self, class Base> struct DT_WeaponMP5Navy;
template <class Self, class Base> struct DT_WeaponP228;
template <class Self, class Base> struct DT_WeaponP90;
template <class Self, class Base> struct DT_WeaponSG550;
template <class Self, class Base> struct DT_WeaponSG552;
template <class Self, class Base> struct DT_WeaponScout;
template <class Self, class Base> struct DT_WeaponTMP;
template <class Self, class Base> struct DT_WeaponUMP45;
template <class Self, class Base> struct DT_WeaponUSP;
template <class Self, class Base> struct DT_WeaponXM1014;
template <class Self, class Base> struct DT_World;

} // namespace Netvar

// Every table once: NETVAR_FOR_EACH_TABLE(X) calls X(table) for each class.
#define NETVAR_FOR_EACH_TABLE(X) \
    X(DT_AI_BaseNPC) \
    X(DT_AnimTimeMustBeFirst) \
    X(DT_Animationlayer) \
    X(DT_BCCLocalPlayerExclusive) \
    X(DT_BaseAnimating) \
    X(DT_BaseAnimatingOverlay) \
    X(DT_BaseBeam) \
    X(DT_BaseCSGrenade) \
    X(DT_BaseCSGrenadeProjectile) \
    X(DT_BaseCombatCharacter) \
    X(DT_BaseCombatWeapon) \
    X(DT_BaseDoor) \
    X(DT_BaseEntity) \
    X(DT_BaseFlex) \
    X(DT_BaseGrenade) \
    X(DT_BaseParticleEntity) \
    X(DT_BasePlayer) \
    X(DT_BasePropDoor) \
    X(DT_BaseTempEntity) \
    X(DT_BaseViewModel) \
    X(DT_Beam) \
    X(DT_BeamPredictableId) \
    X(DT_BoneFollower) \
    X(DT_BreakableProp) \
    X(DT_BreakableSurface) \
    X(DT_CFish) \
    X(DT_CHostage) \
    X(DT_CSGameRules) \
    X(DT_CSGameRulesProxy) \
    X(DT_CSLocalPlayerExclusive) \
    X(DT_CSNonLocalPlayerExclusive) \
    X(DT_CSPlayer) \
    X(DT_CSPlayerResource) \
    X(DT_CSRagdoll) \
    X(DT_CSTeam) \
    X(DT_CollisionProperty) \
    X(DT_ColorCorrection) \
    X(DT_ColorCorrectionVolume) \
    X(DT_DetailController) \
    X(DT_DynamicLight) \
    X(DT_DynamicProp) \
    X(DT_EffectData) \
    X(DT_Embers) \
    X(DT_EntityDissolve) \
    X(DT_EntityFlame) \
    X(DT_EntityParticleTrail) \
    X(DT_EntityParticleTrailInfo) \
    X(DT_EnvParticleScript) \
    X(DT_EnvProjectedTexture) \
    X(DT_EnvScreenEffect) \
    X(DT_EnvScreenOverlay) \
    X(DT_EnvTonemapController) \
    X(DT_EnvWind) \
    X(DT_EnvWindShared) \
    X(DT_FireSmoke) \
    X(DT_FireTrail) \
    X(DT_Flashbang) \
    X(DT_FootstepControl) \
    X(DT_FuncAreaPortalWindow) \
    X(DT_FuncConveyor) \
    X(DT_FuncLadder) \
    X(DT_FuncMonitor) \
    X(DT_FuncOccluder) \
    X(DT_FuncSmokeVolume) \
    X(DT_FuncTrackTrain) \
    X(DT_Func_Dust) \
    X(DT_Func_LOD) \
    X(DT_GameRulesProxy) \
    X(DT_HEGrenade) \
    X(DT_HandleTest) \
    X(DT_InfoLadderDismount) \
    X(DT_InfoLightingRelative) \
    X(DT_LightGlow) \
    X(DT_Local) \
    X(DT_LocalActiveWeaponData) \
    X(DT_LocalActiveWeaponKnifeData) \
    X(DT_LocalPlayerExclusive) \
    X(DT_LocalWeaponData) \
    X(DT_MaterialModifyControl) \
    X(DT_MovieExplosion) \
    X(DT_OverlayVars) \
    X(DT_ParticleFire) \
    X(DT_ParticleSmokeGrenade) \
    X(DT_PhysBox) \
    X(DT_PhysBoxMultiplayer) \
    X(DT_PhysMagnet) \
    X(DT_PhysicsProp) \
    X(DT_PhysicsPropMultiplayer) \
    X(DT_PlantedC4) \
    X(DT_Plasma) \
    X(DT_PlayerResource) \
    X(DT_PlayerState) \
    X(DT_PointCamera) \
    X(DT_PointCommentaryNode) \
    X(DT_PoseController) \
    X(DT_Precipitation) \
    X(DT_PredictableId) \
    X(DT_PredictedViewModel) \
    X(DT_PropJeep) \
    X(DT_PropVehicleDriveable) \
    X(DT_ProxyToggle) \
    X(DT_ProxyToggle_ProxiedData) \
    X(DT_QuadraticBeam) \
    X(DT_Ragdoll) \
    X(DT_RagdollManager) \
    X(DT_Ragdoll_Attached) \
    X(DT_RocketTrail) \
    X(DT_RopeKeyframe) \
    X(DT_SceneEntity) \
    X(DT_ServerAnimationData) \
    X(DT_ShadowControl) \
    X(DT_SmokeGrenade) \
    X(DT_SmokeStack) \
    X(DT_SmokeTrail) \
    X(DT_SporeExplosion) \
    X(DT_SporeTrail) \
    X(DT_SpotlightEnd) \
    X(DT_Sprite) \
    X(DT_SpriteTrail) \
    X(DT_SteamJet) \
    X(DT_Sun) \
    X(DT_TEArmorRicochet) \
    X(DT_TEBSPDecal) \
    X(DT_TEBeamEntPoint) \
    X(DT_TEBeamEnts) \
    X(DT_TEBeamFollow) \
    X(DT_TEBeamLaser) \
    X(DT_TEBeamPoints) \
    X(DT_TEBeamRing) \
    X(DT_TEBeamRingPoint) \
    X(DT_TEBeamSpline) \
    X(DT_TEBloodSprite) \
    X(DT_TEBloodStream) \
    X(DT_TEBreakModel) \
    X(DT_TEBubbleTrail) \
    X(DT_TEBubbles) \
    X(DT_TEDecal) \
    X(DT_TEDust) \
    X(DT_TEDynamicLight) \
    X(DT_TEEffectDispatch) \
    X(DT_TEEnergySplash) \
    X(DT_TEExplosion) \
    X(DT_TEFireBullets) \
    X(DT_TEFizz) \
    X(DT_TEFootprintDecal) \
    X(DT_TEGaussExplosion) \
    X(DT_TEGlowSprite) \
    X(DT_TEImpact) \
    X(DT_TEKillPlayerAttachments) \
    X(DT_TELargeFunnel) \
    X(DT_TEMetalSparks) \
    X(DT_TEMuzzleFlash) \
    X(DT_TEParticleSystem) \
    X(DT_TEPhysicsProp) \
    X(DT_TEPlantBomb) \
    X(DT_TEPlayerAnimEvent) \
    X(DT_TEPlayerDecal) \
    X(DT_TEProjectedDecal) \
    X(DT_TERadioIcon) \
    X(DT_TEShatterSurface) \
    X(DT_TEShowLine) \
    X(DT_TESmoke) \
    X(DT_TESparks) \
    X(DT_TESprite) \
    X(DT_TESpriteSpray) \
    X(DT_TEWorldDecal) \
    X(DT_Team) \
    X(DT_Tesla) \
    X(DT_TestTraceline) \
    X(DT_VGuiScreen) \
    X(DT_WaterBullet) \
    X(DT_WaterLODControl) \
    X(DT_WeaponAK47) \
    X(DT_WeaponAWP) \
    X(DT_WeaponAug) \
    X(DT_WeaponC4) \
    X(DT_WeaponCSBase) \
    X(DT_WeaponCSBaseGun) \
    X(DT_WeaponCubemap) \
    X(DT_WeaponCycler) \
    X(DT_WeaponDEagle) \
    X(DT_WeaponElite) \
    X(DT_WeaponFamas) \
    X(DT_WeaponFiveSeven) \
    X(DT_WeaponG3SG1) \
    X(DT_WeaponGalil) \
    X(DT_WeaponGlock) \
    X(DT_WeaponKnife) \
    X(DT_WeaponM249) \
    X(DT_WeaponM3) \
    X(DT_WeaponM4A1) \
    X(DT_WeaponMAC10) \
    X(DT_WeaponMP5Navy) \
    X(DT_WeaponP228) \
    X(DT_WeaponP90) \
    X(DT_WeaponSG550) \
    X(DT_WeaponSG552) \
    X(DT_WeaponScout) \
    X(DT_WeaponTMP) \
    X(DT_WeaponUMP45) \
    X(DT_WeaponUSP) \
    X(DT_WeaponXM1014) \
    X(DT_World)
