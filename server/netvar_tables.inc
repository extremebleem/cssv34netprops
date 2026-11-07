// Forward declarations of the netvar classes, generated from the send tables of the server, do not edit.
#pragma once

namespace NetvarServer {

template <class Self, class Base> struct CAI_BaseNPC;
template <class Self, class Base> struct DT_AnimTimeMustBeFirst;
template <class Self, class Base> struct DT_Animationlayer;
template <class Self, class Base> struct DT_BCCLocalPlayerExclusive;
template <class Self, class Base> struct CBaseAnimating;
template <class Self, class Base> struct CBaseAnimatingOverlay;
template <class Self, class Base> struct CTEBaseBeam;
template <class Self, class Base> struct CBaseCSGrenade;
template <class Self, class Base> struct CBaseCSGrenadeProjectile;
template <class Self, class Base> struct CBaseCombatCharacter;
template <class Self, class Base> struct CBaseCombatWeapon;
template <class Self, class Base> struct CBaseDoor;
template <class Self, class Base> struct CBaseEntity;
template <class Self, class Base> struct CBaseFlex;
template <class Self, class Base> struct CBaseGrenade;
template <class Self, class Base> struct CBaseParticleEntity;
template <class Self, class Base> struct CBasePlayer;
template <class Self, class Base> struct CBasePropDoor;
template <class Self, class Base> struct CBaseTempEntity;
template <class Self, class Base> struct CBaseViewModel;
template <class Self, class Base> struct CBeam;
template <class Self, class Base> struct DT_BeamPredictableId;
template <class Self, class Base> struct CBoneFollower;
template <class Self, class Base> struct CBreakableProp;
template <class Self, class Base> struct CBreakableSurface;
template <class Self, class Base> struct CFish;
template <class Self, class Base> struct CHostage;
template <class Self, class Base> struct DT_CSGameRules;
template <class Self, class Base> struct CCSGameRulesProxy;
template <class Self, class Base> struct DT_CSLocalPlayerExclusive;
template <class Self, class Base> struct DT_CSNonLocalPlayerExclusive;
template <class Self, class Base> struct CCSPlayer;
template <class Self, class Base> struct CCSPlayerResource;
template <class Self, class Base> struct CCSRagdoll;
template <class Self, class Base> struct CCSTeam;
template <class Self, class Base> struct DT_CollisionProperty;
template <class Self, class Base> struct CColorCorrection;
template <class Self, class Base> struct CColorCorrectionVolume;
template <class Self, class Base> struct CEnvDetailController;
template <class Self, class Base> struct CDynamicLight;
template <class Self, class Base> struct CDynamicProp;
template <class Self, class Base> struct DT_EffectData;
template <class Self, class Base> struct CEmbers;
template <class Self, class Base> struct CEntityDissolve;
template <class Self, class Base> struct CEntityFlame;
template <class Self, class Base> struct CEntityParticleTrail;
template <class Self, class Base> struct DT_EntityParticleTrailInfo;
template <class Self, class Base> struct CEnvParticleScript;
template <class Self, class Base> struct CEnvProjectedTexture;
template <class Self, class Base> struct CEnvScreenEffect;
template <class Self, class Base> struct CEnvScreenOverlay;
template <class Self, class Base> struct CEnvTonemapController;
template <class Self, class Base> struct CEnvWind;
template <class Self, class Base> struct DT_EnvWindShared;
template <class Self, class Base> struct CFireSmoke;
template <class Self, class Base> struct CFlashbang;
template <class Self, class Base> struct CFootstepControl;
template <class Self, class Base> struct CFuncAreaPortalWindow;
template <class Self, class Base> struct CFuncConveyor;
template <class Self, class Base> struct CFuncLadder;
template <class Self, class Base> struct CFuncMonitor;
template <class Self, class Base> struct CFuncOccluder;
template <class Self, class Base> struct CFuncSmokeVolume;
template <class Self, class Base> struct CFuncTrackTrain;
template <class Self, class Base> struct CFunc_Dust;
template <class Self, class Base> struct CFunc_LOD;
template <class Self, class Base> struct CGameRulesProxy;
template <class Self, class Base> struct CHEGrenade;
template <class Self, class Base> struct CHandleTest;
template <class Self, class Base> struct CInfoLadderDismount;
template <class Self, class Base> struct CInfoLightingRelative;
template <class Self, class Base> struct CLightGlow;
template <class Self, class Base> struct DT_Local;
template <class Self, class Base> struct DT_LocalActiveWeaponData;
template <class Self, class Base> struct DT_LocalActiveWeaponKnifeData;
template <class Self, class Base> struct DT_LocalPlayerExclusive;
template <class Self, class Base> struct DT_LocalWeaponData;
template <class Self, class Base> struct CMaterialModifyControl;
template <class Self, class Base> struct MovieExplosion;
template <class Self, class Base> struct DT_OverlayVars;
template <class Self, class Base> struct CParticleFire;
template <class Self, class Base> struct ParticleSmokeGrenade;
template <class Self, class Base> struct CPhysBox;
template <class Self, class Base> struct CPhysBoxMultiplayer;
template <class Self, class Base> struct CPhysMagnet;
template <class Self, class Base> struct CPhysicsProp;
template <class Self, class Base> struct CPhysicsPropMultiplayer;
template <class Self, class Base> struct CPlantedC4;
template <class Self, class Base> struct CPlasma;
template <class Self, class Base> struct CPlayerResource;
template <class Self, class Base> struct DT_PlayerState;
template <class Self, class Base> struct CPointCamera;
template <class Self, class Base> struct CPointCommentaryNode;
template <class Self, class Base> struct CPoseController;
template <class Self, class Base> struct CPrecipitation;
template <class Self, class Base> struct DT_PredictableId;
template <class Self, class Base> struct CPredictedViewModel;
template <class Self, class Base> struct CPropJeep;
template <class Self, class Base> struct CPropVehicleDriveable;
template <class Self, class Base> struct CTest_ProxyToggle_Networkable;
template <class Self, class Base> struct DT_ProxyToggle_ProxiedData;
template <class Self, class Base> struct CEnvQuadraticBeam;
template <class Self, class Base> struct CRagdollProp;
template <class Self, class Base> struct CRagdollManager;
template <class Self, class Base> struct CRagdollPropAttached;
template <class Self, class Base> struct CRopeKeyframe;
template <class Self, class Base> struct CSceneEntity;
template <class Self, class Base> struct DT_ServerAnimationData;
template <class Self, class Base> struct CShadowControl;
template <class Self, class Base> struct CSmokeGrenade;
template <class Self, class Base> struct CSmokeStack;
template <class Self, class Base> struct CSpotlightEnd;
template <class Self, class Base> struct CSprite;
template <class Self, class Base> struct CSpriteTrail;
template <class Self, class Base> struct CSteamJet;
template <class Self, class Base> struct CSun;
template <class Self, class Base> struct CTEArmorRicochet;
template <class Self, class Base> struct CTEBSPDecal;
template <class Self, class Base> struct CTEBeamEntPoint;
template <class Self, class Base> struct CTEBeamEnts;
template <class Self, class Base> struct CTEBeamFollow;
template <class Self, class Base> struct CTEBeamLaser;
template <class Self, class Base> struct CTEBeamPoints;
template <class Self, class Base> struct CTEBeamRing;
template <class Self, class Base> struct CTEBeamRingPoint;
template <class Self, class Base> struct CTEBeamSpline;
template <class Self, class Base> struct CTEBloodSprite;
template <class Self, class Base> struct CTEBloodStream;
template <class Self, class Base> struct CTEBreakModel;
template <class Self, class Base> struct CTEBubbleTrail;
template <class Self, class Base> struct CTEBubbles;
template <class Self, class Base> struct CTEDecal;
template <class Self, class Base> struct CTEDust;
template <class Self, class Base> struct CTEDynamicLight;
template <class Self, class Base> struct CTEEffectDispatch;
template <class Self, class Base> struct CTEEnergySplash;
template <class Self, class Base> struct CTEExplosion;
template <class Self, class Base> struct CTEFireBullets;
template <class Self, class Base> struct CTEFizz;
template <class Self, class Base> struct CTEFootprintDecal;
template <class Self, class Base> struct CTEGaussExplosion;
template <class Self, class Base> struct CTEGlowSprite;
template <class Self, class Base> struct CTEImpact;
template <class Self, class Base> struct CTEKillPlayerAttachments;
template <class Self, class Base> struct CTELargeFunnel;
template <class Self, class Base> struct CTEMetalSparks;
template <class Self, class Base> struct CTEMuzzleFlash;
template <class Self, class Base> struct CTEParticleSystem;
template <class Self, class Base> struct CTEPhysicsProp;
template <class Self, class Base> struct CTEPlantBomb;
template <class Self, class Base> struct CTEPlayerAnimEvent;
template <class Self, class Base> struct CTEPlayerDecal;
template <class Self, class Base> struct CTEProjectedDecal;
template <class Self, class Base> struct CTERadioIcon;
template <class Self, class Base> struct CTEShatterSurface;
template <class Self, class Base> struct CTEShowLine;
template <class Self, class Base> struct CTESmoke;
template <class Self, class Base> struct CTESparks;
template <class Self, class Base> struct CTESprite;
template <class Self, class Base> struct CTESpriteSpray;
template <class Self, class Base> struct CTEWorldDecal;
template <class Self, class Base> struct CTeam;
template <class Self, class Base> struct CTesla;
template <class Self, class Base> struct CTestTraceline;
template <class Self, class Base> struct CVGuiScreen;
template <class Self, class Base> struct CWorld;
template <class Self, class Base> struct CWaterBullet;
template <class Self, class Base> struct CWaterLODControl;
template <class Self, class Base> struct CAK47;
template <class Self, class Base> struct CWeaponAWP;
template <class Self, class Base> struct CWeaponAug;
template <class Self, class Base> struct CC4;
template <class Self, class Base> struct CWeaponCSBase;
template <class Self, class Base> struct CWeaponCSBaseGun;
template <class Self, class Base> struct CWeaponCubemap;
template <class Self, class Base> struct CWeaponCycler;
template <class Self, class Base> struct CDEagle;
template <class Self, class Base> struct CWeaponElite;
template <class Self, class Base> struct CWeaponFamas;
template <class Self, class Base> struct CWeaponFiveSeven;
template <class Self, class Base> struct CWeaponG3SG1;
template <class Self, class Base> struct CWeaponGalil;
template <class Self, class Base> struct CWeaponGlock;
template <class Self, class Base> struct CKnife;
template <class Self, class Base> struct CWeaponM249;
template <class Self, class Base> struct CWeaponM3;
template <class Self, class Base> struct CWeaponM4A1;
template <class Self, class Base> struct CWeaponMAC10;
template <class Self, class Base> struct CWeaponMP5Navy;
template <class Self, class Base> struct CWeaponP228;
template <class Self, class Base> struct CWeaponP90;
template <class Self, class Base> struct CWeaponSG550;
template <class Self, class Base> struct CWeaponSG552;
template <class Self, class Base> struct CWeaponScout;
template <class Self, class Base> struct CWeaponTMP;
template <class Self, class Base> struct CWeaponUMP45;
template <class Self, class Base> struct CWeaponUSP;
template <class Self, class Base> struct CWeaponXM1014;
template <class Self, class Base> struct _LPT_m_AnimOverlay_15;
template <class Self, class Base> struct _LPT_m_hActorList_16;
template <class Self, class Base> struct _ST_m_AnimOverlay_15;
template <class Self, class Base> struct _ST_m_hActorList_16;

} // namespace NetvarServer

// Every table once: NETVAR_FOR_EACH_SERVER_TABLE(X) calls X(Class, Table) for each class: the class to instantiate, and the table of the game that it is the class of.
#define NETVAR_FOR_EACH_SERVER_TABLE(X) \
    X(CAI_BaseNPC, DT_AI_BaseNPC) \
    X(DT_AnimTimeMustBeFirst, DT_AnimTimeMustBeFirst) \
    X(DT_Animationlayer, DT_Animationlayer) \
    X(DT_BCCLocalPlayerExclusive, DT_BCCLocalPlayerExclusive) \
    X(CBaseAnimating, DT_BaseAnimating) \
    X(CBaseAnimatingOverlay, DT_BaseAnimatingOverlay) \
    X(CTEBaseBeam, DT_BaseBeam) \
    X(CBaseCSGrenade, DT_BaseCSGrenade) \
    X(CBaseCSGrenadeProjectile, DT_BaseCSGrenadeProjectile) \
    X(CBaseCombatCharacter, DT_BaseCombatCharacter) \
    X(CBaseCombatWeapon, DT_BaseCombatWeapon) \
    X(CBaseDoor, DT_BaseDoor) \
    X(CBaseEntity, DT_BaseEntity) \
    X(CBaseFlex, DT_BaseFlex) \
    X(CBaseGrenade, DT_BaseGrenade) \
    X(CBaseParticleEntity, DT_BaseParticleEntity) \
    X(CBasePlayer, DT_BasePlayer) \
    X(CBasePropDoor, DT_BasePropDoor) \
    X(CBaseTempEntity, DT_BaseTempEntity) \
    X(CBaseViewModel, DT_BaseViewModel) \
    X(CBeam, DT_Beam) \
    X(DT_BeamPredictableId, DT_BeamPredictableId) \
    X(CBoneFollower, DT_BoneFollower) \
    X(CBreakableProp, DT_BreakableProp) \
    X(CBreakableSurface, DT_BreakableSurface) \
    X(CFish, DT_CFish) \
    X(CHostage, DT_CHostage) \
    X(DT_CSGameRules, DT_CSGameRules) \
    X(CCSGameRulesProxy, DT_CSGameRulesProxy) \
    X(DT_CSLocalPlayerExclusive, DT_CSLocalPlayerExclusive) \
    X(DT_CSNonLocalPlayerExclusive, DT_CSNonLocalPlayerExclusive) \
    X(CCSPlayer, DT_CSPlayer) \
    X(CCSPlayerResource, DT_CSPlayerResource) \
    X(CCSRagdoll, DT_CSRagdoll) \
    X(CCSTeam, DT_CSTeam) \
    X(DT_CollisionProperty, DT_CollisionProperty) \
    X(CColorCorrection, DT_ColorCorrection) \
    X(CColorCorrectionVolume, DT_ColorCorrectionVolume) \
    X(CEnvDetailController, DT_DetailController) \
    X(CDynamicLight, DT_DynamicLight) \
    X(CDynamicProp, DT_DynamicProp) \
    X(DT_EffectData, DT_EffectData) \
    X(CEmbers, DT_Embers) \
    X(CEntityDissolve, DT_EntityDissolve) \
    X(CEntityFlame, DT_EntityFlame) \
    X(CEntityParticleTrail, DT_EntityParticleTrail) \
    X(DT_EntityParticleTrailInfo, DT_EntityParticleTrailInfo) \
    X(CEnvParticleScript, DT_EnvParticleScript) \
    X(CEnvProjectedTexture, DT_EnvProjectedTexture) \
    X(CEnvScreenEffect, DT_EnvScreenEffect) \
    X(CEnvScreenOverlay, DT_EnvScreenOverlay) \
    X(CEnvTonemapController, DT_EnvTonemapController) \
    X(CEnvWind, DT_EnvWind) \
    X(DT_EnvWindShared, DT_EnvWindShared) \
    X(CFireSmoke, DT_FireSmoke) \
    X(CFlashbang, DT_Flashbang) \
    X(CFootstepControl, DT_FootstepControl) \
    X(CFuncAreaPortalWindow, DT_FuncAreaPortalWindow) \
    X(CFuncConveyor, DT_FuncConveyor) \
    X(CFuncLadder, DT_FuncLadder) \
    X(CFuncMonitor, DT_FuncMonitor) \
    X(CFuncOccluder, DT_FuncOccluder) \
    X(CFuncSmokeVolume, DT_FuncSmokeVolume) \
    X(CFuncTrackTrain, DT_FuncTrackTrain) \
    X(CFunc_Dust, DT_Func_Dust) \
    X(CFunc_LOD, DT_Func_LOD) \
    X(CGameRulesProxy, DT_GameRulesProxy) \
    X(CHEGrenade, DT_HEGrenade) \
    X(CHandleTest, DT_HandleTest) \
    X(CInfoLadderDismount, DT_InfoLadderDismount) \
    X(CInfoLightingRelative, DT_InfoLightingRelative) \
    X(CLightGlow, DT_LightGlow) \
    X(DT_Local, DT_Local) \
    X(DT_LocalActiveWeaponData, DT_LocalActiveWeaponData) \
    X(DT_LocalActiveWeaponKnifeData, DT_LocalActiveWeaponKnifeData) \
    X(DT_LocalPlayerExclusive, DT_LocalPlayerExclusive) \
    X(DT_LocalWeaponData, DT_LocalWeaponData) \
    X(CMaterialModifyControl, DT_MaterialModifyControl) \
    X(MovieExplosion, DT_MovieExplosion) \
    X(DT_OverlayVars, DT_OverlayVars) \
    X(CParticleFire, DT_ParticleFire) \
    X(ParticleSmokeGrenade, DT_ParticleSmokeGrenade) \
    X(CPhysBox, DT_PhysBox) \
    X(CPhysBoxMultiplayer, DT_PhysBoxMultiplayer) \
    X(CPhysMagnet, DT_PhysMagnet) \
    X(CPhysicsProp, DT_PhysicsProp) \
    X(CPhysicsPropMultiplayer, DT_PhysicsPropMultiplayer) \
    X(CPlantedC4, DT_PlantedC4) \
    X(CPlasma, DT_Plasma) \
    X(CPlayerResource, DT_PlayerResource) \
    X(DT_PlayerState, DT_PlayerState) \
    X(CPointCamera, DT_PointCamera) \
    X(CPointCommentaryNode, DT_PointCommentaryNode) \
    X(CPoseController, DT_PoseController) \
    X(CPrecipitation, DT_Precipitation) \
    X(DT_PredictableId, DT_PredictableId) \
    X(CPredictedViewModel, DT_PredictedViewModel) \
    X(CPropJeep, DT_PropJeep) \
    X(CPropVehicleDriveable, DT_PropVehicleDriveable) \
    X(CTest_ProxyToggle_Networkable, DT_ProxyToggle) \
    X(DT_ProxyToggle_ProxiedData, DT_ProxyToggle_ProxiedData) \
    X(CEnvQuadraticBeam, DT_QuadraticBeam) \
    X(CRagdollProp, DT_Ragdoll) \
    X(CRagdollManager, DT_RagdollManager) \
    X(CRagdollPropAttached, DT_Ragdoll_Attached) \
    X(CRopeKeyframe, DT_RopeKeyframe) \
    X(CSceneEntity, DT_SceneEntity) \
    X(DT_ServerAnimationData, DT_ServerAnimationData) \
    X(CShadowControl, DT_ShadowControl) \
    X(CSmokeGrenade, DT_SmokeGrenade) \
    X(CSmokeStack, DT_SmokeStack) \
    X(CSpotlightEnd, DT_SpotlightEnd) \
    X(CSprite, DT_Sprite) \
    X(CSpriteTrail, DT_SpriteTrail) \
    X(CSteamJet, DT_SteamJet) \
    X(CSun, DT_Sun) \
    X(CTEArmorRicochet, DT_TEArmorRicochet) \
    X(CTEBSPDecal, DT_TEBSPDecal) \
    X(CTEBeamEntPoint, DT_TEBeamEntPoint) \
    X(CTEBeamEnts, DT_TEBeamEnts) \
    X(CTEBeamFollow, DT_TEBeamFollow) \
    X(CTEBeamLaser, DT_TEBeamLaser) \
    X(CTEBeamPoints, DT_TEBeamPoints) \
    X(CTEBeamRing, DT_TEBeamRing) \
    X(CTEBeamRingPoint, DT_TEBeamRingPoint) \
    X(CTEBeamSpline, DT_TEBeamSpline) \
    X(CTEBloodSprite, DT_TEBloodSprite) \
    X(CTEBloodStream, DT_TEBloodStream) \
    X(CTEBreakModel, DT_TEBreakModel) \
    X(CTEBubbleTrail, DT_TEBubbleTrail) \
    X(CTEBubbles, DT_TEBubbles) \
    X(CTEDecal, DT_TEDecal) \
    X(CTEDust, DT_TEDust) \
    X(CTEDynamicLight, DT_TEDynamicLight) \
    X(CTEEffectDispatch, DT_TEEffectDispatch) \
    X(CTEEnergySplash, DT_TEEnergySplash) \
    X(CTEExplosion, DT_TEExplosion) \
    X(CTEFireBullets, DT_TEFireBullets) \
    X(CTEFizz, DT_TEFizz) \
    X(CTEFootprintDecal, DT_TEFootprintDecal) \
    X(CTEGaussExplosion, DT_TEGaussExplosion) \
    X(CTEGlowSprite, DT_TEGlowSprite) \
    X(CTEImpact, DT_TEImpact) \
    X(CTEKillPlayerAttachments, DT_TEKillPlayerAttachments) \
    X(CTELargeFunnel, DT_TELargeFunnel) \
    X(CTEMetalSparks, DT_TEMetalSparks) \
    X(CTEMuzzleFlash, DT_TEMuzzleFlash) \
    X(CTEParticleSystem, DT_TEParticleSystem) \
    X(CTEPhysicsProp, DT_TEPhysicsProp) \
    X(CTEPlantBomb, DT_TEPlantBomb) \
    X(CTEPlayerAnimEvent, DT_TEPlayerAnimEvent) \
    X(CTEPlayerDecal, DT_TEPlayerDecal) \
    X(CTEProjectedDecal, DT_TEProjectedDecal) \
    X(CTERadioIcon, DT_TERadioIcon) \
    X(CTEShatterSurface, DT_TEShatterSurface) \
    X(CTEShowLine, DT_TEShowLine) \
    X(CTESmoke, DT_TESmoke) \
    X(CTESparks, DT_TESparks) \
    X(CTESprite, DT_TESprite) \
    X(CTESpriteSpray, DT_TESpriteSpray) \
    X(CTEWorldDecal, DT_TEWorldDecal) \
    X(CTeam, DT_Team) \
    X(CTesla, DT_Tesla) \
    X(CTestTraceline, DT_TestTraceline) \
    X(CVGuiScreen, DT_VGuiScreen) \
    X(CWorld, DT_WORLD) \
    X(CWaterBullet, DT_WaterBullet) \
    X(CWaterLODControl, DT_WaterLODControl) \
    X(CAK47, DT_WeaponAK47) \
    X(CWeaponAWP, DT_WeaponAWP) \
    X(CWeaponAug, DT_WeaponAug) \
    X(CC4, DT_WeaponC4) \
    X(CWeaponCSBase, DT_WeaponCSBase) \
    X(CWeaponCSBaseGun, DT_WeaponCSBaseGun) \
    X(CWeaponCubemap, DT_WeaponCubemap) \
    X(CWeaponCycler, DT_WeaponCycler) \
    X(CDEagle, DT_WeaponDEagle) \
    X(CWeaponElite, DT_WeaponElite) \
    X(CWeaponFamas, DT_WeaponFamas) \
    X(CWeaponFiveSeven, DT_WeaponFiveSeven) \
    X(CWeaponG3SG1, DT_WeaponG3SG1) \
    X(CWeaponGalil, DT_WeaponGalil) \
    X(CWeaponGlock, DT_WeaponGlock) \
    X(CKnife, DT_WeaponKnife) \
    X(CWeaponM249, DT_WeaponM249) \
    X(CWeaponM3, DT_WeaponM3) \
    X(CWeaponM4A1, DT_WeaponM4A1) \
    X(CWeaponMAC10, DT_WeaponMAC10) \
    X(CWeaponMP5Navy, DT_WeaponMP5Navy) \
    X(CWeaponP228, DT_WeaponP228) \
    X(CWeaponP90, DT_WeaponP90) \
    X(CWeaponSG550, DT_WeaponSG550) \
    X(CWeaponSG552, DT_WeaponSG552) \
    X(CWeaponScout, DT_WeaponScout) \
    X(CWeaponTMP, DT_WeaponTMP) \
    X(CWeaponUMP45, DT_WeaponUMP45) \
    X(CWeaponUSP, DT_WeaponUSP) \
    X(CWeaponXM1014, DT_WeaponXM1014) \
    X(_LPT_m_AnimOverlay_15, _LPT_m_AnimOverlay_15) \
    X(_LPT_m_hActorList_16, _LPT_m_hActorList_16) \
    X(_ST_m_AnimOverlay_15, _ST_m_AnimOverlay_15) \
    X(_ST_m_hActorList_16, _ST_m_hActorList_16)
