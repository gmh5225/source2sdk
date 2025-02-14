#pragma once
#include <cstdint>
#include "!GlobalTypes.hpp"

///////////////////////////////////////////
// Binary: !GlobalTypes
// Class Count: 1412
// Enum Count: 552
///////////////////////////////////////////

// Aligment: 4
// Size: 3
enum class ThreeState_t : uint32_t
{
	TRS_FALSE = 0x0,
	TRS_TRUE = 0x1,
	TRS_NONE = 0x2,
};

// Aligment: 1
// Size: 80
enum class fieldtype_t : uint8_t
{
	FIELD_VOID = 0,
	FIELD_FLOAT32 = 1,
	FIELD_STRING = 2,
	FIELD_VECTOR = 3,
	FIELD_QUATERNION = 4,
	FIELD_INT32 = 5,
	FIELD_BOOLEAN = 6,
	FIELD_INT16 = 7,
	FIELD_CHARACTER = 8,
	FIELD_COLOR32 = 9,
	FIELD_EMBEDDED = 10,
	FIELD_CUSTOM = 11,
	FIELD_CLASSPTR = 12,
	FIELD_EHANDLE = 13,
	FIELD_POSITION_VECTOR = 14,
	FIELD_TIME = 15,
	FIELD_TICK = 16,
	FIELD_SOUNDNAME = 17,
	FIELD_INPUT = 18,
	FIELD_FUNCTION = 19,
	FIELD_VMATRIX = 20,
	FIELD_VMATRIX_WORLDSPACE = 21,
	FIELD_MATRIX3X4_WORLDSPACE = 22,
	FIELD_INTERVAL = 23,
	FIELD_UNUSED = 24,
	FIELD_VECTOR2D = 25,
	FIELD_INT64 = 26,
	FIELD_VECTOR4D = 27,
	FIELD_RESOURCE = 28,
	FIELD_TYPEUNKNOWN = 29,
	FIELD_CSTRING = 30,
	FIELD_HSCRIPT = 31,
	FIELD_VARIANT = 32,
	FIELD_UINT64 = 33,
	FIELD_FLOAT64 = 34,
	FIELD_POSITIVEINTEGER_OR_NULL = 35,
	FIELD_HSCRIPT_NEW_INSTANCE = 36,
	FIELD_UINT32 = 37,
	FIELD_UTLSTRINGTOKEN = 38,
	FIELD_QANGLE = 39,
	FIELD_NETWORK_ORIGIN_CELL_QUANTIZED_VECTOR = 40,
	FIELD_HMATERIAL = 41,
	FIELD_HMODEL = 42,
	FIELD_NETWORK_QUANTIZED_VECTOR = 43,
	FIELD_NETWORK_QUANTIZED_FLOAT = 44,
	FIELD_DIRECTION_VECTOR_WORLDSPACE = 45,
	FIELD_QANGLE_WORLDSPACE = 46,
	FIELD_QUATERNION_WORLDSPACE = 47,
	FIELD_HSCRIPT_LIGHTBINDING = 48,
	FIELD_V8_VALUE = 49,
	FIELD_V8_OBJECT = 50,
	FIELD_V8_ARRAY = 51,
	FIELD_V8_CALLBACK_INFO = 52,
	FIELD_UTLSTRING = 53,
	FIELD_NETWORK_ORIGIN_CELL_QUANTIZED_POSITION_VECTOR = 54,
	FIELD_HRENDERTEXTURE = 55,
	FIELD_HPARTICLESYSTEMDEFINITION = 56,
	FIELD_UINT8 = 57,
	FIELD_UINT16 = 58,
	FIELD_CTRANSFORM = 59,
	FIELD_CTRANSFORM_WORLDSPACE = 60,
	FIELD_HPOSTPROCESSING = 61,
	FIELD_MATRIX3X4 = 62,
	FIELD_SHIM = 63,
	FIELD_CMOTIONTRANSFORM = 64,
	FIELD_CMOTIONTRANSFORM_WORLDSPACE = 65,
	FIELD_ATTACHMENT_HANDLE = 66,
	FIELD_AMMO_INDEX = 67,
	FIELD_CONDITION_ID = 68,
	FIELD_AI_SCHEDULE_BITS = 69,
	FIELD_MODIFIER_HANDLE = 70,
	FIELD_ROTATION_VECTOR = 71,
	FIELD_ROTATION_VECTOR_WORLDSPACE = 72,
	FIELD_HVDATA = 73,
	FIELD_SCALE32 = 74,
	FIELD_STRING_AND_TOKEN = 75,
	FIELD_ENGINE_TIME = 76,
	FIELD_ENGINE_TICK = 77,
	FIELD_WORLD_GROUP_ID = 78,
	FIELD_TYPECOUNT = 79,
};

// Aligment: 1
// Size: 2
enum class FuseVariableAccess_t : uint8_t
{
	WRITABLE = 0,
	READ_ONLY = 1,
};

// Aligment: 1
// Size: 9
enum class FuseVariableType_t : uint8_t
{
	INVALID = 0,
	BOOL = 1,
	INT8 = 2,
	INT16 = 3,
	INT32 = 4,
	UINT8 = 5,
	UINT16 = 6,
	UINT32 = 7,
	FLOAT32 = 8,
};

// Aligment: 4
// Size: 3
enum class RenderSlotType_t : uint32_t
{
	RENDER_SLOT_INVALID = 0xffffffffffffffff,
	RENDER_SLOT_PER_VERTEX = 0x0,
	RENDER_SLOT_PER_INSTANCE = 0x1,
};

// Aligment: 4
// Size: 4
enum class InputLayoutVariation_t : uint32_t
{
	INPUT_LAYOUT_VARIATION_DEFAULT = 0x0,
	INPUT_LAYOUT_VARIATION_STREAM1_INSTANCEID = 0x1,
	INPUT_LAYOUT_VARIATION_STREAM1_INSTANCEID_MORPH_VERT_ID = 0x2,
	INPUT_LAYOUT_VARIATION_MAX = 0x3,
};

// Aligment: 4
// Size: 8
enum class RenderMultisampleType_t : uint32_t
{
	RENDER_MULTISAMPLE_INVALID = 0xffffffffffffffff,
	RENDER_MULTISAMPLE_NONE = 0x0,
	RENDER_MULTISAMPLE_2X = 0x1,
	RENDER_MULTISAMPLE_4X = 0x2,
	RENDER_MULTISAMPLE_6X = 0x3,
	RENDER_MULTISAMPLE_8X = 0x4,
	RENDER_MULTISAMPLE_16X = 0x5,
	RENDER_MULTISAMPLE_TYPE_COUNT = 0x6,
};

// Aligment: 4
// Size: 9
enum class RenderBufferFlags_t : uint32_t
{
	RENDER_BUFFER_USAGE_VERTEX_BUFFER = 0x1,
	RENDER_BUFFER_USAGE_INDEX_BUFFER = 0x2,
	RENDER_BUFFER_USAGE_SHADER_RESOURCE = 0x4,
	RENDER_BUFFER_USAGE_UNORDERED_ACCESS = 0x8,
	RENDER_BUFFER_BYTEADDRESS_BUFFER = 0x10,
	RENDER_BUFFER_STRUCTURED_BUFFER = 0x20,
	RENDER_BUFFER_APPEND_CONSUME_BUFFER = 0x40,
	RENDER_BUFFER_UAV_COUNTER = 0x80,
	RENDER_BUFFER_UAV_DRAW_INDIRECT_ARGS = 0x100,
};

// Aligment: 4
// Size: 45
enum class RenderPrimitiveType_t : uint32_t
{
	RENDER_PRIM_POINTS = 0x0,
	RENDER_PRIM_LINES = 0x1,
	RENDER_PRIM_LINES_WITH_ADJACENCY = 0x2,
	RENDER_PRIM_LINE_STRIP = 0x3,
	RENDER_PRIM_LINE_STRIP_WITH_ADJACENCY = 0x4,
	RENDER_PRIM_TRIANGLES = 0x5,
	RENDER_PRIM_TRIANGLES_WITH_ADJACENCY = 0x6,
	RENDER_PRIM_TRIANGLE_STRIP = 0x7,
	RENDER_PRIM_TRIANGLE_STRIP_WITH_ADJACENCY = 0x8,
	RENDER_PRIM_INSTANCED_QUADS = 0x9,
	RENDER_PRIM_HETEROGENOUS = 0xa,
	RENDER_PRIM_1_CONTROL_POINT_PATCHLIST = 0xb,
	RENDER_PRIM_2_CONTROL_POINT_PATCHLIST = 0xc,
	RENDER_PRIM_3_CONTROL_POINT_PATCHLIST = 0xd,
	RENDER_PRIM_4_CONTROL_POINT_PATCHLIST = 0xe,
	RENDER_PRIM_5_CONTROL_POINT_PATCHLIST = 0xf,
	RENDER_PRIM_6_CONTROL_POINT_PATCHLIST = 0x10,
	RENDER_PRIM_7_CONTROL_POINT_PATCHLIST = 0x11,
	RENDER_PRIM_8_CONTROL_POINT_PATCHLIST = 0x12,
	RENDER_PRIM_9_CONTROL_POINT_PATCHLIST = 0x13,
	RENDER_PRIM_10_CONTROL_POINT_PATCHLIST = 0x14,
	RENDER_PRIM_11_CONTROL_POINT_PATCHLIST = 0x15,
	RENDER_PRIM_12_CONTROL_POINT_PATCHLIST = 0x16,
	RENDER_PRIM_13_CONTROL_POINT_PATCHLIST = 0x17,
	RENDER_PRIM_14_CONTROL_POINT_PATCHLIST = 0x18,
	RENDER_PRIM_15_CONTROL_POINT_PATCHLIST = 0x19,
	RENDER_PRIM_16_CONTROL_POINT_PATCHLIST = 0x1a,
	RENDER_PRIM_17_CONTROL_POINT_PATCHLIST = 0x1b,
	RENDER_PRIM_18_CONTROL_POINT_PATCHLIST = 0x1c,
	RENDER_PRIM_19_CONTROL_POINT_PATCHLIST = 0x1d,
	RENDER_PRIM_20_CONTROL_POINT_PATCHLIST = 0x1e,
	RENDER_PRIM_21_CONTROL_POINT_PATCHLIST = 0x1f,
	RENDER_PRIM_22_CONTROL_POINT_PATCHLIST = 0x20,
	RENDER_PRIM_23_CONTROL_POINT_PATCHLIST = 0x21,
	RENDER_PRIM_24_CONTROL_POINT_PATCHLIST = 0x22,
	RENDER_PRIM_25_CONTROL_POINT_PATCHLIST = 0x23,
	RENDER_PRIM_26_CONTROL_POINT_PATCHLIST = 0x24,
	RENDER_PRIM_27_CONTROL_POINT_PATCHLIST = 0x25,
	RENDER_PRIM_28_CONTROL_POINT_PATCHLIST = 0x26,
	RENDER_PRIM_29_CONTROL_POINT_PATCHLIST = 0x27,
	RENDER_PRIM_30_CONTROL_POINT_PATCHLIST = 0x28,
	RENDER_PRIM_31_CONTROL_POINT_PATCHLIST = 0x29,
	RENDER_PRIM_32_CONTROL_POINT_PATCHLIST = 0x2a,
	RENDER_PRIM_COMPUTE_SHADER = 0x2b,
	RENDER_PRIM_TYPE_COUNT = 0x2c,
};

// Aligment: 4
// Size: 5
enum class SpawnDebugRestrictionOverrideState_t : uint32_t
{
	SPAWN_DEBUG_RESTRICT_NONE = 0x0,
	SPAWN_DEBUG_RESTRICT_IGNORE_MANAGER_DISTANCE_REQS = 0x1,
	SPAWN_DEBUG_RESTRICT_IGNORE_TEMPLATE_DISTANCE_LOS_REQS = 0x2,
	SPAWN_DEBUG_RESTRICT_IGNORE_TEMPLATE_COOLDOWN_LIMITS = 0x4,
	SPAWN_DEBUG_RESTRICT_IGNORE_TARGET_COOLDOWN_LIMITS = 0x8,
};

// Aligment: 4
// Size: 3
enum class SpawnDebugOverrideState_t : uint32_t
{
	SPAWN_DEBUG_OVERRIDE_NONE = 0x0,
	SPAWN_DEBUG_OVERRIDE_FORCE_ENABLED = 0x1,
	SPAWN_DEBUG_OVERRIDE_FORCE_DISABLED = 0x2,
};

// Aligment: 4
// Size: 4
enum class EntityIOTargetType_t : uint32_t
{
	ENTITY_IO_TARGET_INVALID = 0xffffffffffffffff,
	ENTITY_IO_TARGET_ENTITYNAME = 0x2,
	ENTITY_IO_TARGET_EHANDLE = 0x6,
	ENTITY_IO_TARGET_ENTITYNAME_OR_CLASSNAME = 0x7,
};

// Aligment: 4
// Size: 3
enum class EntityDormancyType_t : uint32_t
{
	ENTITY_NOT_DORMANT = 0x0,
	ENTITY_DORMANT = 0x1,
	ENTITY_SUSPENDED = 0x2,
};

// Aligment: 4
// Size: 4
enum class HorizJustification_e : uint32_t
{
	HORIZ_JUSTIFICATION_LEFT = 0x0,
	HORIZ_JUSTIFICATION_CENTER = 0x1,
	HORIZ_JUSTIFICATION_RIGHT = 0x2,
	HORIZ_JUSTIFICATION_NONE = 0x3,
};

// Aligment: 4
// Size: 3
enum class BloomBlendMode_t : uint32_t
{
	BLOOM_BLEND_ADD = 0x0,
	BLOOM_BLEND_SCREEN = 0x1,
	BLOOM_BLEND_BLUR = 0x2,
};

// Aligment: 4
// Size: 3
enum class ViewFadeMode_t : uint32_t
{
	VIEW_FADE_CONSTANT_COLOR = 0x0,
	VIEW_FADE_MODULATE = 0x1,
	VIEW_FADE_MOD2X = 0x2,
};

// Aligment: 4
// Size: 3
enum class LayoutPositionType_e : uint32_t
{
	LAYOUTPOSITIONTYPE_VIEWPORT_RELATIVE = 0x0,
	LAYOUTPOSITIONTYPE_FRACTIONAL = 0x1,
	LAYOUTPOSITIONTYPE_NONE = 0x2,
};

// Aligment: 4
// Size: 4
enum class VertJustification_e : uint32_t
{
	VERT_JUSTIFICATION_TOP = 0x0,
	VERT_JUSTIFICATION_CENTER = 0x1,
	VERT_JUSTIFICATION_BOTTOM = 0x2,
	VERT_JUSTIFICATION_NONE = 0x3,
};

// Aligment: 4
// Size: 2
enum class MoodType_t : uint32_t
{
	eMoodType_Head = 0x0,
	eMoodType_Body = 0x1,
};

// Aligment: 4
// Size: 2
enum class JumpCorrectionMethod : uint32_t
{
	ScaleMotion = 0x0,
	AddCorrectionDelta = 0x1,
};

// Aligment: 4
// Size: 2
enum class BinaryNodeChildOption : uint32_t
{
	Child1 = 0x0,
	Child2 = 0x1,
};

// Aligment: 4
// Size: 5
enum class ModelConfigAttachmentType_t : uint32_t
{
	MODEL_CONFIG_ATTACHMENT_INVALID = 0xffffffffffffffff,
	MODEL_CONFIG_ATTACHMENT_BONE_OR_ATTACHMENT = 0x0,
	MODEL_CONFIG_ATTACHMENT_ROOT_RELATIVE = 0x1,
	MODEL_CONFIG_ATTACHMENT_BONEMERGE = 0x2,
	MODEL_CONFIG_ATTACHMENT_COUNT = 0x3,
};

// Aligment: 4
// Size: 4
enum class BoneMaskBlendSpace : uint32_t
{
	BlendSpace_Parent = 0x0,
	BlendSpace_Model = 0x1,
	BlendSpace_Model_RotationOnly = 0x2,
	BlendSpace_Model_TranslationOnly = 0x3,
};

// Aligment: 4
// Size: 2
enum class SelectionSource_t : uint32_t
{
	SelectionSource_Bool = 0x0,
	SelectionSource_Enum = 0x1,
};

// Aligment: 4
// Size: 4
enum class IkTargetType : uint32_t
{
	IkTarget_Attachment = 0x0,
	IkTarget_Bone = 0x1,
	IkTarget_Parameter_ModelSpace = 0x2,
	IkTarget_Parameter_WorldSpace = 0x3,
};

// Aligment: 4
// Size: 13
enum class AnimVectorSource : uint32_t
{
	MoveDirection = 0x0,
	FacingDirection = 0x1,
	LookDirection = 0x2,
	VectorParameter = 0x3,
	WayPointDirection = 0x4,
	Acceleration = 0x5,
	SlopeNormal = 0x6,
	SlopeNormal_WorldSpace = 0x7,
	LookTarget = 0x8,
	LookTarget_WorldSpace = 0x9,
	WayPointPosition = 0xa,
	GoalPosition = 0xb,
	RootMotionVelocity = 0xc,
};

// Aligment: 4
// Size: 4
enum class ChoiceMethod : uint32_t
{
	WeightedRandom = 0x0,
	WeightedRandomNoRepeat = 0x1,
	Iterate = 0x2,
	IterateRandom = 0x3,
};

// Aligment: 4
// Size: 8
enum class FootFallTagFoot_t : uint32_t
{
	FOOT1 = 0x0,
	FOOT2 = 0x1,
	FOOT3 = 0x2,
	FOOT4 = 0x3,
	FOOT5 = 0x4,
	FOOT6 = 0x5,
	FOOT7 = 0x6,
	FOOT8 = 0x7,
};

// Aligment: 4
// Size: 7
enum class AnimationSnapshotType_t : uint32_t
{
	ANIMATION_SNAPSHOT_SERVER_SIMULATION = 0x0,
	ANIMATION_SNAPSHOT_CLIENT_SIMULATION = 0x1,
	ANIMATION_SNAPSHOT_CLIENT_PREDICTION = 0x2,
	ANIMATION_SNAPSHOT_CLIENT_INTERPOLATION = 0x3,
	ANIMATION_SNAPSHOT_CLIENT_RENDER = 0x4,
	ANIMATION_SNAPSHOT_FINAL_COMPOSITE = 0x5,
	ANIMATION_SNAPSHOT_MAX = 0x6,
};

// Aligment: 4
// Size: 4
enum class AimMatrixBlendMode : uint32_t
{
	AimMatrixBlendMode_None = 0x0,
	AimMatrixBlendMode_Additive = 0x1,
	AimMatrixBlendMode_ModelSpaceAdditive = 0x2,
	AimMatrixBlendMode_BoneMask = 0x3,
};

// Aligment: 4
// Size: 3
enum class FacingMode : uint32_t
{
	FacingMode_Manual = 0x0,
	FacingMode_Path = 0x1,
	FacingMode_LookTarget = 0x2,
};

// Aligment: 1
// Size: 3
enum class VelocityMetricMode : uint8_t
{
	DirectionOnly = 0,
	MagnitudeOnly = 1,
	DirectionAndMagnitude = 2,
};

// Aligment: 4
// Size: 2
enum class VPhysXJoint_t::Flags_t : uint32_t
{
	JOINT_FLAGS_NONE = 0x0,
	JOINT_FLAGS_BODY1_FIXED = 0x1,
};

// Aligment: 4
// Size: 2
enum class AnimVRHandMotionRange_t : uint32_t
{
	MotionRange_WithController = 0x0,
	MotionRange_WithoutController = 0x1,
};

// Aligment: 4
// Size: 3
enum class SingleFrameSelection : uint32_t
{
	FirstFrame = 0x0,
	LastFrame = 0x1,
	SpecificFrame = 0x2,
};

// Aligment: 4
// Size: 2
enum class EAnimValueSource : uint32_t
{
	Constant = 0x0,
	Parameter = 0x1,
};

// Aligment: 4
// Size: 3
enum class FieldNetworkOption : uint32_t
{
	Auto = 0x0,
	ForceEnable = 0x1,
	ForceDisable = 0x2,
};

// Aligment: 4
// Size: 18
enum class ParticleAttachment_t : uint32_t
{
	PATTACH_INVALID = 0xffffffffffffffff,
	PATTACH_ABSORIGIN = 0x0,
	PATTACH_ABSORIGIN_FOLLOW = 0x1,
	PATTACH_CUSTOMORIGIN = 0x2,
	PATTACH_CUSTOMORIGIN_FOLLOW = 0x3,
	PATTACH_POINT = 0x4,
	PATTACH_POINT_FOLLOW = 0x5,
	PATTACH_EYES_FOLLOW = 0x6,
	PATTACH_OVERHEAD_FOLLOW = 0x7,
	PATTACH_WORLDORIGIN = 0x8,
	PATTACH_ROOTBONE_FOLLOW = 0x9,
	PATTACH_RENDERORIGIN_FOLLOW = 0xa,
	PATTACH_MAIN_VIEW = 0xb,
	PATTACH_WATERWAKE = 0xc,
	PATTACH_CENTER_FOLLOW = 0xd,
	PATTACH_CUSTOM_GAME_STATE_1 = 0xe,
	PATTACH_HEALTHBAR = 0xf,
	MAX_PATTACH_TYPES = 0x10,
};

// Aligment: 4
// Size: 2
enum class SolveIKChainAnimNodeSettingSource : uint32_t
{
	SOLVEIKCHAINANIMNODESETTINGSOURCE_Default = 0x0,
	SOLVEIKCHAINANIMNODESETTINGSOURCE_Override = 0x1,
};

// Aligment: 4
// Size: 3
enum class SelectorTagBehavior_t : uint32_t
{
	SelectorTagBehavior_OnWhileCurrent = 0x0,
	SelectorTagBehavior_OffWhenFinished = 0x1,
	SelectorTagBehavior_OffBeforeFinished = 0x2,
};

// Aligment: 4
// Size: 13
enum class AnimParamButton_t : uint32_t
{
	ANIMPARAM_BUTTON_NONE = 0x0,
	ANIMPARAM_BUTTON_DPAD_UP = 0x1,
	ANIMPARAM_BUTTON_DPAD_RIGHT = 0x2,
	ANIMPARAM_BUTTON_DPAD_DOWN = 0x3,
	ANIMPARAM_BUTTON_DPAD_LEFT = 0x4,
	ANIMPARAM_BUTTON_A = 0x5,
	ANIMPARAM_BUTTON_B = 0x6,
	ANIMPARAM_BUTTON_X = 0x7,
	ANIMPARAM_BUTTON_Y = 0x8,
	ANIMPARAM_BUTTON_LEFT_SHOULDER = 0x9,
	ANIMPARAM_BUTTON_RIGHT_SHOULDER = 0xa,
	ANIMPARAM_BUTTON_LTRIGGER = 0xb,
	ANIMPARAM_BUTTON_RTRIGGER = 0xc,
};

// Aligment: 4
// Size: 4
enum class SeqPoseSetting_t : uint32_t
{
	SEQ_POSE_SETTING_CONSTANT = 0x0,
	SEQ_POSE_SETTING_ROTATION = 0x1,
	SEQ_POSE_SETTING_POSITION = 0x2,
	SEQ_POSE_SETTING_VELOCITY = 0x3,
};

// Aligment: 2
// Size: 4
enum class AnimScriptType : uint16_t
{
	ANIMSCRIPT_TYPE_INVALID = 18446744073709551615,
	ANIMSCRIPT_FUSE_GENERAL = 0,
	ANIMSCRIPT_FUSE_STATEMACHINE = 1,
	ANIMSCRIPT_EXPRTK = 2,
};

// Aligment: 4
// Size: 2
enum class IkEndEffectorType : uint32_t
{
	IkEndEffector_Attachment = 0x0,
	IkEndEffector_Bone = 0x1,
};

// Aligment: 4
// Size: 2
enum class StanceOverrideMode : uint32_t
{
	Sequence = 0x0,
	Node = 0x1,
};

// Aligment: 4
// Size: 3
enum class JiggleBoneSimSpace : uint32_t
{
	SimSpace_Local = 0x0,
	SimSpace_Model = 0x1,
	SimSpace_World = 0x2,
};

// Aligment: 4
// Size: 6
enum class AnimationProcessingType_t : uint32_t
{
	ANIMATION_PROCESSING_SERVER_SIMULATION = 0x0,
	ANIMATION_PROCESSING_CLIENT_SIMULATION = 0x1,
	ANIMATION_PROCESSING_CLIENT_PREDICTION = 0x2,
	ANIMATION_PROCESSING_CLIENT_INTERPOLATION = 0x3,
	ANIMATION_PROCESSING_CLIENT_RENDER = 0x4,
	ANIMATION_PROCESSING_MAX = 0x5,
};

// Aligment: 4
// Size: 3
enum class DampingSpeedFunction : uint32_t
{
	NoDamping = 0x0,
	Constant = 0x1,
	Spring = 0x2,
};

// Aligment: 4
// Size: 3
enum class FootPinningTimingSource : uint32_t
{
	FootMotion = 0x0,
	Tag = 0x1,
	Parameter = 0x2,
};

// Aligment: 4
// Size: 2
enum class FootLockSubVisualization : uint32_t
{
	FOOTLOCKSUBVISUALIZATION_ReachabilityAnalysis = 0x0,
	FOOTLOCKSUBVISUALIZATION_IKSolve = 0x1,
};

// Aligment: 4
// Size: 3
enum class FootstepLandedFootSoundType_t : uint32_t
{
	FOOTSOUND_Left = 0x0,
	FOOTSOUND_Right = 0x1,
	FOOTSOUND_UseOverrideSound = 0x2,
};

// Aligment: 4
// Size: 4
enum class AnimVrFingerSplay_t : uint32_t
{
	AnimVrFingerSplay_Thumb_Index = 0x0,
	AnimVrFingerSplay_Index_Middle = 0x1,
	AnimVrFingerSplay_Middle_Ring = 0x2,
	AnimVrFingerSplay_Ring_Pinky = 0x3,
};

// Aligment: 4
// Size: 2
enum class AnimVrBoneTransformSource_t : uint32_t
{
	AnimVrBoneTransformSource_LiveStream = 0x0,
	AnimVrBoneTransformSource_GripLimit = 0x1,
};

// Aligment: 4
// Size: 5
enum class ResetCycleOption : uint32_t
{
	Beginning = 0x0,
	SameCycleAsSource = 0x1,
	InverseSourceCycle = 0x2,
	FixedValue = 0x3,
	SameTimeAsSource = 0x4,
};

// Aligment: 4
// Size: 4
enum class MorphBundleType_t : uint32_t
{
	MORPH_BUNDLE_TYPE_NONE = 0x0,
	MORPH_BUNDLE_TYPE_POSITION_SPEED = 0x1,
	MORPH_BUNDLE_TYPE_NORMAL_WRINKLE = 0x2,
	MORPH_BUNDLE_TYPE_COUNT = 0x3,
};

// Aligment: 4
// Size: 22
enum class ModelSkeletonData_t::BoneFlags_t : uint32_t
{
	FLAG_NO_BONE_FLAGS = 0x0,
	FLAG_BONEFLEXDRIVER = 0x4,
	FLAG_CLOTH = 0x8,
	FLAG_PHYSICS = 0x10,
	FLAG_ATTACHMENT = 0x20,
	FLAG_ANIMATION = 0x40,
	FLAG_MESH = 0x80,
	FLAG_HITBOX = 0x100,
	FLAG_BONE_USED_BY_VERTEX_LOD0 = 0x400,
	FLAG_BONE_USED_BY_VERTEX_LOD1 = 0x800,
	FLAG_BONE_USED_BY_VERTEX_LOD2 = 0x1000,
	FLAG_BONE_USED_BY_VERTEX_LOD3 = 0x2000,
	FLAG_BONE_USED_BY_VERTEX_LOD4 = 0x4000,
	FLAG_BONE_USED_BY_VERTEX_LOD5 = 0x8000,
	FLAG_BONE_USED_BY_VERTEX_LOD6 = 0x10000,
	FLAG_BONE_USED_BY_VERTEX_LOD7 = 0x20000,
	FLAG_BONE_MERGE_READ = 0x40000,
	FLAG_BONE_MERGE_WRITE = 0x80000,
	FLAG_ALL_BONE_FLAGS = 0xfffff,
	BLEND_PREALIGNED = 0x100000,
	FLAG_RIGIDLENGTH = 0x200000,
	FLAG_PROCEDURAL = 0x400000,
};

// Aligment: 4
// Size: 4
enum class StateActionBehavior : uint32_t
{
	STATETAGBEHAVIOR_ACTIVE_WHILE_CURRENT = 0x0,
	STATETAGBEHAVIOR_FIRE_ON_ENTER = 0x1,
	STATETAGBEHAVIOR_FIRE_ON_EXIT = 0x2,
	STATETAGBEHAVIOR_FIRE_ON_ENTER_AND_EXIT = 0x3,
};

// Aligment: 4
// Size: 4
enum class BlendKeyType : uint32_t
{
	BlendKey_UserValue = 0x0,
	BlendKey_Velocity = 0x1,
	BlendKey_Distance = 0x2,
	BlendKey_RemainingDistance = 0x3,
};

// Aligment: 4
// Size: 4
enum class VPhysXConstraintParams_t::EnumFlags0_t : uint32_t
{
	FLAG0_SHIFT_INTERPENETRATE = 0x0,
	FLAG0_SHIFT_CONSTRAIN = 0x1,
	FLAG0_SHIFT_BREAKABLE_FORCE = 0x2,
	FLAG0_SHIFT_BREAKABLE_TORQUE = 0x3,
};

// Aligment: 4
// Size: 2
enum class ChoiceBlendMethod : uint32_t
{
	SingleBlendTime = 0x0,
	PerChoiceBlendTimes = 0x1,
};

// Aligment: 4
// Size: 3
enum class ChoiceChangeMethod : uint32_t
{
	OnReset = 0x0,
	OnCycleEnd = 0x1,
	OnResetOrCycleEnd = 0x2,
};

// Aligment: 4
// Size: 3
enum class StateComparisonValueType : uint32_t
{
	StateComparisonValue_FixedValue = 0x0,
	StateComparisonValue_StateValue = 0x1,
	StateComparisonValue_Parameter = 0x2,
};

// Aligment: 4
// Size: 2
enum class Blend2DMode : uint32_t
{
	Blend2DMode_General = 0x0,
	Blend2DMode_Directional = 0x1,
};

// Aligment: 4
// Size: 2
enum class AnimVRHand_t : uint32_t
{
	AnimVRHand_Left = 0x0,
	AnimVRHand_Right = 0x1,
};

// Aligment: 4
// Size: 6
enum class IKSolverType : uint32_t
{
	IKSOLVER_Perlin = 0x0,
	IKSOLVER_TwoBone = 0x1,
	IKSOLVER_Fabrik = 0x2,
	IKSOLVER_DogLeg3Bone = 0x3,
	IKSOLVER_CCD = 0x4,
	IKSOLVER_COUNT = 0x5,
};

// Aligment: 4
// Size: 2
enum class RagdollPoseControl : uint32_t
{
	Absolute = 0x0,
	Relative = 0x1,
};

// Aligment: 4
// Size: 36
enum class AnimValueSource : uint32_t
{
	MoveHeading = 0x0,
	MoveSpeed = 0x1,
	ForwardSpeed = 0x2,
	StrafeSpeed = 0x3,
	FacingHeading = 0x4,
	ManualFacingHeading = 0x5,
	LookHeading = 0x6,
	LookPitch = 0x7,
	Parameter = 0x8,
	WayPointHeading = 0x9,
	WayPointDistance = 0xa,
	BoundaryRadius = 0xb,
	TargetMoveHeading = 0xc,
	TargetMoveSpeed = 0xd,
	AccelerationHeading = 0xe,
	AccelerationSpeed = 0xf,
	SlopeHeading = 0x10,
	SlopeAngle = 0x11,
	SlopePitch = 0x12,
	SlopeYaw = 0x13,
	GoalDistance = 0x14,
	AccelerationLeftRight = 0x15,
	AccelerationFrontBack = 0x16,
	RootMotionSpeed = 0x17,
	RootMotionTurnSpeed = 0x18,
	MoveHeadingRelativeToLookHeading = 0x19,
	MaxMoveSpeed = 0x1a,
	FingerCurl_Thumb = 0x1b,
	FingerCurl_Index = 0x1c,
	FingerCurl_Middle = 0x1d,
	FingerCurl_Ring = 0x1e,
	FingerCurl_Pinky = 0x1f,
	FingerSplay_Thumb_Index = 0x20,
	FingerSplay_Index_Middle = 0x21,
	FingerSplay_Middle_Ring = 0x22,
	FingerSplay_Ring_Pinky = 0x23,
};

// Aligment: 4
// Size: 2
enum class FinishedConditionOption : uint32_t
{
	FinishedConditionOption_OnFinished = 0x0,
	FinishedConditionOption_OnAlmostFinished = 0x1,
};

// Aligment: 1
// Size: 3
enum class PoseType_t : uint8_t
{
	POSETYPE_STATIC = 0,
	POSETYPE_DYNAMIC = 1,
	POSETYPE_INVALID = 255,
};

// Aligment: 4
// Size: 40
enum class ControlValue : uint32_t
{
	ControlValue_MoveHeading = 0x0,
	ControlValue_MoveSpeed = 0x1,
	ControlValue_FacingHeading = 0x2,
	ControlValue_LookHeading = 0x3,
	ControlValue_LookPitch = 0x4,
	ControlValue_WayPointHeading = 0x5,
	ControlValue_WayPointDistance = 0x6,
	ControlValue_BoundaryRadius = 0x7,
	ControlValue_TotalTranslation_SourceState = 0x8,
	ControlValue_TotalTranslation_TargetState = 0x9,
	ControlValue_RemainingTranslation_SourceState = 0xa,
	ControlValue_RemainingTranslation_TargetState = 0xb,
	ControlValue_MoveVsFacingDelta = 0xc,
	ControlValue_SourceStateBlendWeight = 0xd,
	ControlValue_TargetStateBlendWeight = 0xe,
	ControlValue_TargetMoveHeading = 0xf,
	ControlValue_TargetMoveSpeed = 0x10,
	ControlValue_AccelerationHeading = 0x11,
	ControlValue_AccelerationSpeed = 0x12,
	ControlValue_SlopeHeading = 0x13,
	ControlValue_SlopeAngle = 0x14,
	ControlValue_SlopeYaw = 0x15,
	ControlValue_SlopePitch = 0x16,
	ControlValue_GoalDistance = 0x17,
	ControlValue_AccelerationLeftRight = 0x18,
	ControlValue_AccelerationFrontBack = 0x19,
	ControlValue_RootMotionSpeed = 0x1a,
	ControlValue_RootMotionTurnSpeed = 0x1b,
	ControlValue_MoveHeadingRelativeToLookHeading = 0x1c,
	ControlValue_FingerCurl_Thumb = 0x1d,
	ControlValue_FingerCurl_Index = 0x1e,
	ControlValue_FingerCurl_Middle = 0x1f,
	ControlValue_FingerCurl_Ring = 0x20,
	ControlValue_FingerCurl_Pinky = 0x21,
	ControlValue_FingerSplay_Thumb_Index = 0x22,
	ControlValue_FingerSplay_Index_Middle = 0x23,
	ControlValue_FingerSplay_Middle_Ring = 0x24,
	ControlValue_FingerSplay_Ring_Pinky = 0x25,
	ControlValue_Count = 0x26,
	ControlValue_Invalid = 0xff,
};

// Aligment: 4
// Size: 4
enum class ModelBoneFlexComponent_t : uint32_t
{
	MODEL_BONE_FLEX_INVALID = 0xffffffffffffffff,
	MODEL_BONE_FLEX_TX = 0x0,
	MODEL_BONE_FLEX_TY = 0x1,
	MODEL_BONE_FLEX_TZ = 0x2,
};

// Aligment: 4
// Size: 8
enum class MeshDrawPrimitiveFlags_t : uint32_t
{
	MESH_DRAW_FLAGS_NONE = 0x0,
	MESH_DRAW_FLAGS_USE_SHADOW_FAST_PATH = 0x1,
	MESH_DRAW_FLAGS_USE_COMPRESSED_NORMAL_TANGENT = 0x2,
	MESH_DRAW_INPUT_LAYOUT_IS_NOT_MATCHED_TO_MATERIAL = 0x8,
	MESH_DRAW_FLAGS_USE_COMPRESSED_PER_VERTEX_LIGHTING = 0x10,
	MESH_DRAW_FLAGS_USE_UNCOMPRESSED_PER_VERTEX_LIGHTING = 0x20,
	MESH_DRAW_FLAGS_CAN_BATCH_WITH_DYNAMIC_SHADER_CONSTANTS = 0x40,
	MESH_DRAW_FLAGS_DRAW_LAST = 0x80,
};

// Aligment: 4
// Size: 4
enum class MorphFlexControllerRemapType_t : uint32_t
{
	MORPH_FLEXCONTROLLER_REMAP_PASSTHRU = 0x0,
	MORPH_FLEXCONTROLLER_REMAP_2WAY = 0x1,
	MORPH_FLEXCONTROLLER_REMAP_NWAY = 0x2,
	MORPH_FLEXCONTROLLER_REMAP_EYELID = 0x3,
};

// Aligment: 4
// Size: 5
enum class StateValue : uint32_t
{
	TotalTranslation_SourceState = 0x0,
	TotalTranslation_TargetState = 0x1,
	SourceStateBlendWeight = 0x2,
	TargetStateBlendWeight = 0x3,
	Count = 0x4,
};

// Aligment: 4
// Size: 2
enum class DampedValueType : uint32_t
{
	FloatParameter = 0x0,
	VectorParameter = 0x1,
};

// Aligment: 4
// Size: 3
enum class AnimParamNetworkSetting : uint32_t
{
	Auto = 0x0,
	AlwaysNetwork = 0x1,
	NeverNetwork = 0x2,
};

// Aligment: 1
// Size: 2
enum class ComparisonValueType : uint8_t
{
	COMPARISONVALUETYPE_FIXEDVALUE = 0,
	COMPARISONVALUETYPE_PARAMETER = 1,
};

// Aligment: 4
// Size: 15
enum class PermModelInfo_t::FlagEnum : uint32_t
{
	FLAG_TRANSLUCENT = 0x1,
	FLAG_TRANSLUCENT_TWO_PASS = 0x2,
	FLAG_MODEL_IS_RUNTIME_COMBINED = 0x4,
	FLAG_SOURCE1_IMPORT = 0x8,
	FLAG_MODEL_PART_CHILD = 0x10,
	FLAG_NAV_GEN_NONE = 0x20,
	FLAG_NAV_GEN_HULL = 0x40,
	FLAG_NO_FORCED_FADE = 0x800,
	FLAG_HAS_SKINNED_MESHES = 0x400,
	FLAG_DO_NOT_CAST_SHADOWS = 0x20000,
	FLAG_FORCE_PHONEME_CROSSFADE = 0x1000,
	FLAG_NO_ANIM_EVENTS = 0x100000,
	FLAG_ANIMATION_DRIVEN_FLEXES = 0x200000,
	FLAG_IMPLICIT_BIND_POSE_SEQUENCE = 0x400000,
	FLAG_MODEL_DOC = 0x800000,
};

// Aligment: 4
// Size: 3
enum class IKTargetSource : uint32_t
{
	IKTARGETSOURCE_Bone = 0x0,
	IKTARGETSOURCE_AnimgraphParameter = 0x1,
	IKTARGETSOURCE_COUNT = 0x2,
};

// Aligment: 1
// Size: 9
enum class AnimParamType_t : uint8_t
{
	ANIMPARAM_UNKNOWN = 0,
	ANIMPARAM_BOOL = 1,
	ANIMPARAM_ENUM = 2,
	ANIMPARAM_INT = 3,
	ANIMPARAM_FLOAT = 4,
	ANIMPARAM_VECTOR = 5,
	ANIMPARAM_QUATERNION = 6,
	ANIMPARAM_STRINGTOKEN = 7,
	ANIMPARAM_COUNT = 8,
};

// Aligment: 4
// Size: 5
enum class VPhysXBodyPart_t::VPhysXFlagEnum_t : uint32_t
{
	FLAG_STATIC = 0x1,
	FLAG_KINEMATIC = 0x2,
	FLAG_JOINT = 0x4,
	FLAG_MASS = 0x8,
	FLAG_ALWAYS_DYNAMIC_ON_CLIENT = 0x10,
};

// Aligment: 4
// Size: 2
enum class AnimNodeNetworkMode : uint32_t
{
	ServerAuthoritative = 0x0,
	ClientSimulate = 0x1,
};

// Aligment: 4
// Size: 26
enum class FlexOpCode_t : uint32_t
{
	FLEX_OP_CONST = 0x1,
	FLEX_OP_FETCH1 = 0x2,
	FLEX_OP_FETCH2 = 0x3,
	FLEX_OP_ADD = 0x4,
	FLEX_OP_SUB = 0x5,
	FLEX_OP_MUL = 0x6,
	FLEX_OP_DIV = 0x7,
	FLEX_OP_NEG = 0x8,
	FLEX_OP_EXP = 0x9,
	FLEX_OP_OPEN = 0xa,
	FLEX_OP_CLOSE = 0xb,
	FLEX_OP_COMMA = 0xc,
	FLEX_OP_MAX = 0xd,
	FLEX_OP_MIN = 0xe,
	FLEX_OP_2WAY_0 = 0xf,
	FLEX_OP_2WAY_1 = 0x10,
	FLEX_OP_NWAY = 0x11,
	FLEX_OP_COMBO = 0x12,
	FLEX_OP_DOMINATE = 0x13,
	FLEX_OP_DME_LOWER_EYELID = 0x14,
	FLEX_OP_DME_UPPER_EYELID = 0x15,
	FLEX_OP_SQRT = 0x16,
	FLEX_OP_REMAPVALCLAMPED = 0x17,
	FLEX_OP_SIN = 0x18,
	FLEX_OP_COS = 0x19,
	FLEX_OP_ABS = 0x1a,
};

// Aligment: 4
// Size: 2
enum class StepPhase : uint32_t
{
	StepPhase_OnGround = 0x0,
	StepPhase_InAir = 0x1,
};

// Aligment: 4
// Size: 3
enum class AnimPoseControl : uint32_t
{
	NoPoseControl = 0x0,
	AbsolutePoseControl = 0x1,
	RelativePoseControl = 0x2,
};

// Aligment: 4
// Size: 2
enum class MatterialAttributeTagType_t : uint32_t
{
	MATERIAL_ATTRIBUTE_TAG_VALUE = 0x0,
	MATERIAL_ATTRIBUTE_TAG_COLOR = 0x1,
};

// Aligment: 4
// Size: 3
enum class VPhysXAggregateData_t::VPhysXFlagEnum_t : uint32_t
{
	FLAG_IS_POLYSOUP_GEOMETRY = 0x1,
	FLAG_LEVEL_COLLISION = 0x10,
	FLAG_IGNORE_SCALE_OBSOLETE_DO_NOT_USE = 0x20,
};

// Aligment: 4
// Size: 3
enum class IKTargetCoordinateSystem : uint32_t
{
	IKTARGETCOORDINATESYSTEM_WorldSpace = 0x0,
	IKTARGETCOORDINATESYSTEM_ModelSpace = 0x1,
	IKTARGETCOORDINATESYSTEM_COUNT = 0x2,
};

// Aligment: 4
// Size: 7
enum class Comparison_t : uint32_t
{
	COMPARISON_EQUALS = 0x0,
	COMPARISON_NOT_EQUALS = 0x1,
	COMPARISON_GREATER = 0x2,
	COMPARISON_GREATER_OR_EQUAL = 0x3,
	COMPARISON_LESS = 0x4,
	COMPARISON_LESS_OR_EQUAL = 0x5,
	COMPARISON_COUNT = 0x6,
};

// Aligment: 4
// Size: 5
enum class AnimVRFinger_t : uint32_t
{
	AnimVrFinger_Thumb = 0x0,
	AnimVrFinger_Index = 0x1,
	AnimVrFinger_Middle = 0x2,
	AnimVrFinger_Ring = 0x3,
	AnimVrFinger_Pinky = 0x4,
};

// Aligment: 4
// Size: 7
enum class SolveIKChainAnimNodeDebugSetting : uint32_t
{
	SOLVEIKCHAINANIMNODEDEBUGSETTING_None = 0x0,
	SOLVEIKCHAINANIMNODEDEBUGSETTING_X_Axis_Circle = 0x1,
	SOLVEIKCHAINANIMNODEDEBUGSETTING_Y_Axis_Circle = 0x2,
	SOLVEIKCHAINANIMNODEDEBUGSETTING_Z_Axis_Circle = 0x3,
	SOLVEIKCHAINANIMNODEDEBUGSETTING_Forward = 0x4,
	SOLVEIKCHAINANIMNODEDEBUGSETTING_Up = 0x5,
	SOLVEIKCHAINANIMNODEDEBUGSETTING_Left = 0x6,
};

// Aligment: 4
// Size: 3
enum class BinaryNodeTiming : uint32_t
{
	UseChild1 = 0x0,
	UseChild2 = 0x1,
	SyncChildren = 0x2,
};

// Aligment: 4
// Size: 5
enum class CAnimationGraphVisualizerPrimitiveType : uint32_t
{
	ANIMATIONGRAPHVISUALIZERPRIMITIVETYPE_Text = 0x0,
	ANIMATIONGRAPHVISUALIZERPRIMITIVETYPE_Sphere = 0x1,
	ANIMATIONGRAPHVISUALIZERPRIMITIVETYPE_Line = 0x2,
	ANIMATIONGRAPHVISUALIZERPRIMITIVETYPE_Pie = 0x3,
	ANIMATIONGRAPHVISUALIZERPRIMITIVETYPE_Axis = 0x4,
};

// Aligment: 4
// Size: 4
enum class BoneTransformSpace_t : uint32_t
{
	BoneTransformSpace_Invalid = 0xffffffffffffffff,
	BoneTransformSpace_Parent = 0x0,
	BoneTransformSpace_Model = 0x1,
	BoneTransformSpace_World = 0x2,
};

// Aligment: 4
// Size: 17
enum class SeqCmd_t : uint32_t
{
	SeqCmd_Nop = 0x0,
	SeqCmd_LinearDelta = 0x1,
	SeqCmd_FetchFrameRange = 0x2,
	SeqCmd_Slerp = 0x3,
	SeqCmd_Add = 0x4,
	SeqCmd_Subtract = 0x5,
	SeqCmd_Scale = 0x6,
	SeqCmd_Copy = 0x7,
	SeqCmd_Blend = 0x8,
	SeqCmd_Worldspace = 0x9,
	SeqCmd_Sequence = 0xa,
	SeqCmd_FetchCycle = 0xb,
	SeqCmd_FetchFrame = 0xc,
	SeqCmd_IKLockInPlace = 0xd,
	SeqCmd_IKRestoreAll = 0xe,
	SeqCmd_ReverseSequence = 0xf,
	SeqCmd_Transform = 0x10,
};

// Aligment: 4
// Size: 4
enum class JointAxis_t : uint32_t
{
	JOINT_AXIS_X = 0x0,
	JOINT_AXIS_Y = 0x1,
	JOINT_AXIS_Z = 0x2,
	JOINT_AXIS_COUNT = 0x3,
};

// Aligment: 4
// Size: 3
enum class JointMotion_t : uint32_t
{
	JOINT_MOTION_FREE = 0x0,
	JOINT_MOTION_LOCKED = 0x1,
	JOINT_MOTION_COUNT = 0x2,
};

// Aligment: 4
// Size: 2
enum class SosGroupType_t : uint32_t
{
	SOS_GROUPTYPE_DYNAMIC = 0x0,
	SOS_GROUPTYPE_STATIC = 0x1,
};

// Aligment: 4
// Size: 3
enum class VMixSubgraphSwitchInterpolationType_t : uint32_t
{
	SUBGRAPH_INTERPOLATION_TEMPORAL_CROSSFADE = 0x0,
	SUBGRAPH_INTERPOLATION_TEMPORAL_FADE_OUT = 0x1,
	SUBGRAPH_INTERPOLATION_KEEP_LAST_SUBGRAPH_RUNNING = 0x2,
};

// Aligment: 4
// Size: 3
enum class ActionType_t : uint32_t
{
	SOS_ACTION_NONE = 0x0,
	SOS_ACTION_LIMITER = 0x1,
	SOS_ACTION_TIME_LIMIT = 0x2,
};

// Aligment: 1
// Size: 9
enum class VMixFilterSlope_t : uint8_t
{
	FILTER_SLOPE_1POLE_6dB = 0,
	FILTER_SLOPE_1POLE_12dB = 1,
	FILTER_SLOPE_1POLE_18dB = 2,
	FILTER_SLOPE_1POLE_24dB = 3,
	FILTER_SLOPE_12dB = 4,
	FILTER_SLOPE_24dB = 5,
	FILTER_SLOPE_36dB = 6,
	FILTER_SLOPE_48dB = 7,
	FILTER_SLOPE_MAX = 7,
};

// Aligment: 4
// Size: 6
enum class VMixChannelOperation_t : uint32_t
{
	VMIX_CHAN_STEREO = 0x0,
	VMIX_CHAN_LEFT = 0x1,
	VMIX_CHAN_RIGHT = 0x2,
	VMIX_CHAN_SWAP = 0x3,
	VMIX_CHAN_MONO = 0x4,
	VMIX_CHAN_MID_SIDE = 0x5,
};

// Aligment: 4
// Size: 2
enum class VMixPannerType_t : uint32_t
{
	PANNER_TYPE_LINEAR = 0x0,
	PANNER_TYPE_EQUAL_POWER = 0x1,
};

// Aligment: 4
// Size: 30
enum class soundlevel_t : uint32_t
{
	SNDLVL_NONE = 0x0,
	SNDLVL_20dB = 0x14,
	SNDLVL_25dB = 0x19,
	SNDLVL_30dB = 0x1e,
	SNDLVL_35dB = 0x23,
	SNDLVL_40dB = 0x28,
	SNDLVL_45dB = 0x2d,
	SNDLVL_50dB = 0x32,
	SNDLVL_55dB = 0x37,
	SNDLVL_IDLE = 0x3c,
	SNDLVL_60dB = 0x3c,
	SNDLVL_65dB = 0x41,
	SNDLVL_STATIC = 0x42,
	SNDLVL_70dB = 0x46,
	SNDLVL_NORM = 0x4b,
	SNDLVL_75dB = 0x4b,
	SNDLVL_80dB = 0x50,
	SNDLVL_TALKING = 0x50,
	SNDLVL_85dB = 0x55,
	SNDLVL_90dB = 0x5a,
	SNDLVL_95dB = 0x5f,
	SNDLVL_100dB = 0x64,
	SNDLVL_105dB = 0x69,
	SNDLVL_110dB = 0x6e,
	SNDLVL_120dB = 0x78,
	SNDLVL_130dB = 0x82,
	SNDLVL_GUNFIRE = 0x8c,
	SNDLVL_140dB = 0x8c,
	SNDLVL_150dB = 0x96,
	SNDLVL_180dB = 0xb4,
};

// Aligment: 2
// Size: 30
enum class VMixProcessorType_t : uint16_t
{
	VPROCESSOR_UNKNOWN = 0,
	VPROCESSOR_STEAMAUDIO_REVERB = 1,
	VPROCESSOR_RT_PITCH = 2,
	VPROCESSOR_STEAMAUDIO_HRTF = 3,
	VPROCESSOR_DYNAMICS = 4,
	VPROCESSOR_PRESETDSP = 5,
	VPROCESSOR_DELAY = 6,
	VPROCESSOR_MOD_DELAY = 7,
	VPROCESSOR_DIFFUSOR = 8,
	VPROCESSOR_BOXVERB = 9,
	VPROCESSOR_FREEVERB = 10,
	VPROCESSOR_PLATEVERB = 11,
	VPROCESSOR_FULLWAVE_INTEGRATOR = 12,
	VPROCESSOR_FILTER = 13,
	VPROCESSOR_STEAMAUDIO_PATHING = 14,
	VPROCESSOR_EQ8 = 15,
	VPROCESSOR_ENVELOPE = 16,
	VPROCESSOR_VOCODER = 17,
	VPROCESSOR_CONVOLUTION = 18,
	VPROCESSOR_DYNAMICS_3BAND = 19,
	VPROCESSOR_DYNAMICS_COMPRESSOR = 20,
	VPROCESSOR_SHAPER = 21,
	VPROCESSOR_PANNER = 22,
	VPROCESSOR_UTILITY = 23,
	VPROCESSOR_AUTOFILTER = 24,
	VPROCESSOR_OSC = 25,
	VPROCESSOR_STEREODELAY = 26,
	VPROCESSOR_EFFECT_CHAIN = 27,
	VPROCESSOR_SUBGRAPH_SWITCH = 28,
	VPROCESSOR_STEAMAUDIO_DIRECT = 29,
};

// Aligment: 4
// Size: 2
enum class SosActionSortType_t : uint32_t
{
	SOS_SORTTYPE_HIGHEST = 0x0,
	SOS_SORTTYPE_LOWEST = 0x1,
};

// Aligment: 4
// Size: 6
enum class SosEditItemType_t : uint32_t
{
	SOS_EDIT_ITEM_TYPE_SOUNDEVENTS = 0x0,
	SOS_EDIT_ITEM_TYPE_SOUNDEVENT = 0x1,
	SOS_EDIT_ITEM_TYPE_LIBRARYSTACKS = 0x2,
	SOS_EDIT_ITEM_TYPE_STACK = 0x3,
	SOS_EDIT_ITEM_TYPE_OPERATOR = 0x4,
	SOS_EDIT_ITEM_TYPE_FIELD = 0x5,
};

// Aligment: 4
// Size: 3
enum class SosActionStopType_t : uint32_t
{
	SOS_STOPTYPE_NONE = 0x0,
	SOS_STOPTYPE_TIME = 0x1,
	SOS_STOPTYPE_OPVAR = 0x2,
};

// Aligment: 2
// Size: 10
enum class VMixFilterType_t : uint16_t
{
	FILTER_UNKNOWN = 18446744073709551615,
	FILTER_LOWPASS = 0,
	FILTER_HIGHPASS = 1,
	FILTER_BANDPASS = 2,
	FILTER_NOTCH = 3,
	FILTER_PEAKING_EQ = 4,
	FILTER_LOW_SHELF = 5,
	FILTER_HIGH_SHELF = 6,
	FILTER_ALLPASS = 7,
	FILTER_PASSTHROUGH = 8,
};

// Aligment: 4
// Size: 5
enum class VMixLFOShape_t : uint32_t
{
	LFO_SHAPE_SINE = 0x0,
	LFO_SHAPE_SQUARE = 0x1,
	LFO_SHAPE_TRI = 0x2,
	LFO_SHAPE_SAW = 0x3,
	LFO_SHAPE_NOISE = 0x4,
};

// Aligment: 1
// Size: 4
enum class DisableShadows_t : uint8_t
{
	kDisableShadows_None = 0,
	kDisableShadows_All = 1,
	kDisableShadows_Baked = 2,
	kDisableShadows_Realtime = 3,
};

// Aligment: 4
// Size: 15
enum class ObjectTypeFlags_t : uint32_t
{
	OBJECT_TYPE_NONE = 0x0,
	OBJECT_TYPE_IMAGE_LOD = 0x1,
	OBJECT_TYPE_GEOMETRY_LOD = 0x2,
	OBJECT_TYPE_DECAL = 0x4,
	OBJECT_TYPE_MODEL = 0x8,
	OBJECT_TYPE_BLOCK_LIGHT = 0x10,
	OBJECT_TYPE_NO_SHADOWS = 0x20,
	OBJECT_TYPE_WORLDSPACE_TEXURE_BLEND = 0x40,
	OBJECT_TYPE_DISABLED_IN_LOW_QUALITY = 0x80,
	OBJECT_TYPE_NO_SUN_SHADOWS = 0x100,
	OBJECT_TYPE_RENDER_WITH_DYNAMIC = 0x200,
	OBJECT_TYPE_RENDER_TO_CUBEMAPS = 0x400,
	OBJECT_TYPE_MODEL_HAS_LODS = 0x800,
	OBJECT_TYPE_PRECOMPUTED_VISMEMBERS = 0x4000,
	OBJECT_TYPE_STATIC_CUBE_MAP = 0x8000,
};

// Aligment: 4
// Size: 2
enum class TextureRepetitionMode_t : uint32_t
{
	TEXTURE_REPETITION_PARTICLE = 0x0,
	TEXTURE_REPETITION_PATH = 0x1,
};

// Aligment: 4
// Size: 2
enum class ParticleOrientationSetMode_t : uint32_t
{
	PARTICLE_ORIENTATION_SET_FROM_VELOCITY = 0x0,
	PARTICLE_ORIENTATION_SET_FROM_ROTATIONS = 0x1,
};

// Aligment: 4
// Size: 4
enum class ParticleLightTypeChoiceList_t : uint32_t
{
	PARTICLE_LIGHT_TYPE_POINT = 0x0,
	PARTICLE_LIGHT_TYPE_SPOT = 0x1,
	PARTICLE_LIGHT_TYPE_FX = 0x2,
	PARTICLE_LIGHT_TYPE_CAPSULE = 0x3,
};

// Aligment: 4
// Size: 3
enum class ParticleLightFogLightingMode_t : uint32_t
{
	PARTICLE_LIGHT_FOG_LIGHTING_MODE_NONE = 0x0,
	PARTICLE_LIGHT_FOG_LIGHTING_MODE_DYNAMIC = 0x2,
	PARTICLE_LIGHT_FOG_LIGHTING_MODE_DYNAMIC_NOSHADOWS = 0x4,
};

// Aligment: 4
// Size: 2
enum class ParticleOmni2LightTypeChoiceList_t : uint32_t
{
	PARTICLE_OMNI2_LIGHT_TYPE_POINT = 0x0,
	PARTICLE_OMNI2_LIGHT_TYPE_SPHERE = 0x1,
};

// Aligment: 4
// Size: 2
enum class SpriteCardShaderType_t : uint32_t
{
	SPRITECARD_SHADER_BASE = 0x0,
	SPRITECARD_SHADER_CUSTOM = 0x1,
};

// Aligment: 4
// Size: 6
enum class ParticleImpulseType_t : uint32_t
{
	IMPULSE_TYPE_NONE = 0x0,
	IMPULSE_TYPE_GENERIC = 0x1,
	IMPULSE_TYPE_ROPE = 0x2,
	IMPULSE_TYPE_EXPLOSION = 0x4,
	IMPULSE_TYPE_EXPLOSION_UNDERWATER = 0x8,
	IMPULSE_TYPE_PARTICLE_SYSTEM = 0x10,
};

// Aligment: 4
// Size: 3
enum class ClosestPointTestType_t : uint32_t
{
	PARTICLE_CLOSEST_TYPE_BOX = 0x0,
	PARTICLE_CLOSEST_TYPE_CAPSULE = 0x1,
	PARTICLE_CLOSEST_TYPE_HYBRID = 0x2,
};

// Aligment: 4
// Size: 3
enum class ParticleEndcapMode_t : uint32_t
{
	PARTICLE_ENDCAP_ALWAYS_ON = 0xffffffffffffffff,
	PARTICLE_ENDCAP_ENDCAP_OFF = 0x0,
	PARTICLE_ENDCAP_ENDCAP_ON = 0x1,
};

// Aligment: 4
// Size: 2
enum class ParticleSortingChoiceList_t : uint32_t
{
	PARTICLE_SORTING_NEAREST = 0x0,
	PARTICLE_SORTING_CREATION_TIME = 0x1,
};

// Aligment: 4
// Size: 5
enum class ParticleCollisionMode_t : uint32_t
{
	COLLISION_MODE_PER_PARTICLE_TRACE = 0x3,
	COLLISION_MODE_USE_NEAREST_TRACE = 0x2,
	COLLISION_MODE_PER_FRAME_PLANESET = 0x1,
	COLLISION_MODE_INITIAL_TRACE_DOWN = 0x0,
	COLLISION_MODE_DISABLED = 0xffffffffffffffff,
};

// Aligment: 4
// Size: 6
enum class ParticleOrientationChoiceList_t : uint32_t
{
	PARTICLE_ORIENTATION_SCREEN_ALIGNED = 0x0,
	PARTICLE_ORIENTATION_SCREEN_Z_ALIGNED = 0x1,
	PARTICLE_ORIENTATION_WORLD_Z_ALIGNED = 0x2,
	PARTICLE_ORIENTATION_ALIGN_TO_PARTICLE_NORMAL = 0x3,
	PARTICLE_ORIENTATION_SCREENALIGN_TO_PARTICLE_NORMAL = 0x4,
	PARTICLE_ORIENTATION_FULL_3AXIS_ROTATION = 0x5,
};

// Aligment: 4
// Size: 5
enum class ParticleTransformType_t : uint32_t
{
	PT_TYPE_INVALID = 0x0,
	PT_TYPE_NAMED_VALUE = 0x1,
	PT_TYPE_CONTROL_POINT = 0x2,
	PT_TYPE_CONTROL_POINT_RANGE = 0x3,
	PT_TYPE_COUNT = 0x4,
};

// Aligment: 4
// Size: 15
enum class SpriteCardTextureChannel_t : uint32_t
{
	SPRITECARD_TEXTURE_CHANNEL_MIX_RGB = 0x0,
	SPRITECARD_TEXTURE_CHANNEL_MIX_RGBA = 0x1,
	SPRITECARD_TEXTURE_CHANNEL_MIX_A = 0x2,
	SPRITECARD_TEXTURE_CHANNEL_MIX_RGB_A = 0x3,
	SPRITECARD_TEXTURE_CHANNEL_MIX_RGB_ALPHAMASK = 0x4,
	SPRITECARD_TEXTURE_CHANNEL_MIX_RGB_RGBMASK = 0x5,
	SPRITECARD_TEXTURE_CHANNEL_MIX_RGBA_RGBALPHA = 0x6,
	SPRITECARD_TEXTURE_CHANNEL_MIX_A_RGBALPHA = 0x7,
	SPRITECARD_TEXTURE_CHANNEL_MIX_RGB_A_RGBALPHA = 0x8,
	SPRITECARD_TEXTURE_CHANNEL_MIX_R = 0x9,
	SPRITECARD_TEXTURE_CHANNEL_MIX_G = 0xa,
	SPRITECARD_TEXTURE_CHANNEL_MIX_B = 0xb,
	SPRITECARD_TEXTURE_CHANNEL_MIX_RALPHA = 0xc,
	SPRITECARD_TEXTURE_CHANNEL_MIX_GALPHA = 0xd,
	SPRITECARD_TEXTURE_CHANNEL_MIX_BALPHA = 0xe,
};

// Aligment: 4
// Size: 4
enum class ParticleAlphaReferenceType_t : uint32_t
{
	PARTICLE_ALPHA_REFERENCE_ALPHA_ALPHA = 0x0,
	PARTICLE_ALPHA_REFERENCE_OPAQUE_ALPHA = 0x1,
	PARTICLE_ALPHA_REFERENCE_ALPHA_OPAQUE = 0x2,
	PARTICLE_ALPHA_REFERENCE_OPAQUE_OPAQUE = 0x3,
};

// Aligment: 4
// Size: 10
enum class SpriteCardTextureType_t : uint32_t
{
	SPRITECARD_TEXTURE_DIFFUSE = 0x0,
	SPRITECARD_TEXTURE_ZOOM = 0x1,
	SPRITECARD_TEXTURE_1D_COLOR_LOOKUP = 0x2,
	SPRITECARD_TEXTURE_UVDISTORTION = 0x3,
	SPRITECARD_TEXTURE_UVDISTORTION_ZOOM = 0x4,
	SPRITECARD_TEXTURE_NORMALMAP = 0x5,
	SPRITECARD_TEXTURE_ANIMMOTIONVEC = 0x6,
	SPRITECARD_TEXTURE_SPHERICAL_HARMONICS_A = 0x7,
	SPRITECARD_TEXTURE_SPHERICAL_HARMONICS_B = 0x8,
	SPRITECARD_TEXTURE_SPHERICAL_HARMONICS_C = 0x9,
};

// Aligment: 4
// Size: 4
enum class ParticleDetailLevel_t : uint32_t
{
	PARTICLEDETAIL_LOW = 0x0,
	PARTICLEDETAIL_MEDIUM = 0x1,
	PARTICLEDETAIL_HIGH = 0x2,
	PARTICLEDETAIL_ULTRA = 0x3,
};

// Aligment: 4
// Size: 3
enum class ParticleSequenceCropOverride_t : uint32_t
{
	PARTICLE_SEQUENCE_CROP_OVERRIDE_DEFAULT = 0xffffffffffffffff,
	PARTICLE_SEQUENCE_CROP_OVERRIDE_FORCE_OFF = 0x0,
	PARTICLE_SEQUENCE_CROP_OVERRIDE_FORCE_ON = 0x1,
};

// Aligment: 4
// Size: 3
enum class ParticleFalloffFunction_t : uint32_t
{
	PARTICLE_FALLOFF_CONSTANT = 0x0,
	PARTICLE_FALLOFF_LINEAR = 0x1,
	PARTICLE_FALLOFF_EXPONENTIAL = 0x2,
};

// Aligment: 4
// Size: 2
enum class ParticleLightUnitChoiceList_t : uint32_t
{
	PARTICLE_LIGHT_UNIT_CANDELAS = 0x0,
	PARTICLE_LIGHT_UNIT_LUMENS = 0x1,
};

// Aligment: 4
// Size: 17
enum class ParticleVecType_t : uint32_t
{
	PVEC_TYPE_INVALID = 0xffffffffffffffff,
	PVEC_TYPE_LITERAL = 0x0,
	PVEC_TYPE_LITERAL_COLOR = 0x1,
	PVEC_TYPE_NAMED_VALUE = 0x2,
	PVEC_TYPE_PARTICLE_VECTOR = 0x3,
	PVEC_TYPE_PARTICLE_VELOCITY = 0x4,
	PVEC_TYPE_CP_VALUE = 0x5,
	PVEC_TYPE_CP_RELATIVE_POSITION = 0x6,
	PVEC_TYPE_CP_RELATIVE_DIR = 0x7,
	PVEC_TYPE_CP_RELATIVE_RANDOM_DIR = 0x8,
	PVEC_TYPE_FLOAT_COMPONENTS = 0x9,
	PVEC_TYPE_FLOAT_INTERP_CLAMPED = 0xa,
	PVEC_TYPE_FLOAT_INTERP_OPEN = 0xb,
	PVEC_TYPE_FLOAT_INTERP_GRADIENT = 0xc,
	PVEC_TYPE_RANDOM_UNIFORM = 0xd,
	PVEC_TYPE_RANDOM_UNIFORM_OFFSET = 0xe,
	PVEC_TYPE_COUNT = 0xf,
};

// Aligment: 4
// Size: 4
enum class PFNoiseModifier_t : uint32_t
{
	PF_NOISE_MODIFIER_NONE = 0x0,
	PF_NOISE_MODIFIER_LINES = 0x1,
	PF_NOISE_MODIFIER_CLUMPS = 0x2,
	PF_NOISE_MODIFIER_RINGS = 0x3,
};

// Aligment: 4
// Size: 4
enum class ParticleFloatRandomMode_t : uint32_t
{
	PF_RANDOM_MODE_INVALID = 0xffffffffffffffff,
	PF_RANDOM_MODE_CONSTANT = 0x0,
	PF_RANDOM_MODE_VARYING = 0x1,
	PF_RANDOM_MODE_COUNT = 0x2,
};

// Aligment: 4
// Size: 3
enum class ParticleDepthFeatheringMode_t : uint32_t
{
	PARTICLE_DEPTH_FEATHERING_OFF = 0x0,
	PARTICLE_DEPTH_FEATHERING_ON_OPTIONAL = 0x1,
	PARTICLE_DEPTH_FEATHERING_ON_REQUIRED = 0x2,
};

// Aligment: 4
// Size: 2
enum class MaterialProxyType_t : uint32_t
{
	MATERIAL_PROXY_STATUS_EFFECT = 0x0,
	MATERIAL_PROXY_TINT = 0x1,
};

// Aligment: 4
// Size: 2
enum class ParticleLightnintBranchBehavior_t : uint32_t
{
	PARTICLE_LIGHTNING_BRANCH_CURRENT_DIR = 0x0,
	PARTICLE_LIGHTNING_BRANCH_ENDPOINT_DIR = 0x1,
};

// Aligment: 4
// Size: 7
enum class ParticleOutputBlendMode_t : uint32_t
{
	PARTICLE_OUTPUT_BLEND_MODE_ALPHA = 0x0,
	PARTICLE_OUTPUT_BLEND_MODE_ADD = 0x1,
	PARTICLE_OUTPUT_BLEND_MODE_BLEND_ADD = 0x2,
	PARTICLE_OUTPUT_BLEND_MODE_HALF_BLEND_ADD = 0x3,
	PARTICLE_OUTPUT_BLEND_MODE_NEG_HALF_BLEND_ADD = 0x4,
	PARTICLE_OUTPUT_BLEND_MODE_MOD2X = 0x5,
	PARTICLE_OUTPUT_BLEND_MODE_LIGHTEN = 0x6,
};

// Aligment: 4
// Size: 4
enum class ParticleFloatInputMode_t : uint32_t
{
	PF_INPUT_MODE_INVALID = 0xffffffffffffffff,
	PF_INPUT_MODE_CLAMPED = 0x0,
	PF_INPUT_MODE_LOOPED = 0x1,
	PF_INPUT_MODE_COUNT = 0x2,
};

// Aligment: 4
// Size: 3
enum class ParticleSelection_t : uint32_t
{
	PARTICLE_SELECTION_FIRST = 0x0,
	PARTICLE_SELECTION_LAST = 0x1,
	PARTICLE_SELECTION_NUMBER = 0x2,
};

// Aligment: 4
// Size: 7
enum class ParticleTextureLayerBlendType_t : uint32_t
{
	SPRITECARD_TEXTURE_BLEND_MULTIPLY = 0x0,
	SPRITECARD_TEXTURE_BLEND_MOD2X = 0x1,
	SPRITECARD_TEXTURE_BLEND_REPLACE = 0x2,
	SPRITECARD_TEXTURE_BLEND_ADD = 0x3,
	SPRITECARD_TEXTURE_BLEND_SUBTRACT = 0x4,
	SPRITECARD_TEXTURE_BLEND_AVERAGE = 0x5,
	SPRITECARD_TEXTURE_BLEND_LUMINANCE = 0x6,
};

// Aligment: 4
// Size: 3
enum class ParticleTraceSet_t : uint32_t
{
	PARTICLE_TRACE_SET_ALL = 0x0,
	PARTICLE_TRACE_SET_STATIC = 0x1,
	PARTICLE_TRACE_SET_DYNAMIC = 0x2,
};

// Aligment: 4
// Size: 8
enum class ParticleFloatMapType_t : uint32_t
{
	PF_MAP_TYPE_INVALID = 0xffffffffffffffff,
	PF_MAP_TYPE_DIRECT = 0x0,
	PF_MAP_TYPE_MULT = 0x1,
	PF_MAP_TYPE_REMAP = 0x2,
	PF_MAP_TYPE_REMAP_BIASED = 0x3,
	PF_MAP_TYPE_CURVE = 0x4,
	PF_MAP_TYPE_NOTCHED = 0x5,
	PF_MAP_TYPE_COUNT = 0x6,
};

// Aligment: 4
// Size: 3
enum class ParticleLightBehaviorChoiceList_t : uint32_t
{
	PARTICLE_LIGHT_BEHAVIOR_FOLLOW_DIRECTION = 0x0,
	PARTICLE_LIGHT_BEHAVIOR_ROPE = 0x1,
	PARTICLE_LIGHT_BEHAVIOR_TRAILS = 0x2,
};

// Aligment: 4
// Size: 5
enum class ParticleTopology_t : uint32_t
{
	PARTICLE_TOPOLOGY_POINTS = 0x0,
	PARTICLE_TOPOLOGY_LINES = 0x1,
	PARTICLE_TOPOLOGY_TRIS = 0x2,
	PARTICLE_TOPOLOGY_QUADS = 0x3,
	PARTICLE_TOPOLOGY_CUBES = 0x4,
};

// Aligment: 4
// Size: 3
enum class AnimationType_t : uint32_t
{
	ANIMATION_TYPE_FIXED_RATE = 0x0,
	ANIMATION_TYPE_FIT_LIFETIME = 0x1,
	ANIMATION_TYPE_MANUAL_FRAMES = 0x2,
};

// Aligment: 4
// Size: 2
enum class HitboxLerpType_t : uint32_t
{
	HITBOX_LERP_LIFETIME = 0x0,
	HITBOX_LERP_CONSTANT = 0x1,
};

// Aligment: 4
// Size: 3
enum class ParticleRotationLockType_t : uint32_t
{
	PARTICLE_ROTATION_LOCK_NONE = 0x0,
	PARTICLE_ROTATION_LOCK_ROTATIONS = 0x1,
	PARTICLE_ROTATION_LOCK_NORMAL = 0x2,
};

// Aligment: 4
// Size: 9
enum class VectorExpressionType_t : uint32_t
{
	VECTOR_EXPRESSION_UNINITIALIZED = 0xffffffffffffffff,
	VECTOR_EXPRESSION_ADD = 0x0,
	VECTOR_EXPRESSION_SUBTRACT = 0x1,
	VECTOR_EXPRESSION_MUL = 0x2,
	VECTOR_EXPRESSION_DIVIDE = 0x3,
	VECTOR_EXPRESSION_INPUT_1 = 0x4,
	VECTOR_EXPRESSION_MIN = 0x5,
	VECTOR_EXPRESSION_MAX = 0x6,
	VECTOR_EXPRESSION_CROSSPRODUCT = 0x7,
};

// Aligment: 4
// Size: 3
enum class ParticleFogType_t : uint32_t
{
	PARTICLE_FOG_GAME_DEFAULT = 0x0,
	PARTICLE_FOG_ENABLED = 0x1,
	PARTICLE_FOG_DISABLED = 0x2,
};

// Aligment: 4
// Size: 7
enum class VectorFloatExpressionType_t : uint32_t
{
	VECTOR_FLOAT_EXPRESSION_UNINITIALIZED = 0xffffffffffffffff,
	VECTOR_FLOAT_EXPRESSION_DOTPRODUCT = 0x0,
	VECTOR_FLOAT_EXPRESSION_DISTANCE = 0x1,
	VECTOR_FLOAT_EXPRESSION_DISTANCESQR = 0x2,
	VECTOR_FLOAT_EXPRESSION_INPUT1_LENGTH = 0x3,
	VECTOR_FLOAT_EXPRESSION_INPUT1_LENGTHSQR = 0x4,
	VECTOR_FLOAT_EXPRESSION_INPUT1_NOISE = 0x5,
};

// Aligment: 4
// Size: 11
enum class ParticlePinDistance_t : uint32_t
{
	PARTICLE_PIN_DISTANCE_NONE = 0xffffffffffffffff,
	PARTICLE_PIN_DISTANCE_NEIGHBOR = 0x0,
	PARTICLE_PIN_DISTANCE_FARTHEST = 0x1,
	PARTICLE_PIN_DISTANCE_FIRST = 0x2,
	PARTICLE_PIN_DISTANCE_LAST = 0x3,
	PARTICLE_PIN_DISTANCE_CENTER = 0x5,
	PARTICLE_PIN_DISTANCE_CP = 0x6,
	PARTICLE_PIN_DISTANCE_CP_PAIR_EITHER = 0x7,
	PARTICLE_PIN_DISTANCE_CP_PAIR_BOTH = 0x8,
	PARTICLE_PIN_SPEED = 0x9,
	PARTICLE_PIN_COLLECTION_AGE = 0xa,
};

// Aligment: 4
// Size: 6
enum class ParticleControlPointAxis_t : uint32_t
{
	PARTICLE_CP_AXIS_X = 0x0,
	PARTICLE_CP_AXIS_Y = 0x1,
	PARTICLE_CP_AXIS_Z = 0x2,
	PARTICLE_CP_AXIS_NEGATIVE_X = 0x3,
	PARTICLE_CP_AXIS_NEGATIVE_Y = 0x4,
	PARTICLE_CP_AXIS_NEGATIVE_Z = 0x5,
};

// Aligment: 4
// Size: 2
enum class ParticleHitboxBiasType_t : uint32_t
{
	PARTICLE_HITBOX_BIAS_ENTITY = 0x0,
	PARTICLE_HITBOX_BIAS_HITBOX = 0x1,
};

// Aligment: 4
// Size: 3
enum class ParticleDirectionNoiseType_t : uint32_t
{
	PARTICLE_DIR_NOISE_PERLIN = 0x0,
	PARTICLE_DIR_NOISE_CURL = 0x1,
	PARTICLE_DIR_NOISE_WORLEY_BASIC = 0x2,
};

// Aligment: 4
// Size: 4
enum class PFNoiseType_t : uint32_t
{
	PF_NOISE_TYPE_PERLIN = 0x0,
	PF_NOISE_TYPE_SIMPLEX = 0x1,
	PF_NOISE_TYPE_WORLEY = 0x2,
	PF_NOISE_TYPE_CURL = 0x3,
};

// Aligment: 4
// Size: 3
enum class ParticleLightingQuality_t : uint32_t
{
	PARTICLE_LIGHTING_PER_PARTICLE = 0x0,
	PARTICLE_LIGHTING_PER_VERTEX = 0x1,
	PARTICLE_LIGHTING_PER_PIXEL = 0xffffffffffffffff,
};

// Aligment: 4
// Size: 3
enum class ParticleParentSetMode_t : uint32_t
{
	PARTICLE_SET_PARENT_NO = 0x0,
	PARTICLE_SET_PARENT_IMMEDIATE = 0x1,
	PARTICLE_SET_PARENT_ROOT = 0x1,
};

// Aligment: 4
// Size: 2
enum class StandardLightingAttenuationStyle_t : uint32_t
{
	LIGHT_STYLE_OLD = 0x0,
	LIGHT_STYLE_NEW = 0x1,
};

// Aligment: 4
// Size: 2
enum class BlurFilterType_t : uint32_t
{
	BLURFILTER_GAUSSIAN = 0x0,
	BLURFILTER_BOX = 0x1,
};

// Aligment: 4
// Size: 14
enum class SpriteCardPerParticleScale_t : uint32_t
{
	SPRITECARD_TEXTURE_PP_SCALE_NONE = 0x0,
	SPRITECARD_TEXTURE_PP_SCALE_PARTICLE_AGE = 0x1,
	SPRITECARD_TEXTURE_PP_SCALE_ANIMATION_FRAME = 0x2,
	SPRITECARD_TEXTURE_PP_SCALE_SHADER_EXTRA_DATA1 = 0x3,
	SPRITECARD_TEXTURE_PP_SCALE_SHADER_EXTRA_DATA2 = 0x4,
	SPRITECARD_TEXTURE_PP_SCALE_PARTICLE_ALPHA = 0x5,
	SPRITECARD_TEXTURE_PP_SCALE_SHADER_RADIUS = 0x6,
	SPRITECARD_TEXTURE_PP_SCALE_ROLL = 0x7,
	SPRITECARD_TEXTURE_PP_SCALE_YAW = 0x8,
	SPRITECARD_TEXTURE_PP_SCALE_PITCH = 0x9,
	SPRITECARD_TEXTURE_PP_SCALE_RANDOM = 0xa,
	SPRITECARD_TEXTURE_PP_SCALE_NEG_RANDOM = 0xb,
	SPRITECARD_TEXTURE_PP_SCALE_RANDOM_TIME = 0xc,
	SPRITECARD_TEXTURE_PP_SCALE_NEG_RANDOM_TIME = 0xd,
};

// Aligment: 4
// Size: 9
enum class ScalarExpressionType_t : uint32_t
{
	SCALAR_EXPRESSION_UNINITIALIZED = 0xffffffffffffffff,
	SCALAR_EXPRESSION_ADD = 0x0,
	SCALAR_EXPRESSION_SUBTRACT = 0x1,
	SCALAR_EXPRESSION_MUL = 0x2,
	SCALAR_EXPRESSION_DIVIDE = 0x3,
	SCALAR_EXPRESSION_INPUT_1 = 0x4,
	SCALAR_EXPRESSION_MIN = 0x5,
	SCALAR_EXPRESSION_MAX = 0x6,
	SCALAR_EXPRESSION_MOD = 0x7,
};

// Aligment: 4
// Size: 4
enum class DetailCombo_t : uint32_t
{
	DETAIL_COMBO_OFF = 0x0,
	DETAIL_COMBO_ADD = 0x1,
	DETAIL_COMBO_ADD_SELF_ILLUM = 0x2,
	DETAIL_COMBO_MOD2X = 0x3,
};

// Aligment: 4
// Size: 13
enum class ParticleColorBlendType_t : uint32_t
{
	PARTICLE_COLOR_BLEND_MULTIPLY = 0x0,
	PARTICLE_COLOR_BLEND_MULTIPLY2X = 0x1,
	PARTICLE_COLOR_BLEND_DIVIDE = 0x2,
	PARTICLE_COLOR_BLEND_ADD = 0x3,
	PARTICLE_COLOR_BLEND_SUBTRACT = 0x4,
	PARTICLE_COLOR_BLEND_MOD2X = 0x5,
	PARTICLE_COLOR_BLEND_SCREEN = 0x6,
	PARTICLE_COLOR_BLEND_MAX = 0x7,
	PARTICLE_COLOR_BLEND_MIN = 0x8,
	PARTICLE_COLOR_BLEND_REPLACE = 0x9,
	PARTICLE_COLOR_BLEND_AVERAGE = 0xa,
	PARTICLE_COLOR_BLEND_NEGATE = 0xb,
	PARTICLE_COLOR_BLEND_LUMINANCE = 0xc,
};

// Aligment: 4
// Size: 5
enum class ParticleColorBlendMode_t : uint32_t
{
	PARTICLEBLEND_DEFAULT = 0x0,
	PARTICLEBLEND_OVERLAY = 0x1,
	PARTICLEBLEND_DARKEN = 0x2,
	PARTICLEBLEND_LIGHTEN = 0x3,
	PARTICLEBLEND_MULTIPLY = 0x4,
};

// Aligment: 4
// Size: 6
enum class PFNoiseTurbulence_t : uint32_t
{
	PF_NOISE_TURB_NONE = 0x0,
	PF_NOISE_TURB_HIGHLIGHT = 0x1,
	PF_NOISE_TURB_FEEDBACK = 0x2,
	PF_NOISE_TURB_LOOPY = 0x3,
	PF_NOISE_TURB_CONTRAST = 0x4,
	PF_NOISE_TURB_ALTERNATE = 0x5,
};

// Aligment: 4
// Size: 6
enum class ParticlePostProcessPriorityGroup_t : uint32_t
{
	PARTICLE_POST_PROCESS_PRIORITY_LEVEL_VOLUME = 0x0,
	PARTICLE_POST_PROCESS_PRIORITY_LEVEL_OVERRIDE = 0x1,
	PARTICLE_POST_PROCESS_PRIORITY_GAMEPLAY_EFFECT = 0x2,
	PARTICLE_POST_PROCESS_PRIORITY_GAMEPLAY_STATE_LOW = 0x3,
	PARTICLE_POST_PROCESS_PRIORITY_GAMEPLAY_STATE_HIGH = 0x4,
	PARTICLE_POST_PROCESS_PRIORITY_GLOBAL_UI = 0x5,
};

// Aligment: 4
// Size: 20
enum class ParticleFloatType_t : uint32_t
{
	PF_TYPE_INVALID = 0xffffffffffffffff,
	PF_TYPE_LITERAL = 0x0,
	PF_TYPE_NAMED_VALUE = 0x1,
	PF_TYPE_RANDOM_UNIFORM = 0x2,
	PF_TYPE_RANDOM_BIASED = 0x3,
	PF_TYPE_COLLECTION_AGE = 0x4,
	PF_TYPE_ENDCAP_AGE = 0x5,
	PF_TYPE_CONTROL_POINT_COMPONENT = 0x6,
	PF_TYPE_CONTROL_POINT_CHANGE_AGE = 0x7,
	PF_TYPE_CONTROL_POINT_SPEED = 0x8,
	PF_TYPE_PARTICLE_DETAIL_LEVEL = 0x9,
	PF_TYPE_PARTICLE_NOISE = 0xa,
	PF_TYPE_PARTICLE_AGE = 0xb,
	PF_TYPE_PARTICLE_AGE_NORMALIZED = 0xc,
	PF_TYPE_PARTICLE_FLOAT = 0xd,
	PF_TYPE_PARTICLE_VECTOR_COMPONENT = 0xe,
	PF_TYPE_PARTICLE_SPEED = 0xf,
	PF_TYPE_PARTICLE_NUMBER = 0x10,
	PF_TYPE_PARTICLE_NUMBER_NORMALIZED = 0x11,
	PF_TYPE_COUNT = 0x12,
};

// Aligment: 4
// Size: 3
enum class InheritableBoolType_t : uint32_t
{
	INHERITABLE_BOOL_INHERIT = 0x0,
	INHERITABLE_BOOL_FALSE = 0x1,
	INHERITABLE_BOOL_TRUE = 0x2,
};

// Aligment: 4
// Size: 3
enum class PetGroundType_t : uint32_t
{
	PET_GROUND_NONE = 0x0,
	PET_GROUND_GRID = 0x1,
	PET_GROUND_PLANE = 0x2,
};

// Aligment: 4
// Size: 4
enum class ParticleVRHandChoiceList_t : uint32_t
{
	PARTICLE_VRHAND_LEFT = 0x0,
	PARTICLE_VRHAND_RIGHT = 0x1,
	PARTICLE_VRHAND_CP = 0x2,
	PARTICLE_VRHAND_CP_OBJECT = 0x3,
};

// Aligment: 4
// Size: 7
enum class PFuncVisualizationType_t : uint32_t
{
	PFUNC_VISUALIZATION_SPHERE_WIREFRAME = 0x0,
	PFUNC_VISUALIZATION_SPHERE_SOLID = 0x1,
	PFUNC_VISUALIZATION_BOX = 0x2,
	PFUNC_VISUALIZATION_RING = 0x3,
	PFUNC_VISUALIZATION_PLANE = 0x4,
	PFUNC_VISUALIZATION_LINE = 0x5,
	PFUNC_VISUALIZATION_CYLINDER = 0x6,
};

// Aligment: 4
// Size: 3
enum class ParticleTraceMissBehavior_t : uint32_t
{
	PARTICLE_TRACE_MISS_BEHAVIOR_NONE = 0x0,
	PARTICLE_TRACE_MISS_BEHAVIOR_KILL = 0x1,
	PARTICLE_TRACE_MISS_BEHAVIOR_TRACE_END = 0x2,
};

// Aligment: 4
// Size: 5
enum class ParticleFloatBiasType_t : uint32_t
{
	PF_BIAS_TYPE_INVALID = 0xffffffffffffffff,
	PF_BIAS_TYPE_STANDARD = 0x0,
	PF_BIAS_TYPE_GAIN = 0x1,
	PF_BIAS_TYPE_EXPONENTIAL = 0x2,
	PF_BIAS_TYPE_COUNT = 0x3,
};

// Aligment: 4
// Size: 4
enum class MissingParentInheritBehavior_t : uint32_t
{
	MISSING_PARENT_DO_NOTHING = 0xffffffffffffffff,
	MISSING_PARENT_KILL = 0x0,
	MISSING_PARENT_FIND_NEW = 0x1,
	MISSING_PARENT_SAME_INDEX = 0x2,
};

// Aligment: 4
// Size: 7
enum class Detail2Combo_t : uint32_t
{
	DETAIL_2_COMBO_UNINITIALIZED = 0xffffffffffffffff,
	DETAIL_2_COMBO_OFF = 0x0,
	DETAIL_2_COMBO_ADD = 0x1,
	DETAIL_2_COMBO_ADD_SELF_ILLUM = 0x2,
	DETAIL_2_COMBO_MOD2X = 0x3,
	DETAIL_2_COMBO_MUL = 0x4,
	DETAIL_2_COMBO_CROSSFADE = 0x5,
};

// Aligment: 4
// Size: 6
enum class ParticleSetMethod_t : uint32_t
{
	PARTICLE_SET_REPLACE_VALUE = 0x0,
	PARTICLE_SET_SCALE_INITIAL_VALUE = 0x1,
	PARTICLE_SET_ADD_TO_INITIAL_VALUE = 0x2,
	PARTICLE_SET_RAMP_CURRENT_VALUE = 0x3,
	PARTICLE_SET_SCALE_CURRENT_VALUE = 0x4,
	PARTICLE_SET_ADD_TO_CURRENT_VALUE = 0x5,
};

// Aligment: 1
// Size: 13
enum class MoveType_t : uint8_t
{
	MOVETYPE_NONE = 0,
	MOVETYPE_OBSOLETE = 1,
	MOVETYPE_WALK = 2,
	MOVETYPE_STEP = 3,
	MOVETYPE_FLY = 4,
	MOVETYPE_FLYGRAVITY = 5,
	MOVETYPE_VPHYSICS = 6,
	MOVETYPE_PUSH = 7,
	MOVETYPE_NOCLIP = 8,
	MOVETYPE_OBSERVER = 9,
	MOVETYPE_CUSTOM = 10,
	MOVETYPE_LAST = 11,
	MOVETYPE_MAX_BITS = 5,
};

// Aligment: 4
// Size: 2
enum class DOTA_ITEM_STATE : uint32_t
{
	DOTA_ITEM_NEEDS_EQUIPPED = 0x0,
	DOTA_ITEM_READY = 0x1,
};

// Aligment: 4
// Size: 3
enum class EOverrideBlockLOS_t : uint32_t
{
	BLOCK_LOS_DEFAULT = 0x0,
	BLOCK_LOS_FORCE_FALSE = 0x1,
	BLOCK_LOS_FORCE_TRUE = 0x2,
};

// Aligment: 4
// Size: 25
enum class DOTAChatChannelType_t : uint32_t
{
	DOTAChannelType_Regional = 0x0,
	DOTAChannelType_Custom = 0x1,
	DOTAChannelType_Party = 0x2,
	DOTAChannelType_Lobby = 0x3,
	DOTAChannelType_Team = 0x4,
	DOTAChannelType_Guild = 0x5,
	DOTAChannelType_Fantasy = 0x6,
	DOTAChannelType_Whisper = 0x7,
	DOTAChannelType_Console = 0x8,
	DOTAChannelType_Tab = 0x9,
	DOTAChannelType_Invalid = 0xa,
	DOTAChannelType_GameAll = 0xb,
	DOTAChannelType_GameAllies = 0xc,
	DOTAChannelType_GameSpectator = 0xd,
	DOTAChannelType_GameCoaching = 0xe,
	DOTAChannelType_Cafe = 0xf,
	DOTAChannelType_CustomGame = 0x10,
	DOTAChannelType_Private = 0x11,
	DOTAChannelType_PostGame = 0x12,
	DOTAChannelType_BattleCup = 0x13,
	DOTAChannelType_HLTVSpectator = 0x14,
	DOTAChannelType_GameEvents = 0x15,
	DOTAChannelType_Trivia = 0x16,
	DOTAChannelType_NewPlayer = 0x17,
	DOTAChannelType_PrivateCoaching = 0x18,
};

// Aligment: 4
// Size: 7
enum class ELeagueRegion : uint32_t
{
	LEAGUE_REGION_UNSET = 0x0,
	LEAGUE_REGION_NA = 0x1,
	LEAGUE_REGION_SA = 0x2,
	LEAGUE_REGION_WEU = 0x3,
	LEAGUE_REGION_EEU = 0x4,
	LEAGUE_REGION_CHINA = 0x5,
	LEAGUE_REGION_SEA = 0x6,
};

// Aligment: 4
// Size: 3
enum class DOTALobbyVisibility : uint32_t
{
	DOTALobbyVisibility_Public = 0x0,
	DOTALobbyVisibility_Friends = 0x1,
	DOTALobbyVisibility_Unlisted = 0x2,
};

// Aligment: 4
// Size: 34
enum class DotaDefaultUIElement_t : uint32_t
{
	DOTA_DEFAULT_UI_INVALID = 0xffffffffffffffff,
	DOTA_DEFAULT_UI_TOP_TIMEOFDAY = 0x0,
	DOTA_DEFAULT_UI_TOP_HEROES = 0x1,
	DOTA_DEFAULT_UI_FLYOUT_SCOREBOARD = 0x2,
	DOTA_DEFAULT_UI_ACTION_PANEL = 0x3,
	DOTA_DEFAULT_UI_ACTION_MINIMAP = 0x4,
	DOTA_DEFAULT_UI_INVENTORY_PANEL = 0x5,
	DOTA_DEFAULT_UI_INVENTORY_SHOP = 0x6,
	DOTA_DEFAULT_UI_INVENTORY_ITEMS = 0x7,
	DOTA_DEFAULT_UI_INVENTORY_QUICKBUY = 0x8,
	DOTA_DEFAULT_UI_INVENTORY_COURIER = 0x9,
	DOTA_DEFAULT_UI_INVENTORY_PROTECT = 0xa,
	DOTA_DEFAULT_UI_INVENTORY_GOLD = 0xb,
	DOTA_DEFAULT_UI_SHOP_SUGGESTEDITEMS = 0xc,
	DOTA_DEFAULT_UI_SHOP_COMMONITEMS = 0xd,
	DOTA_DEFAULT_UI_HERO_SELECTION_TEAMS = 0xe,
	DOTA_DEFAULT_UI_HERO_SELECTION_GAME_NAME = 0xf,
	DOTA_DEFAULT_UI_HERO_SELECTION_CLOCK = 0x10,
	DOTA_DEFAULT_UI_HERO_SELECTION_HEADER = 0x11,
	DOTA_DEFAULT_UI_TOP_MENU_BUTTONS = 0x12,
	DOTA_DEFAULT_UI_TOP_BAR_BACKGROUND = 0x13,
	DOTA_DEFAULT_UI_TOP_BAR_RADIANT_TEAM = 0x14,
	DOTA_DEFAULT_UI_TOP_BAR_DIRE_TEAM = 0x15,
	DOTA_DEFAULT_UI_TOP_BAR_SCORE = 0x16,
	DOTA_DEFAULT_UI_ENDGAME = 0x17,
	DOTA_DEFAULT_UI_ENDGAME_CHAT = 0x18,
	DOTA_DEFAULT_UI_QUICK_STATS = 0x19,
	DOTA_DEFAULT_UI_PREGAME_STRATEGYUI = 0x1a,
	DOTA_DEFAULT_UI_KILLCAM = 0x1b,
	DOTA_DEFAULT_UI_FIGHT_RECAP = 0x1c,
	DOTA_DEFAULT_UI_TOP_BAR = 0x1d,
	DOTA_DEFAULT_UI_CUSTOMUI_BEHIND_HUD_ELEMENTS = 0x1e,
	DOTA_DEFAULT_UI_AGHANIMS_STATUS = 0x1f,
	DOTA_DEFAULT_UI_ELEMENT_COUNT = 0x20,
};

// Aligment: 4
// Size: 4
enum class SPELL_DISPELLABLE_TYPES : uint32_t
{
	SPELL_DISPELLABLE_NONE = 0x0,
	SPELL_DISPELLABLE_YES_STRONG = 0x1,
	SPELL_DISPELLABLE_YES = 0x2,
	SPELL_DISPELLABLE_NO = 0x3,
};

// Aligment: 4
// Size: 17
enum class DOTA_SHOP_CATEGORY : uint32_t
{
	DOTA_SHOP_CATEGORY_NONE = 0xffffffffffffffff,
	DOTA_SHOP_CATEGORY_CONSUMABLES = 0x0,
	DOTA_SHOP_CATEGORY_ATTRIBUTES = 0x1,
	DOTA_SHOP_CATEGORY_WEAPONS_ARMOR = 0x2,
	DOTA_SHOP_CATEGORY_MISC = 0x3,
	DOTA_SHOP_CATEGORY_BASICS = 0x4,
	DOTA_SHOP_CATEGORY_SUPPORT = 0x5,
	DOTA_SHOP_CATEGORY_MAGICS = 0x6,
	DOTA_SHOP_CATEGORY_WEAPONS = 0x7,
	DOTA_SHOP_CATEGORY_DEFENSE = 0x8,
	DOTA_SHOP_CATEGORY_ARTIFACTS = 0x9,
	DOTA_SHOP_CATEGORY_SIDE_SHOP_PAGE_1 = 0xa,
	DOTA_SHOP_CATEGORY_SIDE_SHOP_PAGE_2 = 0xb,
	DOTA_SHOP_CATEGORY_SECRET_SHOP = 0xc,
	DOTA_SHOP_CATEGORY_RECOMMENDED_ITEMS = 0xd,
	DOTA_SHOP_CATEGORY_SEARCH_RESULTS = 0xe,
	NUM_SHOP_CATEGORIES = 0xf,
};

// Aligment: 4
// Size: 7
enum class ObserverMode_t : uint32_t
{
	OBS_MODE_NONE = 0x0,
	OBS_MODE_FIXED = 0x1,
	OBS_MODE_IN_EYE = 0x2,
	OBS_MODE_CHASE = 0x3,
	OBS_MODE_ROAMING = 0x4,
	OBS_MODE_DIRECTED = 0x5,
	NUM_OBSERVER_MODES = 0x6,
};

// Aligment: 4
// Size: 7
enum class EBaseClientMessages : uint32_t
{
	CM_CustomGameEvent = 0x118,
	CM_CustomGameEventBounce = 0x119,
	CM_ClientUIEvent = 0x11a,
	CM_DevPaletteVisibilityChanged = 0x11b,
	CM_WorldUIControllerHasPanelChanged = 0x11c,
	CM_RotateAnchor = 0x11d,
	CM_MAX_BASE = 0x12c,
};

// Aligment: 4
// Size: 22
enum class EHeroStatType : uint32_t
{
	k_EHeroStatType_None = 0x0,
	k_EHeroStatType_AxeTotalDamage = 0x7d0,
	k_EHeroStatType_BattleHungerDamage = 0x7d1,
	k_EHeroStatType_CounterHelixDamage = 0x7d2,
	k_EHeroStatType_CullingBladeDamage = 0x7d3,
	k_EHeroStatType_BerserkersCallCastCount = 0x7d4,
	k_EHeroStatType_BerserkersCallHeroesHitAverage = 0x7d5,
	k_EHeroStatType_BerserkersCallOtherUnitsHit = 0x7d6,
	k_EHeroStatType_BerserkersCallHeroAttacksTaken = 0x7d7,
	k_EHeroStatType_BerserkersCallOtherAttacksTaken = 0x7d8,
	k_EHeroStatType_BattleHungerCastCount = 0x7d9,
	k_EHeroStatType_BattleHungerPotentialDuration = 0x7da,
	k_EHeroStatType_BattleHungerAverageDuration = 0x7db,
	k_EHeroStatType_CounterHelixProcCount = 0x7dc,
	k_EHeroStatType_CounterHelixHeroProcCount = 0x7dd,
	k_EHeroStatType_CounterHelixHeroesHitAverage = 0x7de,
	k_EHeroStatType_CounterHelixOtherUnitsHitCount = 0x7df,
	k_EHeroStatType_CullingBladeCastCount = 0x7e0,
	k_EHeroStatType_CullingBladeKillCount = 0x7e1,
	k_EHeroStatType_CullingBladeAverageHealthCulled = 0x7e2,
	k_EHeroStatType_CullingBladeAverageDamageAvailable = 0x7e3,
	k_EHeroStatType_CullingBladeHeroBuffAverage = 0x7e4,
};

// Aligment: 4
// Size: 2
enum class DOTA_MODIFIER_ENTRY_TYPE : uint32_t
{
	DOTA_MODIFIER_ENTRY_TYPE_ACTIVE = 0x1,
	DOTA_MODIFIER_ENTRY_TYPE_REMOVED = 0x2,
};

// Aligment: 4
// Size: 7
enum class MatchType : uint32_t
{
	MATCH_TYPE_CASUAL = 0x0,
	MATCH_TYPE_COOP_BOTS = 0x1,
	MATCH_TYPE_COMPETITIVE = 0x4,
	MATCH_TYPE_WEEKEND_TOURNEY = 0x5,
	MATCH_TYPE_EVENT = 0x7,
	MATCH_TYPE_COACHES_CHALLENGE = 0xc,
	MATCH_TYPE_NEW_PLAYER_POOL = 0xe,
};

// Aligment: 4
// Size: 3
enum class IBody::ArousalType : uint32_t
{
	NEUTRAL = 0x0,
	ALERT = 0x1,
	INTENSE = 0x2,
};

// Aligment: 4
// Size: 3
enum class CanPlaySequence_t : uint32_t
{
	CANNOT_PLAY = 0x0,
	CAN_PLAY_NOW = 0x1,
	CAN_PLAY_ENQUEUED = 0x2,
};

// Aligment: 4
// Size: 8
enum class MatchLanguages : uint32_t
{
	MATCH_LANGUAGE_INVALID = 0x0,
	MATCH_LANGUAGE_ENGLISH = 0x1,
	MATCH_LANGUAGE_RUSSIAN = 0x2,
	MATCH_LANGUAGE_CHINESE = 0x3,
	MATCH_LANGUAGE_KOREAN = 0x4,
	MATCH_LANGUAGE_SPANISH = 0x5,
	MATCH_LANGUAGE_PORTUGUESE = 0x6,
	MATCH_LANGUAGE_ENGLISH2 = 0x7,
};

// Aligment: 4
// Size: 7
enum class GCConnectionStatus : uint32_t
{
	GCConnectionStatus_HAVE_SESSION = 0x0,
	GCConnectionStatus_GC_GOING_DOWN = 0x1,
	GCConnectionStatus_NO_SESSION = 0x2,
	GCConnectionStatus_NO_SESSION_IN_LOGON_QUEUE = 0x3,
	GCConnectionStatus_NO_STEAM = 0x4,
	GCConnectionStatus_SUSPENDED = 0x5,
	GCConnectionStatus_STEAM_GOING_DOWN = 0x6,
};

// Aligment: 4
// Size: 10
enum class Disposition_t : uint32_t
{
	D_ER = 0x0,
	D_HT = 0x1,
	D_FR = 0x2,
	D_LI = 0x3,
	D_NU = 0x4,
	D_ERROR = 0x0,
	D_HATE = 0x1,
	D_FEAR = 0x2,
	D_LIKE = 0x3,
	D_NEUTRAL = 0x4,
};

// Aligment: 4
// Size: 2
enum class ValueRemapperHapticsType_t : uint32_t
{
	HaticsType_Default = 0x0,
	HaticsType_None = 0x1,
};

// Aligment: 4
// Size: 26
enum class DOTA_GameMode : uint32_t
{
	DOTA_GAMEMODE_NONE = 0x0,
	DOTA_GAMEMODE_AP = 0x1,
	DOTA_GAMEMODE_CM = 0x2,
	DOTA_GAMEMODE_RD = 0x3,
	DOTA_GAMEMODE_SD = 0x4,
	DOTA_GAMEMODE_AR = 0x5,
	DOTA_GAMEMODE_INTRO = 0x6,
	DOTA_GAMEMODE_HW = 0x7,
	DOTA_GAMEMODE_REVERSE_CM = 0x8,
	DOTA_GAMEMODE_XMAS = 0x9,
	DOTA_GAMEMODE_TUTORIAL = 0xa,
	DOTA_GAMEMODE_MO = 0xb,
	DOTA_GAMEMODE_LP = 0xc,
	DOTA_GAMEMODE_POOL1 = 0xd,
	DOTA_GAMEMODE_FH = 0xe,
	DOTA_GAMEMODE_CUSTOM = 0xf,
	DOTA_GAMEMODE_CD = 0x10,
	DOTA_GAMEMODE_BD = 0x11,
	DOTA_GAMEMODE_ABILITY_DRAFT = 0x12,
	DOTA_GAMEMODE_EVENT = 0x13,
	DOTA_GAMEMODE_ARDM = 0x14,
	DOTA_GAMEMODE_1V1MID = 0x15,
	DOTA_GAMEMODE_ALL_DRAFT = 0x16,
	DOTA_GAMEMODE_TURBO = 0x17,
	DOTA_GAMEMODE_MUTATION = 0x18,
	DOTA_GAMEMODE_COACHES_CHALLENGE = 0x19,
};

// Aligment: 4
// Size: 4
enum class EMatchBehaviorScoreVariance : uint32_t
{
	k_EMatchBehaviorScoreVariance_Invalid = 0x0,
	k_EMatchBehaviorScoreVariance_Low = 0x1,
	k_EMatchBehaviorScoreVariance_Medium = 0x2,
	k_EMatchBehaviorScoreVariance_High = 0x3,
};

// Aligment: 4
// Size: 11
enum class DOTASpeechType_t : uint32_t
{
	DOTA_SPEECH_USER_INVALID = 0x0,
	DOTA_SPEECH_USER_SINGLE = 0x1,
	DOTA_SPEECH_USER_TEAM = 0x2,
	DOTA_SPEECH_USER_TEAM_NEARBY = 0x3,
	DOTA_SPEECH_USER_NEARBY = 0x4,
	DOTA_SPEECH_USER_ALL = 0x5,
	DOTA_SPEECH_GOOD_TEAM = 0x6,
	DOTA_SPEECH_BAD_TEAM = 0x7,
	DOTA_SPEECH_SPECTATOR = 0x8,
	DOTA_SPEECH_USER_TEAM_NOSPECTATOR = 0x9,
	DOTA_SPEECH_RECIPIENT_TYPE_MAX = 0xa,
};

// Aligment: 4
// Size: 3
enum class EReadyCheckStatus : uint32_t
{
	k_EReadyCheckStatus_Unknown = 0x0,
	k_EReadyCheckStatus_NotReady = 0x1,
	k_EReadyCheckStatus_Ready = 0x2,
};

// Aligment: 4
// Size: 5
enum class LuaModifierType : uint32_t
{
	LUA_MODIFIER_MOTION_NONE = 0x0,
	LUA_MODIFIER_MOTION_HORIZONTAL = 0x1,
	LUA_MODIFIER_MOTION_VERTICAL = 0x2,
	LUA_MODIFIER_MOTION_BOTH = 0x3,
	LUA_MODIFIER_INVALID = 0x4,
};

// Aligment: 4
// Size: 13
enum class TakeDamageFlags_t : uint32_t
{
	DFLAG_NONE = 0x0,
	DFLAG_SUPPRESS_HEALTH_CHANGES = 0x1,
	DFLAG_SUPPRESS_PHYSICS_FORCE = 0x2,
	DFLAG_SUPPRESS_EFFECTS = 0x4,
	DFLAG_PREVENT_DEATH = 0x8,
	DFLAG_FORCE_DEATH = 0x10,
	DFLAG_ALWAYS_GIB = 0x20,
	DFLAG_NEVER_GIB = 0x40,
	DFLAG_REMOVE_NO_RAGDOLL = 0x80,
	DFLAG_SUPPRESS_DAMAGE_MODIFICATION = 0x100,
	DFLAG_ALWAYS_FIRE_DAMAGE_EVENTS = 0x200,
	DFLAG_RADIUS_DMG = 0x400,
	DMG_LASTDFLAG = 0x400,
};

// Aligment: 4
// Size: 15
enum class WeaponSound_t : uint32_t
{
	WEAPON_SOUND_EMPTY = 0x0,
	WEAPON_SOUND_SINGLE = 0x1,
	WEAPON_SOUND_DOUBLE = 0x2,
	WEAPON_SOUND_RELOAD = 0x3,
	WEAPON_SOUND_MELEE_MISS = 0x4,
	WEAPON_SOUND_MELEE_HIT = 0x5,
	WEAPON_SOUND_MELEE_HIT_WORLD = 0x6,
	WEAPON_SOUND_MELEE_HIT_PLAYER = 0x7,
	WEAPON_SOUND_SPECIAL1 = 0x8,
	WEAPON_SOUND_SPECIAL2 = 0x9,
	WEAPON_SOUND_SPECIAL3 = 0xa,
	WEAPON_SOUND_NEARLYEMPTY = 0xb,
	WEAPON_SOUND_IMPACT1 = 0xc,
	WEAPON_SOUND_REFLECT = 0xd,
	WEAPON_SOUND_NUM_TYPES = 0xe,
};

// Aligment: 4
// Size: 2
enum class ValueRemapperInputType_t : uint32_t
{
	InputType_PlayerShootPosition = 0x0,
	InputType_PlayerShootPositionAroundAxis = 0x1,
};

// Aligment: 4
// Size: 10
enum class DOTA_RUNES : uint32_t
{
	DOTA_RUNE_INVALID = 0xffffffffffffffff,
	DOTA_RUNE_DOUBLEDAMAGE = 0x0,
	DOTA_RUNE_HASTE = 0x1,
	DOTA_RUNE_ILLUSION = 0x2,
	DOTA_RUNE_INVISIBILITY = 0x3,
	DOTA_RUNE_REGENERATION = 0x4,
	DOTA_RUNE_BOUNTY = 0x5,
	DOTA_RUNE_ARCANE = 0x6,
	DOTA_RUNE_WATER = 0x7,
	DOTA_RUNE_COUNT = 0x8,
};

// Aligment: 4
// Size: 9
enum class EBroadcastTimelineEvent : uint32_t
{
	EBroadcastTimelineEvent_MatchStarted = 0x1,
	EBroadcastTimelineEvent_GameStateChanged = 0x2,
	EBroadcastTimelineEvent_TowerDeath = 0x3,
	EBroadcastTimelineEvent_BarracksDeath = 0x4,
	EBroadcastTimelineEvent_AncientDeath = 0x5,
	EBroadcastTimelineEvent_RoshanDeath = 0x6,
	EBroadcastTimelineEvent_HeroDeath = 0x7,
	EBroadcastTimelineEvent_TeamFight = 0x8,
	EBroadcastTimelineEvent_FirstBlood = 0x9,
};

// Aligment: 4
// Size: 3
enum class ELeagueDivision : uint32_t
{
	LEAGUE_DIVISION_UNSET = 0x0,
	LEAGUE_DIVISION_I = 0x1,
	LEAGUE_DIVISION_II = 0x2,
};

// Aligment: 4
// Size: 2
enum class ShadowType_t : uint32_t
{
	SHADOWS_NONE = 0x0,
	SHADOWS_SIMPLE = 0x1,
};

// Aligment: 4
// Size: 2
enum class ModifyDamageReturn_t : uint32_t
{
	CONTINUE_TO_APPLY_DAMAGE = 0x0,
	ABORT_DO_NOT_APPLY_DAMAGE = 0x1,
};

// Aligment: 4
// Size: 3
enum class ELobbyMemberCoachRequestState : uint32_t
{
	k_eLobbyMemberCoachRequestState_None = 0x0,
	k_eLobbyMemberCoachRequestState_Accepted = 0x1,
	k_eLobbyMemberCoachRequestState_Rejected = 0x2,
};

// Aligment: 4
// Size: 6
enum class GCProtoBufMsgSrc : uint32_t
{
	GCProtoBufMsgSrc_Unspecified = 0x0,
	GCProtoBufMsgSrc_FromSystem = 0x1,
	GCProtoBufMsgSrc_FromSteamID = 0x2,
	GCProtoBufMsgSrc_FromGC = 0x3,
	GCProtoBufMsgSrc_ReplySystem = 0x4,
	GCProtoBufMsgSrc_SpoofedSteamID = 0x5,
};

// Aligment: 4
// Size: 25
enum class EGCMsgInitiateTradeResponse : uint32_t
{
	k_EGCMsgInitiateTradeResponse_Accepted = 0x0,
	k_EGCMsgInitiateTradeResponse_Declined = 0x1,
	k_EGCMsgInitiateTradeResponse_VAC_Banned_Initiator = 0x2,
	k_EGCMsgInitiateTradeResponse_VAC_Banned_Target = 0x3,
	k_EGCMsgInitiateTradeResponse_Target_Already_Trading = 0x4,
	k_EGCMsgInitiateTradeResponse_Disabled = 0x5,
	k_EGCMsgInitiateTradeResponse_NotLoggedIn = 0x6,
	k_EGCMsgInitiateTradeResponse_Cancel = 0x7,
	k_EGCMsgInitiateTradeResponse_TooSoon = 0x8,
	k_EGCMsgInitiateTradeResponse_TooSoonPenalty = 0x9,
	k_EGCMsgInitiateTradeResponse_Trade_Banned_Initiator = 0xa,
	k_EGCMsgInitiateTradeResponse_Trade_Banned_Target = 0xb,
	k_EGCMsgInitiateTradeResponse_Free_Account_Initiator_DEPRECATED = 0xc,
	k_EGCMsgInitiateTradeResponse_Shared_Account_Initiator = 0xd,
	k_EGCMsgInitiateTradeResponse_Service_Unavailable = 0xe,
	k_EGCMsgInitiateTradeResponse_Target_Blocked = 0xf,
	k_EGCMsgInitiateTradeResponse_NeedVerifiedEmail = 0x10,
	k_EGCMsgInitiateTradeResponse_NeedSteamGuard = 0x11,
	k_EGCMsgInitiateTradeResponse_SteamGuardDuration = 0x12,
	k_EGCMsgInitiateTradeResponse_TheyCannotTrade = 0x13,
	k_EGCMsgInitiateTradeResponse_Recent_Password_Reset = 0x14,
	k_EGCMsgInitiateTradeResponse_Using_New_Device = 0x15,
	k_EGCMsgInitiateTradeResponse_Sent_Invalid_Cookie = 0x16,
	k_EGCMsgInitiateTradeResponse_TooRecentFriend = 0x17,
	k_EGCMsgInitiateTradeResponse_WalledFundsNotTrusted = 0x18,
};

// Aligment: 4
// Size: 5
enum class PortraitSummonsDisplayMode_t : uint32_t
{
	PORTRAIT_SUMMONS_DISPLAY_MODE_INVALID = 0xffffffffffffffff,
	PORTRAIT_SUMMONS_DISPLAY_MODE_NONE = 0x0,
	PORTRAIT_SUMMONS_DISPLAY_MODE_ALL = 0x1,
	PORTRAIT_SUMMONS_DISPLAY_MODE_NON_DEFAULT = 0x2,
	PORTRAIT_SUMMONS_DISPLAY_MODE_TYPE_COUNT = 0x3,
};

// Aligment: 4
// Size: 3
enum class BrushSolidities_e : uint32_t
{
	BRUSHSOLID_TOGGLE = 0x0,
	BRUSHSOLID_NEVER = 0x1,
	BRUSHSOLID_ALWAYS = 0x2,
};

// Aligment: 4
// Size: 3
enum class TRAIN_CODE : uint32_t
{
	TRAIN_SAFE = 0x0,
	TRAIN_BLOCKING = 0x1,
	TRAIN_FOLLOWING = 0x2,
};

// Aligment: 4
// Size: 6
enum class DOTA_ABILITY_TARGET_TYPE : uint32_t
{
	DOTA_ABILITY_TARGET_NONE = 0x0,
	DOTA_ABILITY_TARGET_SELF = 0x1,
	DOTA_ABILITY_TARGET_ALLY_HERO = 0x2,
	DOTA_ABILITY_TARGET_ALLY_CREEP = 0x3,
	DOTA_ABILITY_TARGET_ENEMY_HERO = 0x4,
	DOTA_ABILITY_TARGET_ENEMY_CREEP = 0x5,
};

// Aligment: 4
// Size: 7
enum class ELeagueStatus : uint32_t
{
	LEAGUE_STATUS_UNSET = 0x0,
	LEAGUE_STATUS_UNSUBMITTED = 0x1,
	LEAGUE_STATUS_SUBMITTED = 0x2,
	LEAGUE_STATUS_ACCEPTED = 0x3,
	LEAGUE_STATUS_REJECTED = 0x4,
	LEAGUE_STATUS_CONCLUDED = 0x5,
	LEAGUE_STATUS_DELETED = 0x6,
};

// Aligment: 4
// Size: 6
enum class ShakeCommand_t : uint32_t
{
	SHAKE_START = 0x0,
	SHAKE_STOP = 0x1,
	SHAKE_AMPLITUDE = 0x2,
	SHAKE_FREQUENCY = 0x3,
	SHAKE_START_RUMBLEONLY = 0x4,
	SHAKE_START_NORUMBLE = 0x5,
};

// Aligment: 4
// Size: 5
enum class TowerState_t : uint32_t
{
	TOWER_STATE_ACTIVE = 0x0,
	TOWER_STATE_SELECTED = 0x1,
	TOWER_STATE_INACTIVE = 0x2,
	TOWER_STATE_NO_BEAM_MOVEMENT = 0x3,
	TOWER_STATE_ACTIVE_CHANNELED = 0x4,
};

// Aligment: 4
// Size: 122
enum class EGCItemMsg : uint32_t
{
	k_EMsgGCBase = 0x3e8,
	k_EMsgGCSetItemPosition = 0x3e9,
	k_EMsgGCDelete = 0x3ec,
	k_EMsgGCVerifyCacheSubscription = 0x3ed,
	k_EMsgClientToGCNameItem = 0x3ee,
	k_EMsgGCPaintItem = 0x3f1,
	k_EMsgGCPaintItemResponse = 0x3f2,
	k_EMsgGCNameBaseItem = 0x3fb,
	k_EMsgGCNameBaseItemResponse = 0x3fc,
	k_EMsgGCUseItemRequest = 0x401,
	k_EMsgGCUseItemResponse = 0x402,
	k_EMsgGCGiftedItems = 0x403,
	k_EMsgGCUnwrapGiftRequest = 0x40d,
	k_EMsgGCUnwrapGiftResponse = 0x40e,
	k_EMsgGCSortItems = 0x411,
	k_EMsgGCBackpackSortFinished = 0x422,
	k_EMsgGCAdjustItemEquippedState = 0x423,
	k_EMsgGCItemAcknowledged = 0x426,
	k_EMsgClientToGCNameItemResponse = 0x42c,
	k_EMsgGCApplyStrangePart = 0x431,
	k_EMsgGCApplyPennantUpgrade = 0x434,
	k_EMsgGCSetItemPositions = 0x435,
	k_EMsgGCApplyEggEssence = 0x436,
	k_EMsgGCNameEggEssenceResponse = 0x437,
	k_EMsgGCExtractGems = 0x43e,
	k_EMsgGCAddSocket = 0x43f,
	k_EMsgGCAddItemToSocket = 0x440,
	k_EMsgGCAddItemToSocketResponse = 0x441,
	k_EMsgGCAddSocketResponse = 0x442,
	k_EMsgGCResetStrangeGemCount = 0x443,
	k_EMsgGCRequestCrateItems = 0x444,
	k_EMsgGCRequestCrateItemsResponse = 0x445,
	k_EMsgGCExtractGemsResponse = 0x446,
	k_EMsgGCResetStrangeGemCountResponse = 0x447,
	k_EMsgGCServerUseItemRequest = 0x44f,
	k_EMsgGCAddGiftItem = 0x450,
	k_EMsgClientToGCRemoveItemGifterAttributes = 0x455,
	k_EMsgClientToGCRemoveItemName = 0x456,
	k_EMsgClientToGCRemoveItemDescription = 0x457,
	k_EMsgClientToGCRemoveItemAttributeResponse = 0x458,
	k_EMsgGCDev_NewItemRequest = 0x7d1,
	k_EMsgGCDev_NewItemRequestResponse = 0x7d2,
	k_EMsgGCDev_UnlockAllItemStylesRequest = 0x7d3,
	k_EMsgGCDev_UnlockAllItemStylesResponse = 0x7d4,
	k_EMsgGCStorePurchaseFinalize = 0x9c8,
	k_EMsgGCStorePurchaseFinalizeResponse = 0x9c9,
	k_EMsgGCStorePurchaseCancel = 0x9ca,
	k_EMsgGCStorePurchaseCancelResponse = 0x9cb,
	k_EMsgGCStorePurchaseInit = 0x9ce,
	k_EMsgGCStorePurchaseInitResponse = 0x9cf,
	k_EMsgGCToGCBannedWordListUpdated = 0x9d3,
	k_EMsgGCToGCDirtySDOCache = 0x9d4,
	k_EMsgGCToGCUpdateSQLKeyValue = 0x9d6,
	k_EMsgGCToGCBroadcastConsoleCommand = 0x9d9,
	k_EMsgGCServerVersionUpdated = 0x9da,
	k_EMsgGCApplyAutograph = 0x9db,
	k_EMsgGCToGCWebAPIAccountChanged = 0x9dc,
	k_EMsgGCClientVersionUpdated = 0x9e0,
	k_EMsgGCToGCUpdateWelcomeMsg = 0x9e1,
	k_EMsgGCToGCPlayerStrangeCountAdjustments = 0x9e7,
	k_EMsgGCRequestStoreSalesData = 0x9e8,
	k_EMsgGCRequestStoreSalesDataResponse = 0x9e9,
	k_EMsgGCRequestStoreSalesDataUpToDateResponse = 0x9ea,
	k_EMsgGCToGCPingRequest = 0x9eb,
	k_EMsgGCToGCPingResponse = 0x9ec,
	k_EMsgGCToGCGetUserSessionServer = 0x9ed,
	k_EMsgGCToGCGetUserSessionServerResponse = 0x9ee,
	k_EMsgGCToGCGetUserServerMembers = 0x9ef,
	k_EMsgGCToGCGetUserServerMembersResponse = 0x9f0,
	k_EMsgGCToGCCanUseDropRateBonus = 0x9f3,
	k_EMsgSQLAddDropRateBonus = 0x9f4,
	k_EMsgGCToGCRefreshSOCache = 0x9f5,
	k_EMsgGCToGCGrantAccountRolledItems = 0x9fa,
	k_EMsgGCToGCGrantSelfMadeItemToAccount = 0x9fb,
	k_EMsgGCStatueCraft = 0xa01,
	k_EMsgGCRedeemCode = 0xa02,
	k_EMsgGCRedeemCodeResponse = 0xa03,
	k_EMsgGCToGCItemConsumptionRollback = 0xa04,
	k_EMsgClientToGCWrapAndDeliverGift = 0xa05,
	k_EMsgClientToGCWrapAndDeliverGiftResponse = 0xa06,
	k_EMsgClientToGCUnpackBundleResponse = 0xa07,
	k_EMsgGCToClientStoreTransactionCompleted = 0xa08,
	k_EMsgClientToGCEquipItems = 0xa09,
	k_EMsgClientToGCEquipItemsResponse = 0xa0a,
	k_EMsgClientToGCUnlockItemStyle = 0xa0b,
	k_EMsgClientToGCUnlockItemStyleResponse = 0xa0c,
	k_EMsgClientToGCSetItemInventoryCategory = 0xa0d,
	k_EMsgClientToGCUnlockCrate = 0xa0e,
	k_EMsgClientToGCUnlockCrateResponse = 0xa0f,
	k_EMsgClientToGCUnpackBundle = 0xa10,
	k_EMsgClientToGCSetItemStyle = 0xa11,
	k_EMsgClientToGCSetItemStyleResponse = 0xa12,
	k_EMsgSQLGCToGCGrantBackpackSlots = 0xa14,
	k_EMsgClientToGCLookupAccountName = 0xa15,
	k_EMsgClientToGCLookupAccountNameResponse = 0xa16,
	k_EMsgClientToGCCreateStaticRecipe = 0xa18,
	k_EMsgClientToGCCreateStaticRecipeResponse = 0xa19,
	k_EMsgGCToGCStoreProcessCDKeyTransaction = 0xa1a,
	k_EMsgGCToGCStoreProcessCDKeyTransactionResponse = 0xa1b,
	k_EMsgGCToGCStoreProcessSettlement = 0xa1c,
	k_EMsgGCToGCStoreProcessSettlementResponse = 0xa1d,
	k_EMsgGCToGCConsoleOutput = 0xa1e,
	k_EMsgGCToClientItemAges = 0xa1f,
	k_EMsgGCToGCInternalTestMsg = 0xa20,
	k_EMsgGCToGCClientServerVersionsUpdated = 0xa21,
	k_EMsgGCUseMultipleItemsRequest = 0xa22,
	k_EMsgGCGetAccountSubscriptionItem = 0xa23,
	k_EMsgGCGetAccountSubscriptionItemResponse = 0xa24,
	k_EMsgGCToGCBroadcastMessageFromSub = 0xa26,
	k_EMsgGCToClientCurrencyPricePoints = 0xa27,
	k_EMsgGCToGCAddSubscriptionTime = 0xa28,
	k_EMsgGCToGCFlushSteamInventoryCache = 0xa29,
	k_EMsgGCRequestCrateEscalationLevel = 0xa2a,
	k_EMsgGCRequestCrateEscalationLevelResponse = 0xa2b,
	k_EMsgGCToGCUpdateSubscriptionItems = 0xa2c,
	k_EMsgGCToGCSelfPing = 0xa2d,
	k_EMsgGCToGCGetInfuxIntervalStats = 0xa2e,
	k_EMsgGCToGCGetInfuxIntervalStatsResponse = 0xa2f,
	k_EMsgGCToGCPurchaseSucceeded = 0xa30,
	k_EMsgClientToGCGetLimitedItemPurchaseQuantity = 0xa31,
	k_EMsgClientToGCGetLimitedItemPurchaseQuantityResponse = 0xa32,
	k_EMsgGCToGCBetaDeleteItems = 0xa33,
};

// Aligment: 4
// Size: 5
enum class quest_hud_types_t : uint32_t
{
	QUEST_HUD_TYPE_DEFAULT = 0x0,
	QUEST_HUD_TYPE_GOLD = 0x1,
	QUEST_HUD_TYPE_ATTACK = 0x2,
	QUEST_HUD_TYPE_DEFEND = 0x3,
	QUEST_NUM_HUD_TYPES = 0x4,
};

// Aligment: 4
// Size: 7
enum class DOTA_PURGE_FLAGS : uint32_t
{
	DOTA_PURGE_FLAG_NONE = 0x0,
	DOTA_PURGE_FLAG_REMOVE_BUFFS = 0x2,
	DOTA_PURGE_FLAG_REMOVE_DEBUFFS = 0x4,
	DOTA_PURGE_FLAG_REMOVE_STUNS = 0x8,
	DOTA_PURGE_FLAG_REMOVE_EXCEPTIONS = 0x10,
	DOTA_PURGE_FLAG_REMOVE_THIS_FRAME_ONLY = 0x20,
	DOTA_PURGE_FLAG_REMOVE_UNPURGABLE = 0x40,
};

// Aligment: 4
// Size: 3
enum class EHapticPulseType : uint32_t
{
	VR_HAND_HAPTIC_PULSE_LIGHT = 0x0,
	VR_HAND_HAPTIC_PULSE_MEDIUM = 0x1,
	VR_HAND_HAPTIC_PULSE_STRONG = 0x2,
};

// Aligment: 4
// Size: 3
enum class PointWorldTextJustifyHorizontal_t : uint32_t
{
	POINT_WORLD_TEXT_JUSTIFY_HORIZONTAL_LEFT = 0x0,
	POINT_WORLD_TEXT_JUSTIFY_HORIZONTAL_CENTER = 0x1,
	POINT_WORLD_TEXT_JUSTIFY_HORIZONTAL_RIGHT = 0x2,
};

// Aligment: 4
// Size: 5
enum class IBody::ActivityType : uint32_t
{
	MOTION_CONTROLLED_XY = 0x1,
	MOTION_CONTROLLED_Z = 0x2,
	ACTIVITY_UNINTERRUPTIBLE = 0x4,
	ACTIVITY_TRANSITORY = 0x8,
	ENTINDEX_PLAYBACK_RATE = 0x10,
};

// Aligment: 4
// Size: 6
enum class EGCPlatform : uint32_t
{
	k_eGCPlatform_None = 0x0,
	k_eGCPlatform_PC = 0x1,
	k_eGCPlatform_Mac = 0x2,
	k_eGCPlatform_Linux = 0x3,
	k_eGCPlatform_Android = 0x4,
	k_eGCPlatform_iOS = 0x5,
};

// Aligment: 4
// Size: 2
enum class EEventActionScoreMode : uint32_t
{
	k_eEventActionScoreMode_Add = 0x0,
	k_eEventActionScoreMode_Min = 0x1,
};

// Aligment: 4
// Size: 3
enum class WeaponState_t : uint32_t
{
	WEAPON_NOT_CARRIED = 0x0,
	WEAPON_IS_CARRIED_BY_PLAYER = 0x1,
	WEAPON_IS_ACTIVE = 0x2,
};

// Aligment: 4
// Size: 3
enum class PingConfirmationIconType : uint32_t
{
	PING_CONFIRMATION_STATE_ICON_TYPE_ATTACK = 0x0,
	PING_CONFIRMATION_STATE_ICON_TYPE_DEFEND = 0x1,
	PING_CONFIRMATION_STATE_ICON_TYPE_SMOKE = 0x2,
};

// Aligment: 4
// Size: 3
enum class PointTemplateOwnerSpawnGroupType_t : uint32_t
{
	INSERT_INTO_POINT_TEMPLATE_SPAWN_GROUP = 0x0,
	INSERT_INTO_CURRENTLY_ACTIVE_SPAWN_GROUP = 0x1,
	INSERT_INTO_NEWLY_CREATED_SPAWN_GROUP = 0x2,
};

// Aligment: 4
// Size: 26
enum class ETEProtobufIds : uint32_t
{
	TE_EffectDispatchId = 0x190,
	TE_ArmorRicochetId = 0x191,
	TE_BeamEntPointId = 0x192,
	TE_BeamEntsId = 0x193,
	TE_BeamPointsId = 0x194,
	TE_BeamRingId = 0x195,
	TE_BSPDecalId = 0x197,
	TE_BubblesId = 0x198,
	TE_BubbleTrailId = 0x199,
	TE_DecalId = 0x19a,
	TE_WorldDecalId = 0x19b,
	TE_EnergySplashId = 0x19c,
	TE_FizzId = 0x19d,
	TE_ShatterSurfaceId = 0x19e,
	TE_GlowSpriteId = 0x19f,
	TE_ImpactId = 0x1a0,
	TE_MuzzleFlashId = 0x1a1,
	TE_BloodStreamId = 0x1a2,
	TE_ExplosionId = 0x1a3,
	TE_DustId = 0x1a4,
	TE_LargeFunnelId = 0x1a5,
	TE_SparksId = 0x1a6,
	TE_PhysicsPropId = 0x1a7,
	TE_PlayerDecalId = 0x1a8,
	TE_ProjectedDecalId = 0x1a9,
	TE_SmokeId = 0x1aa,
};

// Aligment: 4
// Size: 4
enum class ValueRemapperOutputType_t : uint32_t
{
	OutputType_AnimationCycle = 0x0,
	OutputType_RotationX = 0x1,
	OutputType_RotationY = 0x2,
	OutputType_RotationZ = 0x3,
};

// Aligment: 4
// Size: 1
enum class PrefetchType : uint32_t
{
	PFT_SOUND = 0x0,
};

// Aligment: 4
// Size: 7
enum class IChoreoServices::ChoreoState_t : uint32_t
{
	STATE_PRE_SCRIPT = 0x0,
	STATE_WAIT_FOR_SCRIPT = 0x1,
	STATE_WALK_TO_MARK = 0x2,
	STATE_SYNCHRONIZE_SCRIPT = 0x3,
	STATE_PLAY_SCRIPT = 0x4,
	STATE_PLAY_SCRIPT_POST_IDLE = 0x5,
	STATE_PLAY_SCRIPT_POST_IDLE_DONE = 0x6,
};

// Aligment: 1
// Size: 6
enum class MoveCollide_t : uint8_t
{
	MOVECOLLIDE_DEFAULT = 0,
	MOVECOLLIDE_FLY_BOUNCE = 1,
	MOVECOLLIDE_FLY_CUSTOM = 2,
	MOVECOLLIDE_FLY_SLIDE = 3,
	MOVECOLLIDE_COUNT = 4,
	MOVECOLLIDE_MAX_BITS = 3,
};

// Aligment: 4
// Size: 9
enum class EGCMsgResponse : uint32_t
{
	k_EGCMsgResponseOK = 0x0,
	k_EGCMsgResponseDenied = 0x1,
	k_EGCMsgResponseServerError = 0x2,
	k_EGCMsgResponseTimeout = 0x3,
	k_EGCMsgResponseInvalid = 0x4,
	k_EGCMsgResponseNoMatch = 0x5,
	k_EGCMsgResponseUnknownError = 0x6,
	k_EGCMsgResponseNotLoggedOn = 0x7,
	k_EGCMsgFailedToCreate = 0x8,
};

// Aligment: 4
// Size: 2
enum class attributeprovidertypes_t : uint32_t
{
	PROVIDER_GENERIC = 0x0,
	PROVIDER_WEAPON = 0x1,
};

// Aligment: 4
// Size: 3
enum class PointWorldTextJustifyVertical_t : uint32_t
{
	POINT_WORLD_TEXT_JUSTIFY_VERTICAL_BOTTOM = 0x0,
	POINT_WORLD_TEXT_JUSTIFY_VERTICAL_CENTER = 0x1,
	POINT_WORLD_TEXT_JUSTIFY_VERTICAL_TOP = 0x2,
};

// Aligment: 4
// Size: 5
enum class EReadyCheckRequestResult : uint32_t
{
	k_EReadyCheckRequestResult_Success = 0x0,
	k_EReadyCheckRequestResult_AlreadyInProgress = 0x1,
	k_EReadyCheckRequestResult_NotInParty = 0x2,
	k_EReadyCheckRequestResult_SendError = 0x3,
	k_EReadyCheckRequestResult_UnknownError = 0x4,
};

// Aligment: 4
// Size: 17
enum class DOTATeam_t : uint32_t
{
	DOTA_TEAM_FIRST = 0x2,
	DOTA_TEAM_GOODGUYS = 0x2,
	DOTA_TEAM_BADGUYS = 0x3,
	DOTA_TEAM_NEUTRALS = 0x4,
	DOTA_TEAM_NOTEAM = 0x5,
	DOTA_TEAM_CUSTOM_1 = 0x6,
	DOTA_TEAM_CUSTOM_2 = 0x7,
	DOTA_TEAM_CUSTOM_3 = 0x8,
	DOTA_TEAM_CUSTOM_4 = 0x9,
	DOTA_TEAM_CUSTOM_5 = 0xa,
	DOTA_TEAM_CUSTOM_6 = 0xb,
	DOTA_TEAM_CUSTOM_7 = 0xc,
	DOTA_TEAM_CUSTOM_8 = 0xd,
	DOTA_TEAM_COUNT = 0xe,
	DOTA_TEAM_CUSTOM_MIN = 0x6,
	DOTA_TEAM_CUSTOM_MAX = 0xd,
	DOTA_TEAM_CUSTOM_COUNT = 0x8,
};

// Aligment: 4
// Size: 43
enum class EEvent : uint32_t
{
	EVENT_ID_NONE = 0x0,
	EVENT_ID_DIRETIDE = 0x1,
	EVENT_ID_SPRING_FESTIVAL = 0x2,
	EVENT_ID_FROSTIVUS_2013 = 0x3,
	EVENT_ID_COMPENDIUM_2014 = 0x4,
	EVENT_ID_NEXON_PC_BANG = 0x5,
	EVENT_ID_PWRD_DAC_2015 = 0x6,
	EVENT_ID_NEW_BLOOM_2015 = 0x7,
	EVENT_ID_INTERNATIONAL_2015 = 0x8,
	EVENT_ID_FALL_MAJOR_2015 = 0x9,
	EVENT_ID_ORACLE_PA = 0xa,
	EVENT_ID_NEW_BLOOM_2015_PREBEAST = 0xb,
	EVENT_ID_FROSTIVUS = 0xc,
	EVENT_ID_WINTER_MAJOR_2016 = 0xd,
	EVENT_ID_INTERNATIONAL_2016 = 0xe,
	EVENT_ID_FALL_MAJOR_2016 = 0xf,
	EVENT_ID_WINTER_MAJOR_2017 = 0x10,
	EVENT_ID_NEW_BLOOM_2017 = 0x11,
	EVENT_ID_INTERNATIONAL_2017 = 0x12,
	EVENT_ID_PLUS_SUBSCRIPTION = 0x13,
	EVENT_ID_SINGLES_DAY_2017 = 0x14,
	EVENT_ID_FROSTIVUS_2017 = 0x15,
	EVENT_ID_INTERNATIONAL_2018 = 0x16,
	EVENT_ID_FROSTIVUS_2018 = 0x17,
	EVENT_ID_NEW_BLOOM_2019 = 0x18,
	EVENT_ID_INTERNATIONAL_2019 = 0x19,
	EVENT_ID_NEW_PLAYER_EXPERIENCE = 0x1a,
	EVENT_ID_FROSTIVUS_2019 = 0x1b,
	EVENT_ID_NEW_BLOOM_2020 = 0x1c,
	EVENT_ID_INTERNATIONAL_2020 = 0x1d,
	EVENT_ID_TEAM_FANDOM = 0x1e,
	EVENT_ID_DIRETIDE_2020 = 0x1f,
	EVENT_ID_SPRING_2021 = 0x20,
	EVENT_ID_FALL_2021 = 0x21,
	EVENT_ID_TEAM_FANDOM_FALL_2021 = 0x22,
	EVENT_ID_TEAM_2021_2022_TOUR2 = 0x23,
	EVENT_ID_INTERNATIONAL_2022 = 0x24,
	EVENT_ID_TEAM_2021_2022_TOUR3 = 0x25,
	EVENT_ID_TEAM_INTERNATIONAL_2022 = 0x26,
	EVENT_ID_PERMANENT_GRANTS = 0x27,
	EVENT_ID_MUERTA_RELEASE_SPRING2023 = 0x28,
	EVENT_ID_TEAM_2023_TOUR1 = 0x29,
	EVENT_ID_TEAM_2023_TOUR2 = 0x2a,
};

// Aligment: 4
// Size: 4
enum class ELeaguePhase : uint32_t
{
	LEAGUE_PHASE_UNSET = 0x0,
	LEAGUE_PHASE_REGIONAL_QUALIFIER = 0x1,
	LEAGUE_PHASE_GROUP_STAGE = 0x2,
	LEAGUE_PHASE_MAIN_EVENT = 0x3,
};

// Flags: MEnumFlagsWithOverlappingBits
// Aligment: 4
// Size: 11
enum class DOTA_UNIT_TARGET_TYPE : uint32_t
{
	DOTA_UNIT_TARGET_NONE = 0x0,
	DOTA_UNIT_TARGET_HERO = 0x1,
	DOTA_UNIT_TARGET_CREEP = 0x2,
	DOTA_UNIT_TARGET_BUILDING = 0x4,
	DOTA_UNIT_TARGET_COURIER = 0x10,
	DOTA_UNIT_TARGET_OTHER = 0x20,
	DOTA_UNIT_TARGET_TREE = 0x40,
	DOTA_UNIT_TARGET_CUSTOM = 0x80,
	DOTA_UNIT_TARGET_SELF = 0x100,
	DOTA_UNIT_TARGET_BASIC = 0x12,
	DOTA_UNIT_TARGET_ALL = 0x37,
};

// Aligment: 4
// Size: 22
enum class DamageTypes_t : uint32_t
{
	DMG_GENERIC = 0x0,
	DMG_CRUSH = 0x1,
	DMG_BULLET = 0x2,
	DMG_SLASH = 0x4,
	DMG_BURN = 0x8,
	DMG_VEHICLE = 0x10,
	DMG_FALL = 0x20,
	DMG_BLAST = 0x40,
	DMG_CLUB = 0x80,
	DMG_SHOCK = 0x100,
	DMG_SONIC = 0x200,
	DMG_ENERGYBEAM = 0x400,
	DMG_DROWN = 0x4000,
	DMG_POISON = 0x8000,
	DMG_RADIATION = 0x10000,
	DMG_DROWNRECOVER = 0x20000,
	DMG_ACID = 0x40000,
	DMG_PHYSGUN = 0x100000,
	DMG_DISSOLVE = 0x200000,
	DMG_BLAST_SURFACE = 0x400000,
	DMG_BUCKSHOT = 0x1000000,
	DMG_LASTGENERICFLAG = 0x1000000,
};

// Aligment: 1
// Size: 9
enum class SolidType_t : uint8_t
{
	SOLID_NONE = 0,
	SOLID_BSP = 1,
	SOLID_BBOX = 2,
	SOLID_OBB = 3,
	SOLID_SPHERE = 4,
	SOLID_POINT = 5,
	SOLID_VPHYSICS = 6,
	SOLID_CAPSULE = 7,
	SOLID_LAST = 8,
};

// Aligment: 4
// Size: 3
enum class DOTA_CM_PICK : uint32_t
{
	DOTA_CM_RANDOM = 0x0,
	DOTA_CM_GOOD_GUYS = 0x1,
	DOTA_CM_BAD_GUYS = 0x2,
};

// Aligment: 4
// Size: 11
enum class DOTAPostGameColumn_t : uint32_t
{
	DOTA_POST_GAME_COLUMN_LEVEL = 0x0,
	DOTA_POST_GAME_COLUMN_ITEMS = 0x1,
	DOTA_POST_GAME_COLUMN_KILLS = 0x2,
	DOTA_POST_GAME_COLUMN_DEATHS = 0x3,
	DOTA_POST_GAME_COLUMN_ASSISTS = 0x4,
	DOTA_POST_GAME_COLUMN_NET_WORTH = 0x5,
	DOTA_POST_GAME_COLUMN_LAST_HITS = 0x6,
	DOTA_POST_GAME_COLUMN_DENIES = 0x7,
	DOTA_POST_GAME_COLUMN_DAMAGE = 0x8,
	DOTA_POST_GAME_COLUMN_HEALING = 0x9,
	DOTA_POST_GAME_COLUMN_MAX = 0xa,
};

// Aligment: 4
// Size: 7
enum class DOTAPortraitEnvironmentType_t : uint32_t
{
	DOTA_PORTRAIT_ENVIRONMENT_INVALID = 0xffffffffffffffff,
	DOTA_PORTRAIT_ENVIRONMENT_DEFAULT = 0x0,
	DOTA_PORTRAIT_ENVIRONMENT_FULL_BODY = 0x1,
	DOTA_PORTRAIT_ENVIRONMENT_CARD = 0x2,
	DOTA_PORTRAIT_ENVIRONMENT_WEBPAGE = 0x3,
	DOTA_PORTRAIT_ENVIRONMENT_FULL_BODY_RIGHT_SIDE = 0x4,
	DOTA_PORTRAIT_ENVIRONMENT_TYPE_COUNT = 0x5,
};

// Aligment: 4
// Size: 5
enum class Fantasy_Roles : uint32_t
{
	FANTASY_ROLE_UNDEFINED = 0x0,
	FANTASY_ROLE_CORE = 0x1,
	FANTASY_ROLE_SUPPORT = 0x2,
	FANTASY_ROLE_OFFLANE = 0x3,
	FANTASY_ROLE_MID = 0x4,
};

// Aligment: 4
// Size: 5
enum class DOTA_CHAT_INFORMATIONAL : uint32_t
{
	INFO_COOP_BATTLE_POINTS_RULES = 0x1,
	INFO_FROSTIVUS_ABANDON_REMINDER = 0x2,
	INFO_RANKED_REMINDER = 0x3,
	INFO_COOP_LOW_PRIORITY_PASSIVE_REMINDER = 0x4,
	INFO_CUSTOM_GAME_PENALTY_REMINDER = 0x5,
};

// Aligment: 4
// Size: 5
enum class quest_text_replace_values_t : uint32_t
{
	QUEST_TEXT_REPLACE_VALUE_CURRENT_VALUE = 0x0,
	QUEST_TEXT_REPLACE_VALUE_TARGET_VALUE = 0x1,
	QUEST_TEXT_REPLACE_VALUE_ROUND = 0x2,
	QUEST_TEXT_REPLACE_VALUE_REWARD = 0x3,
	QUEST_NUM_TEXT_REPLACE_VALUES = 0x4,
};

// Aligment: 4
// Size: 4
enum class PetLevelup_Rule_t : uint32_t
{
	PETLEVELFROM_NOTHING = 0x0,
	PETLEVELFROM_KILLEATER = 0x1,
	PETLEVELFROM_COMPENDIUM_LEVEL = 0x2,
	NUM_PETLEVELUPRULES = 0x3,
};

// Aligment: 4
// Size: 3
enum class Bidirectional_Messages : uint32_t
{
	bi_RebroadcastGameEvent = 0x10,
	bi_RebroadcastSource = 0x11,
	bi_GameEvent = 0x12,
};

// Aligment: 4
// Size: 4
enum class EDPCFavoriteType : uint32_t
{
	FAVORITE_TYPE_ALL = 0x0,
	FAVORITE_TYPE_PLAYER = 0x1,
	FAVORITE_TYPE_TEAM = 0x2,
	FAVORITE_TYPE_LEAGUE = 0x3,
};

// Aligment: 4
// Size: 1
enum class navproperties_t : uint32_t
{
	NAV_IGNORE = 0x1,
};

// Aligment: 4
// Size: 10
enum class Fantasy_Selection_Mode : uint32_t
{
	FANTASY_SELECTION_INVALID = 0x0,
	FANTASY_SELECTION_LOCKED = 0x1,
	FANTASY_SELECTION_SHUFFLE = 0x2,
	FANTASY_SELECTION_FREE_PICK = 0x3,
	FANTASY_SELECTION_ENDED = 0x4,
	FANTASY_SELECTION_PRE_SEASON = 0x5,
	FANTASY_SELECTION_PRE_DRAFT = 0x6,
	FANTASY_SELECTION_DRAFTING = 0x7,
	FANTASY_SELECTION_REGULAR_SEASON = 0x8,
	FANTASY_SELECTION_CARD_BASED = 0x9,
};

// Aligment: 4
// Size: 22
enum class DOTA_UNIT_TARGET_FLAGS : uint32_t
{
	DOTA_UNIT_TARGET_FLAG_NONE = 0x0,
	DOTA_UNIT_TARGET_FLAG_RANGED_ONLY = 0x2,
	DOTA_UNIT_TARGET_FLAG_MELEE_ONLY = 0x4,
	DOTA_UNIT_TARGET_FLAG_DEAD = 0x8,
	DOTA_UNIT_TARGET_FLAG_MAGIC_IMMUNE_ENEMIES = 0x10,
	DOTA_UNIT_TARGET_FLAG_NOT_MAGIC_IMMUNE_ALLIES = 0x20,
	DOTA_UNIT_TARGET_FLAG_INVULNERABLE = 0x40,
	DOTA_UNIT_TARGET_FLAG_FOW_VISIBLE = 0x80,
	DOTA_UNIT_TARGET_FLAG_NO_INVIS = 0x100,
	DOTA_UNIT_TARGET_FLAG_NOT_ANCIENTS = 0x200,
	DOTA_UNIT_TARGET_FLAG_PLAYER_CONTROLLED = 0x400,
	DOTA_UNIT_TARGET_FLAG_NOT_DOMINATED = 0x800,
	DOTA_UNIT_TARGET_FLAG_NOT_SUMMONED = 0x1000,
	DOTA_UNIT_TARGET_FLAG_NOT_ILLUSIONS = 0x2000,
	DOTA_UNIT_TARGET_FLAG_NOT_ATTACK_IMMUNE = 0x4000,
	DOTA_UNIT_TARGET_FLAG_MANA_ONLY = 0x8000,
	DOTA_UNIT_TARGET_FLAG_CHECK_DISABLE_HELP = 0x10000,
	DOTA_UNIT_TARGET_FLAG_NOT_CREEP_HERO = 0x20000,
	DOTA_UNIT_TARGET_FLAG_OUT_OF_WORLD = 0x40000,
	DOTA_UNIT_TARGET_FLAG_NOT_NIGHTMARED = 0x80000,
	DOTA_UNIT_TARGET_FLAG_PREFER_ENEMIES = 0x100000,
	DOTA_UNIT_TARGET_FLAG_RESPECT_OBSTRUCTIONS = 0x200000,
};

// Aligment: 4
// Size: 3
enum class WheeledPhysicsVehicleChassisFrame_t : uint32_t
{
	WHEELED_VEHICLE_CHASSIS_FRAME_XFORWARD_YLEFT = 0x0,
	WHEELED_VEHICLE_CHASSIS_FRAME_ZFORWARD_XLEFT = 0x1,
	WHEELED_VEHICLE_CHASSIS_FRAME_YBACKWARD_XLEFT = 0x2,
};

// Aligment: 4
// Size: 8
enum class attackfail : uint32_t
{
	DOTA_ATTACK_RECORD_FAIL_NO = 0x0,
	DOTA_ATTACK_RECORD_FAIL_TERRAIN_MISS = 0x1,
	DOTA_ATTACK_RECORD_FAIL_SOURCE_MISS = 0x2,
	DOTA_ATTACK_RECORD_FAIL_TARGET_EVADED = 0x3,
	DOTA_ATTACK_RECORD_FAIL_TARGET_INVULNERABLE = 0x4,
	DOTA_ATTACK_RECORD_FAIL_TARGET_OUT_OF_RANGE = 0x5,
	DOTA_ATTACK_RECORD_CANNOT_FAIL = 0x6,
	DOTA_ATTACK_RECORD_FAIL_BLOCKED_BY_OBSTRUCTION = 0x7,
};

// Aligment: 4
// Size: 13
enum class DOTA_GameState : uint32_t
{
	DOTA_GAMERULES_STATE_INIT = 0x0,
	DOTA_GAMERULES_STATE_WAIT_FOR_PLAYERS_TO_LOAD = 0x1,
	DOTA_GAMERULES_STATE_HERO_SELECTION = 0x2,
	DOTA_GAMERULES_STATE_STRATEGY_TIME = 0x3,
	DOTA_GAMERULES_STATE_PRE_GAME = 0x4,
	DOTA_GAMERULES_STATE_GAME_IN_PROGRESS = 0x5,
	DOTA_GAMERULES_STATE_POST_GAME = 0x6,
	DOTA_GAMERULES_STATE_DISCONNECT = 0x7,
	DOTA_GAMERULES_STATE_TEAM_SHOWCASE = 0x8,
	DOTA_GAMERULES_STATE_CUSTOM_GAME_SETUP = 0x9,
	DOTA_GAMERULES_STATE_WAIT_FOR_MAP_TO_LOAD = 0xa,
	DOTA_GAMERULES_STATE_SCENARIO_SETUP = 0xb,
	DOTA_GAMERULES_STATE_LAST = 0xc,
};

// Aligment: 4
// Size: 5
enum class ELeagueNodeType : uint32_t
{
	INVALID_NODE_TYPE = 0x0,
	BEST_OF_ONE = 0x1,
	BEST_OF_THREE = 0x2,
	BEST_OF_FIVE = 0x3,
	BEST_OF_TWO = 0x4,
};

// Aligment: 4
// Size: 3
enum class SimpleConstraintSoundProfile::SimpleConstraintsSoundProfileKeypoints_t : uint32_t
{
	kMIN_THRESHOLD = 0x0,
	kMIN_FULL = 0x1,
	kHIGHWATER = 0x2,
};

// Aligment: 4
// Size: 63
enum class DOTA_HeroPickState : uint32_t
{
	DOTA_HEROPICK_STATE_NONE = 0x0,
	DOTA_HEROPICK_STATE_AP_SELECT = 0x1,
	DOTA_HEROPICK_STATE_SD_SELECT = 0x2,
	DOTA_HEROPICK_STATE_INTRO_SELECT_UNUSED = 0x3,
	DOTA_HEROPICK_STATE_RD_SELECT_UNUSED = 0x4,
	DOTA_HEROPICK_STATE_CM_INTRO = 0x5,
	DOTA_HEROPICK_STATE_CM_CAPTAINPICK = 0x6,
	DOTA_HEROPICK_STATE_CM_BAN1 = 0x7,
	DOTA_HEROPICK_STATE_CM_BAN2 = 0x8,
	DOTA_HEROPICK_STATE_CM_BAN3 = 0x9,
	DOTA_HEROPICK_STATE_CM_BAN4 = 0xa,
	DOTA_HEROPICK_STATE_CM_BAN5 = 0xb,
	DOTA_HEROPICK_STATE_CM_BAN6 = 0xc,
	DOTA_HEROPICK_STATE_CM_BAN7 = 0xd,
	DOTA_HEROPICK_STATE_CM_BAN8 = 0xe,
	DOTA_HEROPICK_STATE_CM_BAN9 = 0xf,
	DOTA_HEROPICK_STATE_CM_BAN10 = 0x10,
	DOTA_HEROPICK_STATE_CM_BAN11 = 0x11,
	DOTA_HEROPICK_STATE_CM_BAN12 = 0x12,
	DOTA_HEROPICK_STATE_CM_BAN13 = 0x13,
	DOTA_HEROPICK_STATE_CM_BAN14 = 0x14,
	DOTA_HEROPICK_STATE_CM_SELECT1 = 0x15,
	DOTA_HEROPICK_STATE_CM_SELECT2 = 0x16,
	DOTA_HEROPICK_STATE_CM_SELECT3 = 0x17,
	DOTA_HEROPICK_STATE_CM_SELECT4 = 0x18,
	DOTA_HEROPICK_STATE_CM_SELECT5 = 0x19,
	DOTA_HEROPICK_STATE_CM_SELECT6 = 0x1a,
	DOTA_HEROPICK_STATE_CM_SELECT7 = 0x1b,
	DOTA_HEROPICK_STATE_CM_SELECT8 = 0x1c,
	DOTA_HEROPICK_STATE_CM_SELECT9 = 0x1d,
	DOTA_HEROPICK_STATE_CM_SELECT10 = 0x1e,
	DOTA_HEROPICK_STATE_CM_PICK = 0x1f,
	DOTA_HEROPICK_STATE_AR_SELECT = 0x20,
	DOTA_HEROPICK_STATE_MO_SELECT = 0x21,
	DOTA_HEROPICK_STATE_FH_SELECT = 0x22,
	DOTA_HEROPICK_STATE_CD_INTRO = 0x23,
	DOTA_HEROPICK_STATE_CD_CAPTAINPICK = 0x24,
	DOTA_HEROPICK_STATE_CD_BAN1 = 0x25,
	DOTA_HEROPICK_STATE_CD_BAN2 = 0x26,
	DOTA_HEROPICK_STATE_CD_BAN3 = 0x27,
	DOTA_HEROPICK_STATE_CD_BAN4 = 0x28,
	DOTA_HEROPICK_STATE_CD_BAN5 = 0x29,
	DOTA_HEROPICK_STATE_CD_BAN6 = 0x2a,
	DOTA_HEROPICK_STATE_CD_SELECT1 = 0x2b,
	DOTA_HEROPICK_STATE_CD_SELECT2 = 0x2c,
	DOTA_HEROPICK_STATE_CD_SELECT3 = 0x2d,
	DOTA_HEROPICK_STATE_CD_SELECT4 = 0x2e,
	DOTA_HEROPICK_STATE_CD_SELECT5 = 0x2f,
	DOTA_HEROPICK_STATE_CD_SELECT6 = 0x30,
	DOTA_HEROPICK_STATE_CD_SELECT7 = 0x31,
	DOTA_HEROPICK_STATE_CD_SELECT8 = 0x32,
	DOTA_HEROPICK_STATE_CD_SELECT9 = 0x33,
	DOTA_HEROPICK_STATE_CD_SELECT10 = 0x34,
	DOTA_HEROPICK_STATE_CD_PICK = 0x35,
	DOTA_HEROPICK_STATE_BD_SELECT = 0x36,
	DOTA_HERO_PICK_STATE_ABILITY_DRAFT_SELECT = 0x37,
	DOTA_HERO_PICK_STATE_ARDM_SELECT = 0x38,
	DOTA_HEROPICK_STATE_ALL_DRAFT_SELECT = 0x39,
	DOTA_HERO_PICK_STATE_CUSTOMGAME_SELECT = 0x3a,
	DOTA_HEROPICK_STATE_SELECT_PENALTY = 0x3b,
	DOTA_HEROPICK_STATE_CUSTOM_PICK_RULES = 0x3c,
	DOTA_HEROPICK_STATE_SCENARIO_PICK = 0x3d,
	DOTA_HEROPICK_STATE_COUNT = 0x3e,
};

// Aligment: 4
// Size: 7
enum class PlayerConnectedState : uint32_t
{
	PlayerNeverConnected = 0xffffffffffffffff,
	PlayerConnected = 0x0,
	PlayerConnecting = 0x1,
	PlayerReconnecting = 0x2,
	PlayerDisconnecting = 0x3,
	PlayerDisconnected = 0x4,
	PlayerReserved = 0x5,
};

// Aligment: 4
// Size: 3
enum class ChatIgnoreType_t : uint32_t
{
	CHAT_IGNORE_NONE = 0x0,
	CHAT_IGNORE_ALL = 0x1,
	CHAT_IGNORE_TEAM = 0x2,
};

// Aligment: 4
// Size: 5
enum class DoorState_t : uint32_t
{
	DOOR_STATE_CLOSED = 0x0,
	DOOR_STATE_OPENING = 0x1,
	DOOR_STATE_OPEN = 0x2,
	DOOR_STATE_CLOSING = 0x3,
	DOOR_STATE_AJAR = 0x4,
};

// Aligment: 4
// Size: 6
enum class LatchDirtyPermission_t : uint32_t
{
	LATCH_DIRTY_DISALLOW = 0x0,
	LATCH_DIRTY_SERVER_CONTROLLED = 0x1,
	LATCH_DIRTY_CLIENT_SIMULATED = 0x2,
	LATCH_DIRTY_PREDICTION = 0x3,
	LATCH_DIRTY_FRAMESIMULATE = 0x4,
	LATCH_DIRTY_PARTICLE_SIMULATE = 0x5,
};

// Aligment: 4
// Size: 3
enum class subquest_text_replace_values_t : uint32_t
{
	SUBQUEST_TEXT_REPLACE_VALUE_CURRENT_VALUE = 0x0,
	SUBQUEST_TEXT_REPLACE_VALUE_TARGET_VALUE = 0x1,
	SUBQUEST_NUM_TEXT_REPLACE_VALUES = 0x2,
};

// Aligment: 4
// Size: 27
enum class RumbleEffect_t : uint32_t
{
	RUMBLE_INVALID = 0xffffffffffffffff,
	RUMBLE_STOP_ALL = 0x0,
	RUMBLE_PISTOL = 0x1,
	RUMBLE_357 = 0x2,
	RUMBLE_SMG1 = 0x3,
	RUMBLE_AR2 = 0x4,
	RUMBLE_SHOTGUN_SINGLE = 0x5,
	RUMBLE_SHOTGUN_DOUBLE = 0x6,
	RUMBLE_AR2_ALT_FIRE = 0x7,
	RUMBLE_RPG_MISSILE = 0x8,
	RUMBLE_CROWBAR_SWING = 0x9,
	RUMBLE_AIRBOAT_GUN = 0xa,
	RUMBLE_JEEP_ENGINE_LOOP = 0xb,
	RUMBLE_FLAT_LEFT = 0xc,
	RUMBLE_FLAT_RIGHT = 0xd,
	RUMBLE_FLAT_BOTH = 0xe,
	RUMBLE_DMG_LOW = 0xf,
	RUMBLE_DMG_MED = 0x10,
	RUMBLE_DMG_HIGH = 0x11,
	RUMBLE_FALL_LONG = 0x12,
	RUMBLE_FALL_SHORT = 0x13,
	RUMBLE_PHYSCANNON_OPEN = 0x14,
	RUMBLE_PHYSCANNON_PUNT = 0x15,
	RUMBLE_PHYSCANNON_LOW = 0x16,
	RUMBLE_PHYSCANNON_MEDIUM = 0x17,
	RUMBLE_PHYSCANNON_HIGH = 0x18,
	NUM_RUMBLE_EFFECTS = 0x19,
};

// Aligment: 4
// Size: 16
enum class vote_create_failed_t : uint32_t
{
	VOTE_FAILED_GENERIC = 0x0,
	VOTE_FAILED_TRANSITIONING_PLAYERS = 0x1,
	VOTE_FAILED_RATE_EXCEEDED = 0x2,
	VOTE_FAILED_YES_MUST_EXCEED_NO = 0x3,
	VOTE_FAILED_QUORUM_FAILURE = 0x4,
	VOTE_FAILED_ISSUE_DISABLED = 0x5,
	VOTE_FAILED_MAP_NOT_FOUND = 0x6,
	VOTE_FAILED_MAP_NAME_REQUIRED = 0x7,
	VOTE_FAILED_FAILED_RECENTLY = 0x8,
	VOTE_FAILED_TEAM_CANT_CALL = 0x9,
	VOTE_FAILED_WAITINGFORPLAYERS = 0xa,
	VOTE_FAILED_PLAYERNOTFOUND = 0xb,
	VOTE_FAILED_CANNOT_KICK_ADMIN = 0xc,
	VOTE_FAILED_SCRAMBLE_IN_PROGRESS = 0xd,
	VOTE_FAILED_SPECTATOR = 0xe,
	VOTE_FAILED_MAX = 0xf,
};

// Aligment: 1
// Size: 20
enum class RenderFx_t : uint8_t
{
	kRenderFxNone = 0,
	kRenderFxPulseSlow = 1,
	kRenderFxPulseFast = 2,
	kRenderFxPulseSlowWide = 3,
	kRenderFxPulseFastWide = 4,
	kRenderFxFadeSlow = 5,
	kRenderFxFadeFast = 6,
	kRenderFxSolidSlow = 7,
	kRenderFxSolidFast = 8,
	kRenderFxStrobeSlow = 9,
	kRenderFxStrobeFast = 10,
	kRenderFxStrobeFaster = 11,
	kRenderFxFlickerSlow = 12,
	kRenderFxFlickerFast = 13,
	kRenderFxNoDissipation = 14,
	kRenderFxFadeOut = 15,
	kRenderFxFadeIn = 16,
	kRenderFxPulseFastWider = 17,
	kRenderFxGlowShell = 18,
	kRenderFxMax = 19,
};

// Aligment: 4
// Size: 10
enum class DOTABotDifficulty : uint32_t
{
	BOT_DIFFICULTY_PASSIVE = 0x0,
	BOT_DIFFICULTY_EASY = 0x1,
	BOT_DIFFICULTY_MEDIUM = 0x2,
	BOT_DIFFICULTY_HARD = 0x3,
	BOT_DIFFICULTY_UNFAIR = 0x4,
	BOT_DIFFICULTY_INVALID = 0x5,
	BOT_DIFFICULTY_EXTRA1 = 0x6,
	BOT_DIFFICULTY_EXTRA2 = 0x7,
	BOT_DIFFICULTY_EXTRA3 = 0x8,
	BOT_DIFFICULTY_NPX = 0x9,
};

// Aligment: 4
// Size: 3
enum class ECustomGameWhitelistState : uint32_t
{
	CUSTOM_GAME_WHITELIST_STATE_UNKNOWN = 0x0,
	CUSTOM_GAME_WHITELIST_STATE_APPROVED = 0x1,
	CUSTOM_GAME_WHITELIST_STATE_REJECTED = 0x2,
};

// Aligment: 4
// Size: 5
enum class ERankType : uint32_t
{
	k_ERankType_Invalid = 0x0,
	k_ERankType_Casual = 0x1,
	k_ERankType_Ranked = 0x2,
	k_ERankType_CasualLegacy = 0x3,
	k_ERankType_RankedLegacy = 0x4,
};

// Aligment: 4
// Size: 9
enum class AttributeDerivedStats : uint32_t
{
	DOTA_ATTRIBUTE_STRENGTH_DAMAGE = 0x0,
	DOTA_ATTRIBUTE_STRENGTH_HP = 0x1,
	DOTA_ATTRIBUTE_STRENGTH_HP_REGEN = 0x2,
	DOTA_ATTRIBUTE_AGILITY_DAMAGE = 0x3,
	DOTA_ATTRIBUTE_AGILITY_ARMOR = 0x4,
	DOTA_ATTRIBUTE_AGILITY_ATTACK_SPEED = 0x5,
	DOTA_ATTRIBUTE_INTELLIGENCE_DAMAGE = 0x6,
	DOTA_ATTRIBUTE_INTELLIGENCE_MANA = 0x7,
	DOTA_ATTRIBUTE_INTELLIGENCE_MANA_REGEN = 0x8,
};

// Aligment: 4
// Size: 45
enum class DOTA_COMBATLOG_TYPES : uint32_t
{
	DOTA_COMBATLOG_INVALID = 0xffffffffffffffff,
	DOTA_COMBATLOG_DAMAGE = 0x0,
	DOTA_COMBATLOG_HEAL = 0x1,
	DOTA_COMBATLOG_MODIFIER_ADD = 0x2,
	DOTA_COMBATLOG_MODIFIER_REMOVE = 0x3,
	DOTA_COMBATLOG_DEATH = 0x4,
	DOTA_COMBATLOG_ABILITY = 0x5,
	DOTA_COMBATLOG_ITEM = 0x6,
	DOTA_COMBATLOG_LOCATION = 0x7,
	DOTA_COMBATLOG_GOLD = 0x8,
	DOTA_COMBATLOG_GAME_STATE = 0x9,
	DOTA_COMBATLOG_XP = 0xa,
	DOTA_COMBATLOG_PURCHASE = 0xb,
	DOTA_COMBATLOG_BUYBACK = 0xc,
	DOTA_COMBATLOG_ABILITY_TRIGGER = 0xd,
	DOTA_COMBATLOG_PLAYERSTATS = 0xe,
	DOTA_COMBATLOG_MULTIKILL = 0xf,
	DOTA_COMBATLOG_KILLSTREAK = 0x10,
	DOTA_COMBATLOG_TEAM_BUILDING_KILL = 0x11,
	DOTA_COMBATLOG_FIRST_BLOOD = 0x12,
	DOTA_COMBATLOG_MODIFIER_STACK_EVENT = 0x13,
	DOTA_COMBATLOG_NEUTRAL_CAMP_STACK = 0x14,
	DOTA_COMBATLOG_PICKUP_RUNE = 0x15,
	DOTA_COMBATLOG_REVEALED_INVISIBLE = 0x16,
	DOTA_COMBATLOG_HERO_SAVED = 0x17,
	DOTA_COMBATLOG_MANA_RESTORED = 0x18,
	DOTA_COMBATLOG_HERO_LEVELUP = 0x19,
	DOTA_COMBATLOG_BOTTLE_HEAL_ALLY = 0x1a,
	DOTA_COMBATLOG_ENDGAME_STATS = 0x1b,
	DOTA_COMBATLOG_INTERRUPT_CHANNEL = 0x1c,
	DOTA_COMBATLOG_ALLIED_GOLD = 0x1d,
	DOTA_COMBATLOG_AEGIS_TAKEN = 0x1e,
	DOTA_COMBATLOG_MANA_DAMAGE = 0x1f,
	DOTA_COMBATLOG_PHYSICAL_DAMAGE_PREVENTED = 0x20,
	DOTA_COMBATLOG_UNIT_SUMMONED = 0x21,
	DOTA_COMBATLOG_ATTACK_EVADE = 0x22,
	DOTA_COMBATLOG_TREE_CUT = 0x23,
	DOTA_COMBATLOG_SUCCESSFUL_SCAN = 0x24,
	DOTA_COMBATLOG_END_KILLSTREAK = 0x25,
	DOTA_COMBATLOG_BLOODSTONE_CHARGE = 0x26,
	DOTA_COMBATLOG_CRITICAL_DAMAGE = 0x27,
	DOTA_COMBATLOG_SPELL_ABSORB = 0x28,
	DOTA_COMBATLOG_UNIT_TELEPORTED = 0x29,
	DOTA_COMBATLOG_KILL_EATER_EVENT = 0x2a,
	DOTA_COMBATLOG_NEUTRAL_ITEM_EARNED = 0x2b,
};

// Aligment: 4
// Size: 2
enum class CRR_Response::ResponseEnum_t : uint32_t
{
	MAX_RESPONSE_NAME = 0xc0,
	MAX_RULE_NAME = 0x80,
};

// Aligment: 4
// Size: 24
enum class EGCBaseMsg : uint32_t
{
	k_EMsgGCReplicateConVars = 0xfa2,
	k_EMsgGCConVarUpdated = 0xfa3,
	k_EMsgGCInviteToParty = 0x1195,
	k_EMsgGCInvitationCreated = 0x1196,
	k_EMsgGCPartyInviteResponse = 0x1197,
	k_EMsgGCKickFromParty = 0x1198,
	k_EMsgGCLeaveParty = 0x1199,
	k_EMsgGCServerAvailable = 0x119a,
	k_EMsgGCClientConnectToServer = 0x119b,
	k_EMsgGCGameServerInfo = 0x119c,
	k_EMsgGCLANServerAvailable = 0x119f,
	k_EMsgGCInviteToLobby = 0x11a0,
	k_EMsgGCLobbyInviteResponse = 0x11a1,
	k_EMsgGCToClientPollFileRequest = 0x11a2,
	k_EMsgGCToClientPollFileResponse = 0x11a3,
	k_EMsgGCToGCPerformManualOp = 0x11a4,
	k_EMsgGCToGCPerformManualOpCompleted = 0x11a5,
	k_EMsgGCToGCReloadServerRegionSettings = 0x11a6,
	k_EMsgGCAdditionalWelcomeMsgList = 0x11a7,
	k_EMsgGCToClientApplyRemoteConVars = 0x11a8,
	k_EMsgGCToServerApplyRemoteConVars = 0x11a9,
	k_EMsgClientToGCIntegrityStatus = 0x11aa,
	k_EMsgClientToGCAggregateMetrics = 0x11ab,
	k_EMsgGCToClientAggregateMetricsBackoff = 0x11ac,
};

// Aligment: 4
// Size: 264
enum class modifierfunction : uint32_t
{
	MODIFIER_PROPERTY_PREATTACK_BONUS_DAMAGE = 0x0,
	MODIFIER_PROPERTY_PREATTACK_BONUS_DAMAGE_TARGET = 0x1,
	MODIFIER_PROPERTY_PREATTACK_BONUS_DAMAGE_PROC = 0x2,
	MODIFIER_PROPERTY_PREATTACK_BONUS_DAMAGE_POST_CRIT = 0x3,
	MODIFIER_PROPERTY_BASEATTACK_BONUSDAMAGE = 0x4,
	MODIFIER_PROPERTY_PROCATTACK_BONUS_DAMAGE_PHYSICAL = 0x5,
	MODIFIER_PROPERTY_PROCATTACK_CONVERT_PHYSICAL_TO_MAGICAL = 0x6,
	MODIFIER_PROPERTY_PROCATTACK_BONUS_DAMAGE_MAGICAL = 0x7,
	MODIFIER_PROPERTY_PROCATTACK_BONUS_DAMAGE_PURE = 0x8,
	MODIFIER_PROPERTY_PROCATTACK_BONUS_DAMAGE_MAGICAL_TARGET = 0x9,
	MODIFIER_PROPERTY_PROCATTACK_FEEDBACK = 0xa,
	MODIFIER_PROPERTY_OVERRIDE_ATTACK_DAMAGE = 0xb,
	MODIFIER_PROPERTY_PRE_ATTACK = 0xc,
	MODIFIER_PROPERTY_INVISIBILITY_LEVEL = 0xd,
	MODIFIER_PROPERTY_INVISIBILITY_ATTACK_BEHAVIOR_EXCEPTION = 0xe,
	MODIFIER_PROPERTY_PERSISTENT_INVISIBILITY = 0xf,
	MODIFIER_PROPERTY_MOVESPEED_BONUS_CONSTANT = 0x10,
	MODIFIER_PROPERTY_MOVESPEED_BASE_OVERRIDE = 0x11,
	MODIFIER_PROPERTY_MOVESPEED_BONUS_PERCENTAGE = 0x12,
	MODIFIER_PROPERTY_MOVESPEED_BONUS_PERCENTAGE_UNIQUE = 0x13,
	MODIFIER_PROPERTY_MOVESPEED_BONUS_UNIQUE = 0x14,
	MODIFIER_PROPERTY_MOVESPEED_BONUS_UNIQUE_2 = 0x15,
	MODIFIER_PROPERTY_MOVESPEED_BONUS_CONSTANT_UNIQUE = 0x16,
	MODIFIER_PROPERTY_MOVESPEED_BONUS_CONSTANT_UNIQUE_2 = 0x17,
	MODIFIER_PROPERTY_MOVESPEED_ABSOLUTE = 0x18,
	MODIFIER_PROPERTY_MOVESPEED_ABSOLUTE_MIN = 0x19,
	MODIFIER_PROPERTY_MOVESPEED_ABSOLUTE_MAX = 0x1a,
	MODIFIER_PROPERTY_IGNORE_MOVESPEED_LIMIT = 0x1b,
	MODIFIER_PROPERTY_MOVESPEED_LIMIT = 0x1c,
	MODIFIER_PROPERTY_ATTACKSPEED_BASE_OVERRIDE = 0x1d,
	MODIFIER_PROPERTY_FIXED_ATTACK_RATE = 0x1e,
	MODIFIER_PROPERTY_ATTACKSPEED_BONUS_CONSTANT = 0x1f,
	MODIFIER_PROPERTY_IGNORE_ATTACKSPEED_LIMIT = 0x20,
	MODIFIER_PROPERTY_COOLDOWN_REDUCTION_CONSTANT = 0x21,
	MODIFIER_PROPERTY_MANACOST_REDUCTION_CONSTANT = 0x22,
	MODIFIER_PROPERTY_BASE_ATTACK_TIME_CONSTANT = 0x23,
	MODIFIER_PROPERTY_BASE_ATTACK_TIME_CONSTANT_ADJUST = 0x24,
	MODIFIER_PROPERTY_BASE_ATTACK_TIME_PERCENTAGE = 0x25,
	MODIFIER_PROPERTY_ATTACK_POINT_CONSTANT = 0x26,
	MODIFIER_PROPERTY_BONUSDAMAGEOUTGOING_PERCENTAGE = 0x27,
	MODIFIER_PROPERTY_DAMAGEOUTGOING_PERCENTAGE = 0x28,
	MODIFIER_PROPERTY_DAMAGEOUTGOING_PERCENTAGE_ILLUSION = 0x29,
	MODIFIER_PROPERTY_DAMAGEOUTGOING_PERCENTAGE_ILLUSION_AMPLIFY = 0x2a,
	MODIFIER_PROPERTY_TOTALDAMAGEOUTGOING_PERCENTAGE = 0x2b,
	MODIFIER_PROPERTY_SPELL_AMPLIFY_PERCENTAGE_CREEP = 0x2c,
	MODIFIER_PROPERTY_SPELL_AMPLIFY_PERCENTAGE = 0x2d,
	MODIFIER_PROPERTY_SPELL_AMPLIFY_PERCENTAGE_UNIQUE = 0x2e,
	MODIFIER_PROPERTY_HEAL_AMPLIFY_PERCENTAGE_SOURCE = 0x2f,
	MODIFIER_PROPERTY_HEAL_AMPLIFY_PERCENTAGE_TARGET = 0x30,
	MODIFIER_PROPERTY_HP_REGEN_CAN_BE_NEGATIVE = 0x31,
	MODIFIER_PROPERTY_HP_REGEN_AMPLIFY_PERCENTAGE = 0x32,
	MODIFIER_PROPERTY_LIFESTEAL_AMPLIFY_PERCENTAGE = 0x33,
	MODIFIER_PROPERTY_SPELL_LIFESTEAL_AMPLIFY_PERCENTAGE = 0x34,
	MODIFIER_PROPERTY_MP_REGEN_AMPLIFY_PERCENTAGE = 0x35,
	MODIFIER_PROPERTY_MANA_DRAIN_AMPLIFY_PERCENTAGE = 0x36,
	MODIFIER_PROPERTY_MP_RESTORE_AMPLIFY_PERCENTAGE = 0x37,
	MODIFIER_PROPERTY_BASEDAMAGEOUTGOING_PERCENTAGE = 0x38,
	MODIFIER_PROPERTY_BASEDAMAGEOUTGOING_PERCENTAGE_UNIQUE = 0x39,
	MODIFIER_PROPERTY_INCOMING_DAMAGE_PERCENTAGE = 0x3a,
	MODIFIER_PROPERTY_INCOMING_PHYSICAL_DAMAGE_PERCENTAGE = 0x3b,
	MODIFIER_PROPERTY_INCOMING_PHYSICAL_DAMAGE_CONSTANT = 0x3c,
	MODIFIER_PROPERTY_INCOMING_SPELL_DAMAGE_CONSTANT = 0x3d,
	MODIFIER_PROPERTY_EVASION_CONSTANT = 0x3e,
	MODIFIER_PROPERTY_NEGATIVE_EVASION_CONSTANT = 0x3f,
	MODIFIER_PROPERTY_STATUS_RESISTANCE = 0x40,
	MODIFIER_PROPERTY_STATUS_RESISTANCE_STACKING = 0x41,
	MODIFIER_PROPERTY_STATUS_RESISTANCE_CASTER = 0x42,
	MODIFIER_PROPERTY_AVOID_DAMAGE = 0x43,
	MODIFIER_PROPERTY_AVOID_SPELL = 0x44,
	MODIFIER_PROPERTY_MISS_PERCENTAGE = 0x45,
	MODIFIER_PROPERTY_PHYSICAL_ARMOR_BASE_PERCENTAGE = 0x46,
	MODIFIER_PROPERTY_PHYSICAL_ARMOR_TOTAL_PERCENTAGE = 0x47,
	MODIFIER_PROPERTY_PHYSICAL_ARMOR_BONUS = 0x48,
	MODIFIER_PROPERTY_PHYSICAL_ARMOR_BONUS_UNIQUE = 0x49,
	MODIFIER_PROPERTY_PHYSICAL_ARMOR_BONUS_UNIQUE_ACTIVE = 0x4a,
	MODIFIER_PROPERTY_PHYSICAL_ARMOR_BONUS_POST = 0x4b,
	MODIFIER_PROPERTY_IGNORE_PHYSICAL_ARMOR = 0x4c,
	MODIFIER_PROPERTY_MAGICAL_RESISTANCE_BASE_REDUCTION = 0x4d,
	MODIFIER_PROPERTY_MAGICAL_RESISTANCE_DIRECT_MODIFICATION = 0x4e,
	MODIFIER_PROPERTY_MAGICAL_RESISTANCE_BONUS = 0x4f,
	MODIFIER_PROPERTY_MAGICAL_RESISTANCE_BONUS_ILLUSIONS = 0x50,
	MODIFIER_PROPERTY_MAGICAL_RESISTANCE_DECREPIFY_UNIQUE = 0x51,
	MODIFIER_PROPERTY_BASE_MANA_REGEN = 0x52,
	MODIFIER_PROPERTY_MANA_REGEN_CONSTANT = 0x53,
	MODIFIER_PROPERTY_MANA_REGEN_CONSTANT_UNIQUE = 0x54,
	MODIFIER_PROPERTY_MANA_REGEN_TOTAL_PERCENTAGE = 0x55,
	MODIFIER_PROPERTY_HEALTH_REGEN_CONSTANT = 0x56,
	MODIFIER_PROPERTY_HEALTH_REGEN_PERCENTAGE = 0x57,
	MODIFIER_PROPERTY_HEALTH_REGEN_PERCENTAGE_UNIQUE = 0x58,
	MODIFIER_PROPERTY_HEALTH_BONUS = 0x59,
	MODIFIER_PROPERTY_MANA_BONUS = 0x5a,
	MODIFIER_PROPERTY_EXTRA_STRENGTH_BONUS = 0x5b,
	MODIFIER_PROPERTY_EXTRA_HEALTH_BONUS = 0x5c,
	MODIFIER_PROPERTY_EXTRA_MANA_BONUS = 0x5d,
	MODIFIER_PROPERTY_EXTRA_MANA_BONUS_PERCENTAGE = 0x5e,
	MODIFIER_PROPERTY_EXTRA_HEALTH_PERCENTAGE = 0x5f,
	MODIFIER_PROPERTY_EXTRA_MANA_PERCENTAGE = 0x60,
	MODIFIER_PROPERTY_STATS_STRENGTH_BONUS = 0x61,
	MODIFIER_PROPERTY_STATS_AGILITY_BONUS = 0x62,
	MODIFIER_PROPERTY_STATS_INTELLECT_BONUS = 0x63,
	MODIFIER_PROPERTY_STATS_STRENGTH_BONUS_PERCENTAGE = 0x64,
	MODIFIER_PROPERTY_STATS_AGILITY_BONUS_PERCENTAGE = 0x65,
	MODIFIER_PROPERTY_STATS_INTELLECT_BONUS_PERCENTAGE = 0x66,
	MODIFIER_PROPERTY_CAST_RANGE_BONUS = 0x67,
	MODIFIER_PROPERTY_CAST_RANGE_BONUS_PERCENTAGE = 0x68,
	MODIFIER_PROPERTY_CAST_RANGE_BONUS_TARGET = 0x69,
	MODIFIER_PROPERTY_CAST_RANGE_BONUS_STACKING = 0x6a,
	MODIFIER_PROPERTY_ATTACK_RANGE_BASE_OVERRIDE = 0x6b,
	MODIFIER_PROPERTY_ATTACK_RANGE_BONUS = 0x6c,
	MODIFIER_PROPERTY_ATTACK_RANGE_BONUS_UNIQUE = 0x6d,
	MODIFIER_PROPERTY_ATTACK_RANGE_BONUS_PERCENTAGE = 0x6e,
	MODIFIER_PROPERTY_MAX_ATTACK_RANGE = 0x6f,
	MODIFIER_PROPERTY_PROJECTILE_SPEED_BONUS = 0x70,
	MODIFIER_PROPERTY_PROJECTILE_SPEED_BONUS_PERCENTAGE = 0x71,
	MODIFIER_PROPERTY_PROJECTILE_NAME = 0x72,
	MODIFIER_PROPERTY_REINCARNATION = 0x73,
	MODIFIER_PROPERTY_RESPAWNTIME = 0x74,
	MODIFIER_PROPERTY_RESPAWNTIME_PERCENTAGE = 0x75,
	MODIFIER_PROPERTY_RESPAWNTIME_STACKING = 0x76,
	MODIFIER_PROPERTY_COOLDOWN_PERCENTAGE = 0x77,
	MODIFIER_PROPERTY_COOLDOWN_PERCENTAGE_ONGOING = 0x78,
	MODIFIER_PROPERTY_CASTTIME_PERCENTAGE = 0x79,
	MODIFIER_PROPERTY_ATTACK_ANIM_TIME_PERCENTAGE = 0x7a,
	MODIFIER_PROPERTY_MANACOST_PERCENTAGE = 0x7b,
	MODIFIER_PROPERTY_MANACOST_PERCENTAGE_STACKING = 0x7c,
	MODIFIER_PROPERTY_DEATHGOLDCOST = 0x7d,
	MODIFIER_PROPERTY_EXP_RATE_BOOST = 0x7e,
	MODIFIER_PROPERTY_GOLD_RATE_BOOST = 0x7f,
	MODIFIER_PROPERTY_PREATTACK_CRITICALSTRIKE = 0x80,
	MODIFIER_PROPERTY_PREATTACK_TARGET_CRITICALSTRIKE = 0x81,
	MODIFIER_PROPERTY_MAGICAL_CONSTANT_BLOCK = 0x82,
	MODIFIER_PROPERTY_PHYSICAL_CONSTANT_BLOCK = 0x83,
	MODIFIER_PROPERTY_PHYSICAL_CONSTANT_BLOCK_SPECIAL = 0x84,
	MODIFIER_PROPERTY_TOTAL_CONSTANT_BLOCK_UNAVOIDABLE_PRE_ARMOR = 0x85,
	MODIFIER_PROPERTY_TOTAL_CONSTANT_BLOCK = 0x86,
	MODIFIER_PROPERTY_OVERRIDE_ANIMATION = 0x87,
	MODIFIER_PROPERTY_OVERRIDE_ANIMATION_WEIGHT = 0x88,
	MODIFIER_PROPERTY_OVERRIDE_ANIMATION_RATE = 0x89,
	MODIFIER_PROPERTY_ABSORB_SPELL = 0x8a,
	MODIFIER_PROPERTY_REFLECT_SPELL = 0x8b,
	MODIFIER_PROPERTY_DISABLE_AUTOATTACK = 0x8c,
	MODIFIER_PROPERTY_BONUS_DAY_VISION = 0x8d,
	MODIFIER_PROPERTY_BONUS_NIGHT_VISION = 0x8e,
	MODIFIER_PROPERTY_BONUS_NIGHT_VISION_UNIQUE = 0x8f,
	MODIFIER_PROPERTY_BONUS_VISION_PERCENTAGE = 0x90,
	MODIFIER_PROPERTY_FIXED_DAY_VISION = 0x91,
	MODIFIER_PROPERTY_FIXED_NIGHT_VISION = 0x92,
	MODIFIER_PROPERTY_MIN_HEALTH = 0x93,
	MODIFIER_PROPERTY_ABSOLUTE_NO_DAMAGE_PHYSICAL = 0x94,
	MODIFIER_PROPERTY_ABSOLUTE_NO_DAMAGE_MAGICAL = 0x95,
	MODIFIER_PROPERTY_ABSOLUTE_NO_DAMAGE_PURE = 0x96,
	MODIFIER_PROPERTY_IS_ILLUSION = 0x97,
	MODIFIER_PROPERTY_ILLUSION_LABEL = 0x98,
	MODIFIER_PROPERTY_STRONG_ILLUSION = 0x99,
	MODIFIER_PROPERTY_SUPER_ILLUSION = 0x9a,
	MODIFIER_PROPERTY_SUPER_ILLUSION_WITH_ULTIMATE = 0x9b,
	MODIFIER_PROPERTY_XP_DURING_DEATH = 0x9c,
	MODIFIER_PROPERTY_TURN_RATE_PERCENTAGE = 0x9d,
	MODIFIER_PROPERTY_TURN_RATE_OVERRIDE = 0x9e,
	MODIFIER_PROPERTY_DISABLE_HEALING = 0x9f,
	MODIFIER_PROPERTY_ALWAYS_ALLOW_ATTACK = 0xa0,
	MODIFIER_PROPERTY_ALWAYS_ETHEREAL_ATTACK = 0xa1,
	MODIFIER_PROPERTY_OVERRIDE_ATTACK_MAGICAL = 0xa2,
	MODIFIER_PROPERTY_UNIT_STATS_NEEDS_REFRESH = 0xa3,
	MODIFIER_PROPERTY_BOUNTY_CREEP_MULTIPLIER = 0xa4,
	MODIFIER_PROPERTY_BOUNTY_OTHER_MULTIPLIER = 0xa5,
	MODIFIER_PROPERTY_UNIT_DISALLOW_UPGRADING = 0xa6,
	MODIFIER_PROPERTY_DODGE_PROJECTILE = 0xa7,
	MODIFIER_PROPERTY_TRIGGER_COSMETIC_AND_END_ATTACK = 0xa8,
	MODIFIER_PROPERTY_MAX_DEBUFF_DURATION = 0xa9,
	MODIFIER_PROPERTY_PRIMARY_STAT_DAMAGE_MULTIPLIER = 0xaa,
	MODIFIER_PROPERTY_PREATTACK_DEADLY_BLOW = 0xab,
	MODIFIER_PROPERTY_ALWAYS_AUTOATTACK_WHILE_HOLD_POSITION = 0xac,
	MODIFIER_EVENT_ON_SPELL_TARGET_READY = 0xad,
	MODIFIER_EVENT_ON_ATTACK_RECORD = 0xae,
	MODIFIER_EVENT_ON_ATTACK_START = 0xaf,
	MODIFIER_EVENT_ON_ATTACK = 0xb0,
	MODIFIER_EVENT_ON_ATTACK_LANDED = 0xb1,
	MODIFIER_EVENT_ON_ATTACK_FAIL = 0xb2,
	MODIFIER_EVENT_ON_ATTACK_ALLIED = 0xb3,
	MODIFIER_EVENT_ON_PROJECTILE_DODGE = 0xb4,
	MODIFIER_EVENT_ON_ORDER = 0xb5,
	MODIFIER_EVENT_ON_UNIT_MOVED = 0xb6,
	MODIFIER_EVENT_ON_ABILITY_START = 0xb7,
	MODIFIER_EVENT_ON_ABILITY_EXECUTED = 0xb8,
	MODIFIER_EVENT_ON_ABILITY_FULLY_CAST = 0xb9,
	MODIFIER_EVENT_ON_BREAK_INVISIBILITY = 0xba,
	MODIFIER_EVENT_ON_ABILITY_END_CHANNEL = 0xbb,
	MODIFIER_EVENT_ON_PROCESS_UPGRADE = 0xbc,
	MODIFIER_EVENT_ON_REFRESH = 0xbd,
	MODIFIER_EVENT_ON_TAKEDAMAGE = 0xbe,
	MODIFIER_EVENT_ON_DEATH_PREVENTED = 0xbf,
	MODIFIER_EVENT_ON_STATE_CHANGED = 0xc0,
	MODIFIER_EVENT_ON_ORB_EFFECT = 0xc1,
	MODIFIER_EVENT_ON_PROCESS_CLEAVE = 0xc2,
	MODIFIER_EVENT_ON_DAMAGE_CALCULATED = 0xc3,
	MODIFIER_EVENT_ON_MAGIC_DAMAGE_CALCULATED = 0xc4,
	MODIFIER_EVENT_ON_ATTACKED = 0xc5,
	MODIFIER_EVENT_ON_DEATH = 0xc6,
	MODIFIER_EVENT_ON_RESPAWN = 0xc7,
	MODIFIER_EVENT_ON_SPENT_MANA = 0xc8,
	MODIFIER_EVENT_ON_TELEPORTING = 0xc9,
	MODIFIER_EVENT_ON_TELEPORTED = 0xca,
	MODIFIER_EVENT_ON_SET_LOCATION = 0xcb,
	MODIFIER_EVENT_ON_HEALTH_GAINED = 0xcc,
	MODIFIER_EVENT_ON_MANA_GAINED = 0xcd,
	MODIFIER_EVENT_ON_TAKEDAMAGE_KILLCREDIT = 0xce,
	MODIFIER_EVENT_ON_HERO_KILLED = 0xcf,
	MODIFIER_EVENT_ON_HEAL_RECEIVED = 0xd0,
	MODIFIER_EVENT_ON_BUILDING_KILLED = 0xd1,
	MODIFIER_EVENT_ON_MODEL_CHANGED = 0xd2,
	MODIFIER_EVENT_ON_MODIFIER_ADDED = 0xd3,
	MODIFIER_PROPERTY_TOOLTIP = 0xd4,
	MODIFIER_PROPERTY_MODEL_CHANGE = 0xd5,
	MODIFIER_PROPERTY_MODEL_SCALE = 0xd6,
	MODIFIER_PROPERTY_MODEL_SCALE_ANIMATE_TIME = 0xd7,
	MODIFIER_PROPERTY_IS_SCEPTER = 0xd8,
	MODIFIER_PROPERTY_IS_SHARD = 0xd9,
	MODIFIER_PROPERTY_RADAR_COOLDOWN_REDUCTION = 0xda,
	MODIFIER_PROPERTY_TRANSLATE_ACTIVITY_MODIFIERS = 0xdb,
	MODIFIER_PROPERTY_TRANSLATE_ATTACK_SOUND = 0xdc,
	MODIFIER_PROPERTY_LIFETIME_FRACTION = 0xdd,
	MODIFIER_PROPERTY_PROVIDES_FOW_POSITION = 0xde,
	MODIFIER_PROPERTY_SPELLS_REQUIRE_HP = 0xdf,
	MODIFIER_PROPERTY_FORCE_DRAW_MINIMAP = 0xe0,
	MODIFIER_PROPERTY_DISABLE_TURNING = 0xe1,
	MODIFIER_PROPERTY_IGNORE_CAST_ANGLE = 0xe2,
	MODIFIER_PROPERTY_CHANGE_ABILITY_VALUE = 0xe3,
	MODIFIER_PROPERTY_OVERRIDE_ABILITY_SPECIAL = 0xe4,
	MODIFIER_PROPERTY_OVERRIDE_ABILITY_SPECIAL_VALUE = 0xe5,
	MODIFIER_PROPERTY_ABILITY_LAYOUT = 0xe6,
	MODIFIER_EVENT_ON_DOMINATED = 0xe7,
	MODIFIER_EVENT_ON_KILL = 0xe8,
	MODIFIER_EVENT_ON_ASSIST = 0xe9,
	MODIFIER_PROPERTY_TEMPEST_DOUBLE = 0xea,
	MODIFIER_PROPERTY_PRESERVE_PARTICLES_ON_MODEL_CHANGE = 0xeb,
	MODIFIER_EVENT_ON_ATTACK_FINISHED = 0xec,
	MODIFIER_PROPERTY_IGNORE_COOLDOWN = 0xed,
	MODIFIER_PROPERTY_CAN_ATTACK_TREES = 0xee,
	MODIFIER_PROPERTY_VISUAL_Z_DELTA = 0xef,
	MODIFIER_PROPERTY_VISUAL_Z_SPEED_BASE_OVERRIDE = 0xf0,
	MODIFIER_PROPERTY_INCOMING_DAMAGE_ILLUSION = 0xf1,
	MODIFIER_PROPERTY_DONT_GIVE_VISION_OF_ATTACKER = 0xf2,
	MODIFIER_PROPERTY_TOOLTIP2 = 0xf3,
	MODIFIER_EVENT_ON_ATTACK_RECORD_DESTROY = 0xf4,
	MODIFIER_EVENT_ON_PROJECTILE_OBSTRUCTION_HIT = 0xf5,
	MODIFIER_PROPERTY_SUPPRESS_TELEPORT = 0xf6,
	MODIFIER_EVENT_ON_ATTACK_CANCELLED = 0xf7,
	MODIFIER_PROPERTY_SUPPRESS_CLEAVE = 0xf8,
	MODIFIER_PROPERTY_BOT_ATTACK_SCORE_BONUS = 0xf9,
	MODIFIER_PROPERTY_ATTACKSPEED_REDUCTION_PERCENTAGE = 0xfa,
	MODIFIER_PROPERTY_MOVESPEED_REDUCTION_PERCENTAGE = 0xfb,
	MODIFIER_PROPERTY_ATTACK_WHILE_MOVING_TARGET = 0xfc,
	MODIFIER_PROPERTY_ATTACKSPEED_PERCENTAGE = 0xfd,
	MODIFIER_EVENT_ON_ATTEMPT_PROJECTILE_DODGE = 0xfe,
	MODIFIER_EVENT_ON_PREDEBUFF_APPLIED = 0xff,
	MODIFIER_PROPERTY_COOLDOWN_PERCENTAGE_STACKING = 0x100,
	MODIFIER_PROPERTY_SPELL_REDIRECT_TARGET = 0x101,
	MODIFIER_PROPERTY_TURN_RATE_CONSTANT = 0x102,
	MODIFIER_PROPERTY_RAT_PACK = 0x103,
	MODIFIER_PROPERTY_PHYSICALDAMAGEOUTGOING_PERCENTAGE = 0x104,
	MODIFIER_PROPERTY_KNOCKBACK_AMPLIFICATION_PERCENTAGE = 0x105,
	MODIFIER_FUNCTION_LAST = 0x106,
	MODIFIER_FUNCTION_INVALID = 0xffff,
};

// Aligment: 4
// Size: 3
enum class PartnerAccountType : uint32_t
{
	PARTNER_NONE = 0x0,
	PARTNER_PERFECT_WORLD = 0x1,
	PARTNER_INVALID = 0x3,
};

// Aligment: 4
// Size: 5
enum class NavDirType : uint32_t
{
	NORTH = 0x0,
	EAST = 0x1,
	SOUTH = 0x2,
	WEST = 0x3,
	NUM_NAV_DIR_TYPE_DIRECTIONS = 0x4,
};

// Aligment: 4
// Size: 5
enum class subquest_player_stat_types_t : uint32_t
{
	SUBQUEST_PLAYER_STAT_GOLD = 0x0,
	SUBQUEST_PLAYER_STAT_LEVEL = 0x1,
	SUBQUEST_PLAYER_STAT_LAST_HITS = 0x2,
	SUBQUEST_PLAYER_STAT_DENIES = 0x3,
	SUBQUEST_NUM_PLAYER_STATS = 0x4,
};

// Aligment: 4
// Size: 2
enum class ValueRemapperRatchetType_t : uint32_t
{
	RatchetType_Absolute = 0x0,
	RatchetType_EachEngage = 0x1,
};

// Aligment: 4
// Size: 15
enum class DOTA_GC_TEAM : uint32_t
{
	DOTA_GC_TEAM_GOOD_GUYS = 0x0,
	DOTA_GC_TEAM_BAD_GUYS = 0x1,
	DOTA_GC_TEAM_BROADCASTER = 0x2,
	DOTA_GC_TEAM_SPECTATOR = 0x3,
	DOTA_GC_TEAM_PLAYER_POOL = 0x4,
	DOTA_GC_TEAM_NOTEAM = 0x5,
	DOTA_GC_TEAM_CUSTOM_1 = 0x6,
	DOTA_GC_TEAM_CUSTOM_2 = 0x7,
	DOTA_GC_TEAM_CUSTOM_3 = 0x8,
	DOTA_GC_TEAM_CUSTOM_4 = 0x9,
	DOTA_GC_TEAM_CUSTOM_5 = 0xa,
	DOTA_GC_TEAM_CUSTOM_6 = 0xb,
	DOTA_GC_TEAM_CUSTOM_7 = 0xc,
	DOTA_GC_TEAM_CUSTOM_8 = 0xd,
	DOTA_GC_TEAM_NEUTRALS = 0xe,
};

// Aligment: 4
// Size: 5
enum class ObstructionRelationshipClass_t : uint32_t
{
	DOTA_OBSTRUCTION_RELATIONSHIP_NONE = 0x0,
	DOTA_OBSTRUCTION_RELATIONSHIP_BUILDING = 0x1,
	DOTA_OBSTRUCTION_RELATIONSHIP_PLAYER_CONTROLLED = 0x2,
	DOTA_OBSTRUCTION_RELATIONSHIP_NPC = 0x3,
	DOTA_OBSTRUCTION_RELATIONSHIP_LAST = 0x4,
};

// Aligment: 4
// Size: 47
enum class eEconItemOrigin : uint32_t
{
	kEconItemOrigin_Invalid = 0xffffffffffffffff,
	kEconItemOrigin_Drop = 0x0,
	kEconItemOrigin_Achievement = 0x1,
	kEconItemOrigin_Purchased = 0x2,
	kEconItemOrigin_Traded = 0x3,
	kEconItemOrigin_Crafted = 0x4,
	kEconItemOrigin_StorePromotion = 0x5,
	kEconItemOrigin_Gifted = 0x6,
	kEconItemOrigin_SupportGranted = 0x7,
	kEconItemOrigin_FoundInCrate = 0x8,
	kEconItemOrigin_Earned = 0x9,
	kEconItemOrigin_ThirdPartyPromotion = 0xa,
	kEconItemOrigin_GiftWrapped = 0xb,
	kEconItemOrigin_HalloweenDrop = 0xc,
	kEconItemOrigin_PackageItem = 0xd,
	kEconItemOrigin_Foreign = 0xe,
	kEconItemOrigin_CDKey = 0xf,
	kEconItemOrigin_CollectionReward = 0x10,
	kEconItemOrigin_PreviewItem = 0x11,
	kEconItemOrigin_SteamWorkshopContribution = 0x12,
	kEconItemOrigin_PeriodicScoreReward = 0x13,
	kEconItemOrigin_Recycling = 0x14,
	kEconItemOrigin_TournamentDrop = 0x15,
	kEconItemOrigin_PassportReward = 0x16,
	kEconItemOrigin_TutorialDrop = 0x17,
	kEconItemOrigin_RecipeOutput = 0x18,
	kEconItemOrigin_GemExtract = 0x19,
	kEconItemOrigin_EventPointReward = 0x1a,
	kEconItemOrigin_ItemRedemption = 0x1b,
	kEconItemOrigin_FantasyTicketRefund = 0x1c,
	kEconItemOrigin_VictoryPredictionReward = 0x1d,
	kEconItemOrigin_AssassinEventReward = 0x1e,
	kEconItemOrigin_CompendiumReward = 0x1f,
	kEconItemOrigin_CompendiumDrop = 0x20,
	kEconItemOrigin_MysteryItem = 0x21,
	kEconItemOrigin_UnpackedFromBundle = 0x22,
	kEconItemOrigin_WonFromWeeklyGame = 0x23,
	kEconItemOrigin_SeasonalItemGrant = 0x24,
	kEconItemOrigin_PackOpening = 0x25,
	kEconItemOrigin_InitialGrant = 0x26,
	kEconItemOrigin_MarketPurchase = 0x27,
	kEconItemOrigin_MarketRefunded = 0x28,
	kEconItemOrigin_LimitedDraft = 0x29,
	kEconItemOrigin_GauntletReward = 0x2a,
	kEconItemOrigin_CompendiumGift = 0x2b,
	kEconItemOrigin_CandyShopPurchase = 0x2c,
	kEconItemOrigin_Max = 0x2d,
};

// Aligment: 4
// Size: 3
enum class TrackOrientationType_t : uint32_t
{
	TrackOrientation_Fixed = 0x0,
	TrackOrientation_FacePath = 0x1,
	TrackOrientation_FacePathAngles = 0x2,
};

// Aligment: 4
// Size: 2
enum class PointTemplateClientOnlyEntityBehavior_t : uint32_t
{
	CREATE_FOR_CURRENTLY_CONNECTED_CLIENTS_ONLY = 0x0,
	CREATE_FOR_CLIENTS_WHO_CONNECT_LATER = 0x1,
};

// Aligment: 4
// Size: 2
enum class DOTASelectionPriorityRules : uint32_t
{
	k_DOTASelectionPriorityRules_Manual = 0x0,
	k_DOTASelectionPriorityRules_Automatic = 0x1,
};

// Aligment: 4
// Size: 4
enum class EntitySubclassScope_t : uint32_t
{
	SUBCLASS_SCOPE_NONE = 0xffffffffffffffff,
	SUBCLASS_SCOPE_PLAYER = 0x0,
	SUBCLASS_SCOPE_VEHICLES = 0x1,
	SUBCLASS_SCOPE_COUNT = 0x2,
};

// Aligment: 4
// Size: 5
enum class ReplayEventType_t : uint32_t
{
	REPLAY_EVENT_CANCEL = 0x0,
	REPLAY_EVENT_DEATH = 0x1,
	REPLAY_EVENT_GENERIC = 0x2,
	REPLAY_EVENT_STUCK_NEED_FULL_UPDATE = 0x3,
	REPLAY_EVENT_VICTORY = 0x4,
};

// Aligment: 4
// Size: 2
enum class ESourceEngine : uint32_t
{
	k_ESE_Source1 = 0x0,
	k_ESE_Source2 = 0x1,
};

// Aligment: 4
// Size: 29
enum class UnitFilterResult : uint32_t
{
	UF_SUCCESS = 0x0,
	UF_FAIL_FRIENDLY = 0x1,
	UF_FAIL_ENEMY = 0x2,
	UF_FAIL_HERO = 0x3,
	UF_FAIL_CONSIDERED_HERO = 0x4,
	UF_FAIL_CREEP = 0x5,
	UF_FAIL_BUILDING = 0x6,
	UF_FAIL_COURIER = 0x7,
	UF_FAIL_OTHER = 0x8,
	UF_FAIL_ANCIENT = 0x9,
	UF_FAIL_ILLUSION = 0xa,
	UF_FAIL_SUMMONED = 0xb,
	UF_FAIL_DOMINATED = 0xc,
	UF_FAIL_MELEE = 0xd,
	UF_FAIL_RANGED = 0xe,
	UF_FAIL_DEAD = 0xf,
	UF_FAIL_MAGIC_IMMUNE_ALLY = 0x10,
	UF_FAIL_MAGIC_IMMUNE_ENEMY = 0x11,
	UF_FAIL_INVULNERABLE = 0x12,
	UF_FAIL_IN_FOW = 0x13,
	UF_FAIL_INVISIBLE = 0x14,
	UF_FAIL_NOT_PLAYER_CONTROLLED = 0x15,
	UF_FAIL_ATTACK_IMMUNE = 0x16,
	UF_FAIL_CUSTOM = 0x17,
	UF_FAIL_INVALID_LOCATION = 0x18,
	UF_FAIL_DISABLE_HELP = 0x19,
	UF_FAIL_OUT_OF_WORLD = 0x1a,
	UF_FAIL_NIGHTMARED = 0x1b,
	UF_FAIL_OBSTRUCTED = 0x1c,
};

// Aligment: 4
// Size: 7
enum class BeamType_t : uint32_t
{
	BEAM_INVALID = 0x0,
	BEAM_POINTS = 0x1,
	BEAM_ENTPOINT = 0x2,
	BEAM_ENTS = 0x3,
	BEAM_HOSE = 0x4,
	BEAM_SPLINE = 0x5,
	BEAM_LASER = 0x6,
};

// Aligment: 4
// Size: 6
enum class EOverwatchReportReason : uint32_t
{
	k_EOverwatchReportReason_Unknown = 0x0,
	k_EOverwatchReportReason_Cheating = 0x1,
	k_EOverwatchReportReason_Feeding = 0x2,
	k_EOverwatchReportReason_Griefing = 0x3,
	k_EOverwatchReportReason_Suspicious = 0x4,
	k_EOverwatchReportReason_AbilityAbuse = 0x5,
};

// Aligment: 4
// Size: 6
enum class HierarchyType_t : uint32_t
{
	HIERARCHY_NONE = 0x0,
	HIERARCHY_BONE_MERGE = 0x1,
	HIERARCHY_ATTACHMENT = 0x2,
	HIERARCHY_ABSORIGIN = 0x3,
	HIERARCHY_BONE = 0x4,
	HIERARCHY_TYPE_COUNT = 0x5,
};

// Aligment: 4
// Size: 13
enum class EBaseGameEvents : uint32_t
{
	GE_VDebugGameSessionIDEvent = 0xc8,
	GE_PlaceDecalEvent = 0xc9,
	GE_ClearWorldDecalsEvent = 0xca,
	GE_ClearEntityDecalsEvent = 0xcb,
	GE_ClearDecalsForSkeletonInstanceEvent = 0xcc,
	GE_Source1LegacyGameEventList = 0xcd,
	GE_Source1LegacyListenEvents = 0xce,
	GE_Source1LegacyGameEvent = 0xcf,
	GE_SosStartSoundEvent = 0xd0,
	GE_SosStopSoundEvent = 0xd1,
	GE_SosSetSoundEventParams = 0xd2,
	GE_SosSetLibraryStackFields = 0xd3,
	GE_SosStopSoundEventHash = 0xd4,
};

// Aligment: 4
// Size: 3
enum class AmmoFlags_t : uint32_t
{
	AMMO_FORCE_DROP_IF_CARRIED = 0x1,
	AMMO_RESERVE_STAYS_WITH_WEAPON = 0x2,
	AMMO_FLAG_MAX = 0x2,
};

// Aligment: 4
// Size: 2
enum class EProjectionEvent : uint32_t
{
	ePE_FirstBlood = 0x0,
	ePE_Killstreak_godlike = 0x1,
};

// Aligment: 4
// Size: 14
enum class EGCMsgUseItemResponse : uint32_t
{
	k_EGCMsgUseItemResponse_ItemUsed = 0x0,
	k_EGCMsgUseItemResponse_GiftNoOtherPlayers = 0x1,
	k_EGCMsgUseItemResponse_ServerError = 0x2,
	k_EGCMsgUseItemResponse_MiniGameAlreadyStarted = 0x3,
	k_EGCMsgUseItemResponse_ItemUsed_ItemsGranted = 0x4,
	k_EGCMsgUseItemResponse_DropRateBonusAlreadyGranted = 0x5,
	k_EGCMsgUseItemResponse_NotInLowPriorityPool = 0x6,
	k_EGCMsgUseItemResponse_NotHighEnoughLevel = 0x7,
	k_EGCMsgUseItemResponse_EventNotActive = 0x8,
	k_EGCMsgUseItemResponse_ItemUsed_EventPointsGranted = 0x9,
	k_EGCMsgUseItemResponse_MissingRequirement = 0xa,
	k_EGCMsgUseItemResponse_EmoticonUnlock_NoNew = 0xb,
	k_EGCMsgUseItemResponse_EmoticonUnlock_Complete = 0xc,
	k_EGCMsgUseItemResponse_ItemUsed_Compendium = 0xd,
};

// Aligment: 8
// Size: 40
enum class DebugOverlayBits_t : uint64_t
{
	OVERLAY_TEXT_BIT = 0x1,
	OVERLAY_NAME_BIT = 0x2,
	OVERLAY_BBOX_BIT = 0x4,
	OVERLAY_PIVOT_BIT = 0x8,
	OVERLAY_MESSAGE_BIT = 0x10,
	OVERLAY_ABSBOX_BIT = 0x20,
	OVERLAY_RBOX_BIT = 0x40,
	OVERLAY_SHOW_BLOCKSLOS = 0x80,
	OVERLAY_ATTACHMENTS_BIT = 0x100,
	OVERLAY_INTERPOLATED_ATTACHMENTS_BIT = 0x200,
	OVERLAY_INTERPOLATED_PIVOT_BIT = 0x400,
	OVERLAY_SKELETON_BIT = 0x800,
	OVERLAY_INTERPOLATED_SKELETON_BIT = 0x1000,
	OVERLAY_TRIGGER_BOUNDS_BIT = 0x2000,
	OVERLAY_HITBOX_BIT = 0x4000,
	OVERLAY_INTERPOLATED_HITBOX_BIT = 0x8000,
	OVERLAY_AUTOAIM_BIT = 0x10000,
	OVERLAY_NPC_SELECTED_BIT = 0x20000,
	OVERLAY_JOINT_INFO_BIT = 0x40000,
	OVERLAY_NPC_ROUTE_BIT = 0x80000,
	OVERLAY_NPC_TRIANGULATE_BIT = 0x100000,
	OVERLAY_NPC_ZAP_BIT = 0x200000,
	OVERLAY_NPC_ENEMIES_BIT = 0x400000,
	OVERLAY_NPC_CONDITIONS_BIT = 0x800000,
	OVERLAY_NPC_COMBAT_BIT = 0x1000000,
	OVERLAY_NPC_TASK_BIT = 0x2000000,
	OVERLAY_NPC_BODYLOCATIONS = 0x4000000,
	OVERLAY_NPC_VIEWCONE_BIT = 0x8000000,
	OVERLAY_NPC_KILL_BIT = 0x10000000,
	OVERLAY_WC_CHANGE_ENTITY = 0x20000000,
	OVERLAY_BUDDHA_MODE = 0x40000000,
	OVERLAY_NPC_STEERING_REGULATIONS = 0x80000000,
	OVERLAY_NPC_TASK_TEXT_BIT = 0x100000000,
	OVERLAY_PROP_DEBUG = 0x200000000,
	OVERLAY_NPC_RELATION_BIT = 0x400000000,
	OVERLAY_VIEWOFFSET = 0x800000000,
	OVERLAY_VCOLLIDE_WIREFRAME_BIT = 0x1000000000,
	OVERLAY_NPC_NEAREST_NODE_BIT = 0x2000000000,
	OVERLAY_ACTORNAME_BIT = 0x4000000000,
	OVERLAY_NPC_CONDITIONS_TEXT_BIT = 0x8000000000,
};

// Aligment: 4
// Size: 7
enum class EDotaEntityMessages : uint32_t
{
	DOTA_UNIT_SPEECH = 0x0,
	DOTA_UNIT_SPEECH_MUTE = 0x1,
	DOTA_UNIT_ADD_GESTURE = 0x2,
	DOTA_UNIT_REMOVE_GESTURE = 0x3,
	DOTA_UNIT_REMOVE_ALL_GESTURES = 0x4,
	DOTA_UNIT_FADE_GESTURE = 0x6,
	DOTA_UNIT_SPEECH_CLIENTSIDE_RULES = 0x7,
};

// Aligment: 4
// Size: 2
enum class PointWorldTextReorientMode_t : uint32_t
{
	POINT_WORLD_TEXT_REORIENT_NONE = 0x0,
	POINT_WORLD_TEXT_REORIENT_AROUND_UP = 0x1,
};

// Aligment: 4
// Size: 5
enum class DOTA_ThreatLevel : uint32_t
{
	DOTA_THREATLEVEL_Ultra = 0x0,
	DOTA_THREATLEVEL_High = 0x1,
	DOTA_THREATLEVEL_Medium = 0x2,
	DOTA_THREATLEVEL_Low = 0x3,
	DOTA_THREATLEVEL_None = 0x4,
};

// Aligment: 4
// Size: 20
enum class EPlayerVoiceListenState : uint32_t
{
	kPVLS_None = 0x0,
	kPVLS_DeniedChatBanned = 0x1,
	kPVLS_DeniedPartner = 0x2,
	kPVLS_DeniedHLTVTalkerNotSpectator = 0x3,
	kPVLS_DeniedHLTVNoTalkerPlayerID = 0x4,
	kPVLS_DeniedHLTVTalkerNotBroadcaster = 0x5,
	kPVLS_DeniedTeamSpectator = 0x6,
	kPVLS_DeniedStudent = 0x8,
	kPVLS_DeniedPrivateCoach = 0x9,
	kPVLS_Denied = 0x40,
	kPVLS_AllowHLTVTalkerIsBroadcaster = 0x41,
	kPVLS_AllowCoBroadcaster = 0x42,
	kPVLS_AllowAllChat = 0x43,
	kPVLS_AllowStudentToCoach = 0x44,
	kPVLS_AllowFellowStudent = 0x45,
	kPVLS_AllowTalkerIsCoach = 0x46,
	kPVLS_AllowCoachHearTeam = 0x47,
	kPVLS_AllowSameTeam = 0x48,
	kPVLS_AllowShowcase = 0x49,
	kPVLS_AllowPrivateCoach = 0x4a,
};

// Aligment: 4
// Size: 4
enum class LobbyDotaTVDelay : uint32_t
{
	LobbyDotaTV_10 = 0x0,
	LobbyDotaTV_120 = 0x1,
	LobbyDotaTV_300 = 0x2,
	LobbyDotaTV_900 = 0x3,
};

// Aligment: 4
// Size: 12
enum class DotaGestureSlot_t : uint32_t
{
	GESTURE_SLOT_NONE = 0xffffffffffffffff,
	GESTURE_SLOT_ATTACK = 0x0,
	GESTURE_SLOT_ABILITY = 0x1,
	GESTURE_SLOT_OVERRIDE = 0x2,
	GESTURE_SLOT_CUSTOM = 0x3,
	GESTURE_SLOT_CUSTOM2 = 0x4,
	GESTURE_SLOT_CUSTOM3 = 0x5,
	GESTURE_SLOT_CONSTANT = 0x6,
	GESTURE_SLOT_TAUNT = 0x7,
	GESTURE_SLOT_ABSOLUTE = 0x8,
	GESTURE_SLOT_COUNT = 0x9,
	GESTURE_SLOT_STOLEN_ABILITY_BIT = 0x80,
};

// Aligment: 4
// Size: 14
enum class HitGroup_t : uint32_t
{
	HITGROUP_INVALID = 0xffffffffffffffff,
	HITGROUP_GENERIC = 0x0,
	HITGROUP_HEAD = 0x1,
	HITGROUP_CHEST = 0x2,
	HITGROUP_STOMACH = 0x3,
	HITGROUP_LEFTARM = 0x4,
	HITGROUP_RIGHTARM = 0x5,
	HITGROUP_LEFTLEG = 0x6,
	HITGROUP_RIGHTLEG = 0x7,
	HITGROUP_NECK = 0x8,
	HITGROUP_UNUSED = 0x9,
	HITGROUP_GEAR = 0xa,
	HITGROUP_SPECIAL = 0xb,
	HITGROUP_COUNT = 0xc,
};

// Aligment: 8
// Size: 18
enum class InputBitMask_t : uint64_t
{
	IN_NONE = 0x0,
	IN_ALL = 0xffffffffffffffff,
	IN_ATTACK = 0x1,
	IN_JUMP = 0x2,
	IN_DUCK = 0x4,
	IN_FORWARD = 0x8,
	IN_BACK = 0x10,
	IN_USE = 0x20,
	IN_TURNLEFT = 0x80,
	IN_TURNRIGHT = 0x100,
	IN_MOVELEFT = 0x200,
	IN_MOVERIGHT = 0x400,
	IN_ATTACK2 = 0x800,
	IN_RELOAD = 0x2000,
	IN_SPEED = 0x10000,
	IN_JOYAUTOSPRINT = 0x20000,
	IN_FIRST_MOD_SPECIFIC_BIT = 0x100000000,
	IN_QUERY = 0x100000000,
};

// Flags: MEnumFlagsWithOverlappingBits
// Aligment: 4
// Size: 7
enum class DAMAGE_TYPES : uint32_t
{
	DAMAGE_TYPE_NONE = 0x0,
	DAMAGE_TYPE_PHYSICAL = 0x1,
	DAMAGE_TYPE_MAGICAL = 0x2,
	DAMAGE_TYPE_PURE = 0x4,
	DAMAGE_TYPE_HP_REMOVAL = 0x8,
	DAMAGE_TYPE_ABILITY_DEFINED = 0x16,
	DAMAGE_TYPE_ALL = 0x7,
};

// Aligment: 4
// Size: 10
enum class ELeagueTier : uint32_t
{
	LEAGUE_TIER_UNSET = 0x0,
	LEAGUE_TIER_AMATEUR = 0x1,
	LEAGUE_TIER_PROFESSIONAL = 0x2,
	LEAGUE_TIER_MINOR = 0x3,
	LEAGUE_TIER_MAJOR = 0x4,
	LEAGUE_TIER_INTERNATIONAL = 0x5,
	LEAGUE_TIER_DPC_QUALIFIER = 0x6,
	LEAGUE_TIER_DPC_LEAGUE_QUALIFIER = 0x7,
	LEAGUE_TIER_DPC_LEAGUE = 0x8,
	LEAGUE_TIER_DPC_LEAGUE_FINALS = 0x9,
};

// Aligment: 4
// Size: 8
enum class ESOMsg : uint32_t
{
	k_ESOMsg_Create = 0x15,
	k_ESOMsg_Update = 0x16,
	k_ESOMsg_Destroy = 0x17,
	k_ESOMsg_CacheSubscribed = 0x18,
	k_ESOMsg_CacheUnsubscribed = 0x19,
	k_ESOMsg_UpdateMultiple = 0x1a,
	k_ESOMsg_CacheSubscriptionRefresh = 0x1c,
	k_ESOMsg_CacheSubscribedUpToDate = 0x1d,
};

// Aligment: 4
// Size: 2
enum class FowBlockerShape_t : uint32_t
{
	FOW_BLOCKER_SHAPE_RECTANGLE = 0x0,
	FOW_BLOCKER_SHAPE_RECTANGLE_OUTLINE = 0x1,
};

// Aligment: 4
// Size: 2
enum class Bidirectional_Messages_LowFrequency : uint32_t
{
	bi_RelayInfo = 0x2bc,
	bi_RelayPacket = 0x2bd,
};

// Aligment: 4
// Size: 3
enum class EMobilePaymentProvider : uint32_t
{
	k_EMobilePaymentProvider_Invalid = 0x0,
	k_EMobilePaymentProvider_GooglePlay = 0x1,
	k_EMobilePaymentProvider_AppleAppStore = 0x2,
};

// Aligment: 4
// Size: 3
enum class ERoshanSpawnPhase : uint32_t
{
	ROSHAN_SPAWN_PHASE_ALIVE = 0x0,
	ROSHAN_SPAWN_PHASE_BASE_TIMER = 0x1,
	ROSHAN_SPAWN_PHASE_VISIBLE_TIMER = 0x2,
};

// Aligment: 4
// Size: 3
enum class modifierremove : uint32_t
{
	DOTA_BUFF_REMOVE_ALL = 0x0,
	DOTA_BUFF_REMOVE_ENEMY = 0x1,
	DOTA_BUFF_REMOVE_ALLY = 0x2,
};

// Aligment: 4
// Size: 5
enum class EntityDisolveType_t : uint32_t
{
	ENTITY_DISSOLVE_INVALID = 0xffffffffffffffff,
	ENTITY_DISSOLVE_NORMAL = 0x0,
	ENTITY_DISSOLVE_ELECTRICAL = 0x1,
	ENTITY_DISSOLVE_ELECTRICAL_LIGHT = 0x2,
	ENTITY_DISSOLVE_CORE = 0x3,
};

// Aligment: 4
// Size: 3
enum class EStickerbookPageType : uint32_t
{
	STICKER_PAGE_GENERIC = 0x0,
	STICKER_PAGE_TEAM = 0x1,
	STICKER_PAGE_TALENT = 0x2,
};

// Aligment: 4
// Size: 14
enum class EDOTAGCSessionNeed : uint32_t
{
	k_EDOTAGCSessionNeed_Unknown = 0x0,
	k_EDOTAGCSessionNeed_UserNoSessionNeeded = 0x64,
	k_EDOTAGCSessionNeed_UserInOnlineGame = 0x65,
	k_EDOTAGCSessionNeed_UserInLocalGame = 0x66,
	k_EDOTAGCSessionNeed_UserInUIWasConnected = 0x67,
	k_EDOTAGCSessionNeed_UserInUINeverConnected = 0x68,
	k_EDOTAGCSessionNeed_UserTutorials = 0x69,
	k_EDOTAGCSessionNeed_UserInUIWasConnectedIdle = 0x6a,
	k_EDOTAGCSessionNeed_UserInUINeverConnectedIdle = 0x6b,
	k_EDOTAGCSessionNeed_GameServerOnline = 0xc8,
	k_EDOTAGCSessionNeed_GameServerLocal = 0xc9,
	k_EDOTAGCSessionNeed_GameServerIdle = 0xca,
	k_EDOTAGCSessionNeed_GameServerRelay = 0xcb,
	k_EDOTAGCSessionNeed_GameServerLocalUpload = 0xcc,
};

// Aligment: 4
// Size: 1
enum class EGCEconBaseMsg : uint32_t
{
	k_EMsgGCGenericResult = 0xa13,
};

// Aligment: 4
// Size: 4
enum class EPoorNetworkConditionsType : uint32_t
{
	k_EPoorNetworkConditions_None = 0x0,
	k_EPoorNetworkConditions_Unknown = 0x1,
	k_EPoorNetworkConditions_MassDisconnect = 0x2,
	k_EPoorNetworkConditions_ExcessBadQosIntervals = 0x3,
};

// Aligment: 4
// Size: 3
enum class EClientUIEvent : uint32_t
{
	EClientUIEvent_Invalid = 0x0,
	EClientUIEvent_DialogFinished = 0x1,
	EClientUIEvent_FireOutput = 0x2,
};

// Aligment: 4
// Size: 17
enum class CLC_Messages : uint32_t
{
	clc_ClientInfo = 0x14,
	clc_Move = 0x15,
	clc_VoiceData = 0x16,
	clc_BaselineAck = 0x17,
	clc_ListenEvents = 0x18,
	clc_RespondCvarValue = 0x19,
	clc_FileCRCCheck = 0x1a,
	clc_LoadingProgress = 0x1b,
	clc_SplitPlayerConnect = 0x1c,
	clc_ClientMessage = 0x1d,
	clc_SplitPlayerDisconnect = 0x1e,
	clc_ServerStatus = 0x1f,
	clc_ServerPing = 0x20,
	clc_RequestPause = 0x21,
	clc_CmdKeyValues = 0x22,
	clc_RconServerDetails = 0x23,
	clc_HltvReplay = 0x24,
};

// Aligment: 4
// Size: 12
enum class EBadgeType : uint32_t
{
	k_EBadgeType_TI7_Midweek = 0x1,
	k_EBadgeType_TI7_Finals = 0x2,
	k_EBadgeType_TI7_AllEvent = 0x3,
	k_EBadgeType_TI8_Midweek = 0x4,
	k_EBadgeType_TI8_Finals = 0x5,
	k_EBadgeType_TI8_AllEvent = 0x6,
	k_EBadgeType_TI10 = 0x7,
	k_EBadgeType_TI11_PlayoffsDay1 = 0x8,
	k_EBadgeType_TI11_PlayoffsDay2 = 0x9,
	k_EBadgeType_TI11_PlayoffsDay3 = 0xa,
	k_EBadgeType_TI11_PlayoffsDay4 = 0xb,
	k_EBadgeType_TI11_FinalsWeekend = 0xc,
};

// Aligment: 4
// Size: 8
enum class CourierState_t : uint32_t
{
	COURIER_STATE_INIT = 0xffffffffffffffff,
	COURIER_STATE_IDLE = 0x0,
	COURIER_STATE_AT_BASE = 0x1,
	COURIER_STATE_MOVING = 0x2,
	COURIER_STATE_DELIVERING_ITEMS = 0x3,
	COURIER_STATE_RETURNING_TO_BASE = 0x4,
	COURIER_STATE_DEAD = 0x5,
	COURIER_NUM_STATES = 0x6,
};

// Aligment: 4
// Size: 3
enum class WorldTextPanelVerticalAlign_t : uint32_t
{
	WORLDTEXT_VERTICAL_ALIGN_TOP = 0x0,
	WORLDTEXT_VERTICAL_ALIGN_CENTER = 0x1,
	WORLDTEXT_VERTICAL_ALIGN_BOTTOM = 0x2,
};

// Aligment: 4
// Size: 7
enum class DOTAInventoryFlags_t : uint32_t
{
	DOTA_INVENTORY_ALLOW_NONE = 0x0,
	DOTA_INVENTORY_ALLOW_MAIN = 0x1,
	DOTA_INVENTORY_ALLOW_STASH = 0x2,
	DOTA_INVENTORY_ALLOW_DROP_ON_GROUND = 0x4,
	DOTA_INVENTORY_ALLOW_DROP_AT_FOUNTAIN = 0x8,
	DOTA_INVENTORY_LIMIT_DROP_ON_GROUND = 0x10,
	DOTA_INVENTORY_ALL_ACCESS = 0x3,
};

// Aligment: 4
// Size: 7
enum class DOTAConnectionState_t : uint32_t
{
	DOTA_CONNECTION_STATE_UNKNOWN = 0x0,
	DOTA_CONNECTION_STATE_NOT_YET_CONNECTED = 0x1,
	DOTA_CONNECTION_STATE_CONNECTED = 0x2,
	DOTA_CONNECTION_STATE_DISCONNECTED = 0x3,
	DOTA_CONNECTION_STATE_ABANDONED = 0x4,
	DOTA_CONNECTION_STATE_LOADING = 0x5,
	DOTA_CONNECTION_STATE_FAILED = 0x6,
};

// Aligment: 4
// Size: 154
enum class EDotaUserMessages : uint32_t
{
	DOTA_UM_AddUnitToSelection = 0x1d0,
	DOTA_UM_AIDebugLine = 0x1d1,
	DOTA_UM_ChatEvent = 0x1d2,
	DOTA_UM_CombatHeroPositions = 0x1d3,
	DOTA_UM_CombatLogData = 0x1d4,
	DOTA_UM_CombatLogBulkData = 0x1d6,
	DOTA_UM_CreateLinearProjectile = 0x1d7,
	DOTA_UM_DestroyLinearProjectile = 0x1d8,
	DOTA_UM_DodgeTrackingProjectiles = 0x1d9,
	DOTA_UM_GlobalLightColor = 0x1da,
	DOTA_UM_GlobalLightDirection = 0x1db,
	DOTA_UM_InvalidCommand = 0x1dc,
	DOTA_UM_LocationPing = 0x1dd,
	DOTA_UM_MapLine = 0x1de,
	DOTA_UM_MiniKillCamInfo = 0x1df,
	DOTA_UM_MinimapDebugPoint = 0x1e0,
	DOTA_UM_MinimapEvent = 0x1e1,
	DOTA_UM_NevermoreRequiem = 0x1e2,
	DOTA_UM_OverheadEvent = 0x1e3,
	DOTA_UM_SetNextAutobuyItem = 0x1e4,
	DOTA_UM_SharedCooldown = 0x1e5,
	DOTA_UM_SpectatorPlayerClick = 0x1e6,
	DOTA_UM_TutorialTipInfo = 0x1e7,
	DOTA_UM_UnitEvent = 0x1e8,
	DOTA_UM_ParticleManager = 0x1e9,
	DOTA_UM_BotChat = 0x1ea,
	DOTA_UM_HudError = 0x1eb,
	DOTA_UM_ItemPurchased = 0x1ec,
	DOTA_UM_Ping = 0x1ed,
	DOTA_UM_ItemFound = 0x1ee,
	DOTA_UM_CharacterSpeakConcept = 0x1ef,
	DOTA_UM_SwapVerify = 0x1f0,
	DOTA_UM_WorldLine = 0x1f1,
	DOTA_UM_TournamentDrop = 0x1f2,
	DOTA_UM_ItemAlert = 0x1f3,
	DOTA_UM_HalloweenDrops = 0x1f4,
	DOTA_UM_ChatWheel = 0x1f5,
	DOTA_UM_ReceivedXmasGift = 0x1f6,
	DOTA_UM_UpdateSharedContent = 0x1f7,
	DOTA_UM_TutorialRequestExp = 0x1f8,
	DOTA_UM_TutorialPingMinimap = 0x1f9,
	DOTA_UM_GamerulesStateChanged = 0x1fa,
	DOTA_UM_ShowSurvey = 0x1fb,
	DOTA_UM_TutorialFade = 0x1fc,
	DOTA_UM_AddQuestLogEntry = 0x1fd,
	DOTA_UM_SendStatPopup = 0x1fe,
	DOTA_UM_TutorialFinish = 0x1ff,
	DOTA_UM_SendRoshanPopup = 0x200,
	DOTA_UM_SendGenericToolTip = 0x201,
	DOTA_UM_SendFinalGold = 0x202,
	DOTA_UM_CustomMsg = 0x203,
	DOTA_UM_CoachHUDPing = 0x204,
	DOTA_UM_ClientLoadGridNav = 0x205,
	DOTA_UM_TE_Projectile = 0x206,
	DOTA_UM_TE_ProjectileLoc = 0x207,
	DOTA_UM_TE_DotaBloodImpact = 0x208,
	DOTA_UM_TE_UnitAnimation = 0x209,
	DOTA_UM_TE_UnitAnimationEnd = 0x20a,
	DOTA_UM_AbilityPing = 0x20b,
	DOTA_UM_ShowGenericPopup = 0x20c,
	DOTA_UM_VoteStart = 0x20d,
	DOTA_UM_VoteUpdate = 0x20e,
	DOTA_UM_VoteEnd = 0x20f,
	DOTA_UM_BoosterState = 0x210,
	DOTA_UM_WillPurchaseAlert = 0x211,
	DOTA_UM_TutorialMinimapPosition = 0x212,
	DOTA_UM_PlayerMMR = 0x213,
	DOTA_UM_AbilitySteal = 0x214,
	DOTA_UM_CourierKilledAlert = 0x215,
	DOTA_UM_EnemyItemAlert = 0x216,
	DOTA_UM_StatsMatchDetails = 0x217,
	DOTA_UM_MiniTaunt = 0x218,
	DOTA_UM_BuyBackStateAlert = 0x219,
	DOTA_UM_SpeechBubble = 0x21a,
	DOTA_UM_CustomHeaderMessage = 0x21b,
	DOTA_UM_QuickBuyAlert = 0x21c,
	DOTA_UM_StatsHeroDetails = 0x21d,
	DOTA_UM_PredictionResult = 0x21e,
	DOTA_UM_ModifierAlert = 0x21f,
	DOTA_UM_HPManaAlert = 0x220,
	DOTA_UM_GlyphAlert = 0x221,
	DOTA_UM_BeastChat = 0x222,
	DOTA_UM_SpectatorPlayerUnitOrders = 0x223,
	DOTA_UM_CustomHudElement_Create = 0x224,
	DOTA_UM_CustomHudElement_Modify = 0x225,
	DOTA_UM_CustomHudElement_Destroy = 0x226,
	DOTA_UM_CompendiumState = 0x227,
	DOTA_UM_ProjectionAbility = 0x228,
	DOTA_UM_ProjectionEvent = 0x229,
	DOTA_UM_CombatLogDataHLTV = 0x22a,
	DOTA_UM_XPAlert = 0x22b,
	DOTA_UM_UpdateQuestProgress = 0x22c,
	DOTA_UM_MatchMetadata = 0x22d,
	DOTA_UM_MatchDetails = 0x22e,
	DOTA_UM_QuestStatus = 0x22f,
	DOTA_UM_SuggestHeroPick = 0x230,
	DOTA_UM_SuggestHeroRole = 0x231,
	DOTA_UM_KillcamDamageTaken = 0x232,
	DOTA_UM_SelectPenaltyGold = 0x233,
	DOTA_UM_RollDiceResult = 0x234,
	DOTA_UM_FlipCoinResult = 0x235,
	DOTA_UM_RequestItemSuggestions = 0x236,
	DOTA_UM_TeamCaptainChanged = 0x237,
	DOTA_UM_SendRoshanSpectatorPhase = 0x238,
	DOTA_UM_ChatWheelCooldown = 0x239,
	DOTA_UM_DismissAllStatPopups = 0x23a,
	DOTA_UM_TE_DestroyProjectile = 0x23b,
	DOTA_UM_HeroRelicProgress = 0x23c,
	DOTA_UM_AbilityDraftRequestAbility = 0x23d,
	DOTA_UM_ItemSold = 0x23e,
	DOTA_UM_DamageReport = 0x23f,
	DOTA_UM_SalutePlayer = 0x240,
	DOTA_UM_TipAlert = 0x241,
	DOTA_UM_ReplaceQueryUnit = 0x242,
	DOTA_UM_EmptyTeleportAlert = 0x243,
	DOTA_UM_MarsArenaOfBloodAttack = 0x244,
	DOTA_UM_ESArcanaCombo = 0x245,
	DOTA_UM_ESArcanaComboSummary = 0x246,
	DOTA_UM_HighFiveLeftHanging = 0x247,
	DOTA_UM_HighFiveCompleted = 0x248,
	DOTA_UM_ShovelUnearth = 0x249,
	DOTA_EM_InvokerSpellCast = 0x24a,
	DOTA_UM_RadarAlert = 0x24b,
	DOTA_UM_AllStarEvent = 0x24c,
	DOTA_UM_TalentTreeAlert = 0x24d,
	DOTA_UM_QueuedOrderRemoved = 0x24e,
	DOTA_UM_DebugChallenge = 0x24f,
	DOTA_UM_OMArcanaCombo = 0x250,
	DOTA_UM_FoundNeutralItem = 0x251,
	DOTA_UM_OutpostCaptured = 0x252,
	DOTA_UM_OutpostGrantedXP = 0x253,
	DOTA_UM_MoveCameraToUnit = 0x254,
	DOTA_UM_PauseMinigameData = 0x255,
	DOTA_UM_VersusScene_PlayerBehavior = 0x256,
	DOTA_UM_QoP_ArcanaSummary = 0x258,
	DOTA_UM_HotPotato_Created = 0x259,
	DOTA_UM_HotPotato_Exploded = 0x25a,
	DOTA_UM_WK_Arcana_Progress = 0x25b,
	DOTA_UM_GuildChallenge_Progress = 0x25c,
	DOTA_UM_WRArcanaProgress = 0x25d,
	DOTA_UM_WRArcanaSummary = 0x25e,
	DOTA_UM_EmptyItemSlotAlert = 0x25f,
	DOTA_UM_AghsStatusAlert = 0x260,
	DOTA_UM_PingConfirmation = 0x261,
	DOTA_UM_MutedPlayers = 0x262,
	DOTA_UM_ContextualTip = 0x263,
	DOTA_UM_ChatMessage = 0x264,
	DOTA_UM_NeutralCampAlert = 0x265,
	DOTA_UM_RockPaperScissorsStarted = 0x266,
	DOTA_UM_RockPaperScissorsFinished = 0x267,
	DOTA_UM_DuelOpponentKilled = 0x268,
	DOTA_UM_DuelAccepted = 0x269,
	DOTA_UM_DuelRequested = 0x26a,
	DOTA_UM_MuertaReleaseEvent_AssignedTargetKilled = 0x26b,
};

// Aligment: 1
// Size: 6
enum class WaterLevel_t : uint8_t
{
	WL_NotInWater = 0,
	WL_Feet = 1,
	WL_Waist = 2,
	WL_Chest = 3,
	WL_FullyUnderwater = 4,
	WL_Count = 5,
};

// Aligment: 4
// Size: 9
enum class ELeagueNodeGroupType : uint32_t
{
	INVALID_GROUP_TYPE = 0x0,
	ORGANIZATIONAL = 0x1,
	ROUND_ROBIN = 0x2,
	SWISS = 0x3,
	BRACKET_SINGLE = 0x4,
	BRACKET_DOUBLE_SEED_LOSER = 0x5,
	BRACKET_DOUBLE_ALL_WINNER = 0x6,
	SHOWMATCH = 0x7,
	GSL = 0x8,
};

// Aligment: 4
// Size: 2
enum class ScriptedConflictResponse_t : uint32_t
{
	SS_CONFLICT_ENQUEUE = 0x0,
	SS_CONFLICT_INTERRUPT = 0x1,
};

// Aligment: 4
// Size: 3
enum class RequestPause_t : uint32_t
{
	RP_PAUSE = 0x0,
	RP_UNPAUSE = 0x1,
	RP_TOGGLEPAUSE = 0x2,
};

// Aligment: 4
// Size: 3
enum class EChatSpecialPrivileges : uint32_t
{
	k_EChatSpecialPrivileges_None = 0x0,
	k_EChatSpecialPrivileges_Moderator = 0x1,
	k_EChatSpecialPrivileges_SuperModerator = 0x2,
};

// Aligment: 4
// Size: 3
enum class DOTA_ROSHAN_PHASE : uint32_t
{
	k_SRSP_ROSHAN_ALIVE = 0x0,
	k_SRSP_ROSHAN_BASE_TIMER = 0x1,
	k_SRSP_ROSHAN_VISIBLE_TIMER = 0x2,
};

// Aligment: 4
// Size: 3
enum class EDOTAPlayerMMRType : uint32_t
{
	k_EDOTAPlayerMMRType_Invalid = 0x0,
	k_EDOTAPlayerMMRType_GeneralHidden = 0x1,
	k_EDOTAPlayerMMRType_GeneralCompetitive = 0x3,
};

// Aligment: 4
// Size: 3
enum class EDOTAVersusScenePlayerBehavior : uint32_t
{
	VS_PLAYER_BEHAVIOR_PLAY_ACTIVITY = 0x1,
	VS_PLAYER_BEHAVIOR_CHAT_WHEEL = 0x2,
	VS_PLAYER_BEHAVIOR_PLAYBACK_RATE = 0x3,
};

// Aligment: 4
// Size: 86
enum class DotaPseudoRandomType : uint32_t
{
	DOTA_PSEUDO_RANDOM_NONE = 0x0,
	DOTA_PSEUDO_RANDOM_MAGNUS_SHARD = 0x1,
	DOTA_PSEUDO_RANDOM_PHANTOMASSASSIN_CRIT = 0x2,
	DOTA_PSEUDO_RANDOM_PHANTOMASSASSIN_DAGGER = 0x3,
	DOTA_PSEUDO_RANDOM_PHANTOMLANCER_JUXTAPOSE = 0x4,
	DOTA_PSEUDO_RANDOM_TINY_CRAGGY = 0x5,
	DOTA_PSEUDO_RANDOM_COLD_REBUKE = 0x6,
	DOTA_PSEUDO_RANDOM_WOLF_CRIT = 0x7,
	DOTA_PSEUDO_RANDOM_AXE_HELIX = 0x8,
	DOTA_PSEUDO_RANDOM_AXE_HELIX_ATTACK = 0x9,
	DOTA_PSEUDO_RANDOM_LEGION_MOMENT = 0xa,
	DOTA_PSEUDO_RANDOM_SLARDAR_BASH = 0xb,
	DOTA_PSEUDO_RANDOM_OD_ESSENCE = 0xc,
	DOTA_PSEUDO_RANDOM_DROW_MARKSMANSHIP = 0xd,
	DOTA_PSEUDO_RANDOM_OGRE_MAGI_FIREBLAST = 0xe,
	DOTA_PSEUDO_RANDOM_OGRE_ITEM_MULTICAST = 0xf,
	DOTA_PSEUDO_RANDOM_SPIRITBREAKER_GREATERBASH = 0x10,
	DOTA_PSEUDO_RANDOM_LONE_DRUID_ENTANGLE = 0x11,
	DOTA_PSEUDO_RANDOM_FACELESS_BASH = 0x12,
	DOTA_PSEUDO_RANDOM_FACELESS_EVADE_SPELL = 0x13,
	DOTA_PSEUDO_RANDOM_FACELESS_EVADE_ATTACK = 0x14,
	DOTA_PSEUDO_RANDOM_FACELESS_VOID_BACKTRACK = 0x15,
	DOTA_PSEUDO_RANDOM_BREWMASTER_CRIT = 0x16,
	DOTA_PSEUDO_RANDOM_BREWMASTER_CINDER_BREW = 0x17,
	DOTA_PSEUDO_RANDOM_SNIPER_HEADSHOT = 0x18,
	DOTA_PSEUDO_RANDOM_ATOS = 0x19,
	DOTA_PSEUDO_RANDOM_JUGG_CRIT = 0x1a,
	DOTA_PSEUDO_RANDOM_DAZZLE_SCEPTER = 0x1b,
	DOTA_PSEUDO_RANDOM_CHAOS_CRIT = 0x1c,
	DOTA_PSEUDO_RANDOM_LYCAN_CRIT = 0x1d,
	DOTA_PSEUDO_RANDOM_TUSK_CRIT = 0x1e,
	DOTA_PSEUDO_RANDOM_CM_FREEZING_FIELD = 0x1f,
	DOTA_PSEUDO_RANDOM_GENERIC_BASHER = 0x20,
	DOTA_PSEUDO_RANDOM_SKELETONKING_CRIT = 0x21,
	DOTA_PSEUDO_RANDOM_SKELETONKING_CRIT_MORTAL = 0x22,
	DOTA_PSEUDO_RANDOM_ITEM_GREATERCRIT = 0x23,
	DOTA_PSEUDO_RANDOM_ITEM_LESSERCRIT = 0x24,
	DOTA_PSEUDO_RANDOM_ITEM_BASHER = 0x25,
	DOTA_PSEUDO_RANDOM_ITEM_SOLAR_CREST = 0x26,
	DOTA_PSEUDO_RANDOM_ITEM_JAVELIN_ACCURACY = 0x27,
	DOTA_PSEUDO_RANDOM_ITEM_TRIDENT = 0x28,
	DOTA_PSEUDO_RANDOM_ITEM_ABYSSAL = 0x29,
	DOTA_PSEUDO_RANDOM_ITEM_ABYSSAL_BLOCK = 0x2a,
	DOTA_PSEUDO_RANDOM_ITEM_STOUT = 0x2b,
	DOTA_PSEUDO_RANDOM_ITEM_VANGUARD = 0x2c,
	DOTA_PSEUDO_RANDOM_ITEM_CRIMSON_GUARD = 0x2d,
	DOTA_PSEUDO_RANDOM_ITEM_PMS = 0x2e,
	DOTA_PSEUDO_RANDOM_ITEM_HALBRED_MAIM = 0x2f,
	DOTA_PSEUDO_RANDOM_ITEM_SANGEYASHA_MAIM = 0x30,
	DOTA_PSEUDO_RANDOM_ITEM_SANGEKAYA_MAIM = 0x31,
	DOTA_PSEUDO_RANDOM_ITEM_SANGE_MAIM = 0x32,
	DOTA_PSEUDO_RANDOM_ITEM_BUTTERFLY = 0x33,
	DOTA_PSEUDO_RANDOM_ITEM_MAELSTROM = 0x34,
	DOTA_PSEUDO_RANDOM_ITEM_MJOLLNIR = 0x35,
	DOTA_PSEUDO_RANDOM_ITEM_MJOLLNIR_STATIC = 0x36,
	DOTA_PSEUDO_RANDOM_ITEM_MKB = 0x37,
	DOTA_PSEUDO_RANDOM_ITEM_SILVER_EDGE = 0x38,
	DOTA_PSEUDO_RANDOM_ITEM_NAGINATA = 0x39,
	DOTA_PSEUDO_RANDOM_TROLL_BASH = 0x3a,
	DOTA_PSEUDO_RANDOM_RIKI_SMOKE_SCREEN = 0x3b,
	DOTA_PSEUDO_RANDOM_CHAOS_DOUBLE_CRIT = 0x3c,
	DOTA_PSEUDO_RANDOM_CHAOS_TRIPLE_CRIT = 0x3d,
	DOTA_PSEUDO_RANDOM_GENERIC_EVASION = 0x3e,
	DOTA_PSEUDO_RANDOM_GENERIC_HEIGHT_MISS = 0x3f,
	DOTA_PSEUDO_RANDOM_GENERIC_MISS = 0x40,
	DOTA_PSEUDO_RANDOM_ARMADILLO_HEARTPIERCER = 0x41,
	DOTA_PSEUDO_RANDOM_MARS_SHIELD = 0x42,
	DOTA_PSEUDO_RANDOM_ANTIMAGE_SILENT = 0x43,
	DOTA_PSEUDO_RANDOM_NEUTRAL_DROP_TIER1 = 0x44,
	DOTA_PSEUDO_RANDOM_NEUTRAL_DROP_TIER2 = 0x45,
	DOTA_PSEUDO_RANDOM_NEUTRAL_DROP_TIER3 = 0x46,
	DOTA_PSEUDO_RANDOM_NEUTRAL_DROP_TIER4 = 0x47,
	DOTA_PSEUDO_RANDOM_NEUTRAL_DROP_TIER5 = 0x48,
	DOTA_PSEUDO_RANDOM_MARS_BULWARK = 0x49,
	DOTA_PSEUDO_RANDOM_MUERTA_GUNSLINGER = 0x4a,
	DOTA_PSEUDO_RANDOM_BATRIDER_NAPALM = 0x4b,
	DOTA_PSEUDO_RANDOM_CUSTOM_GENERIC = 0x4c,
	DOTA_PSEUDO_RANDOM_CUSTOM_GAME_1 = 0x4d,
	DOTA_PSEUDO_RANDOM_CUSTOM_GAME_2 = 0x4e,
	DOTA_PSEUDO_RANDOM_CUSTOM_GAME_3 = 0x4f,
	DOTA_PSEUDO_RANDOM_CUSTOM_GAME_4 = 0x50,
	DOTA_PSEUDO_RANDOM_CUSTOM_GAME_5 = 0x51,
	DOTA_PSEUDO_RANDOM_CUSTOM_GAME_6 = 0x52,
	DOTA_PSEUDO_RANDOM_CUSTOM_GAME_7 = 0x53,
	DOTA_PSEUDO_RANDOM_CUSTOM_GAME_8 = 0x54,
	DOTA_PSEUDO_RANDOM_CUSTOM_GAME_9 = 0x55,
};

// Aligment: 4
// Size: 6
enum class PetCoopStates_t : uint32_t
{
	COOP_IGNORE = 0x0,
	COOPTELEPORT_START_PERFORMING = 0x1,
	COOPTELEPORT_PLAY_ENDANIM = 0x2,
	COOPTELEPORT_PLAY_EXITANIM = 0x3,
	COOP_WARD_OBSERVER = 0x4,
	COOP_WARD_SENTRY = 0x5,
};

// Aligment: 1
// Size: 6
enum class EDOTASpecialBonusOperation : uint8_t
{
	SPECIAL_BONUS_ADD = 0,
	SPECIAL_BONUS_MULTIPLY = 1,
	SPECIAL_BONUS_SUBTRACT = 2,
	SPECIAL_BONUS_PERCENTAGE_ADD = 3,
	SPECIAL_BONUS_PERCENTAGE_SUBTRACT = 4,
	SPECIAL_BONUS_SET = 5,
};

// Aligment: 4
// Size: 4
enum class ScriptedMoveType_t : uint32_t
{
	SCRIPTED_MOVETYPE_NONE = 0x0,
	SCRIPTED_MOVETYPE_TO_WITH_DURATION = 0x1,
	SCRIPTED_MOVETYPE_TO_WITH_MOVESPEED = 0x2,
	SCRIPTED_MOVETYPE_SWEEP_TO_AT_MOVEMENT_SPEED = 0x3,
};

// Aligment: 4
// Size: 9
enum class DOTALeaverStatus_t : uint32_t
{
	DOTA_LEAVER_NONE = 0x0,
	DOTA_LEAVER_DISCONNECTED = 0x1,
	DOTA_LEAVER_DISCONNECTED_TOO_LONG = 0x2,
	DOTA_LEAVER_ABANDONED = 0x3,
	DOTA_LEAVER_AFK = 0x4,
	DOTA_LEAVER_NEVER_CONNECTED = 0x5,
	DOTA_LEAVER_NEVER_CONNECTED_TOO_LONG = 0x6,
	DOTA_LEAVER_FAILED_TO_READY_UP = 0x7,
	DOTA_LEAVER_DECLINED = 0x8,
};

// Aligment: 4
// Size: 8
enum class SpawnGroupFlags_t : uint32_t
{
	SPAWN_GROUP_LOAD_ENTITIES_FROM_SAVE = 0x1,
	SPAWN_GROUP_DONT_SPAWN_ENTITIES = 0x2,
	SPAWN_GROUP_SYNCHRONOUS_SPAWN = 0x4,
	SPAWN_GROUP_IS_INITIAL_SPAWN_GROUP = 0x8,
	SPAWN_GROUP_CREATE_CLIENT_ONLY_ENTITIES = 0x10,
	SPAWN_GROUP_BLOCK_UNTIL_LOADED = 0x40,
	SPAWN_GROUP_LOAD_STREAMING_DATA = 0x80,
	SPAWN_GROUP_CREATE_NEW_SCENE_WORLD = 0x100,
};

// Aligment: 4
// Size: 5
enum class AbilityLearnResult_t : uint32_t
{
	ABILITY_CAN_BE_UPGRADED = 0x0,
	ABILITY_CANNOT_BE_UPGRADED_NOT_UPGRADABLE = 0x1,
	ABILITY_CANNOT_BE_UPGRADED_AT_MAX = 0x2,
	ABILITY_CANNOT_BE_UPGRADED_REQUIRES_LEVEL = 0x3,
	ABILITY_NOT_LEARNABLE = 0x4,
};

// Aligment: 4
// Size: 4
enum class ScriptedOnDeath_t : uint32_t
{
	SS_ONDEATH_NOT_APPLICABLE = 0xffffffffffffffff,
	SS_ONDEATH_UNDEFINED = 0x0,
	SS_ONDEATH_RAGDOLL = 0x1,
	SS_ONDEATH_ANIMATED_DEATH = 0x2,
};

// Aligment: 4
// Size: 5
enum class eRollType : uint32_t
{
	ROLL_NONE = 0xffffffffffffffff,
	ROLL_STATS = 0x0,
	ROLL_CREDITS = 0x1,
	ROLL_LATE_JOIN_LOGO = 0x2,
	ROLL_OUTTRO = 0x3,
};

// Aligment: 4
// Size: 1
enum class SVC_Messages_LowFrequency : uint32_t
{
	svc_dummy = 0x258,
};

// Aligment: 4
// Size: 5
enum class Attributes : uint32_t
{
	DOTA_ATTRIBUTE_STRENGTH = 0x0,
	DOTA_ATTRIBUTE_AGILITY = 0x1,
	DOTA_ATTRIBUTE_INTELLECT = 0x2,
	DOTA_ATTRIBUTE_MAX = 0x3,
	DOTA_ATTRIBUTE_INVALID = 0xffffffffffffffff,
};

// Aligment: 4
// Size: 5
enum class EStickerbookAuditAction : uint32_t
{
	STICKERBOOK_AUDIT_CREATE_PAGE = 0x0,
	STICKERBOOK_AUDIT_DELETE_PAGE = 0x1,
	STICKERBOOK_AUDIT_STICK_STICKERS = 0x2,
	STICKERBOOK_AUDIT_REPLACE_STICKERS = 0x3,
	STICKERBOOK_AUDIT_HERO_STICKER = 0x4,
};

// Aligment: 4
// Size: 6
enum class EPlayerChallengeHistoryType : uint32_t
{
	k_EPlayerChallengeHistoryType_Invalid = 0x0,
	k_EPlayerChallengeHistoryType_KillEater = 0x1,
	k_EPlayerChallengeHistoryType_DotaPlusRelic = 0x2,
	k_EPlayerChallengeHistoryType_DotaPlusHeroPlayerChallenge = 0x3,
	k_EPlayerChallengeHistoryType_InGameEventChallenge = 0x4,
	k_EPlayerChallengeHistoryType_GuildContract = 0x5,
};

// Aligment: 4
// Size: 4
enum class CommandExecMode_t : uint32_t
{
	EXEC_MANUAL = 0x0,
	EXEC_LEVELSTART = 0x1,
	EXEC_PERIODIC = 0x2,
	EXEC_MODES_COUNT = 0x3,
};

// Aligment: 4
// Size: 2
enum class EDotaBroadcastMessages : uint32_t
{
	DOTA_BM_LANLobbyRequest = 0x1,
	DOTA_BM_LANLobbyReply = 0x2,
};

// Aligment: 4
// Size: 10
enum class ECustomGameInstallStatus : uint32_t
{
	k_ECustomGameInstallStatus_Unknown = 0x0,
	k_ECustomGameInstallStatus_Ready = 0x1,
	k_ECustomGameInstallStatus_Busy = 0x2,
	k_ECustomGameInstallStatus_FailedGeneric = 0x65,
	k_ECustomGameInstallStatus_FailedInternalError = 0x66,
	k_ECustomGameInstallStatus_RequestedTimestampTooOld = 0x67,
	k_ECustomGameInstallStatus_RequestedTimestampTooNew = 0x68,
	k_ECustomGameInstallStatus_CRCMismatch = 0x69,
	k_ECustomGameInstallStatus_FailedSteam = 0x6a,
	k_ECustomGameInstallStatus_FailedCanceled = 0x6b,
};

// Aligment: 4
// Size: 814
enum class EDOTAGCMsg : uint32_t
{
	k_EMsgGCDOTABase = 0x1b58,
	k_EMsgGCGameMatchSignOut = 0x1b5c,
	k_EMsgGCGameMatchSignOutResponse = 0x1b5d,
	k_EMsgGCJoinChatChannel = 0x1b61,
	k_EMsgGCJoinChatChannelResponse = 0x1b62,
	k_EMsgGCOtherJoinedChannel = 0x1b65,
	k_EMsgGCOtherLeftChannel = 0x1b66,
	k_EMsgServerToGCRequestStatus = 0x1b72,
	k_EMsgGCStartFindingMatch = 0x1b79,
	k_EMsgGCConnectedPlayers = 0x1b7a,
	k_EMsgGCAbandonCurrentGame = 0x1b7b,
	k_EMsgGCStopFindingMatch = 0x1b7c,
	k_EMsgGCPracticeLobbyCreate = 0x1b7e,
	k_EMsgGCPracticeLobbyLeave = 0x1b80,
	k_EMsgGCPracticeLobbyLaunch = 0x1b81,
	k_EMsgGCPracticeLobbyList = 0x1b82,
	k_EMsgGCPracticeLobbyListResponse = 0x1b83,
	k_EMsgGCPracticeLobbyJoin = 0x1b84,
	k_EMsgGCPracticeLobbySetDetails = 0x1b86,
	k_EMsgGCPracticeLobbySetTeamSlot = 0x1b87,
	k_EMsgGCInitialQuestionnaireResponse = 0x1b89,
	k_EMsgGCPracticeLobbyResponse = 0x1b8f,
	k_EMsgGCBroadcastNotification = 0x1b90,
	k_EMsgGCLiveScoreboardUpdate = 0x1b91,
	k_EMsgGCRequestChatChannelList = 0x1b94,
	k_EMsgGCRequestChatChannelListResponse = 0x1b95,
	k_EMsgGCReadyUp = 0x1b9e,
	k_EMsgGCKickedFromMatchmakingQueue = 0x1b9f,
	k_EMsgGCLeaverDetected = 0x1ba0,
	k_EMsgGCSpectateFriendGame = 0x1ba1,
	k_EMsgGCSpectateFriendGameResponse = 0x1ba2,
	k_EMsgGCReportsRemainingRequest = 0x1ba4,
	k_EMsgGCReportsRemainingResponse = 0x1ba5,
	k_EMsgGCSubmitPlayerReport = 0x1ba6,
	k_EMsgGCSubmitPlayerReportResponse = 0x1ba7,
	k_EMsgGCPracticeLobbyKick = 0x1ba9,
	k_EMsgGCRequestSaveGames = 0x1bac,
	k_EMsgGCRequestSaveGamesServer = 0x1bad,
	k_EMsgGCRequestSaveGamesResponse = 0x1bae,
	k_EMsgGCLeaverDetectedResponse = 0x1baf,
	k_EMsgGCPlayerFailedToConnect = 0x1bb0,
	k_EMsgGCGCToRelayConnect = 0x1bb1,
	k_EMsgGCGCToRelayConnectresponse = 0x1bb2,
	k_EMsgGCWatchGame = 0x1bb3,
	k_EMsgGCWatchGameResponse = 0x1bb4,
	k_EMsgGCBanStatusRequest = 0x1bb5,
	k_EMsgGCBanStatusResponse = 0x1bb6,
	k_EMsgGCMatchDetailsRequest = 0x1bb7,
	k_EMsgGCMatchDetailsResponse = 0x1bb8,
	k_EMsgGCCancelWatchGame = 0x1bb9,
	k_EMsgGCPopup = 0x1bbe,
	k_EMsgGCFriendPracticeLobbyListRequest = 0x1bc7,
	k_EMsgGCFriendPracticeLobbyListResponse = 0x1bc8,
	k_EMsgGCPracticeLobbyJoinResponse = 0x1bc9,
	k_EMsgGCCreateTeam = 0x1bcb,
	k_EMsgGCCreateTeamResponse = 0x1bcc,
	k_EMsgGCTeamInvite_InviterToGC = 0x1bd2,
	k_EMsgGCTeamInvite_GCImmediateResponseToInviter = 0x1bd3,
	k_EMsgGCTeamInvite_GCRequestToInvitee = 0x1bd4,
	k_EMsgGCTeamInvite_InviteeResponseToGC = 0x1bd5,
	k_EMsgGCTeamInvite_GCResponseToInviter = 0x1bd6,
	k_EMsgGCTeamInvite_GCResponseToInvitee = 0x1bd7,
	k_EMsgGCKickTeamMember = 0x1bd8,
	k_EMsgGCKickTeamMemberResponse = 0x1bd9,
	k_EMsgGCLeaveTeam = 0x1bda,
	k_EMsgGCLeaveTeamResponse = 0x1bdb,
	k_EMsgGCApplyTeamToPracticeLobby = 0x1be6,
	k_EMsgGCTransferTeamAdmin = 0x1be8,
	k_EMsgGCPracticeLobbyJoinBroadcastChannel = 0x1bed,
	k_EMsgGC_TournamentItemEvent = 0x1bee,
	k_EMsgGC_TournamentItemEventResponse = 0x1bef,
	k_EMsgTeamFanfare = 0x1bf4,
	k_EMsgResponseTeamFanfare = 0x1bf5,
	k_EMsgGC_GameServerUploadSaveGame = 0x1bf6,
	k_EMsgGC_GameServerSaveGameResult = 0x1bf7,
	k_EMsgGC_GameServerGetLoadGame = 0x1bf8,
	k_EMsgGC_GameServerGetLoadGameResult = 0x1bf9,
	k_EMsgGCEditTeamDetails = 0x1bfe,
	k_EMsgGCEditTeamDetailsResponse = 0x1bff,
	k_EMsgGCReadyUpStatus = 0x1c02,
	k_EMsgGCToGCMatchCompleted = 0x1c12,
	k_EMsgGCBalancedShuffleLobby = 0x1c14,
	k_EMsgGCMatchmakingStatsRequest = 0x1c1d,
	k_EMsgGCMatchmakingStatsResponse = 0x1c1e,
	k_EMsgGCBotGameCreate = 0x1c1f,
	k_EMsgGCSetMatchHistoryAccess = 0x1c20,
	k_EMsgGCSetMatchHistoryAccessResponse = 0x1c21,
	k_EMsgUpgradeLeagueItem = 0x1c23,
	k_EMsgUpgradeLeagueItemResponse = 0x1c24,
	k_EMsgGCWatchDownloadedReplay = 0x1c26,
	k_EMsgClientsRejoinChatChannels = 0x1c31,
	k_EMsgGCToGCGetUserChatInfo = 0x1c32,
	k_EMsgGCToGCGetUserChatInfoResponse = 0x1c33,
	k_EMsgGCToGCLeaveAllChatChannels = 0x1c34,
	k_EMsgGCToGCUpdateAccountChatBan = 0x1c35,
	k_EMsgGCToGCCanInviteUserToTeam = 0x1c42,
	k_EMsgGCToGCCanInviteUserToTeamResponse = 0x1c43,
	k_EMsgGCToGCGetUserRank = 0x1c44,
	k_EMsgGCToGCGetUserRankResponse = 0x1c45,
	k_EMsgGCToGCUpdateTeamStats = 0x1c48,
	k_EMsgGCToGCValidateTeam = 0x1c49,
	k_EMsgGCToGCValidateTeamResponse = 0x1c4a,
	k_EMsgGCToGCGetLeagueAdmin = 0x1c57,
	k_EMsgGCToGCGetLeagueAdminResponse = 0x1c58,
	k_EMsgGCLeaveChatChannel = 0x1c68,
	k_EMsgGCChatMessage = 0x1c69,
	k_EMsgGCGetHeroStandings = 0x1c6a,
	k_EMsgGCGetHeroStandingsResponse = 0x1c6b,
	k_EMsgGCItemEditorReservationsRequest = 0x1c73,
	k_EMsgGCItemEditorReservationsResponse = 0x1c74,
	k_EMsgGCItemEditorReserveItemDef = 0x1c75,
	k_EMsgGCItemEditorReserveItemDefResponse = 0x1c76,
	k_EMsgGCItemEditorReleaseReservation = 0x1c77,
	k_EMsgGCItemEditorReleaseReservationResponse = 0x1c78,
	k_EMsgGCRewardTutorialPrizes = 0x1c79,
	k_EMsgGCFantasyLivePlayerStats = 0x1c8c,
	k_EMsgGCFantasyFinalPlayerStats = 0x1c8d,
	k_EMsgGCFlipLobbyTeams = 0x1c98,
	k_EMsgGCToGCProcessPlayerReportForTarget = 0x1c9c,
	k_EMsgGCToGCProcessReportSuccess = 0x1c9d,
	k_EMsgGCNotifyAccountFlagsChange = 0x1c9e,
	k_EMsgGCSetProfilePrivacy = 0x1c9f,
	k_EMsgGCSetProfilePrivacyResponse = 0x1ca0,
	k_EMsgGCClientSuspended = 0x1cae,
	k_EMsgGCPartyMemberSetCoach = 0x1caf,
	k_EMsgGCPracticeLobbySetCoach = 0x1cb2,
	k_EMsgGCChatModeratorBan = 0x1cbf,
	k_EMsgGCLobbyUpdateBroadcastChannelInfo = 0x1cc7,
	k_EMsgGCToGCGrantTournamentItem = 0x1ccc,
	k_EMsgGCToGCUpgradeTwitchViewerItems = 0x1ccf,
	k_EMsgGCToGCGetLiveMatchAffiliates = 0x1cd0,
	k_EMsgGCToGCGetLiveMatchAffiliatesResponse = 0x1cd1,
	k_EMsgGCToGCUpdatePlayerPennantCounts = 0x1cd2,
	k_EMsgGCToGCGetPlayerPennantCounts = 0x1cd3,
	k_EMsgGCToGCGetPlayerPennantCountsResponse = 0x1cd4,
	k_EMsgGCGameMatchSignOutPermissionRequest = 0x1cd5,
	k_EMsgGCGameMatchSignOutPermissionResponse = 0x1cd6,
	k_EMsgDOTAAwardEventPoints = 0x1cd8,
	k_EMsgDOTAGetEventPoints = 0x1cdb,
	k_EMsgDOTAGetEventPointsResponse = 0x1cdc,
	k_EMsgGCPartyLeaderWatchGamePrompt = 0x1ce5,
	k_EMsgGCCompendiumSetSelection = 0x1ced,
	k_EMsgGCCompendiumDataRequest = 0x1cee,
	k_EMsgGCCompendiumDataResponse = 0x1cef,
	k_EMsgDOTAGetPlayerMatchHistory = 0x1cf0,
	k_EMsgDOTAGetPlayerMatchHistoryResponse = 0x1cf1,
	k_EMsgGCToGCMatchmakingAddParty = 0x1cf2,
	k_EMsgGCToGCMatchmakingRemoveParty = 0x1cf3,
	k_EMsgGCToGCMatchmakingRemoveAllParties = 0x1cf4,
	k_EMsgGCToGCMatchmakingMatchFound = 0x1cf5,
	k_EMsgGCToGCUpdateMatchManagementStats = 0x1cf6,
	k_EMsgGCToGCUpdateMatchmakingStats = 0x1cf7,
	k_EMsgGCToServerPingRequest = 0x1cf8,
	k_EMsgGCToServerPingResponse = 0x1cf9,
	k_EMsgGCToGCProcessMatchLeaver = 0x1d02,
	k_EMsgGCNotificationsRequest = 0x1d03,
	k_EMsgGCNotificationsResponse = 0x1d04,
	k_EMsgGCToGCModifyNotification = 0x1d05,
	k_EMsgGCLeagueAdminList = 0x1d0a,
	k_EMsgGCNotificationsMarkReadRequest = 0x1d0b,
	k_EMsgServerToGCRequestBatchPlayerResources = 0x1d1a,
	k_EMsgServerToGCRequestBatchPlayerResourcesResponse = 0x1d1b,
	k_EMsgGCCompendiumSetSelectionResponse = 0x1d1d,
	k_EMsgGCPlayerInfoSubmit = 0x1d20,
	k_EMsgGCPlayerInfoSubmitResponse = 0x1d21,
	k_EMsgGCToGCGetAccountLevel = 0x1d22,
	k_EMsgGCToGCGetAccountLevelResponse = 0x1d23,
	k_EMsgDOTAGetWeekendTourneySchedule = 0x1d28,
	k_EMsgDOTAWeekendTourneySchedule = 0x1d29,
	k_EMsgGCJoinableCustomGameModesRequest = 0x1d2a,
	k_EMsgGCJoinableCustomGameModesResponse = 0x1d2b,
	k_EMsgGCJoinableCustomLobbiesRequest = 0x1d2c,
	k_EMsgGCJoinableCustomLobbiesResponse = 0x1d2d,
	k_EMsgGCQuickJoinCustomLobby = 0x1d2e,
	k_EMsgGCQuickJoinCustomLobbyResponse = 0x1d2f,
	k_EMsgGCToGCGrantEventPointAction = 0x1d30,
	k_EMsgGCToGCSetCompendiumSelection = 0x1d36,
	k_EMsgGCHasItemQuery = 0x1d3c,
	k_EMsgGCHasItemResponse = 0x1d3d,
	k_EMsgGCToGCGrantEventPointActionMsg = 0x1d40,
	k_EMsgGCToGCGetCompendiumSelections = 0x1d44,
	k_EMsgGCToGCGetCompendiumSelectionsResponse = 0x1d45,
	k_EMsgServerToGCMatchConnectionStats = 0x1d46,
	k_EMsgGCToClientTournamentItemDrop = 0x1d47,
	k_EMsgSQLDelayedGrantLeagueDrop = 0x1d48,
	k_EMsgServerGCUpdateSpectatorCount = 0x1d49,
	k_EMsgGCToGCEmoticonUnlock = 0x1d4d,
	k_EMsgSignOutDraftInfo = 0x1d4e,
	k_EMsgClientToGCEmoticonDataRequest = 0x1d4f,
	k_EMsgGCToClientEmoticonData = 0x1d50,
	k_EMsgGCPracticeLobbyToggleBroadcastChannelCameramanStatus = 0x1d51,
	k_EMsgDOTARedeemItem = 0x1d5e,
	k_EMsgDOTARedeemItemResponse = 0x1d5f,
	k_EMsgClientToGCGetAllHeroProgress = 0x1d61,
	k_EMsgClientToGCGetAllHeroProgressResponse = 0x1d62,
	k_EMsgGCToGCGetServerForClient = 0x1d63,
	k_EMsgGCToGCGetServerForClientResponse = 0x1d64,
	k_EMsgSQLProcessTournamentGameOutcome = 0x1d65,
	k_EMsgSQLGrantTrophyToAccount = 0x1d66,
	k_EMsgClientToGCGetTrophyList = 0x1d67,
	k_EMsgClientToGCGetTrophyListResponse = 0x1d68,
	k_EMsgGCToClientTrophyAwarded = 0x1d69,
	k_EMsgGCGameBotMatchSignOut = 0x1d6a,
	k_EMsgGCGameBotMatchSignOutPermissionRequest = 0x1d6b,
	k_EMsgSignOutBotInfo = 0x1d6c,
	k_EMsgGCToGCUpdateProfileCards = 0x1d6d,
	k_EMsgClientToGCGetProfileCard = 0x1d6e,
	k_EMsgClientToGCGetProfileCardResponse = 0x1d6f,
	k_EMsgClientToGCGetBattleReport = 0x1d70,
	k_EMsgClientToGCGetBattleReportResponse = 0x1d71,
	k_EMsgClientToGCSetProfileCardSlots = 0x1d72,
	k_EMsgGCToClientProfileCardUpdated = 0x1d73,
	k_EMsgServerToGCVictoryPredictions = 0x1d74,
	k_EMsgClientToGCGetBattleReportAggregateStats = 0x1d75,
	k_EMsgClientToGCGetBattleReportAggregateStatsResponse = 0x1d76,
	k_EMsgClientToGCGetBattleReportInfo = 0x1d77,
	k_EMsgClientToGCGetBattleReportInfoResponse = 0x1d78,
	k_EMsgSignOutCommunicationSummary = 0x1d79,
	k_EMsgServerToGCRequestStatus_Response = 0x1d7a,
	k_EMsgClientToGCCreateHeroStatue = 0x1d7b,
	k_EMsgGCToClientHeroStatueCreateResult = 0x1d7c,
	k_EMsgGCGCToLANServerRelayConnect = 0x1d7d,
	k_EMsgClientToGCAcknowledgeBattleReport = 0x1d7e,
	k_EMsgClientToGCAcknowledgeBattleReportResponse = 0x1d7f,
	k_EMsgClientToGCGetBattleReportMatchHistory = 0x1d80,
	k_EMsgClientToGCGetBattleReportMatchHistoryResponse = 0x1d81,
	k_EMsgServerToGCReportKillSummaries = 0x1d82,
	k_EMsgGCToGCUpdatePlayerPredictions = 0x1d89,
	k_EMsgGCToServerPredictionResult = 0x1d8a,
	k_EMsgGCToGCReplayMonitorValidateReplay = 0x1d91,
	k_EMsgLobbyEventPoints = 0x1d94,
	k_EMsgGCToGCGetCustomGameTickets = 0x1d95,
	k_EMsgGCToGCGetCustomGameTicketsResponse = 0x1d96,
	k_EMsgGCToGCCustomGamePlayed = 0x1d98,
	k_EMsgGCToGCGrantEventPointsToUser = 0x1d99,
	k_EMsgGameserverCrashReport = 0x1d9b,
	k_EMsgGameserverCrashReportResponse = 0x1d9c,
	k_EMsgGCToClientSteamDatagramTicket = 0x1d9d,
	k_EMsgGCToGCSendAccountsEventPoints = 0x1d9f,
	k_EMsgClientToGCRerollPlayerChallenge = 0x1da0,
	k_EMsgServerToGCRerollPlayerChallenge = 0x1da1,
	k_EMsgGCRerollPlayerChallengeResponse = 0x1da2,
	k_EMsgSignOutUpdatePlayerChallenge = 0x1da3,
	k_EMsgClientToGCSetPartyLeader = 0x1da4,
	k_EMsgClientToGCCancelPartyInvites = 0x1da5,
	k_EMsgSQLGrantLeagueMatchToTicketHolders = 0x1da8,
	k_EMsgGCToGCEmoticonUnlockNoRollback = 0x1daa,
	k_EMsgClientToGCApplyGemCombiner = 0x1db3,
	k_EMsgClientToGCGetAllHeroOrder = 0x1db6,
	k_EMsgClientToGCGetAllHeroOrderResponse = 0x1db7,
	k_EMsgSQLGCToGCGrantBadgePoints = 0x1db8,
	k_EMsgGCToGCCheckOwnsEntireEmoticonRange = 0x1dbb,
	k_EMsgGCToGCCheckOwnsEntireEmoticonRangeResponse = 0x1dbc,
	k_EMsgGCToClientRequestLaneSelection = 0x1dc7,
	k_EMsgGCToClientRequestLaneSelectionResponse = 0x1dc8,
	k_EMsgServerToGCCavernCrawlIsHeroActive = 0x1dc9,
	k_EMsgServerToGCCavernCrawlIsHeroActiveResponse = 0x1dca,
	k_EMsgClientToGCPlayerCardSpecificPurchaseRequest = 0x1dcb,
	k_EMsgClientToGCPlayerCardSpecificPurchaseResponse = 0x1dcc,
	k_EMsgGCtoServerTensorflowInstance = 0x1dcd,
	k_EMsgSQLSetIsLeagueAdmin = 0x1dce,
	k_EMsgGCToGCGetLiveLeagueMatches = 0x1dcf,
	k_EMsgGCToGCGetLiveLeagueMatchesResponse = 0x1dd0,
	k_EMsgDOTALeagueInfoListAdminsRequest = 0x1dd1,
	k_EMsgDOTALeagueInfoListAdminsReponse = 0x1dd2,
	k_EMsgGCToGCLeagueMatchStarted = 0x1ddd,
	k_EMsgGCToGCLeagueMatchCompleted = 0x1dde,
	k_EMsgGCToGCLeagueMatchStartedResponse = 0x1ddf,
	k_EMsgDOTALeagueAvailableLobbyNodesRequest = 0x1de2,
	k_EMsgDOTALeagueAvailableLobbyNodes = 0x1de3,
	k_EMsgGCToGCLeagueRequest = 0x1de4,
	k_EMsgGCToGCLeagueResponse = 0x1de5,
	k_EMsgGCToGCLeagueNodeGroupRequest = 0x1de6,
	k_EMsgGCToGCLeagueNodeGroupResponse = 0x1de7,
	k_EMsgGCToGCLeagueNodeRequest = 0x1de8,
	k_EMsgGCToGCLeagueNodeResponse = 0x1de9,
	k_EMsgGCToGCRealtimeStatsTerseRequest = 0x1dea,
	k_EMsgGCToGCRealtimeStatsTerseResponse = 0x1deb,
	k_EMsgGCToGCGetTopMatchesRequest = 0x1dec,
	k_EMsgGCToGCGetTopMatchesResponse = 0x1ded,
	k_EMsgClientToGCGetFilteredPlayers = 0x1dee,
	k_EMsgGCToClientGetFilteredPlayersResponse = 0x1def,
	k_EMsgClientToGCRemoveFilteredPlayer = 0x1df0,
	k_EMsgGCToClientRemoveFilteredPlayerResponse = 0x1df1,
	k_EMsgGCToClientPlayerBeaconState = 0x1df2,
	k_EMsgGCToClientPartyBeaconUpdate = 0x1df3,
	k_EMsgGCToClientPartySearchInvite = 0x1df4,
	k_EMsgClientToGCUpdatePartyBeacon = 0x1df5,
	k_EMsgClientToGCRequestActiveBeaconParties = 0x1df6,
	k_EMsgGCToClientRequestActiveBeaconPartiesResponse = 0x1df7,
	k_EMsgClientToGCManageFavorites = 0x1df8,
	k_EMsgGCToClientManageFavoritesResponse = 0x1df9,
	k_EMsgClientToGCJoinPartyFromBeacon = 0x1dfa,
	k_EMsgGCToClientJoinPartyFromBeaconResponse = 0x1dfb,
	k_EMsgClientToGCGetFavoritePlayers = 0x1dfc,
	k_EMsgGCToClientGetFavoritePlayersResponse = 0x1dfd,
	k_EMsgClientToGCVerifyFavoritePlayers = 0x1dfe,
	k_EMsgGCToClientVerifyFavoritePlayersResponse = 0x1dff,
	k_EMsgGCToClientPartySearchInvites = 0x1e00,
	k_EMsgGCToClientRequestMMInfo = 0x1e01,
	k_EMsgClientToGCMMInfo = 0x1e02,
	k_EMsgSignOutTextMuteInfo = 0x1e03,
	k_EMsgClientToGCPurchaseLabyrinthBlessings = 0x1e04,
	k_EMsgClientToGCPurchaseLabyrinthBlessingsResponse = 0x1e05,
	k_EMsgClientToGCPurchaseFilteredPlayerSlot = 0x1e06,
	k_EMsgGCToClientPurchaseFilteredPlayerSlotResponse = 0x1e07,
	k_EMsgClientToGCUpdateFilteredPlayerNote = 0x1e08,
	k_EMsgGCToClientUpdateFilteredPlayerNoteResponse = 0x1e09,
	k_EMsgClientToGCClaimSwag = 0x1e0a,
	k_EMsgGCToClientClaimSwagResponse = 0x1e0b,
	k_EMsgServerToGCLockCharmTrading = 0x1f44,
	k_EMsgClientToGCPlayerStatsRequest = 0x1f46,
	k_EMsgGCToClientPlayerStatsResponse = 0x1f47,
	k_EMsgGCClearPracticeLobbyTeam = 0x1f48,
	k_EMsgClientToGCFindTopSourceTVGames = 0x1f49,
	k_EMsgGCToClientFindTopSourceTVGamesResponse = 0x1f4a,
	k_EMsgGCLobbyList = 0x1f4b,
	k_EMsgGCLobbyListResponse = 0x1f4c,
	k_EMsgGCPlayerStatsMatchSignOut = 0x1f4d,
	k_EMsgClientToGCSocialFeedPostCommentRequest = 0x1f50,
	k_EMsgGCToClientSocialFeedPostCommentResponse = 0x1f51,
	k_EMsgClientToGCCustomGamesFriendsPlayedRequest = 0x1f52,
	k_EMsgGCToClientCustomGamesFriendsPlayedResponse = 0x1f53,
	k_EMsgClientToGCFriendsPlayedCustomGameRequest = 0x1f54,
	k_EMsgGCToClientFriendsPlayedCustomGameResponse = 0x1f55,
	k_EMsgGCTopCustomGamesList = 0x1f58,
	k_EMsgClientToGCSetPartyOpen = 0x1f5d,
	k_EMsgClientToGCMergePartyInvite = 0x1f5e,
	k_EMsgGCToClientMergeGroupInviteReply = 0x1f5f,
	k_EMsgClientToGCMergePartyResponse = 0x1f60,
	k_EMsgGCToClientMergePartyResponseReply = 0x1f61,
	k_EMsgClientToGCGetProfileCardStats = 0x1f62,
	k_EMsgClientToGCGetProfileCardStatsResponse = 0x1f63,
	k_EMsgClientToGCTopLeagueMatchesRequest = 0x1f64,
	k_EMsgClientToGCTopFriendMatchesRequest = 0x1f65,
	k_EMsgGCToClientProfileCardStatsUpdated = 0x1f68,
	k_EMsgServerToGCRealtimeStats = 0x1f69,
	k_EMsgGCToServerRealtimeStatsStartStop = 0x1f6a,
	k_EMsgGCToGCGetServersForClients = 0x1f6d,
	k_EMsgGCToGCGetServersForClientsResponse = 0x1f6e,
	k_EMsgGCPracticeLobbyKickFromTeam = 0x1f6f,
	k_EMsgDOTAChatGetMemberCount = 0x1f70,
	k_EMsgDOTAChatGetMemberCountResponse = 0x1f71,
	k_EMsgClientToGCSocialFeedPostMessageRequest = 0x1f72,
	k_EMsgGCToClientSocialFeedPostMessageResponse = 0x1f73,
	k_EMsgCustomGameListenServerStartedLoading = 0x1f74,
	k_EMsgCustomGameClientFinishedLoading = 0x1f75,
	k_EMsgGCPracticeLobbyCloseBroadcastChannel = 0x1f76,
	k_EMsgGCStartFindingMatchResponse = 0x1f77,
	k_EMsgSQLGCToGCGrantAccountFlag = 0x1f79,
	k_EMsgGCToClientTopLeagueMatchesResponse = 0x1f7d,
	k_EMsgGCToClientTopFriendMatchesResponse = 0x1f7e,
	k_EMsgClientToGCMatchesMinimalRequest = 0x1f7f,
	k_EMsgClientToGCMatchesMinimalResponse = 0x1f80,
	k_EMsgGCToClientChatRegionsEnabled = 0x1f83,
	k_EMsgClientToGCPingData = 0x1f84,
	k_EMsgGCToGCEnsureAccountInParty = 0x1f87,
	k_EMsgGCToGCEnsureAccountInPartyResponse = 0x1f88,
	k_EMsgClientToGCGetProfileTickets = 0x1f89,
	k_EMsgClientToGCGetProfileTicketsResponse = 0x1f8a,
	k_EMsgGCToClientMatchGroupsVersion = 0x1f8b,
	k_EMsgClientToGCH264Unsupported = 0x1f8c,
	k_EMsgClientToGCGetQuestProgress = 0x1f8e,
	k_EMsgClientToGCGetQuestProgressResponse = 0x1f8f,
	k_EMsgSignOutXPCoins = 0x1f90,
	k_EMsgGCToClientMatchSignedOut = 0x1f91,
	k_EMsgGCGetHeroStatsHistory = 0x1f92,
	k_EMsgGCGetHeroStatsHistoryResponse = 0x1f93,
	k_EMsgClientToGCPrivateChatInvite = 0x1f94,
	k_EMsgClientToGCPrivateChatKick = 0x1f98,
	k_EMsgClientToGCPrivateChatPromote = 0x1f99,
	k_EMsgClientToGCPrivateChatDemote = 0x1f9a,
	k_EMsgGCToClientPrivateChatResponse = 0x1f9b,
	k_EMsgClientToGCLatestConductScorecardRequest = 0x1f9f,
	k_EMsgClientToGCLatestConductScorecard = 0x1fa0,
	k_EMsgClientToGCWageringRequest = 0x1fa3,
	k_EMsgGCToClientWageringResponse = 0x1fa4,
	k_EMsgClientToGCEventGoalsRequest = 0x1fa7,
	k_EMsgClientToGCEventGoalsResponse = 0x1fa8,
	k_EMsgGCToGCLeaguePredictionsUpdate = 0x1fac,
	k_EMsgGCToGCAddUserToPostGameChat = 0x1fae,
	k_EMsgClientToGCHasPlayerVotedForMVP = 0x1faf,
	k_EMsgClientToGCHasPlayerVotedForMVPResponse = 0x1fb0,
	k_EMsgClientToGCVoteForMVP = 0x1fb1,
	k_EMsgClientToGCVoteForMVPResponse = 0x1fb2,
	k_EMsgGCToGCGetEventOwnership = 0x1fb3,
	k_EMsgGCToGCGetEventOwnershipResponse = 0x1fb4,
	k_EMsgGCToClientAutomatedTournamentStateChange = 0x1fb5,
	k_EMsgClientToGCWeekendTourneyOpts = 0x1fb6,
	k_EMsgClientToGCWeekendTourneyOptsResponse = 0x1fb7,
	k_EMsgClientToGCWeekendTourneyLeave = 0x1fb8,
	k_EMsgClientToGCWeekendTourneyLeaveResponse = 0x1fb9,
	k_EMsgClientToGCTeammateStatsRequest = 0x1fbc,
	k_EMsgClientToGCTeammateStatsResponse = 0x1fbd,
	k_EMsgClientToGCGetGiftPermissions = 0x1fbe,
	k_EMsgClientToGCGetGiftPermissionsResponse = 0x1fbf,
	k_EMsgClientToGCVoteForArcana = 0x1fc0,
	k_EMsgClientToGCVoteForArcanaResponse = 0x1fc1,
	k_EMsgClientToGCRequestArcanaVotesRemaining = 0x1fc2,
	k_EMsgClientToGCRequestArcanaVotesRemainingResponse = 0x1fc3,
	k_EMsgGCTransferTeamAdminResponse = 0x1fc4,
	k_EMsgGCToClientTeamInfo = 0x1fc7,
	k_EMsgGCToClientTeamsInfo = 0x1fc8,
	k_EMsgClientToGCMyTeamInfoRequest = 0x1fc9,
	k_EMsgClientToGCPublishUserStat = 0x1fcc,
	k_EMsgGCToGCSignoutSpendWager = 0x1fcd,
	k_EMsgGCSubmitLobbyMVPVote = 0x1fd0,
	k_EMsgGCSubmitLobbyMVPVoteResponse = 0x1fd1,
	k_EMsgSignOutCommunityGoalProgress = 0x1fd6,
	k_EMsgGCToClientLobbyMVPAwarded = 0x1fd8,
	k_EMsgGCToClientQuestProgressUpdated = 0x1fd9,
	k_EMsgGCToClientWageringUpdate = 0x1fda,
	k_EMsgGCToClientArcanaVotesUpdate = 0x1fdb,
	k_EMsgClientToGCSetSpectatorLobbyDetails = 0x1fdd,
	k_EMsgClientToGCSetSpectatorLobbyDetailsResponse = 0x1fde,
	k_EMsgClientToGCCreateSpectatorLobby = 0x1fdf,
	k_EMsgClientToGCCreateSpectatorLobbyResponse = 0x1fe0,
	k_EMsgClientToGCSpectatorLobbyList = 0x1fe1,
	k_EMsgClientToGCSpectatorLobbyListResponse = 0x1fe2,
	k_EMsgSpectatorLobbyGameDetails = 0x1fe3,
	k_EMsgServerToGCCompendiumInGamePredictionResults = 0x1fe6,
	k_EMsgServerToGCCloseCompendiumInGamePredictionVoting = 0x1fe7,
	k_EMsgClientToGCOpenPlayerCardPack = 0x1fe8,
	k_EMsgClientToGCOpenPlayerCardPackResponse = 0x1fe9,
	k_EMsgClientToGCSelectCompendiumInGamePrediction = 0x1fea,
	k_EMsgClientToGCSelectCompendiumInGamePredictionResponse = 0x1feb,
	k_EMsgClientToGCWeekendTourneyGetPlayerStats = 0x1fec,
	k_EMsgClientToGCWeekendTourneyGetPlayerStatsResponse = 0x1fed,
	k_EMsgClientToGCRecyclePlayerCard = 0x1fee,
	k_EMsgClientToGCRecyclePlayerCardResponse = 0x1fef,
	k_EMsgClientToGCCreatePlayerCardPack = 0x1ff0,
	k_EMsgClientToGCCreatePlayerCardPackResponse = 0x1ff1,
	k_EMsgClientToGCGetPlayerCardRosterRequest = 0x1ff2,
	k_EMsgClientToGCGetPlayerCardRosterResponse = 0x1ff3,
	k_EMsgClientToGCSetPlayerCardRosterRequest = 0x1ff4,
	k_EMsgClientToGCSetPlayerCardRosterResponse = 0x1ff5,
	k_EMsgServerToGCCloseCompendiumInGamePredictionVotingResponse = 0x1ff7,
	k_EMsgLobbyBattleCupVictory = 0x1ffa,
	k_EMsgGCGetPlayerCardItemInfo = 0x1ffb,
	k_EMsgGCGetPlayerCardItemInfoResponse = 0x1ffc,
	k_EMsgClientToGCRequestSteamDatagramTicket = 0x1ffd,
	k_EMsgClientToGCRequestSteamDatagramTicketResponse = 0x1ffe,
	k_EMsgGCToClientBattlePassRollupRequest = 0x1fff,
	k_EMsgGCToClientBattlePassRollupResponse = 0x2000,
	k_EMsgClientToGCTransferSeasonalMMRRequest = 0x2001,
	k_EMsgClientToGCTransferSeasonalMMRResponse = 0x2002,
	k_EMsgGCToGCPublicChatCommunicationBan = 0x2003,
	k_EMsgGCToGCUpdateAccountInfo = 0x2004,
	k_EMsgGCChatReportPublicSpam = 0x2005,
	k_EMsgClientToGCSetPartyBuilderOptions = 0x2006,
	k_EMsgClientToGCSetPartyBuilderOptionsResponse = 0x2007,
	k_EMsgGCToClientPlaytestStatus = 0x2008,
	k_EMsgClientToGCJoinPlaytest = 0x2009,
	k_EMsgClientToGCJoinPlaytestResponse = 0x200a,
	k_EMsgLobbyPlaytestDetails = 0x200b,
	k_EMsgDOTASetFavoriteTeam = 0x200c,
	k_EMsgGCToClientBattlePassRollupListRequest = 0x200d,
	k_EMsgGCToClientBattlePassRollupListResponse = 0x200e,
	k_EMsgDOTAClaimEventAction = 0x2011,
	k_EMsgDOTAClaimEventActionResponse = 0x2012,
	k_EMsgDOTAGetPeriodicResource = 0x2013,
	k_EMsgDOTAGetPeriodicResourceResponse = 0x2014,
	k_EMsgDOTAPeriodicResourceUpdated = 0x2015,
	k_EMsgServerToGCSpendWager = 0x2016,
	k_EMsgGCToGCSignoutSpendWagerToken = 0x2017,
	k_EMsgSubmitTriviaQuestionAnswer = 0x2018,
	k_EMsgSubmitTriviaQuestionAnswerResponse = 0x2019,
	k_EMsgClientToGCGiveTip = 0x201a,
	k_EMsgClientToGCGiveTipResponse = 0x201b,
	k_EMsgStartTriviaSession = 0x201c,
	k_EMsgStartTriviaSessionResponse = 0x201d,
	k_EMsgAnchorPhoneNumberRequest = 0x201e,
	k_EMsgAnchorPhoneNumberResponse = 0x201f,
	k_EMsgUnanchorPhoneNumberRequest = 0x2020,
	k_EMsgUnanchorPhoneNumberResponse = 0x2021,
	k_EMsgGCToGCSignoutSpendRankWager = 0x2025,
	k_EMsgGCToGCGetFavoriteTeam = 0x2026,
	k_EMsgGCToGCGetFavoriteTeamResponse = 0x2027,
	k_EMsgSignOutEventGameData = 0x2028,
	k_EMsgClientToGCQuickStatsRequest = 0x202e,
	k_EMsgClientToGCQuickStatsResponse = 0x202f,
	k_EMsgGCToGCSubtractEventPointsFromUser = 0x2030,
	k_EMsgSelectionPriorityChoiceRequest = 0x2031,
	k_EMsgSelectionPriorityChoiceResponse = 0x2032,
	k_EMsgGCToGCCompendiumInGamePredictionResults = 0x2033,
	k_EMsgGameAutographReward = 0x2034,
	k_EMsgGameAutographRewardResponse = 0x2035,
	k_EMsgDestroyLobbyRequest = 0x2036,
	k_EMsgDestroyLobbyResponse = 0x2037,
	k_EMsgPurchaseItemWithEventPoints = 0x2038,
	k_EMsgPurchaseItemWithEventPointsResponse = 0x2039,
	k_EMsgServerToGCMatchPlayerItemPurchaseHistory = 0x203a,
	k_EMsgGCToGCGrantPlusHeroMatchResults = 0x203b,
	k_EMsgServerToGCMatchStateHistory = 0x203f,
	k_EMsgPurchaseHeroRandomRelic = 0x2042,
	k_EMsgPurchaseHeroRandomRelicResponse = 0x2043,
	k_EMsgClientToGCClaimEventActionUsingItem = 0x2044,
	k_EMsgClientToGCClaimEventActionUsingItemResponse = 0x2045,
	k_EMsgPartyReadyCheckRequest = 0x2046,
	k_EMsgPartyReadyCheckResponse = 0x2047,
	k_EMsgPartyReadyCheckAcknowledge = 0x2048,
	k_EMsgGetRecentPlayTimeFriendsRequest = 0x2049,
	k_EMsgGetRecentPlayTimeFriendsResponse = 0x204a,
	k_EMsgGCToClientCommendNotification = 0x204b,
	k_EMsgProfileRequest = 0x204c,
	k_EMsgProfileResponse = 0x204d,
	k_EMsgProfileUpdate = 0x204e,
	k_EMsgProfileUpdateResponse = 0x204f,
	k_EMsgHeroGlobalDataRequest = 0x2052,
	k_EMsgHeroGlobalDataResponse = 0x2053,
	k_EMsgClientToGCRequestPlusWeeklyChallengeResult = 0x2054,
	k_EMsgClientToGCRequestPlusWeeklyChallengeResultResponse = 0x2055,
	k_EMsgGCToGCGrantPlusPrepaidTime = 0x2056,
	k_EMsgPrivateMetadataKeyRequest = 0x2057,
	k_EMsgPrivateMetadataKeyResponse = 0x2058,
	k_EMsgGCToGCReconcilePlusStatus = 0x2059,
	k_EMsgGCToGCCheckPlusStatus = 0x205a,
	k_EMsgGCToGCCheckPlusStatusResponse = 0x205b,
	k_EMsgGCToGCReconcilePlusAutoGrantItems = 0x205c,
	k_EMsgGCToGCReconcilePlusStatusUnreliable = 0x205d,
	k_EMsgGCToClientCavernCrawlMapPathCompleted = 0x2060,
	k_EMsgClientToGCCavernCrawlClaimRoom = 0x2061,
	k_EMsgClientToGCCavernCrawlClaimRoomResponse = 0x2062,
	k_EMsgClientToGCCavernCrawlUseItemOnRoom = 0x2063,
	k_EMsgClientToGCCavernCrawlUseItemOnRoomResponse = 0x2064,
	k_EMsgClientToGCCavernCrawlUseItemOnPath = 0x2065,
	k_EMsgClientToGCCavernCrawlUseItemOnPathResponse = 0x2066,
	k_EMsgClientToGCCavernCrawlRequestMapState = 0x2067,
	k_EMsgClientToGCCavernCrawlRequestMapStateResponse = 0x2068,
	k_EMsgSignOutTips = 0x2069,
	k_EMsgClientToGCRequestEventPointLogV2 = 0x206a,
	k_EMsgClientToGCRequestEventPointLogResponseV2 = 0x206b,
	k_EMsgClientToGCRequestEventTipsSummary = 0x206c,
	k_EMsgClientToGCRequestEventTipsSummaryResponse = 0x206d,
	k_EMsgClientToGCRequestSocialFeed = 0x206f,
	k_EMsgClientToGCRequestSocialFeedResponse = 0x2070,
	k_EMsgClientToGCRequestSocialFeedComments = 0x2071,
	k_EMsgClientToGCRequestSocialFeedCommentsResponse = 0x2072,
	k_EMsgClientToGCCavernCrawlGetClaimedRoomCount = 0x2074,
	k_EMsgClientToGCCavernCrawlGetClaimedRoomCountResponse = 0x2075,
	k_EMsgGCToGCReconcilePlusAutoGrantItemsUnreliable = 0x2076,
	k_EMsgServerToGCAddBroadcastTimelineEvent = 0x2077,
	k_EMsgGCToServerUpdateSteamBroadcasting = 0x2078,
	k_EMsgClientToGCRecordContestVote = 0x2079,
	k_EMsgGCToClientRecordContestVoteResponse = 0x207a,
	k_EMsgGCToGCGrantAutograph = 0x207b,
	k_EMsgGCToGCGrantAutographResponse = 0x207c,
	k_EMsgSignOutConsumableUsage = 0x207d,
	k_EMsgLobbyEventGameDetails = 0x207e,
	k_EMsgDevGrantEventPoints = 0x207f,
	k_EMsgDevGrantEventPointsResponse = 0x2080,
	k_EMsgDevGrantEventAction = 0x2081,
	k_EMsgDevGrantEventActionResponse = 0x2082,
	k_EMsgDevResetEventState = 0x2083,
	k_EMsgDevResetEventStateResponse = 0x2084,
	k_EMsgGCToGCReconcileEventOwnership = 0x2085,
	k_EMsgConsumeEventSupportGrantItem = 0x2086,
	k_EMsgConsumeEventSupportGrantItemResponse = 0x2087,
	k_EMsgGCToClientClaimEventActionUsingItemCompleted = 0x2088,
	k_EMsgGCToClientCavernCrawlMapUpdated = 0x2089,
	k_EMsgServerToGCRequestPlayerRecentAccomplishments = 0x208a,
	k_EMsgServerToGCRequestPlayerRecentAccomplishmentsResponse = 0x208b,
	k_EMsgClientToGCRequestPlayerRecentAccomplishments = 0x208c,
	k_EMsgClientToGCRequestPlayerRecentAccomplishmentsResponse = 0x208d,
	k_EMsgClientToGCRequestPlayerHeroRecentAccomplishments = 0x208e,
	k_EMsgClientToGCRequestPlayerHeroRecentAccomplishmentsResponse = 0x208f,
	k_EMsgSignOutEventActionGrants = 0x2090,
	k_EMsgClientToGCRequestPlayerCoachMatches = 0x2091,
	k_EMsgClientToGCRequestPlayerCoachMatchesResponse = 0x2092,
	k_EMsgClientToGCSubmitCoachTeammateRating = 0x2095,
	k_EMsgClientToGCSubmitCoachTeammateRatingResponse = 0x2096,
	k_EMsgGCToClientCoachTeammateRatingsChanged = 0x2097,
	k_EMsgClientToGCRequestPlayerCoachMatch = 0x2099,
	k_EMsgClientToGCRequestPlayerCoachMatchResponse = 0x209a,
	k_EMsgClientToGCRequestContestVotes = 0x209b,
	k_EMsgClientToGCRequestContestVotesResponse = 0x209c,
	k_EMsgClientToGCMVPVoteTimeout = 0x209d,
	k_EMsgClientToGCMVPVoteTimeoutResponse = 0x209e,
	k_EMsgDetailedGameStats = 0x20a1,
	k_EMsgMatchMatchmakingStats = 0x20a8,
	k_EMsgClientToGCSubmitPlayerMatchSurvey = 0x20a9,
	k_EMsgClientToGCSubmitPlayerMatchSurveyResponse = 0x20aa,
	k_EMsgSQLGCToGCGrantAllHeroProgressAccount = 0x20ab,
	k_EMsgSQLGCToGCGrantAllHeroProgressVictory = 0x20ac,
	k_EMsgDevDeleteEventActions = 0x20ad,
	k_EMsgDevDeleteEventActionsResponse = 0x20ae,
	k_EMsgGCToGCGetAllHeroCurrent = 0x21bb,
	k_EMsgGCToGCGetAllHeroCurrentResponse = 0x21bc,
	k_EMsgGCSubmitPlayerAvoidRequest = 0x21bd,
	k_EMsgGCSubmitPlayerAvoidRequestResponse = 0x21be,
	k_EMsgGCToClientNotificationsUpdated = 0x21bf,
	k_EMsgGCtoGCAssociatedExploiterAccountInfo = 0x21c0,
	k_EMsgGCtoGCAssociatedExploiterAccountInfoResponse = 0x21c1,
	k_EMsgGCtoGCRequestRecalibrationCheck = 0x21c2,
	k_EMsgGCToClientVACReminder = 0x21c3,
	k_EMsgClientToGCUnderDraftBuy = 0x21c4,
	k_EMsgClientToGCUnderDraftBuyResponse = 0x21c5,
	k_EMsgClientToGCUnderDraftReroll = 0x21c6,
	k_EMsgClientToGCUnderDraftRerollResponse = 0x21c7,
	k_EMsgNeutralItemStats = 0x21c8,
	k_EMsgClientToGCCreateGuild = 0x21c9,
	k_EMsgClientToGCCreateGuildResponse = 0x21ca,
	k_EMsgClientToGCSetGuildInfo = 0x21cb,
	k_EMsgClientToGCSetGuildInfoResponse = 0x21cc,
	k_EMsgClientToGCAddGuildRole = 0x21cd,
	k_EMsgClientToGCAddGuildRoleResponse = 0x21ce,
	k_EMsgClientToGCModifyGuildRole = 0x21cf,
	k_EMsgClientToGCModifyGuildRoleResponse = 0x21d0,
	k_EMsgClientToGCRemoveGuildRole = 0x21d1,
	k_EMsgClientToGCRemoveGuildRoleResponse = 0x21d2,
	k_EMsgClientToGCJoinGuild = 0x21d3,
	k_EMsgClientToGCJoinGuildResponse = 0x21d4,
	k_EMsgClientToGCLeaveGuild = 0x21d5,
	k_EMsgClientToGCLeaveGuildResponse = 0x21d6,
	k_EMsgClientToGCInviteToGuild = 0x21d7,
	k_EMsgClientToGCInviteToGuildResponse = 0x21d8,
	k_EMsgClientToGCDeclineInviteToGuild = 0x21d9,
	k_EMsgClientToGCDeclineInviteToGuildResponse = 0x21da,
	k_EMsgClientToGCCancelInviteToGuild = 0x21db,
	k_EMsgClientToGCCancelInviteToGuildResponse = 0x21dc,
	k_EMsgClientToGCKickGuildMember = 0x21dd,
	k_EMsgClientToGCKickGuildMemberResponse = 0x21de,
	k_EMsgClientToGCSetGuildMemberRole = 0x21df,
	k_EMsgClientToGCSetGuildMemberRoleResponse = 0x21e0,
	k_EMsgClientToGCRequestGuildData = 0x21e1,
	k_EMsgClientToGCRequestGuildDataResponse = 0x21e2,
	k_EMsgGCToClientGuildDataUpdated = 0x21e3,
	k_EMsgClientToGCRequestGuildMembership = 0x21e4,
	k_EMsgClientToGCRequestGuildMembershipResponse = 0x21e5,
	k_EMsgGCToClientGuildMembershipUpdated = 0x21e6,
	k_EMsgClientToGCAcceptInviteToGuild = 0x21e9,
	k_EMsgClientToGCAcceptInviteToGuildResponse = 0x21ea,
	k_EMsgClientToGCSetGuildRoleOrder = 0x21eb,
	k_EMsgClientToGCSetGuildRoleOrderResponse = 0x21ec,
	k_EMsgClientToGCRequestGuildFeed = 0x21ed,
	k_EMsgClientToGCRequestGuildFeedResponse = 0x21ee,
	k_EMsgClientToGCRequestAccountGuildEventData = 0x21ef,
	k_EMsgClientToGCRequestAccountGuildEventDataResponse = 0x21f0,
	k_EMsgGCToClientAccountGuildEventDataUpdated = 0x21f1,
	k_EMsgClientToGCRequestActiveGuildContracts = 0x21f2,
	k_EMsgClientToGCRequestActiveGuildContractsResponse = 0x21f3,
	k_EMsgGCToClientActiveGuildContractsUpdated = 0x21f4,
	k_EMsgGCToClientGuildFeedUpdated = 0x21f5,
	k_EMsgClientToGCSelectGuildContract = 0x21f6,
	k_EMsgClientToGCSelectGuildContractResponse = 0x21f7,
	k_EMsgGCToGCCompleteGuildContracts = 0x21f8,
	k_EMsgClientToGCAddPlayerToGuildChat = 0x21fa,
	k_EMsgClientToGCAddPlayerToGuildChatResponse = 0x21fb,
	k_EMsgClientToGCUnderDraftSell = 0x21fc,
	k_EMsgClientToGCUnderDraftSellResponse = 0x21fd,
	k_EMsgClientToGCUnderDraftRequest = 0x21fe,
	k_EMsgClientToGCUnderDraftResponse = 0x21ff,
	k_EMsgClientToGCUnderDraftRedeemReward = 0x2200,
	k_EMsgClientToGCUnderDraftRedeemRewardResponse = 0x2201,
	k_EMsgGCToServerLobbyHeroBanRates = 0x2204,
	k_EMsgSignOutGuildContractProgress = 0x2207,
	k_EMsgSignOutMVPStats = 0x2208,
	k_EMsgClientToGCRequestActiveGuildChallenge = 0x2209,
	k_EMsgClientToGCRequestActiveGuildChallengeResponse = 0x220a,
	k_EMsgGCToClientActiveGuildChallengeUpdated = 0x220b,
	k_EMsgSignOutGuildChallengeProgress = 0x2210,
	k_EMsgClientToGCRequestGuildEventMembers = 0x2211,
	k_EMsgClientToGCRequestGuildEventMembersResponse = 0x2212,
	k_EMsgClientToGCReportGuildContent = 0x2215,
	k_EMsgClientToGCReportGuildContentResponse = 0x2216,
	k_EMsgClientToGCRequestAccountGuildPersonaInfo = 0x2217,
	k_EMsgClientToGCRequestAccountGuildPersonaInfoResponse = 0x2218,
	k_EMsgClientToGCRequestAccountGuildPersonaInfoBatch = 0x2219,
	k_EMsgClientToGCRequestAccountGuildPersonaInfoBatchResponse = 0x221a,
	k_EMsgGCToClientUnderDraftGoldUpdated = 0x221b,
	k_EMsgGCToServerRecordTrainingData = 0x221c,
	k_EMsgSignOutBounties = 0x221d,
	k_EMsgLobbyFeaturedGamemodeProgress = 0x221e,
	k_EMsgLobbyGauntletProgress = 0x221f,
	k_EMsgClientToGCSubmitDraftTriviaMatchAnswer = 0x2220,
	k_EMsgClientToGCSubmitDraftTriviaMatchAnswerResponse = 0x2221,
	k_EMsgGCToGCSignoutSpendBounty = 0x2222,
	k_EMsgClientToGCApplyGauntletTicket = 0x2223,
	k_EMsgClientToGCUnderDraftRollBackBench = 0x2224,
	k_EMsgClientToGCUnderDraftRollBackBenchResponse = 0x2225,
	k_EMsgGCToGCGetEventActionScore = 0x2226,
	k_EMsgGCToGCGetEventActionScoreResponse = 0x2227,
	k_EMsgServerToGCGetGuildContracts = 0x2228,
	k_EMsgServerToGCGetGuildContractsResponse = 0x2229,
	k_EMsgLobbyEventGameData = 0x222a,
	k_EMsgGCToClientGuildMembersDataUpdated = 0x222b,
	k_EMsgSignOutReportActivityMarkers = 0x222c,
	k_EMsgSignOutDiretideCandy = 0x222d,
	k_EMsgGCToClientPostGameItemAwardNotification = 0x222e,
	k_EMsgClientToGCGetOWMatchDetails = 0x222f,
	k_EMsgClientToGCGetOWMatchDetailsResponse = 0x2230,
	k_EMsgClientToGCSubmitOWConviction = 0x2231,
	k_EMsgClientToGCSubmitOWConvictionResponse = 0x2232,
	k_EMsgGCToGCGetAccountSteamChina = 0x2233,
	k_EMsgGCToGCGetAccountSteamChinaResponse = 0x2234,
	k_EMsgClientToGCClaimLeaderboardRewards = 0x2235,
	k_EMsgClientToGCClaimLeaderboardRewardsResponse = 0x2236,
	k_EMsgClientToGCRecalibrateMMR = 0x2237,
	k_EMsgClientToGCRecalibrateMMRResponse = 0x2238,
	k_EMsgGCToGCGrantEventPointActionList = 0x2239,
	k_EMsgClientToGCChinaSSAURLRequest = 0x223c,
	k_EMsgClientToGCChinaSSAURLResponse = 0x223d,
	k_EMsgClientToGCChinaSSAAcceptedRequest = 0x223e,
	k_EMsgClientToGCChinaSSAAcceptedResponse = 0x223f,
	k_EMsgSignOutOverwatchSuspicion = 0x2240,
	k_EMsgServerToGCGetSuspicionConfig = 0x2241,
	k_EMsgServerToGCGetSuspicionConfigResponse = 0x2242,
	k_EMsgGCToGCGrantPlusHeroChallengeMatchResults = 0x2243,
	k_EMsgGCToClientOverwatchCasesAvailable = 0x2244,
	k_EMsgServerToGCAccountCheck = 0x2245,
	k_EMsgClientToGCStartWatchingOverwatch = 0x2246,
	k_EMsgClientToGCStopWatchingOverwatch = 0x2247,
	k_EMsgSignOutPerfData = 0x2248,
	k_EMsgClientToGCGetDPCFavorites = 0x2249,
	k_EMsgClientToGCGetDPCFavoritesResponse = 0x224a,
	k_EMsgClientToGCSetDPCFavoriteState = 0x224b,
	k_EMsgClientToGCSetDPCFavoriteStateResponse = 0x224c,
	k_EMsgClientToGCOverwatchReplayError = 0x224d,
	k_EMsgServerToGCPlayerChallengeHistory = 0x224e,
	k_EMsgSignOutBanData = 0x224f,
	k_EMsgWebapiDPCSeasonResults = 0x2250,
	k_EMsgClientToGCCoachFriend = 0x2251,
	k_EMsgClientToGCCoachFriendResponse = 0x2252,
	k_EMsgClientToGCRequestPrivateCoachingSession = 0x2253,
	k_EMsgClientToGCRequestPrivateCoachingSessionResponse = 0x2254,
	k_EMsgClientToGCAcceptPrivateCoachingSession = 0x2255,
	k_EMsgClientToGCAcceptPrivateCoachingSessionResponse = 0x2256,
	k_EMsgClientToGCLeavePrivateCoachingSession = 0x2257,
	k_EMsgClientToGCLeavePrivateCoachingSessionResponse = 0x2258,
	k_EMsgClientToGCGetCurrentPrivateCoachingSession = 0x2259,
	k_EMsgClientToGCGetCurrentPrivateCoachingSessionResponse = 0x225a,
	k_EMsgGCToClientPrivateCoachingSessionUpdated = 0x225b,
	k_EMsgClientToGCSubmitPrivateCoachingSessionRating = 0x225c,
	k_EMsgClientToGCSubmitPrivateCoachingSessionRatingResponse = 0x225d,
	k_EMsgClientToGCGetAvailablePrivateCoachingSessions = 0x225e,
	k_EMsgClientToGCGetAvailablePrivateCoachingSessionsResponse = 0x225f,
	k_EMsgClientToGCGetAvailablePrivateCoachingSessionsSummary = 0x2260,
	k_EMsgClientToGCGetAvailablePrivateCoachingSessionsSummaryResponse = 0x2261,
	k_EMsgClientToGCJoinPrivateCoachingSessionLobby = 0x2262,
	k_EMsgClientToGCJoinPrivateCoachingSessionLobbyResponse = 0x2263,
	k_EMsgClientToGCRespondToCoachFriendRequest = 0x2264,
	k_EMsgClientToGCRespondToCoachFriendRequestResponse = 0x2265,
	k_EMsgClientToGCSetEventActiveSeasonID = 0x2266,
	k_EMsgClientToGCSetEventActiveSeasonIDResponse = 0x2267,
	k_EMsgServerToGCMatchPlayerNeutralItemEquipHistory = 0x2268,
	k_EMsgServerToGCCompendiumChosenInGamePredictions = 0x2269,
	k_EMsgClientToGCCreateTeamPlayerCardPack = 0x226a,
	k_EMsgClientToGCCreateTeamPlayerCardPackResponse = 0x226b,
	k_EMsgGCToServerSubmitCheerData = 0x226c,
	k_EMsgGCToServerCheerConfig = 0x226d,
	k_EMsgServerToGCGetCheerConfig = 0x226e,
	k_EMsgServerToGCGetCheerConfigResponse = 0x226f,
	k_EMsgGCToGCGrantAutographByID = 0x2270,
	k_EMsgGCToServerCheerScalesOverride = 0x2271,
	k_EMsgGCToServerGetCheerState = 0x2272,
	k_EMsgServerToGCReportCheerState = 0x2273,
	k_EMsgGCToServerScenarioSave = 0x2274,
	k_EMsgGCToServerAbilityDraftLobbyData = 0x2275,
	k_EMsgSignOutReportCommunications = 0x2276,
	k_EMsgClientToGCBatchGetPlayerCardRosterRequest = 0x2277,
	k_EMsgClientToGCBatchGetPlayerCardRosterResponse = 0x2278,
	k_EMsgClientToGCGetStickerbookRequest = 0x2279,
	k_EMsgClientToGCGetStickerbookResponse = 0x227a,
	k_EMsgClientToGCCreateStickerbookPageRequest = 0x227b,
	k_EMsgClientToGCCreateStickerbookPageResponse = 0x227c,
	k_EMsgClientToGCDeleteStickerbookPageRequest = 0x227d,
	k_EMsgClientToGCDeleteStickerbookPageResponse = 0x227e,
	k_EMsgClientToGCPlaceStickersRequest = 0x227f,
	k_EMsgClientToGCPlaceStickersResponse = 0x2280,
	k_EMsgClientToGCPlaceCollectionStickersRequest = 0x2281,
	k_EMsgClientToGCPlaceCollectionStickersResponse = 0x2282,
	k_EMsgClientToGCOrderStickerbookTeamPageRequest = 0x2283,
	k_EMsgClientToGCOrderStickerbookTeamPageResponse = 0x2284,
	k_EMsgServerToGCGetStickerHeroes = 0x2285,
	k_EMsgServerToGCGetStickerHeroesResponse = 0x2286,
	k_EMsgClientToGCCandyShopGetUserData = 0x2288,
	k_EMsgClientToGCCandyShopGetUserDataResponse = 0x2289,
	k_EMsgGCToClientCandyShopUserDataUpdated = 0x228a,
	k_EMsgClientToGCCandyShopPurchaseReward = 0x228b,
	k_EMsgClientToGCCandyShopPurchaseRewardResponse = 0x228c,
	k_EMsgClientToGCCandyShopDoExchange = 0x228d,
	k_EMsgClientToGCCandyShopDoExchangeResponse = 0x228e,
	k_EMsgClientToGCCandyShopDoVariableExchange = 0x228f,
	k_EMsgClientToGCCandyShopDoVariableExchangeResponse = 0x2290,
	k_EMsgClientToGCCandyShopRerollRewards = 0x2291,
	k_EMsgClientToGCCandyShopRerollRewardsResponse = 0x2292,
	k_EMsgClientToGCSetHeroSticker = 0x2293,
	k_EMsgClientToGCSetHeroStickerResponse = 0x2294,
	k_EMsgClientToGCGetHeroStickers = 0x2295,
	k_EMsgClientToGCGetHeroStickersResponse = 0x2296,
	k_EMsgClientToGCSetFavoritePage = 0x2297,
	k_EMsgClientToGCSetFavoritePageResponse = 0x2298,
	k_EMsgClientToGCCandyShopDevGrantCandy = 0x2299,
	k_EMsgClientToGCCandyShopDevGrantCandyResponse = 0x229a,
	k_EMsgClientToGCCandyShopDevClearInventory = 0x229b,
	k_EMsgClientToGCCandyShopDevClearInventoryResponse = 0x229c,
	k_EMsgClientToGCCandyShopOpenBags = 0x229d,
	k_EMsgClientToGCCandyShopOpenBagsResponse = 0x229e,
	k_EMsgClientToGCCandyShopDevGrantCandyBags = 0x229f,
	k_EMsgClientToGCCandyShopDevGrantCandyBagsResponse = 0x22a0,
	k_EMsgClientToGCCandyShopDevShuffleExchange = 0x22a1,
	k_EMsgClientToGCCandyShopDevShuffleExchangeResponse = 0x22a2,
	k_EMsgClientToGCCandyShopDevGrantRerollCharges = 0x22a3,
	k_EMsgClientToGCCandyShopDevGrantRerollChargesResponse = 0x22a4,
	k_EMsgLobbyAdditionalAccountData = 0x22a5,
	k_EMsgServerToGCLobbyInitialized = 0x22a6,
	k_EMsgClientToGCCollectorsCacheAvailableDataRequest = 0x22a7,
	k_EMsgGCToClientCollectorsCacheAvailableDataResponse = 0x22a8,
	k_EMsgClientToGCUploadMatchClip = 0x22a9,
	k_EMsgGCToClientUploadMatchClipResponse = 0x22aa,
	k_EMsgGCToServerSetSteamLearnDisable = 0x22ab,
	k_EMsgGCToServerSetSteamLearnKeysChanged = 0x22ac,
	k_EMsgSignOutMuertaMinigame = 0x22ad,
	k_EMsgGCToServerLobbyHeroRoleStats = 0x22ae,
};

// Aligment: 4
// Size: 29
enum class PARTICLE_MESSAGE : uint32_t
{
	GAME_PARTICLE_MANAGER_EVENT_CREATE = 0x0,
	GAME_PARTICLE_MANAGER_EVENT_UPDATE = 0x1,
	GAME_PARTICLE_MANAGER_EVENT_UPDATE_FORWARD = 0x2,
	GAME_PARTICLE_MANAGER_EVENT_UPDATE_ORIENTATION = 0x3,
	GAME_PARTICLE_MANAGER_EVENT_UPDATE_FALLBACK = 0x4,
	GAME_PARTICLE_MANAGER_EVENT_UPDATE_ENT = 0x5,
	GAME_PARTICLE_MANAGER_EVENT_UPDATE_OFFSET = 0x6,
	GAME_PARTICLE_MANAGER_EVENT_DESTROY = 0x7,
	GAME_PARTICLE_MANAGER_EVENT_DESTROY_INVOLVING = 0x8,
	GAME_PARTICLE_MANAGER_EVENT_RELEASE = 0x9,
	GAME_PARTICLE_MANAGER_EVENT_LATENCY = 0xa,
	GAME_PARTICLE_MANAGER_EVENT_SHOULD_DRAW = 0xb,
	GAME_PARTICLE_MANAGER_EVENT_FROZEN = 0xc,
	GAME_PARTICLE_MANAGER_EVENT_CHANGE_CONTROL_POINT_ATTACHMENT = 0xd,
	GAME_PARTICLE_MANAGER_EVENT_UPDATE_ENTITY_POSITION = 0xe,
	GAME_PARTICLE_MANAGER_EVENT_SET_FOW_PROPERTIES = 0xf,
	GAME_PARTICLE_MANAGER_EVENT_SET_TEXT = 0x10,
	GAME_PARTICLE_MANAGER_EVENT_SET_SHOULD_CHECK_FOW = 0x11,
	GAME_PARTICLE_MANAGER_EVENT_SET_CONTROL_POINT_MODEL = 0x12,
	GAME_PARTICLE_MANAGER_EVENT_SET_CONTROL_POINT_SNAPSHOT = 0x13,
	GAME_PARTICLE_MANAGER_EVENT_SET_TEXTURE_ATTRIBUTE = 0x14,
	GAME_PARTICLE_MANAGER_EVENT_SET_SCENE_OBJECT_GENERIC_FLAG = 0x15,
	GAME_PARTICLE_MANAGER_EVENT_SET_SCENE_OBJECT_TINT_AND_DESAT = 0x16,
	GAME_PARTICLE_MANAGER_EVENT_DESTROY_NAMED = 0x17,
	GAME_PARTICLE_MANAGER_EVENT_SKIP_TO_TIME = 0x18,
	GAME_PARTICLE_MANAGER_EVENT_CAN_FREEZE = 0x19,
	GAME_PARTICLE_MANAGER_EVENT_SET_NAMED_VALUE_CONTEXT = 0x1a,
	GAME_PARTICLE_MANAGER_EVENT_UPDATE_TRANSFORM = 0x1b,
	GAME_PARTICLE_MANAGER_EVENT_FREEZE_TRANSITION_OVERRIDE = 0x1c,
};

// Aligment: 4
// Size: 4
enum class BeamClipStyle_t : uint32_t
{
	kNOCLIP = 0x0,
	kGEOCLIP = 0x1,
	kMODELCLIP = 0x2,
	kBEAMCLIPSTYLE_NUMBITS = 0x2,
};

// Aligment: 1
// Size: 5
enum class VehiclePassengerState_t : uint8_t
{
	PASSENGER_NOT_THERE = 0,
	PASSENGER_FLIPPING_VEHICLE = 1,
	PASSENGER_ENTERING_VEHICLE = 2,
	PASSENGER_IN_VEHICLE = 3,
	PASSENGER_EXITING_VEHICLE = 4,
};

// Aligment: 4
// Size: 9
enum class EInButtonState : uint32_t
{
	IN_BUTTON_UP = 0x0,
	IN_BUTTON_DOWN = 0x1,
	IN_BUTTON_DOWN_UP = 0x2,
	IN_BUTTON_UP_DOWN = 0x3,
	IN_BUTTON_UP_DOWN_UP = 0x4,
	IN_BUTTON_DOWN_UP_DOWN = 0x5,
	IN_BUTTON_DOWN_UP_DOWN_UP = 0x6,
	IN_BUTTON_UP_DOWN_UP_DOWN = 0x7,
	IN_BUTTON_STATE_COUNT = 0x8,
};

// Aligment: 4
// Size: 6
enum class EBaseEntityMessages : uint32_t
{
	EM_PlayJingle = 0x88,
	EM_ScreenOverlay = 0x89,
	EM_RemoveAllDecals = 0x8a,
	EM_PropagateForce = 0x8b,
	EM_DoSpark = 0x8c,
	EM_FixAngle = 0x8d,
};

// Aligment: 4
// Size: 9
enum class EHighPriorityMMState : uint32_t
{
	k_EHighPriorityMM_Unknown = 0x0,
	k_EHighPriorityMM_MissingMMData = 0x1,
	k_EHighPriorityMM_ResourceMissing = 0x2,
	k_EHighPriorityMM_ManuallyDisabled = 0x3,
	k_EHighPriorityMM_Min_Enabled = 0x40,
	k_EHighPriorityMM_AllRolesSelected = 0x41,
	k_EHighPriorityMM_UsingResource = 0x42,
	k_EHighPriorityMM_FiveStack = 0x43,
	k_EHighPriorityMM_HighDemand = 0x44,
};

// Aligment: 4
// Size: 13
enum class NET_Messages : uint32_t
{
	net_NOP = 0x0,
	net_Disconnect = 0x1,
	net_SplitScreenUser = 0x3,
	net_Tick = 0x4,
	net_StringCmd = 0x5,
	net_SetConVar = 0x6,
	net_SignonState = 0x7,
	net_SpawnGroup_Load = 0x8,
	net_SpawnGroup_ManifestUpdate = 0x9,
	net_SpawnGroup_SetCreationTick = 0xb,
	net_SpawnGroup_Unload = 0xc,
	net_SpawnGroup_LoadCompleted = 0xd,
	net_DebugOverlay = 0xf,
};

// Aligment: 4
// Size: 4
enum class EOverwatchConviction : uint32_t
{
	k_EOverwatchConviction_None = 0x0,
	k_EOverwatchConviction_NotGuilty = 0x1,
	k_EOverwatchConviction_GuiltUnclear = 0x2,
	k_EOverwatchConviction_Guilty = 0x3,
};

// Aligment: 4
// Size: 4
enum class DOTALowPriorityBanType : uint32_t
{
	DOTA_LOW_PRIORITY_BAN_ABANDON = 0x0,
	DOTA_LOW_PRIORITY_BAN_REPORTS = 0x1,
	DOTA_LOW_PRIORITY_BAN_SECONDARY_ABANDON = 0x2,
	DOTA_LOW_PRIORITY_BAN_PRE_GAME_ROLE = 0x3,
};

// Aligment: 4
// Size: 19
enum class EMatchOutcome : uint32_t
{
	k_EMatchOutcome_Unknown = 0x0,
	k_EMatchOutcome_RadVictory = 0x2,
	k_EMatchOutcome_DireVictory = 0x3,
	k_EMatchOutcome_NeutralVictory = 0x4,
	k_EMatchOutcome_NoTeamWinner = 0x5,
	k_EMatchOutcome_Custom1Victory = 0x6,
	k_EMatchOutcome_Custom2Victory = 0x7,
	k_EMatchOutcome_Custom3Victory = 0x8,
	k_EMatchOutcome_Custom4Victory = 0x9,
	k_EMatchOutcome_Custom5Victory = 0xa,
	k_EMatchOutcome_Custom6Victory = 0xb,
	k_EMatchOutcome_Custom7Victory = 0xc,
	k_EMatchOutcome_Custom8Victory = 0xd,
	k_EMatchOutcome_NotScored_PoorNetworkConditions = 0x40,
	k_EMatchOutcome_NotScored_Leaver = 0x41,
	k_EMatchOutcome_NotScored_ServerCrash = 0x42,
	k_EMatchOutcome_NotScored_NeverStarted = 0x43,
	k_EMatchOutcome_NotScored_Canceled = 0x44,
	k_EMatchOutcome_NotScored_Suspicious = 0x45,
};

// Aligment: 4
// Size: 11
enum class Hull_t : uint32_t
{
	HULL_HUMAN = 0x0,
	HULL_SMALL_CENTERED = 0x1,
	HULL_WIDE_HUMAN = 0x2,
	HULL_TINY = 0x3,
	HULL_MEDIUM = 0x4,
	HULL_TINY_CENTERED = 0x5,
	HULL_LARGE = 0x6,
	HULL_LARGE_CENTERED = 0x7,
	HULL_MEDIUM_TALL = 0x8,
	NUM_HULLS = 0x9,
	HULL_NONE = 0xa,
};

// Aligment: 4
// Size: 6
enum class EDOTAStatPopupTypes : uint32_t
{
	k_EDOTA_SPT_Textline = 0x0,
	k_EDOTA_SPT_Basic = 0x1,
	k_EDOTA_SPT_Poll = 0x2,
	k_EDOTA_SPT_Grid = 0x3,
	k_EDOTA_SPT_DualImage = 0x4,
	k_EDOTA_SPT_Movie = 0x5,
};

// Aligment: 4
// Size: 7
enum class EDOTA_ModifyXP_Reason : uint32_t
{
	DOTA_ModifyXP_Unspecified = 0x0,
	DOTA_ModifyXP_HeroKill = 0x1,
	DOTA_ModifyXP_CreepKill = 0x2,
	DOTA_ModifyXP_RoshanKill = 0x3,
	DOTA_ModifyXP_TomeOfKnowledge = 0x4,
	DOTA_ModifyXP_Outpost = 0x5,
	DOTA_ModifyXP_MAX = 0x6,
};

// Aligment: 4
// Size: 4
enum class ValueRemapperMomentumType_t : uint32_t
{
	MomentumType_None = 0x0,
	MomentumType_Friction = 0x1,
	MomentumType_SpringTowardSnapValue = 0x2,
	MomentumType_SpringAwayFromSnapValue = 0x3,
};

// Aligment: 4
// Size: 34
enum class DOTAHUDVisibility_t : uint32_t
{
	DOTA_HUD_VISIBILITY_INVALID = 0xffffffffffffffff,
	DOTA_HUD_VISIBILITY_TOP_TIMEOFDAY = 0x0,
	DOTA_HUD_VISIBILITY_TOP_HEROES = 0x1,
	DOTA_HUD_VISIBILITY_TOP_SCOREBOARD = 0x2,
	DOTA_HUD_VISIBILITY_ACTION_PANEL = 0x3,
	DOTA_HUD_VISIBILITY_ACTION_MINIMAP = 0x4,
	DOTA_HUD_VISIBILITY_INVENTORY_PANEL = 0x5,
	DOTA_HUD_VISIBILITY_INVENTORY_SHOP = 0x6,
	DOTA_HUD_VISIBILITY_INVENTORY_ITEMS = 0x7,
	DOTA_HUD_VISIBILITY_INVENTORY_QUICKBUY = 0x8,
	DOTA_HUD_VISIBILITY_INVENTORY_COURIER = 0x9,
	DOTA_HUD_VISIBILITY_INVENTORY_PROTECT = 0xa,
	DOTA_HUD_VISIBILITY_INVENTORY_GOLD = 0xb,
	DOTA_HUD_VISIBILITY_SHOP_SUGGESTEDITEMS = 0xc,
	DOTA_HUD_VISIBILITY_SHOP_COMMONITEMS = 0xd,
	DOTA_HUD_VISIBILITY_HERO_SELECTION_TEAMS = 0xe,
	DOTA_HUD_VISIBILITY_HERO_SELECTION_GAME_NAME = 0xf,
	DOTA_HUD_VISIBILITY_HERO_SELECTION_CLOCK = 0x10,
	DOTA_HUD_VISIBILITY_HERO_SELECTION_HEADER = 0x11,
	DOTA_HUD_VISIBILITY_TOP_MENU_BUTTONS = 0x12,
	DOTA_HUD_VISIBILITY_TOP_BAR_BACKGROUND = 0x13,
	DOTA_HUD_VISIBILITY_TOP_BAR_RADIANT_TEAM = 0x14,
	DOTA_HUD_VISIBILITY_TOP_BAR_DIRE_TEAM = 0x15,
	DOTA_HUD_VISIBILITY_TOP_BAR_SCORE = 0x16,
	DOTA_HUD_VISIBILITY_ENDGAME = 0x17,
	DOTA_HUD_VISIBILITY_ENDGAME_CHAT = 0x18,
	DOTA_HUD_VISIBILITY_QUICK_STATS = 0x19,
	DOTA_HUD_VISIBILITY_PREGAME_STRATEGYUI = 0x1a,
	DOTA_HUD_VISIBILITY_KILLCAM = 0x1b,
	DOTA_HUD_VISIBILITY_FIGHT_RECAP = 0x1c,
	DOTA_HUD_VISIBILITY_TOP_BAR = 0x1d,
	DOTA_HUD_CUSTOMUI_BEHIND_HUD_ELEMENTS = 0x1e,
	DOTA_HUD_VISIBILITY_AGHANIMS_STATUS = 0x1f,
	DOTA_HUD_VISIBILITY_COUNT = 0x20,
};

// Aligment: 4
// Size: 40
enum class dotaunitorder_t : uint32_t
{
	DOTA_UNIT_ORDER_NONE = 0x0,
	DOTA_UNIT_ORDER_MOVE_TO_POSITION = 0x1,
	DOTA_UNIT_ORDER_MOVE_TO_TARGET = 0x2,
	DOTA_UNIT_ORDER_ATTACK_MOVE = 0x3,
	DOTA_UNIT_ORDER_ATTACK_TARGET = 0x4,
	DOTA_UNIT_ORDER_CAST_POSITION = 0x5,
	DOTA_UNIT_ORDER_CAST_TARGET = 0x6,
	DOTA_UNIT_ORDER_CAST_TARGET_TREE = 0x7,
	DOTA_UNIT_ORDER_CAST_NO_TARGET = 0x8,
	DOTA_UNIT_ORDER_CAST_TOGGLE = 0x9,
	DOTA_UNIT_ORDER_HOLD_POSITION = 0xa,
	DOTA_UNIT_ORDER_TRAIN_ABILITY = 0xb,
	DOTA_UNIT_ORDER_DROP_ITEM = 0xc,
	DOTA_UNIT_ORDER_GIVE_ITEM = 0xd,
	DOTA_UNIT_ORDER_PICKUP_ITEM = 0xe,
	DOTA_UNIT_ORDER_PICKUP_RUNE = 0xf,
	DOTA_UNIT_ORDER_PURCHASE_ITEM = 0x10,
	DOTA_UNIT_ORDER_SELL_ITEM = 0x11,
	DOTA_UNIT_ORDER_DISASSEMBLE_ITEM = 0x12,
	DOTA_UNIT_ORDER_MOVE_ITEM = 0x13,
	DOTA_UNIT_ORDER_CAST_TOGGLE_AUTO = 0x14,
	DOTA_UNIT_ORDER_STOP = 0x15,
	DOTA_UNIT_ORDER_TAUNT = 0x16,
	DOTA_UNIT_ORDER_BUYBACK = 0x17,
	DOTA_UNIT_ORDER_GLYPH = 0x18,
	DOTA_UNIT_ORDER_EJECT_ITEM_FROM_STASH = 0x19,
	DOTA_UNIT_ORDER_CAST_RUNE = 0x1a,
	DOTA_UNIT_ORDER_PING_ABILITY = 0x1b,
	DOTA_UNIT_ORDER_MOVE_TO_DIRECTION = 0x1c,
	DOTA_UNIT_ORDER_PATROL = 0x1d,
	DOTA_UNIT_ORDER_VECTOR_TARGET_POSITION = 0x1e,
	DOTA_UNIT_ORDER_RADAR = 0x1f,
	DOTA_UNIT_ORDER_SET_ITEM_COMBINE_LOCK = 0x20,
	DOTA_UNIT_ORDER_CONTINUE = 0x21,
	DOTA_UNIT_ORDER_VECTOR_TARGET_CANCELED = 0x22,
	DOTA_UNIT_ORDER_CAST_RIVER_PAINT = 0x23,
	DOTA_UNIT_ORDER_PREGAME_ADJUST_ITEM_ASSIGNMENT = 0x24,
	DOTA_UNIT_ORDER_DROP_ITEM_AT_FOUNTAIN = 0x25,
	DOTA_UNIT_ORDER_TAKE_ITEM_FROM_NEUTRAL_ITEM_STASH = 0x26,
	DOTA_UNIT_ORDER_MOVE_RELATIVE = 0x27,
};

// Aligment: 4
// Size: 3
enum class MoveLinearAuthoredPos_t : uint32_t
{
	MOVELINEAR_AUTHORED_AT_START_POSITION = 0x0,
	MOVELINEAR_AUTHORED_AT_OPEN_POSITION = 0x1,
	MOVELINEAR_AUTHORED_AT_CLOSED_POSITION = 0x2,
};

// Aligment: 4
// Size: 4
enum class ECrowdLevel : uint32_t
{
	CROWD_NONE = 0x0,
	CROWD_LOW = 0x1,
	CROWD_MEDIUM = 0x2,
	CROWD_HIGH = 0x3,
};

// Aligment: 4
// Size: 19
enum class NavAttributeEnum : uint32_t
{
	NAV_MESH_AVOID = 0x80,
	NAV_MESH_STAIRS = 0x1000,
	NAV_MESH_NON_ZUP = 0x8000,
	NAV_MESH_SHORT_HEIGHT = 0x10000,
	NAV_MESH_CROUCH = 0x10000,
	NAV_MESH_JUMP = 0x2,
	NAV_MESH_PRECISE = 0x4,
	NAV_MESH_NO_JUMP = 0x8,
	NAV_MESH_STOP = 0x10,
	NAV_MESH_RUN = 0x20,
	NAV_MESH_WALK = 0x40,
	NAV_MESH_TRANSIENT = 0x100,
	NAV_MESH_DONT_HIDE = 0x200,
	NAV_MESH_STAND = 0x400,
	NAV_MESH_NO_HOSTAGES = 0x800,
	NAV_MESH_NO_MERGE = 0x2000,
	NAV_MESH_OBSTACLE_TOP = 0x4000,
	NAV_ATTR_FIRST_GAME_INDEX = 0x13,
	NAV_ATTR_LAST_INDEX = 0x1f,
};

// Aligment: 4
// Size: 6
enum class DOTAModifierAttribute_t : uint32_t
{
	MODIFIER_ATTRIBUTE_NONE = 0x0,
	MODIFIER_ATTRIBUTE_PERMANENT = 0x1,
	MODIFIER_ATTRIBUTE_MULTIPLE = 0x2,
	MODIFIER_ATTRIBUTE_IGNORE_INVULNERABLE = 0x4,
	MODIFIER_ATTRIBUTE_AURA_PRIORITY = 0x8,
	MODIFIER_ATTRIBUTE_IGNORE_DODGE = 0x10,
};

// Aligment: 4
// Size: 2
enum class VoiceDataFormat_t : uint32_t
{
	VOICEDATA_FORMAT_STEAM = 0x0,
	VOICEDATA_FORMAT_ENGINE = 0x1,
};

// Aligment: 4
// Size: 5
enum class DOTAUnitAttackCapability_t : uint32_t
{
	DOTA_UNIT_CAP_NO_ATTACK = 0x0,
	DOTA_UNIT_CAP_MELEE_ATTACK = 0x1,
	DOTA_UNIT_CAP_RANGED_ATTACK = 0x2,
	DOTA_UNIT_CAP_RANGED_ATTACK_DIRECTIONAL = 0x4,
	DOTA_UNIT_ATTACK_CAPABILITY_BIT_COUNT = 0x3,
};

// Aligment: 4
// Size: 8
enum class TOGGLE_STATE : uint32_t
{
	TS_AT_TOP = 0x0,
	TS_AT_BOTTOM = 0x1,
	TS_GOING_UP = 0x2,
	TS_GOING_DOWN = 0x3,
	DOOR_OPEN = 0x0,
	DOOR_CLOSED = 0x1,
	DOOR_OPENING = 0x2,
	DOOR_CLOSING = 0x3,
};

// Aligment: 4
// Size: 4
enum class PerformanceMode_t : uint32_t
{
	PM_NORMAL = 0x0,
	PM_NO_GIBS = 0x1,
	PM_FULL_GIBS = 0x2,
	PM_REDUCED_GIBS = 0x3,
};

// Aligment: 1
// Size: 6
enum class CavernCrawlChallengeType_t : uint8_t
{
	CAVERN_CRAWL_CHALLENGE_TYPE_INVALID = 0,
	CAVERN_CRAWL_CHALLENGE_FIRST_CUSTOM_TYPE = 160,
	CAVERN_CRAWL_CHALLENGE_FIRST_VALID_SPECIAL_TYPE = 240,
	CAVERN_CRAWL_CHALLENGE_TYPE_LOCKED_DOOR = 240,
	CAVERN_CRAWL_CHALLENGE_TYPE_CAVE_IN = 241,
	CAVERN_CRAWL_CHALLENGE_LAST_VALID_TYPE_PLUS_ONE = 242,
};

// Aligment: 4
// Size: 14
enum class DOTAMinimapEvent_t : uint32_t
{
	DOTA_MINIMAP_EVENT_ANCIENT_UNDER_ATTACK = 0x2,
	DOTA_MINIMAP_EVENT_BASE_UNDER_ATTACK = 0x4,
	DOTA_MINIMAP_EVENT_BASE_GLYPHED = 0x8,
	DOTA_MINIMAP_EVENT_TEAMMATE_UNDER_ATTACK = 0x10,
	DOTA_MINIMAP_EVENT_TEAMMATE_TELEPORTING = 0x20,
	DOTA_MINIMAP_EVENT_TEAMMATE_DIED = 0x40,
	DOTA_MINIMAP_EVENT_TUTORIAL_TASK_ACTIVE = 0x80,
	DOTA_MINIMAP_EVENT_TUTORIAL_TASK_FINISHED = 0x100,
	DOTA_MINIMAP_EVENT_HINT_LOCATION = 0x200,
	DOTA_MINIMAP_EVENT_ENEMY_TELEPORTING = 0x400,
	DOTA_MINIMAP_EVENT_CANCEL_TELEPORTING = 0x800,
	DOTA_MINIMAP_EVENT_RADAR = 0x1000,
	DOTA_MINIMAP_EVENT_RADAR_TARGET = 0x2000,
	DOTA_MINIMAP_EVENT_MOVE_TO_TARGET = 0x4000,
};

// Aligment: 4
// Size: 3
enum class ForcedCrouchState_t : uint32_t
{
	FORCEDCROUCH_NONE = 0x0,
	FORCEDCROUCH_CROUCHED = 0x1,
	FORCEDCROUCH_UNCROUCHED = 0x2,
};

// Aligment: 4
// Size: 5
enum class DOTA_MOTION_CONTROLLER_PRIORITY : uint32_t
{
	DOTA_MOTION_CONTROLLER_PRIORITY_LOWEST = 0x0,
	DOTA_MOTION_CONTROLLER_PRIORITY_LOW = 0x1,
	DOTA_MOTION_CONTROLLER_PRIORITY_MEDIUM = 0x2,
	DOTA_MOTION_CONTROLLER_PRIORITY_HIGH = 0x3,
	DOTA_MOTION_CONTROLLER_PRIORITY_HIGHEST = 0x4,
};

// Aligment: 4
// Size: 2
enum class HeroPickType : uint32_t
{
	HERO_PICK = 0x0,
	HERO_BAN = 0x1,
};

// Aligment: 4
// Size: 18
enum class EDOTATriviaQuestionCategory : uint32_t
{
	k_EDOTATriviaQuestionCategory_AbilityIcon = 0x0,
	k_EDOTATriviaQuestionCategory_AbilityCooldown = 0x1,
	k_EDOTATriviaQuestionCategory_HeroAttributes = 0x2,
	k_EDOTATriviaQuestionCategory_HeroMovementSpeed = 0x3,
	k_EDOTATriviaQuestionCategory_TalentTree = 0x4,
	k_EDOTATriviaQuestionCategory_HeroStats = 0x5,
	k_EDOTATriviaQuestionCategory_ItemPrice = 0x6,
	k_EDOTATriviaQuestionCategory_AbilitySound = 0x7,
	k_EDOTATriviaQuestionCategory_InvokerSpells = 0x8,
	k_EDOTATriviaQuestionCategory_AbilityManaCost = 0x9,
	k_EDOTATriviaQuestionCategory_HeroAttackSound = 0xa,
	k_EDOTATriviaQuestionCategory_AbilityName = 0xb,
	k_EDOTATriviaQuestionCategory_ItemComponents = 0xc,
	k_EDOTATriviaQuestionCategory_ItemLore = 0xd,
	k_EDOTATriviaQuestionCategory_ItemPassives = 0xe,
	k_EDOTATriviaQuestionCategory_STATIC_QUESTIONS_END = 0xf,
	k_EDOTATriviaQuestionCategory_DYNAMIC_QUESTIONS_START = 0x63,
	k_EDOTATriviaQuestionCategory_Dynamic_ItemBuild = 0x64,
};

// Aligment: 4
// Size: 42
enum class ELeagueAuditAction : uint32_t
{
	LEAGUE_AUDIT_ACTION_INVALID = 0x0,
	LEAGUE_AUDIT_ACTION_LEAGUE_CREATE = 0x1,
	LEAGUE_AUDIT_ACTION_LEAGUE_EDIT = 0x2,
	LEAGUE_AUDIT_ACTION_LEAGUE_DELETE = 0x3,
	LEAGUE_AUDIT_ACTION_LEAGUE_ADMIN_ADD = 0x4,
	LEAGUE_AUDIT_ACTION_LEAGUE_ADMIN_REVOKE = 0x5,
	LEAGUE_AUDIT_ACTION_LEAGUE_ADMIN_PROMOTE = 0x6,
	LEAGUE_AUDIT_ACTION_LEAGUE_STREAM_ADD = 0x7,
	LEAGUE_AUDIT_ACTION_LEAGUE_STREAM_REMOVE = 0x8,
	LEAGUE_AUDIT_ACTION_LEAGUE_IMAGE_UPDATED = 0x9,
	LEAGUE_AUDIT_ACTION_LEAGUE_MESSAGE_ADDED = 0xa,
	LEAGUE_AUDIT_ACTION_LEAGUE_SUBMITTED = 0xb,
	LEAGUE_AUDIT_ACTION_LEAGUE_SET_PRIZE_POOL = 0xc,
	LEAGUE_AUDIT_ACTION_LEAGUE_ADD_PRIZE_POOL_ITEM = 0xd,
	LEAGUE_AUDIT_ACTION_LEAGUE_REMOVE_PRIZE_POOL_ITEM = 0xe,
	LEAGUE_AUDIT_ACTION_LEAGUE_MATCH_START = 0xf,
	LEAGUE_AUDIT_ACTION_LEAGUE_MATCH_END = 0x10,
	LEAGUE_AUDIT_ACTION_LEAGUE_ADD_INVITED_TEAM = 0x11,
	LEAGUE_AUDIT_ACTION_LEAGUE_REMOVE_INVITED_TEAM = 0x12,
	LEAGUE_AUDIT_ACTION_LEAGUE_STATUS_CHANGED = 0x13,
	LEAGUE_AUDIT_ACTION_LEAGUE_STREAM_EDIT = 0x14,
	LEAGUE_AUDIT_ACTION_LEAGUE_TEAM_SWAP = 0x15,
	LEAGUE_AUDIT_ACTION_NODEGROUP_CREATE = 0x64,
	LEAGUE_AUDIT_ACTION_NODEGROUP_DESTROY = 0x65,
	LEAGUE_AUDIT_ACTION_NODEGROUP_ADD_TEAM = 0x66,
	LEAGUE_AUDIT_ACTION_NODEGROUP_REMOVE_TEAM = 0x67,
	LEAGUE_AUDIT_ACTION_NODEGROUP_SET_ADVANCING = 0x68,
	LEAGUE_AUDIT_ACTION_NODEGROUP_EDIT = 0x69,
	LEAGUE_AUDIT_ACTION_NODEGROUP_POPULATE = 0x6a,
	LEAGUE_AUDIT_ACTION_NODEGROUP_COMPLETED = 0x6b,
	LEAGUE_AUDIT_ACTION_NODEGROUP_SET_SECONDARY_ADVANCING = 0x6c,
	LEAGUE_AUDIT_ACTION_NODEGROUP_SET_TERTIARY_ADVANCING = 0x6d,
	LEAGUE_AUDIT_ACTION_NODE_CREATE = 0xc8,
	LEAGUE_AUDIT_ACTION_NODE_DESTROY = 0xc9,
	LEAGUE_AUDIT_ACTION_NODE_AUTOCREATE = 0xca,
	LEAGUE_AUDIT_ACTION_NODE_SET_TEAM = 0xcb,
	LEAGUE_AUDIT_ACTION_NODE_SET_SERIES_ID = 0xcc,
	LEAGUE_AUDIT_ACTION_NODE_SET_ADVANCING = 0xcd,
	LEAGUE_AUDIT_ACTION_NODE_SET_TIME = 0xce,
	LEAGUE_AUDIT_ACTION_NODE_MATCH_COMPLETED = 0xcf,
	LEAGUE_AUDIT_ACTION_NODE_COMPLETED = 0xd0,
	LEAGUE_AUDIT_ACTION_NODE_EDIT = 0xd1,
};

// Aligment: 4
// Size: 3
enum class DOTAPostGameLayout_t : uint32_t
{
	DOTA_POST_GAME_LAYOUT_DOUBLE_COLUMN = 0x0,
	DOTA_POST_GAME_LAYOUT_SINGLE_COLUMN = 0x1,
	DOTA_POST_GAME_LAYOUT_MAX = 0x2,
};

// Aligment: 1
// Size: 13
enum class RenderMode_t : uint8_t
{
	kRenderNormal = 0,
	kRenderTransColor = 1,
	kRenderTransTexture = 2,
	kRenderGlow = 3,
	kRenderTransAlpha = 4,
	kRenderTransAdd = 5,
	kRenderEnvironmental = 6,
	kRenderTransAddFrameBlend = 7,
	kRenderTransAlphaAdd = 8,
	kRenderWorldGlow = 9,
	kRenderNone = 10,
	kRenderDevVisualizer = 11,
	kRenderModeCount = 12,
};

// Aligment: 4
// Size: 3
enum class EHeroRelicRarity : uint32_t
{
	HERO_RELIC_RARITY_INVALID = 0xffffffffffffffff,
	HERO_RELIC_RARITY_COMMON = 0x0,
	HERO_RELIC_RARITY_RARE = 0x1,
};

// Aligment: 4
// Size: 7
enum class ETourneyQueueDeadlineState : uint32_t
{
	k_ETourneyQueueDeadlineState_Normal = 0x0,
	k_ETourneyQueueDeadlineState_Missed = 0x1,
	k_ETourneyQueueDeadlineState_ExpiredOK = 0x2,
	k_ETourneyQueueDeadlineState_SeekingBye = 0x3,
	k_ETourneyQueueDeadlineState_EligibleForRefund = 0x4,
	k_ETourneyQueueDeadlineState_NA = 0xffffffffffffffff,
	k_ETourneyQueueDeadlineState_ExpiringSoon = 0x65,
};

// Aligment: 4
// Size: 2
enum class ESplitScreenMessageType : uint32_t
{
	MSG_SPLITSCREEN_ADDUSER = 0x0,
	MSG_SPLITSCREEN_REMOVEUSER = 0x1,
};

// Aligment: 4
// Size: 13
enum class EGCBaseClientMsg : uint32_t
{
	k_EMsgGCPingRequest = 0xbb9,
	k_EMsgGCPingResponse = 0xbba,
	k_EMsgGCToClientPollConvarRequest = 0xbbb,
	k_EMsgGCToClientPollConvarResponse = 0xbbc,
	k_EMsgGCCompressedMsgToClient = 0xbbd,
	k_EMsgGCCompressedMsgToClient_Legacy = 0x20b,
	k_EMsgGCToClientRequestDropped = 0xbbe,
	k_EMsgGCClientWelcome = 0xfa4,
	k_EMsgGCServerWelcome = 0xfa5,
	k_EMsgGCClientHello = 0xfa6,
	k_EMsgGCServerHello = 0xfa7,
	k_EMsgGCClientConnectionStatus = 0xfa9,
	k_EMsgGCServerConnectionStatus = 0xfaa,
};

// Aligment: 4
// Size: 2
enum class DamageCategory_t : uint32_t
{
	DOTA_DAMAGE_CATEGORY_SPELL = 0x0,
	DOTA_DAMAGE_CATEGORY_ATTACK = 0x1,
};

// Aligment: 4
// Size: 2
enum class DOTAAbilitySpeakTrigger_t : uint32_t
{
	DOTA_ABILITY_SPEAK_START_ACTION_PHASE = 0x0,
	DOTA_ABILITY_SPEAK_CAST = 0x1,
};

// Aligment: 4
// Size: 5
enum class DOTASelectionPriorityChoice : uint32_t
{
	k_DOTASelectionPriorityChoice_Invalid = 0x0,
	k_DOTASelectionPriorityChoice_FirstPick = 0x1,
	k_DOTASelectionPriorityChoice_SecondPick = 0x2,
	k_DOTASelectionPriorityChoice_Radiant = 0x3,
	k_DOTASelectionPriorityChoice_Dire = 0x4,
};

// Aligment: 4
// Size: 3
enum class EntFinderMethod_t : uint32_t
{
	ENT_FIND_METHOD_NEAREST = 0x0,
	ENT_FIND_METHOD_FARTHEST = 0x1,
	ENT_FIND_METHOD_RANDOM = 0x2,
};

// Aligment: 4
// Size: 16
enum class DOTA_POSITION_CATEGORY : uint32_t
{
	DOTA_POSITION_NONE = 0x0,
	DOTA_POSITION_BOTTOM_LANE = 0x1,
	DOTA_POSITION_MID_LANE = 0x2,
	DOTA_POSITION_TOP_LANE = 0x3,
	DOTA_POSITION_RADIANT_JUNGLE = 0x4,
	DOTA_POSITION_DIRE_JUNGLE = 0x5,
	DOTA_POSITION_RADIANT_ANCIENTS = 0x6,
	DOTA_POSITION_DIRE_ANCIENTS = 0x7,
	DOTA_POSITION_RADIANT_SECRET_SHOP = 0x8,
	DOTA_POSITION_DIRE_SECRET_SHOP = 0x9,
	DOTA_POSITION_RIVER = 0xa,
	DOTA_POSITION_ROSHAN_PIT = 0xb,
	DOTA_POSITION_RADIANT_BASE = 0xc,
	DOTA_POSITION_DIRE_BASE = 0xd,
	DOTA_POSITION_FOUNTAIN = 0xe,
	DOTA_POSITION_OTHER = 0xf,
};

// Aligment: 4
// Size: 8
enum class SignonState_t : uint32_t
{
	SIGNONSTATE_NONE = 0x0,
	SIGNONSTATE_CHALLENGE = 0x1,
	SIGNONSTATE_CONNECTED = 0x2,
	SIGNONSTATE_NEW = 0x3,
	SIGNONSTATE_PRESPAWN = 0x4,
	SIGNONSTATE_SPAWN = 0x5,
	SIGNONSTATE_FULL = 0x6,
	SIGNONSTATE_CHANGELEVEL = 0x7,
};

// Aligment: 4
// Size: 3
enum class TrainVelocityType_t : uint32_t
{
	TrainVelocity_Instantaneous = 0x0,
	TrainVelocity_LinearBlend = 0x1,
	TrainVelocity_EaseInEaseOut = 0x2,
};

// Aligment: 4
// Size: 13
enum class CLICK_BEHAVIORS : uint32_t
{
	DOTA_CLICK_BEHAVIOR_NONE = 0x0,
	DOTA_CLICK_BEHAVIOR_MOVE = 0x1,
	DOTA_CLICK_BEHAVIOR_ATTACK = 0x2,
	DOTA_CLICK_BEHAVIOR_CAST = 0x3,
	DOTA_CLICK_BEHAVIOR_DROP_ITEM = 0x4,
	DOTA_CLICK_BEHAVIOR_DROP_SHOP_ITEM = 0x5,
	DOTA_CLICK_BEHAVIOR_DRAG = 0x6,
	DOTA_CLICK_BEHAVIOR_LEARN_ABILITY = 0x7,
	DOTA_CLICK_BEHAVIOR_PATROL = 0x8,
	DOTA_CLICK_BEHAVIOR_VECTOR_CAST = 0x9,
	DOTA_CLICK_BEHAVIOR_UNUSED = 0xa,
	DOTA_CLICK_BEHAVIOR_RADAR = 0xb,
	DOTA_CLICK_BEHAVIOR_LAST = 0xc,
};

// Aligment: 4
// Size: 5
enum class DOTA_HOLDOUT_TOWER_TYPE : uint32_t
{
	DOTA_HOLDOUT_TOWER_NONE = 0x0,
	DOTA_HOLDOUT_TOWER_LIGHTFAST = 0x1,
	DOTA_HOLDOUT_TOWER_HEAVYSLOW = 0x2,
	DOTA_HOLDOUT_TOWER_REDUCESPEED = 0x3,
	DOTA_HOLDOUT_TOWER_COUNT = 0x4,
};

// Aligment: 8
// Size: 41
enum class DOTA_ABILITY_BEHAVIOR : uint64_t
{
	DOTA_ABILITY_BEHAVIOR_NONE = 0x0,
	DOTA_ABILITY_BEHAVIOR_HIDDEN = 0x1,
	DOTA_ABILITY_BEHAVIOR_PASSIVE = 0x2,
	DOTA_ABILITY_BEHAVIOR_NO_TARGET = 0x4,
	DOTA_ABILITY_BEHAVIOR_UNIT_TARGET = 0x8,
	DOTA_ABILITY_BEHAVIOR_POINT = 0x10,
	DOTA_ABILITY_BEHAVIOR_AOE = 0x20,
	DOTA_ABILITY_BEHAVIOR_NOT_LEARNABLE = 0x40,
	DOTA_ABILITY_BEHAVIOR_CHANNELLED = 0x80,
	DOTA_ABILITY_BEHAVIOR_ITEM = 0x100,
	DOTA_ABILITY_BEHAVIOR_TOGGLE = 0x200,
	DOTA_ABILITY_BEHAVIOR_DIRECTIONAL = 0x400,
	DOTA_ABILITY_BEHAVIOR_IMMEDIATE = 0x800,
	DOTA_ABILITY_BEHAVIOR_AUTOCAST = 0x1000,
	DOTA_ABILITY_BEHAVIOR_OPTIONAL_UNIT_TARGET = 0x2000,
	DOTA_ABILITY_BEHAVIOR_OPTIONAL_POINT = 0x4000,
	DOTA_ABILITY_BEHAVIOR_OPTIONAL_NO_TARGET = 0x8000,
	DOTA_ABILITY_BEHAVIOR_AURA = 0x10000,
	DOTA_ABILITY_BEHAVIOR_ATTACK = 0x20000,
	DOTA_ABILITY_BEHAVIOR_DONT_RESUME_MOVEMENT = 0x40000,
	DOTA_ABILITY_BEHAVIOR_ROOT_DISABLES = 0x80000,
	DOTA_ABILITY_BEHAVIOR_UNRESTRICTED = 0x100000,
	DOTA_ABILITY_BEHAVIOR_IGNORE_PSEUDO_QUEUE = 0x200000,
	DOTA_ABILITY_BEHAVIOR_IGNORE_CHANNEL = 0x400000,
	DOTA_ABILITY_BEHAVIOR_DONT_CANCEL_MOVEMENT = 0x800000,
	DOTA_ABILITY_BEHAVIOR_DONT_ALERT_TARGET = 0x1000000,
	DOTA_ABILITY_BEHAVIOR_DONT_RESUME_ATTACK = 0x2000000,
	DOTA_ABILITY_BEHAVIOR_NORMAL_WHEN_STOLEN = 0x4000000,
	DOTA_ABILITY_BEHAVIOR_IGNORE_BACKSWING = 0x8000000,
	DOTA_ABILITY_BEHAVIOR_RUNE_TARGET = 0x10000000,
	DOTA_ABILITY_BEHAVIOR_DONT_CANCEL_CHANNEL = 0x20000000,
	DOTA_ABILITY_BEHAVIOR_VECTOR_TARGETING = 0x40000000,
	DOTA_ABILITY_BEHAVIOR_LAST_RESORT_POINT = 0x80000000,
	DOTA_ABILITY_BEHAVIOR_CAN_SELF_CAST = 0x100000000,
	DOTA_ABILITY_BEHAVIOR_SHOW_IN_GUIDES = 0x200000000,
	DOTA_ABILITY_BEHAVIOR_UNLOCKED_BY_EFFECT_INDEX = 0x400000000,
	DOTA_ABILITY_BEHAVIOR_SUPPRESS_ASSOCIATED_CONSUMABLE = 0x800000000,
	DOTA_ABILITY_BEHAVIOR_FREE_DRAW_TARGETING = 0x1000000000,
	DOTA_ABILITY_BEHAVIOR_IGNORE_SILENCE = 0x2000000000,
	DOTA_ABILITY_BEHAVIOR_OVERSHOOT = 0x4000000000,
	DOTA_ABILITY_BEHAVIOR_IGNORE_MUTED = 0x8000000000,
};

// Aligment: 4
// Size: 3
enum class LobbyDotaPauseSetting : uint32_t
{
	LobbyDotaPauseSetting_Unlimited = 0x0,
	LobbyDotaPauseSetting_Limited = 0x1,
	LobbyDotaPauseSetting_Disabled = 0x2,
};

// Aligment: 4
// Size: 5
enum class Touch_t : uint32_t
{
	touch_none = 0x0,
	touch_player_only = 0x1,
	touch_npc_only = 0x2,
	touch_player_or_npc = 0x3,
	touch_player_or_npc_or_physicsprop = 0x4,
};

// Aligment: 4
// Size: 7
enum class EProfileCardSlotType : uint32_t
{
	k_EProfileCardSlotType_Empty = 0x0,
	k_EProfileCardSlotType_Stat = 0x1,
	k_EProfileCardSlotType_Trophy = 0x2,
	k_EProfileCardSlotType_Item = 0x3,
	k_EProfileCardSlotType_Hero = 0x4,
	k_EProfileCardSlotType_Emoticon = 0x5,
	k_EProfileCardSlotType_Team = 0x6,
};

// Aligment: 4
// Size: 2
enum class CommandEntitySpecType_t : uint32_t
{
	SPEC_SEARCH = 0x0,
	SPEC_TYPES_COUNT = 0x1,
};

// Aligment: 4
// Size: 2
enum class ESpecialPingValue : uint32_t
{
	k_ESpecialPingValue_NoData = 0x3ffe,
	k_ESpecialPingValue_Failed = 0x3fff,
};

// Aligment: 4
// Size: 7
enum class IChoreoServices::ScriptState_t : uint32_t
{
	SCRIPT_PLAYING = 0x0,
	SCRIPT_WAIT = 0x1,
	SCRIPT_POST_IDLE = 0x2,
	SCRIPT_CLEANUP = 0x3,
	SCRIPT_WALK_TO_MARK = 0x4,
	SCRIPT_RUN_TO_MARK = 0x5,
	SCRIPT_CUSTOM_MOVE_TO_MARK = 0x6,
};

// Aligment: 4
// Size: 4
enum class ABILITY_TYPES : uint32_t
{
	ABILITY_TYPE_BASIC = 0x0,
	ABILITY_TYPE_ULTIMATE = 0x1,
	ABILITY_TYPE_ATTRIBUTES = 0x2,
	ABILITY_TYPE_HIDDEN = 0x3,
};

// Aligment: 4
// Size: 108
enum class DOTA_CHAT_MESSAGE : uint32_t
{
	CHAT_MESSAGE_INVALID = 0xffffffffffffffff,
	CHAT_MESSAGE_HERO_KILL = 0x0,
	CHAT_MESSAGE_HERO_DENY = 0x1,
	CHAT_MESSAGE_BARRACKS_KILL = 0x2,
	CHAT_MESSAGE_TOWER_KILL = 0x3,
	CHAT_MESSAGE_TOWER_DENY = 0x4,
	CHAT_MESSAGE_FIRSTBLOOD = 0x5,
	CHAT_MESSAGE_STREAK_KILL = 0x6,
	CHAT_MESSAGE_BUYBACK = 0x7,
	CHAT_MESSAGE_AEGIS = 0x8,
	CHAT_MESSAGE_ROSHAN_KILL = 0x9,
	CHAT_MESSAGE_COURIER_LOST = 0xa,
	CHAT_MESSAGE_COURIER_RESPAWNED = 0xb,
	CHAT_MESSAGE_GLYPH_USED = 0xc,
	CHAT_MESSAGE_ITEM_PURCHASE = 0xd,
	CHAT_MESSAGE_CONNECT = 0xe,
	CHAT_MESSAGE_DISCONNECT = 0xf,
	CHAT_MESSAGE_DISCONNECT_WAIT_FOR_RECONNECT = 0x10,
	CHAT_MESSAGE_DISCONNECT_TIME_REMAINING = 0x11,
	CHAT_MESSAGE_DISCONNECT_TIME_REMAINING_PLURAL = 0x12,
	CHAT_MESSAGE_RECONNECT = 0x13,
	CHAT_MESSAGE_PLAYER_LEFT = 0x14,
	CHAT_MESSAGE_SAFE_TO_LEAVE = 0x15,
	CHAT_MESSAGE_RUNE_PICKUP = 0x16,
	CHAT_MESSAGE_RUNE_BOTTLE = 0x17,
	CHAT_MESSAGE_RUNE_DENY = 0x72,
	CHAT_MESSAGE_INTHEBAG = 0x18,
	CHAT_MESSAGE_SECRETSHOP = 0x19,
	CHAT_MESSAGE_ITEM_AUTOPURCHASED = 0x1a,
	CHAT_MESSAGE_ITEMS_COMBINED = 0x1b,
	CHAT_MESSAGE_SUPER_CREEPS = 0x1c,
	CHAT_MESSAGE_CANT_USE_ACTION_ITEM = 0x1d,
	CHAT_MESSAGE_CANTPAUSE = 0x1f,
	CHAT_MESSAGE_NOPAUSESLEFT = 0x20,
	CHAT_MESSAGE_CANTPAUSEYET = 0x21,
	CHAT_MESSAGE_PAUSED = 0x22,
	CHAT_MESSAGE_UNPAUSE_COUNTDOWN = 0x23,
	CHAT_MESSAGE_UNPAUSED = 0x24,
	CHAT_MESSAGE_AUTO_UNPAUSED = 0x25,
	CHAT_MESSAGE_YOUPAUSED = 0x26,
	CHAT_MESSAGE_CANTUNPAUSETEAM = 0x27,
	CHAT_MESSAGE_VOICE_TEXT_BANNED = 0x29,
	CHAT_MESSAGE_SPECTATORS_WATCHING_THIS_GAME = 0x2a,
	CHAT_MESSAGE_REPORT_REMINDER = 0x2b,
	CHAT_MESSAGE_ECON_ITEM = 0x2c,
	CHAT_MESSAGE_TAUNT = 0x2d,
	CHAT_MESSAGE_RANDOM = 0x2e,
	CHAT_MESSAGE_RD_TURN = 0x2f,
	CHAT_MESSAGE_DROP_RATE_BONUS = 0x31,
	CHAT_MESSAGE_NO_BATTLE_POINTS = 0x32,
	CHAT_MESSAGE_DENIED_AEGIS = 0x33,
	CHAT_MESSAGE_INFORMATIONAL = 0x34,
	CHAT_MESSAGE_AEGIS_STOLEN = 0x35,
	CHAT_MESSAGE_ROSHAN_CANDY = 0x36,
	CHAT_MESSAGE_ITEM_GIFTED = 0x37,
	CHAT_MESSAGE_HERO_KILL_WITH_GREEVIL = 0x38,
	CHAT_MESSAGE_HOLDOUT_TOWER_DESTROYED = 0x39,
	CHAT_MESSAGE_HOLDOUT_WALL_DESTROYED = 0x3a,
	CHAT_MESSAGE_HOLDOUT_WALL_FINISHED = 0x3b,
	CHAT_MESSAGE_PLAYER_LEFT_LIMITED_HERO = 0x3e,
	CHAT_MESSAGE_ABANDON_LIMITED_HERO_EXPLANATION = 0x3f,
	CHAT_MESSAGE_DISCONNECT_LIMITED_HERO = 0x40,
	CHAT_MESSAGE_LOW_PRIORITY_COMPLETED_EXPLANATION = 0x41,
	CHAT_MESSAGE_RECRUITMENT_DROP_RATE_BONUS = 0x42,
	CHAT_MESSAGE_FROSTIVUS_SHINING_BOOSTER_ACTIVE = 0x43,
	CHAT_MESSAGE_PLAYER_LEFT_AFK = 0x49,
	CHAT_MESSAGE_PLAYER_LEFT_DISCONNECTED_TOO_LONG = 0x4a,
	CHAT_MESSAGE_PLAYER_ABANDONED = 0x4b,
	CHAT_MESSAGE_PLAYER_ABANDONED_AFK = 0x4c,
	CHAT_MESSAGE_PLAYER_ABANDONED_DISCONNECTED_TOO_LONG = 0x4d,
	CHAT_MESSAGE_WILL_NOT_BE_SCORED = 0x4e,
	CHAT_MESSAGE_WILL_NOT_BE_SCORED_RANKED = 0x4f,
	CHAT_MESSAGE_WILL_NOT_BE_SCORED_NETWORK = 0x50,
	CHAT_MESSAGE_WILL_NOT_BE_SCORED_NETWORK_RANKED = 0x51,
	CHAT_MESSAGE_CAN_QUIT_WITHOUT_ABANDON = 0x52,
	CHAT_MESSAGE_RANKED_GAME_STILL_SCORED_LEAVERS_GET_LOSS = 0x53,
	CHAT_MESSAGE_ABANDON_RANKED_BEFORE_FIRST_BLOOD_PARTY = 0x54,
	CHAT_MESSAGE_COMPENDIUM_LEVEL = 0x55,
	CHAT_MESSAGE_VICTORY_PREDICTION_STREAK = 0x56,
	CHAT_MESSAGE_ASSASSIN_ANNOUNCE = 0x57,
	CHAT_MESSAGE_ASSASSIN_SUCCESS = 0x58,
	CHAT_MESSAGE_ASSASSIN_DENIED = 0x59,
	CHAT_MESSAGE_VICTORY_PREDICTION_SINGLE_USER_CONFIRM = 0x5a,
	CHAT_MESSAGE_EFFIGY_KILL = 0x5b,
	CHAT_MESSAGE_VOICE_TEXT_BANNED_OVERFLOW = 0x5c,
	CHAT_MESSAGE_YEAR_BEAST_KILLED = 0x5d,
	CHAT_MESSAGE_PAUSE_COUNTDOWN = 0x5e,
	CHAT_MESSAGE_COINS_WAGERED = 0x5f,
	CHAT_MESSAGE_HERO_NOMINATED_BAN = 0x60,
	CHAT_MESSAGE_HERO_BANNED = 0x61,
	CHAT_MESSAGE_HERO_BAN_COUNT = 0x62,
	CHAT_MESSAGE_RIVER_PAINTED = 0x63,
	CHAT_MESSAGE_SCAN_USED = 0x64,
	CHAT_MESSAGE_SHRINE_KILLED = 0x65,
	CHAT_MESSAGE_WAGER_TOKEN_SPENT = 0x66,
	CHAT_MESSAGE_RANK_WAGER = 0x67,
	CHAT_MESSAGE_NEW_PLAYER_REMINDER = 0x68,
	CHAT_MESSAGE_OBSERVER_WARD_KILLED = 0x69,
	CHAT_MESSAGE_SENTRY_WARD_KILLED = 0x6a,
	CHAT_MESSAGE_ITEM_PLACED_IN_NEUTRAL_STASH = 0x6b,
	CHAT_MESSAGE_HERO_CHOICE_INVALID = 0x6c,
	CHAT_MESSAGE_BOUNTY = 0x6d,
	CHAT_MESSAGE_ABILITY_DRAFT_START = 0x6e,
	CHAT_MESSAGE_HERO_FOUND_CANDY = 0x6f,
	CHAT_MESSAGE_ABILITY_DRAFT_RANDOMED = 0x70,
	CHAT_MESSAGE_PRIVATE_COACH_CONNECTED = 0x71,
	CHAT_MESSAGE_CANT_PAUSE_TOO_EARLY = 0x73,
	CHAT_MESSAGE_HERO_KILL_WITH_PENGUIN = 0x74,
};

// Aligment: 4
// Size: 5
enum class modifierpriority : uint32_t
{
	MODIFIER_PRIORITY_LOW = 0x0,
	MODIFIER_PRIORITY_NORMAL = 0x1,
	MODIFIER_PRIORITY_HIGH = 0x2,
	MODIFIER_PRIORITY_ULTRA = 0x3,
	MODIFIER_PRIORITY_SUPER_ULTRA = 0x4,
};

// Aligment: 4
// Size: 4
enum class EQueryCvarValueStatus : uint32_t
{
	eQueryCvarValueStatus_ValueIntact = 0x0,
	eQueryCvarValueStatus_CvarNotFound = 0x1,
	eQueryCvarValueStatus_NotACvar = 0x2,
	eQueryCvarValueStatus_CvarProtected = 0x3,
};

// Aligment: 4
// Size: 6
enum class SPELL_IMMUNITY_TYPES : uint32_t
{
	SPELL_IMMUNITY_NONE = 0x0,
	SPELL_IMMUNITY_ALLIES_YES = 0x1,
	SPELL_IMMUNITY_ALLIES_NO = 0x2,
	SPELL_IMMUNITY_ENEMIES_YES = 0x3,
	SPELL_IMMUNITY_ENEMIES_NO = 0x4,
	SPELL_IMMUNITY_ALLIES_YES_ENEMIES_NO = 0x5,
};

// Aligment: 4
// Size: 45
enum class GameAnimEventIndex_t : uint32_t
{
	AE_EMPTY = 0x0,
	AE_CL_PLAYSOUND = 0x1,
	AE_CL_PLAYSOUND_ATTACHMENT = 0x2,
	AE_CL_PLAYSOUND_POSITION = 0x3,
	AE_SV_PLAYSOUND = 0x4,
	AE_CL_STOPSOUND = 0x5,
	AE_CL_PLAYSOUND_LOOPING = 0x6,
	AE_CL_CREATE_PARTICLE_EFFECT = 0x7,
	AE_CL_STOP_PARTICLE_EFFECT = 0x8,
	AE_CL_CREATE_PARTICLE_EFFECT_CFG = 0x9,
	AE_SV_CREATE_PARTICLE_EFFECT_CFG = 0xa,
	AE_SV_STOP_PARTICLE_EFFECT = 0xb,
	AE_FOOTSTEP = 0xc,
	AE_RAGDOLL = 0xd,
	AE_CL_STOP_RAGDOLL_CONTROL = 0xe,
	AE_CL_ENABLE_BODYGROUP = 0xf,
	AE_CL_DISABLE_BODYGROUP = 0x10,
	AE_CL_BODYGROUP_SET_VALUE = 0x11,
	AE_SV_BODYGROUP_SET_VALUE = 0x12,
	AE_CL_BODYGROUP_SET_VALUE_CMODEL_WPN = 0x13,
	AE_WPN_PRIMARYATTACK = 0x14,
	AE_WPN_SECONDARYATTACK = 0x15,
	AE_FIRE_INPUT = 0x16,
	AE_CL_CLOTH_ATTR = 0x17,
	AE_CL_CLOTH_GROUND_OFFSET = 0x18,
	AE_CL_CLOTH_STIFFEN = 0x19,
	AE_CL_CLOTH_EFFECT = 0x1a,
	AE_CL_CREATE_ANIM_SCOPE_PROP = 0x1b,
	AE_CL_SUPPRESS_EVENTS_WITH_TAG = 0x1c,
	AE_CL_HIDE_PARTICLE_EFFECT = 0x1d,
	AE_CL_SHOW_PARTICLE_EFFECT = 0x1e,
	AE_CL_ADD_PARTICLE_EFFECT_CP = 0x1f,
	AE_CL_SPEECH = 0x20,
	AE_CL_DOTA_PLAY_STATUS_EFFECT = 0x21,
	AE_CL_DOTA_STOP_STATUS_EFFECT = 0x22,
	AE_CL_DOTA_NPC_CREATE_PARTICLE_EFFECT = 0x23,
	AE_CL_DOTA_RUBICK_ARCANA_CREATE_PARTICLE_EFFECT = 0x24,
	AE_DOTA_PET_ITEM_PICKUP = 0x25,
	AE_DOTA_PET_ITEM_DROP = 0x26,
	AE_DOTA_SUPPRESS_CONSTANT_LAYER = 0x27,
	AE_DOTA_PLAY_SOUND_ATTACK_SPECIAL = 0x28,
	AE_DOTA_CREATE_CLINKZ_ATTACK = 0x29,
	AE_DOTA_PLAY_SOUND_ATTACK_BACKSTAB = 0x2a,
	AE_DOTA_DIE_PHANTOM_DEATH_PARTICLES = 0x2b,
	AE_DOTA_SWITCH_ATTACK_COMBO = 0x2c,
};

// Aligment: 4
// Size: 17
enum class BaseExplosionTypes_t : uint32_t
{
	EXPLOSION_TYPE_DEFAULT = 0x0,
	EXPLOSION_TYPE_GRENADE = 0x1,
	EXPLOSION_TYPE_MOLOTOV = 0x2,
	EXPLOSION_TYPE_FIREWORKS = 0x3,
	EXPLOSION_TYPE_GASCAN = 0x4,
	EXPLOSION_TYPE_GASCYLINDER = 0x5,
	EXPLOSION_TYPE_EXPLOSIVEBARREL = 0x6,
	EXPLOSION_TYPE_ELECTRICAL = 0x7,
	EXPLOSION_TYPE_EMP = 0x8,
	EXPLOSION_TYPE_SHRAPNEL = 0x9,
	EXPLOSION_TYPE_SMOKEGRENADE = 0xa,
	EXPLOSION_TYPE_FLASHBANG = 0xb,
	EXPLOSION_TYPE_TRIPMINE = 0xc,
	EXPLOSION_TYPE_ICE = 0xd,
	EXPLOSION_TYPE_NONE = 0xe,
	EXPLOSION_TYPE_CUSTOM = 0xf,
	EXPLOSION_TYPE_COUNT = 0x10,
};

// Aligment: 4
// Size: 15
enum class DOTAJoinLobbyResult : uint32_t
{
	DOTA_JOIN_RESULT_SUCCESS = 0x0,
	DOTA_JOIN_RESULT_ALREADY_IN_GAME = 0x1,
	DOTA_JOIN_RESULT_INVALID_LOBBY = 0x2,
	DOTA_JOIN_RESULT_INCORRECT_PASSWORD = 0x3,
	DOTA_JOIN_RESULT_ACCESS_DENIED = 0x4,
	DOTA_JOIN_RESULT_GENERIC_ERROR = 0x5,
	DOTA_JOIN_RESULT_INCORRECT_VERSION = 0x6,
	DOTA_JOIN_RESULT_IN_TEAM_PARTY = 0x7,
	DOTA_JOIN_RESULT_NO_LOBBY_FOUND = 0x8,
	DOTA_JOIN_RESULT_LOBBY_FULL = 0x9,
	DOTA_JOIN_RESULT_CUSTOM_GAME_INCORRECT_VERSION = 0xa,
	DOTA_JOIN_RESULT_TIMEOUT = 0xb,
	DOTA_JOIN_RESULT_CUSTOM_GAME_COOLDOWN = 0xc,
	DOTA_JOIN_RESULT_BUSY = 0xd,
	DOTA_JOIN_RESULT_NO_PLAYTIME = 0xe,
};

// Aligment: 4
// Size: 4
enum class DOTA_NO_BATTLE_POINTS_REASONS : uint32_t
{
	NO_BATTLE_POINTS_WRONG_LOBBY_TYPE = 0x1,
	NO_BATTLE_POINTS_PRACTICE_BOTS = 0x2,
	NO_BATTLE_POINTS_CHEATS_ENABLED = 0x3,
	NO_BATTLE_POINTS_LOW_PRIORITY = 0x4,
};

// Flags: MEnumFlagsWithOverlappingBits
// Aligment: 4
// Size: 5
enum class DOTA_UNIT_TARGET_TEAM : uint32_t
{
	DOTA_UNIT_TARGET_TEAM_NONE = 0x0,
	DOTA_UNIT_TARGET_TEAM_FRIENDLY = 0x1,
	DOTA_UNIT_TARGET_TEAM_ENEMY = 0x2,
	DOTA_UNIT_TARGET_TEAM_CUSTOM = 0x4,
	DOTA_UNIT_TARGET_TEAM_BOTH = 0x3,
};

// Aligment: 4
// Size: 12
enum class DOTA_TournamentEvents : uint32_t
{
	TE_FIRST_BLOOD = 0x0,
	TE_GAME_END = 0x1,
	TE_MULTI_KILL = 0x2,
	TE_HERO_DENY = 0x3,
	TE_AEGIS_DENY = 0x4,
	TE_AEGIS_STOLEN = 0x5,
	TE_GODLIKE = 0x6,
	TE_COURIER_KILL = 0x7,
	TE_ECHOSLAM = 0x8,
	TE_RAPIER = 0x9,
	TE_EARLY_ROSHAN = 0xa,
	TE_BLACK_HOLE = 0xb,
};

// Aligment: 4
// Size: 2
enum class DOTACustomHeroPickRulesPhase_t : uint32_t
{
	PHASE_Ban = 0x0,
	PHASE_Pick = 0x1,
};

// Aligment: 4
// Size: 2
enum class filter_t : uint32_t
{
	FILTER_AND = 0x0,
	FILTER_OR = 0x1,
};

// Aligment: 4
// Size: 6
enum class DOTA_REPLAY_STATE_EVENT : uint32_t
{
	DOTA_REPLAY_STATE_EVENT_GAME_START = 0x1,
	DOTA_REPLAY_STATE_EVENT_STARTING_HORN = 0x2,
	DOTA_REPLAY_STATE_EVENT_FIRST_BLOOD = 0x3,
	DOTA_REPLAY_STATE_EVENT_SHOWCASE = 0x4,
	DOTA_REPLAY_STATE_EVENT_POST_GAME = 0x5,
	DOTA_REPLAY_STATE_EVENT_WAIT_FOR_MAP = 0x6,
};

// Aligment: 4
// Size: 4
enum class Class_T : uint32_t
{
	CLASS_NONE = 0x0,
	CLASS_PLAYER = 0x1,
	CLASS_PLAYER_ALLY = 0x2,
	NUM_CLASSIFY_CLASSES = 0x3,
};

// Aligment: 4
// Size: 46
enum class EBaseUserMessages : uint32_t
{
	UM_AchievementEvent = 0x65,
	UM_CloseCaption = 0x66,
	UM_CloseCaptionDirect = 0x67,
	UM_CurrentTimescale = 0x68,
	UM_DesiredTimescale = 0x69,
	UM_Fade = 0x6a,
	UM_GameTitle = 0x6b,
	UM_HudMsg = 0x6e,
	UM_HudText = 0x6f,
	UM_ColoredText = 0x71,
	UM_RequestState = 0x72,
	UM_ResetHUD = 0x73,
	UM_Rumble = 0x74,
	UM_SayText = 0x75,
	UM_SayText2 = 0x76,
	UM_SayTextChannel = 0x77,
	UM_Shake = 0x78,
	UM_ShakeDir = 0x79,
	UM_TextMsg = 0x7c,
	UM_ScreenTilt = 0x7d,
	UM_VoiceMask = 0x80,
	UM_SendAudio = 0x82,
	UM_ItemPickup = 0x83,
	UM_AmmoDenied = 0x84,
	UM_ShowMenu = 0x86,
	UM_CreditsMsg = 0x87,
	UM_CloseCaptionPlaceholder = 0x8e,
	UM_CameraTransition = 0x8f,
	UM_AudioParameter = 0x90,
	UM_ParticleManager = 0x91,
	UM_HudError = 0x92,
	UM_CustomGameEvent = 0x94,
	UM_AnimGraphUpdate = 0x95,
	UM_HapticsManagerPulse = 0x96,
	UM_HapticsManagerEffect = 0x97,
	UM_CommandQueueState = 0x98,
	UM_UpdateCssClasses = 0x99,
	UM_ServerFrameTime = 0x9a,
	UM_LagCompensationError = 0x9b,
	UM_RequestDllStatus = 0x9c,
	UM_RequestUtilAction = 0x9d,
	UM_UtilActionResponse = 0x9e,
	UM_DllStatusResponse = 0x9f,
	UM_RequestInventory = 0xa0,
	UM_InventoryResponse = 0xa1,
	UM_MAX_BASE = 0xc8,
};

// Aligment: 4
// Size: 23
enum class SoundFlags_t : uint32_t
{
	SOUND_NONE = 0x0,
	SOUND_COMBAT = 0x1,
	SOUND_WORLD = 0x2,
	SOUND_PLAYER = 0x4,
	SOUND_DANGER = 0x8,
	SOUND_BULLET_IMPACT = 0x10,
	SOUND_THUMPER = 0x20,
	SOUND_PHYSICS_DANGER = 0x40,
	SOUND_MOVE_AWAY = 0x80,
	SOUND_PLAYER_VEHICLE = 0x100,
	SOUND_GLASS_BREAK = 0x200,
	SOUND_PHYSICS_OBJECT = 0x400,
	SOUND_CONTEXT_GUNFIRE = 0x100000,
	SOUND_CONTEXT_COMBINE_ONLY = 0x200000,
	SOUND_CONTEXT_REACT_TO_SOURCE = 0x400000,
	SOUND_CONTEXT_EXPLOSION = 0x800000,
	SOUND_CONTEXT_EXCLUDE_COMBINE = 0x1000000,
	SOUND_CONTEXT_DANGER_APPROACH = 0x2000000,
	SOUND_CONTEXT_ALLIES_ONLY = 0x4000000,
	SOUND_CONTEXT_PANIC_NPCS = 0x8000000,
	ALL_CONTEXTS = 0xfffffffffff00000,
	ALL_SCENTS = 0x0,
	ALL_SOUNDS = 0xfffff,
};

// Aligment: 4
// Size: 5
enum class AnimLoopMode_t : uint32_t
{
	ANIM_LOOP_MODE_INVALID = 0xffffffffffffffff,
	ANIM_LOOP_MODE_NOT_LOOPING = 0x0,
	ANIM_LOOP_MODE_LOOPING = 0x1,
	ANIM_LOOP_MODE_USE_SEQUENCE_SETTINGS = 0x2,
	ANIM_LOOP_MODE_COUNT = 0x3,
};

// Aligment: 4
// Size: 16
enum class DOTA_ABILITY_PING_TYPE : uint32_t
{
	ABILITY_PING_READY = 0x1,
	ABILITY_PING_MANA = 0x2,
	ABILITY_PING_COOLDOWN = 0x3,
	ABILITY_PING_ENEMY = 0x4,
	ABILITY_PING_UNLEARNED = 0x5,
	ABILITY_PING_INBACKPACK = 0x6,
	ABILITY_PING_INSTASH = 0x7,
	ABILITY_PING_ONCOURIER = 0x8,
	ABILITY_PING_ALLY = 0x9,
	ABILITY_PING_LEARN_READY = 0xa,
	ABILITY_PING_WILL_LEARN = 0xb,
	ABILITY_PING_FUTURE_LEARN = 0xc,
	ABILITY_PING_NEUTRAL_OFFER = 0xd,
	ABILITY_PING_NEUTRAL_REQUEST = 0xe,
	ABILITY_PING_NEUTRAL_EQUIP = 0xf,
	ABILITY_PING_INCOURIERBACKPACK = 0x10,
};

// Aligment: 4
// Size: 3
enum class EDOTAMMRBoostType : uint32_t
{
	k_EDOTAMMRBoostType_None = 0x0,
	k_EDOTAMMRBoostType_Leader = 0x1,
	k_EDOTAMMRBoostType_Follower = 0x2,
};

// Aligment: 4
// Size: 6
enum class ScriptedMoveTo_t : uint32_t
{
	CINE_MOVETO_WAIT = 0x0,
	CINE_MOVETO_WALK = 0x1,
	CINE_MOVETO_RUN = 0x2,
	CINE_MOVETO_CUSTOM = 0x3,
	CINE_MOVETO_TELEPORT = 0x4,
	CINE_MOVETO_WAIT_FACING = 0x5,
};

// Aligment: 4
// Size: 2
enum class EPartyMatchmakingFlags : uint32_t
{
	k_EPartyMatchmakingFlags_None = 0x0,
	k_EPartyMatchmakingFlags_LargeRankSpread = 0x1,
};

// Aligment: 4
// Size: 3
enum class AbilityBarType_t : uint32_t
{
	ABILITY_BAR_TYPE_MAIN = 0x0,
	ABILITY_BAR_TYPE_SECONDARY = 0x1,
	ABILITY_BAR_TYPE_TERTIARY = 0x2,
};

// Aligment: 4
// Size: 12
enum class Materials : uint32_t
{
	matGlass = 0x0,
	matWood = 0x1,
	matMetal = 0x2,
	matFlesh = 0x3,
	matCinderBlock = 0x4,
	matCeilingTile = 0x5,
	matComputer = 0x6,
	matUnbreakableGlass = 0x7,
	matRocks = 0x8,
	matWeb = 0x9,
	matNone = 0xa,
	matLastMaterial = 0xb,
};

// Aligment: 4
// Size: 6
enum class DOTAMusicStatus_t : uint32_t
{
	DOTA_MUSIC_STATUS_NONE = 0x0,
	DOTA_MUSIC_STATUS_EXPLORATION = 0x1,
	DOTA_MUSIC_STATUS_BATTLE = 0x2,
	DOTA_MUSIC_STATUS_PRE_GAME_EXPLORATION = 0x3,
	DOTA_MUSIC_STATUS_DEAD = 0x4,
	DOTA_MUSIC_STATUS_LAST = 0x5,
};

// Aligment: 4
// Size: 8
enum class MLBot_MessageId : uint32_t
{
	mlbot_MatchMetadata = 0x1,
	mlbot_TickBoundary = 0x2,
	mlbot_TeamState_Radiant = 0x3,
	mlbot_TeamState_Radiant_Delta = 0x4,
	mlbot_TeamState_Dire = 0x5,
	mlbot_TeamState_Dire_Delta = 0x6,
	mlbot_PlayerCommand = 0x7,
	mlbot_PlayerOrder = 0x8,
};

// Aligment: 4
// Size: 2
enum class ShopItemViewMode_t : uint32_t
{
	SHOP_VIEW_MODE_LIST = 0x0,
	SHOP_VIEW_MODE_GRID = 0x1,
};

// Aligment: 4
// Size: 5
enum class ELaneSelection : uint32_t
{
	k_ELaneSelection_SAFELANE = 0x0,
	k_ELaneSelection_OFFLANE = 0x1,
	k_ELaneSelection_MIDLANE = 0x2,
	k_ELaneSelection_SUPPORT_SOFT = 0x3,
	k_ELaneSelection_SUPPORT_HARD = 0x4,
};

// Aligment: 4
// Size: 7
enum class DOTAProjectileAttachment_t : uint32_t
{
	DOTA_PROJECTILE_ATTACHMENT_NONE = 0x0,
	DOTA_PROJECTILE_ATTACHMENT_ATTACK_1 = 0x1,
	DOTA_PROJECTILE_ATTACHMENT_ATTACK_2 = 0x2,
	DOTA_PROJECTILE_ATTACHMENT_HITLOCATION = 0x3,
	DOTA_PROJECTILE_ATTACHMENT_ATTACK_3 = 0x4,
	DOTA_PROJECTILE_ATTACHMENT_ATTACK_4 = 0x5,
	DOTA_PROJECTILE_ATTACHMENT_LAST = 0x6,
};

// Aligment: 4
// Size: 15
enum class DOTAScriptInventorySlot_t : uint32_t
{
	DOTA_ITEM_SLOT_1 = 0x0,
	DOTA_ITEM_SLOT_2 = 0x1,
	DOTA_ITEM_SLOT_3 = 0x2,
	DOTA_ITEM_SLOT_4 = 0x3,
	DOTA_ITEM_SLOT_5 = 0x4,
	DOTA_ITEM_SLOT_6 = 0x5,
	DOTA_ITEM_SLOT_7 = 0x6,
	DOTA_ITEM_SLOT_8 = 0x7,
	DOTA_ITEM_SLOT_9 = 0x8,
	DOTA_STASH_SLOT_1 = 0x9,
	DOTA_STASH_SLOT_2 = 0xa,
	DOTA_STASH_SLOT_3 = 0xb,
	DOTA_STASH_SLOT_4 = 0xc,
	DOTA_STASH_SLOT_5 = 0xd,
	DOTA_STASH_SLOT_6 = 0xe,
};

// Aligment: 1
// Size: 3
enum class DamageOptions_t : uint8_t
{
	DAMAGE_NO = 0,
	DAMAGE_EVENTS_ONLY = 1,
	DAMAGE_YES = 2,
};

// Aligment: 4
// Size: 25
enum class DOTA_OVERHEAD_ALERT : uint32_t
{
	OVERHEAD_ALERT_GOLD = 0x0,
	OVERHEAD_ALERT_DENY = 0x1,
	OVERHEAD_ALERT_CRITICAL = 0x2,
	OVERHEAD_ALERT_XP = 0x3,
	OVERHEAD_ALERT_BONUS_SPELL_DAMAGE = 0x4,
	OVERHEAD_ALERT_MISS = 0x5,
	OVERHEAD_ALERT_DAMAGE = 0x6,
	OVERHEAD_ALERT_EVADE = 0x7,
	OVERHEAD_ALERT_BLOCK = 0x8,
	OVERHEAD_ALERT_BONUS_POISON_DAMAGE = 0x9,
	OVERHEAD_ALERT_HEAL = 0xa,
	OVERHEAD_ALERT_MANA_ADD = 0xb,
	OVERHEAD_ALERT_MANA_LOSS = 0xc,
	OVERHEAD_ALERT_LAST_HIT_EARLY = 0xd,
	OVERHEAD_ALERT_LAST_HIT_CLOSE = 0xe,
	OVERHEAD_ALERT_LAST_HIT_MISS = 0xf,
	OVERHEAD_ALERT_MAGICAL_BLOCK = 0x10,
	OVERHEAD_ALERT_INCOMING_DAMAGE = 0x11,
	OVERHEAD_ALERT_OUTGOING_DAMAGE = 0x12,
	OVERHEAD_ALERT_DISABLE_RESIST = 0x13,
	OVERHEAD_ALERT_DEATH = 0x14,
	OVERHEAD_ALERT_BLOCKED = 0x15,
	OVERHEAD_ALERT_ITEM_RECEIVED = 0x16,
	OVERHEAD_ALERT_SHARD = 0x17,
	OVERHEAD_ALERT_DEADLY_BLOW = 0x18,
};

// Aligment: 4
// Size: 5
enum class DOTA_LANE : uint32_t
{
	DOTA_LANE_NONE = 0x0,
	DOTA_LANE_TOP = 0x1,
	DOTA_LANE_MIDDLE = 0x2,
	DOTA_LANE_BOTTOM = 0x3,
	DOTA_LANE_MAX = 0x4,
};

// Aligment: 4
// Size: 4
enum class WorldTextAttachmentType_t : uint32_t
{
	ATTACHED_NONE = 0x0,
	ATTACHED_ENTITY = 0x1,
	ATTACHED_ENTITY_LARGE = 0x2,
	ATTACHED_HAND_SPECIFIED_IN_EVENT = 0x3,
};

// Aligment: 4
// Size: 11
enum class EDPCPushNotification : uint32_t
{
	DPC_PUSH_NOTIFICATION_MATCH_STARTING = 0x1,
	DPC_PUSH_NOTIFICATION_PLAYER_LEFT_TEAM = 0xa,
	DPC_PUSH_NOTIFICATION_PLAYER_JOINED_TEAM = 0xb,
	DPC_PUSH_NOTIFICATION_PLAYER_JOINED_TEAM_AS_COACH = 0xc,
	DPC_PUSH_NOTIFICATION_PLAYER_LEFT_TEAM_AS_COACH = 0xd,
	DPC_PUSH_NOTIFICATION_LEAGUE_RESULT = 0x14,
	DPC_PUSH_NOTIFICATION_PREDICTION_MATCHES_AVAILABLE = 0x1e,
	DPC_PUSH_NOTIFICATION_PREDICTION_RESULT = 0x1f,
	DPC_PUSH_NOTIFICATION_FANTASY_PLAYER_CLEARED = 0x28,
	DPC_PUSH_NOTIFICATION_FANTASY_DAILY_SUMMARY = 0x29,
	DPC_PUSH_NOTIFICATION_FANTASY_FINAL_RESULTS = 0x2a,
};

// Aligment: 4
// Size: 92
enum class EDotaClientMessages : uint32_t
{
	DOTA_CM_MapLine = 0x12d,
	DOTA_CM_AspectRatio = 0x12e,
	DOTA_CM_MapPing = 0x12f,
	DOTA_CM_UnitsAutoAttack = 0x130,
	DOTA_CM_SearchString = 0x133,
	DOTA_CM_Pause = 0x134,
	DOTA_CM_ShopViewMode = 0x135,
	DOTA_CM_SetUnitShareFlag = 0x136,
	DOTA_CM_SwapRequest = 0x137,
	DOTA_CM_SwapAccept = 0x138,
	DOTA_CM_WorldLine = 0x139,
	DOTA_CM_RequestGraphUpdate = 0x13a,
	DOTA_CM_ItemAlert = 0x13b,
	DOTA_CM_ChatWheel = 0x13c,
	DOTA_CM_SendStatPopup = 0x13d,
	DOTA_CM_BeginLastHitChallenge = 0x13e,
	DOTA_CM_UpdateQuickBuy = 0x13f,
	DOTA_CM_UpdateCoachListen = 0x140,
	DOTA_CM_CoachHUDPing = 0x141,
	DOTA_CM_RecordVote = 0x142,
	DOTA_CM_UnitsAutoAttackAfterSpell = 0x143,
	DOTA_CM_WillPurchaseAlert = 0x144,
	DOTA_CM_PlayerShowCase = 0x145,
	DOTA_CM_TeleportRequiresHalt = 0x146,
	DOTA_CM_CameraZoomAmount = 0x147,
	DOTA_CM_BroadcasterUsingCamerman = 0x148,
	DOTA_CM_BroadcasterUsingAssistedCameraOperator = 0x149,
	DOTA_CM_EnemyItemAlert = 0x14a,
	DOTA_CM_FreeInventory = 0x14b,
	DOTA_CM_BuyBackStateAlert = 0x14c,
	DOTA_CM_QuickBuyAlert = 0x14d,
	DOTA_CM_HeroStatueLike = 0x14e,
	DOTA_CM_ModifierAlert = 0x14f,
	DOTA_CM_TeamShowcaseEditor = 0x150,
	DOTA_CM_HPManaAlert = 0x151,
	DOTA_CM_GlyphAlert = 0x152,
	DOTA_CM_TeamShowcaseClientData = 0x153,
	DOTA_CM_PlayTeamShowcase = 0x154,
	DOTA_CM_EventCNY2015Cmd = 0x155,
	DOTA_CM_FillEmptySlotsWithBots = 0x156,
	DOTA_CM_DemoHero = 0x157,
	DOTA_CM_AbilityLearnModeToggled = 0x158,
	DOTA_CM_AbilityStartUse = 0x159,
	DOTA_CM_ChallengeSelect = 0x15a,
	DOTA_CM_ChallengeReroll = 0x15b,
	DOTA_CM_ClickedBuff = 0x15c,
	DOTA_CM_CoinWager = 0x15d,
	DOTA_CM_ExecuteOrders = 0x15e,
	DOTA_CM_XPAlert = 0x15f,
	DOTA_CM_EventPointsTip = 0x161,
	DOTA_CM_KillMyHero = 0x163,
	DOTA_CM_QuestStatus = 0x164,
	DOTA_CM_ToggleAutoattack = 0x165,
	DOTA_CM_SpecialAbility = 0x166,
	DOTA_CM_KillcamDamageTaken = 0x167,
	DOTA_CM_SetEnemyStartingPosition = 0x168,
	DOTA_CM_SetDesiredWardPlacement = 0x169,
	DOTA_CM_RollDice = 0x16a,
	DOTA_CM_FlipCoin = 0x16b,
	DOTA_CM_RequestItemSuggestions = 0x16c,
	DOTA_CM_MakeTeamCaptain = 0x16d,
	DOTA_CM_CoinWagerToken = 0x16e,
	DOTA_CM_RankWager = 0x16f,
	DOTA_CM_DismissAllStatPopups = 0x170,
	DOTA_CM_HelpTipSystemStateChanged = 0x171,
	DOTA_CM_ChannelRequiresHalt = 0x172,
	DOTA_CM_RequestBulkCombatLog = 0x173,
	DOTA_CM_AbilityDraftRequestAbility = 0x174,
	DOTA_CM_GuideSelectOption = 0x175,
	DOTA_CM_GuideSelected = 0x176,
	DOTA_CM_DamageReport = 0x177,
	DOTA_CM_SalutePlayer = 0x178,
	DOTA_CM_SprayWheel = 0x179,
	DOTA_CM_TipAlert = 0x17a,
	DOTA_CM_EmptyTeleportAlert = 0x17b,
	DOTA_CM_RadarAlert = 0x17c,
	DOTA_CM_TalentTreeAlert = 0x17d,
	DOTA_CM_SetCavernMapVariant = 0x17e,
	DOTA_CM_PauseGameOrder = 0x17f,
	DOTA_CM_VersusScene_PlayerBehavior = 0x180,
	DOTA_CM_PlayerBounty = 0x181,
	DOTA_CM_PlayerBountyCancel = 0x182,
	DOTA_CM_EmptyItemSlotAlert = 0x184,
	DOTA_CM_AddOverwatchReportMarker = 0x185,
	DOTA_CM_AghsStatusAlert = 0x186,
	DOTA_CM_PerfReport = 0x187,
	DOTA_CM_ContextualTips_Subscribe = 0x189,
	DOTA_CM_ChatMessage = 0x18a,
	DOTA_CM_AddCommunicationsReportMarker = 0x18b,
	DOTA_CM_AddCommunicationsBlockMarker = 0x18c,
	DOTA_CM_NeutralCampAlert = 0x18d,
	DOTA_CM_DuelAccepted = 0x18e,
};

// Aligment: 4
// Size: 8
enum class ItemQuality_t : uint32_t
{
	DOTA_ITEM_QUALITY_CONSUMABLE = 0x0,
	DOTA_ITEM_QUALITY_PLAIN = 0x1,
	DOTA_ITEM_QUALITY_COMMON = 0x2,
	DOTA_ITEM_QUALITY_RARE = 0x3,
	DOTA_ITEM_QUALITY_EPIC = 0x4,
	DOTA_ITEM_QUALITY_ARTIFACT = 0x5,
	DOTA_ITEM_QUALITY_SECRET_SHOP = 0x6,
	NUM_ITEM_QUALITY_LEVELS = 0x7,
};

// Aligment: 4
// Size: 4
enum class PortraitSoundMode_t : uint32_t
{
	PORTRAIT_SOUND_MODE_INVALID = 0xffffffffffffffff,
	PORTRAIT_SOUND_MODE_NO_SOUNDS = 0x0,
	PORTRAIT_SOUND_MODE_ONLY_TAUNT_SOUNDS = 0x1,
	PORTRAIT_SOUND_MODE_ALL_SOUNDS = 0x2,
};

// Aligment: 4
// Size: 9
enum class ELaneSelectionFlags : uint32_t
{
	k_ELaneSelectionFlags_None = 0x0,
	k_ELaneSelectionFlags_SAFELANE = 0x1,
	k_ELaneSelectionFlags_OFFLANE = 0x2,
	k_ELaneSelectionFlags_MIDLANE = 0x4,
	k_ELaneSelectionFlags_SUPPORT_SOFT = 0x8,
	k_ELaneSelectionFlags_SUPPORT_HARD = 0x10,
	k_ELaneSelectionFlags_CORE = 0x7,
	k_ELaneSelectionFlags_SUPPORT = 0x18,
	k_ELaneSelectionFlags_ALL = 0x1f,
};

// Aligment: 4
// Size: 103
enum class DOTASlotType_t : uint32_t
{
	DOTA_LOADOUT_TYPE_INVALID = 0xffffffffffffffff,
	DOTA_LOADOUT_TYPE_WEAPON = 0x0,
	DOTA_LOADOUT_TYPE_OFFHAND_WEAPON = 0x1,
	DOTA_LOADOUT_TYPE_WEAPON2 = 0x2,
	DOTA_LOADOUT_TYPE_OFFHAND_WEAPON2 = 0x3,
	DOTA_LOADOUT_TYPE_HEAD = 0x4,
	DOTA_LOADOUT_TYPE_SHOULDER = 0x5,
	DOTA_LOADOUT_TYPE_ARMS = 0x6,
	DOTA_LOADOUT_TYPE_ARMOR = 0x7,
	DOTA_LOADOUT_TYPE_BELT = 0x8,
	DOTA_LOADOUT_TYPE_NECK = 0x9,
	DOTA_LOADOUT_TYPE_BACK = 0xa,
	DOTA_LOADOUT_TYPE_GLOVES = 0xb,
	DOTA_LOADOUT_TYPE_LEGS = 0xc,
	DOTA_LOADOUT_TYPE_TAIL = 0xd,
	DOTA_LOADOUT_TYPE_MISC = 0xe,
	DOTA_LOADOUT_TYPE_COSTUME = 0xf,
	DOTA_LOADOUT_TYPE_BODY_HEAD = 0x10,
	DOTA_LOADOUT_TYPE_MOUNT = 0x11,
	DOTA_LOADOUT_TYPE_SUMMON = 0x12,
	DOTA_LOADOUT_TYPE_SHAPESHIFT = 0x13,
	DOTA_LOADOUT_TYPE_TAUNT = 0x14,
	DOTA_LOADOUT_TYPE_AMBIENT_EFFECTS = 0x15,
	DOTA_LOADOUT_TYPE_ABILITY_ATTACK = 0x16,
	DOTA_LOADOUT_TYPE_ABILITY1 = 0x17,
	DOTA_LOADOUT_TYPE_ABILITY2 = 0x18,
	DOTA_LOADOUT_TYPE_ABILITY3 = 0x19,
	DOTA_LOADOUT_TYPE_ABILITY4 = 0x1a,
	DOTA_LOADOUT_TYPE_ABILITY_ULTIMATE = 0x1b,
	DOTA_LOADOUT_TYPE_ABILITY_EFFECTS_1 = 0x1c,
	DOTA_LOADOUT_TYPE_ABILITY_EFFECTS_2 = 0x1d,
	DOTA_LOADOUT_TYPE_ABILITY_EFFECTS_3 = 0x1e,
	DOTA_LOADOUT_TYPE_ABILITY_EFFECTS_4 = 0x1f,
	DOTA_LOADOUT_TYPE_ABILITY_EFFECTS_5 = 0x20,
	DOTA_LOADOUT_TYPE_ABILITY_EFFECTS_6 = 0x21,
	DOTA_LOADOUT_TYPE_ABILITY_EFFECTS_7 = 0x22,
	DOTA_LOADOUT_TYPE_ABILITY_EFFECTS_8 = 0x23,
	DOTA_LOADOUT_TYPE_ABILITY_EFFECTS_9 = 0x24,
	DOTA_LOADOUT_TYPE_VOICE = 0x25,
	DOTA_LOADOUT_TYPE_WEAPON_PERSONA_1 = 0x26,
	DOTA_LOADOUT_TYPE_OFFHAND_WEAPON_PERSONA_1 = 0x27,
	DOTA_LOADOUT_TYPE_WEAPON2_PERSONA_1 = 0x28,
	DOTA_LOADOUT_TYPE_OFFHAND_WEAPON2_PERSONA_1 = 0x29,
	DOTA_LOADOUT_TYPE_HEAD_PERSONA_1 = 0x2a,
	DOTA_LOADOUT_TYPE_SHOULDER_PERSONA_1 = 0x2b,
	DOTA_LOADOUT_TYPE_ARMS_PERSONA_1 = 0x2c,
	DOTA_LOADOUT_TYPE_ARMOR_PERSONA_1 = 0x2d,
	DOTA_LOADOUT_TYPE_BELT_PERSONA_1 = 0x2e,
	DOTA_LOADOUT_TYPE_NECK_PERSONA_1 = 0x2f,
	DOTA_LOADOUT_TYPE_BACK_PERSONA_1 = 0x30,
	DOTA_LOADOUT_TYPE_LEGS_PERSONA_1 = 0x31,
	DOTA_LOADOUT_TYPE_GLOVES_PERSONA_1 = 0x32,
	DOTA_LOADOUT_TYPE_TAIL_PERSONA_1 = 0x33,
	DOTA_LOADOUT_TYPE_MISC_PERSONA_1 = 0x34,
	DOTA_LOADOUT_TYPE_BODY_HEAD_PERSONA_1 = 0x35,
	DOTA_LOADOUT_TYPE_MOUNT_PERSONA_1 = 0x36,
	DOTA_LOADOUT_TYPE_SUMMON_PERSONA_1 = 0x37,
	DOTA_LOADOUT_TYPE_SHAPESHIFT_PERSONA_1 = 0x38,
	DOTA_LOADOUT_TYPE_TAUNT_PERSONA_1 = 0x39,
	DOTA_LOADOUT_TYPE_AMBIENT_EFFECTS_PERSONA_1 = 0x3a,
	DOTA_LOADOUT_TYPE_ABILITY_ATTACK_PERSONA_1 = 0x3b,
	DOTA_LOADOUT_TYPE_ABILITY1_PERSONA_1 = 0x3c,
	DOTA_LOADOUT_TYPE_ABILITY2_PERSONA_1 = 0x3d,
	DOTA_LOADOUT_TYPE_ABILITY3_PERSONA_1 = 0x3e,
	DOTA_LOADOUT_TYPE_ABILITY4_PERSONA_1 = 0x3f,
	DOTA_LOADOUT_TYPE_ABILITY_ULTIMATE_PERSONA_1 = 0x40,
	DOTA_LOADOUT_TYPE_VOICE_PERSONA_1 = 0x41,
	DOTA_LOADOUT_PERSONA_1_START = 0x26,
	DOTA_LOADOUT_PERSONA_1_END = 0x41,
	DOTA_LOADOUT_TYPE_PERSONA_SELECTOR = 0x42,
	DOTA_LOADOUT_TYPE_COURIER = 0x43,
	DOTA_LOADOUT_TYPE_ANNOUNCER = 0x44,
	DOTA_LOADOUT_TYPE_MEGA_KILLS = 0x45,
	DOTA_LOADOUT_TYPE_MUSIC = 0x46,
	DOTA_LOADOUT_TYPE_WARD = 0x47,
	DOTA_LOADOUT_TYPE_HUD_SKIN = 0x48,
	DOTA_LOADOUT_TYPE_LOADING_SCREEN = 0x49,
	DOTA_LOADOUT_TYPE_WEATHER = 0x4a,
	DOTA_LOADOUT_TYPE_HEROIC_STATUE = 0x4b,
	DOTA_LOADOUT_TYPE_MULTIKILL_BANNER = 0x4c,
	DOTA_LOADOUT_TYPE_CURSOR_PACK = 0x4d,
	DOTA_LOADOUT_TYPE_TELEPORT_EFFECT = 0x4e,
	DOTA_LOADOUT_TYPE_BLINK_EFFECT = 0x4f,
	DOTA_LOADOUT_TYPE_EMBLEM = 0x50,
	DOTA_LOADOUT_TYPE_TERRAIN = 0x51,
	DOTA_LOADOUT_TYPE_RADIANT_CREEPS = 0x52,
	DOTA_LOADOUT_TYPE_DIRE_CREEPS = 0x53,
	DOTA_LOADOUT_TYPE_RADIANT_TOWER = 0x54,
	DOTA_LOADOUT_TYPE_DIRE_TOWER = 0x55,
	DOTA_LOADOUT_TYPE_VERSUS_SCREEN = 0x56,
	DOTA_LOADOUT_TYPE_STREAK_EFFECT = 0x57,
	DOTA_LOADOUT_TYPE_KILL_EFFECT = 0x58,
	DOTA_LOADOUT_TYPE_DEATH_EFFECT = 0x59,
	DOTA_LOADOUT_TYPE_HEAD_EFFECT = 0x5a,
	DOTA_LOADOUT_TYPE_MAP_EFFECT = 0x5b,
	DOTA_LOADOUT_TYPE_COURIER_EFFECT = 0x5c,
	DOTA_LOADOUT_TYPE_RADIANT_SIEGE_CREEPS = 0x5d,
	DOTA_LOADOUT_TYPE_DIRE_SIEGE_CREEPS = 0x5e,
	DOTA_LOADOUT_TYPE_ROSHAN = 0x5f,
	DOTA_PLAYER_LOADOUT_START = 0x43,
	DOTA_PLAYER_LOADOUT_END = 0x5f,
	DOTA_LOADOUT_TYPE_NONE = 0x60,
	DOTA_LOADOUT_TYPE_COUNT = 0x61,
};

// Aligment: 4
// Size: 1024
enum class BaseActivity_t : uint32_t
{
	ACT_RESET = 0x0,
	ACT_IDLE = 0x1,
	ACT_TRANSITION = 0x2,
	ACT_COVER = 0x3,
	ACT_COVER_MED = 0x4,
	ACT_COVER_LOW = 0x5,
	ACT_WALK = 0x6,
	ACT_WALK_AIM = 0x7,
	ACT_WALK_CROUCH = 0x8,
	ACT_WALK_CROUCH_AIM = 0x9,
	ACT_RUN = 0xa,
	ACT_RUN_AIM = 0xb,
	ACT_RUN_CROUCH = 0xc,
	ACT_RUN_CROUCH_AIM = 0xd,
	ACT_RUN_PROTECTED = 0xe,
	ACT_SCRIPT_CUSTOM_MOVE = 0xf,
	ACT_RANGE_ATTACK1 = 0x10,
	ACT_RANGE_ATTACK2 = 0x11,
	ACT_RANGE_ATTACK1_LOW = 0x12,
	ACT_RANGE_ATTACK2_LOW = 0x13,
	ACT_DIESIMPLE = 0x14,
	ACT_DIEBACKWARD = 0x15,
	ACT_DIEFORWARD = 0x16,
	ACT_DIEVIOLENT = 0x17,
	ACT_DIERAGDOLL = 0x18,
	ACT_FLY = 0x19,
	ACT_HOVER = 0x1a,
	ACT_GLIDE = 0x1b,
	ACT_SWIM = 0x1c,
	ACT_JUMP = 0x1d,
	ACT_HOP = 0x1e,
	ACT_LEAP = 0x1f,
	ACT_LAND = 0x20,
	ACT_CLIMB_UP = 0x21,
	ACT_CLIMB_DOWN = 0x22,
	ACT_CLIMB_DISMOUNT = 0x23,
	ACT_SHIPLADDER_UP = 0x24,
	ACT_SHIPLADDER_DOWN = 0x25,
	ACT_STRAFE_LEFT = 0x26,
	ACT_STRAFE_RIGHT = 0x27,
	ACT_ROLL_LEFT = 0x28,
	ACT_ROLL_RIGHT = 0x29,
	ACT_TURN_LEFT = 0x2a,
	ACT_TURN_RIGHT = 0x2b,
	ACT_CROUCH = 0x2c,
	ACT_CROUCHIDLE = 0x2d,
	ACT_STAND = 0x2e,
	ACT_USE = 0x2f,
	ACT_ALIEN_BURROW_IDLE = 0x30,
	ACT_ALIEN_BURROW_OUT = 0x31,
	ACT_SIGNAL1 = 0x32,
	ACT_SIGNAL2 = 0x33,
	ACT_SIGNAL3 = 0x34,
	ACT_SIGNAL_ADVANCE = 0x35,
	ACT_SIGNAL_FORWARD = 0x36,
	ACT_SIGNAL_GROUP = 0x37,
	ACT_SIGNAL_HALT = 0x38,
	ACT_SIGNAL_LEFT = 0x39,
	ACT_SIGNAL_RIGHT = 0x3a,
	ACT_SIGNAL_TAKECOVER = 0x3b,
	ACT_LOOKBACK_RIGHT = 0x3c,
	ACT_LOOKBACK_LEFT = 0x3d,
	ACT_COWER = 0x3e,
	ACT_SMALL_FLINCH = 0x3f,
	ACT_BIG_FLINCH = 0x40,
	ACT_MELEE_ATTACK1 = 0x41,
	ACT_MELEE_ATTACK2 = 0x42,
	ACT_RELOAD = 0x43,
	ACT_RELOAD_START = 0x44,
	ACT_RELOAD_FINISH = 0x45,
	ACT_RELOAD_LOW = 0x46,
	ACT_ARM = 0x47,
	ACT_DISARM = 0x48,
	ACT_DROP_WEAPON = 0x49,
	ACT_DROP_WEAPON_SHOTGUN = 0x4a,
	ACT_PICKUP_GROUND = 0x4b,
	ACT_PICKUP_RACK = 0x4c,
	ACT_IDLE_ANGRY = 0x4d,
	ACT_IDLE_RELAXED = 0x4e,
	ACT_IDLE_STIMULATED = 0x4f,
	ACT_IDLE_AGITATED = 0x50,
	ACT_IDLE_STEALTH = 0x51,
	ACT_IDLE_HURT = 0x52,
	ACT_WALK_RELAXED = 0x53,
	ACT_WALK_STIMULATED = 0x54,
	ACT_WALK_AGITATED = 0x55,
	ACT_WALK_STEALTH = 0x56,
	ACT_RUN_RELAXED = 0x57,
	ACT_RUN_STIMULATED = 0x58,
	ACT_RUN_AGITATED = 0x59,
	ACT_RUN_STEALTH = 0x5a,
	ACT_IDLE_AIM_RELAXED = 0x5b,
	ACT_IDLE_AIM_STIMULATED = 0x5c,
	ACT_IDLE_AIM_AGITATED = 0x5d,
	ACT_IDLE_AIM_STEALTH = 0x5e,
	ACT_WALK_AIM_RELAXED = 0x5f,
	ACT_WALK_AIM_STIMULATED = 0x60,
	ACT_WALK_AIM_AGITATED = 0x61,
	ACT_WALK_AIM_STEALTH = 0x62,
	ACT_RUN_AIM_RELAXED = 0x63,
	ACT_RUN_AIM_STIMULATED = 0x64,
	ACT_RUN_AIM_AGITATED = 0x65,
	ACT_RUN_AIM_STEALTH = 0x66,
	ACT_CROUCHIDLE_STIMULATED = 0x67,
	ACT_CROUCHIDLE_AIM_STIMULATED = 0x68,
	ACT_CROUCHIDLE_AGITATED = 0x69,
	ACT_WALK_HURT = 0x6a,
	ACT_RUN_HURT = 0x6b,
	ACT_SPECIAL_ATTACK1 = 0x6c,
	ACT_SPECIAL_ATTACK2 = 0x6d,
	ACT_COMBAT_IDLE = 0x6e,
	ACT_WALK_SCARED = 0x6f,
	ACT_RUN_SCARED = 0x70,
	ACT_VICTORY_DANCE = 0x71,
	ACT_DIE_HEADSHOT = 0x72,
	ACT_DIE_CHESTSHOT = 0x73,
	ACT_DIE_GUTSHOT = 0x74,
	ACT_DIE_BACKSHOT = 0x75,
	ACT_FLINCH_HEAD = 0x76,
	ACT_FLINCH_CHEST = 0x77,
	ACT_FLINCH_STOMACH = 0x78,
	ACT_FLINCH_LEFTARM = 0x79,
	ACT_FLINCH_RIGHTARM = 0x7a,
	ACT_FLINCH_LEFTLEG = 0x7b,
	ACT_FLINCH_RIGHTLEG = 0x7c,
	ACT_FLINCH_PHYSICS = 0x7d,
	ACT_FLINCH_HEAD_BACK = 0x7e,
	ACT_FLINCH_CHEST_BACK = 0x7f,
	ACT_FLINCH_STOMACH_BACK = 0x80,
	ACT_FLINCH_CROUCH_FRONT = 0x81,
	ACT_FLINCH_CROUCH_BACK = 0x82,
	ACT_FLINCH_CROUCH_LEFT = 0x83,
	ACT_FLINCH_CROUCH_RIGHT = 0x84,
	ACT_IDLE_ON_FIRE = 0x85,
	ACT_WALK_ON_FIRE = 0x86,
	ACT_RUN_ON_FIRE = 0x87,
	ACT_180_LEFT = 0x89,
	ACT_180_RIGHT = 0x8a,
	ACT_90_LEFT = 0x8b,
	ACT_90_RIGHT = 0x8c,
	ACT_STEP_LEFT = 0x8d,
	ACT_STEP_RIGHT = 0x8e,
	ACT_STEP_BACK = 0x8f,
	ACT_STEP_FORE = 0x90,
	ACT_GESTURE_RANGE_ATTACK1 = 0x91,
	ACT_GESTURE_RANGE_ATTACK2 = 0x92,
	ACT_GESTURE_MELEE_ATTACK1 = 0x93,
	ACT_GESTURE_MELEE_ATTACK2 = 0x94,
	ACT_GESTURE_RANGE_ATTACK1_LOW = 0x95,
	ACT_GESTURE_RANGE_ATTACK2_LOW = 0x96,
	ACT_MELEE_ATTACK_SWING_GESTURE = 0x97,
	ACT_GESTURE_SMALL_FLINCH = 0x98,
	ACT_GESTURE_BIG_FLINCH = 0x99,
	ACT_GESTURE_FLINCH_BLAST = 0x9a,
	ACT_GESTURE_FLINCH_BLAST_SHOTGUN = 0x9b,
	ACT_GESTURE_FLINCH_BLAST_DAMAGED = 0x9c,
	ACT_GESTURE_FLINCH_BLAST_DAMAGED_SHOTGUN = 0x9d,
	ACT_GESTURE_FLINCH_HEAD = 0x9e,
	ACT_GESTURE_FLINCH_CHEST = 0x9f,
	ACT_GESTURE_FLINCH_STOMACH = 0xa0,
	ACT_GESTURE_FLINCH_LEFTARM = 0xa1,
	ACT_GESTURE_FLINCH_RIGHTARM = 0xa2,
	ACT_GESTURE_FLINCH_LEFTLEG = 0xa3,
	ACT_GESTURE_FLINCH_RIGHTLEG = 0xa4,
	ACT_GESTURE_TURN_LEFT = 0xa5,
	ACT_GESTURE_TURN_RIGHT = 0xa6,
	ACT_GESTURE_TURN_LEFT45 = 0xa7,
	ACT_GESTURE_TURN_RIGHT45 = 0xa8,
	ACT_GESTURE_TURN_LEFT90 = 0xa9,
	ACT_GESTURE_TURN_RIGHT90 = 0xaa,
	ACT_GESTURE_TURN_LEFT45_FLAT = 0xab,
	ACT_GESTURE_TURN_RIGHT45_FLAT = 0xac,
	ACT_GESTURE_TURN_LEFT90_FLAT = 0xad,
	ACT_GESTURE_TURN_RIGHT90_FLAT = 0xae,
	ACT_BARNACLE_HIT = 0xaf,
	ACT_BARNACLE_PULL = 0xb0,
	ACT_BARNACLE_CHOMP = 0xb1,
	ACT_BARNACLE_CHEW = 0xb2,
	ACT_DO_NOT_DISTURB = 0xb3,
	ACT_SPECIFIC_SEQUENCE = 0xb4,
	ACT_VM_DEPLOY = 0xb5,
	ACT_VM_RELOAD_EMPTY = 0xb6,
	ACT_VM_DRAW = 0xb7,
	ACT_VM_HOLSTER = 0xb8,
	ACT_VM_IDLE = 0xb9,
	ACT_VM_FIDGET = 0xba,
	ACT_VM_PULLBACK = 0xbb,
	ACT_VM_PULLBACK_HIGH = 0xbc,
	ACT_VM_PULLBACK_LOW = 0xbd,
	ACT_VM_THROW = 0xbe,
	ACT_VM_DROP = 0xbf,
	ACT_VM_PULLPIN = 0xc0,
	ACT_VM_PRIMARYATTACK = 0xc1,
	ACT_VM_SECONDARYATTACK = 0xc2,
	ACT_VM_RELOAD = 0xc3,
	ACT_VM_DRYFIRE = 0xc4,
	ACT_VM_HITLEFT = 0xc5,
	ACT_VM_HITLEFT2 = 0xc6,
	ACT_VM_HITRIGHT = 0xc7,
	ACT_VM_HITRIGHT2 = 0xc8,
	ACT_VM_HITCENTER = 0xc9,
	ACT_VM_HITCENTER2 = 0xca,
	ACT_VM_MISSLEFT = 0xcb,
	ACT_VM_MISSLEFT2 = 0xcc,
	ACT_VM_MISSRIGHT = 0xcd,
	ACT_VM_MISSRIGHT2 = 0xce,
	ACT_VM_MISSCENTER = 0xcf,
	ACT_VM_MISSCENTER2 = 0xd0,
	ACT_VM_HAULBACK = 0xd1,
	ACT_VM_SWINGHARD = 0xd2,
	ACT_VM_SWINGMISS = 0xd3,
	ACT_VM_SWINGHIT = 0xd4,
	ACT_VM_IDLE_TO_LOWERED = 0xd5,
	ACT_VM_IDLE_LOWERED = 0xd6,
	ACT_VM_LOWERED_TO_IDLE = 0xd7,
	ACT_VM_RECOIL1 = 0xd8,
	ACT_VM_RECOIL2 = 0xd9,
	ACT_VM_RECOIL3 = 0xda,
	ACT_VM_PICKUP = 0xdb,
	ACT_VM_RELEASE = 0xdc,
	ACT_VM_MAUL_LOOP = 0xdd,
	ACT_VM_ATTACH_SILENCER = 0xde,
	ACT_VM_DETACH_SILENCER = 0xdf,
	ACT_SLAM_STICKWALL_IDLE = 0xe0,
	ACT_SLAM_STICKWALL_ND_IDLE = 0xe1,
	ACT_SLAM_STICKWALL_ATTACH = 0xe2,
	ACT_SLAM_STICKWALL_ATTACH2 = 0xe3,
	ACT_SLAM_STICKWALL_ND_ATTACH = 0xe4,
	ACT_SLAM_STICKWALL_ND_ATTACH2 = 0xe5,
	ACT_SLAM_STICKWALL_DETONATE = 0xe6,
	ACT_SLAM_STICKWALL_DETONATOR_HOLSTER = 0xe7,
	ACT_SLAM_STICKWALL_DRAW = 0xe8,
	ACT_SLAM_STICKWALL_ND_DRAW = 0xe9,
	ACT_SLAM_STICKWALL_TO_THROW = 0xea,
	ACT_SLAM_STICKWALL_TO_THROW_ND = 0xeb,
	ACT_SLAM_STICKWALL_TO_TRIPMINE_ND = 0xec,
	ACT_SLAM_THROW_IDLE = 0xed,
	ACT_SLAM_THROW_ND_IDLE = 0xee,
	ACT_SLAM_THROW_THROW = 0xef,
	ACT_SLAM_THROW_THROW2 = 0xf0,
	ACT_SLAM_THROW_THROW_ND = 0xf1,
	ACT_SLAM_THROW_THROW_ND2 = 0xf2,
	ACT_SLAM_THROW_DRAW = 0xf3,
	ACT_SLAM_THROW_ND_DRAW = 0xf4,
	ACT_SLAM_THROW_TO_STICKWALL = 0xf5,
	ACT_SLAM_THROW_TO_STICKWALL_ND = 0xf6,
	ACT_SLAM_THROW_DETONATE = 0xf7,
	ACT_SLAM_THROW_DETONATOR_HOLSTER = 0xf8,
	ACT_SLAM_THROW_TO_TRIPMINE_ND = 0xf9,
	ACT_SLAM_TRIPMINE_IDLE = 0xfa,
	ACT_SLAM_TRIPMINE_DRAW = 0xfb,
	ACT_SLAM_TRIPMINE_ATTACH = 0xfc,
	ACT_SLAM_TRIPMINE_ATTACH2 = 0xfd,
	ACT_SLAM_TRIPMINE_TO_STICKWALL_ND = 0xfe,
	ACT_SLAM_TRIPMINE_TO_THROW_ND = 0xff,
	ACT_SLAM_DETONATOR_IDLE = 0x100,
	ACT_SLAM_DETONATOR_DRAW = 0x101,
	ACT_SLAM_DETONATOR_DETONATE = 0x102,
	ACT_SLAM_DETONATOR_HOLSTER = 0x103,
	ACT_SLAM_DETONATOR_STICKWALL_DRAW = 0x104,
	ACT_SLAM_DETONATOR_THROW_DRAW = 0x105,
	ACT_SHOTGUN_RELOAD_START = 0x106,
	ACT_SHOTGUN_RELOAD_FINISH = 0x107,
	ACT_SHOTGUN_PUMP = 0x108,
	ACT_SMG2_IDLE2 = 0x109,
	ACT_SMG2_FIRE2 = 0x10a,
	ACT_SMG2_DRAW2 = 0x10b,
	ACT_SMG2_RELOAD2 = 0x10c,
	ACT_SMG2_DRYFIRE2 = 0x10d,
	ACT_SMG2_TOAUTO = 0x10e,
	ACT_SMG2_TOBURST = 0x10f,
	ACT_PHYSCANNON_UPGRADE = 0x110,
	ACT_RANGE_ATTACK_AR1 = 0x111,
	ACT_RANGE_ATTACK_AR2 = 0x112,
	ACT_RANGE_ATTACK_AR2_LOW = 0x113,
	ACT_RANGE_ATTACK_AR2_GRENADE = 0x114,
	ACT_RANGE_ATTACK_HMG1 = 0x115,
	ACT_RANGE_ATTACK_ML = 0x116,
	ACT_RANGE_ATTACK_SMG1 = 0x117,
	ACT_RANGE_ATTACK_SMG1_LOW = 0x118,
	ACT_RANGE_ATTACK_SMG2 = 0x119,
	ACT_RANGE_ATTACK_SHOTGUN = 0x11a,
	ACT_RANGE_ATTACK_SHOTGUN_LOW = 0x11b,
	ACT_RANGE_ATTACK_PISTOL = 0x11c,
	ACT_RANGE_ATTACK_PISTOL_LOW = 0x11d,
	ACT_RANGE_ATTACK_SLAM = 0x11e,
	ACT_RANGE_ATTACK_TRIPWIRE = 0x11f,
	ACT_RANGE_ATTACK_THROW = 0x120,
	ACT_RANGE_ATTACK_SNIPER_RIFLE = 0x121,
	ACT_RANGE_ATTACK_RPG = 0x122,
	ACT_MELEE_ATTACK_SWING = 0x123,
	ACT_RANGE_AIM_LOW = 0x124,
	ACT_RANGE_AIM_SMG1_LOW = 0x125,
	ACT_RANGE_AIM_PISTOL_LOW = 0x126,
	ACT_RANGE_AIM_AR2_LOW = 0x127,
	ACT_COVER_PISTOL_LOW = 0x128,
	ACT_COVER_SMG1_LOW = 0x129,
	ACT_GESTURE_RANGE_ATTACK_AR1 = 0x12a,
	ACT_GESTURE_RANGE_ATTACK_AR2 = 0x12b,
	ACT_GESTURE_RANGE_ATTACK_AR2_GRENADE = 0x12c,
	ACT_GESTURE_RANGE_ATTACK_HMG1 = 0x12d,
	ACT_GESTURE_RANGE_ATTACK_ML = 0x12e,
	ACT_GESTURE_RANGE_ATTACK_SMG1 = 0x12f,
	ACT_GESTURE_RANGE_ATTACK_SMG1_LOW = 0x130,
	ACT_GESTURE_RANGE_ATTACK_SMG2 = 0x131,
	ACT_GESTURE_RANGE_ATTACK_SHOTGUN = 0x132,
	ACT_GESTURE_RANGE_ATTACK_PISTOL = 0x133,
	ACT_GESTURE_RANGE_ATTACK_PISTOL_LOW = 0x134,
	ACT_GESTURE_RANGE_ATTACK_SLAM = 0x135,
	ACT_GESTURE_RANGE_ATTACK_TRIPWIRE = 0x136,
	ACT_GESTURE_RANGE_ATTACK_THROW = 0x137,
	ACT_GESTURE_RANGE_ATTACK_SNIPER_RIFLE = 0x138,
	ACT_GESTURE_MELEE_ATTACK_SWING = 0x139,
	ACT_IDLE_RIFLE = 0x13a,
	ACT_IDLE_SMG1 = 0x13b,
	ACT_IDLE_ANGRY_SMG1 = 0x13c,
	ACT_IDLE_PISTOL = 0x13d,
	ACT_IDLE_ANGRY_PISTOL = 0x13e,
	ACT_IDLE_ANGRY_SHOTGUN = 0x13f,
	ACT_IDLE_STEALTH_PISTOL = 0x140,
	ACT_IDLE_PACKAGE = 0x141,
	ACT_WALK_PACKAGE = 0x142,
	ACT_IDLE_SUITCASE = 0x143,
	ACT_WALK_SUITCASE = 0x144,
	ACT_IDLE_SMG1_RELAXED = 0x145,
	ACT_IDLE_SMG1_STIMULATED = 0x146,
	ACT_WALK_RIFLE_RELAXED = 0x147,
	ACT_RUN_RIFLE_RELAXED = 0x148,
	ACT_WALK_RIFLE_STIMULATED = 0x149,
	ACT_RUN_RIFLE_STIMULATED = 0x14a,
	ACT_IDLE_AIM_RIFLE_STIMULATED = 0x14b,
	ACT_WALK_AIM_RIFLE_STIMULATED = 0x14c,
	ACT_RUN_AIM_RIFLE_STIMULATED = 0x14d,
	ACT_IDLE_SHOTGUN_RELAXED = 0x14e,
	ACT_IDLE_SHOTGUN_STIMULATED = 0x14f,
	ACT_IDLE_SHOTGUN_AGITATED = 0x150,
	ACT_WALK_ANGRY = 0x151,
	ACT_POLICE_HARASS1 = 0x152,
	ACT_POLICE_HARASS2 = 0x153,
	ACT_IDLE_MANNEDGUN = 0x154,
	ACT_IDLE_MELEE = 0x155,
	ACT_IDLE_ANGRY_MELEE = 0x156,
	ACT_IDLE_RPG_RELAXED = 0x157,
	ACT_IDLE_RPG = 0x158,
	ACT_IDLE_ANGRY_RPG = 0x159,
	ACT_COVER_LOW_RPG = 0x15a,
	ACT_WALK_RPG = 0x15b,
	ACT_RUN_RPG = 0x15c,
	ACT_WALK_CROUCH_RPG = 0x15d,
	ACT_RUN_CROUCH_RPG = 0x15e,
	ACT_WALK_RPG_RELAXED = 0x15f,
	ACT_RUN_RPG_RELAXED = 0x160,
	ACT_WALK_RIFLE = 0x161,
	ACT_WALK_AIM_RIFLE = 0x162,
	ACT_WALK_CROUCH_RIFLE = 0x163,
	ACT_WALK_CROUCH_AIM_RIFLE = 0x164,
	ACT_RUN_RIFLE = 0x165,
	ACT_RUN_AIM_RIFLE = 0x166,
	ACT_RUN_CROUCH_RIFLE = 0x167,
	ACT_RUN_CROUCH_AIM_RIFLE = 0x168,
	ACT_RUN_STEALTH_PISTOL = 0x169,
	ACT_WALK_AIM_SHOTGUN = 0x16a,
	ACT_RUN_AIM_SHOTGUN = 0x16b,
	ACT_WALK_PISTOL = 0x16c,
	ACT_RUN_PISTOL = 0x16d,
	ACT_WALK_AIM_PISTOL = 0x16e,
	ACT_RUN_AIM_PISTOL = 0x16f,
	ACT_WALK_STEALTH_PISTOL = 0x170,
	ACT_WALK_AIM_STEALTH_PISTOL = 0x171,
	ACT_RUN_AIM_STEALTH_PISTOL = 0x172,
	ACT_RELOAD_PISTOL = 0x173,
	ACT_RELOAD_PISTOL_LOW = 0x174,
	ACT_RELOAD_SMG1 = 0x175,
	ACT_RELOAD_SMG1_LOW = 0x176,
	ACT_RELOAD_SHOTGUN = 0x177,
	ACT_RELOAD_SHOTGUN_LOW = 0x178,
	ACT_GESTURE_RELOAD = 0x179,
	ACT_GESTURE_RELOAD_PISTOL = 0x17a,
	ACT_GESTURE_RELOAD_SMG1 = 0x17b,
	ACT_GESTURE_RELOAD_SHOTGUN = 0x17c,
	ACT_BUSY_LEAN_LEFT = 0x17d,
	ACT_BUSY_LEAN_LEFT_ENTRY = 0x17e,
	ACT_BUSY_LEAN_LEFT_EXIT = 0x17f,
	ACT_BUSY_LEAN_BACK = 0x180,
	ACT_BUSY_LEAN_BACK_ENTRY = 0x181,
	ACT_BUSY_LEAN_BACK_EXIT = 0x182,
	ACT_BUSY_SIT_GROUND = 0x183,
	ACT_BUSY_SIT_GROUND_ENTRY = 0x184,
	ACT_BUSY_SIT_GROUND_EXIT = 0x185,
	ACT_BUSY_SIT_CHAIR = 0x186,
	ACT_BUSY_SIT_CHAIR_ENTRY = 0x187,
	ACT_BUSY_SIT_CHAIR_EXIT = 0x188,
	ACT_BUSY_STAND = 0x189,
	ACT_BUSY_QUEUE = 0x18a,
	ACT_DUCK_DODGE = 0x18b,
	ACT_DIE_BARNACLE_SWALLOW = 0x18c,
	ACT_GESTURE_BARNACLE_STRANGLE = 0x18d,
	ACT_DIE_FRONTSIDE = 0x192,
	ACT_DIE_RIGHTSIDE = 0x193,
	ACT_DIE_BACKSIDE = 0x194,
	ACT_DIE_LEFTSIDE = 0x195,
	ACT_DIE_CROUCH_FRONTSIDE = 0x196,
	ACT_DIE_CROUCH_RIGHTSIDE = 0x197,
	ACT_DIE_CROUCH_BACKSIDE = 0x198,
	ACT_DIE_CROUCH_LEFTSIDE = 0x199,
	ACT_DIE_INCAP = 0x19a,
	ACT_DIE_STANDING = 0x19b,
	ACT_OPEN_DOOR = 0x19c,
	ACT_DI_ALYX_ZOMBIE_MELEE = 0x19d,
	ACT_DI_ALYX_ZOMBIE_TORSO_MELEE = 0x19e,
	ACT_DI_ALYX_HEADCRAB_MELEE = 0x19f,
	ACT_DI_ALYX_ANTLION = 0x1a0,
	ACT_DI_ALYX_ZOMBIE_SHOTGUN64 = 0x1a1,
	ACT_DI_ALYX_ZOMBIE_SHOTGUN26 = 0x1a2,
	ACT_READINESS_RELAXED_TO_STIMULATED = 0x1a3,
	ACT_READINESS_RELAXED_TO_STIMULATED_WALK = 0x1a4,
	ACT_READINESS_AGITATED_TO_STIMULATED = 0x1a5,
	ACT_READINESS_STIMULATED_TO_RELAXED = 0x1a6,
	ACT_READINESS_PISTOL_RELAXED_TO_STIMULATED = 0x1a7,
	ACT_READINESS_PISTOL_RELAXED_TO_STIMULATED_WALK = 0x1a8,
	ACT_READINESS_PISTOL_AGITATED_TO_STIMULATED = 0x1a9,
	ACT_READINESS_PISTOL_STIMULATED_TO_RELAXED = 0x1aa,
	ACT_IDLE_CARRY = 0x1ab,
	ACT_WALK_CARRY = 0x1ac,
	ACT_STARTDYING = 0x1ad,
	ACT_DYINGLOOP = 0x1ae,
	ACT_DYINGTODEAD = 0x1af,
	ACT_RIDE_MANNED_GUN = 0x1b0,
	ACT_VM_SPRINT_ENTER = 0x1b1,
	ACT_VM_SPRINT_IDLE = 0x1b2,
	ACT_VM_SPRINT_LEAVE = 0x1b3,
	ACT_FIRE_START = 0x1b4,
	ACT_FIRE_LOOP = 0x1b5,
	ACT_FIRE_END = 0x1b6,
	ACT_CROUCHING_GRENADEIDLE = 0x1b7,
	ACT_CROUCHING_GRENADEREADY = 0x1b8,
	ACT_CROUCHING_PRIMARYATTACK = 0x1b9,
	ACT_OVERLAY_GRENADEIDLE = 0x1ba,
	ACT_OVERLAY_GRENADEREADY = 0x1bb,
	ACT_OVERLAY_PRIMARYATTACK = 0x1bc,
	ACT_OVERLAY_SHIELD_UP = 0x1bd,
	ACT_OVERLAY_SHIELD_DOWN = 0x1be,
	ACT_OVERLAY_SHIELD_UP_IDLE = 0x1bf,
	ACT_OVERLAY_SHIELD_ATTACK = 0x1c0,
	ACT_OVERLAY_SHIELD_KNOCKBACK = 0x1c1,
	ACT_SHIELD_UP = 0x1c2,
	ACT_SHIELD_DOWN = 0x1c3,
	ACT_SHIELD_UP_IDLE = 0x1c4,
	ACT_SHIELD_ATTACK = 0x1c5,
	ACT_SHIELD_KNOCKBACK = 0x1c6,
	ACT_CROUCHING_SHIELD_UP = 0x1c7,
	ACT_CROUCHING_SHIELD_DOWN = 0x1c8,
	ACT_CROUCHING_SHIELD_UP_IDLE = 0x1c9,
	ACT_CROUCHING_SHIELD_ATTACK = 0x1ca,
	ACT_CROUCHING_SHIELD_KNOCKBACK = 0x1cb,
	ACT_TURNRIGHT45 = 0x1cc,
	ACT_TURNLEFT45 = 0x1cd,
	ACT_TURN = 0x1ce,
	ACT_OBJ_ASSEMBLING = 0x1cf,
	ACT_OBJ_DISMANTLING = 0x1d0,
	ACT_OBJ_STARTUP = 0x1d1,
	ACT_OBJ_RUNNING = 0x1d2,
	ACT_OBJ_IDLE = 0x1d3,
	ACT_OBJ_PLACING = 0x1d4,
	ACT_OBJ_DETERIORATING = 0x1d5,
	ACT_OBJ_UPGRADING = 0x1d6,
	ACT_DEPLOY = 0x1d7,
	ACT_DEPLOY_IDLE = 0x1d8,
	ACT_UNDEPLOY = 0x1d9,
	ACT_CROSSBOW_DRAW_UNLOADED = 0x1da,
	ACT_GAUSS_SPINUP = 0x1db,
	ACT_GAUSS_SPINCYCLE = 0x1dc,
	ACT_VM_PRIMARYATTACK_SILENCED = 0x1dd,
	ACT_VM_RELOAD_SILENCED = 0x1de,
	ACT_VM_DRYFIRE_SILENCED = 0x1df,
	ACT_VM_IDLE_SILENCED = 0x1e0,
	ACT_VM_DRAW_SILENCED = 0x1e1,
	ACT_VM_IDLE_EMPTY_LEFT = 0x1e2,
	ACT_VM_DRYFIRE_LEFT = 0x1e3,
	ACT_VM_IS_DRAW = 0x1e4,
	ACT_VM_IS_HOLSTER = 0x1e5,
	ACT_VM_IS_IDLE = 0x1e6,
	ACT_VM_IS_PRIMARYATTACK = 0x1e7,
	ACT_PLAYER_IDLE_FIRE = 0x1e8,
	ACT_PLAYER_CROUCH_FIRE = 0x1e9,
	ACT_PLAYER_CROUCH_WALK_FIRE = 0x1ea,
	ACT_PLAYER_WALK_FIRE = 0x1eb,
	ACT_PLAYER_RUN_FIRE = 0x1ec,
	ACT_IDLETORUN = 0x1ed,
	ACT_RUNTOIDLE = 0x1ee,
	ACT_VM_DRAW_DEPLOYED = 0x1ef,
	ACT_HL2MP_IDLE_MELEE = 0x1f0,
	ACT_HL2MP_RUN_MELEE = 0x1f1,
	ACT_HL2MP_IDLE_CROUCH_MELEE = 0x1f2,
	ACT_HL2MP_WALK_CROUCH_MELEE = 0x1f3,
	ACT_HL2MP_GESTURE_RANGE_ATTACK_MELEE = 0x1f4,
	ACT_HL2MP_GESTURE_RELOAD_MELEE = 0x1f5,
	ACT_HL2MP_JUMP_MELEE = 0x1f6,
	ACT_MP_STAND_IDLE = 0x1f7,
	ACT_MP_CROUCH_IDLE = 0x1f8,
	ACT_MP_CROUCH_DEPLOYED_IDLE = 0x1f9,
	ACT_MP_CROUCH_DEPLOYED = 0x1fa,
	ACT_MP_DEPLOYED_IDLE = 0x1fb,
	ACT_MP_RUN = 0x1fc,
	ACT_MP_WALK = 0x1fd,
	ACT_MP_AIRWALK = 0x1fe,
	ACT_MP_CROUCHWALK = 0x1ff,
	ACT_MP_SPRINT = 0x200,
	ACT_MP_JUMP = 0x201,
	ACT_MP_JUMP_START = 0x202,
	ACT_MP_JUMP_FLOAT = 0x203,
	ACT_MP_JUMP_LAND = 0x204,
	ACT_MP_DOUBLEJUMP = 0x205,
	ACT_MP_SWIM = 0x206,
	ACT_MP_DEPLOYED = 0x207,
	ACT_MP_SWIM_DEPLOYED = 0x208,
	ACT_MP_VCD = 0x209,
	ACT_MP_ATTACK_STAND_PRIMARYFIRE = 0x20a,
	ACT_MP_ATTACK_STAND_PRIMARYFIRE_DEPLOYED = 0x20b,
	ACT_MP_ATTACK_STAND_SECONDARYFIRE = 0x20c,
	ACT_MP_ATTACK_STAND_GRENADE = 0x20d,
	ACT_MP_ATTACK_CROUCH_PRIMARYFIRE = 0x20e,
	ACT_MP_ATTACK_CROUCH_PRIMARYFIRE_DEPLOYED = 0x20f,
	ACT_MP_ATTACK_CROUCH_SECONDARYFIRE = 0x210,
	ACT_MP_ATTACK_CROUCH_GRENADE = 0x211,
	ACT_MP_ATTACK_SWIM_PRIMARYFIRE = 0x212,
	ACT_MP_ATTACK_SWIM_SECONDARYFIRE = 0x213,
	ACT_MP_ATTACK_SWIM_GRENADE = 0x214,
	ACT_MP_ATTACK_AIRWALK_PRIMARYFIRE = 0x215,
	ACT_MP_ATTACK_AIRWALK_SECONDARYFIRE = 0x216,
	ACT_MP_ATTACK_AIRWALK_GRENADE = 0x217,
	ACT_MP_RELOAD_STAND = 0x218,
	ACT_MP_RELOAD_STAND_LOOP = 0x219,
	ACT_MP_RELOAD_STAND_END = 0x21a,
	ACT_MP_RELOAD_CROUCH = 0x21b,
	ACT_MP_RELOAD_CROUCH_LOOP = 0x21c,
	ACT_MP_RELOAD_CROUCH_END = 0x21d,
	ACT_MP_RELOAD_SWIM = 0x21e,
	ACT_MP_RELOAD_SWIM_LOOP = 0x21f,
	ACT_MP_RELOAD_SWIM_END = 0x220,
	ACT_MP_RELOAD_AIRWALK = 0x221,
	ACT_MP_RELOAD_AIRWALK_LOOP = 0x222,
	ACT_MP_RELOAD_AIRWALK_END = 0x223,
	ACT_MP_ATTACK_STAND_PREFIRE = 0x224,
	ACT_MP_ATTACK_STAND_POSTFIRE = 0x225,
	ACT_MP_ATTACK_STAND_STARTFIRE = 0x226,
	ACT_MP_ATTACK_CROUCH_PREFIRE = 0x227,
	ACT_MP_ATTACK_CROUCH_POSTFIRE = 0x228,
	ACT_MP_ATTACK_SWIM_PREFIRE = 0x229,
	ACT_MP_ATTACK_SWIM_POSTFIRE = 0x22a,
	ACT_MP_STAND_PRIMARY = 0x22b,
	ACT_MP_CROUCH_PRIMARY = 0x22c,
	ACT_MP_RUN_PRIMARY = 0x22d,
	ACT_MP_WALK_PRIMARY = 0x22e,
	ACT_MP_AIRWALK_PRIMARY = 0x22f,
	ACT_MP_CROUCHWALK_PRIMARY = 0x230,
	ACT_MP_JUMP_PRIMARY = 0x231,
	ACT_MP_JUMP_START_PRIMARY = 0x232,
	ACT_MP_JUMP_FLOAT_PRIMARY = 0x233,
	ACT_MP_JUMP_LAND_PRIMARY = 0x234,
	ACT_MP_SWIM_PRIMARY = 0x235,
	ACT_MP_DEPLOYED_PRIMARY = 0x236,
	ACT_MP_SWIM_DEPLOYED_PRIMARY = 0x237,
	ACT_MP_ATTACK_STAND_PRIMARY = 0x238,
	ACT_MP_ATTACK_STAND_PRIMARY_DEPLOYED = 0x239,
	ACT_MP_ATTACK_CROUCH_PRIMARY = 0x23a,
	ACT_MP_ATTACK_CROUCH_PRIMARY_DEPLOYED = 0x23b,
	ACT_MP_ATTACK_SWIM_PRIMARY = 0x23c,
	ACT_MP_ATTACK_AIRWALK_PRIMARY = 0x23d,
	ACT_MP_RELOAD_STAND_PRIMARY = 0x23e,
	ACT_MP_RELOAD_STAND_PRIMARY_LOOP = 0x23f,
	ACT_MP_RELOAD_STAND_PRIMARY_END = 0x240,
	ACT_MP_RELOAD_CROUCH_PRIMARY = 0x241,
	ACT_MP_RELOAD_CROUCH_PRIMARY_LOOP = 0x242,
	ACT_MP_RELOAD_CROUCH_PRIMARY_END = 0x243,
	ACT_MP_RELOAD_SWIM_PRIMARY = 0x244,
	ACT_MP_RELOAD_SWIM_PRIMARY_LOOP = 0x245,
	ACT_MP_RELOAD_SWIM_PRIMARY_END = 0x246,
	ACT_MP_RELOAD_AIRWALK_PRIMARY = 0x247,
	ACT_MP_RELOAD_AIRWALK_PRIMARY_LOOP = 0x248,
	ACT_MP_RELOAD_AIRWALK_PRIMARY_END = 0x249,
	ACT_MP_ATTACK_STAND_GRENADE_PRIMARY = 0x24a,
	ACT_MP_ATTACK_CROUCH_GRENADE_PRIMARY = 0x24b,
	ACT_MP_ATTACK_SWIM_GRENADE_PRIMARY = 0x24c,
	ACT_MP_ATTACK_AIRWALK_GRENADE_PRIMARY = 0x24d,
	ACT_MP_STAND_SECONDARY = 0x24e,
	ACT_MP_CROUCH_SECONDARY = 0x24f,
	ACT_MP_RUN_SECONDARY = 0x250,
	ACT_MP_WALK_SECONDARY = 0x251,
	ACT_MP_AIRWALK_SECONDARY = 0x252,
	ACT_MP_CROUCHWALK_SECONDARY = 0x253,
	ACT_MP_JUMP_SECONDARY = 0x254,
	ACT_MP_JUMP_START_SECONDARY = 0x255,
	ACT_MP_JUMP_FLOAT_SECONDARY = 0x256,
	ACT_MP_JUMP_LAND_SECONDARY = 0x257,
	ACT_MP_SWIM_SECONDARY = 0x258,
	ACT_MP_ATTACK_STAND_SECONDARY = 0x259,
	ACT_MP_ATTACK_CROUCH_SECONDARY = 0x25a,
	ACT_MP_ATTACK_SWIM_SECONDARY = 0x25b,
	ACT_MP_ATTACK_AIRWALK_SECONDARY = 0x25c,
	ACT_MP_RELOAD_STAND_SECONDARY = 0x25d,
	ACT_MP_RELOAD_STAND_SECONDARY_LOOP = 0x25e,
	ACT_MP_RELOAD_STAND_SECONDARY_END = 0x25f,
	ACT_MP_RELOAD_CROUCH_SECONDARY = 0x260,
	ACT_MP_RELOAD_CROUCH_SECONDARY_LOOP = 0x261,
	ACT_MP_RELOAD_CROUCH_SECONDARY_END = 0x262,
	ACT_MP_RELOAD_SWIM_SECONDARY = 0x263,
	ACT_MP_RELOAD_SWIM_SECONDARY_LOOP = 0x264,
	ACT_MP_RELOAD_SWIM_SECONDARY_END = 0x265,
	ACT_MP_RELOAD_AIRWALK_SECONDARY = 0x266,
	ACT_MP_RELOAD_AIRWALK_SECONDARY_LOOP = 0x267,
	ACT_MP_RELOAD_AIRWALK_SECONDARY_END = 0x268,
	ACT_MP_ATTACK_STAND_GRENADE_SECONDARY = 0x269,
	ACT_MP_ATTACK_CROUCH_GRENADE_SECONDARY = 0x26a,
	ACT_MP_ATTACK_SWIM_GRENADE_SECONDARY = 0x26b,
	ACT_MP_ATTACK_AIRWALK_GRENADE_SECONDARY = 0x26c,
	ACT_MP_STAND_MELEE = 0x26d,
	ACT_MP_CROUCH_MELEE = 0x26e,
	ACT_MP_RUN_MELEE = 0x26f,
	ACT_MP_WALK_MELEE = 0x270,
	ACT_MP_AIRWALK_MELEE = 0x271,
	ACT_MP_CROUCHWALK_MELEE = 0x272,
	ACT_MP_JUMP_MELEE = 0x273,
	ACT_MP_JUMP_START_MELEE = 0x274,
	ACT_MP_JUMP_FLOAT_MELEE = 0x275,
	ACT_MP_JUMP_LAND_MELEE = 0x276,
	ACT_MP_SWIM_MELEE = 0x277,
	ACT_MP_ATTACK_STAND_MELEE = 0x278,
	ACT_MP_ATTACK_STAND_MELEE_SECONDARY = 0x279,
	ACT_MP_ATTACK_CROUCH_MELEE = 0x27a,
	ACT_MP_ATTACK_CROUCH_MELEE_SECONDARY = 0x27b,
	ACT_MP_ATTACK_SWIM_MELEE = 0x27c,
	ACT_MP_ATTACK_AIRWALK_MELEE = 0x27d,
	ACT_MP_ATTACK_STAND_GRENADE_MELEE = 0x27e,
	ACT_MP_ATTACK_CROUCH_GRENADE_MELEE = 0x27f,
	ACT_MP_ATTACK_SWIM_GRENADE_MELEE = 0x280,
	ACT_MP_ATTACK_AIRWALK_GRENADE_MELEE = 0x281,
	ACT_MP_STAND_ITEM1 = 0x282,
	ACT_MP_CROUCH_ITEM1 = 0x283,
	ACT_MP_RUN_ITEM1 = 0x284,
	ACT_MP_WALK_ITEM1 = 0x285,
	ACT_MP_AIRWALK_ITEM1 = 0x286,
	ACT_MP_CROUCHWALK_ITEM1 = 0x287,
	ACT_MP_JUMP_ITEM1 = 0x288,
	ACT_MP_JUMP_START_ITEM1 = 0x289,
	ACT_MP_JUMP_FLOAT_ITEM1 = 0x28a,
	ACT_MP_JUMP_LAND_ITEM1 = 0x28b,
	ACT_MP_SWIM_ITEM1 = 0x28c,
	ACT_MP_ATTACK_STAND_ITEM1 = 0x28d,
	ACT_MP_ATTACK_STAND_ITEM1_SECONDARY = 0x28e,
	ACT_MP_ATTACK_CROUCH_ITEM1 = 0x28f,
	ACT_MP_ATTACK_CROUCH_ITEM1_SECONDARY = 0x290,
	ACT_MP_ATTACK_SWIM_ITEM1 = 0x291,
	ACT_MP_ATTACK_AIRWALK_ITEM1 = 0x292,
	ACT_MP_STAND_ITEM2 = 0x293,
	ACT_MP_CROUCH_ITEM2 = 0x294,
	ACT_MP_RUN_ITEM2 = 0x295,
	ACT_MP_WALK_ITEM2 = 0x296,
	ACT_MP_AIRWALK_ITEM2 = 0x297,
	ACT_MP_CROUCHWALK_ITEM2 = 0x298,
	ACT_MP_JUMP_ITEM2 = 0x299,
	ACT_MP_JUMP_START_ITEM2 = 0x29a,
	ACT_MP_JUMP_FLOAT_ITEM2 = 0x29b,
	ACT_MP_JUMP_LAND_ITEM2 = 0x29c,
	ACT_MP_SWIM_ITEM2 = 0x29d,
	ACT_MP_ATTACK_STAND_ITEM2 = 0x29e,
	ACT_MP_ATTACK_STAND_ITEM2_SECONDARY = 0x29f,
	ACT_MP_ATTACK_CROUCH_ITEM2 = 0x2a0,
	ACT_MP_ATTACK_CROUCH_ITEM2_SECONDARY = 0x2a1,
	ACT_MP_ATTACK_SWIM_ITEM2 = 0x2a2,
	ACT_MP_ATTACK_AIRWALK_ITEM2 = 0x2a3,
	ACT_MP_GESTURE_FLINCH = 0x2a4,
	ACT_MP_GESTURE_FLINCH_PRIMARY = 0x2a5,
	ACT_MP_GESTURE_FLINCH_SECONDARY = 0x2a6,
	ACT_MP_GESTURE_FLINCH_MELEE = 0x2a7,
	ACT_MP_GESTURE_FLINCH_ITEM1 = 0x2a8,
	ACT_MP_GESTURE_FLINCH_ITEM2 = 0x2a9,
	ACT_MP_GESTURE_FLINCH_HEAD = 0x2aa,
	ACT_MP_GESTURE_FLINCH_CHEST = 0x2ab,
	ACT_MP_GESTURE_FLINCH_STOMACH = 0x2ac,
	ACT_MP_GESTURE_FLINCH_LEFTARM = 0x2ad,
	ACT_MP_GESTURE_FLINCH_RIGHTARM = 0x2ae,
	ACT_MP_GESTURE_FLINCH_LEFTLEG = 0x2af,
	ACT_MP_GESTURE_FLINCH_RIGHTLEG = 0x2b0,
	ACT_MP_GRENADE1_DRAW = 0x2b1,
	ACT_MP_GRENADE1_IDLE = 0x2b2,
	ACT_MP_GRENADE1_ATTACK = 0x2b3,
	ACT_MP_GRENADE2_DRAW = 0x2b4,
	ACT_MP_GRENADE2_IDLE = 0x2b5,
	ACT_MP_GRENADE2_ATTACK = 0x2b6,
	ACT_MP_PRIMARY_GRENADE1_DRAW = 0x2b7,
	ACT_MP_PRIMARY_GRENADE1_IDLE = 0x2b8,
	ACT_MP_PRIMARY_GRENADE1_ATTACK = 0x2b9,
	ACT_MP_PRIMARY_GRENADE2_DRAW = 0x2ba,
	ACT_MP_PRIMARY_GRENADE2_IDLE = 0x2bb,
	ACT_MP_PRIMARY_GRENADE2_ATTACK = 0x2bc,
	ACT_MP_SECONDARY_GRENADE1_DRAW = 0x2bd,
	ACT_MP_SECONDARY_GRENADE1_IDLE = 0x2be,
	ACT_MP_SECONDARY_GRENADE1_ATTACK = 0x2bf,
	ACT_MP_SECONDARY_GRENADE2_DRAW = 0x2c0,
	ACT_MP_SECONDARY_GRENADE2_IDLE = 0x2c1,
	ACT_MP_SECONDARY_GRENADE2_ATTACK = 0x2c2,
	ACT_MP_MELEE_GRENADE1_DRAW = 0x2c3,
	ACT_MP_MELEE_GRENADE1_IDLE = 0x2c4,
	ACT_MP_MELEE_GRENADE1_ATTACK = 0x2c5,
	ACT_MP_MELEE_GRENADE2_DRAW = 0x2c6,
	ACT_MP_MELEE_GRENADE2_IDLE = 0x2c7,
	ACT_MP_MELEE_GRENADE2_ATTACK = 0x2c8,
	ACT_MP_ITEM1_GRENADE1_DRAW = 0x2c9,
	ACT_MP_ITEM1_GRENADE1_IDLE = 0x2ca,
	ACT_MP_ITEM1_GRENADE1_ATTACK = 0x2cb,
	ACT_MP_ITEM1_GRENADE2_DRAW = 0x2cc,
	ACT_MP_ITEM1_GRENADE2_IDLE = 0x2cd,
	ACT_MP_ITEM1_GRENADE2_ATTACK = 0x2ce,
	ACT_MP_ITEM2_GRENADE1_DRAW = 0x2cf,
	ACT_MP_ITEM2_GRENADE1_IDLE = 0x2d0,
	ACT_MP_ITEM2_GRENADE1_ATTACK = 0x2d1,
	ACT_MP_ITEM2_GRENADE2_DRAW = 0x2d2,
	ACT_MP_ITEM2_GRENADE2_IDLE = 0x2d3,
	ACT_MP_ITEM2_GRENADE2_ATTACK = 0x2d4,
	ACT_MP_STAND_BUILDING = 0x2d5,
	ACT_MP_CROUCH_BUILDING = 0x2d6,
	ACT_MP_RUN_BUILDING = 0x2d7,
	ACT_MP_WALK_BUILDING = 0x2d8,
	ACT_MP_AIRWALK_BUILDING = 0x2d9,
	ACT_MP_CROUCHWALK_BUILDING = 0x2da,
	ACT_MP_JUMP_BUILDING = 0x2db,
	ACT_MP_JUMP_START_BUILDING = 0x2dc,
	ACT_MP_JUMP_FLOAT_BUILDING = 0x2dd,
	ACT_MP_JUMP_LAND_BUILDING = 0x2de,
	ACT_MP_SWIM_BUILDING = 0x2df,
	ACT_MP_ATTACK_STAND_BUILDING = 0x2e0,
	ACT_MP_ATTACK_CROUCH_BUILDING = 0x2e1,
	ACT_MP_ATTACK_SWIM_BUILDING = 0x2e2,
	ACT_MP_ATTACK_AIRWALK_BUILDING = 0x2e3,
	ACT_MP_ATTACK_STAND_GRENADE_BUILDING = 0x2e4,
	ACT_MP_ATTACK_CROUCH_GRENADE_BUILDING = 0x2e5,
	ACT_MP_ATTACK_SWIM_GRENADE_BUILDING = 0x2e6,
	ACT_MP_ATTACK_AIRWALK_GRENADE_BUILDING = 0x2e7,
	ACT_MP_STAND_PDA = 0x2e8,
	ACT_MP_CROUCH_PDA = 0x2e9,
	ACT_MP_RUN_PDA = 0x2ea,
	ACT_MP_WALK_PDA = 0x2eb,
	ACT_MP_AIRWALK_PDA = 0x2ec,
	ACT_MP_CROUCHWALK_PDA = 0x2ed,
	ACT_MP_JUMP_PDA = 0x2ee,
	ACT_MP_JUMP_START_PDA = 0x2ef,
	ACT_MP_JUMP_FLOAT_PDA = 0x2f0,
	ACT_MP_JUMP_LAND_PDA = 0x2f1,
	ACT_MP_SWIM_PDA = 0x2f2,
	ACT_MP_ATTACK_STAND_PDA = 0x2f3,
	ACT_MP_ATTACK_SWIM_PDA = 0x2f4,
	ACT_MP_GESTURE_VC_HANDMOUTH = 0x2f5,
	ACT_MP_GESTURE_VC_FINGERPOINT = 0x2f6,
	ACT_MP_GESTURE_VC_FISTPUMP = 0x2f7,
	ACT_MP_GESTURE_VC_THUMBSUP = 0x2f8,
	ACT_MP_GESTURE_VC_NODYES = 0x2f9,
	ACT_MP_GESTURE_VC_NODNO = 0x2fa,
	ACT_MP_GESTURE_VC_HANDMOUTH_PRIMARY = 0x2fb,
	ACT_MP_GESTURE_VC_FINGERPOINT_PRIMARY = 0x2fc,
	ACT_MP_GESTURE_VC_FISTPUMP_PRIMARY = 0x2fd,
	ACT_MP_GESTURE_VC_THUMBSUP_PRIMARY = 0x2fe,
	ACT_MP_GESTURE_VC_NODYES_PRIMARY = 0x2ff,
	ACT_MP_GESTURE_VC_NODNO_PRIMARY = 0x300,
	ACT_MP_GESTURE_VC_HANDMOUTH_SECONDARY = 0x301,
	ACT_MP_GESTURE_VC_FINGERPOINT_SECONDARY = 0x302,
	ACT_MP_GESTURE_VC_FISTPUMP_SECONDARY = 0x303,
	ACT_MP_GESTURE_VC_THUMBSUP_SECONDARY = 0x304,
	ACT_MP_GESTURE_VC_NODYES_SECONDARY = 0x305,
	ACT_MP_GESTURE_VC_NODNO_SECONDARY = 0x306,
	ACT_MP_GESTURE_VC_HANDMOUTH_MELEE = 0x307,
	ACT_MP_GESTURE_VC_FINGERPOINT_MELEE = 0x308,
	ACT_MP_GESTURE_VC_FISTPUMP_MELEE = 0x309,
	ACT_MP_GESTURE_VC_THUMBSUP_MELEE = 0x30a,
	ACT_MP_GESTURE_VC_NODYES_MELEE = 0x30b,
	ACT_MP_GESTURE_VC_NODNO_MELEE = 0x30c,
	ACT_MP_GESTURE_VC_HANDMOUTH_ITEM1 = 0x30d,
	ACT_MP_GESTURE_VC_FINGERPOINT_ITEM1 = 0x30e,
	ACT_MP_GESTURE_VC_FISTPUMP_ITEM1 = 0x30f,
	ACT_MP_GESTURE_VC_THUMBSUP_ITEM1 = 0x310,
	ACT_MP_GESTURE_VC_NODYES_ITEM1 = 0x311,
	ACT_MP_GESTURE_VC_NODNO_ITEM1 = 0x312,
	ACT_MP_GESTURE_VC_HANDMOUTH_ITEM2 = 0x313,
	ACT_MP_GESTURE_VC_FINGERPOINT_ITEM2 = 0x314,
	ACT_MP_GESTURE_VC_FISTPUMP_ITEM2 = 0x315,
	ACT_MP_GESTURE_VC_THUMBSUP_ITEM2 = 0x316,
	ACT_MP_GESTURE_VC_NODYES_ITEM2 = 0x317,
	ACT_MP_GESTURE_VC_NODNO_ITEM2 = 0x318,
	ACT_MP_GESTURE_VC_HANDMOUTH_BUILDING = 0x319,
	ACT_MP_GESTURE_VC_FINGERPOINT_BUILDING = 0x31a,
	ACT_MP_GESTURE_VC_FISTPUMP_BUILDING = 0x31b,
	ACT_MP_GESTURE_VC_THUMBSUP_BUILDING = 0x31c,
	ACT_MP_GESTURE_VC_NODYES_BUILDING = 0x31d,
	ACT_MP_GESTURE_VC_NODNO_BUILDING = 0x31e,
	ACT_MP_GESTURE_VC_HANDMOUTH_PDA = 0x31f,
	ACT_MP_GESTURE_VC_FINGERPOINT_PDA = 0x320,
	ACT_MP_GESTURE_VC_FISTPUMP_PDA = 0x321,
	ACT_MP_GESTURE_VC_THUMBSUP_PDA = 0x322,
	ACT_MP_GESTURE_VC_NODYES_PDA = 0x323,
	ACT_MP_GESTURE_VC_NODNO_PDA = 0x324,
	ACT_VM_UNUSABLE = 0x325,
	ACT_VM_UNUSABLE_TO_USABLE = 0x326,
	ACT_VM_USABLE_TO_UNUSABLE = 0x327,
	ACT_PRIMARY_VM_DRAW = 0x328,
	ACT_PRIMARY_VM_HOLSTER = 0x329,
	ACT_PRIMARY_VM_IDLE = 0x32a,
	ACT_PRIMARY_VM_PULLBACK = 0x32b,
	ACT_PRIMARY_VM_PRIMARYATTACK = 0x32c,
	ACT_PRIMARY_VM_SECONDARYATTACK = 0x32d,
	ACT_PRIMARY_VM_RELOAD = 0x32e,
	ACT_PRIMARY_VM_DRYFIRE = 0x32f,
	ACT_PRIMARY_VM_IDLE_TO_LOWERED = 0x330,
	ACT_PRIMARY_VM_IDLE_LOWERED = 0x331,
	ACT_PRIMARY_VM_LOWERED_TO_IDLE = 0x332,
	ACT_SECONDARY_VM_DRAW = 0x333,
	ACT_SECONDARY_VM_HOLSTER = 0x334,
	ACT_SECONDARY_VM_IDLE = 0x335,
	ACT_SECONDARY_VM_PULLBACK = 0x336,
	ACT_SECONDARY_VM_PRIMARYATTACK = 0x337,
	ACT_SECONDARY_VM_SECONDARYATTACK = 0x338,
	ACT_SECONDARY_VM_RELOAD = 0x339,
	ACT_SECONDARY_VM_DRYFIRE = 0x33a,
	ACT_SECONDARY_VM_IDLE_TO_LOWERED = 0x33b,
	ACT_SECONDARY_VM_IDLE_LOWERED = 0x33c,
	ACT_SECONDARY_VM_LOWERED_TO_IDLE = 0x33d,
	ACT_MELEE_VM_DRAW = 0x33e,
	ACT_MELEE_VM_HOLSTER = 0x33f,
	ACT_MELEE_VM_IDLE = 0x340,
	ACT_MELEE_VM_PULLBACK = 0x341,
	ACT_MELEE_VM_PRIMARYATTACK = 0x342,
	ACT_MELEE_VM_SECONDARYATTACK = 0x343,
	ACT_MELEE_VM_RELOAD = 0x344,
	ACT_MELEE_VM_DRYFIRE = 0x345,
	ACT_MELEE_VM_IDLE_TO_LOWERED = 0x346,
	ACT_MELEE_VM_IDLE_LOWERED = 0x347,
	ACT_MELEE_VM_LOWERED_TO_IDLE = 0x348,
	ACT_PDA_VM_DRAW = 0x349,
	ACT_PDA_VM_HOLSTER = 0x34a,
	ACT_PDA_VM_IDLE = 0x34b,
	ACT_PDA_VM_PULLBACK = 0x34c,
	ACT_PDA_VM_PRIMARYATTACK = 0x34d,
	ACT_PDA_VM_SECONDARYATTACK = 0x34e,
	ACT_PDA_VM_RELOAD = 0x34f,
	ACT_PDA_VM_DRYFIRE = 0x350,
	ACT_PDA_VM_IDLE_TO_LOWERED = 0x351,
	ACT_PDA_VM_IDLE_LOWERED = 0x352,
	ACT_PDA_VM_LOWERED_TO_IDLE = 0x353,
	ACT_ITEM1_VM_DRAW = 0x354,
	ACT_ITEM1_VM_HOLSTER = 0x355,
	ACT_ITEM1_VM_IDLE = 0x356,
	ACT_ITEM1_VM_PULLBACK = 0x357,
	ACT_ITEM1_VM_PRIMARYATTACK = 0x358,
	ACT_ITEM1_VM_SECONDARYATTACK = 0x359,
	ACT_ITEM1_VM_RELOAD = 0x35a,
	ACT_ITEM1_VM_DRYFIRE = 0x35b,
	ACT_ITEM1_VM_IDLE_TO_LOWERED = 0x35c,
	ACT_ITEM1_VM_IDLE_LOWERED = 0x35d,
	ACT_ITEM1_VM_LOWERED_TO_IDLE = 0x35e,
	ACT_ITEM2_VM_DRAW = 0x35f,
	ACT_ITEM2_VM_HOLSTER = 0x360,
	ACT_ITEM2_VM_IDLE = 0x361,
	ACT_ITEM2_VM_PULLBACK = 0x362,
	ACT_ITEM2_VM_PRIMARYATTACK = 0x363,
	ACT_ITEM2_VM_SECONDARYATTACK = 0x364,
	ACT_ITEM2_VM_RELOAD = 0x365,
	ACT_ITEM2_VM_DRYFIRE = 0x366,
	ACT_ITEM2_VM_IDLE_TO_LOWERED = 0x367,
	ACT_ITEM2_VM_IDLE_LOWERED = 0x368,
	ACT_ITEM2_VM_LOWERED_TO_IDLE = 0x369,
	ACT_RELOAD_SUCCEED = 0x36a,
	ACT_RELOAD_FAIL = 0x36b,
	ACT_WALK_AIM_AUTOGUN = 0x36c,
	ACT_RUN_AIM_AUTOGUN = 0x36d,
	ACT_IDLE_AUTOGUN = 0x36e,
	ACT_IDLE_AIM_AUTOGUN = 0x36f,
	ACT_RELOAD_AUTOGUN = 0x370,
	ACT_CROUCH_IDLE_AUTOGUN = 0x371,
	ACT_RANGE_ATTACK_AUTOGUN = 0x372,
	ACT_JUMP_AUTOGUN = 0x373,
	ACT_IDLE_AIM_PISTOL = 0x374,
	ACT_WALK_AIM_DUAL = 0x375,
	ACT_RUN_AIM_DUAL = 0x376,
	ACT_IDLE_DUAL = 0x377,
	ACT_IDLE_AIM_DUAL = 0x378,
	ACT_RELOAD_DUAL = 0x379,
	ACT_CROUCH_IDLE_DUAL = 0x37a,
	ACT_RANGE_ATTACK_DUAL = 0x37b,
	ACT_JUMP_DUAL = 0x37c,
	ACT_IDLE_AIM_SHOTGUN = 0x37d,
	ACT_CROUCH_IDLE_SHOTGUN = 0x37e,
	ACT_IDLE_AIM_RIFLE = 0x37f,
	ACT_CROUCH_IDLE_RIFLE = 0x380,
	ACT_RANGE_ATTACK_RIFLE = 0x381,
	ACT_SLEEP = 0x382,
	ACT_WAKE = 0x383,
	ACT_FLICK_LEFT = 0x384,
	ACT_FLICK_LEFT_MIDDLE = 0x385,
	ACT_FLICK_RIGHT_MIDDLE = 0x386,
	ACT_FLICK_RIGHT = 0x387,
	ACT_SPINAROUND = 0x388,
	ACT_PREP_TO_FIRE = 0x389,
	ACT_FIRE = 0x38a,
	ACT_FIRE_RECOVER = 0x38b,
	ACT_SPRAY = 0x38c,
	ACT_PREP_EXPLODE = 0x38d,
	ACT_EXPLODE = 0x38e,
	ACT_SCRIPT_CUSTOM_0 = 0x38f,
	ACT_SCRIPT_CUSTOM_1 = 0x390,
	ACT_SCRIPT_CUSTOM_2 = 0x391,
	ACT_SCRIPT_CUSTOM_3 = 0x392,
	ACT_SCRIPT_CUSTOM_4 = 0x393,
	ACT_SCRIPT_CUSTOM_5 = 0x394,
	ACT_SCRIPT_CUSTOM_6 = 0x395,
	ACT_SCRIPT_CUSTOM_7 = 0x396,
	ACT_SCRIPT_CUSTOM_8 = 0x397,
	ACT_SCRIPT_CUSTOM_9 = 0x398,
	ACT_SCRIPT_CUSTOM_10 = 0x399,
	ACT_SCRIPT_CUSTOM_11 = 0x39a,
	ACT_SCRIPT_CUSTOM_12 = 0x39b,
	ACT_SCRIPT_CUSTOM_13 = 0x39c,
	ACT_SCRIPT_CUSTOM_14 = 0x39d,
	ACT_SCRIPT_CUSTOM_15 = 0x39e,
	ACT_SCRIPT_CUSTOM_16 = 0x39f,
	ACT_SCRIPT_CUSTOM_17 = 0x3a0,
	ACT_SCRIPT_CUSTOM_18 = 0x3a1,
	ACT_SCRIPT_CUSTOM_19 = 0x3a2,
	ACT_SCRIPT_CUSTOM_20 = 0x3a3,
	ACT_SCRIPT_CUSTOM_21 = 0x3a4,
	ACT_SCRIPT_CUSTOM_22 = 0x3a5,
	ACT_SCRIPT_CUSTOM_23 = 0x3a6,
	ACT_SCRIPT_CUSTOM_24 = 0x3a7,
	ACT_SCRIPT_CUSTOM_25 = 0x3a8,
	ACT_SCRIPT_CUSTOM_26 = 0x3a9,
	ACT_SCRIPT_CUSTOM_27 = 0x3aa,
	ACT_SCRIPT_CUSTOM_28 = 0x3ab,
	ACT_SCRIPT_CUSTOM_29 = 0x3ac,
	ACT_SCRIPT_CUSTOM_30 = 0x3ad,
	ACT_SCRIPT_CUSTOM_31 = 0x3ae,
	ACT_VR_PISTOL_LAST_SHOT = 0x3af,
	ACT_VR_PISTOL_SLIDE_RELEASE = 0x3b0,
	ACT_VR_PISTOL_CLIP_OUT_CHAMBERED = 0x3b1,
	ACT_VR_PISTOL_CLIP_OUT_SLIDE_BACK = 0x3b2,
	ACT_VR_PISTOL_CLIP_IN_CHAMBERED = 0x3b3,
	ACT_VR_PISTOL_CLIP_IN_SLIDE_BACK = 0x3b4,
	ACT_VR_PISTOL_IDLE_SLIDE_BACK = 0x3b5,
	ACT_VR_PISTOL_IDLE_SLIDE_BACK_CLIP_READY = 0x3b6,
	ACT_RAGDOLL_RECOVERY_FRONT = 0x3b7,
	ACT_RAGDOLL_RECOVERY_BACK = 0x3b8,
	ACT_RAGDOLL_RECOVERY_LEFT = 0x3b9,
	ACT_RAGDOLL_RECOVERY_RIGHT = 0x3ba,
	ACT_GRABBITYGLOVES_GRAB = 0x3bb,
	ACT_GRABBITYGLOVES_RELEASE = 0x3bc,
	ACT_GRABBITYGLOVES_GRAB_IDLE = 0x3bd,
	ACT_GRABBITYGLOVES_ACTIVE = 0x3be,
	ACT_GRABBITYGLOVES_ACTIVE_IDLE = 0x3bf,
	ACT_GRABBITYGLOVES_DEACTIVATE = 0x3c0,
	ACT_GRABBITYGLOVES_PULL = 0x3c1,
	ACT_HEADCRAB_SMOKE_BOMB = 0x3c2,
	ACT_HEADCRAB_SPIT = 0x3c3,
	ACT_ZOMBIE_TRIP = 0x3c4,
	ACT_ZOMBIE_LUNGE = 0x3c5,
	ACT_NEUTRAL_REF_POSE = 0x3c6,
	ACT_ANTLION_SCUTTLE_FORWARD = 0x3c7,
	ACT_ANTLION_SCUTTLE_BACK = 0x3c8,
	ACT_ANTLION_SCUTTLE_LEFT = 0x3c9,
	ACT_ANTLION_SCUTTLE_RIGHT = 0x3ca,
	ACT_VR_PISTOL_EMPTY_CLIP_IN_SLIDE_BACK = 0x3cb,
	ACT_VR_SHOTGUN_IDLE = 0x3cc,
	ACT_VR_SHOTGUN_OPEN_CHAMBER = 0x3cd,
	ACT_VR_SHOTGUN_RELOAD_1 = 0x3ce,
	ACT_VR_SHOTGUN_RELOAD_2 = 0x3cf,
	ACT_VR_SHOTGUN_RELOAD_3 = 0x3d0,
	ACT_VR_SHOTGUN_CLOSE_CHAMBER = 0x3d1,
	ACT_VR_SHOTGUN_TRIGGER_SQUEEZE = 0x3d2,
	ACT_VR_SHOTGUN_SHOOT = 0x3d3,
	ACT_VR_SHOTGUN_SLIDE_BACK = 0x3d4,
	ACT_VR_SHOTGUN_SLIDE_FORWARD = 0x3d5,
	ACT_VR_PISTOL_LONG_CLIP_IN_CHAMBERED = 0x3d6,
	ACT_VR_PISTOL_LONG_CLIP_IN_SLIDE_BACK = 0x3d7,
	ACT_VR_PISTOL_BURST_TOGGLE = 0x3d8,
	ACT_VR_PISTOL_LOW_KICK = 0x3d9,
	ACT_VR_PISTOL_BURST_ATTACK = 0x3da,
	ACT_VR_SHOTGUN_GRENADE_TWIST = 0x3db,
	ACT_DIE_STAND = 0x3dc,
	ACT_DIE_STAND_HEADSHOT = 0x3dd,
	ACT_DIE_CROUCH = 0x3de,
	ACT_DIE_CROUCH_HEADSHOT = 0x3df,
	ACT_CSGO_NULL = 0x3e0,
	ACT_CSGO_DEFUSE = 0x3e1,
	ACT_CSGO_DEFUSE_WITH_KIT = 0x3e2,
	ACT_CSGO_FLASHBANG_REACTION = 0x3e3,
	ACT_CSGO_FIRE_PRIMARY = 0x3e4,
	ACT_CSGO_FIRE_PRIMARY_OPT_1 = 0x3e5,
	ACT_CSGO_FIRE_PRIMARY_OPT_2 = 0x3e6,
	ACT_CSGO_FIRE_SECONDARY = 0x3e7,
	ACT_CSGO_FIRE_SECONDARY_OPT_1 = 0x3e8,
	ACT_CSGO_FIRE_SECONDARY_OPT_2 = 0x3e9,
	ACT_CSGO_RELOAD = 0x3ea,
	ACT_CSGO_RELOAD_START = 0x3eb,
	ACT_CSGO_RELOAD_LOOP = 0x3ec,
	ACT_CSGO_RELOAD_END = 0x3ed,
	ACT_CSGO_OPERATE = 0x3ee,
	ACT_CSGO_DEPLOY = 0x3ef,
	ACT_CSGO_CATCH = 0x3f0,
	ACT_CSGO_SILENCER_DETACH = 0x3f1,
	ACT_CSGO_SILENCER_ATTACH = 0x3f2,
	ACT_CSGO_TWITCH = 0x3f3,
	ACT_CSGO_TWITCH_BUYZONE = 0x3f4,
	ACT_CSGO_PLANT_BOMB = 0x3f5,
	ACT_CSGO_IDLE_TURN_BALANCEADJUST = 0x3f6,
	ACT_CSGO_IDLE_ADJUST_STOPPEDMOVING = 0x3f7,
	ACT_CSGO_ALIVE_LOOP = 0x3f8,
	ACT_CSGO_FLINCH = 0x3f9,
	ACT_CSGO_FLINCH_HEAD = 0x3fa,
	ACT_CSGO_FLINCH_MOLOTOV = 0x3fb,
	ACT_CSGO_JUMP = 0x3fc,
	ACT_CSGO_FALL = 0x3fd,
	ACT_CSGO_CLIMB_LADDER = 0x3fe,
	ACT_CSGO_LAND_LIGHT = 0x3ff,
	ACT_CSGO_LAND_HEAVY = 0x400,
	ACT_CSGO_EXIT_LADDER_TOP = 0x401,
	ACT_CSGO_EXIT_LADDER_BOTTOM = 0x402,
	ACT_CSGO_PARACHUTE = 0x403,
	ACT_CSGO_TAUNT = 0x404,
};

// Aligment: 4
// Size: 30
enum class SVC_Messages : uint32_t
{
	svc_ServerInfo = 0x28,
	svc_FlattenedSerializer = 0x29,
	svc_ClassInfo = 0x2a,
	svc_SetPause = 0x2b,
	svc_CreateStringTable = 0x2c,
	svc_UpdateStringTable = 0x2d,
	svc_VoiceInit = 0x2e,
	svc_VoiceData = 0x2f,
	svc_Print = 0x30,
	svc_Sounds = 0x31,
	svc_SetView = 0x32,
	svc_ClearAllStringTables = 0x33,
	svc_CmdKeyValues = 0x34,
	svc_BSPDecal = 0x35,
	svc_SplitScreen = 0x36,
	svc_PacketEntities = 0x37,
	svc_Prefetch = 0x38,
	svc_Menu = 0x39,
	svc_GetCvarValue = 0x3a,
	svc_StopSound = 0x3b,
	svc_PeerList = 0x3c,
	svc_PacketReliable = 0x3d,
	svc_HLTVStatus = 0x3e,
	svc_ServerSteamID = 0x3f,
	svc_FullFrameSplit = 0x46,
	svc_RconServerDetails = 0x47,
	svc_UserMessage = 0x48,
	svc_HltvReplay = 0x49,
	svc_Broadcast_Command = 0x4a,
	svc_HltvFixupOperatorStatus = 0x4b,
};

// Aligment: 4
// Size: 5
enum class IBody::PostureType : uint32_t
{
	STAND = 0x0,
	CROUCH = 0x1,
	SIT = 0x2,
	CRAWL = 0x3,
	LIE = 0x4,
};

// Aligment: 4
// Size: 5
enum class CHeadLookParams::HeadLookPriority_t : uint32_t
{
	BORING = 0x0,
	INTERESTING = 0x1,
	IMPORTANT = 0x2,
	CRITICAL = 0x3,
	MANDATORY = 0x4,
};

// Aligment: 4
// Size: 3
enum class CreatureAbilityType : uint32_t
{
	CREATURE_ABILITY_OFFENSIVE = 0x0,
	CREATURE_ABILITY_DEFENSIVE = 0x1,
	CREATURE_ABILITY_ESCAPE = 0x2,
};

// Aligment: 4
// Size: 3
enum class DOTALobbyReadyState : uint32_t
{
	DOTALobbyReadyState_UNDECLARED = 0x0,
	DOTALobbyReadyState_ACCEPTED = 0x1,
	DOTALobbyReadyState_DECLINED = 0x2,
};

// Aligment: 4
// Size: 5
enum class LifeState_t : uint32_t
{
	LIFE_ALIVE = 0x0,
	LIFE_DYING = 0x1,
	LIFE_DEAD = 0x2,
	LIFE_RESPAWNABLE = 0x3,
	LIFE_RESPAWNING = 0x4,
};

// Aligment: 1
// Size: 9
enum class SurroundingBoundsType_t : uint8_t
{
	USE_OBB_COLLISION_BOUNDS = 0,
	USE_BEST_COLLISION_BOUNDS = 1,
	USE_HITBOXES = 2,
	USE_SPECIFIED_BOUNDS = 3,
	USE_GAME_CODE = 4,
	USE_ROTATION_EXPANDED_BOUNDS = 5,
	USE_COLLISION_BOUNDS_NEVER_VPHYSICS = 6,
	USE_ROTATION_EXPANDED_SEQUENCE_BOUNDS = 7,
	SURROUNDING_TYPE_BIT_COUNT = 3,
};

// Aligment: 4
// Size: 3
enum class DOTAUnitMoveCapability_t : uint32_t
{
	DOTA_UNIT_CAP_MOVE_NONE = 0x0,
	DOTA_UNIT_CAP_MOVE_GROUND = 0x1,
	DOTA_UNIT_CAP_MOVE_FLY = 0x2,
};

// Aligment: 4
// Size: 22
enum class EDOTA_ModifyGold_Reason : uint32_t
{
	DOTA_ModifyGold_Unspecified = 0x0,
	DOTA_ModifyGold_Death = 0x1,
	DOTA_ModifyGold_Buyback = 0x2,
	DOTA_ModifyGold_PurchaseConsumable = 0x3,
	DOTA_ModifyGold_PurchaseItem = 0x4,
	DOTA_ModifyGold_AbandonedRedistribute = 0x5,
	DOTA_ModifyGold_SellItem = 0x6,
	DOTA_ModifyGold_AbilityCost = 0x7,
	DOTA_ModifyGold_CheatCommand = 0x8,
	DOTA_ModifyGold_SelectionPenalty = 0x9,
	DOTA_ModifyGold_GameTick = 0xa,
	DOTA_ModifyGold_Building = 0xb,
	DOTA_ModifyGold_HeroKill = 0xc,
	DOTA_ModifyGold_CreepKill = 0xd,
	DOTA_ModifyGold_NeutralKill = 0xe,
	DOTA_ModifyGold_RoshanKill = 0xf,
	DOTA_ModifyGold_CourierKill = 0x10,
	DOTA_ModifyGold_BountyRune = 0x11,
	DOTA_ModifyGold_SharedGold = 0x12,
	DOTA_ModifyGold_AbilityGold = 0x13,
	DOTA_ModifyGold_WardKill = 0x14,
	DOTA_ModifyGold_CourierKilledByThisPlayer = 0x15,
};

// Aligment: 4
// Size: 5
enum class Fantasy_Team_Slots : uint32_t
{
	FANTASY_SLOT_NONE = 0x0,
	FANTASY_SLOT_CORE = 0x1,
	FANTASY_SLOT_SUPPORT = 0x2,
	FANTASY_SLOT_ANY = 0x3,
	FANTASY_SLOT_BENCH = 0x4,
};

// Aligment: 1
// Size: 9
enum class ItemFlagTypes_t : uint8_t
{
	ITEM_FLAG_NONE = 0,
	ITEM_FLAG_CAN_SELECT_WITHOUT_AMMO = 1,
	ITEM_FLAG_NOAUTORELOAD = 2,
	ITEM_FLAG_NOAUTOSWITCHEMPTY = 4,
	ITEM_FLAG_LIMITINWORLD = 8,
	ITEM_FLAG_EXHAUSTIBLE = 16,
	ITEM_FLAG_DOHITLOCATIONDMG = 32,
	ITEM_FLAG_NOAMMOPICKUPS = 64,
	ITEM_FLAG_NOITEMPICKUP = 128,
};

// Aligment: 4
// Size: 9
enum class DOTA_SHOP_TYPE : uint32_t
{
	DOTA_SHOP_HOME = 0x0,
	DOTA_SHOP_SIDE = 0x1,
	DOTA_SHOP_SECRET = 0x2,
	DOTA_SHOP_GROUND = 0x3,
	DOTA_SHOP_SIDE2 = 0x4,
	DOTA_SHOP_SECRET2 = 0x5,
	DOTA_SHOP_CUSTOM = 0x6,
	DOTA_SHOP_NEUTRALS = 0x7,
	DOTA_SHOP_NONE = 0x8,
};

// Aligment: 4
// Size: 53
enum class modifierstate : uint32_t
{
	MODIFIER_STATE_ROOTED = 0x0,
	MODIFIER_STATE_DISARMED = 0x1,
	MODIFIER_STATE_ATTACK_IMMUNE = 0x2,
	MODIFIER_STATE_SILENCED = 0x3,
	MODIFIER_STATE_MUTED = 0x4,
	MODIFIER_STATE_STUNNED = 0x5,
	MODIFIER_STATE_HEXED = 0x6,
	MODIFIER_STATE_INVISIBLE = 0x7,
	MODIFIER_STATE_INVULNERABLE = 0x8,
	MODIFIER_STATE_MAGIC_IMMUNE = 0x9,
	MODIFIER_STATE_PROVIDES_VISION = 0xa,
	MODIFIER_STATE_NIGHTMARED = 0xb,
	MODIFIER_STATE_BLOCK_DISABLED = 0xc,
	MODIFIER_STATE_EVADE_DISABLED = 0xd,
	MODIFIER_STATE_UNSELECTABLE = 0xe,
	MODIFIER_STATE_CANNOT_TARGET_ENEMIES = 0xf,
	MODIFIER_STATE_CANNOT_TARGET_BUILDINGS = 0x10,
	MODIFIER_STATE_CANNOT_MISS = 0x11,
	MODIFIER_STATE_SPECIALLY_DENIABLE = 0x12,
	MODIFIER_STATE_FROZEN = 0x13,
	MODIFIER_STATE_COMMAND_RESTRICTED = 0x14,
	MODIFIER_STATE_NOT_ON_MINIMAP = 0x15,
	MODIFIER_STATE_LOW_ATTACK_PRIORITY = 0x16,
	MODIFIER_STATE_NO_HEALTH_BAR = 0x17,
	MODIFIER_STATE_NO_HEALTH_BAR_FOR_ENEMIES = 0x18,
	MODIFIER_STATE_FLYING = 0x19,
	MODIFIER_STATE_NO_UNIT_COLLISION = 0x1a,
	MODIFIER_STATE_NO_TEAM_MOVE_TO = 0x1b,
	MODIFIER_STATE_NO_TEAM_SELECT = 0x1c,
	MODIFIER_STATE_PASSIVES_DISABLED = 0x1d,
	MODIFIER_STATE_DOMINATED = 0x1e,
	MODIFIER_STATE_BLIND = 0x1f,
	MODIFIER_STATE_OUT_OF_GAME = 0x20,
	MODIFIER_STATE_FAKE_ALLY = 0x21,
	MODIFIER_STATE_FLYING_FOR_PATHING_PURPOSES_ONLY = 0x22,
	MODIFIER_STATE_TRUESIGHT_IMMUNE = 0x23,
	MODIFIER_STATE_UNTARGETABLE = 0x24,
	MODIFIER_STATE_IGNORING_MOVE_AND_ATTACK_ORDERS = 0x25,
	MODIFIER_STATE_ALLOW_PATHING_THROUGH_TREES = 0x26,
	MODIFIER_STATE_NOT_ON_MINIMAP_FOR_ENEMIES = 0x27,
	MODIFIER_STATE_UNSLOWABLE = 0x28,
	MODIFIER_STATE_TETHERED = 0x29,
	MODIFIER_STATE_IGNORING_STOP_ORDERS = 0x2a,
	MODIFIER_STATE_FEARED = 0x2b,
	MODIFIER_STATE_TAUNTED = 0x2c,
	MODIFIER_STATE_CANNOT_BE_MOTION_CONTROLLED = 0x2d,
	MODIFIER_STATE_FORCED_FLYING_VISION = 0x2e,
	MODIFIER_STATE_ATTACK_ALLIES = 0x2f,
	MODIFIER_STATE_ALLOW_PATHING_THROUGH_CLIFFS = 0x30,
	MODIFIER_STATE_ALLOW_PATHING_THROUGH_FISSURE = 0x31,
	MODIFIER_STATE_SPECIALLY_UNDENIABLE = 0x32,
	MODIFIER_STATE_ALLOW_PATHING_THROUGH_OBSTRUCTIONS = 0x33,
	MODIFIER_STATE_LAST = 0x34,
};

// Aligment: 4
// Size: 4
enum class TrainOrientationType_t : uint32_t
{
	TrainOrientation_Fixed = 0x0,
	TrainOrientation_AtPathTracks = 0x1,
	TrainOrientation_LinearBlend = 0x2,
	TrainOrientation_EaseInEaseOut = 0x3,
};

// Aligment: 4
// Size: 4
enum class EPingSource : uint32_t
{
	k_ePingSource_Default = 0x0,
	k_ePingSource_Warning = 0x1,
	k_ePingSource_Wheel = 0x2,
	k_ePingSource_System = 0x3,
};

// Aligment: 4
// Size: 8
enum class DOTALimits_t : uint32_t
{
	DOTA_MAX_PLAYERS = 0x40,
	DOTA_MAX_TEAM = 0x18,
	DOTA_MAX_PLAYER_TEAMS = 0xa,
	DOTA_MAX_TEAM_PLAYERS = 0x18,
	DOTA_MAX_SPECTATOR_TEAM_SIZE = 0x28,
	DOTA_MAX_SPECTATOR_LOBBY_SIZE = 0xf,
	DOTA_DEFAULT_MAX_TEAM = 0x5,
	DOTA_DEFAULT_MAX_TEAM_PLAYERS = 0xa,
};

// Aligment: 4
// Size: 19
enum class DOTADamageFlag_t : uint32_t
{
	DOTA_DAMAGE_FLAG_NONE = 0x0,
	DOTA_DAMAGE_FLAG_IGNORES_MAGIC_ARMOR = 0x1,
	DOTA_DAMAGE_FLAG_IGNORES_PHYSICAL_ARMOR = 0x2,
	DOTA_DAMAGE_FLAG_BYPASSES_INVULNERABILITY = 0x4,
	DOTA_DAMAGE_FLAG_BYPASSES_BLOCK = 0x8,
	DOTA_DAMAGE_FLAG_REFLECTION = 0x10,
	DOTA_DAMAGE_FLAG_HPLOSS = 0x20,
	DOTA_DAMAGE_FLAG_NO_DIRECTOR_EVENT = 0x40,
	DOTA_DAMAGE_FLAG_NON_LETHAL = 0x80,
	DOTA_DAMAGE_FLAG_USE_COMBAT_PROFICIENCY = 0x100,
	DOTA_DAMAGE_FLAG_NO_DAMAGE_MULTIPLIERS = 0x200,
	DOTA_DAMAGE_FLAG_NO_SPELL_AMPLIFICATION = 0x400,
	DOTA_DAMAGE_FLAG_DONT_DISPLAY_DAMAGE_IF_SOURCE_HIDDEN = 0x800,
	DOTA_DAMAGE_FLAG_NO_SPELL_LIFESTEAL = 0x1000,
	DOTA_DAMAGE_FLAG_PROPERTY_FIRE = 0x2000,
	DOTA_DAMAGE_FLAG_IGNORES_BASE_PHYSICAL_ARMOR = 0x4000,
	DOTA_DAMAGE_FLAG_SECONDARY_PROJECTILE_ATTACK = 0x8000,
	DOTA_DAMAGE_FLAG_FORCE_SPELL_AMPLIFICATION = 0x10000,
	DOTA_DAMAGE_FLAG_MAGIC_AUTO_ATTACK = 0x20000,
};

// Aligment: 4
// Size: 19
enum class EDemoCommands : uint32_t
{
	DEM_Error = 0xffffffffffffffff,
	DEM_Stop = 0x0,
	DEM_FileHeader = 0x1,
	DEM_FileInfo = 0x2,
	DEM_SyncTick = 0x3,
	DEM_SendTables = 0x4,
	DEM_ClassInfo = 0x5,
	DEM_StringTables = 0x6,
	DEM_Packet = 0x7,
	DEM_SignonPacket = 0x8,
	DEM_ConsoleCmd = 0x9,
	DEM_CustomData = 0xa,
	DEM_CustomDataCallbacks = 0xb,
	DEM_UserCmd = 0xc,
	DEM_FullPacket = 0xd,
	DEM_SaveGame = 0xe,
	DEM_SpawnGroups = 0xf,
	DEM_Max = 0x10,
	DEM_IsCompressed = 0x40,
};

// Aligment: 4
// Size: 5
enum class ELeagueBroadcastProvider : uint32_t
{
	LEAGUE_BROADCAST_UNKNOWN = 0x0,
	LEAGUE_BROADCAST_STEAM = 0x1,
	LEAGUE_BROADCAST_TWITCH = 0x2,
	LEAGUE_BROADCAST_YOUTUBE = 0x3,
	LEAGUE_BROADCAST_OTHER = 0x64,
};

// Aligment: 1
// Size: 11
enum class CavernCrawlItemType_t : uint8_t
{
	CAVERN_CRAWL_ITEM_TYPE_INVALID = 255,
	CAVERN_CRAWL_ITEM_TYPE_KEY = 0,
	CAVERN_CRAWL_ITEM_TYPE_FLARE = 1,
	CAVERN_CRAWL_ITEM_TYPE_SWAP = 2,
	CAVERN_CRAWL_ITEM_TYPE_CULLING_BLADE = 3,
	CAVERN_CRAWL_ITEM_TYPE_SHOVEL = 4,
	CAVERN_CRAWL_ITEM_TYPE_COUNT = 5,
	CAVERN_CRAWL_ITEM_TYPE_FIRST_FAKE = 128,
	CAVERN_CRAWL_ITEM_TYPE_TREASURE_MAP = 128,
	CAVERN_CRAWL_ITEM_TYPE_AFTER_FAKES = 129,
	CAVERN_CRAWL_ITEM_TYPE_FAKE_COUNT = 1,
};

// Aligment: 4
// Size: 3
enum class DOTAMatchVote : uint32_t
{
	DOTAMatchVote_INVALID = 0x0,
	DOTAMatchVote_POSITIVE = 0x1,
	DOTAMatchVote_NEGATIVE = 0x2,
};

// Aligment: 4
// Size: 27
enum class DOTA_BOT_MODE : uint32_t
{
	DOTA_BOT_MODE_NONE = 0x0,
	DOTA_BOT_MODE_LANING = 0x1,
	DOTA_BOT_MODE_ATTACK = 0x2,
	DOTA_BOT_MODE_ROAM = 0x3,
	DOTA_BOT_MODE_RETREAT = 0x4,
	DOTA_BOT_MODE_SECRET_SHOP = 0x5,
	DOTA_BOT_MODE_SIDE_SHOP = 0x6,
	DOTA_BOT_MODE_RUNE = 0x7,
	DOTA_BOT_MODE_PUSH_TOWER_TOP = 0x8,
	DOTA_BOT_MODE_PUSH_TOWER_MID = 0x9,
	DOTA_BOT_MODE_PUSH_TOWER_BOT = 0xa,
	DOTA_BOT_MODE_DEFEND_TOWER_TOP = 0xb,
	DOTA_BOT_MODE_DEFEND_TOWER_MID = 0xc,
	DOTA_BOT_MODE_DEFEND_TOWER_BOT = 0xd,
	DOTA_BOT_MODE_ASSEMBLE = 0xe,
	DOTA_BOT_MODE_ASSEMBLE_WITH_HUMANS = 0xf,
	DOTA_BOT_MODE_TEAM_ROAM = 0x10,
	DOTA_BOT_MODE_FARM = 0x11,
	DOTA_BOT_MODE_DEFEND_ALLY = 0x12,
	DOTA_BOT_MODE_EVASIVE_MANEUVERS = 0x13,
	DOTA_BOT_MODE_ROSHAN = 0x14,
	DOTA_BOT_MODE_ITEM = 0x15,
	DOTA_BOT_MODE_WARD = 0x16,
	DOTA_BOT_MODE_COMPANION = 0x17,
	DOTA_BOT_MODE_TUTORIAL_BOSS = 0x18,
	DOTA_BOT_MODE_MINION = 0x19,
	DOTA_BOT_MODE_OUTPOST = 0x1a,
};

// Aligment: 4
// Size: 265
enum class GameActivity_t : uint32_t
{
	ACT_DOTA_IDLE = 0x5dc,
	ACT_DOTA_IDLE_RARE = 0x5dd,
	ACT_DOTA_RUN = 0x5de,
	ACT_DOTA_ATTACK = 0x5df,
	ACT_DOTA_ATTACK2 = 0x5e0,
	ACT_DOTA_ATTACK_EVENT = 0x5e1,
	ACT_DOTA_DIE = 0x5e2,
	ACT_DOTA_FLINCH = 0x5e3,
	ACT_DOTA_FLAIL = 0x5e4,
	ACT_DOTA_DISABLED = 0x5e5,
	ACT_DOTA_CAST_ABILITY_1 = 0x5e6,
	ACT_DOTA_CAST_ABILITY_2 = 0x5e7,
	ACT_DOTA_CAST_ABILITY_3 = 0x5e8,
	ACT_DOTA_CAST_ABILITY_4 = 0x5e9,
	ACT_DOTA_CAST_ABILITY_5 = 0x5ea,
	ACT_DOTA_CAST_ABILITY_6 = 0x5eb,
	ACT_DOTA_OVERRIDE_ABILITY_1 = 0x5ec,
	ACT_DOTA_OVERRIDE_ABILITY_2 = 0x5ed,
	ACT_DOTA_OVERRIDE_ABILITY_3 = 0x5ee,
	ACT_DOTA_OVERRIDE_ABILITY_4 = 0x5ef,
	ACT_DOTA_CHANNEL_ABILITY_1 = 0x5f0,
	ACT_DOTA_CHANNEL_ABILITY_2 = 0x5f1,
	ACT_DOTA_CHANNEL_ABILITY_3 = 0x5f2,
	ACT_DOTA_CHANNEL_ABILITY_4 = 0x5f3,
	ACT_DOTA_CHANNEL_ABILITY_5 = 0x5f4,
	ACT_DOTA_CHANNEL_ABILITY_6 = 0x5f5,
	ACT_DOTA_CHANNEL_END_ABILITY_1 = 0x5f6,
	ACT_DOTA_CHANNEL_END_ABILITY_2 = 0x5f7,
	ACT_DOTA_CHANNEL_END_ABILITY_3 = 0x5f8,
	ACT_DOTA_CHANNEL_END_ABILITY_4 = 0x5f9,
	ACT_DOTA_CHANNEL_END_ABILITY_5 = 0x5fa,
	ACT_DOTA_CHANNEL_END_ABILITY_6 = 0x5fb,
	ACT_DOTA_CONSTANT_LAYER = 0x5fc,
	ACT_DOTA_CAPTURE = 0x5fd,
	ACT_DOTA_SPAWN = 0x5fe,
	ACT_DOTA_KILLTAUNT = 0x5ff,
	ACT_DOTA_TAUNT = 0x600,
	ACT_DOTA_THIRST = 0x601,
	ACT_DOTA_CAST_DRAGONBREATH = 0x602,
	ACT_DOTA_ECHO_SLAM = 0x603,
	ACT_DOTA_CAST_ABILITY_1_END = 0x604,
	ACT_DOTA_CAST_ABILITY_2_END = 0x605,
	ACT_DOTA_CAST_ABILITY_3_END = 0x606,
	ACT_DOTA_CAST_ABILITY_4_END = 0x607,
	ACT_MIRANA_LEAP_END = 0x608,
	ACT_WAVEFORM_START = 0x609,
	ACT_WAVEFORM_END = 0x60a,
	ACT_DOTA_CAST_ABILITY_ROT = 0x60b,
	ACT_DOTA_DIE_SPECIAL = 0x60c,
	ACT_DOTA_RATTLETRAP_BATTERYASSAULT = 0x60d,
	ACT_DOTA_RATTLETRAP_POWERCOGS = 0x60e,
	ACT_DOTA_RATTLETRAP_HOOKSHOT_START = 0x60f,
	ACT_DOTA_RATTLETRAP_HOOKSHOT_LOOP = 0x610,
	ACT_DOTA_RATTLETRAP_HOOKSHOT_END = 0x611,
	ACT_STORM_SPIRIT_OVERLOAD_RUN_OVERRIDE = 0x612,
	ACT_DOTA_TINKER_REARM1 = 0x613,
	ACT_DOTA_TINKER_REARM2 = 0x614,
	ACT_DOTA_TINKER_REARM3 = 0x615,
	ACT_TINY_AVALANCHE = 0x616,
	ACT_TINY_TOSS = 0x617,
	ACT_TINY_GROWL = 0x618,
	ACT_DOTA_WEAVERBUG_ATTACH = 0x619,
	ACT_DOTA_CAST_WILD_AXES_END = 0x61a,
	ACT_DOTA_CAST_LIFE_BREAK_START = 0x61b,
	ACT_DOTA_CAST_LIFE_BREAK_END = 0x61c,
	ACT_DOTA_NIGHTSTALKER_TRANSITION = 0x61d,
	ACT_DOTA_LIFESTEALER_RAGE = 0x61e,
	ACT_DOTA_LIFESTEALER_OPEN_WOUNDS = 0x61f,
	ACT_DOTA_SAND_KING_BURROW_IN = 0x620,
	ACT_DOTA_SAND_KING_BURROW_OUT = 0x621,
	ACT_DOTA_EARTHSHAKER_TOTEM_ATTACK = 0x622,
	ACT_DOTA_WHEEL_LAYER = 0x623,
	ACT_DOTA_ALCHEMIST_CHEMICAL_RAGE_START = 0x624,
	ACT_DOTA_ALCHEMIST_CONCOCTION = 0x625,
	ACT_DOTA_JAKIRO_LIQUIDFIRE_START = 0x626,
	ACT_DOTA_JAKIRO_LIQUIDFIRE_LOOP = 0x627,
	ACT_DOTA_LIFESTEALER_INFEST = 0x628,
	ACT_DOTA_LIFESTEALER_INFEST_END = 0x629,
	ACT_DOTA_LASSO_LOOP = 0x62a,
	ACT_DOTA_ALCHEMIST_CONCOCTION_THROW = 0x62b,
	ACT_DOTA_ALCHEMIST_CHEMICAL_RAGE_END = 0x62c,
	ACT_DOTA_CAST_COLD_SNAP = 0x62d,
	ACT_DOTA_CAST_GHOST_WALK = 0x62e,
	ACT_DOTA_CAST_TORNADO = 0x62f,
	ACT_DOTA_CAST_EMP = 0x630,
	ACT_DOTA_CAST_ALACRITY = 0x631,
	ACT_DOTA_CAST_CHAOS_METEOR = 0x632,
	ACT_DOTA_CAST_SUN_STRIKE = 0x633,
	ACT_DOTA_CAST_FORGE_SPIRIT = 0x634,
	ACT_DOTA_CAST_ICE_WALL = 0x635,
	ACT_DOTA_CAST_DEAFENING_BLAST = 0x636,
	ACT_DOTA_VICTORY = 0x637,
	ACT_DOTA_DEFEAT = 0x638,
	ACT_DOTA_SPIRIT_BREAKER_CHARGE_POSE = 0x639,
	ACT_DOTA_SPIRIT_BREAKER_CHARGE_END = 0x63a,
	ACT_DOTA_TELEPORT = 0x63b,
	ACT_DOTA_TELEPORT_END = 0x63c,
	ACT_DOTA_CAST_REFRACTION = 0x63d,
	ACT_DOTA_CAST_ABILITY_7 = 0x63e,
	ACT_DOTA_CANCEL_SIREN_SONG = 0x63f,
	ACT_DOTA_CHANNEL_ABILITY_7 = 0x640,
	ACT_DOTA_LOADOUT = 0x641,
	ACT_DOTA_FORCESTAFF_END = 0x642,
	ACT_DOTA_POOF_END = 0x643,
	ACT_DOTA_SLARK_POUNCE = 0x644,
	ACT_DOTA_MAGNUS_SKEWER_START = 0x645,
	ACT_DOTA_MAGNUS_SKEWER_END = 0x646,
	ACT_DOTA_MEDUSA_STONE_GAZE = 0x647,
	ACT_DOTA_RELAX_START = 0x648,
	ACT_DOTA_RELAX_LOOP = 0x649,
	ACT_DOTA_RELAX_END = 0x64a,
	ACT_DOTA_CENTAUR_STAMPEDE = 0x64b,
	ACT_DOTA_BELLYACHE_START = 0x64c,
	ACT_DOTA_BELLYACHE_LOOP = 0x64d,
	ACT_DOTA_BELLYACHE_END = 0x64e,
	ACT_DOTA_ROQUELAIRE_LAND = 0x64f,
	ACT_DOTA_ROQUELAIRE_LAND_IDLE = 0x650,
	ACT_DOTA_GREEVIL_CAST = 0x651,
	ACT_DOTA_GREEVIL_OVERRIDE_ABILITY = 0x652,
	ACT_DOTA_GREEVIL_HOOK_START = 0x653,
	ACT_DOTA_GREEVIL_HOOK_END = 0x654,
	ACT_DOTA_GREEVIL_BLINK_BONE = 0x655,
	ACT_DOTA_IDLE_SLEEPING = 0x656,
	ACT_DOTA_INTRO = 0x657,
	ACT_DOTA_GESTURE_POINT = 0x658,
	ACT_DOTA_GESTURE_ACCENT = 0x659,
	ACT_DOTA_SLEEPING_END = 0x65a,
	ACT_DOTA_AMBUSH = 0x65b,
	ACT_DOTA_ITEM_LOOK = 0x65c,
	ACT_DOTA_STARTLE = 0x65d,
	ACT_DOTA_FRUSTRATION = 0x65e,
	ACT_DOTA_TELEPORT_REACT = 0x65f,
	ACT_DOTA_TELEPORT_END_REACT = 0x660,
	ACT_DOTA_SHRUG = 0x661,
	ACT_DOTA_RELAX_LOOP_END = 0x662,
	ACT_DOTA_PRESENT_ITEM = 0x663,
	ACT_DOTA_IDLE_IMPATIENT = 0x664,
	ACT_DOTA_SHARPEN_WEAPON = 0x665,
	ACT_DOTA_SHARPEN_WEAPON_OUT = 0x666,
	ACT_DOTA_IDLE_SLEEPING_END = 0x667,
	ACT_DOTA_BRIDGE_DESTROY = 0x668,
	ACT_DOTA_TAUNT_SNIPER = 0x669,
	ACT_DOTA_DEATH_BY_SNIPER = 0x66a,
	ACT_DOTA_LOOK_AROUND = 0x66b,
	ACT_DOTA_CAGED_CREEP_RAGE = 0x66c,
	ACT_DOTA_CAGED_CREEP_RAGE_OUT = 0x66d,
	ACT_DOTA_CAGED_CREEP_SMASH = 0x66e,
	ACT_DOTA_CAGED_CREEP_SMASH_OUT = 0x66f,
	ACT_DOTA_IDLE_IMPATIENT_SWORD_TAP = 0x670,
	ACT_DOTA_INTRO_LOOP = 0x671,
	ACT_DOTA_BRIDGE_THREAT = 0x672,
	ACT_DOTA_DAGON = 0x673,
	ACT_DOTA_CAST_ABILITY_2_ES_ROLL_START = 0x674,
	ACT_DOTA_CAST_ABILITY_2_ES_ROLL = 0x675,
	ACT_DOTA_CAST_ABILITY_2_ES_ROLL_END = 0x676,
	ACT_DOTA_NIAN_PIN_START = 0x677,
	ACT_DOTA_NIAN_PIN_LOOP = 0x678,
	ACT_DOTA_NIAN_PIN_END = 0x679,
	ACT_DOTA_LEAP_STUN = 0x67a,
	ACT_DOTA_LEAP_SWIPE = 0x67b,
	ACT_DOTA_NIAN_INTRO_LEAP = 0x67c,
	ACT_DOTA_AREA_DENY = 0x67d,
	ACT_DOTA_NIAN_PIN_TO_STUN = 0x67e,
	ACT_DOTA_RAZE_1 = 0x67f,
	ACT_DOTA_RAZE_2 = 0x680,
	ACT_DOTA_RAZE_3 = 0x681,
	ACT_DOTA_UNDYING_DECAY = 0x682,
	ACT_DOTA_UNDYING_SOUL_RIP = 0x683,
	ACT_DOTA_UNDYING_TOMBSTONE = 0x684,
	ACT_DOTA_WHIRLING_AXES_RANGED = 0x685,
	ACT_DOTA_SHALLOW_GRAVE = 0x686,
	ACT_DOTA_COLD_FEET = 0x687,
	ACT_DOTA_ICE_VORTEX = 0x688,
	ACT_DOTA_CHILLING_TOUCH = 0x689,
	ACT_DOTA_ENFEEBLE = 0x68a,
	ACT_DOTA_FATAL_BONDS = 0x68b,
	ACT_DOTA_MIDNIGHT_PULSE = 0x68c,
	ACT_DOTA_ANCESTRAL_SPIRIT = 0x68d,
	ACT_DOTA_THUNDER_STRIKE = 0x68e,
	ACT_DOTA_KINETIC_FIELD = 0x68f,
	ACT_DOTA_STATIC_STORM = 0x690,
	ACT_DOTA_MINI_TAUNT = 0x691,
	ACT_DOTA_ARCTIC_BURN_END = 0x692,
	ACT_DOTA_LOADOUT_RARE = 0x693,
	ACT_DOTA_SWIM = 0x694,
	ACT_DOTA_FLEE = 0x695,
	ACT_DOTA_TROT = 0x696,
	ACT_DOTA_SHAKE = 0x697,
	ACT_DOTA_SWIM_IDLE = 0x698,
	ACT_DOTA_WAIT_IDLE = 0x699,
	ACT_DOTA_GREET = 0x69a,
	ACT_DOTA_TELEPORT_COOP_START = 0x69b,
	ACT_DOTA_TELEPORT_COOP_WAIT = 0x69c,
	ACT_DOTA_TELEPORT_COOP_END = 0x69d,
	ACT_DOTA_TELEPORT_COOP_EXIT = 0x69e,
	ACT_DOTA_SHOPKEEPER_PET_INTERACT = 0x69f,
	ACT_DOTA_ITEM_PICKUP = 0x6a0,
	ACT_DOTA_ITEM_DROP = 0x6a1,
	ACT_DOTA_CAPTURE_PET = 0x6a2,
	ACT_DOTA_PET_WARD_OBSERVER = 0x6a3,
	ACT_DOTA_PET_WARD_SENTRY = 0x6a4,
	ACT_DOTA_PET_LEVEL = 0x6a5,
	ACT_DOTA_CAST_BURROW_END = 0x6a6,
	ACT_DOTA_LIFESTEALER_ASSIMILATE = 0x6a7,
	ACT_DOTA_LIFESTEALER_EJECT = 0x6a8,
	ACT_DOTA_ATTACK_EVENT_BASH = 0x6a9,
	ACT_DOTA_CAPTURE_RARE = 0x6aa,
	ACT_DOTA_AW_MAGNETIC_FIELD = 0x6ab,
	ACT_DOTA_CAST_GHOST_SHIP = 0x6ac,
	ACT_DOTA_FXANIM = 0x6ad,
	ACT_DOTA_VICTORY_START = 0x6ae,
	ACT_DOTA_DEFEAT_START = 0x6af,
	ACT_DOTA_DP_SPIRIT_SIPHON = 0x6b0,
	ACT_DOTA_TRICKS_END = 0x6b1,
	ACT_DOTA_ES_STONE_CALLER = 0x6b2,
	ACT_DOTA_MK_STRIKE = 0x6b3,
	ACT_DOTA_VERSUS = 0x6b4,
	ACT_DOTA_CAPTURE_CARD = 0x6b5,
	ACT_DOTA_MK_SPRING_SOAR = 0x6b6,
	ACT_DOTA_MK_SPRING_END = 0x6b7,
	ACT_DOTA_MK_TREE_SOAR = 0x6b8,
	ACT_DOTA_MK_TREE_END = 0x6b9,
	ACT_DOTA_MK_FUR_ARMY = 0x6ba,
	ACT_DOTA_MK_SPRING_CAST = 0x6bb,
	ACT_DOTA_NECRO_GHOST_SHROUD = 0x6bc,
	ACT_DOTA_OVERRIDE_ARCANA = 0x6bd,
	ACT_DOTA_SLIDE = 0x6be,
	ACT_DOTA_SLIDE_LOOP = 0x6bf,
	ACT_DOTA_GENERIC_CHANNEL_1 = 0x6c0,
	ACT_DOTA_GS_SOUL_CHAIN = 0x6c1,
	ACT_DOTA_GS_INK_CREATURE = 0x6c2,
	ACT_DOTA_TRANSITION = 0x6c3,
	ACT_DOTA_BLINK_DAGGER = 0x6c4,
	ACT_DOTA_BLINK_DAGGER_END = 0x6c5,
	ACT_DOTA_CUSTOM_TOWER_ATTACK = 0x6c6,
	ACT_DOTA_CUSTOM_TOWER_IDLE = 0x6c7,
	ACT_DOTA_CUSTOM_TOWER_DIE = 0x6c8,
	ACT_DOTA_CAST_COLD_SNAP_ORB = 0x6c9,
	ACT_DOTA_CAST_GHOST_WALK_ORB = 0x6ca,
	ACT_DOTA_CAST_TORNADO_ORB = 0x6cb,
	ACT_DOTA_CAST_EMP_ORB = 0x6cc,
	ACT_DOTA_CAST_ALACRITY_ORB = 0x6cd,
	ACT_DOTA_CAST_CHAOS_METEOR_ORB = 0x6ce,
	ACT_DOTA_CAST_SUN_STRIKE_ORB = 0x6cf,
	ACT_DOTA_CAST_FORGE_SPIRIT_ORB = 0x6d0,
	ACT_DOTA_CAST_ICE_WALL_ORB = 0x6d1,
	ACT_DOTA_CAST_DEAFENING_BLAST_ORB = 0x6d2,
	ACT_DOTA_NOTICE = 0x6d3,
	ACT_DOTA_CAST_ABILITY_2_ALLY = 0x6d4,
	ACT_DOTA_SHUFFLE_L = 0x6d5,
	ACT_DOTA_SHUFFLE_R = 0x6d6,
	ACT_DOTA_OVERRIDE_LOADOUT = 0x6d7,
	ACT_DOTA_TAUNT_SPECIAL = 0x6d8,
	ACT_DOTA_TELEPORT_START = 0x6d9,
	ACT_DOTA_GENERIC_CHANNEL_1_START = 0x6da,
	ACT_DOTA_CUSTOM_TOWER_IDLE_RARE = 0x6db,
	ACT_DOTA_CUSTOM_TOWER_TAUNT = 0x6dc,
	ACT_DOTA_CUSTOM_TOWER_HIGH_FIVE = 0x6dd,
	ACT_DOTA_ATTACK_SPECIAL = 0x6de,
	ACT_DOTA_TRANSITION_IDLE = 0x6df,
	ACT_DOTA_PIERCE_THE_VEIL = 0x6e0,
	ACT_DOTA_RUN_RARE = 0x6e1,
	ACT_DOTA_VIPER_DIVE = 0x6e2,
	ACT_DOTA_VIPER_DIVE_END = 0x6e3,
	ACT_DOTA_MK_STRIKE_END = 0x6e4,
};

// Aligment: 4
// Size: 3
enum class EShareAbility : uint32_t
{
	ITEM_FULLY_SHAREABLE = 0x0,
	ITEM_PARTIALLY_SHAREABLE = 0x1,
	ITEM_NOT_SHAREABLE = 0x2,
};

// Aligment: 4
// Size: 3
enum class WorldTextPanelHorizontalAlign_t : uint32_t
{
	WORLDTEXT_HORIZONTAL_ALIGN_LEFT = 0x0,
	WORLDTEXT_HORIZONTAL_ALIGN_CENTER = 0x1,
	WORLDTEXT_HORIZONTAL_ALIGN_RIGHT = 0x2,
};

// Aligment: 4
// Size: 3
enum class EMatchGroupServerStatus : uint32_t
{
	k_EMatchGroupServerStatus_OK = 0x0,
	k_EMatchGroupServerStatus_LimitedAvailability = 0x1,
	k_EMatchGroupServerStatus_Offline = 0x2,
};

// Aligment: 4
// Size: 6
enum class ELaneType : uint32_t
{
	LANE_TYPE_UNKNOWN = 0x0,
	LANE_TYPE_SAFE = 0x1,
	LANE_TYPE_OFF = 0x2,
	LANE_TYPE_MID = 0x3,
	LANE_TYPE_JUNGLE = 0x4,
	LANE_TYPE_ROAM = 0x5,
};

// Aligment: 4
// Size: 5
enum class DIALOG_TYPE : uint32_t
{
	DIALOG_MSG = 0x0,
	DIALOG_MENU = 0x1,
	DIALOG_TEXT = 0x2,
	DIALOG_ENTRY = 0x3,
	DIALOG_ASKCONNECT = 0x4,
};

// Aligment: 4
// Size: 3
enum class WorldTextPanelOrientation_t : uint32_t
{
	WORLDTEXT_ORIENTATION_DEFAULT = 0x0,
	WORLDTEXT_ORIENTATION_FACEUSER = 0x1,
	WORLDTEXT_ORIENTATION_FACEUSER_UPRIGHT = 0x2,
};

// Aligment: 4
// Size: 119
enum class ENetworkDisconnectionReason : uint32_t
{
	NETWORK_DISCONNECT_INVALID = 0x0,
	NETWORK_DISCONNECT_SHUTDOWN = 0x1,
	NETWORK_DISCONNECT_DISCONNECT_BY_USER = 0x2,
	NETWORK_DISCONNECT_DISCONNECT_BY_SERVER = 0x3,
	NETWORK_DISCONNECT_LOST = 0x4,
	NETWORK_DISCONNECT_OVERFLOW = 0x5,
	NETWORK_DISCONNECT_STEAM_BANNED = 0x6,
	NETWORK_DISCONNECT_STEAM_INUSE = 0x7,
	NETWORK_DISCONNECT_STEAM_TICKET = 0x8,
	NETWORK_DISCONNECT_STEAM_LOGON = 0x9,
	NETWORK_DISCONNECT_STEAM_AUTHCANCELLED = 0xa,
	NETWORK_DISCONNECT_STEAM_AUTHALREADYUSED = 0xb,
	NETWORK_DISCONNECT_STEAM_AUTHINVALID = 0xc,
	NETWORK_DISCONNECT_STEAM_VACBANSTATE = 0xd,
	NETWORK_DISCONNECT_STEAM_LOGGED_IN_ELSEWHERE = 0xe,
	NETWORK_DISCONNECT_STEAM_VAC_CHECK_TIMEDOUT = 0xf,
	NETWORK_DISCONNECT_STEAM_DROPPED = 0x10,
	NETWORK_DISCONNECT_STEAM_OWNERSHIP = 0x11,
	NETWORK_DISCONNECT_SERVERINFO_OVERFLOW = 0x12,
	NETWORK_DISCONNECT_TICKMSG_OVERFLOW = 0x13,
	NETWORK_DISCONNECT_STRINGTABLEMSG_OVERFLOW = 0x14,
	NETWORK_DISCONNECT_DELTAENTMSG_OVERFLOW = 0x15,
	NETWORK_DISCONNECT_TEMPENTMSG_OVERFLOW = 0x16,
	NETWORK_DISCONNECT_SOUNDSMSG_OVERFLOW = 0x17,
	NETWORK_DISCONNECT_SNAPSHOTOVERFLOW = 0x18,
	NETWORK_DISCONNECT_SNAPSHOTERROR = 0x19,
	NETWORK_DISCONNECT_RELIABLEOVERFLOW = 0x1a,
	NETWORK_DISCONNECT_BADDELTATICK = 0x1b,
	NETWORK_DISCONNECT_NOMORESPLITS = 0x1c,
	NETWORK_DISCONNECT_TIMEDOUT = 0x1d,
	NETWORK_DISCONNECT_DISCONNECTED = 0x1e,
	NETWORK_DISCONNECT_LEAVINGSPLIT = 0x1f,
	NETWORK_DISCONNECT_DIFFERENTCLASSTABLES = 0x20,
	NETWORK_DISCONNECT_BADRELAYPASSWORD = 0x21,
	NETWORK_DISCONNECT_BADSPECTATORPASSWORD = 0x22,
	NETWORK_DISCONNECT_HLTVRESTRICTED = 0x23,
	NETWORK_DISCONNECT_NOSPECTATORS = 0x24,
	NETWORK_DISCONNECT_HLTVUNAVAILABLE = 0x25,
	NETWORK_DISCONNECT_HLTVSTOP = 0x26,
	NETWORK_DISCONNECT_KICKED = 0x27,
	NETWORK_DISCONNECT_BANADDED = 0x28,
	NETWORK_DISCONNECT_KICKBANADDED = 0x29,
	NETWORK_DISCONNECT_HLTVDIRECT = 0x2a,
	NETWORK_DISCONNECT_PURESERVER_CLIENTEXTRA = 0x2b,
	NETWORK_DISCONNECT_PURESERVER_MISMATCH = 0x2c,
	NETWORK_DISCONNECT_USERCMD = 0x2d,
	NETWORK_DISCONNECT_REJECTED_BY_GAME = 0x2e,
	NETWORK_DISCONNECT_MESSAGE_PARSE_ERROR = 0x2f,
	NETWORK_DISCONNECT_INVALID_MESSAGE_ERROR = 0x30,
	NETWORK_DISCONNECT_BAD_SERVER_PASSWORD = 0x31,
	NETWORK_DISCONNECT_DIRECT_CONNECT_RESERVATION = 0x32,
	NETWORK_DISCONNECT_CONNECTION_FAILURE = 0x33,
	NETWORK_DISCONNECT_NO_PEER_GROUP_HANDLERS = 0x34,
	NETWORK_DISCONNECT_RECONNECTION = 0x35,
	NETWORK_DISCONNECT_LOOPSHUTDOWN = 0x36,
	NETWORK_DISCONNECT_LOOPDEACTIVATE = 0x37,
	NETWORK_DISCONNECT_HOST_ENDGAME = 0x38,
	NETWORK_DISCONNECT_LOOP_LEVELLOAD_ACTIVATE = 0x39,
	NETWORK_DISCONNECT_CREATE_SERVER_FAILED = 0x3a,
	NETWORK_DISCONNECT_EXITING = 0x3b,
	NETWORK_DISCONNECT_REQUEST_HOSTSTATE_IDLE = 0x3c,
	NETWORK_DISCONNECT_REQUEST_HOSTSTATE_HLTVRELAY = 0x3d,
	NETWORK_DISCONNECT_CLIENT_CONSISTENCY_FAIL = 0x3e,
	NETWORK_DISCONNECT_CLIENT_UNABLE_TO_CRC_MAP = 0x3f,
	NETWORK_DISCONNECT_CLIENT_NO_MAP = 0x40,
	NETWORK_DISCONNECT_CLIENT_DIFFERENT_MAP = 0x41,
	NETWORK_DISCONNECT_SERVER_REQUIRES_STEAM = 0x42,
	NETWORK_DISCONNECT_STEAM_DENY_MISC = 0x43,
	NETWORK_DISCONNECT_STEAM_DENY_BAD_ANTI_CHEAT = 0x44,
	NETWORK_DISCONNECT_SERVER_SHUTDOWN = 0x45,
	NETWORK_DISCONNECT_SPLITPACKET_SEND_OVERFLOW = 0x46,
	NETWORK_DISCONNECT_REPLAY_INCOMPATIBLE = 0x47,
	NETWORK_DISCONNECT_CONNECT_REQUEST_TIMEDOUT = 0x48,
	NETWORK_DISCONNECT_SERVER_INCOMPATIBLE = 0x49,
	NETWORK_DISCONNECT_LOCALPROBLEM_MANYRELAYS = 0x4a,
	NETWORK_DISCONNECT_LOCALPROBLEM_HOSTEDSERVERPRIMARYRELAY = 0x4b,
	NETWORK_DISCONNECT_LOCALPROBLEM_NETWORKCONFIG = 0x4c,
	NETWORK_DISCONNECT_LOCALPROBLEM_OTHER = 0x4d,
	NETWORK_DISCONNECT_REMOTE_TIMEOUT = 0x4f,
	NETWORK_DISCONNECT_REMOTE_TIMEOUT_CONNECTING = 0x50,
	NETWORK_DISCONNECT_REMOTE_OTHER = 0x51,
	NETWORK_DISCONNECT_REMOTE_BADCRYPT = 0x52,
	NETWORK_DISCONNECT_REMOTE_CERTNOTTRUSTED = 0x53,
	NETWORK_DISCONNECT_UNUSUAL = 0x54,
	NETWORK_DISCONNECT_INTERNAL_ERROR = 0x55,
	NETWORK_DISCONNECT_REJECT_BADCHALLENGE = 0x80,
	NETWORK_DISCONNECT_REJECT_NOLOBBY = 0x81,
	NETWORK_DISCONNECT_REJECT_BACKGROUND_MAP = 0x82,
	NETWORK_DISCONNECT_REJECT_SINGLE_PLAYER = 0x83,
	NETWORK_DISCONNECT_REJECT_HIDDEN_GAME = 0x84,
	NETWORK_DISCONNECT_REJECT_LANRESTRICT = 0x85,
	NETWORK_DISCONNECT_REJECT_BADPASSWORD = 0x86,
	NETWORK_DISCONNECT_REJECT_SERVERFULL = 0x87,
	NETWORK_DISCONNECT_REJECT_INVALIDRESERVATION = 0x88,
	NETWORK_DISCONNECT_REJECT_FAILEDCHANNEL = 0x89,
	NETWORK_DISCONNECT_REJECT_CONNECT_FROM_LOBBY = 0x8a,
	NETWORK_DISCONNECT_REJECT_RESERVED_FOR_LOBBY = 0x8b,
	NETWORK_DISCONNECT_REJECT_INVALIDKEYLENGTH = 0x8c,
	NETWORK_DISCONNECT_REJECT_OLDPROTOCOL = 0x8d,
	NETWORK_DISCONNECT_REJECT_NEWPROTOCOL = 0x8e,
	NETWORK_DISCONNECT_REJECT_INVALIDCONNECTION = 0x8f,
	NETWORK_DISCONNECT_REJECT_INVALIDCERTLEN = 0x90,
	NETWORK_DISCONNECT_REJECT_INVALIDSTEAMCERTLEN = 0x91,
	NETWORK_DISCONNECT_REJECT_STEAM = 0x92,
	NETWORK_DISCONNECT_REJECT_SERVERAUTHDISABLED = 0x93,
	NETWORK_DISCONNECT_REJECT_SERVERCDKEYAUTHINVALID = 0x94,
	NETWORK_DISCONNECT_REJECT_BANNED = 0x95,
	NETWORK_DISCONNECT_KICKED_TEAMKILLING = 0x96,
	NETWORK_DISCONNECT_KICKED_TK_START = 0x97,
	NETWORK_DISCONNECT_KICKED_UNTRUSTEDACCOUNT = 0x98,
	NETWORK_DISCONNECT_KICKED_CONVICTEDACCOUNT = 0x99,
	NETWORK_DISCONNECT_KICKED_COMPETITIVECOOLDOWN = 0x9a,
	NETWORK_DISCONNECT_KICKED_TEAMHURTING = 0x9b,
	NETWORK_DISCONNECT_KICKED_HOSTAGEKILLING = 0x9c,
	NETWORK_DISCONNECT_KICKED_VOTEDOFF = 0x9d,
	NETWORK_DISCONNECT_KICKED_IDLE = 0x9e,
	NETWORK_DISCONNECT_KICKED_SUICIDE = 0x9f,
	NETWORK_DISCONNECT_KICKED_NOSTEAMLOGIN = 0xa0,
	NETWORK_DISCONNECT_KICKED_NOSTEAMTICKET = 0xa1,
};

// Aligment: 4
// Size: 3
enum class ObserverInterpState_t : uint32_t
{
	OBSERVER_INTERP_NONE = 0x0,
	OBSERVER_INTERP_TRAVELING = 0x1,
	OBSERVER_INTERP_SETTLING = 0x2,
};

// Aligment: 4
// Size: 3
enum class EconEntityParticleDisableMode_t : uint32_t
{
	ECON_ENTITY_PARTICLES_ENABLED = 0x0,
	ECON_ENTITY_PARTICLES_DISABLED = 0x1,
	ECON_ENTITY_PARTICLES_DISABLED_BUT_PLAY_ENDCAPS_TO_STOP = 0x2,
};

// Aligment: 4
// Size: 3
enum class Explosions : uint32_t
{
	expRandom = 0x0,
	expDirected = 0x1,
	expUsePrecise = 0x2,
};

// Aligment: 4
// Size: 4
enum class StanceType_t : uint32_t
{
	STANCE_CURRENT = 0xffffffffffffffff,
	STANCE_DEFAULT = 0x0,
	STANCE_CROUCHING = 0x1,
	NUM_STANCES = 0x2,
};

// Aligment: 4
// Size: 3
enum class SubclassVDataChangeType_t : uint32_t
{
	SUBCLASS_VDATA_CREATED = 0x0,
	SUBCLASS_VDATA_SUBCLASS_CHANGED = 0x1,
	SUBCLASS_VDATA_RELOADED = 0x2,
};

// Aligment: 4
// Size: 5
enum class TimelineCompression_t : uint32_t
{
	TIMELINE_COMPRESSION_SUM = 0x0,
	TIMELINE_COMPRESSION_COUNT_PER_INTERVAL = 0x1,
	TIMELINE_COMPRESSION_AVERAGE = 0x2,
	TIMELINE_COMPRESSION_AVERAGE_BLEND = 0x3,
	TIMELINE_COMPRESSION_TOTAL = 0x4,
};

// Aligment: 4
// Size: 3
enum class LessonPanelLayoutFileTypes_t : uint32_t
{
	LAYOUT_HAND_DEFAULT = 0x0,
	LAYOUT_WORLD_DEFAULT = 0x1,
	LAYOUT_CUSTOM = 0x2,
};

// Aligment: 4
// Size: 2
enum class SceneOnPlayerDeath_t : uint32_t
{
	SCENE_ONPLAYERDEATH_DO_NOTHING = 0x0,
	SCENE_ONPLAYERDEATH_CANCEL = 0x1,
};

// Aligment: 4
// Size: 120
enum class DOTA_INVALID_ORDERS : uint32_t
{
	DOTA_ORDER_SUCCESS = 0xffffffffffffffff,
	DOTA_INVALID_ORDER_NOT_CONTROLLABLE_BY_PLAYER = 0x0,
	DOTA_INVALID_ORDER_UNIT_IS_NOT_NPC = 0x1,
	DOTA_INVALID_ORDER_BAD_ABILITY_ENTITY = 0x2,
	DOTA_INVALID_ORDER_UNRECOGNIZED_ORDER = 0x3,
	DOTA_INVALID_ORDER_ABILITY_REQUIRED = 0x4,
	DOTA_INVALID_ORDER_NPC_TARGET_REQUIRED = 0x5,
	DOTA_INVALID_ORDER_TARGET_TREE_INDEX_NOT_A_TREE = 0x6,
	DOTA_INVALID_ORDER_TARGET_ENTITY_INDEX_OUT_OF_RANGE = 0x7,
	DOTA_INVALID_ORDER_ABILITY_NOT_AN_ITEM = 0x8,
	DOTA_INVALID_ORDER_PHYSICAL_ITEM_TARGET_REQUIRED = 0x9,
	DOTA_INVALID_ORDER_RUNE_TARGET_REQUIRED = 0xa,
	DOTA_INVALID_ORDER_ABILITY_NOT_OWNED_BY_UNIT = 0xb,
	DOTA_INVALID_ORDER_ABILITY_CANT_BE_UPGRADED = 0xc,
	DOTA_INVALID_ORDER_NO_POINTS_FOR_ABILITY_UPGRADE = 0xd,
	DOTA_INVALID_ORDER_NOT_ENOUGH_MANA = 0xe,
	DOTA_INVALID_ORDER_ABILITY_IN_COOLDOWN = 0xf,
	DOTA_INVALID_ORDER_ABILITY_NOT_LEARNED = 0x10,
	DOTA_INVALID_ORDER_CANT_CAST_PASSIVE_ABILITY = 0x11,
	DOTA_INVALID_ORDER_PHANTOM_TARGET = 0x12,
	DOTA_INVALID_ORDER_DEAD_TARGET = 0x13,
	DOTA_INVALID_ORDER_UNIT_IS_DEAD = 0x14,
	DOTA_INVALID_ORDER_TARGET_MAGIC_IMMUNE_ENEMY = 0x15,
	DOTA_INVALID_ORDER_TARGET_INVULNERABLE = 0x16,
	DOTA_INVALID_ORDER_TARGET_ATTACK_IMMUNE = 0x17,
	DOTA_INVALID_ORDER_UNIT_SILENCED = 0x18,
	DOTA_INVALID_ORDER_ABILITY_CANT_BE_TOGGLED = 0x19,
	DOTA_INVALID_ORDER_TARGET_CANT_BE_SEEN = 0x1a,
	DOTA_INVALID_ORDER_TARGET_INVISIBLE = 0x1b,
	DOTA_INVALID_ORDER_HERO_CANT_BE_DENIED = 0x1c,
	DOTA_INVALID_ORDER_CANT_CAST_ON_TEAMMATE = 0x1d,
	DOTA_INVALID_ORDER_CANT_CAST_ON_ENEMY = 0x1e,
	DOTA_INVALID_ORDER_UNIT_CANT_MOVE = 0x1f,
	DOTA_INVALID_ORDER_CANT_CAST_ON_ATTACK_IMMUNE = 0x20,
	DOTA_INVALID_ORDER_PURCHASE_INVALID_ITEM = 0x21,
	DOTA_INVALID_ORDER_ITEM_NOT_IN_INVENTORY = 0x22,
	DOTA_INVALID_ORDER_ITEM_NOT_IN_UNIT_INVENTORY = 0x23,
	DOTA_INVALID_ORDER_TARGET_UNSELECTABLE = 0x24,
	DOTA_INVALID_ORDER_ITEM_NOT_IN_ACTIVE_INVENTORY = 0x25,
	DOTA_INVALID_ORDER_UNIT_CANT_PICK_UP_RUNES = 0x26,
	DOTA_INVALID_ORDER_UNIT_CANT_MANIPULATE_ITEMS = 0x27,
	DOTA_INVALID_ORDER_UNIT_IS_ILLUSION = 0x28,
	DOTA_INVALID_ORDER_UNIT_CANT_ATTACK = 0x29,
	DOTA_INVALID_ORDER_ITEM_CANT_BE_DROPPED = 0x2a,
	DOTA_INVALID_ORDER_TARGET_TREE_NOT_ACTIVE = 0x2b,
	DOTA_INVALID_ORDER_ABILITY_CANT_AUTO_CAST = 0x2c,
	DOTA_INVALID_ORDER_TARGET_POSITION_OFF_MAP = 0x2d,
	DOTA_INVALID_ORDER_UNIT_CANT_MOVE_TARGET_OUT_OF_RANGE = 0x2e,
	DOTA_INVALID_ORDER_CANT_CAST_ON_HERO = 0x2f,
	DOTA_INVALID_ORDER_CANT_CAST_ON_OTHER = 0x30,
	DOTA_INVALID_ORDER_CANT_CAST_ON_BUILDING = 0x31,
	DOTA_INVALID_ORDER_CANT_CAST_ON_ANCIENT = 0x32,
	DOTA_INVALID_ORDER_ITEM_CANT_BE_MOVED_TO_STASH = 0x33,
	DOTA_INVALID_ORDER_ITEM_CANT_BE_MOVED_TO_SLOT = 0x34,
	DOTA_INVALID_ORDER_CANT_CAST_ON_MECHANICAL = 0x35,
	DOTA_INVALID_ORDER_CANT_ACCEPT_ATTACK_TARGET = 0x36,
	DOTA_INVALID_ORDER_CANT_CAST_NO_CHARGES = 0x37,
	DOTA_INVALID_ORDER_CANT_CAST_ON_CREEP = 0x38,
	DOTA_INVALID_ORDER_TARGET_CANT_TAKE_ITEMS = 0x39,
	DOTA_INVALID_ORDER_CANT_GIVE_ITEM_TO_ENEMY = 0x3a,
	DOTA_INVALID_ORDER_CANT_CAST_ON_COURIER = 0x3b,
	DOTA_INVALID_ORDER_ABILITY_IS_HIDDEN = 0x3c,
	DOTA_INVALID_ORDER_ITEM_IN_COOLDOWN = 0x3d,
	DOTA_INVALID_ORDER_SECRET_SHOP_NOT_IN_RANGE = 0x3e,
	DOTA_INVALID_ORDER_NOT_ENOUGH_GOLD = 0x3f,
	DOTA_INVALID_ORDER_PURCHASE_AUTOCOMBINE_RECIPE = 0x40,
	DOTA_INVALID_ORDER_CANT_DENY_HEALTH_TOO_HIGH = 0x41,
	DOTA_INVALID_ORDER_SIDE_SHOP_NOT_IN_RANGE = 0x42,
	DOTA_INVALID_ORDER_HOME_SHOP_NOT_IN_RANGE = 0x43,
	DOTA_INVALID_ORDER_CANT_PICK_UP_ITEM = 0x44,
	DOTA_INVALID_ORDER_CANT_SELL_NO_SHOP_IN_RANGE = 0x45,
	DOTA_INVALID_ORDER_CANT_SELL_ITEM = 0x46,
	DOTA_INVALID_ORDER_CANT_SELL_ITEM_WHILE_DEAD = 0x47,
	DOTA_INVALID_ORDER_TARGET_CANT_BE_DENIED = 0x48,
	DOTA_INVALID_ORDER_ABILITY_DISABLED_BY_ROOT = 0x49,
	DOTA_INVALID_ORDER_UNIT_COMMAND_RESTRICTED = 0x4a,
	DOTA_INVALID_ORDER_UNIT_MUTED = 0x4b,
	DOTA_INVALID_ORDER_CANT_CAST_ON_SUMMONED = 0x4c,
	DOTA_INVALID_ORDER_TARGET_MAGIC_IMMUNE_ALLY = 0x4d,
	DOTA_INVALID_ORDER_CANT_PURCHASE_DISALLOWED_ITEM = 0x4e,
	DOTA_INVALID_ORDER_CANT_CAST_ON_DOMINATED = 0x4f,
	DOTA_INVALID_ORDER_CAST_CUSTOM = 0x50,
	DOTA_INVALID_ORDER_ITEM_NOT_DISASSEMBLABLE = 0x51,
	DOTA_INVALID_ORDER_ITEM_OUT_OF_STOCK = 0x52,
	DOTA_INVALID_ORDER_ABILITY_CANT_BE_UPGRADED_AT_MAX = 0x53,
	DOTA_INVALID_ORDER_ABILITY_INACTIVE = 0x54,
	DOTA_INVALID_ORDER_ITEM_NOT_IN_MAIN_INVENTORY = 0x55,
	DOTA_INVALID_ORDER_CANT_GLYPH = 0x56,
	DOTA_INVALID_ORDER_CANT_DRAG_CHANNELING_ITEM = 0x57,
	DOTA_INVALID_ORDER_CANT_BUYBACK_UNIT_NOT_A_HERO = 0x58,
	DOTA_INVALID_ORDER_CANT_BUYBACK_UNIT_NOT_DEAD = 0x59,
	DOTA_INVALID_ORDER_CANT_BUYBACK_NOT_ENOUGH_GOLD = 0x5a,
	DOTA_INVALID_ORDER_CANT_BUYBACK_IN_COOLDOWN = 0x5b,
	DOTA_INVALID_ORDER_CANT_DISASSEMBLE_STASH_OUT_OF_RANGE = 0x5c,
	DOTA_INVALID_ORDER_CANT_EJECT_ITEM_NOT_IN_STASH = 0x5d,
	DOTA_INVALID_ORDER_GAME_IS_PAUSED = 0x5e,
	DOTA_INVALID_ORDER_CANT_CAST_ON_CONSIDERED_HERO = 0x5f,
	DOTA_INVALID_ORDER_CANT_SHOP_AUTO_BUY_ENABLED = 0x60,
	DOTA_INVALID_ORDER_ONLY_DELIBERATE_CHANNELING_CANCEL = 0x61,
	DOTA_INVALID_ORDER_CANT_BUYBACK_REAPERS_SCYTHE = 0x62,
	DOTA_INVALID_ORDER_CANT_BUYBACK_DISABLED_BY_GAME_MODE = 0x63,
	DOTA_INVALID_ORDER_CANT_ABILITY_PING_BAD_TEAM = 0x64,
	DOTA_INVALID_ORDER_ABILITY_NOT_POSITIONED = 0x65,
	DOTA_INVALID_ORDER_ABILITY_NOT_TARGETTED = 0x66,
	DOTA_INVALID_ORDER_ABILITY_REQUIRES_TARGET = 0x67,
	DOTA_INVALID_ORDER_CANT_RADAR = 0x68,
	DOTA_INVALID_ORDER_NO_COURIER = 0x69,
	DOTA_INVALID_ORDER_CUSTOM_SHOP_NOT_IN_RANGE = 0x6a,
	DOTA_INVALID_ORDER_CANT_CAST_RIVER_PAINT = 0x6b,
	DOTA_INVALID_ORDER_UNIT_OBSTRUCTED = 0x6c,
	DOTA_INVALID_ORDER_CANT_CAST_DRAG_REQUIRED = 0x6d,
	DOTA_INVALID_ORDER_ABILITY_DISABLED_BY_TETHER = 0x6e,
	DOTA_INVALID_ORDER_ABILITY_NOT_UNLOCKED = 0x6f,
	DOTA_INVALID_ORDER_CANT_FOUNTAIN_DROP_UNIT_NOT_DEAD = 0x70,
	DOTA_INVALID_ORDER_ITEM_NOT_IN_NEUTRAL_ITEM_STASH = 0x71,
	DOTA_INVALID_ORDER_ITEM_ALREADY_PURCHASED = 0x72,
	DOTA_INVALID_ORDER_BEYOND_PHYSICAL_ITEM_LIMIT = 0x73,
	DOTA_INVALID_ORDER_ABILITY_PING_DEAD_ALLY = 0x74,
	DOTA_INVALID_ORDER_CANT_LOCKCOMBINE_NEUTRAL_ITEMS = 0x75,
	DOTA_INVALID_ORDER_COUNT = 0x76,
};

// Aligment: 4
// Size: 3
enum class ELeagueTierCategory : uint32_t
{
	LEAGUE_TIER_CATEGORY_AMATEUR = 0x1,
	LEAGUE_TIER_CATEGORY_PROFESSIONAL = 0x2,
	LEAGUE_TIER_CATEGORY_DPC = 0x3,
};

// Aligment: 4
// Size: 10
enum class DotaCustomUIType_t : uint32_t
{
	DOTA_CUSTOM_UI_TYPE_HUD = 0x0,
	DOTA_CUSTOM_UI_TYPE_HERO_SELECTION = 0x1,
	DOTA_CUSTOM_UI_TYPE_PREGAME_STRATEGY = 0x2,
	DOTA_CUSTOM_UI_TYPE_GAME_INFO = 0x3,
	DOTA_CUSTOM_UI_TYPE_GAME_SETUP = 0x4,
	DOTA_CUSTOM_UI_TYPE_FLYOUT_SCOREBOARD = 0x5,
	DOTA_CUSTOM_UI_TYPE_HUD_TOP_BAR = 0x6,
	DOTA_CUSTOM_UI_TYPE_END_SCREEN = 0x7,
	DOTA_CUSTOM_UI_TYPE_COUNT = 0x8,
	DOTA_CUSTOM_UI_TYPE_INVALID = 0xffffffffffffffff,
};

// Aligment: 4
// Size: 5
enum class P2P_Messages : uint32_t
{
	p2p_TextMessage = 0x100,
	p2p_Voice = 0x101,
	p2p_Ping = 0x102,
	p2p_VRAvatarPosition = 0x103,
	p2p_WatchSynchronization = 0x104,
};

// Aligment: 4
// Size: 3
enum class ETeamFanContentStatus : uint32_t
{
	TEAM_FAN_CONTENT_STATUS_INVALID = 0x0,
	TEAM_FAN_CONTENT_STATUS_PENDING = 0x1,
	TEAM_FAN_CONTENT_STATUS_EVALUATED = 0x2,
};

// Aligment: 4
// Size: 4
enum class PlayerUltimateStateOrTime_t : uint32_t
{
	PLAYER_ULTIMATE_STATE_READY = 0x0,
	PLAYER_ULTIMATE_STATE_NO_MANA = 0xffffffffffffffff,
	PLAYER_ULTIMATE_STATE_NOT_LEVELED = 0xfffffffffffffffe,
	PLAYER_ULTIMATE_STATE_HIDDEN = 0xfffffffffffffffd,
};

// Aligment: 4
// Size: 12
enum class ETournamentState : uint32_t
{
	k_ETournamentState_Unknown = 0x0,
	k_ETournamentState_CanceledByAdmin = 0x1,
	k_ETournamentState_Completed = 0x2,
	k_ETournamentState_Merged = 0x3,
	k_ETournamentState_ServerFailure = 0x4,
	k_ETournamentState_TeamAbandoned = 0x5,
	k_ETournamentState_TeamTimeoutForfeit = 0x6,
	k_ETournamentState_TeamTimeoutRefund = 0x7,
	k_ETournamentState_ServerFailureGrantedVictory = 0x8,
	k_ETournamentState_TeamTimeoutGrantedVictory = 0x9,
	k_ETournamentState_InProgress = 0x64,
	k_ETournamentState_WaitingToMerge = 0x65,
};

// Aligment: 4
// Size: 2
enum class CMsgBattleReport_EOutcome : uint32_t
{
	k_eWin = 0x0,
	k_eLoss = 0x1,
};

// Aligment: 4
// Size: 2
enum class NeutralCampStackPullAlarmType_t : uint32_t
{
	DOTA_NEUTRAL_CAMP_STACK_PULL_ALARM_TYPE_STACK = 0x1,
	DOTA_NEUTRAL_CAMP_STACK_PULL_ALARM_TYPE_PULL = 0x2,
};

// Aligment: 4
// Size: 2
enum class EPlayerCoachMatchFlag : uint32_t
{
	k_EPlayerCoachMatchFlag_EligibleForRewards = 0x1,
	k_EPlayerCoachMatchFlag_PrivateCoach = 0x2,
};

// Aligment: 4
// Size: 6
enum class EDOTADraftTriviaAnswerResult : uint32_t
{
	k_EDOTADraftTriviaAnswerResult_Success = 0x0,
	k_EDOTADraftTriviaAnswerResult_InvalidMatchID = 0x1,
	k_EDOTADraftTriviaAnswerResult_AlreadyAnswered = 0x2,
	k_EDOTADraftTriviaAnswerResult_InternalError = 0x3,
	k_EDOTADraftTriviaAnswerResult_TriviaDisabled = 0x4,
	k_EDOTADraftTriviaAnswerResult_GCDown = 0x5,
};

// Aligment: 4
// Size: 3
enum class OrderQueueBehavior_t : uint32_t
{
	DOTA_ORDER_QUEUE_DEFAULT = 0x0,
	DOTA_ORDER_QUEUE_NEVER = 0x1,
	DOTA_ORDER_QUEUE_ALWAYS = 0x2,
};

// Aligment: 4
// Size: 3
enum class EPrivateCoachingSessionMemberFlag : uint32_t
{
	k_EPrivateCoachingSessionMemberFlag_Requester = 0x1,
	k_EPrivateCoachingSessionMemberFlag_Coach = 0x2,
	k_EPrivateCoachingSessionMemberFlag_LeftSession = 0x4,
};

// Aligment: 4
// Size: 3
enum class CMsgBattleReport_HighlightCategory : uint32_t
{
	k_eHighlightGeneral = 0x0,
	k_eHighlightHero = 0x1,
	k_eHighlightRole = 0x2,
};

// Aligment: 4
// Size: 8
enum class EPurchaseHeroRelicResult : uint32_t
{
	k_EPurchaseHeroRelicResult_Success = 0x0,
	k_EPurchaseHeroRelicResult_FailedToSend = 0x1,
	k_EPurchaseHeroRelicResult_NotEnoughPoints = 0x2,
	k_EPurchaseHeroRelicResult_InternalServerError = 0x3,
	k_EPurchaseHeroRelicResult_PurchaseNotAllowed = 0x4,
	k_EPurchaseHeroRelicResult_InvalidRelic = 0x5,
	k_EPurchaseHeroRelicResult_AlreadyOwned = 0x6,
	k_EPurchaseHeroRelicResult_InvalidRarity = 0x7,
};

// Aligment: 4
// Size: 5
enum class CMsgBattleReport_CompareContext : uint32_t
{
	k_eCompareContextInvalid = 0xffffffffffffffff,
	k_eAbsoluteValue = 0x0,
	k_ePlayersOfSimilarRank = 0x1,
	k_eAllPlayers = 0x2,
	k_ePlayersPersonalHistory = 0x3,
};

// Aligment: 4
// Size: 3
enum class ETeamFanContentAssetStatus : uint32_t
{
	k_eFanContentAssetStatus_None = 0x0,
	k_eFanContentAssetStatus_Approved = 0x1,
	k_eFanContentAssetStatus_Rejected = 0x2,
};

// Aligment: 4
// Size: 5
enum class PortraitDisplayMode_t : uint32_t
{
	PORTRAIT_DISPLAY_MODE_INVALID = 0xffffffffffffffff,
	PORTRAIT_DISPLAY_MODE_LOADOUT = 0x0,
	PORTRAIT_DISPLAY_MODE_LOADOUT_DIRE = 0x1,
	PORTRAIT_DISPLAY_MODE_LOADOUT_SMALL = 0x2,
	PORTRAIT_DISPLAY_MODE_TREASURE_SMALL = 0x3,
};

// Aligment: 4
// Size: 4
enum class PlayerOrderIssuer_t : uint32_t
{
	DOTA_ORDER_ISSUER_SELECTED_UNITS = 0x0,
	DOTA_ORDER_ISSUER_CURRENT_UNIT_ONLY = 0x1,
	DOTA_ORDER_ISSUER_HERO_ONLY = 0x2,
	DOTA_ORDER_ISSUER_PASSED_UNIT_ONLY = 0x3,
};

// Aligment: 4
// Size: 14
enum class ETeamInviteResult : uint32_t
{
	TEAM_INVITE_SUCCESS = 0x0,
	TEAM_INVITE_FAILURE_INVITE_REJECTED = 0x1,
	TEAM_INVITE_FAILURE_INVITE_TIMEOUT = 0x2,
	TEAM_INVITE_ERROR_TEAM_AT_MEMBER_LIMIT = 0x3,
	TEAM_INVITE_ERROR_TEAM_LOCKED = 0x4,
	TEAM_INVITE_ERROR_INVITEE_NOT_AVAILABLE = 0x5,
	TEAM_INVITE_ERROR_INVITEE_BUSY = 0x6,
	TEAM_INVITE_ERROR_INVITEE_ALREADY_MEMBER = 0x7,
	TEAM_INVITE_ERROR_INVITEE_AT_TEAM_LIMIT = 0x8,
	TEAM_INVITE_ERROR_INVITEE_INSUFFICIENT_PLAY_TIME = 0x9,
	TEAM_INVITE_ERROR_INVITER_INVALID_ACCOUNT_TYPE = 0xa,
	TEAM_INVITE_ERROR_INVITER_NOT_ADMIN = 0xb,
	TEAM_INVITE_ERROR_INCORRECT_USER_RESPONDED = 0xc,
	TEAM_INVITE_ERROR_UNSPECIFIED = 0xd,
};

// Aligment: 4
// Size: 6
enum class EPrivateCoachingSessionState : uint32_t
{
	k_ePrivateCoachingSessionState_Invalid = 0x0,
	k_ePrivateCoachingSessionState_SearchingForCoach = 0x1,
	k_ePrivateCoachingSessionState_CoachAssigned = 0x2,
	k_ePrivateCoachingSessionState_Finished = 0x3,
	k_ePrivateCoachingSessionState_Expired = 0x4,
	k_ePrivateCoachingSessionState_Abandoned = 0x5,
};

// Aligment: 4
// Size: 9
enum class EGuildEventAuditAction : uint32_t
{
	k_EGuildEventAuditAction_Invalid = 0x0,
	k_EGuildEventAuditAction_DevGrant = 0x1,
	k_EGuildEventAuditAction_CompleteContract = 0x2,
	k_EGuildEventAuditAction_CompleteChallenge = 0x3,
	k_EGuildEventAuditAction_CompleteMatch_Winner = 0x4,
	k_EGuildEventAuditAction_ChallengeProgress = 0x5,
	k_EGuildEventAuditAction_CompleteMatch_Loser = 0x6,
	k_EGuildEventAuditAction_WeeklyLeaderboard = 0x7,
	k_EGuildEventAuditAction_ManualGrant = 0x8,
};

// Aligment: 4
// Size: 5
enum class SteamUniverse : uint32_t
{
	Invalid = 0x0,
	Internal = 0x3,
	Dev = 0x4,
	Beta = 0x2,
	Public = 0x1,
};

// Aligment: 4
// Size: 10
enum class ETournamentGameState : uint32_t
{
	k_ETournamentGameState_Unknown = 0x0,
	k_ETournamentGameState_Canceled = 0x1,
	k_ETournamentGameState_Scheduled = 0x2,
	k_ETournamentGameState_Active = 0x3,
	k_ETournamentGameState_RadVictory = 0x14,
	k_ETournamentGameState_DireVictory = 0x15,
	k_ETournamentGameState_RadVictoryByForfeit = 0x16,
	k_ETournamentGameState_DireVictoryByForfeit = 0x17,
	k_ETournamentGameState_ServerFailure = 0x28,
	k_ETournamentGameState_NotNeeded = 0x29,
};

// Aligment: 4
// Size: 4
enum class ECandyShopRewardType : uint32_t
{
	k_eCandyShopRewardType_None = 0x0,
	k_eCandyShopRewardType_Item = 0x1,
	k_eCandyShopRewardType_EventAction = 0x2,
	k_eCandyShopRewardType_EventPoints = 0x3,
};

// Aligment: 4
// Size: 4
enum class EHighlightNumberFormat : uint32_t
{
	k_eFloat = 0x0,
	k_eInteger = 0x1,
	k_ePercentage = 0x2,
	k_eTime = 0x3,
};

// Aligment: 4
// Size: 8
enum class DOTAKeybindTemplate_t : uint32_t
{
	DOTA_KEYBIND_TEMPLATE_ARROW = 0x0,
	DOTA_KEYBIND_TEMPLATE_WASD = 0x1,
	DOTA_KEYBIND_TEMPLATE_LEGACY = 0x2,
	DOTA_KEYBIND_TEMPLATE_MMO = 0x3,
	DOTA_KEYBIND_TEMPLATE_LOL = 0x4,
	DOTA_KEYBIND_TEMPLATE_HON = 0x5,
	DOTA_KEYBIND_TEMPLATE_SMITE = 0x6,
	DOTA_KEYBIND_TEMPLATE_COUNT = 0x7,
};

// Aligment: 4
// Size: 12
enum class EUnderDraftResponse : uint32_t
{
	k_eInternalError = 0x0,
	k_eSuccess = 0x1,
	k_eNoGold = 0x2,
	k_eInvalidSlot = 0x3,
	k_eNoBenchSpace = 0x4,
	k_eNoTickets = 0x5,
	k_eEventNotOwned = 0x6,
	k_eInvalidReward = 0x7,
	k_eHasBigReward = 0x8,
	k_eNoGCConnection = 0x9,
	k_eTooBusy = 0xa,
	k_eCantRollBack = 0xb,
};

// Aligment: 4
// Size: 14
enum class ETournamentNodeState : uint32_t
{
	k_ETournamentNodeState_Unknown = 0x0,
	k_ETournamentNodeState_Canceled = 0x1,
	k_ETournamentNodeState_TeamsNotYetAssigned = 0x2,
	k_ETournamentNodeState_InBetweenGames = 0x3,
	k_ETournamentNodeState_GameInProgress = 0x4,
	k_ETournamentNodeState_A_Won = 0x5,
	k_ETournamentNodeState_B_Won = 0x6,
	k_ETournamentNodeState_A_WonByForfeit = 0x7,
	k_ETournamentNodeState_B_WonByForfeit = 0x8,
	k_ETournamentNodeState_A_Bye = 0x9,
	k_ETournamentNodeState_A_Abandoned = 0xa,
	k_ETournamentNodeState_ServerFailure = 0xb,
	k_ETournamentNodeState_A_TimeoutForfeit = 0xc,
	k_ETournamentNodeState_A_TimeoutRefund = 0xd,
};

// Aligment: 4
// Size: 6
enum class EDOTATriviaAnswerResult : uint32_t
{
	k_EDOTATriviaAnswerResult_Success = 0x0,
	k_EDOTATriviaAnswerResult_InvalidQuestion = 0x1,
	k_EDOTATriviaAnswerResult_InvalidAnswer = 0x2,
	k_EDOTATriviaAnswerResult_QuestionLocked = 0x3,
	k_EDOTATriviaAnswerResult_AlreadyAnswered = 0x4,
	k_EDOTATriviaAnswerResult_TriviaDisabled = 0x5,
};

// Aligment: 4
// Size: 38
enum class EStartFindingMatchResult : uint32_t
{
	k_EStartFindingMatchResult_Invalid = 0x0,
	k_EStartFindingMatchResult_OK = 0x1,
	k_EStartFindingMatchResult_AlreadySearching = 0x2,
	k_EStartFindingMatchResult_FailGeneric = 0x64,
	k_EStartFindingMatchResult_FailedIgnore = 0x65,
	k_EStartFindingMatchResult_MatchmakingDisabled = 0x66,
	k_EStartFindingMatchResult_RegionOffline = 0x67,
	k_EStartFindingMatchResult_MatchmakingCooldown = 0x68,
	k_EStartFindingMatchResult_ClientOutOfDate = 0x69,
	k_EStartFindingMatchResult_CompetitiveNoLowPriority = 0x6a,
	k_EStartFindingMatchResult_CompetitiveNotUnlocked = 0x6b,
	k_EStartFindingMatchResult_GameModeNotUnlocked = 0x6c,
	k_EStartFindingMatchResult_CompetitiveNotEnoughPlayTime = 0x6d,
	k_EStartFindingMatchResult_MissingInitialSkill = 0x6e,
	k_EStartFindingMatchResult_CompetitiveRankSpreadTooLarge = 0x6f,
	k_EStartFindingMatchResult_MemberAlreadyInLobby = 0x70,
	k_EStartFindingMatchResult_MemberNotVACVerified = 0x71,
	k_EStartFindingMatchResult_WeekendTourneyBadPartySize = 0x72,
	k_EStartFindingMatchResult_WeekendTourneyTeamBuyInTooSmall = 0x73,
	k_EStartFindingMatchResult_WeekendTourneyIndividualBuyInTooLarge = 0x74,
	k_EStartFindingMatchResult_WeekendTourneyTeamBuyInTooLarge = 0x75,
	k_EStartFindingMatchResult_MemberMissingEventOwnership = 0x76,
	k_EStartFindingMatchResult_WeekendTourneyNotUnlocked = 0x77,
	k_EStartFindingMatchResult_WeekendTourneyRecentParticipation = 0x78,
	k_EStartFindingMatchResult_MemberMissingAnchoredPhoneNumber = 0x79,
	k_EStartFindingMatchResult_NotMemberOfClan = 0x7a,
	k_EStartFindingMatchResult_CoachesChallengeBadPartySize = 0x7b,
	k_EStartFindingMatchResult_CoachesChallengeRequirementsNotMet = 0x7c,
	k_EStartFindingMatchResult_InvalidRoleSelections = 0x7d,
	k_EStartFindingMatchResult_PhoneNumberDiscrepancy = 0x7e,
	k_EStartFindingMatchResult_NoQueuePoints = 0x7f,
	k_EStartFindingMatchResult_MemberMissingGauntletFlag = 0x80,
	k_EStartFindingMatchResult_MemberGauntletTooRecent = 0x81,
	k_EStartFindingMatchResult_DifficultyNotUnlocked = 0x82,
	k_EStartFindingMatchResult_CoachesNotAllowedInParty = 0x83,
	k_EStartFindingMatchResult_MatchmakingBusy = 0x84,
	k_EStartFindingMatchResult_SteamChinaBanned = 0x85,
	k_EStartFindingMatchResult_SteamChinaInvalidMixedParty = 0x86,
};

// Aligment: 4
// Size: 6
enum class CMsgBattleReport_HighlightTier : uint32_t
{
	k_eHighlightTierLow = 0xffffffffffffffff,
	k_eHighlightTierNone = 0x0,
	k_eHighlightTier1 = 0x1,
	k_eHighlightTier2 = 0x2,
	k_eHighlightTier3 = 0x3,
	k_eHighlightTierCustom = 0x4,
};

// Aligment: 4
// Size: 14
enum class SteamUGCMatchingUGCType : uint32_t
{
	Items = 0x0,
	Items_Mtx = 0x1,
	Items_ReadyToUse = 0x2,
	Collections = 0x3,
	Artwork = 0x4,
	Videos = 0x5,
	Screenshots = 0x6,
	AllGuides = 0x7,
	WebGuides = 0x8,
	IntegratedGuides = 0x9,
	UsableInGame = 0xa,
	ControllerBindings = 0xb,
	GameManagedItems = 0xc,
	All = 0xffffffffffffffff,
};

// Aligment: 4
// Size: 96
enum class DOTA_2013PassportSelectionIndices : uint32_t
{
	PP13_SEL_ALLSTAR_PLAYER_0 = 0x0,
	PP13_SEL_ALLSTAR_PLAYER_1 = 0x1,
	PP13_SEL_ALLSTAR_PLAYER_2 = 0x2,
	PP13_SEL_ALLSTAR_PLAYER_3 = 0x3,
	PP13_SEL_ALLSTAR_PLAYER_4 = 0x4,
	PP13_SEL_ALLSTAR_PLAYER_5 = 0x5,
	PP13_SEL_ALLSTAR_PLAYER_6 = 0x6,
	PP13_SEL_ALLSTAR_PLAYER_7 = 0x7,
	PP13_SEL_ALLSTAR_PLAYER_8 = 0x8,
	PP13_SEL_ALLSTAR_PLAYER_9 = 0x9,
	PP13_SEL_QUALPRED_WEST_0 = 0xa,
	PP13_SEL_QUALPRED_WEST_1 = 0xb,
	PP13_SEL_QUALPRED_WEST_2 = 0xc,
	PP13_SEL_QUALPRED_WEST_3 = 0xd,
	PP13_SEL_QUALPRED_WEST_4 = 0xe,
	PP13_SEL_QUALPRED_WEST_5 = 0xf,
	PP13_SEL_QUALPRED_WEST_6 = 0x10,
	PP13_SEL_QUALPRED_WEST_7 = 0x11,
	PP13_SEL_QUALPRED_WEST_8 = 0x12,
	PP13_SEL_QUALPRED_WEST_9 = 0x13,
	PP13_SEL_QUALPRED_WEST_10 = 0x14,
	PP13_SEL_QUALPRED_WEST_11 = 0x15,
	PP13_SEL_QUALPRED_WEST_12 = 0x16,
	PP13_SEL_QUALPRED_WEST_13 = 0x17,
	PP13_SEL_QUALPRED_WEST_14 = 0x18,
	PP13_SEL_QUALPRED_EAST_0 = 0x19,
	PP13_SEL_QUALPRED_EAST_1 = 0x1a,
	PP13_SEL_QUALPRED_EAST_2 = 0x1b,
	PP13_SEL_QUALPRED_EAST_3 = 0x1c,
	PP13_SEL_QUALPRED_EAST_4 = 0x1d,
	PP13_SEL_QUALPRED_EAST_5 = 0x1e,
	PP13_SEL_QUALPRED_EAST_6 = 0x1f,
	PP13_SEL_QUALPRED_EAST_7 = 0x20,
	PP13_SEL_QUALPRED_EAST_8 = 0x21,
	PP13_SEL_QUALPRED_EAST_9 = 0x22,
	PP13_SEL_QUALPRED_EAST_10 = 0x23,
	PP13_SEL_QUALPRED_EAST_11 = 0x24,
	PP13_SEL_QUALPRED_EAST_12 = 0x25,
	PP13_SEL_QUALPRED_EAST_13 = 0x26,
	PP13_SEL_QUALPRED_EAST_14 = 0x27,
	PP13_SEL_TEAMCUP_TEAM = 0x28,
	PP13_SEL_TEAMCUP_PLAYER = 0x29,
	PP13_SEL_TEAMCUP_TEAM_LOCK = 0x2a,
	PP13_SEL_TEAMCUP_PLAYER_LOCK = 0x2b,
	PP13_SEL_EVENTPRED_0 = 0x2c,
	PP13_SEL_EVENTPRED_1 = 0x2d,
	PP13_SEL_EVENTPRED_2 = 0x2e,
	PP13_SEL_EVENTPRED_3 = 0x2f,
	PP13_SEL_EVENTPRED_4 = 0x30,
	PP13_SEL_EVENTPRED_5 = 0x31,
	PP13_SEL_EVENTPRED_6 = 0x32,
	PP13_SEL_EVENTPRED_7 = 0x33,
	PP13_SEL_EVENTPRED_8 = 0x34,
	PP13_SEL_EVENTPRED_9 = 0x35,
	PP13_SEL_EVENTPRED_10 = 0x36,
	PP13_SEL_EVENTPRED_11 = 0x37,
	PP13_SEL_EVENTPRED_12 = 0x38,
	PP13_SEL_EVENTPRED_13 = 0x39,
	PP13_SEL_EVENTPRED_14 = 0x3a,
	PP13_SEL_EVENTPRED_15 = 0x3b,
	PP13_SEL_EVENTPRED_16 = 0x3c,
	PP13_SEL_EVENTPRED_17 = 0x3d,
	PP13_SEL_EVENTPRED_18 = 0x3e,
	PP13_SEL_EVENTPRED_19 = 0x3f,
	PP13_SEL_EVENTPRED_20 = 0x40,
	PP13_SEL_EVENTPRED_21 = 0x41,
	PP13_SEL_EVENTPRED_22 = 0x42,
	PP13_SEL_EVENTPRED_23 = 0x43,
	PP13_SEL_EVENTPRED_24 = 0x44,
	PP13_SEL_EVENTPRED_25 = 0x45,
	PP13_SEL_EVENTPRED_26 = 0x46,
	PP13_SEL_EVENTPRED_27 = 0x47,
	PP13_SEL_EVENTPRED_28 = 0x48,
	PP13_SEL_EVENTPRED_29 = 0x49,
	PP13_SEL_EVENTPRED_30 = 0x4a,
	PP13_SEL_EVENTPRED_31 = 0x4b,
	PP13_SEL_EVENTPRED_32 = 0x4c,
	PP13_SEL_EVENTPRED_33 = 0x4d,
	PP13_SEL_EVENTPRED_34 = 0x4e,
	PP13_SEL_EVENTPRED_35 = 0x4f,
	PP13_SEL_EVENTPRED_36 = 0x50,
	PP13_SEL_EVENTPRED_37 = 0x51,
	PP13_SEL_EVENTPRED_38 = 0x52,
	PP13_SEL_EVENTPRED_39 = 0x53,
	PP13_SEL_EVENTPRED_40 = 0x54,
	PP13_SEL_EVENTPRED_41 = 0x55,
	PP13_SEL_EVENTPRED_42 = 0x56,
	PP13_SEL_EVENTPRED_43 = 0x57,
	PP13_SEL_SOLO_0 = 0x58,
	PP13_SEL_SOLO_1 = 0x59,
	PP13_SEL_SOLO_2 = 0x5a,
	PP13_SEL_SOLO_3 = 0x5b,
	PP13_SEL_SOLO_4 = 0x5c,
	PP13_SEL_SOLO_5 = 0x5d,
	PP13_SEL_SOLO_6 = 0x5e,
	PP13_SEL_SOLO_7 = 0x5f,
};

// Aligment: 4
// Size: 9
enum class ECandyShopAuditAction : uint32_t
{
	k_ECandyShopAuditAction_Invalid = 0x0,
	k_ECandyShopAuditAction_SupportModify = 0x1,
	k_ECandyShopAuditAction_PurchaseReward = 0x2,
	k_ECandyShopAuditAction_OpenBags = 0x3,
	k_ECandyShopAuditAction_RerollRewards = 0x4,
	k_ECandyShopAuditAction_DoVariableExchange = 0x5,
	k_ECandyShopAuditAction_DoExchange = 0x6,
	k_ECandyShopAuditAction_EventActionGrantInventorySizeIncrease = 0x7,
	k_ECandyShopAuditAction_EventActionGrantRerollChargesIncrease = 0x8,
};

// Aligment: 4
// Size: 4
enum class ECoachTeammateRating : uint32_t
{
	k_ECoachTeammateRating_None = 0x0,
	k_ECoachTeammateRating_Positive = 0x1,
	k_ECoachTeammateRating_Negative = 0x2,
	k_ECoachTeammateRating_Abusive = 0x3,
};

// Aligment: 4
// Size: 4
enum class EWeekendTourneyRichPresenceEvent : uint32_t
{
	k_EWeekendTourneyRichPresenceEvent_None = 0x0,
	k_EWeekendTourneyRichPresenceEvent_StartedMatch = 0x1,
	k_EWeekendTourneyRichPresenceEvent_WonMatch = 0x2,
	k_EWeekendTourneyRichPresenceEvent_Eliminated = 0x3,
};

// Aligment: 4
// Size: 26
enum class EGuildAuditAction : uint32_t
{
	k_EGuildAuditAction_Invalid = 0x0,
	k_EGuildAuditAction_GuildCreated = 0x1,
	k_EGuildAuditAction_GuildLanguageChanged = 0x2,
	k_EGuildAuditAction_GuildFlagsChanged = 0x3,
	k_EGuildAuditAction_GuildMemberJoined = 0x5,
	k_EGuildAuditAction_GuildMemberLeft = 0x6,
	k_EGuildAuditAction_GuildMemberKicked = 0x7,
	k_EGuildAuditAction_GuildMemberRoleChanged = 0x8,
	k_EGuildAuditAction_GuildLogoChanged = 0x9,
	k_EGuildAuditAction_GuildRegionChanged = 0xa,
	k_EGuildAuditAction_GuildDescriptionChanged = 0xb,
	k_EGuildAuditAction_GuildPrimaryColorChanged = 0xc,
	k_EGuildAuditAction_GuildSecondaryColorChanged = 0xd,
	k_EGuildAuditAction_GuildPatternChanged = 0xe,
	k_EGuildAuditAction_AdminClearedLogo = 0xf,
	k_EGuildAuditAction_GuildRequiredRankChanged = 0x10,
	k_EGuildAuditAction_GuildMotDChanged = 0x12,
	k_EGuildAuditAction_AdminResetName = 0x13,
	k_EGuildAuditAction_AdminResetTag = 0x14,
	k_EGuildAuditAction_AdminLock = 0x15,
	k_EGuildAuditAction_GuildNameChanged = 0x16,
	k_EGuildAuditAction_GuildTagChanged = 0x17,
	k_EGuildAuditAction_AdminPermitted = 0x18,
	k_EGuildAuditAction_AdminBlocked = 0x19,
	k_EGuildAuditAction_AdminBannedUser = 0x1a,
	k_EGuildAuditAction_AdminExonerated = 0x1b,
};

// Aligment: 4
// Size: 240
enum class DOTAKeybindCommand_t : uint32_t
{
	DOTA_KEYBIND_NONE = 0x0,
	DOTA_KEYBIND_FIRST = 0x1,
	DOTA_KEYBIND_CAMERA_UP = 0x1,
	DOTA_KEYBIND_CAMERA_DOWN = 0x2,
	DOTA_KEYBIND_CAMERA_LEFT = 0x3,
	DOTA_KEYBIND_CAMERA_RIGHT = 0x4,
	DOTA_KEYBIND_CAMERA_GRIP = 0x5,
	DOTA_KEYBIND_CAMERA_YAW_GRIP = 0x6,
	DOTA_KEYBIND_CAMERA_SAVED_POSITION_1 = 0x7,
	DOTA_KEYBIND_CAMERA_SAVED_POSITION_2 = 0x8,
	DOTA_KEYBIND_CAMERA_SAVED_POSITION_3 = 0x9,
	DOTA_KEYBIND_CAMERA_SAVED_POSITION_4 = 0xa,
	DOTA_KEYBIND_CAMERA_SAVED_POSITION_5 = 0xb,
	DOTA_KEYBIND_CAMERA_SAVED_POSITION_6 = 0xc,
	DOTA_KEYBIND_CAMERA_SAVED_POSITION_7 = 0xd,
	DOTA_KEYBIND_CAMERA_SAVED_POSITION_8 = 0xe,
	DOTA_KEYBIND_CAMERA_SAVED_POSITION_9 = 0xf,
	DOTA_KEYBIND_CAMERA_SAVED_POSITION_10 = 0x10,
	DOTA_KEYBIND_HERO_ATTACK = 0x11,
	DOTA_KEYBIND_HERO_MOVE = 0x12,
	DOTA_KEYBIND_HERO_MOVE_DIRECTION = 0x13,
	DOTA_KEYBIND_PATROL = 0x14,
	DOTA_KEYBIND_HERO_STOP = 0x15,
	DOTA_KEYBIND_HERO_HOLD = 0x16,
	DOTA_KEYBIND_HERO_SELECT = 0x17,
	DOTA_KEYBIND_COURIER_SELECT = 0x18,
	DOTA_KEYBIND_COURIER_DELIVER = 0x19,
	DOTA_KEYBIND_COURIER_BURST = 0x1a,
	DOTA_KEYBIND_COURIER_SHIELD = 0x1b,
	DOTA_KEYBIND_PAUSE = 0x1c,
	DOTA_SELECT_ALL = 0x1d,
	DOTA_SELECT_ALL_OTHERS = 0x1e,
	DOTA_RECENT_EVENT = 0x1f,
	DOTA_KEYBIND_CHAT_TEAM = 0x20,
	DOTA_KEYBIND_CHAT_GLOBAL = 0x21,
	DOTA_KEYBIND_CHAT_TEAM2 = 0x22,
	DOTA_KEYBIND_CHAT_GLOBAL2 = 0x23,
	DOTA_KEYBIND_CHAT_VOICE_PARTY = 0x24,
	DOTA_KEYBIND_CHAT_VOICE_TEAM = 0x25,
	DOTA_KEYBIND_CHAT_WHEEL = 0x26,
	DOTA_KEYBIND_CHAT_WHEEL2 = 0x27,
	DOTA_KEYBIND_CHAT_WHEEL_CARE = 0x28,
	DOTA_KEYBIND_CHAT_WHEEL_BACK = 0x29,
	DOTA_KEYBIND_CHAT_WHEEL_NEED_WARDS = 0x2a,
	DOTA_KEYBIND_CHAT_WHEEL_STUN = 0x2b,
	DOTA_KEYBIND_CHAT_WHEEL_HELP = 0x2c,
	DOTA_KEYBIND_CHAT_WHEEL_GET_PUSH = 0x2d,
	DOTA_KEYBIND_CHAT_WHEEL_GOOD_JOB = 0x2e,
	DOTA_KEYBIND_CHAT_WHEEL_MISSING = 0x2f,
	DOTA_KEYBIND_CHAT_WHEEL_MISSING_TOP = 0x30,
	DOTA_KEYBIND_CHAT_WHEEL_MISSING_MIDDLE = 0x31,
	DOTA_KEYBIND_CHAT_WHEEL_MISSING_BOTTOM = 0x32,
	DOTA_KEYBIND_HERO_CHAT_WHEEL = 0x33,
	DOTA_KEYBIND_SPRAY_WHEEL = 0x34,
	DOTA_KEYBIND_ABILITY_PRIMARY1 = 0x35,
	DOTA_KEYBIND_ABILITY_PRIMARY2 = 0x36,
	DOTA_KEYBIND_ABILITY_PRIMARY3 = 0x37,
	DOTA_KEYBIND_ABILITY_SECONDARY1 = 0x38,
	DOTA_KEYBIND_ABILITY_SECONDARY2 = 0x39,
	DOTA_KEYBIND_ABILITY_ULTIMATE = 0x3a,
	DOTA_KEYBIND_TALENT_UPGRADE_LEFT = 0x3b,
	DOTA_KEYBIND_TALENT_UPGRADE_RIGHT = 0x3c,
	DOTA_KEYBIND_TALENT_UPGRADE_ATTRIBUTE = 0x3d,
	DOTA_KEYBIND_ABILITY_PRIMARY1_QUICKCAST = 0x3e,
	DOTA_KEYBIND_ABILITY_PRIMARY2_QUICKCAST = 0x3f,
	DOTA_KEYBIND_ABILITY_PRIMARY3_QUICKCAST = 0x40,
	DOTA_KEYBIND_ABILITY_SECONDARY1_QUICKCAST = 0x41,
	DOTA_KEYBIND_ABILITY_SECONDARY2_QUICKCAST = 0x42,
	DOTA_KEYBIND_ABILITY_ULTIMATE_QUICKCAST = 0x43,
	DOTA_KEYBIND_ABILITY_PRIMARY1_EXPLICIT_AUTOCAST = 0x44,
	DOTA_KEYBIND_ABILITY_PRIMARY2_EXPLICIT_AUTOCAST = 0x45,
	DOTA_KEYBIND_ABILITY_PRIMARY3_EXPLICIT_AUTOCAST = 0x46,
	DOTA_KEYBIND_ABILITY_SECONDARY1_EXPLICIT_AUTOCAST = 0x47,
	DOTA_KEYBIND_ABILITY_SECONDARY2_EXPLICIT_AUTOCAST = 0x48,
	DOTA_KEYBIND_ABILITY_ULTIMATE_EXPLICIT_AUTOCAST = 0x49,
	DOTA_KEYBIND_ABILITY_PRIMARY1_QUICKCAST_AUTOCAST = 0x4a,
	DOTA_KEYBIND_ABILITY_PRIMARY2_QUICKCAST_AUTOCAST = 0x4b,
	DOTA_KEYBIND_ABILITY_PRIMARY3_QUICKCAST_AUTOCAST = 0x4c,
	DOTA_KEYBIND_ABILITY_SECONDARY1_QUICKCAST_AUTOCAST = 0x4d,
	DOTA_KEYBIND_ABILITY_SECONDARY2_QUICKCAST_AUTOCAST = 0x4e,
	DOTA_KEYBIND_ABILITY_ULTIMATE_QUICKCAST_AUTOCAST = 0x4f,
	DOTA_KEYBIND_ABILITY_PRIMARY1_AUTOMATIC_AUTOCAST = 0x50,
	DOTA_KEYBIND_ABILITY_PRIMARY2_AUTOMATIC_AUTOCAST = 0x51,
	DOTA_KEYBIND_ABILITY_PRIMARY3_AUTOMATIC_AUTOCAST = 0x52,
	DOTA_KEYBIND_ABILITY_SECONDARY1_AUTOMATIC_AUTOCAST = 0x53,
	DOTA_KEYBIND_ABILITY_SECONDARY2_AUTOMATIC_AUTOCAST = 0x54,
	DOTA_KEYBIND_ABILITY_ULTIMATE_AUTOMATIC_AUTOCAST = 0x55,
	DOTA_KEYBIND_INVENTORY1 = 0x56,
	DOTA_KEYBIND_INVENTORY2 = 0x57,
	DOTA_KEYBIND_INVENTORY3 = 0x58,
	DOTA_KEYBIND_INVENTORY4 = 0x59,
	DOTA_KEYBIND_INVENTORY5 = 0x5a,
	DOTA_KEYBIND_INVENTORY6 = 0x5b,
	DOTA_KEYBIND_INVENTORYTP = 0x5c,
	DOTA_KEYBIND_INVENTORYNEUTRAL = 0x5d,
	DOTA_KEYBIND_INVENTORY1_QUICKCAST = 0x5e,
	DOTA_KEYBIND_INVENTORY2_QUICKCAST = 0x5f,
	DOTA_KEYBIND_INVENTORY3_QUICKCAST = 0x60,
	DOTA_KEYBIND_INVENTORY4_QUICKCAST = 0x61,
	DOTA_KEYBIND_INVENTORY5_QUICKCAST = 0x62,
	DOTA_KEYBIND_INVENTORY6_QUICKCAST = 0x63,
	DOTA_KEYBIND_INVENTORYTP_QUICKCAST = 0x64,
	DOTA_KEYBIND_INVENTORYNEUTRAL_QUICKCAST = 0x65,
	DOTA_KEYBIND_INVENTORY1_AUTOCAST = 0x66,
	DOTA_KEYBIND_INVENTORY2_AUTOCAST = 0x67,
	DOTA_KEYBIND_INVENTORY3_AUTOCAST = 0x68,
	DOTA_KEYBIND_INVENTORY4_AUTOCAST = 0x69,
	DOTA_KEYBIND_INVENTORY5_AUTOCAST = 0x6a,
	DOTA_KEYBIND_INVENTORY6_AUTOCAST = 0x6b,
	DOTA_KEYBIND_INVENTORYTP_AUTOCAST = 0x6c,
	DOTA_KEYBIND_INVENTORYNEUTRAL_AUTOCAST = 0x6d,
	DOTA_KEYBIND_INVENTORY1_QUICKAUTOCAST = 0x6e,
	DOTA_KEYBIND_INVENTORY2_QUICKAUTOCAST = 0x6f,
	DOTA_KEYBIND_INVENTORY3_QUICKAUTOCAST = 0x70,
	DOTA_KEYBIND_INVENTORY4_QUICKAUTOCAST = 0x71,
	DOTA_KEYBIND_INVENTORY5_QUICKAUTOCAST = 0x72,
	DOTA_KEYBIND_INVENTORY6_QUICKAUTOCAST = 0x73,
	DOTA_KEYBIND_INVENTORYTP_QUICKAUTOCAST = 0x74,
	DOTA_KEYBIND_INVENTORYNEUTRAL_QUICKAUTOCAST = 0x75,
	DOTA_KEYBIND_CONTROL_GROUP1 = 0x76,
	DOTA_KEYBIND_CONTROL_GROUP2 = 0x77,
	DOTA_KEYBIND_CONTROL_GROUP3 = 0x78,
	DOTA_KEYBIND_CONTROL_GROUP4 = 0x79,
	DOTA_KEYBIND_CONTROL_GROUP5 = 0x7a,
	DOTA_KEYBIND_CONTROL_GROUP6 = 0x7b,
	DOTA_KEYBIND_CONTROL_GROUP7 = 0x7c,
	DOTA_KEYBIND_CONTROL_GROUP8 = 0x7d,
	DOTA_KEYBIND_CONTROL_GROUP9 = 0x7e,
	DOTA_KEYBIND_CONTROL_GROUP10 = 0x7f,
	DOTA_KEYBIND_CONTROL_GROUPCYCLE = 0x80,
	DOTA_KEYBIND_SELECT_ALLY1 = 0x81,
	DOTA_KEYBIND_SELECT_ALLY2 = 0x82,
	DOTA_KEYBIND_SELECT_ALLY3 = 0x83,
	DOTA_KEYBIND_SELECT_ALLY4 = 0x84,
	DOTA_KEYBIND_SELECT_ALLY5 = 0x85,
	DOTA_KEYBIND_SHOP_TOGGLE = 0x86,
	DOTA_KEYBIND_SCOREBOARD_TOGGLE = 0x87,
	DOTA_KEYBIND_COMBATLOG_TOGGLE = 0x88,
	DOTA_KEYBIND_SCREENSHOT = 0x89,
	DOTA_KEYBIND_ESCAPE = 0x8a,
	DOTA_KEYBIND_CONSOLE = 0x8b,
	DOTA_KEYBIND_DEATH_SUMMARY = 0x8c,
	DOTA_KEYBIND_LEARN_ABILITIES = 0x8d,
	DOTA_KEYBIND_LEARN_STATS = 0x8e,
	DOTA_KEYBIND_ACTIVATE_GLYPH = 0x8f,
	DOTA_KEYBIND_ACTIVATE_RADAR = 0x90,
	DOTA_KEYBIND_PURCHASE_QUICKBUY = 0x91,
	DOTA_KEYBIND_PURCHASE_STICKY = 0x92,
	DOTA_KEYBIND_GRAB_STASH_ITEMS = 0x93,
	DOTA_KEYBIND_TOGGLE_AUTOATTACK = 0x94,
	DOTA_KEYBIND_TAUNT = 0x95,
	DOTA_KEYBIND_SHOP_CONSUMABLES = 0x96,
	DOTA_KEYBIND_SHOP_ATTRIBUTES = 0x97,
	DOTA_KEYBIND_SHOP_ARMAMENTS = 0x98,
	DOTA_KEYBIND_SHOP_ARCANE = 0x99,
	DOTA_KEYBIND_SHOP_BASICS = 0x9a,
	DOTA_KEYBIND_SHOP_SUPPORT = 0x9b,
	DOTA_KEYBIND_SHOP_CASTER = 0x9c,
	DOTA_KEYBIND_SHOP_WEAPONS = 0x9d,
	DOTA_KEYBIND_SHOP_ARMOR = 0x9e,
	DOTA_KEYBIND_SHOP_ARTIFACTS = 0x9f,
	DOTA_KEYBIND_SHOP_SIDE_PAGE_1 = 0xa0,
	DOTA_KEYBIND_SHOP_SIDE_PAGE_2 = 0xa1,
	DOTA_KEYBIND_SHOP_SECRET = 0xa2,
	DOTA_KEYBIND_SHOP_SEARCHBOX = 0xa3,
	DOTA_KEYBIND_SHOP_SLOT_1 = 0xa4,
	DOTA_KEYBIND_SHOP_SLOT_2 = 0xa5,
	DOTA_KEYBIND_SHOP_SLOT_3 = 0xa6,
	DOTA_KEYBIND_SHOP_SLOT_4 = 0xa7,
	DOTA_KEYBIND_SHOP_SLOT_5 = 0xa8,
	DOTA_KEYBIND_SHOP_SLOT_6 = 0xa9,
	DOTA_KEYBIND_SHOP_SLOT_7 = 0xaa,
	DOTA_KEYBIND_SHOP_SLOT_8 = 0xab,
	DOTA_KEYBIND_SHOP_SLOT_9 = 0xac,
	DOTA_KEYBIND_SHOP_SLOT_10 = 0xad,
	DOTA_KEYBIND_SHOP_SLOT_11 = 0xae,
	DOTA_KEYBIND_SHOP_SLOT_12 = 0xaf,
	DOTA_KEYBIND_SHOP_SLOT_13 = 0xb0,
	DOTA_KEYBIND_SHOP_SLOT_14 = 0xb1,
	DOTA_KEYBIND_SPEC_CAMERA_UP = 0xb2,
	DOTA_KEYBIND_SPEC_CAMERA_DOWN = 0xb3,
	DOTA_KEYBIND_SPEC_CAMERA_LEFT = 0xb4,
	DOTA_KEYBIND_SPEC_CAMERA_RIGHT = 0xb5,
	DOTA_KEYBIND_SPEC_CAMERA_GRIP = 0xb6,
	DOTA_KEYBIND_SPEC_CAMERA_SAVED_POSITION_1 = 0xb7,
	DOTA_KEYBIND_SPEC_CAMERA_SAVED_POSITION_2 = 0xb8,
	DOTA_KEYBIND_SPEC_CAMERA_SAVED_POSITION_3 = 0xb9,
	DOTA_KEYBIND_SPEC_CAMERA_SAVED_POSITION_4 = 0xba,
	DOTA_KEYBIND_SPEC_CAMERA_SAVED_POSITION_5 = 0xbb,
	DOTA_KEYBIND_SPEC_CAMERA_SAVED_POSITION_6 = 0xbc,
	DOTA_KEYBIND_SPEC_CAMERA_SAVED_POSITION_7 = 0xbd,
	DOTA_KEYBIND_SPEC_CAMERA_SAVED_POSITION_8 = 0xbe,
	DOTA_KEYBIND_SPEC_CAMERA_SAVED_POSITION_9 = 0xbf,
	DOTA_KEYBIND_SPEC_CAMERA_SAVED_POSITION_10 = 0xc0,
	DOTA_KEYBIND_SPEC_UNIT_SELECT = 0xc1,
	DOTA_KEYBIND_SPEC_HERO_SELECT = 0xc2,
	DOTA_KEYBIND_SPEC_PAUSE = 0xc3,
	DOTA_KEYBIND_SPEC_CHAT = 0xc4,
	DOTA_KEYBIND_SPEC_SCOREBOARD = 0xc5,
	DOTA_KEYBIND_SPEC_INCREASE_REPLAY_SPEED = 0xc6,
	DOTA_KEYBIND_SPEC_DECREASE_REPLAY_SPEED = 0xc7,
	DOTA_KEYBIND_SPEC_STATS_HARVEST = 0xc8,
	DOTA_KEYBIND_SPEC_STATS_ITEM = 0xc9,
	DOTA_KEYBIND_SPEC_STATS_GOLD = 0xca,
	DOTA_KEYBIND_SPEC_STATS_XP = 0xcb,
	DOTA_KEYBIND_SPEC_STATS_FANTASY = 0xcc,
	DOTA_KEYBIND_SPEC_STATS_WINCHANCE = 0xcd,
	DOTA_KEYBIND_SPEC_FOW_TOGGLEBOTH = 0xce,
	DOTA_KEYBIND_SPEC_FOW_TOGGLERADIENT = 0xcf,
	DOTA_KEYBIND_SPEC_FOW_TOGGLEDIRE = 0xd0,
	DOTA_KEYBIND_SPEC_OPEN_BROADCASTER_MENU = 0xd1,
	DOTA_KEYBIND_SPEC_DROPDOWN_KDA = 0xd2,
	DOTA_KEYBIND_SPEC_DROPDOWN_LASTHITS_DENIES = 0xd3,
	DOTA_KEYBIND_SPEC_DROPDOWN_LEVEL = 0xd4,
	DOTA_KEYBIND_SPEC_DROPDOWN_XP_PER_MIN = 0xd5,
	DOTA_KEYBIND_SPEC_DROPDOWN_GOLD = 0xd6,
	DOTA_KEYBIND_SPEC_DROPDOWN_TOTALGOLD = 0xd7,
	DOTA_KEYBIND_SPEC_DROPDOWN_GOLD_PER_MIN = 0xd8,
	DOTA_KEYBIND_SPEC_DROPDOWN_BUYBACK = 0xd9,
	DOTA_KEYBIND_SPEC_DROPDOWN_NETWORTH = 0xda,
	DOTA_KEYBIND_SPEC_DROPDOWN_FANTASY = 0xdb,
	DOTA_KEYBIND_SPEC_DROPDOWN_SORT = 0xdc,
	DOTA_KEYBIND_SPEC_DROPDOWN_CLOSE = 0xdd,
	DOTA_KEYBIND_SPEC_FOCUS_PLAYER_1 = 0xde,
	DOTA_KEYBIND_SPEC_FOCUS_PLAYER_2 = 0xdf,
	DOTA_KEYBIND_SPEC_FOCUS_PLAYER_3 = 0xe0,
	DOTA_KEYBIND_SPEC_FOCUS_PLAYER_4 = 0xe1,
	DOTA_KEYBIND_SPEC_FOCUS_PLAYER_5 = 0xe2,
	DOTA_KEYBIND_SPEC_FOCUS_PLAYER_6 = 0xe3,
	DOTA_KEYBIND_SPEC_FOCUS_PLAYER_7 = 0xe4,
	DOTA_KEYBIND_SPEC_FOCUS_PLAYER_8 = 0xe5,
	DOTA_KEYBIND_SPEC_FOCUS_PLAYER_9 = 0xe6,
	DOTA_KEYBIND_SPEC_FOCUS_PLAYER_10 = 0xe7,
	DOTA_KEYBIND_SPEC_COACH_VIEWTOGGLE = 0xe8,
	DOTA_KEYBIND_INSPECTHEROINWORLD = 0xe9,
	DOTA_KEYBIND_CAMERA_ZOOM_IN = 0xea,
	DOTA_KEYBIND_CAMERA_ZOOM_OUT = 0xeb,
	DOTA_KEYBIND_CONTROL_GROUPCYCLEPREV = 0xec,
	DOTA_KEYBIND_DOTA_ALT = 0xed,
	DOTA_KEYBIND_COUNT = 0xee,
};

// Aligment: 4
// Size: 19
enum class SteamUGCQuery : uint32_t
{
	RankedByVote = 0x0,
	RankedByPublicationDate = 0x1,
	AcceptedForGameRankedByAcceptanceDate = 0x2,
	RankedByTrend = 0x3,
	FavoritedByFriendsRankedByPublicationDate = 0x4,
	CreatedByFriendsRankedByPublicationDate = 0x5,
	RankedByNumTimesReported = 0x6,
	CreatedByFollowedUsersRankedByPublicationDate = 0x7,
	NotYetRated = 0x8,
	RankedByTotalVotesAsc = 0x9,
	RankedByVotesUp = 0xa,
	RankedByTextSearch = 0xb,
	RankedByTotalUniqueSubscriptions = 0xc,
	RankedByPlaytimeTrend = 0xd,
	RankedByTotalPlaytime = 0xe,
	RankedByAveragePlaytimeTrend = 0xf,
	RankedByLifetimeAveragePlaytime = 0x10,
	RankedByPlaytimeSessionsTrend = 0x11,
	RankedByLifetimePlaytimeSessions = 0x12,
};

// Aligment: 4
// Size: 21
enum class ETournamentTeamState : uint32_t
{
	k_ETournamentTeamState_Unknown = 0x0,
	k_ETournamentTeamState_Node1 = 0x1,
	k_ETournamentTeamState_NodeMax = 0x400,
	k_ETournamentTeamState_Eliminated = 0x36b3,
	k_ETournamentTeamState_Forfeited = 0x36b4,
	k_ETournamentTeamState_Finished1st = 0x3a99,
	k_ETournamentTeamState_Finished2nd = 0x3a9a,
	k_ETournamentTeamState_Finished3rd = 0x3a9b,
	k_ETournamentTeamState_Finished4th = 0x3a9c,
	k_ETournamentTeamState_Finished5th = 0x3a9d,
	k_ETournamentTeamState_Finished6th = 0x3a9e,
	k_ETournamentTeamState_Finished7th = 0x3a9f,
	k_ETournamentTeamState_Finished8th = 0x3aa0,
	k_ETournamentTeamState_Finished9th = 0x3aa1,
	k_ETournamentTeamState_Finished10th = 0x3aa2,
	k_ETournamentTeamState_Finished11th = 0x3aa3,
	k_ETournamentTeamState_Finished12th = 0x3aa4,
	k_ETournamentTeamState_Finished13th = 0x3aa5,
	k_ETournamentTeamState_Finished14th = 0x3aa6,
	k_ETournamentTeamState_Finished15th = 0x3aa7,
	k_ETournamentTeamState_Finished16th = 0x3aa8,
};

// Aligment: 4
// Size: 4
enum class ECandyShopRewardOptionType : uint32_t
{
	k_eCandyShopRewardOptionType_SingleItem = 0x0,
	k_eCandyShopRewardOptionType_LootList = 0x1,
	k_eCandyShopRewardOptionType_SingleEventAction = 0x2,
	k_eCandyShopRewardOptionType_EventPoints = 0x3,
};

// Aligment: 4
// Size: 6
enum class CMsgBattleReport_Role : uint32_t
{
	k_eUnknownRole = 0xffffffffffffffff,
	k_eSafelane = 0x0,
	k_eMidlane = 0x1,
	k_eOfflane = 0x2,
	k_eSoftSupport = 0x3,
	k_eHardSupport = 0x4,
};

// Aligment: 4
// Size: 3
enum class EGuildChatType : uint32_t
{
	k_EGuildChatType_Unspecified = 0x0,
	k_EGuildChatType_SteamChatGroup = 0x1,
	k_EGuildChatType_GC = 0x2,
};

// Aligment: 4
// Size: 7
enum class EDevEventRequestResult : uint32_t
{
	k_EDevEventRequestResult_Success = 0x0,
	k_EDevEventRequestResult_NotAllowed = 0x1,
	k_EDevEventRequestResult_InvalidEvent = 0x2,
	k_EDevEventRequestResult_SqlFailure = 0x3,
	k_EDevEventRequestResult_Timeout = 0x4,
	k_EDevEventRequestResult_LockFailure = 0x5,
	k_EDevEventRequestResult_SDOLoadFailure = 0x6,
};

// Aligment: 4
// Size: 67
enum class CMsgBattleReport_HighlightType : uint32_t
{
	k_eHighlightTypeInvalid = 0xffffffffffffffff,
	k_eGameWinrate = 0x0,
	k_eLaneWinrate = 0x1,
	k_eMMRDelta = 0x2,
	k_eNumHeroesPlayed = 0x3,
	k_eNumGamesPlayed = 0x4,
	k_eAveragePowerRunesTaken = 0x5,
	k_eAverageBountyRunesTaken = 0x6,
	k_eTotalKillEnemyT1First = 0x7,
	k_eTotalRoshanKills = 0x8,
	k_eTotalDewards = 0x9,
	k_eTotalCampsStacked = 0xa,
	k_eMaxWinstreak = 0xb,
	k_eAverageDewards = 0xc,
	k_eAverageKills = 0xd,
	k_eMaxKills = 0xe,
	k_eAverageAssists = 0xf,
	k_eMaxAssists = 0x10,
	k_eAverageDeaths = 0x11,
	k_eMinDeaths = 0x12,
	k_eAverageCampsStacked = 0x13,
	k_eTotalLastHits = 0x14,
	k_eAverageLastHits = 0x15,
	k_eTotalDenies = 0x16,
	k_eAverageDenies = 0x17,
	k_eTotalGamesWithRoshanAdvantage = 0x18,
	k_ePercentGamesWithRoshanAdvantage = 0x19,
	k_eAverageStunDuration = 0x1a,
	k_eTotalStunDuration = 0x1b,
	k_eAverageTeleportsUsed = 0x1c,
	k_eTotalTeleportsUsed = 0x1d,
	k_eAverageHeroDamage = 0x1e,
	k_eTotalHeroDamage = 0x1f,
	k_eAverageHeroHealing = 0x20,
	k_eTotalHeroHealing = 0x21,
	k_eAverageTowerDamage = 0x22,
	k_eTotalTowerDamage = 0x23,
	k_eMaxLossStreak = 0x24,
	k_eAverageGameDuration = 0x25,
	k_eMaxGameDuration = 0x26,
	k_eMinGameDuration = 0x27,
	k_eAverageWinDuration = 0x28,
	k_eMaxWinDuration = 0x29,
	k_eMinWinDuration = 0x2a,
	k_eAverageLossDuration = 0x2b,
	k_eMaxLossDuration = 0x2c,
	k_eMinLossDuration = 0x2d,
	k_ePctGamesEnemyT1TakenFirst = 0x2e,
	k_eMaxCampsStacked = 0x2f,
	k_eMaxDewards = 0x30,
	k_eMaxRoshanKills = 0x31,
	k_eMaxBountyRunesTaken = 0x32,
	k_eMaxPowerRunesTaken = 0x33,
	k_eMaxDeaths = 0x34,
	k_eMaxLastHits = 0x35,
	k_eMaxDenies = 0x36,
	k_eRadiantWinRate = 0x37,
	k_eDireWinRate = 0x38,
	k_eRadiantGameCount = 0x39,
	k_eDireGameCount = 0x3a,
	k_eMaxDamage = 0x3b,
	k_eMaxHealing = 0x3c,
	k_eMaxTowerDamage = 0x3d,
	k_eAverageGPM = 0x3e,
	k_eMaxGPM = 0x3f,
	k_eAverageXPM = 0x40,
	k_eMaxXPM = 0x41,
};

// Aligment: 4
// Size: 2
enum class ETournamentTemplate : uint32_t
{
	k_ETournamentTemplate_None = 0x0,
	k_ETournamentTemplate_AutomatedWin3 = 0x1,
};

// Aligment: 4
// Size: 3
enum class CMsgBattleReport_HighlightRarity : uint32_t
{
	k_eHighlightCommon = 0x0,
	k_eHighlightUncommon = 0x1,
	k_eHighlightRare = 0x2,
};

// Aligment: 4
// Size: 14
enum class ESupportEventRequestResult : uint32_t
{
	k_ESupportEventRequestResult_Success = 0x0,
	k_ESupportEventRequestResult_Timeout = 0x1,
	k_ESupportEventRequestResult_CantLockSOCache = 0x2,
	k_ESupportEventRequestResult_ItemNotInInventory = 0x3,
	k_ESupportEventRequestResult_InvalidItemDef = 0x4,
	k_ESupportEventRequestResult_InvalidEvent = 0x5,
	k_ESupportEventRequestResult_EventExpired = 0x6,
	k_ESupportEventRequestResult_InvalidSupportAccount = 0x7,
	k_ESupportEventRequestResult_InvalidSupportMessage = 0x8,
	k_ESupportEventRequestResult_InvalidEventPoints = 0x9,
	k_ESupportEventRequestResult_InvalidPremiumPoints = 0xa,
	k_ESupportEventRequestResult_InvalidActionID = 0xb,
	k_ESupportEventRequestResult_InvalidActionScore = 0xc,
	k_ESupportEventRequestResult_TransactionFailed = 0xd,
};

// Aligment: 4
// Size: 25
enum class EHeroSelectionText : uint32_t
{
	k_EHeroSelectionText_Invalid = 0xffffffffffffffff,
	k_EHeroSelectionText_None = 0x0,
	k_EHeroSelectionText_ChooseHero = 0x1,
	k_EHeroSelectionText_AllDraft_Planning_YouFirst = 0x2,
	k_EHeroSelectionText_AllDraft_Planning_TheyFirst = 0x3,
	k_EHeroSelectionText_AllDraft_Banning = 0x4,
	k_EHeroSelectionText_AllDraft_Ban_Waiting = 0x5,
	k_EHeroSelectionText_AllDraft_PickTwo = 0x6,
	k_EHeroSelectionText_AllDraft_PickOneMore = 0x7,
	k_EHeroSelectionText_AllDraft_PickOne = 0x8,
	k_EHeroSelectionText_AllDraft_WaitingRadiant = 0x9,
	k_EHeroSelectionText_AllDraft_WaitingDire = 0xa,
	k_EHeroSelectionText_AllDraft_TeammateRandomed = 0xb,
	k_EHeroSelectionText_AllDraft_YouPicking_LosingGold = 0xc,
	k_EHeroSelectionText_AllDraft_TheyPicking_LosingGold = 0xd,
	k_EHeroSelectionText_CaptainsMode_ChooseCaptain = 0xe,
	k_EHeroSelectionText_CaptainsMode_WaitingForChooseCaptain = 0xf,
	k_EHeroSelectionText_CaptainsMode_YouSelect = 0x10,
	k_EHeroSelectionText_CaptainsMode_TheySelect = 0x11,
	k_EHeroSelectionText_CaptainsMode_YouBan = 0x12,
	k_EHeroSelectionText_CaptainsMode_TheyBan = 0x13,
	k_EHeroSelectionText_RandomDraft_HeroReview = 0x14,
	k_EHeroSelectionText_RandomDraft_RoundDisplay = 0x15,
	k_EHeroSelectionText_RandomDraft_Waiting = 0x16,
	k_EHeroSelectionText_EventGame_BanPhase = 0x17,
};

// Aligment: 4
// Size: 4
enum class EItemEditorReservationResult : uint32_t
{
	k_EItemEditorReservationResult_OK = 0x1,
	k_EItemEditorReservationResult_AlreadyExists = 0x2,
	k_EItemEditorReservationResult_Reserved = 0x3,
	k_EItemEditorReservationResult_TimedOut = 0x4,
};

// Aligment: 4
// Size: 2
enum class EPartyBeaconType : uint32_t
{
	k_EPartyBeaconType_Available = 0x0,
	k_EPartyBeaconType_Joinable = 0x1,
};

// Aligment: 4
// Size: 10
enum class EDOTAGroupMergeResult : uint32_t
{
	k_EDOTAGroupMergeResult_OK = 0x0,
	k_EDOTAGroupMergeResult_FAILED_GENERIC = 0x1,
	k_EDOTAGroupMergeResult_NOT_LEADER = 0x2,
	k_EDOTAGroupMergeResult_TOO_MANY_PLAYERS = 0x3,
	k_EDOTAGroupMergeResult_TOO_MANY_COACHES = 0x4,
	k_EDOTAGroupMergeResult_ENGINE_MISMATCH = 0x5,
	k_EDOTAGroupMergeResult_NO_SUCH_GROUP = 0x6,
	k_EDOTAGroupMergeResult_OTHER_GROUP_NOT_OPEN = 0x7,
	k_EDOTAGroupMergeResult_ALREADY_INVITED = 0x8,
	k_EDOTAGroupMergeResult_NOT_INVITED = 0x9,
};

// Aligment: 4
// Size: 6
enum class PortraitScale_t : uint32_t
{
	PORTRAIT_SCALE_INVALID = 0xffffffffffffffff,
	PORTRAIT_SCALE_LOADOUT = 0x0,
	PORTRAIT_SCALE_ALTERNATE_LOADOUT = 0x1,
	PORTRAIT_SCALE_WORLD = 0x2,
	PORTRAIT_SCALE_SPECTATOR_LOADOUT = 0x3,
	PORTRAIT_SCALE_VERSUS_LOADOUT = 0x4,
};

// Aligment: 4
// Size: 12
enum class ETournamentEvent : uint32_t
{
	k_ETournamentEvent_None = 0x0,
	k_ETournamentEvent_TournamentCreated = 0x1,
	k_ETournamentEvent_TournamentsMerged = 0x2,
	k_ETournamentEvent_GameOutcome = 0x3,
	k_ETournamentEvent_TeamGivenBye = 0x4,
	k_ETournamentEvent_TournamentCanceledByAdmin = 0x5,
	k_ETournamentEvent_TeamAbandoned = 0x6,
	k_ETournamentEvent_ScheduledGameStarted = 0x7,
	k_ETournamentEvent_Canceled = 0x8,
	k_ETournamentEvent_TeamParticipationTimedOut_EntryFeeRefund = 0x9,
	k_ETournamentEvent_TeamParticipationTimedOut_EntryFeeForfeit = 0xa,
	k_ETournamentEvent_TeamParticipationTimedOut_GrantedVictory = 0xb,
};

// Aligment: 4
// Size: 2
enum class DOTA_WatchReplayType : uint32_t
{
	DOTA_WATCH_REPLAY_NORMAL = 0x0,
	DOTA_WATCH_REPLAY_HIGHLIGHTS = 0x1,
};

// Aligment: 4
// Size: 5
enum class EHighlightScoreComparison : uint32_t
{
	k_eScoreLessThan = 0x0,
	k_eScoreLessThanOrEqual = 0x1,
	k_eScoreEqual = 0x2,
	k_eScoreGreaterThanOrEqual = 0x3,
	k_eScoreGreaterThan = 0x4,
};

// Aligment: 4
// Size: 4
enum class CMsgBattleReport_ELaneOutcome : uint32_t
{
	k_eUnknownLaneOutcome = 0xffffffffffffffff,
	k_eWonLane = 0x0,
	k_eLostLane = 0x1,
	k_eEvenLane = 0x2,
};

// Aligment: 4
// Size: 9
enum class ETeamFanContentAssetType : uint32_t
{
	k_eFanContentAssetType_LogoPNG = 0x1,
	k_eFanContentAssetType_LogoSVG = 0x2,
	k_eFanContentAssetType_Logo3D = 0x3,
	k_eFanContentAssetType_Players = 0x4,
	k_eFanContentAssetType_Sprays = 0x5,
	k_eFanContentAssetType_Wallpapers = 0x6,
	k_eFanContentAssetType_Emoticons = 0x7,
	k_eFanContentAssetType_VoiceLines = 0x8,
	k_eFanContentAssetType_Localization = 0x9,
};

// Aligment: 4
// Size: 2
enum class StartupBehavior_t : uint32_t
{
	UNIT_STARTUP_BEHAVIOR_DEFAULT = 0x0,
	UNIT_STARTUP_BEHAVIOR_TAUNT = 0x1,
};

// Aligment: 4
// Size: 4
enum class CMsgDOTARequestMatches_SkillLevel : uint32_t
{
	CMsgDOTARequestMatches_SkillLevel_Any = 0x0,
	CMsgDOTARequestMatches_SkillLevel_Normal = 0x1,
	CMsgDOTARequestMatches_SkillLevel_High = 0x2,
	CMsgDOTARequestMatches_SkillLevel_VeryHigh = 0x3,
};

// Aligment: 4
// Size: 15
enum class EStyleNodeType : uint32_t
{
	ROOT = 0x0,
	EXPRESSION = 0x1,
	PROPERTY = 0x2,
	DEFINE = 0x3,
	IMPORT = 0x4,
	KEYFRAMES = 0x5,
	KEYFRAME_SELECTOR = 0x6,
	STYLE_SELECTOR = 0x7,
	WHITESPACE = 0x8,
	EXPRESSION_TEXT = 0x9,
	EXPRESSION_URL = 0xa,
	EXPRESSION_CONCAT = 0xb,
	REFERENCE_CONTENT = 0xc,
	REFERENCE_COMPILED = 0xd,
	REFERENCE_PASSTHROUGH = 0xe,
};

// Aligment: 4
// Size: 13
enum class ELayoutNodeType : uint32_t
{
	ROOT = 0x0,
	STYLES = 0x1,
	SCRIPT_BODY = 0x2,
	SCRIPTS = 0x3,
	SNIPPETS = 0x4,
	INCLUDE = 0x5,
	SNIPPET = 0x6,
	PANEL = 0x7,
	PANEL_ATTRIBUTE = 0x8,
	PANEL_ATTRIBUTE_VALUE = 0x9,
	REFERENCE_CONTENT = 0xa,
	REFERENCE_COMPILED = 0xb,
	REFERENCE_PASSTHROUGH = 0xc,
};

// Aligment: 2
// Size: 8
class CExampleSchemaVData_Monomorphic
{
public:
	int32_t m_nExample1; // 0x0
	int32_t m_nExample2; // 0x4
};

// Aligment: 1
// Size: 8
struct ResourceId_t
{
public:
	uint64_t m_Value; // 0x0
};

// Aligment: 1
// Size: 24
class CExampleSchemaVData_PolymorphicDerivedB : public CExampleSchemaVData_PolymorphicBase
{
public:
	int32_t m_nDerivedB; // 0x10
};

// Aligment: 1
// Size: 16
class CExampleSchemaVData_PolymorphicBase
{
public:
	int32_t m_nBase; // 0x8
};

// Aligment: 1
// Size: 24
class CExampleSchemaVData_PolymorphicDerivedA : public CExampleSchemaVData_PolymorphicBase
{
public:
	int32_t m_nDerivedA; // 0x10
};

// Aligment: 22
// Size: 384
class CSchemaSystemInternalRegistration
{
public:
	Vector2D m_Vector2D; // 0x0
	Vector m_Vector; // 0x8
	VectorAligned m_VectorAligned; // 0x20
	Quaternion m_Quaternion; // 0x30
	QAngle m_QAngle; // 0x40
	RotationVector m_RotationVector; // 0x4c
	RadianEuler m_RadianEuler; // 0x58
	DegreeEuler m_DegreeEuler; // 0x64
	QuaternionStorage m_QuaternionStorage; // 0x70
	matrix3x4_t m_matrix3x4_t; // 0x80
	matrix3x4a_t m_matrix3x4a_t; // 0xb0
	Color m_Color; // 0xe0
	Vector4D m_Vector4D; // 0xe4
	CTransform m_CTransform; // 0x100
	KeyValues* m_pKeyValues; // 0x120
	CUtlBinaryBlock m_CUtlBinaryBlock; // 0x128
	CUtlString m_CUtlString; // 0x140
	CUtlSymbol m_CUtlSymbol; // 0x148
	CUtlStringToken m_stringToken; // 0x14c
	CUtlStringTokenWithStorage m_stringTokenWithStorage; // 0x150
	CResourceArray< CResourcePointer< CResourceString > > m_ResourceTypes; // 0x168
	KeyValues3 m_KV3; // 0x170
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeCResourceManifestInternal
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeCDOTAPatchNotesList
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeCEntityLump
{
public:
// <no members described>
};

// Aligment: 2
// Size: 16
struct ManifestTestResource_t
{
public:
	// MKV3TransferName "name"
	CUtlString m_name; // 0x0
	// MKV3TransferName "child"
	CStrongHandle< InfoForResourceTypeManifestTestResource_t > m_child; // 0x8
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeCSequenceGroupData
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeIParticleSystemDefinition
{
public:
// <no members described>
};

// Aligment: 1
// Size: 2
struct FuseVariableIndex_t
{
public:
	uint16_t m_Value; // 0x0
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeCTextureBase
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeCModel
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeCVDataResource
{
public:
// <no members described>
};

// Aligment: 5
// Size: 32
struct FunctionInfo_t
{
public:
	CUtlString m_name; // 0x8
	CUtlStringToken m_nameToken; // 0x10
	int32_t m_nParamCount; // 0x14
	FuseFunctionIndex_t m_nIndex; // 0x18
	bool m_bIsPure; // 0x1a
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeCPanoramaDynamicImages
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeIVectorGraphic
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeIMaterial2
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeCAnimData
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeCVMixListResource
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeCCompositeMaterialKit
{
public:
// <no members described>
};

// Aligment: 4
// Size: 80
class CFuseProgram
{
public:
	CUtlVector< uint8 > m_programBuffer; // 0x0
	CUtlVector< FuseVariableIndex_t > m_variablesRead; // 0x18
	CUtlVector< FuseVariableIndex_t > m_variablesWritten; // 0x30
	int32_t m_nMaxTempVarsUsed; // 0x48
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeCSmartProp
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeCWorldNode
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeCPanoramaStyle
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeCDACGameDefsData
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeCVSoundEventScriptList
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeCAnimationGroup
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
struct InfoForResourceTypeVSound_t
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
struct InfoForResourceTypeTestResource_t
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeCPanoramaLayout
{
public:
// <no members described>
};

// Aligment: 4
// Size: 64
class FourQuaternions
{
public:
	fltx4 x; // 0x0
	fltx4 y; // 0x10
	fltx4 z; // 0x20
	fltx4 w; // 0x30
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeIParticleSnapshot
{
public:
// <no members described>
};

// Aligment: 6
// Size: 24
struct VariableInfo_t
{
public:
	CUtlString m_name; // 0x0
	CUtlStringToken m_nameToken; // 0x8
	FuseVariableIndex_t m_nIndex; // 0xc
	uint8_t m_nNumComponents; // 0xe
	FuseVariableType_t m_eVarType; // 0xf
	FuseVariableAccess_t m_eAccess; // 0x10
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeCPostProcessingResource
{
public:
// <no members described>
};

// Aligment: 2
// Size: 24
struct AABB_t
{
public:
	Vector m_vMinBounds; // 0x0
	Vector m_vMaxBounds; // 0xc
};

// Aligment: 0
// Size: 1
struct InfoForResourceTypeProceduralTestResource_t
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
struct InfoForResourceTypeWorld_t
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeCPhysAggregateData
{
public:
// <no members described>
};

// Aligment: 1
// Size: 8
struct TestResource_t
{
public:
	// MKV3TransferName "name"
	CUtlString m_name; // 0x0
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeCVoxelVisibility
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeCRenderMesh
{
public:
// <no members described>
};

// Aligment: 3
// Size: 104
class CFuseSymbolTable
{
public:
	CUtlHashtable< CUtlStringToken, ConstantInfo_t > m_constants; // 0x8
	CUtlHashtable< CUtlStringToken, VariableInfo_t > m_variables; // 0x28
	CUtlHashtable< CUtlStringToken, FunctionInfo_t > m_functions; // 0x48
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeIAnimGraphModelBinding
{
public:
// <no members described>
};

// Aligment: 1
// Size: 2
struct FuseFunctionIndex_t
{
public:
	uint16_t m_Value; // 0x0
};

// Aligment: 3
// Size: 16
struct ConstantInfo_t
{
public:
	CUtlString m_name; // 0x0
	CUtlStringToken m_nameToken; // 0x8
	float m_flValue; // 0xc
};

// Aligment: 0
// Size: 1
struct InfoForResourceTypeManifestTestResource_t
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeCPanoramaTypeScript
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeCVPhysXSurfacePropertiesList
{
public:
// <no members described>
};

// Aligment: 2
// Size: 8
struct PackedAABB_t
{
public:
	uint32_t m_nPackedMin; // 0x0
	uint32_t m_nPackedMax; // 0x4
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeCVSoundStackScriptList
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeCPanoramaScript
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeCChoreoSceneFileData
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeCMorphSetData
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeCDotaItemDefinitionResource
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeCCSGOItem
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
class InfoForResourceTypeCResponseRulesList
{
public:
// <no members described>
};

// Aligment: 7
// Size: 56
struct RenderInputLayoutField_t
{
public:
	uint8[32] m_pSemanticName; // 0x0
	int32_t m_nSemanticIndex; // 0x20
	uint32_t m_Format; // 0x24
	int32_t m_nOffset; // 0x28
	int32_t m_nSlot; // 0x2c
	RenderSlotType_t m_nSlotType; // 0x30
	int32_t m_nInstanceStepRate; // 0x34
};

// Aligment: 1
// Size: 24
struct VsInputSignature_t
{
public:
	CUtlVector< VsInputSignatureElement_t > m_elems; // 0x0
};

// Aligment: 4
// Size: 196
struct VsInputSignatureElement_t
{
public:
	char[64] m_pName; // 0x0
	char[64] m_pSemantic; // 0x40
	char[64] m_pD3DSemanticName; // 0x80
	int32_t m_nD3DSemanticIndex; // 0xc0
};

// Aligment: 0
// Size: 48
struct EventServerPollNetworking_t : public EventSimulate_t
{
public:
// <no members described>
};

// Aligment: 2
// Size: 48
struct EventClientProcessInput_t
{
public:
	EngineLoopState_t m_LoopState; // 0x0
	float m_flRealTime; // 0x28
};

// Aligment: 1
// Size: 4
struct EventClientPollNetworking_t
{
public:
	int32_t m_nTickCount; // 0x0
};

// Aligment: 4
// Size: 40
struct EngineLoopState_t
{
public:
	int32_t m_nPlatWindowWidth; // 0x18
	int32_t m_nPlatWindowHeight; // 0x1c
	int32_t m_nRenderWidth; // 0x20
	int32_t m_nRenderHeight; // 0x24
};

// Aligment: 8
// Size: 120
struct EntComponentInfo_t
{
public:
	V_uuid_t m_id; // 0x0
	char* m_pName; // 0x10
	char* m_pCPPClassname; // 0x18
	char* m_pNetworkDataReferencedDescription; // 0x20
	char* m_pNetworkDataReferencedPtrPropDescription; // 0x28
	int32_t m_nRuntimeIndex; // 0x30
	uint32_t m_nFlags; // 0x34
	CEntityComponentHelper* m_pBaseClassComponentHelper; // 0x70
};

// Aligment: 0
// Size: 8
class CEmptyEntityInstance
{
public:
// <no members described>
};

// Aligment: 0
// Size: 48
struct EventServerProcessNetworking_t : public EventSimulate_t
{
public:
// <no members described>
};

// Aligment: 3
// Size: 48
struct EventSimulate_t
{
public:
	EngineLoopState_t m_LoopState; // 0x0
	bool m_bFirstTick; // 0x28
	bool m_bLastTick; // 0x29
};

// Aligment: 0
// Size: 16
struct EntOutput_t
{
public:
// <no members described>
};

// Aligment: 8
// Size: 96
struct EventSetTime_t
{
public:
	EngineLoopState_t m_LoopState; // 0x0
	int32_t m_nClientOutputFrames; // 0x28
	double m_flRealTime; // 0x30
	double m_flRenderTime; // 0x38
	double m_flRenderFrameTime; // 0x40
	double m_flRenderFrameTimeUnbounded; // 0x48
	double m_flRenderFrameTimeUnscaled; // 0x50
	double m_flTickRemainder; // 0x58
};

// Aligment: 0
// Size: 64
struct EventServerAdvanceTick_t : public EventAdvanceTick_t, EventSimulate_t
{
public:
// <no members described>
};

// Aligment: 2
// Size: 8
struct EventClientSendInput_t
{
public:
	bool m_bFinalClientCommandTick; // 0x0
	int32_t m_nAdditionalClientCommandsToCreate; // 0x4
};

// Aligment: 3
// Size: 48
struct EventClientFrameSimulate_t
{
public:
	EngineLoopState_t m_LoopState; // 0x0
	float m_flRealTime; // 0x28
	float m_flFrameTime; // 0x2c
};

// Aligment: 6
// Size: 72
struct EventClientPreOutput_t
{
public:
	EngineLoopState_t m_LoopState; // 0x0
	double m_flRenderTime; // 0x28
	double m_flRenderFrameTime; // 0x30
	double m_flRenderFrameTimeUnbounded; // 0x38
	float m_flRealTime; // 0x40
	bool m_bRenderOnly; // 0x44
};

// Aligment: 0
// Size: 1
struct EventModInitialized_t
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
class CVariantDefaultAllocator
{
public:
// <no members described>
};

// Aligment: 0
// Size: 64
struct EventClientPostAdvanceTick_t : public EventPostAdvanceTick_t, EventSimulate_t
{
public:
// <no members described>
};

// Aligment: 0
// Size: 1
struct EventSplitScreenStateChanged_t
{
public:
// <no members described>
};

// Aligment: 4
// Size: 64
struct EventAdvanceTick_t : public EventSimulate_t
{
public:
	int32_t m_nCurrentTick; // 0x30
	int32_t m_nCurrentTickThisFrame; // 0x34
	int32_t m_nTotalTicksThisFrame; // 0x38
	int32_t m_nTotalTicks; // 0x3c
};

// Aligment: 0
// Size: 1
struct EventClientProcessNetworking_t
{
public:
// <no members described>
};

// Aligment: 0
// Size: 8
class IHandleEntity
{
public:
// <no members described>
};

// Aligment: 0
// Size: 48
struct EventClientPauseSimulate_t : public EventSimulate_t
{
public:
// <no members described>
};

// Aligment: 0
// Size: 48
struct EventClientPreSimulate_t : public EventSimulate_t
{
public:
// <no members described>
};

// Aligment: 1
// Size: 16
struct EventPostDataUpdate_t
{
public:
	int32_t m_nCount; // 0x0
};

// Aligment: 1
// Size: 4
struct EventProfileStorageAvailable_t
{
public:
	CSplitScreenSlot m_nSplitScreenSlot; // 0x0
};

// Aligment: 0
// Size: 64
struct EventServerPostAdvanceTick_t : public EventPostAdvanceTick_t, EventSimulate_t
{
public:
// <no members described>
};

// Aligment: 0
// Size: 48
struct EventServerSimulate_t : public EventSimulate_t
{
public:
// <no members described>
};

// Aligment: 1
// Size: 4
struct EventAppShutdown_t
{
public:
	int32_t m_nDummy0; // 0x0
};

// Aligment: 1
// Size: 4
struct EventFrameBoundary_t
{
public:
	float m_flFrameTime; // 0x0
};

// Aligment: 3
// Size: 48
struct EventClientProcessGameInput_t
{
public:
	EngineLoopState_t m_LoopState; // 0x0
	float m_flRealTime; // 0x28
	float m_flFrameTime; // 0x2c
};

// Aligment: 0
// Size: 1
struct EventClientPredictionPostNetupdate_t
{
public:
// <no members described>
};

// Aligment: 1
// Size: 16
struct EventPreDataUpdate_t
{
public:
	int32_t m_nCount; // 0x0
};

// Aligment: 2
// Size: 48
struct EventClientPollInput_t
{
public:
	EngineLoopState_t m_LoopState; // 0x0
	float m_flRealTime; // 0x28
};

// Aligment: 5
// Size: 64
struct EventClientPostOutput_t
{
public:
	EngineLoopState_t m_LoopState; // 0x0
	double m_flRenderTime; // 0x28
	float m_flRenderFrameTime; // 0x30
	float m_flRenderFrameTimeUnbounded; // 0x34
	bool m_bRenderOnly; // 0x38
};

// Aligment: 0
// Size: 48
struct EventClientSimulate_t : public EventSimulate_t
{
public:
// <no members described>
};

// Aligment: 1
// Size: 40
class CNetworkVarChainer
{
public:
	// MNetworkDisable
	// MNetworkChangeAccessorFieldPathIndex
	ChangeAccessorFieldPathIndex_t m_PathIndex; // 0x20
};

// Aligment: 0
// Size: 48
struct EntInput_t
{
public:
// <no members described>
};

// Aligment: 0
// Size: 64
struct EventClientAdvanceTick_t : public EventAdvanceTick_t, EventSimulate_t
{
public:
// <no members described>
};

// Aligment: 0
// Size: 8
class CEntityComponent
{
public:
// <no members described>
};

// Aligment: 4
// Size: 40
class CEntityComponentHelper
{
public:
	uint32_t m_flags; // 0x8
	EntComponentInfo_t* m_pInfo; // 0x10
	int32_t m_nPriority; // 0x18
	CEntityComponentHelper* m_pNext; // 0x20
};

// Aligment: 0
// Size: 48
struct EventServerPostSimulate_t : public EventSimulate_t
{
public:
// <no members described>
};

// Aligment: 5
// Size: 56
struct EventClientOutput_t
{
public:
	EngineLoopState_t m_LoopState; // 0x0
	float m_flRenderTime; // 0x28
	float m_flRealTime; // 0x2c
	float m_flRenderFrameTimeUnbounded; // 0x30
	bool m_bRenderOnly; // 0x34
};

// Aligment: 1
// Size: 1
struct EventClientSceneSystemThreadStateChange_t
{
public:
	bool m_bThreadsActive; // 0x0
};

// Aligment: 1
// Size: 40
class CEntityIOOutput
{
public:
	CVariantBase< CVariantDefaultAllocator > m_Value; // 0x18
};

// Aligment: 4
// Size: 64
struct EventPostAdvanceTick_t : public EventSimulate_t
{
public:
	int32_t m_nCurrentTick; // 0x30
	int32_t m_nCurrentTickThisFrame; // 0x34
	int32_t m_nTotalTicksThisFrame; // 0x38
	int32_t m_nTotalTicks; // 0x3c
};

// Aligment: 3
// Size: 48
struct EventSimpleLoopFrameUpdate_t
{
public:
	EngineLoopState_t m_LoopState; // 0x0
	float m_flRealTime; // 0x28
	float m_flFrameTime; // 0x2c
};

// Aligment: 0
// Size: 48
struct EventClientPostSimulate_t : public EventSimulate_t
{
public:
// <no members described>
};

// Aligment: 1
// Size: 16
struct MaterialParamTexture_t : public MaterialParam_t
{
public:
	CStrongHandle< InfoForResourceTypeCTextureBase > m_pValue; // 0x8
};

// Aligment: 1
// Size: 16
struct MaterialParamFloat_t : public MaterialParam_t
{
public:
	float m_flValue; // 0x8
};

// Aligment: 10
// Size: 112
struct PostProcessingBloomParameters_t
{
public:
	BloomBlendMode_t m_blendMode; // 0x0
	float m_flBloomStrength; // 0x4
	float m_flScreenBloomStrength; // 0x8
	float m_flBlurBloomStrength; // 0xc
	float m_flBloomThreshold; // 0x10
	float m_flBloomThresholdWidth; // 0x14
	float m_flSkyboxBloomStrength; // 0x18
	float m_flBloomStartValue; // 0x1c
	float32[5] m_flBlurWeight; // 0x20
	Vector[5] m_vBlurTint; // 0x34
};

// Aligment: 14
// Size: 304
struct MaterialResourceData_t
{
public:
	CUtlString m_materialName; // 0x0
	CUtlString m_shaderName; // 0x8
	CUtlVector< MaterialParamInt_t > m_intParams; // 0x10
	CUtlVector< MaterialParamFloat_t > m_floatParams; // 0x28
	CUtlVector< MaterialParamVector_t > m_vectorParams; // 0x40
	CUtlVector< MaterialParamTexture_t > m_textureParams; // 0x58
	CUtlVector< MaterialParamBuffer_t > m_dynamicParams; // 0x70
	CUtlVector< MaterialParamBuffer_t > m_dynamicTextureParams; // 0x88
	CUtlVector< MaterialParamInt_t > m_intAttributes; // 0xa0
	CUtlVector< MaterialParamFloat_t > m_floatAttributes; // 0xb8
	CUtlVector< MaterialParamVector_t > m_vectorAttributes; // 0xd0
	CUtlVector< MaterialParamTexture_t > m_textureAttributes; // 0xe8
	CUtlVector< MaterialParamString_t > m_stringAttributes; // 0x100
	CUtlVector< CUtlString > m_renderAttributesUsed; // 0x118
};

// Aligment: 1
// Size: 32
struct MaterialParamBuffer_t : public MaterialParam_t
{
public:
	CUtlBinaryBlock m_value; // 0x8
};

// Aligment: 15
// Size: 60
struct PostProcessingTonemapParameters_t
{
public:
	float m_flExposureBias; // 0x0
	float m_flShoulderStrength; // 0x4
	float m_flLinearStrength; // 0x8
	float m_flLinearAngle; // 0xc
	float m_flToeStrength; // 0x10
	float m_flToeNum; // 0x14
	float m_flToeDenom; // 0x18
	float m_flWhitePoint; // 0x1c
	float m_flLuminanceSource; // 0x20
	float m_flExposureBiasShadows; // 0x24
	float m_flExposureBiasHighlights; // 0x28
	float m_flMinShadowLum; // 0x2c
	float m_flMaxShadowLum; // 0x30
	float m_flMinHighlightLum; // 0x34
	float m_flMaxHighlightLum; // 0x38
};

// Aligment: 5
// Size: 20
struct PostProcessingLocalContrastParameters_t
{
public:
	float m_flLocalContrastStrength; // 0x0
	float m_flLocalContrastEdgeStrength; // 0x4
	float m_flLocalContrastVignetteStart; // 0x8
	float m_flLocalContrastVignetteEnd; // 0xc
	float m_flLocalContrastVignetteBlur; // 0x10
};

// Aligment: 6
// Size: 36
struct PostProcessingVignetteParameters_t
{
public:
	float m_flVignetteStrength; // 0x0
	Vector2D m_vCenter; // 0x4
	float m_flRadius; // 0xc
	float m_flRoundness; // 0x10
	float m_flFeather; // 0x14
	Vector m_vColorTint; // 0x18
};

// Aligment: 1
// Size: 16
struct MaterialParamInt_t : public MaterialParam_t
{
public:
	int32_t m_nValue; // 0x8
};

// Aligment: 11
// Size: 280
struct PostProcessingResource_t
{
public:
	bool m_bHasTonemapParams; // 0x0
	PostProcessingTonemapParameters_t m_toneMapParams; // 0x4
	bool m_bHasBloomParams; // 0x40
	PostProcessingBloomParameters_t m_bloomParams; // 0x44
	bool m_bHasVignetteParams; // 0xb4
	PostProcessingVignetteParameters_t m_vignetteParams; // 0xb8
	bool m_bHasLocalContrastParams; // 0xdc
	PostProcessingLocalContrastParameters_t m_localConstrastParams; // 0xe0
	int32_t m_nColorCorrectionVolumeDim; // 0xf4
	CUtlBinaryBlock m_colorCorrectionVolumeData; // 0xf8
	bool m_bHasColorCorrection; // 0x110
};

// Aligment: 1
// Size: 16
struct MaterialParamString_t : public MaterialParam_t
{
public:
	CUtlString m_value; // 0x8
};

// Aligment: 1
// Size: 24
struct MaterialParamVector_t : public MaterialParam_t
{
public:
	Vector4D m_value; // 0x8
};

// Aligment: 1
// Size: 8
struct MaterialParam_t
{
public:
	CUtlString m_name; // 0x0
};

// Aligment: 1
// Size: 2
struct ChangeAccessorFieldPathIndex_t
{
public:
	int16_t m_Value; // 0x0
};

// Aligment: 1
// Size: 56
class CAnimTagManagerUpdater
{
public:
	CUtlVector< CSmartPtr< CAnimTagBase > > m_tags; // 0x18
};

// Aligment: 14
// Size: 232
class CModelConfigElement_AttachedModel : public CModelConfigElement
{
public:
	CUtlString m_InstanceName; // 0x48
	CUtlString m_EntityClass; // 0x50
	CStrongHandle< InfoForResourceTypeCModel > m_hModel; // 0x58
	Vector m_vOffset; // 0x60
	QAngle m_aAngOffset; // 0x6c
	CUtlString m_AttachmentName; // 0x78
	CUtlString m_LocalAttachmentOffsetName; // 0x80
	ModelConfigAttachmentType_t m_AttachmentType; // 0x88
	bool m_bBoneMergeFlex; // 0x8c
	bool m_bUserSpecifiedColor; // 0x8d
	bool m_bUserSpecifiedMaterialGroup; // 0x8e
	bool m_bAcceptParentMaterialDrivenDecals; // 0x8f
	CUtlString m_BodygroupOnOtherModels; // 0x90
	CUtlString m_MaterialGroupOnOtherModels; // 0x98
};

// Aligment: 3
// Size: 256
class CMoodVData
{
public:
	// MPropertyDescription "Model to get the animation list from"
	// MPropertyAutoRebuildOnChange
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_sModelName; // 0x0
	// MPropertyDescription "Type of mood"
	MoodType_t m_nMoodType; // 0xe0
	// MPropertyDescription "Layers for this mood"
	CUtlVector< MoodAnimationLayer_t > m_animationLayers; // 0xe8
};

// Aligment: 5
// Size: 120
class CWayPointHelperUpdateNode : public CUnaryUpdateNode, CAnimUpdateNodeBase
{
public:
	float m_flStartCycle; // 0x6c
	float m_flEndCycle; // 0x70
	bool m_bOnlyGoals; // 0x74
	bool m_bPreventOvershoot; // 0x75
	bool m_bPreventUndershoot; // 0x76
};

// Aligment: 2
// Size: 112
class CSetFacingUpdateNode : public CUnaryUpdateNode, CAnimUpdateNodeBase
{
public:
	FacingMode m_facingMode; // 0x68
	bool m_bResetChild; // 0x6c
};

// Aligment: 5
// Size: 264
class CMotionGraphGroup
{
public:
	CMotionSearchDB m_searchDB; // 0x0
	CUtlVector< CSmartPtr< CMotionGraph > > m_motionGraphs; // 0xb8
	CUtlVector< CMotionGraphConfig > m_motionGraphConfigs; // 0xd0
	CUtlVector< int32 > m_sampleToConfig; // 0xe8
	AnimScriptHandle m_hIsActiveScript; // 0x100
};

// Aligment: 11
// Size: 80
struct FootFixedData_t
{
public:
	VectorAligned m_vToeOffset; // 0x0
	VectorAligned m_vHeelOffset; // 0x10
	int32_t m_nTargetBoneIndex; // 0x20
	int32_t m_nAnkleBoneIndex; // 0x24
	int32_t m_nIKAnchorBoneIndex; // 0x28
	int32_t m_ikChainIndex; // 0x2c
	float m_flMaxIKLength; // 0x30
	int32_t m_nFootIndex; // 0x34
	int32_t m_nTagIndex; // 0x38
	float m_flMaxRotationLeft; // 0x3c
	float m_flMaxRotationRight; // 0x40
};

// Aligment: 1
// Size: 16
class CAnimMorphDifference
{
public:
	CBufferString m_name; // 0x0
};

// Aligment: 1
// Size: 1
struct AttachmentHandle_t
{
public:
	uint8_t m_Value; // 0x0
};

// Aligment: 6
// Size: 120
class CAnimKeyData
{
public:
	CBufferString m_name; // 0x0
	CUtlVector< CAnimBone > m_boneArray; // 0x10
	CUtlVector< CAnimUser > m_userArray; // 0x28
	CUtlVector< CBufferString > m_morphArray; // 0x40
	int32_t m_nChannelElements; // 0x58
	CUtlVector< CAnimDataChannelDesc > m_dataChannelArray; // 0x60
};

// Aligment: 6
// Size: 136
class CBinaryUpdateNode : public CAnimUpdateNodeBase
{
public:
	CAnimUpdateNodeRef m_pChild1; // 0x58
	CAnimUpdateNodeRef m_pChild2; // 0x68
	BinaryNodeTiming m_timingBehavior; // 0x78
	float m_flTimingBlend; // 0x7c
	bool m_bResetChild1; // 0x80
	bool m_bResetChild2; // 0x81
};

// Aligment: 7
// Size: 56
class CFingerBone
{
public:
	CUtlString m_boneName; // 0x0
	Vector m_hingeAxis; // 0x8
	Vector m_vCapsulePos1; // 0x14
	Vector m_vCapsulePos2; // 0x20
	float m_flMinAngle; // 0x2c
	float m_flMaxAngle; // 0x30
	float m_flRadius; // 0x34
};

// Aligment: 2
// Size: 8
struct IKSolverSettings_t
{
public:
	// MPropertyFriendlyName "Solver Type"
	// MPropertyAttributeChoiceEnumName
	// MPropertyAttrChangeCallback
	IKSolverType m_SolverType; // 0x0
	// MPropertyFriendlyName "Num Iterations "
	// MPropertyAttrStateCallback
	int32_t m_nNumIterations; // 0x4
};

// Aligment: 5
// Size: 112
class CAnimData
{
public:
	CBufferString m_name; // 0x10
	CUtlVector< CAnimDesc > m_animArray; // 0x20
	CUtlVector< CAnimDecoder > m_decoderArray; // 0x38
	int32_t m_nMaxUniqueFrameIndex; // 0x50
	CUtlVector< CAnimFrameSegment > m_segmentArray; // 0x58
};

// Aligment: 1
// Size: 48
class CEmitTagAction : public CAnimActionBase
{
public:
	// MPropertyFriendlyName "Tag"
	// MPropertyAttributeChoiceName "Tag"
	AnimTagID m_tag; // 0x28
};

// Aligment: 8
// Size: 88
class CSolveIKChainAnimNodeChainData
{
public:
	// MPropertyFriendlyName "IK Chain"
	// MPropertyAttributeChoiceName "IKChain"
	CUtlString m_IkChain; // 0x8
	// MPropertyFriendlyName "Solver Setting Source"
	// MPropertyAttributeChoiceEnumName
	// MPropertyAttrChangeCallback
	SolveIKChainAnimNodeSettingSource m_SolverSettingSource; // 0x10
	// MPropertyFriendlyName "Override Solver Settings"
	// MPropertyAutoExpandSelf
	// MPropertyAttrStateCallback
	IKSolverSettings_t m_OverrideSolverSettings; // 0x14
	// MPropertyFriendlyName "Target Setting Source"
	// MPropertyAttributeChoiceEnumName
	// MPropertyAttrChangeCallback
	SolveIKChainAnimNodeSettingSource m_TargetSettingSource; // 0x1c
	// MPropertyFriendlyName "Override Target Settings"
	// MPropertyAutoExpandSelf
	// MPropertyAttrStateCallback
	IKTargetSettings_t m_OverrideTargetSettings; // 0x20
	// MPropertyFriendlyName "Debug Setting"
	// MPropertyGroupName "Debug"
	SolveIKChainAnimNodeDebugSetting m_DebugSetting; // 0x40
	// MPropertyFriendlyName "Debug Normalized Length"
	// MPropertyGroupName "Debug"
	float m_flDebugNormalizedLength; // 0x44
	// MPropertyFriendlyName "Debug Offset"
	// MPropertyGroupName "Debug"
	Vector m_vDebugOffset; // 0x48
};

// Aligment: 2
// Size: 8
class CAnimSequenceParams
{
public:
	float m_flFadeInTime; // 0x0
	float m_flFadeOutTime; // 0x4
};

// Aligment: 3
// Size: 72
class CPathHelperAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	CAnimNodeConnection m_inputConnection; // 0x38
	// MPropertyFriendlyName "Stopping Radius"
	float m_flStoppingRadius; // 0x40
	// MPropertyFriendlyName "Stopping Min Speed Scale"
	float m_flStoppingSpeedScale; // 0x44
};

// Aligment: 4
// Size: 56
class CTimeRemainingMetric : public CMotionMetricBase
{
public:
	// MPropertyFriendlyName "Match Time Remaining"
	// MPropertyGroupName
	// MPropertyAttrChangeCallback
	bool m_bMatchByTimeRemaining; // 0x28
	// MPropertyFriendlyName "Max Time Remaining"
	// MPropertyAttrStateCallback
	float m_flMaxTimeRemaining; // 0x2c
	// MPropertyFriendlyName "Filter By Time Remaining"
	// MPropertyAttrChangeCallback
	bool m_bFilterByTimeRemaining; // 0x30
	// MPropertyFriendlyName "Min Time Remaining"
	// MPropertyAttrStateCallback
	float m_flMinTimeRemaining; // 0x34
};

// Aligment: 6
// Size: 144
struct PhysSoftbodyDesc_t
{
public:
	CUtlVector< uint32 > m_ParticleBoneHash; // 0x0
	CUtlVector< RnSoftbodyParticle_t > m_Particles; // 0x18
	CUtlVector< RnSoftbodySpring_t > m_Springs; // 0x30
	CUtlVector< RnSoftbodyCapsule_t > m_Capsules; // 0x48
	CUtlVector< CTransform > m_InitPose; // 0x60
	CUtlVector< CUtlString > m_ParticleBoneName; // 0x78
};

// Aligment: 7
// Size: 264
class CMovementComponent : public CAnimComponentBase
{
public:
	// MPropertyFriendlyName "Movement Modes"
	CUtlVector< CMovementMode > m_moveModes; // 0x40
	// MPropertyHideField
	CUtlVector< CSmartPtr< CAnimMotorBase > > m_motors; // 0x58
	// MPropertyFriendlyName "Network Path"
	bool m_bNetworkPath; // 0x70
	// MPropertyGroupName "+Facing"
	// MPropertyFriendlyName "Default Mode"
	FacingMode m_eDefaultFacingMode; // 0x74
	// MPropertyGroupName "+Facing"
	// MPropertyFriendlyName "Damping"
	CAnimInputDamping m_facingDamping; // 0x78
	// MPropertyGroupName "+Facing"
	// MPropertyFriendlyName "Network Facing"
	bool m_bNetworkFacing; // 0x88
	// MPropertyHideField
	AnimParamID[30] m_paramIDs; // 0x8c
};

// Aligment: 7
// Size: 28
class CSeqAutoLayer
{
public:
	int16_t m_nLocalReference; // 0x0
	int16_t m_nLocalPose; // 0x2
	CSeqAutoLayerFlag m_flags; // 0x4
	float m_start; // 0xc
	float m_peak; // 0x10
	float m_tail; // 0x14
	float m_end; // 0x18
};

// Aligment: 8
// Size: 32
class CPhysSurfacePropertiesAudio
{
public:
	// MKV3TransferName "audioreflectivity"
	float m_reflectivity; // 0x0
	// MKV3TransferName "audiohardnessfactor"
	float m_hardnessFactor; // 0x4
	// MKV3TransferName "audioroughnessfactor"
	float m_roughnessFactor; // 0x8
	// MKV3TransferName "scrapeRoughThreshold"
	float m_roughThreshold; // 0xc
	// MKV3TransferName "impactHardThreshold"
	float m_hardThreshold; // 0x10
	// MKV3TransferName "audioHardMinVelocity"
	float m_hardVelocityThreshold; // 0x14
	// MKV3TransferName "staticImpactVolume"
	float m_flStaticImpactVolume; // 0x18
	// MKV3TransferName "occlusionFactor"
	float m_flOcclusionFactor; // 0x1c
};

// Aligment: 3
// Size: 48
class CBlend2DItemBase
{
public:
	// MPropertyFriendlyName "Blend Value"
	Vector2D m_blendValue; // 0x18
	// MPropertyGroupName "+Duration Override"
	// MPropertyFriendlyName "Use Custom Duration"
	// MPropertyAttrChangeCallback
	bool m_bUseCustomDuration; // 0x28
	// MPropertyGroupName "+Duration Override"
	// MPropertyFriendlyName "Custom Duration"
	// MPropertyAttrStateCallback
	float m_flCustomDuration; // 0x2c
};

// Aligment: 4
// Size: 88
class CMaterialAttributeAnimTag : public CAnimTagBase
{
public:
	// MPropertyFriendlyName "Attribute Name"
	CUtlString m_AttributeName; // 0x40
	// MPropertyFriendlyName "Attribute Type"
	// MPropertyAttrChangeCallback
	MatterialAttributeTagType_t m_AttributeType; // 0x48
	// MPropertyFriendlyName "Value"
	// MPropertyAttrStateCallback
	float m_flValue; // 0x4c
	// MPropertyFriendlyName "Color"
	// MPropertyAttrStateCallback
	Color m_Color; // 0x50
};

// Aligment: 13
// Size: 200
class CBlend2DAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	CUtlVector< CSmartPtr< CBlend2DItemBase > > m_items; // 0x50
	// MPropertyHideField
	CUtlVector< CSmartPtr< CAnimTagSpan > > m_tagSpans; // 0x68
	// MPropertyHideField
	CUtlVector< CSmartPtr< CAnimParamSpan > > m_paramSpans; // 0x80
	// MPropertyFriendlyName "Horizontal Axis"
	// MPropertyAttrChangeCallback
	// MPropertyAttrStateCallback
	AnimValueSource m_blendSourceX; // 0x98
	// MPropertyFriendlyName "Horizontal Parameter"
	// MPropertyAttributeChoiceName "FloatParameter"
	AnimParamID m_paramX; // 0x9c
	// MPropertyFriendlyName "Vertical Axis"
	// MPropertyAttrChangeCallback
	// MPropertyAttrStateCallback
	AnimValueSource m_blendSourceY; // 0xa0
	// MPropertyFriendlyName "Vertical Parameter"
	// MPropertyAttributeChoiceName "FloatParameter"
	AnimParamID m_paramY; // 0xa4
	// MPropertyFriendlyName "Loop"
	bool m_bLoop; // 0xa8
	// MPropertyFriendlyName "Lock Blend on Reset"
	bool m_bLockBlendOnReset; // 0xa9
	// MPropertyFriendlyName "Lock Blend When Waning"
	bool m_bLockWhenWaning; // 0xaa
	// MPropertyFriendlyName "Playback Speed"
	float m_playbackSpeed; // 0xac
	// MPropertyFriendlyName "Damping"
	CAnimInputDamping m_damping; // 0xb0
	// MPropertyFriendlyName "AnimEvents and Tags Exclusive To Most Weighted"
	bool m_bAnimEventsAndTagsOnMostWeightedOnly; // 0xc0
};

// Aligment: 0
// Size: 40
class CPathAnimMotorUpdater : public CPathAnimMotorUpdaterBase, CAnimMotorUpdaterBase
{
public:
// <no members described>
};

// Aligment: 0
// Size: 40
class CBoneConstraintBase
{
public:
// <no members described>
};

// Aligment: 2
// Size: 72
class CSpeedScaleAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	CAnimNodeConnection m_inputConnection; // 0x38
	// MPropertyFriendlyName "Parameter"
	// MPropertyAttributeChoiceName "FloatParameter"
	AnimParamID m_param; // 0x40
};

// Aligment: 2
// Size: 112
class CRagdollUpdateNode : public CUnaryUpdateNode, CAnimUpdateNodeBase
{
public:
	int32_t m_nWeightListIndex; // 0x68
	RagdollPoseControl m_poseControlMethod; // 0x6c
};

// Aligment: 1
// Size: 56
class CAnimScriptComponentUpdater : public CAnimComponentUpdater
{
public:
	AnimScriptHandle m_hScript; // 0x30
};

// Aligment: 8
// Size: 208
struct AimMatrixOpFixedSettings_t
{
public:
	CAnimAttachment m_attachment; // 0x0
	CAnimInputDamping m_damping; // 0x80
	CPoseHandle[10] m_poseCacheHandles; // 0x90
	AimMatrixBlendMode m_eBlendMode; // 0xb8
	float m_fAngleIncrement; // 0xbc
	int32_t m_nSequenceMaxFrame; // 0xc0
	int32_t m_nBoneMaskIndex; // 0xc4
	bool m_bTargetIsPosition; // 0xc8
};

// Aligment: 13
// Size: 168
class CFollowPathUpdateNode : public CUnaryUpdateNode, CAnimUpdateNodeBase
{
public:
	float m_flBlendOutTime; // 0x6c
	bool m_bBlockNonPathMovement; // 0x70
	bool m_bStopFeetAtGoal; // 0x71
	bool m_bScaleSpeed; // 0x72
	float m_flScale; // 0x74
	float m_flMinAngle; // 0x78
	float m_flMaxAngle; // 0x7c
	float m_flSpeedScaleBlending; // 0x80
	CAnimInputDamping m_turnDamping; // 0x88
	AnimValueSource m_facingTarget; // 0x98
	CAnimParamHandle m_hParam; // 0x9c
	float m_flTurnToFaceOffset; // 0xa0
	bool m_bTurnToFace; // 0xa4
};

// Aligment: 1
// Size: 64
class CChoreoAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	CAnimNodeConnection m_inputConnection; // 0x38
};

// Aligment: 10
// Size: 160
struct VPhysXBodyPart_t
{
public:
	uint32_t m_nFlags; // 0x0
	float m_flMass; // 0x4
	VPhysics2ShapeDef_t m_rnShape; // 0x8
	uint16_t m_nCollisionAttributeIndex; // 0x80
	uint16_t m_nReserved; // 0x82
	float m_flInertiaScale; // 0x84
	float m_flLinearDamping; // 0x88
	float m_flAngularDamping; // 0x8c
	bool m_bOverrideMassCenter; // 0x90
	Vector m_vMassCenterOverride; // 0x94
};

// Aligment: 1
// Size: 480
class CTwoBoneIKUpdateNode : public CUnaryUpdateNode, CAnimUpdateNodeBase
{
public:
	TwoBoneIKSettings_t m_opFixedData; // 0x70
};

// Aligment: 2
// Size: 24
struct SkeletonBoneBounds_t
{
public:
	Vector m_vecCenter; // 0x0
	Vector m_vecSize; // 0xc
};

// Aligment: 2
// Size: 32
class CAnimParamSpanSample
{
public:
	CAnimVariant m_value; // 0x8
	float m_flCycle; // 0x1c
};

// Aligment: 2
// Size: 72
class CMotionNodeBlend1D : public CMotionNode
{
public:
	CUtlVector< MotionBlendItem > m_blendItems; // 0x28
	int32_t m_nParamIndex; // 0x40
};

// Aligment: 3
// Size: 184
class CMotionSearchDB
{
public:
	CMotionSearchNode m_rootNode; // 0x0
	CProductQuantizer m_residualQuantizer; // 0x80
	CUtlVector< MotionDBIndex > m_codeIndices; // 0xa0
};

// Aligment: 1
// Size: 80
class CModelConfigElement_SetRenderColor : public CModelConfigElement
{
public:
	Color m_Color; // 0x48
};

// Aligment: 7
// Size: 52
struct FingerBone_t
{
public:
	int32_t m_boneIndex; // 0x0
	Vector m_hingeAxis; // 0x4
	Vector m_vCapsulePos1; // 0x10
	Vector m_vCapsulePos2; // 0x1c
	float m_flMinAngle; // 0x28
	float m_flMaxAngle; // 0x2c
	float m_flRadius; // 0x30
};

// Aligment: 6
// Size: 40
class CDampedValueItem
{
public:
	// MPropertyFriendlyName "Value Type"
	// MPropertyAttrChangeCallback
	DampedValueType m_valueType; // 0x0
	// MPropertyFriendlyName "Parameter In"
	// MPropertyAttributeChoiceName "FloatParameter"
	// MPropertyAttrStateCallback
	AnimParamID m_floatParamIn; // 0x4
	// MPropertyFriendlyName "Parameter Out"
	// MPropertyAttributeChoiceName "PrivateFloatParameter"
	// MPropertyAttrStateCallback
	AnimParamID m_floatParamOut; // 0x8
	// MPropertyFriendlyName "Parameter In"
	// MPropertyAttributeChoiceName "VectorParameter"
	// MPropertyAttrStateCallback
	AnimParamID m_vectorParamIn; // 0xc
	// MPropertyFriendlyName "Parameter Out"
	// MPropertyAttributeChoiceName "PrivateVectorParameter"
	// MPropertyAttrStateCallback
	AnimParamID m_vectorParamOut; // 0x10
	// MPropertyFriendlyName "Damping"
	CAnimInputDamping m_damping; // 0x18
};

// Aligment: 4
// Size: 32
struct IKTargetSettings_t
{
public:
	// MPropertyFriendlyName "Target Source"
	// MPropertyAttributeChoiceEnumName
	// MPropertyAttrChangeCallback
	IKTargetSource m_TargetSource; // 0x0
	// MPropertyFriendlyName "Bone"
	// MPropertyAttrStateCallback
	IKBoneNameAndIndex_t m_Bone; // 0x8
	// MPropertyFriendlyName "Animgraph Position Parameter"
	// MPropertyAttributeChoiceName "VectorParameter"
	// MPropertyAttrStateCallback
	AnimParamID m_AnimgraphParameterNamePosition; // 0x18
	// MPropertyFriendlyName "Target Coords"
	// MPropertyAttrStateCallback
	IKTargetCoordinateSystem m_TargetCoordSystem; // 0x1c
};

// Aligment: 1
// Size: 40
class CMotionMetricBase
{
public:
	// MPropertyHideField
	float m_flWeight; // 0x20
};

// Aligment: 2
// Size: 136
class CFootStepTriggerUpdateNode : public CUnaryUpdateNode, CAnimUpdateNodeBase
{
public:
	CUtlVector< FootStepTrigger > m_triggers; // 0x68
	float m_flTolerance; // 0x84
};

// Aligment: 5
// Size: 40
struct ParamSpan_t
{
public:
	CUtlVector< ParamSpanSample_t > m_samples; // 0x0
	CAnimParamHandle m_hParam; // 0x18
	AnimParamType_t m_eParamType; // 0x1a
	float m_flStartCycle; // 0x1c
	float m_flEndCycle; // 0x20
};

// Aligment: 11
// Size: 144
class CAimMatrixAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	CAnimNodeConnection m_inputConnection; // 0x40
	// MPropertyFriendlyName "Sequence"
	// MPropertyAttributeChoiceName "Sequence"
	CUtlString m_sequenceName; // 0x48
	// MPropertyFriendlyName "Angle Increment"
	float m_fAngleIncrement; // 0x50
	// MPropertyFriendlyName "Target"
	AnimVectorSource m_target; // 0x54
	// MPropertyFriendlyName "Parameter"
	// MPropertyAttributeChoiceName "VectorParameter"
	AnimParamID m_param; // 0x58
	// MPropertyFriendlyName "Aim Attachment"
	// MPropertyAttributeChoiceName "Attachment"
	CUtlString m_attachmentName; // 0x60
	// MPropertyFriendlyName "Blend Mode"
	// MPropertyAttrChangeCallback
	AimMatrixBlendMode m_blendMode; // 0x68
	// MPropertyFriendlyName "Bone Mask"
	// MPropertyAttributeChoiceName "BoneMask"
	// MPropertyAttrStateCallback
	CUtlString m_boneMaskName; // 0x70
	// MPropertyFriendlyName "Reset Child"
	bool m_bResetBase; // 0x78
	// MPropertyFriendlyName "Lock Blend When Waning"
	bool m_bLockWhenWaning; // 0x79
	// MPropertyFriendlyName "Damping"
	CAnimInputDamping m_damping; // 0x80
};

// Aligment: 24
// Size: 168
class CHitReactAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	CAnimNodeConnection m_inputConnection; // 0x38
	// MPropertyFriendlyName "Minimum Delay Between Hits"
	float m_flMinDelayBetweenHits; // 0x40
	// MPropertyFriendlyName "Trigger Parameter"
	// MPropertyAttributeChoiceName "BoolParameter"
	AnimParamID m_triggerParam; // 0x44
	// MPropertyFriendlyName "Hit Bone Parameter"
	// MPropertyAttributeChoiceName "IntParameter"
	AnimParamID m_hitBoneParam; // 0x48
	// MPropertyFriendlyName "Hit Offset Parameter"
	// MPropertyAttributeChoiceName "VectorParameter"
	AnimParamID m_hitOffsetParam; // 0x4c
	// MPropertyFriendlyName "Hit Direction Parameter"
	// MPropertyAttributeChoiceName "VectorParameter"
	AnimParamID m_hitDirectionParam; // 0x50
	// MPropertyFriendlyName "Hit Strength Parameter"
	// MPropertyAttributeChoiceName "FloatParameter"
	AnimParamID m_hitStrengthParam; // 0x54
	// MPropertyFriendlyName "Bone Weights"
	// MPropertyAttributeChoiceName "BoneMask"
	CUtlString m_weightListName; // 0x58
	// MPropertyFriendlyName "Hip Bone"
	// MPropertyAttributeChoiceName "Bone"
	CUtlString m_hipBoneName; // 0x60
	// MPropertyFriendlyName "Hip Translation Scale"
	float m_flHipBoneTranslationScale; // 0x68
	// MPropertyFriendlyName "Number of bone effected"
	int32_t m_nEffectedBoneCount; // 0x6c
	// MPropertyFriendlyName "Max Impact Force"
	float m_flMaxImpactForce; // 0x70
	// MPropertyFriendlyName "Min Impact Force"
	float m_flMinImpactForce; // 0x74
	// MPropertyFriendlyName "Whip Impact Scale"
	float m_flWhipImpactScale; // 0x78
	// MPropertyFriendlyName "Counter Rotation Scale"
	float m_flCounterRotationScale; // 0x7c
	// MPropertyFriendlyName "Distance Fade Scale"
	float m_flDistanceFadeScale; // 0x80
	// MPropertyFriendlyName "Propagation Scale"
	float m_flPropagationScale; // 0x84
	// MPropertyFriendlyName "Whip Delay Time"
	float m_flWhipDelay; // 0x88
	// MPropertyFriendlyName "Spring Strength"
	float m_flSpringStrength; // 0x8c
	// MPropertyFriendlyName "Whip Spring Strength"
	float m_flWhipSpringStrength; // 0x90
	// MPropertyFriendlyName "Hip Dip Spring Strength"
	float m_flHipDipSpringStrength; // 0x94
	// MPropertyFriendlyName "Hip Dip Scale"
	float m_flHipDipImpactScale; // 0x98
	// MPropertyFriendlyName "Hip Dip Delay Time"
	float m_flHipDipDelay; // 0x9c
	// MPropertyFriendlyName "Reset Child"
	bool m_bResetBase; // 0xa0
};

// Aligment: 8
// Size: 168
class CDirectionalBlendUpdateNode : public CLeafUpdateNode, CAnimUpdateNodeBase
{
public:
	HSequence[8] m_hSequences; // 0x5c
	CAnimInputDamping m_damping; // 0x80
	AnimValueSource m_blendValueSource; // 0x90
	CAnimParamHandle m_paramIndex; // 0x94
	float m_playbackSpeed; // 0x98
	float m_duration; // 0x9c
	bool m_bLoop; // 0xa0
	bool m_bLockBlendOnReset; // 0xa1
};

// Aligment: 3
// Size: 64
class CSeqScaleSet
{
public:
	CBufferString m_sName; // 0x0
	CUtlVector< int16 > m_nLocalBoneArray; // 0x10
	CUtlVector< float32 > m_flBoneScaleArray; // 0x28
};

// Aligment: 2
// Size: 32
struct AnimationDecodeDebugDump_t
{
public:
	AnimationProcessingType_t m_processingType; // 0x0
	CUtlVector< AnimationDecodeDebugDumpElement_t > m_elems; // 0x8
};

// Aligment: 7
// Size: 72
class CDistanceRemainingMetric : public CMotionMetricBase
{
public:
	// MPropertyFriendlyName "Maximum Tracked Distance"
	float m_flMaxDistance; // 0x28
	// MPropertyFriendlyName "Filter By Fixed Distance"
	// MPropertyAttrChangeCallback
	bool m_bFilterFixedMinDistance; // 0x2c
	// MPropertyFriendlyName "Min Distance"
	// MPropertyAttrStateCallback
	float m_flMinDistance; // 0x30
	// MPropertyFriendlyName "Filter By Goal Distance"
	// MPropertyAttrChangeCallback
	bool m_bFilterGoalDistance; // 0x34
	// MPropertyFriendlyName "Goal Filter Start Distance"
	// MPropertyAttrStateCallback
	float m_flStartGoalFilterDistance; // 0x38
	// MPropertyFriendlyName "Filter By Goal Overshoot"
	// MPropertyAttrChangeCallback
	// MPropertyAttrStateCallback
	bool m_bFilterGoalOvershoot; // 0x3c
	// MPropertyFriendlyName "Max Goal Overshoot Scale"
	// MPropertyAttrStateCallback
	float m_flMaxGoalOvershootScale; // 0x40
};

// Aligment: 1
// Size: 4
class AnimParamID
{
public:
	uint32_t m_id; // 0x0
};

// Aligment: 1
// Size: 48
class CBoneVelocityMetric : public CMotionMetricBase
{
public:
	// MPropertyFriendlyName "Bone"
	// MPropertyAttributeChoiceName "Bone"
	CUtlString m_boneName; // 0x28
};

// Aligment: 14
// Size: 120
class CFollowPathAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	CAnimNodeConnection m_inputConnection; // 0x38
	// MPropertyFriendlyName "Blend Out Time"
	float m_flBlendOutTime; // 0x40
	// MPropertyFriendlyName "Block Non-Path Movement"
	bool m_bBlockNonPathMovement; // 0x44
	// MPropertyFriendlyName "Stop Feet at Goal"
	bool m_bStopFeetAtGoal; // 0x45
	// MPropertyFriendlyName "Enable Speed Scaling"
	// MPropertyGroupName "Speed Scaling"
	// MPropertyAttrChangeCallback
	bool m_bScaleSpeed; // 0x46
	// MPropertyFriendlyName "Scale"
	// MPropertyGroupName "Speed Scaling"
	// MPropertyAttributeRange "0 1"
	// MPropertyAttrStateCallback
	float m_flScale; // 0x48
	// MPropertyFriendlyName "Min Angle"
	// MPropertyGroupName "Speed Scaling"
	// MPropertyAttributeRange "0 180"
	// MPropertyAttrStateCallback
	float m_flMinAngle; // 0x4c
	// MPropertyFriendlyName "Max Angle"
	// MPropertyGroupName "Speed Scaling"
	// MPropertyAttributeRange "0 180"
	// MPropertyAttrStateCallback
	float m_flMaxAngle; // 0x50
	// MPropertyFriendlyName "Blend Time"
	// MPropertyGroupName "Speed Scaling"
	// MPropertyAttrStateCallback
	float m_flSpeedScaleBlending; // 0x54
	// MPropertyFriendlyName "Enable Turn to Face"
	// MPropertyGroupName "Turn to Face"
	// MPropertyAttrChangeCallback
	bool m_bTurnToFace; // 0x58
	// MPropertyFriendlyName "Target"
	// MPropertyGroupName "Turn to Face"
	// MPropertyAttrChangeCallback
	// MPropertyAttrStateCallback
	AnimValueSource m_facingTarget; // 0x5c
	// MPropertyFriendlyName "Parameter"
	// MPropertyGroupName "Turn to Face"
	// MPropertyAttributeChoiceName "FloatParameter"
	// MPropertyAttrStateCallback
	AnimParamID m_param; // 0x60
	// MPropertyFriendlyName "Offset"
	// MPropertyGroupName "Turn to Face"
	// MPropertyAttributeRange "-180 180"
	// MPropertyAttrStateCallback
	float m_flTurnToFaceOffset; // 0x64
	// MPropertyFriendlyName "Damping"
	// MPropertyGroupName "Turn to Face"
	// MPropertyAttrStateCallback
	CAnimInputDamping m_damping; // 0x68
};

// Aligment: 1
// Size: 184
class CSequenceMotionItem : public CMotionItem
{
public:
	// MPropertyFriendlyName "Sequence"
	// MPropertyAttributeChoiceName "Sequence"
	CUtlString m_sequenceName; // 0xb0
};

// Aligment: 2
// Size: 88
class CActionComponent : public CAnimComponentBase
{
public:
	CUtlVector< CSmartPtr< CAnimActionBase > > m_actions; // 0x38
	// MPropertyFriendlyName "Name"
	// MPropertySortPriority "100"
	CUtlString m_sName; // 0x50
};

// Aligment: 2
// Size: 96
class CBodyGroupAnimTag : public CAnimTagBase
{
public:
	// MPropertyFriendlyName "Priority"
	int32_t m_nPriority; // 0x40
	// MPropertyFriendlyName "Body Group Settings"
	CUtlVector< CBodyGroupSetting > m_bodyGroupSettings; // 0x48
};

// Aligment: 2
// Size: 40
class CMotionNode
{
public:
	CUtlString m_name; // 0x18
	AnimNodeID m_id; // 0x20
};

// Aligment: 3
// Size: 120
class CMotionItemGroup
{
public:
	// MPropertyHideField
	CUtlVector< CSmartPtr< CMotionItem > > m_motions; // 0x20
	// MPropertyFriendlyName "Name"
	CUtlString m_name; // 0x38
	CConditionContainer m_conditions; // 0x40
};

// Aligment: 6
// Size: 88
class CRagdollAnimTag : public CAnimTagBase
{
public:
	// MPropertyFriendlyName "Pose Control"
	AnimPoseControl m_nPoseControl; // 0x40
	// MPropertyFriendlyName "Frequency"
	// MPropertyAttributeRange "0 30"
	float m_flFrequency; // 0x44
	// MPropertyFriendlyName "Damping Ratio"
	// MPropertyAttributeRange "0 2"
	float m_flDampingRatio; // 0x48
	// MPropertyFriendlyName "Decay Duration"
	// MPropertyAttributeRange "-1 1000"
	float m_flDecayDuration; // 0x4c
	// MPropertyFriendlyName "Decay Bias"
	// MPropertyAttributeRange "0 1"
	float m_flDecayBias; // 0x50
	// MPropertyFriendlyName "Destroy"
	bool m_bDestroy; // 0x54
};

// Aligment: 1
// Size: 128
class CBoolAnimParameter : public CAnimParameterBase
{
public:
	// MPropertyFriendlyName "Default Value"
	bool m_bDefaultValue; // 0x78
};

// Aligment: 3
// Size: 32
class CBlendNodeChild
{
public:
	// MPropertyHideField
	CAnimNodeConnection m_inputConnection; // 0x8
	// MPropertyFriendlyName "Name"
	CUtlString m_name; // 0x10
	// MPropertyFriendlyName "Blend Value"
	float m_blendValue; // 0x18
};

// Aligment: 0
// Size: 64
class CStringAnimTag : public CAnimTagBase
{
public:
// <no members described>
};

// Aligment: 0
// Size: 88
class CEditableMotionGraph : public CMotionGraph
{
public:
// <no members described>
};

// Aligment: 1
// Size: 24
class CFootTrajectories
{
public:
	CUtlVector< CFootTrajectory > m_trajectories; // 0x0
};

// Aligment: 1
// Size: 88
class CAnimParameterList
{
public:
	CUtlVector< CSmartPtr< CAnimParameterBase > > m_Parameters; // 0x20
};

// Aligment: 10
// Size: 256
class CAnimUpdateSharedData
{
public:
	CUtlVector< CSmartPtr< CAnimUpdateNodeBase > > m_nodes; // 0x10
	CUtlHashtable< CAnimNodePath, int32 > m_nodeIndexMap; // 0x28
	CUtlVector< CSmartPtr< CAnimComponentUpdater > > m_components; // 0x48
	CSmartPtr< CAnimParameterListUpdater > m_pParamListUpdater; // 0x60
	CSmartPtr< CAnimTagManagerUpdater > m_pTagManagerUpdater; // 0x68
	CSmartPtr< CAnimScriptManager > m_scriptManager; // 0x70
	CAnimGraphSettingsManager m_settings; // 0x78
	CSmartPtr< CStaticPoseCacheBuilder > m_pStaticPoseCache; // 0xa8
	CSmartPtr< CAnimSkeleton > m_pSkeleton; // 0xb0
	CAnimNodePath m_rootNodePath; // 0xb8
};

// Aligment: 9
// Size: 128
class CBlendAnimNode : public CAnimNodeBase
{
public:
	// MPropertyFriendlyName "Blend Items"
	// MPropertyAutoExpandSelf
	CUtlVector< CBlendNodeChild > m_children; // 0x48
	// MPropertyFriendlyName "Blend Source"
	// MPropertyAttrChangeCallback
	// MPropertyAttrStateCallback
	AnimValueSource m_blendValueSource; // 0x60
	// MPropertyFriendlyName "Parameter"
	// MPropertyAttributeChoiceName "FloatParameter"
	AnimParamID m_param; // 0x64
	// MPropertyFriendlyName "Blend Key Values"
	BlendKeyType m_blendKeyType; // 0x68
	// MPropertyFriendlyName "Lock Blend on Reset"
	bool m_bLockBlendOnReset; // 0x6c
	// MPropertyFriendlyName "Sync Cycles"
	bool m_bSyncCycles; // 0x6d
	// MPropertyFriendlyName "Loop"
	bool m_bLoop; // 0x6e
	// MPropertyFriendlyName "Lock Blend When Waning"
	bool m_bLockWhenWaning; // 0x6f
	// MPropertyFriendlyName "Damping"
	CAnimInputDamping m_damping; // 0x70
};

// Aligment: 15
// Size: 352
struct TwoBoneIKSettings_t
{
public:
	IkEndEffectorType m_endEffectorType; // 0x0
	CAnimAttachment m_endEffectorAttachment; // 0x10
	IkTargetType m_targetType; // 0x90
	CAnimAttachment m_targetAttachment; // 0xa0
	int32_t m_targetBoneIndex; // 0x120
	CAnimParamHandle m_hPositionParam; // 0x124
	CAnimParamHandle m_hRotationParam; // 0x126
	bool m_bAlwaysUseFallbackHinge; // 0x128
	VectorAligned m_vFallbackHingeAxis; // 0x130
	int32_t m_nFixedBoneIndex; // 0x140
	int32_t m_nMiddleBoneIndex; // 0x144
	int32_t m_nEndBoneIndex; // 0x148
	bool m_bMatchTargetOrientation; // 0x14c
	bool m_bConstrainTwist; // 0x14d
	float m_flMaxTwist; // 0x150
};

// Aligment: 2
// Size: 48
class CFutureFacingMetric : public CMotionMetricBase
{
public:
	// MPropertyFriendlyName "Distance"
	float m_flDistance; // 0x28
	// MPropertyFriendlyName "Time"
	float m_flTime; // 0x2c
};

// Aligment: 1
// Size: 24
struct SolveIKChainPoseOpFixedSettings_t
{
public:
	CUtlVector< ChainToSolveData_t > m_ChainsToSolveData; // 0x0
};

// Aligment: 0
// Size: 88
class CLeafUpdateNode : public CAnimUpdateNodeBase
{
public:
// <no members described>
};

// Aligment: 7
// Size: 168
class CBoneMaskUpdateNode : public CBinaryUpdateNode, CAnimUpdateNodeBase
{
public:
	int32_t m_nWeightListIndex; // 0x8c
	float m_flRootMotionBlend; // 0x90
	BoneMaskBlendSpace m_blendSpace; // 0x94
	BinaryNodeChildOption m_footMotionTiming; // 0x98
	bool m_bUseBlendScale; // 0x9c
	AnimValueSource m_blendValueSource; // 0xa0
	CAnimParamHandle m_hBlendParameter; // 0xa4
};

// Aligment: 12
// Size: 144
class CSeqCmdSeqDesc
{
public:
	CBufferString m_sName; // 0x0
	CSeqSeqDescFlag m_flags; // 0x10
	CSeqTransition m_transition; // 0x1c
	int16_t m_nFrameRangeSequence; // 0x24
	int16_t m_nFrameCount; // 0x26
	float m_flFPS; // 0x28
	int16_t m_nSubCycles; // 0x2c
	int16_t m_numLocalResults; // 0x2e
	CUtlVector< CSeqCmdLayer > m_cmdLayerArray; // 0x30
	CUtlVector< CAnimAnimEvent > m_eventArray; // 0x48
	CUtlVector< CAnimActivity > m_activityArray; // 0x60
	CUtlVector< CSeqPoseSetting > m_poseSettingArray; // 0x78
};

// Aligment: 2
// Size: 160
class CSolveIKChainUpdateNode : public CUnaryUpdateNode, CAnimUpdateNodeBase
{
public:
	CUtlVector< CAnimParamHandle > m_targetHandles; // 0x68
	SolveIKChainPoseOpFixedSettings_t m_opFixedData; // 0x80
};

// Aligment: 2
// Size: 4
class CPoseHandle
{
public:
	uint16_t m_nIndex; // 0x0
	PoseType_t m_eType; // 0x2
};

// Aligment: 4
// Size: 152
class CSubtractUpdateNode : public CBinaryUpdateNode, CAnimUpdateNodeBase
{
public:
	BinaryNodeChildOption m_footMotionTiming; // 0x8c
	bool m_bApplyToFootMotion; // 0x90
	bool m_bApplyChannelsSeparately; // 0x91
	bool m_bUseModelSpace; // 0x92
};

// Aligment: 1
// Size: 24
struct JiggleBoneSettingsList_t
{
public:
	CUtlVector< JiggleBoneSettings_t > m_boneSettings; // 0x0
};

// Aligment: 2
// Size: 32
class CAnimMotorUpdaterBase
{
public:
	CUtlString m_name; // 0x10
	bool m_bDefault; // 0x18
};

// Aligment: 12
// Size: 160
class CMoverUpdateNode : public CUnaryUpdateNode, CAnimUpdateNodeBase
{
public:
	CAnimInputDamping m_damping; // 0x70
	AnimValueSource m_facingTarget; // 0x80
	CAnimParamHandle m_hMoveVecParam; // 0x84
	CAnimParamHandle m_hMoveHeadingParam; // 0x86
	CAnimParamHandle m_hTurnToFaceParam; // 0x88
	float m_flTurnToFaceOffset; // 0x8c
	float m_flTurnToFaceLimit; // 0x90
	bool m_bAdditive; // 0x94
	bool m_bApplyMovement; // 0x95
	bool m_bOrientMovement; // 0x96
	bool m_bApplyRotation; // 0x97
	bool m_bLimitOnly; // 0x98
};

// Aligment: 5
// Size: 168
class CMotionItem
{
public:
	// MPropertyHideField
	CMotionParameterManager m_paramManager; // 0x28
	// MPropertyHideField
	CUtlVector< CSmartPtr< CAnimTagSpan > > m_blockSpans; // 0x50
	// MPropertyHideField
	CUtlVector< CSmartPtr< CAnimTagSpan > > m_tagSpans; // 0x68
	// MPropertyHideField
	CUtlVector< CSmartPtr< CAnimParamSpan > > m_paramSpans; // 0x80
	// MPropertyFriendlyName "Loop"
	bool m_bLoop; // 0xa0
};

// Aligment: 0
// Size: 112
class COrientConstraint : public CBaseConstraint, CBoneConstraintBase
{
public:
// <no members described>
};

// Aligment: 1
// Size: 56
class CAnimClipDataManager
{
public:
	CUtlHashtable< CUtlString, CSmartPtr< CAnimClipData > > m_itemTable; // 0x18
};

// Aligment: 8
// Size: 72
class CStateUpdateData
{
public:
	CUtlString m_name; // 0x0
	AnimScriptHandle m_hScript; // 0x8
	CUtlVector< int32 > m_transitionIndices; // 0x10
	CUtlVector< CStateActionUpdater > m_actions; // 0x28
	AnimStateID m_stateID; // 0x40
	bitfield:1 m_bIsStartState; // 0x0
	bitfield:1 m_bIsEndState; // 0x0
	bitfield:1 m_bIsPassthrough; // 0x0
};

// Aligment: 0
// Size: 96
class CGroupInputAnimNode : public CProxyAnimNodeBase, CAnimNodeBase
{
public:
// <no members described>
};

// Aligment: 2
// Size: 48
struct WristBone_t
{
public:
	CTransform m_xOffsetTransformMS; // 0x0
	int32_t m_boneIndex; // 0x20
};

// Aligment: 0
// Size: 96
class CAndCondition : public CConditionBase
{
public:
// <no members described>
};

// Aligment: 46
// Size: 248
struct VPhysXConstraintParams_t
{
public:
	int8_t m_nType; // 0x0
	int8_t m_nTranslateMotion; // 0x1
	int8_t m_nRotateMotion; // 0x2
	int8_t m_nFlags; // 0x3
	Vector[2] m_anchor; // 0x4
	QuaternionStorage[2] m_axes; // 0x1c
	float m_maxForce; // 0x3c
	float m_maxTorque; // 0x40
	float m_linearLimitValue; // 0x44
	float m_linearLimitRestitution; // 0x48
	float m_linearLimitSpring; // 0x4c
	float m_linearLimitDamping; // 0x50
	float m_twistLowLimitValue; // 0x54
	float m_twistLowLimitRestitution; // 0x58
	float m_twistLowLimitSpring; // 0x5c
	float m_twistLowLimitDamping; // 0x60
	float m_twistHighLimitValue; // 0x64
	float m_twistHighLimitRestitution; // 0x68
	float m_twistHighLimitSpring; // 0x6c
	float m_twistHighLimitDamping; // 0x70
	float m_swing1LimitValue; // 0x74
	float m_swing1LimitRestitution; // 0x78
	float m_swing1LimitSpring; // 0x7c
	float m_swing1LimitDamping; // 0x80
	float m_swing2LimitValue; // 0x84
	float m_swing2LimitRestitution; // 0x88
	float m_swing2LimitSpring; // 0x8c
	float m_swing2LimitDamping; // 0x90
	Vector m_goalPosition; // 0x94
	QuaternionStorage m_goalOrientation; // 0xa0
	Vector m_goalAngularVelocity; // 0xb0
	float m_driveSpringX; // 0xbc
	float m_driveSpringY; // 0xc0
	float m_driveSpringZ; // 0xc4
	float m_driveDampingX; // 0xc8
	float m_driveDampingY; // 0xcc
	float m_driveDampingZ; // 0xd0
	float m_driveSpringTwist; // 0xd4
	float m_driveSpringSwing; // 0xd8
	float m_driveSpringSlerp; // 0xdc
	float m_driveDampingTwist; // 0xe0
	float m_driveDampingSwing; // 0xe4
	float m_driveDampingSlerp; // 0xe8
	int32_t m_solverIterationCount; // 0xec
	float m_projectionLinearTolerance; // 0xf0
	float m_projectionAngularTolerance; // 0xf4
};

// Aligment: 2
// Size: 24
struct ParamSpanSample_t
{
public:
	CAnimVariant m_value; // 0x0
	float m_flCycle; // 0x14
};

// Aligment: 2
// Size: 8
struct TraceSettings_t
{
public:
	float m_flTraceHeight; // 0x0
	float m_flTraceRadius; // 0x4
};

// Aligment: 0
// Size: 80
class CCurrentRotationVelocityMetricEvaluator : public CMotionMetricEvaluator
{
public:
// <no members described>
};

// Aligment: 0
// Size: 112
class CPointConstraint : public CBaseConstraint, CBoneConstraintBase
{
public:
// <no members described>
};

// Aligment: 4
// Size: 80
class CAnimationGraphVisualizerPie : public CAnimationGraphVisualizerPrimitiveBase
{
public:
	VectorAligned m_vWsCenter; // 0x10
	VectorAligned m_vWsStart; // 0x20
	VectorAligned m_vWsEnd; // 0x30
	Color m_Color; // 0x40
};

// Aligment: 7
// Size: 28
class CPhysSurfacePropertiesPhysics
{
public:
	// MKV3TransferName "friction"
	float m_friction; // 0x0
	// MKV3TransferName "elasticity"
	float m_elasticity; // 0x4
	// MKV3TransferName "density"
	float m_density; // 0x8
	// MKV3TransferName "thickness"
	float m_thickness; // 0xc
	// MKV3TransferName "softcontactfrequency"
	float m_softContactFrequency; // 0x10
	// MKV3TransferName "softcontactdampingratio"
	float m_softContactDampingRatio; // 0x14
	// MKV3TransferName "wheeldrag"
	float m_wheelDrag; // 0x18
};

// Aligment: 0
// Size: 88
class CGroupOutputAnimNode : public CProxyAnimNodeBase, CAnimNodeBase
{
public:
// <no members described>
};

// Aligment: 14
// Size: 432
class CAnimDesc
{
public:
	CBufferString m_name; // 0x0
	CAnimDesc_Flag m_flags; // 0x10
	float fps; // 0x18
	// MKV3TransferName "m_pData"
	CAnimEncodedFrames m_Data; // 0x20
	CUtlVector< CAnimMovement > m_movementArray; // 0xf8
	CUtlVector< CAnimAnimEvent > m_eventArray; // 0x110
	CUtlVector< CAnimActivity > m_activityArray; // 0x128
	CUtlVector< CAnimLocalHierarchy > m_hierarchyArray; // 0x140
	float framestalltime; // 0x158
	Vector m_vecRootMin; // 0x15c
	Vector m_vecRootMax; // 0x168
	CUtlVector< Vector > m_vecBoneWorldMin; // 0x178
	CUtlVector< Vector > m_vecBoneWorldMax; // 0x190
	CAnimSequenceParams m_sequenceParams; // 0x1a8
};

// Aligment: 1
// Size: 32
class CAnimParamHandleMap
{
public:
	CUtlHashtable< uint16, int16 > m_list; // 0x0
};

// Aligment: 4
// Size: 12
class CSeqIKLock
{
public:
	float m_flPosWeight; // 0x0
	float m_flAngleWeight; // 0x4
	int16_t m_nLocalBone; // 0x8
	bool m_bBonesOrientedAlongPositiveX; // 0xa
};

// Aligment: 1
// Size: 184
class CGroupAnimNode : public CContainerAnimNodeBase, CAnimNodeBase
{
public:
	// MPropertyHideField
	CAnimNodeManager m_nodeMgr; // 0x70
};

// Aligment: 3
// Size: 80
class CRenderSkeleton
{
public:
	CUtlVector< RenderSkeletonBone_t > m_bones; // 0x0
	CUtlVector< int32 > m_boneParents; // 0x30
	int32_t m_nBoneWeightCount; // 0x48
};

// Aligment: 6
// Size: 80
class CPlayerInputAnimMotorUpdater : public CAnimMotorUpdaterBase
{
public:
	CUtlVector< float32 > m_sampleTimes; // 0x20
	float m_flSpringConstant; // 0x3c
	float m_flAnticipationDistance; // 0x40
	CAnimParamHandle m_hAnticipationPosParam; // 0x44
	CAnimParamHandle m_hAnticipationHeadingParam; // 0x46
	bool m_bUseAcceleration; // 0x48
};

// Aligment: 2
// Size: 16
class CStateActionUpdater
{
public:
	CSmartPtr< CAnimActionUpdater > m_pAction; // 0x0
	StateActionBehavior m_eBehavior; // 0x8
};

// Aligment: 4
// Size: 136
class CFloatAnimParameter : public CAnimParameterBase
{
public:
	// MPropertyFriendlyName "Default Value"
	float m_fDefaultValue; // 0x78
	// MPropertyFriendlyName "Min Value"
	float m_fMinValue; // 0x7c
	// MPropertyFriendlyName "Max Value"
	float m_fMaxValue; // 0x80
	// MPropertyFriendlyName "Interpolate"
	bool m_bInterpolate; // 0x84
};

// Aligment: 0
// Size: 56
class CZeroPoseAnimNode : public CAnimNodeBase
{
public:
// <no members described>
};

// Aligment: 5
// Size: 168
class CBoneConstraintPoseSpaceMorph : public CBoneConstraintBase
{
public:
	CUtlString m_sBoneName; // 0x28
	CUtlString m_sAttachmentName; // 0x30
	CUtlVector< CUtlString > m_outputMorph; // 0x38
	CUtlVector< CBoneConstraintPoseSpaceMorph::Input_t > m_inputList; // 0x50
	bool m_bClamp; // 0x68
};

// Aligment: 2
// Size: 16
class MotionBlendItem
{
public:
	CSmartPtr< CMotionNode > m_pChild; // 0x0
	float m_flKeyValue; // 0x8
};

// Aligment: 1
// Size: 152
class CBoneConstraintPoseSpaceBone : public CBaseConstraint, CBoneConstraintBase
{
public:
	CUtlVector< CBoneConstraintPoseSpaceBone::Input_t > m_inputList; // 0x70
};

// Aligment: 2
// Size: 40
class CAnimGraphModelBinding
{
public:
	CUtlString m_modelName; // 0x8
	CSmartPtr< CAnimUpdateSharedData > m_pSharedData; // 0x10
};

// Aligment: 1
// Size: 48
class CAnimGraphSettingsManager
{
public:
	CUtlVector< CSmartPtr< CAnimGraphSettingsGroup > > m_settingsGroups; // 0x18
};

// Aligment: 11
// Size: 192
struct LookAtOpFixedSettings_t
{
public:
	CAnimAttachment m_attachment; // 0x0
	CAnimInputDamping m_damping; // 0x80
	CUtlVector< LookAtBone_t > m_bones; // 0x90
	float m_flYawLimit; // 0xa8
	float m_flPitchLimit; // 0xac
	float m_flHysteresisInnerAngle; // 0xb0
	float m_flHysteresisOuterAngle; // 0xb4
	bool m_bRotateYawForward; // 0xb8
	bool m_bMaintainUpDirection; // 0xb9
	bool m_bTargetIsPosition; // 0xba
	bool m_bUseHysteresis; // 0xbb
};

// Aligment: 3
// Size: 48
class CStaticPoseCache
{
public:
	CUtlVector< CCachedPose > m_poses; // 0x10
	int32_t m_nBoneCount; // 0x28
	int32_t m_nMorphCount; // 0x2c
};

// Aligment: 3
// Size: 24
class CFloatAnimValue
{
public:
	// MPropertyHideField
	float m_flConstValue; // 0x8
	// MPropertyHideField
	AnimParamID m_paramID; // 0xc
	// MPropertyHideField
	EAnimValueSource m_eSource; // 0x10
};

// Aligment: 0
// Size: 56
class CBindPoseAnimNode : public CAnimNodeBase
{
public:
// <no members described>
};

// Aligment: 2
// Size: 88
class CSequenceBlend2DItem : public CBlend2DItemBase
{
public:
	// MPropertyHideField
	CUtlVector< CSmartPtr< CAnimTagSpan > > m_tagSpans; // 0x38
	// MPropertyFriendlyName "Sequence"
	// MPropertyAttributeChoiceName "Sequence"
	CUtlString m_sequenceName; // 0x50
};

// Aligment: 5
// Size: 144
class CCycleControlClipUpdateNode : public CLeafUpdateNode, CAnimUpdateNodeBase
{
public:
	CUtlVector< TagSpan_t > m_tags; // 0x60
	HSequence m_hSequence; // 0x7c
	float m_duration; // 0x80
	AnimValueSource m_valueSource; // 0x84
	CAnimParamHandle m_paramIndex; // 0x88
};

// Aligment: 1
// Size: 24
class CVPhysXSurfacePropertiesList
{
public:
	// MKV3TransferName "SurfacePropertiesList"
	CUtlVector< CPhysSurfaceProperties* > m_surfacePropertiesList; // 0x0
};

// Aligment: 2
// Size: 160
class CTiltTwistConstraint : public CBaseConstraint, CBoneConstraintBase
{
public:
	int32_t m_nTargetAxis; // 0x70
	int32_t m_nSlaveAxis; // 0x74
};

// Aligment: 6
// Size: 96
class CStanceOverrideAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	CAnimNodeConnection m_inputConnection; // 0x38
	// MPropertyHideField
	CAnimNodeConnection m_stanceSourceConnection; // 0x40
	// MPropertyFriendlyName "Blend Parameter (optional)"
	// MPropertyAttributeChoiceName "FloatParameter"
	AnimParamID m_blendParamID; // 0x48
	// MPropertyFriendlyName "Stance Source"
	// MPropertyAttrChangeCallback
	StanceOverrideMode m_eMode; // 0x4c
	// MPropertyFriendlyName "Sequence"
	// MPropertyAttributeChoiceName "Sequence"
	// MPropertyAttrStateCallback
	CUtlString m_sequenceName; // 0x50
	// MPropertyFriendlyName "Frame"
	// MPropertyAttrStateCallback
	int32_t m_nFrameIndex; // 0x58
};

// Aligment: 5
// Size: 88
struct ScriptInfo_t
{
public:
	CUtlString m_code; // 0x0
	CUtlVector< CAnimParamHandle > m_paramsModified; // 0x8
	CUtlVector< int32 > m_proxyReadParams; // 0x20
	CUtlVector< int32 > m_proxyWriteParams; // 0x38
	AnimScriptType m_eScriptType; // 0x50
};

// Aligment: 2
// Size: 32
class CFlexRule
{
public:
	int32_t m_nFlex; // 0x0
	CUtlVector< CFlexOp > m_FlexOps; // 0x8
};

// Aligment: 2
// Size: 56
class CExpressionAction : public CAnimActionBase
{
public:
	AnimParamID m_param; // 0x28
	CUtlString m_expression; // 0x30
};

// Aligment: 3
// Size: 136
class CDirectPlaybackUpdateNode : public CUnaryUpdateNode, CAnimUpdateNodeBase
{
public:
	bool m_bFinishEarly; // 0x6c
	bool m_bResetOnFinish; // 0x6d
	CUtlVector< CDirectPlaybackTagData > m_allTags; // 0x70
};

// Aligment: 7
// Size: 104
class CDistanceRemainingMetricEvaluator : public CMotionMetricEvaluator
{
public:
	float m_flMaxDistance; // 0x50
	float m_flMinDistance; // 0x54
	float m_flStartGoalFilterDistance; // 0x58
	float m_flMaxGoalOvershootScale; // 0x5c
	bool m_bFilterFixedMinDistance; // 0x60
	bool m_bFilterGoalDistance; // 0x61
	bool m_bFilterGoalOvershoot; // 0x62
};

// Aligment: 5
// Size: 96
struct RenderSkeletonBone_t
{
public:
	CUtlString m_boneName; // 0x0
	CUtlString m_parentName; // 0x8
	matrix3x4_t m_invBindPose; // 0x10
	SkeletonBoneBounds_t m_bbox; // 0x40
	float m_flSphereRadius; // 0x58
};

// Aligment: 7
// Size: 48
struct FootPinningPoseOpFixedData_t
{
public:
	CUtlVector< FootFixedData_t > m_footInfo; // 0x0
	float m_flBlendTime; // 0x18
	float m_flLockBreakDistance; // 0x1c
	float m_flMaxLegTwist; // 0x20
	int32_t m_nHipBoneIndex; // 0x24
	bool m_bApplyLegTwistLimits; // 0x28
	bool m_bApplyFootRotationLimits; // 0x29
};

// Aligment: 9
// Size: 24
class CSeqCmdLayer
{
public:
	int16_t m_cmd; // 0x0
	int16_t m_nLocalReference; // 0x2
	int16_t m_nLocalBonemask; // 0x4
	int16_t m_nDstResult; // 0x6
	int16_t m_nSrcResult; // 0x8
	bool m_bSpline; // 0xa
	float m_flVar1; // 0xc
	float m_flVar2; // 0x10
	int16_t m_nLineNumber; // 0x14
};

// Aligment: 5
// Size: 32
struct ModelBoneFlexDriverControl_t
{
public:
	ModelBoneFlexComponent_t m_nBoneComponent; // 0x0
	CUtlString m_flexController; // 0x8
	uint32_t m_flexControllerToken; // 0x10
	float m_flMin; // 0x14
	float m_flMax; // 0x18
};

// Aligment: 3
// Size: 160
class CTwistConstraint : public CBaseConstraint, CBoneConstraintBase
{
public:
	bool m_bInverse; // 0x70
	Quaternion m_qParentBindRotation; // 0x80
	Quaternion m_qChildBindRotation; // 0x90
};

// Aligment: 2
// Size: 64
class CAnimationGraphVisualizerAxis : public CAnimationGraphVisualizerPrimitiveBase
{
public:
	CTransform m_xWsTransform; // 0x10
	float m_flAxisSize; // 0x30
};

// Aligment: 10
// Size: 96
class CSubtractAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	CAnimNodeConnection m_baseInputConnection; // 0x38
	// MPropertyHideField
	CAnimNodeConnection m_subtractInputConnection; // 0x40
	// MPropertyFriendlyName "Timing Control"
	// MPropertyAttrChangeCallback
	BinaryNodeTiming m_timingBehavior; // 0x48
	// MPropertyFriendlyName "Timing Blend"
	// MPropertyAttributeRange "0 1"
	// MPropertyAttrStateCallback
	float m_flTimingBlend; // 0x4c
	// MPropertyFriendlyName "Foot Motion Timing"
	BinaryNodeChildOption m_footMotionTiming; // 0x50
	// MPropertyFriendlyName "Subtract Foot Motion"
	bool m_bApplyToFootMotion; // 0x54
	// MPropertyFriendlyName "Reset Base Child"
	bool m_bResetBase; // 0x55
	// MPropertyFriendlyName "Reset Subtracted Child"
	bool m_bResetSubtract; // 0x56
	// MPropertyFriendlyName "Treat Translation Separately"
	bool m_bApplyChannelsSeparately; // 0x57
	// MPropertyFriendlyName "Use Model Space"
	bool m_bUseModelSpace; // 0x58
};

// Aligment: 5
// Size: 120
struct VPhysics2ShapeDef_t
{
public:
	CUtlVector< RnSphereDesc_t > m_spheres; // 0x0
	CUtlVector< RnCapsuleDesc_t > m_capsules; // 0x18
	CUtlVector< RnHullDesc_t > m_hulls; // 0x30
	CUtlVector< RnMeshDesc_t > m_meshes; // 0x48
	CUtlVector< uint16 > m_CollisionAttributeIndices; // 0x60
};

// Aligment: 9
// Size: 96
class CVRInputComponent : public CAnimComponentBase
{
public:
	// MPropertyHideField
	AnimParamID m_FingerCurl_Thumb; // 0x38
	// MPropertyHideField
	AnimParamID m_FingerCurl_Index; // 0x3c
	// MPropertyHideField
	AnimParamID m_FingerCurl_Middle; // 0x40
	// MPropertyHideField
	AnimParamID m_FingerCurl_Ring; // 0x44
	// MPropertyHideField
	AnimParamID m_FingerCurl_Pinky; // 0x48
	// MPropertyHideField
	AnimParamID m_FingerSplay_Thumb_Index; // 0x4c
	// MPropertyHideField
	AnimParamID m_FingerSplay_Index_Middle; // 0x50
	// MPropertyHideField
	AnimParamID m_FingerSplay_Middle_Ring; // 0x54
	// MPropertyHideField
	AnimParamID m_FingerSplay_Ring_Pinky; // 0x58
};

// Aligment: 0
// Size: 80
class CMotionNodeManager : public CAnimNodeManager
{
public:
// <no members described>
};

// Aligment: 6
// Size: 88
class CPlayerInputAnimMotor : public CAnimMotorBase
{
public:
	// MPropertyFriendlyName "Sample Times"
	CUtlVector< float32 > m_sampleTimes; // 0x28
	// MPropertyFriendlyName "Use Acceleration"
	bool m_bUseAcceleration; // 0x40
	// MPropertyFriendlyName "Spring Constant"
	float m_flSpringConstant; // 0x44
	// MPropertyFriendlyName "Anticipation Distance"
	float m_flAnticipationDistance; // 0x48
	// MPropertyFriendlyName "Anticipation Position Parameter"
	// MPropertyAttributeChoiceName "VectorParameter"
	AnimParamID m_anticipationPosParam; // 0x4c
	// MPropertyFriendlyName "Anticipation Heading Parameter"
	// MPropertyAttributeChoiceName "FloatParameter"
	AnimParamID m_anticipationHeadingParam; // 0x50
};

// Aligment: 8
// Size: 208
class CAnimSkeleton
{
public:
	CUtlVector< CTransform > m_localSpaceTransforms; // 0x10
	CUtlVector< CTransform > m_modelSpaceTransforms; // 0x28
	CUtlVector< CUtlString > m_boneNames; // 0x40
	CUtlVector< CUtlVector< int32 > > m_children; // 0x58
	CUtlVector< int32 > m_parents; // 0x70
	CUtlVector< CAnimFoot > m_feet; // 0x88
	CUtlVector< CUtlString > m_morphNames; // 0xa0
	CUtlVector< int32 > m_lodBoneCounts; // 0xb8
};

// Aligment: 3
// Size: 472
class CRenderMesh
{
public:
	CUtlVectorFixedGrowable< CSceneObjectData > m_sceneObjects; // 0x10
	CUtlVector< CBaseConstraint* > m_constraints; // 0xa0
	CRenderSkeleton m_skeleton; // 0xb8
};

// Aligment: 1
// Size: 8
class CFlexDesc
{
public:
	CUtlString m_szFacs; // 0x0
};

// Aligment: 4
// Size: 48
class CWristBone
{
public:
	CUtlString m_name; // 0x0
	Vector m_vForwardLS; // 0x8
	Vector m_vUpLS; // 0x14
	Vector m_vOffset; // 0x20
};

// Aligment: 2
// Size: 72
class CAnimClipData
{
public:
	// MPropertyHideField
	CUtlVector< CSmartPtr< CAnimTagSpan > > m_tagSpans; // 0x20
	// MPropertyFriendlyName "Sequence"
	// MPropertyAttributeChoiceName "Sequence"
	CUtlString m_clipName; // 0x38
};

// Aligment: 3
// Size: 72
class CMotionNodeSequence : public CMotionNode
{
public:
	CUtlVector< TagSpan_t > m_tags; // 0x28
	HSequence m_hSequence; // 0x40
	float m_flPlaybackSpeed; // 0x44
};

// Aligment: 6
// Size: 80
class CWayPointHelperAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	CAnimNodeConnection m_inputConnection; // 0x38
	// MPropertyFriendlyName "Start Cycle"
	// MPropertyAttributeRange "0 1"
	float m_flStartCycle; // 0x40
	// MPropertyFriendlyName "End Cycle"
	// MPropertyAttributeRange "0 1"
	float m_flEndCycle; // 0x44
	// MPropertyFriendlyName "Only align to Goals"
	bool m_bOnlyGoals; // 0x48
	// MPropertyFriendlyName "Prevent Overshoot"
	bool m_bPreventOvershoot; // 0x49
	// MPropertyFriendlyName "Prevent Undershoot"
	bool m_bPreventUndershoot; // 0x4a
};

// Aligment: 2
// Size: 8
class CFingerSource
{
public:
	AnimVRFinger_t m_nFingerIndex; // 0x0
	float m_flFingerWeight; // 0x4
};

// Aligment: 4
// Size: 24
class CFlexController
{
public:
	CUtlString m_szName; // 0x0
	CUtlString m_szType; // 0x8
	float min; // 0x10
	float max; // 0x14
};

// Aligment: 11
// Size: 280
class CSeqS1SeqDesc
{
public:
	CBufferString m_sName; // 0x0
	CSeqSeqDescFlag m_flags; // 0x10
	CSeqMultiFetch m_fetch; // 0x20
	int32_t m_nLocalWeightlist; // 0x88
	CUtlVector< CSeqAutoLayer > m_autoLayerArray; // 0x90
	CUtlVector< CSeqIKLock > m_IKLockArray; // 0xa8
	CSeqTransition m_transition; // 0xc0
	KeyValues3 m_SequenceKeys; // 0xc8
	// MKV3TransferName "m_keyValueText"
	CBufferString m_LegacyKeyValueText; // 0xd8
	CUtlVector< CAnimActivity > m_activityArray; // 0xe8
	CUtlVector< CFootMotion > m_footMotion; // 0x100
};

// Aligment: 1
// Size: 88
class CProxyAnimNodeBase : public CAnimNodeBase
{
public:
	// MPropertyFriendlyName "External Connections"
	// MPropertyAutoExpandSelf
	// MPropertyAttrChangeCallback
	CUtlVector< CConnectionProxyItem > m_proxyItems; // 0x40
};

// Aligment: 23
// Size: 320
class CMotionMatchingUpdateNode : public CLeafUpdateNode, CAnimUpdateNodeBase
{
public:
	CMotionDataSet m_dataSet; // 0x58
	CUtlVector< CSmartPtr< CMotionMetricEvaluator > > m_metrics; // 0x78
	CUtlVector< float32 > m_weights; // 0x90
	bool m_bSearchEveryTick; // 0xe0
	float m_flSearchInterval; // 0xe4
	bool m_bSearchWhenClipEnds; // 0xe8
	bool m_bSearchWhenGoalChanges; // 0xe9
	CBlendCurve m_blendCurve; // 0xec
	float m_flSampleRate; // 0xf4
	float m_flBlendTime; // 0xf8
	bool m_bLockClipWhenWaning; // 0xfc
	float m_flSelectionThreshold; // 0x100
	float m_flReselectionTimeWindow; // 0x104
	bool m_bEnableRotationCorrection; // 0x108
	bool m_bGoalAssist; // 0x109
	float m_flGoalAssistDistance; // 0x10c
	float m_flGoalAssistTolerance; // 0x110
	CAnimInputDamping m_distanceScale_Damping; // 0x118
	float m_flDistanceScale_OuterRadius; // 0x128
	float m_flDistanceScale_InnerRadius; // 0x12c
	float m_flDistanceScale_MaxScale; // 0x130
	float m_flDistanceScale_MinScale; // 0x134
	bool m_bEnableDistanceScaling; // 0x138
};

// Aligment: 3
// Size: 20
class CFootTrajectory
{
public:
	Vector m_vOffset; // 0x0
	float m_flRotationOffset; // 0xc
	float m_flProgression; // 0x10
public:
	static CFootTrajectory &Get_Identity() { return *reinterpret_cast<CFootTrajectory*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CFootTrajectory")->m_static_fiels[0]->m_instance); }
};

// Aligment: 3
// Size: 48
class CAnimationGraphVisualizerText : public CAnimationGraphVisualizerPrimitiveBase
{
public:
	VectorAligned m_vWsPosition; // 0x10
	Color m_Color; // 0x20
	CUtlString m_Text; // 0x28
};

// Aligment: 3
// Size: 24
class CConnectionProxyItem
{
public:
	// MPropertyFriendlyName "Name"
	CUtlString m_name; // 0x0
	// MPropertyHideField
	AnimNodeOutputID m_outputID; // 0x8
	// MPropertyHideField
	CAnimNodeConnection m_inputConnection; // 0xc
};

// Aligment: 0
// Size: 96
class CBindPoseUpdateNode : public CLeafUpdateNode, CAnimUpdateNodeBase
{
public:
// <no members described>
};

// Aligment: 1
// Size: 16
class CAnimationGraphVisualizerPrimitiveBase
{
public:
	CAnimationGraphVisualizerPrimitiveType m_Type; // 0x8
};

// Aligment: 13
// Size: 120
class CBoneMaskAnimNode : public CAnimNodeBase
{
public:
	// MPropertyFriendlyName "Bone Mask"
	// MPropertyAttributeChoiceName "BoneMask"
	CUtlString m_weightListName; // 0x38
	// MPropertyHideField
	CAnimNodeConnection m_inputConnection1; // 0x40
	// MPropertyHideField
	CAnimNodeConnection m_inputConnection2; // 0x48
	// MPropertyFriendlyName "Blend Space"
	BoneMaskBlendSpace m_blendSpace; // 0x50
	// MPropertyFriendlyName "Use Blend Source"
	// MPropertyAttrChangeCallback
	bool m_bUseBlendScale; // 0x54
	// MPropertyFriendlyName "Blend Source"
	// MPropertyAttrChangeCallback
	// MPropertyAttrStateCallback
	AnimValueSource m_blendValueSource; // 0x58
	// MPropertyFriendlyName "Blend Parameter"
	// MPropertyAttributeChoiceName "FloatParameter"
	// MPropertyAttrStateCallback
	AnimParamID m_blendParameter; // 0x5c
	// MPropertyFriendlyName "Timing Control"
	// MPropertyAttrChangeCallback
	BinaryNodeTiming m_timingBehavior; // 0x60
	// MPropertyFriendlyName "Timing Blend"
	// MPropertyAttributeRange "0 1"
	// MPropertyAttrStateCallback
	float m_flTimingBlend; // 0x64
	// MPropertyFriendlyName "Root Motion Blend"
	// MPropertyAttributeRange "0 1"
	float m_flRootMotionBlend; // 0x68
	// MPropertyFriendlyName "Foot Motion Timing"
	BinaryNodeChildOption m_footMotionTiming; // 0x6c
	// MPropertyFriendlyName "Reset Child1"
	bool m_bResetChild1; // 0x70
	// MPropertyFriendlyName "Reset Child2"
	bool m_bResetChild2; // 0x71
};

// Aligment: 1
// Size: 104
class CStateMachineComponent : public CAnimComponentBase
{
public:
	// MPropertyFriendlyName "Name"
	// MPropertySortPriority "100"
	CUtlString m_sName; // 0x60
};

// Aligment: 2
// Size: 32
class CToggleComponentActionUpdater : public CAnimActionUpdater
{
public:
	AnimComponentID m_componentID; // 0x18
	bool m_bSetEnabled; // 0x1c
};

// Aligment: 1
// Size: 72
class CAnimNodeManager
{
public:
	// MPropertyHideField
	CUtlHashtable< AnimNodeID, CSmartPtr< CAnimNodeBase > > m_nodes; // 0x8
};

// Aligment: 6
// Size: 64
class CStateStatusCondition : public CConditionBase
{
public:
	StateValue m_sourceValue; // 0x28
	StateComparisonValueType m_comparisonValueType; // 0x2c
	float m_comparisonFixedValue; // 0x30
	StateValue m_comparisonStateValue; // 0x34
	AnimParamID m_comparisonParamID; // 0x38
	Comparison_t m_comparisonOp; // 0x3c
};

// Aligment: 2
// Size: 104
class CStateMachineAnimNode : public CAnimNodeBase
{
public:
	// MPropertyFriendlyName "Block Tags from Waning States"
	bool m_bBlockWaningTags; // 0x60
	// MPropertyFriendlyName "Lock State when Waning"
	bool m_bLockStateWhenWaning; // 0x61
};

// Aligment: 7
// Size: 304
class CAnimationGroup
{
public:
	uint32_t m_nFlags; // 0x10
	CBufferString m_name; // 0x18
	// MKV3TransferName "m_localHAnimArray"
	CUtlVector< CStrongHandle< InfoForResourceTypeCAnimData > > m_localHAnimArray_Handle; // 0x60
	// MKV3TransferName "m_includedGroupArray"
	CUtlVector< CStrongHandle< InfoForResourceTypeCAnimationGroup > > m_includedGroupArray_Handle; // 0x78
	// MKV3TransferName "m_directHSeqGroup"
	CStrongHandle< InfoForResourceTypeCSequenceGroupData > m_directHSeqGroup_Handle; // 0x90
	CAnimKeyData m_decodeKey; // 0x98
	CUtlVector< CBufferString > m_szScripts; // 0x110
};

// Aligment: 6
// Size: 136
class CTurnHelperUpdateNode : public CUnaryUpdateNode, CAnimUpdateNodeBase
{
public:
	AnimValueSource m_facingTarget; // 0x6c
	float m_turnStartTimeOffset; // 0x70
	float m_turnDuration; // 0x74
	bool m_bMatchChildDuration; // 0x78
	float m_manualTurnOffset; // 0x7c
	bool m_bUseManualTurnOffset; // 0x80
};

// Aligment: 7
// Size: 88
class CAudioAnimTag : public CAnimTagBase
{
public:
	// MPropertyFriendlyName "Sound Event"
	// MPropertyAttributeEditor "SoundPicker()"
	CUtlString m_clipName; // 0x40
	// MPropertyFriendlyName "Attachment"
	// MPropertyAttributeChoiceName "Attachment"
	CUtlString m_attachmentName; // 0x48
	// MPropertyFriendlyName "Volume"
	// MPropertyAttributeRange "0 1"
	float m_flVolume; // 0x50
	// MPropertyFriendlyName "Stop on Tag End"
	bool m_bStopWhenTagEnds; // 0x54
	// MPropertyFriendlyName "Stop When Graph Destroyed"
	bool m_bStopWhenGraphEnds; // 0x55
	// MPropertyFriendlyName "Play on Server"
	bool m_bPlayOnServer; // 0x56
	// MPropertyFriendlyName "Play on Client"
	bool m_bPlayOnClient; // 0x57
};

// Aligment: 8
// Size: 64
class CPhysSurfacePropertiesSoundNames
{
public:
	// MKV3TransferName "impactsoft"
	CUtlString m_impactSoft; // 0x0
	// MKV3TransferName "impacthard"
	CUtlString m_impactHard; // 0x8
	// MKV3TransferName "scrapesmooth"
	CUtlString m_scrapeSmooth; // 0x10
	// MKV3TransferName "scraperough"
	CUtlString m_scrapeRough; // 0x18
	// MKV3TransferName "bulletimpact"
	CUtlString m_bulletImpact; // 0x20
	// MKV3TransferName "rolling"
	CUtlString m_rolling; // 0x28
	// MKV3TransferName "break"
	CUtlString m_break; // 0x30
	// MKV3TransferName "strain"
	CUtlString m_strain; // 0x38
};

// Aligment: 8
// Size: 104
class CSeqMultiFetch
{
public:
	CSeqMultiFetchFlag m_flags; // 0x0
	CUtlVector< int16 > m_localReferenceArray; // 0x8
	int32[2] m_nGroupSize; // 0x20
	int32[2] m_nLocalPose; // 0x28
	CUtlVector< float32 > m_poseKeyArray0; // 0x30
	CUtlVector< float32 > m_poseKeyArray1; // 0x48
	int32_t m_nLocalCyclePoseParameter; // 0x60
	bool m_bCalculatePoseParameters; // 0x64
};

// Aligment: 2
// Size: 40
struct CBoneConstraintPoseSpaceBone::Input_t
{
public:
	Vector m_inputValue; // 0x0
	CUtlVector< CTransform > m_outputTransformList; // 0x10
};

// Aligment: 7
// Size: 80
class CDampedPathAnimMotor : public CPathAnimMotorBase, CAnimMotorBase
{
public:
	// MPropertyFriendlyName "Anticipation Time"
	float m_flAnticipationTime; // 0x30
	// MPropertyFriendlyName "Minimum Speed Percentage"
	float m_flMinSpeedScale; // 0x34
	// MPropertyFriendlyName "Anticipation Position Parameter"
	// MPropertyAttributeChoiceName "VectorParameter"
	AnimParamID m_anticipationPosParam; // 0x38
	// MPropertyFriendlyName "Anticipation Heading Parameter"
	// MPropertyAttributeChoiceName "FloatParameter"
	AnimParamID m_anticipationHeadingParam; // 0x3c
	// MPropertyFriendlyName "Spring Constant"
	// MPropertyGroupName "+Stopping:Arrival Damping"
	float m_flSpringConstant; // 0x40
	// MPropertyFriendlyName "Min Tension"
	// MPropertyGroupName "+Stopping:Arrival Damping"
	float m_flMinSpringTension; // 0x44
	// MPropertyFriendlyName "Max Tension"
	// MPropertyGroupName "+Stopping:Arrival Damping"
	float m_flMaxSpringTension; // 0x48
};

// Aligment: 9
// Size: 72
struct SkeletalInputOpFixedSettings_t
{
public:
	CUtlVector< WristBone_t > m_wristBones; // 0x0
	CUtlVector< FingerChain_t > m_fingers; // 0x18
	int32_t m_outerKnuckle1; // 0x30
	int32_t m_outerKnuckle2; // 0x34
	AnimVRHand_t m_eHand; // 0x38
	AnimVRHandMotionRange_t m_eMotionRange; // 0x3c
	AnimVrBoneTransformSource_t m_eTransformSource; // 0x40
	bool m_bEnableIK; // 0x44
	bool m_bEnableCollision; // 0x45
};

// Aligment: 10
// Size: 112
class CFingerChain
{
public:
	CUtlVector< CFingerSource > m_targets; // 0x0
	CUtlVector< CFingerBone > m_bones; // 0x18
	CUtlString m_name; // 0x30
	CUtlString m_tipParentBoneName; // 0x38
	Vector m_vTipOffset; // 0x40
	CUtlString m_metacarpalBoneName; // 0x50
	Vector m_vSplayHingeAxis; // 0x58
	float m_flSplayMinAngle; // 0x64
	float m_flSplayMaxAngle; // 0x68
	float m_flFingerScaleRatio; // 0x6c
};

// Aligment: 2
// Size: 264
class CGraphMotionItem : public CMotionItem
{
public:
	// MPropertyFriendlyName "Name"
	CUtlString m_name; // 0xb0
	// MPropertyHideField
	CMotionNodeManager m_nodeManager; // 0xb8
};

// Aligment: 3
// Size: 3
class CTransitionUpdateData
{
public:
	uint8_t m_srcStateIndex; // 0x0
	uint8_t m_destStateIndex; // 0x1
	bitfield:1 m_bDisabled; // 0x0
};

// Aligment: 2
// Size: 24
class CAnimUserDifference
{
public:
	CBufferString m_name; // 0x0
	int32_t m_nType; // 0x10
};

// Aligment: 2
// Size: 128
class CAnimNodeState : public CAnimState
{
public:
	// MPropertyHideField
	CAnimNodeConnection m_inputConnection; // 0x70
	// MPropertyFriendlyName "Exclusive Root Motion"
	// MPropertySortPriority "0"
	bool m_bIsRootMotionExclusive; // 0x78
};

// Aligment: 3
// Size: 48
class CAnimationGraphVisualizerSphere : public CAnimationGraphVisualizerPrimitiveBase
{
public:
	VectorAligned m_vWsPosition; // 0x10
	float m_flRadius; // 0x20
	Color m_Color; // 0x24
};

// Aligment: 2
// Size: 8
class CBlendCurve
{
public:
	float m_flControlPoint1; // 0x0
	float m_flControlPoint2; // 0x4
};

// Aligment: 8
// Size: 8
class CAnimDesc_Flag
{
public:
	bool m_bLooping; // 0x0
	bool m_bAllZeros; // 0x1
	bool m_bHidden; // 0x2
	bool m_bDelta; // 0x3
	bool m_bLegacyWorldspace; // 0x4
	bool m_bModelDoc; // 0x5
	bool m_bImplicitSeqIgnoreDelta; // 0x6
	bool m_bAnimGraphAdditive; // 0x7
};

// Aligment: 6
// Size: 224
class CAnimationSubGraph
{
public:
	CAnimNodeManager m_nodeManager; // 0x8
	CAnimComponentManager m_componentManager; // 0x50
	CUtlVector< CSmartPtr< CAnimParameterBase > > m_localParameters; // 0x78
	CUtlVector< CSmartPtr< CAnimTagBase > > m_localTags; // 0x90
	CUtlVector< CUtlString > m_referencedParamGroups; // 0xa8
	CUtlVector< CUtlString > m_referencedTagGroups; // 0xc0
};

// Aligment: 4
// Size: 88
class CClothSettingsAnimTag : public CAnimTagBase
{
public:
	// MPropertyFriendlyName "Stiffness"
	// MPropertyAttributeRange "0 1"
	float m_flStiffness; // 0x40
	// MPropertyFriendlyName "EaseIn"
	// MPropertyAttributeRange "0 1"
	float m_flEaseIn; // 0x44
	// MPropertyFriendlyName "EaseOut"
	// MPropertyAttributeRange "0 1"
	float m_flEaseOut; // 0x48
	// MPropertyFriendlyName "VertexSet"
	CUtlString m_nVertexSet; // 0x50
};

// Aligment: 2
// Size: 40
class CRigidBodyWeightList
{
public:
	CUtlString m_name; // 0x8
	CUtlVector< CRigidBodyWeight > m_weights; // 0x10
};

// Aligment: 4
// Size: 144
class CMorphConstraint : public CBaseConstraint, CBoneConstraintBase
{
public:
	CUtlString m_sTargetMorph; // 0x70
	int32_t m_nSlaveChannel; // 0x78
	float m_flMin; // 0x7c
	float m_flMax; // 0x80
};

// Aligment: 4
// Size: 24
class CChoiceNodeChild
{
public:
	// MPropertyHideField
	CAnimNodeConnection m_inputConnection; // 0x0
	// MPropertyFriendlyName "Name"
	CUtlString m_name; // 0x8
	// MPropertyFriendlyName "Weight"
	float m_weight; // 0x10
	// MPropertyFriendlyName "Blend Time"
	float m_blendTime; // 0x14
};

// Aligment: 8
// Size: 152
class CMorphSetData
{
public:
	int32_t m_nWidth; // 0x10
	int32_t m_nHeight; // 0x14
	CUtlVector< MorphBundleType_t > m_bundleTypes; // 0x18
	CUtlVector< CMorphData > m_morphDatas; // 0x30
	CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureAtlas; // 0x48
	CUtlVector< CFlexDesc > m_FlexDesc; // 0x50
	CUtlVector< CFlexController > m_FlexControllers; // 0x68
	CUtlVector< CFlexRule > m_FlexRules; // 0x80
};

// Aligment: 2
// Size: 48
class CFinishedCondition : public CConditionBase
{
public:
	FinishedConditionOption m_option; // 0x28
	bool m_bIsFinished; // 0x2c
};

// Aligment: 2
// Size: 24
class CMeshletDescriptor
{
public:
	PackedAABB_t m_PackedAABB; // 0x0
	CDrawCullingData m_CullingData; // 0x8
};

// Aligment: 2
// Size: 24
class CRenderBufferBinding
{
public:
	uint64_t m_hBuffer; // 0x0
	uint32_t m_nBindOffsetBytes; // 0x10
};

// Aligment: 1
// Size: 88
class CBonePositionMetricEvaluator : public CMotionMetricEvaluator
{
public:
	int32_t m_nBoneIndex; // 0x50
};

// Aligment: 2
// Size: 48
class CSetParameterActionUpdater : public CAnimActionUpdater
{
public:
	CAnimParamHandle m_hParam; // 0x18
	CAnimVariant m_value; // 0x1a
};

// Aligment: 0
// Size: 96
class COrCondition : public CConditionBase
{
public:
// <no members described>
};

// Aligment: 3
// Size: 88
class CAnimUpdateNodeBase
{
public:
	CAnimNodePath m_nodePath; // 0x18
	CUtlString m_name; // 0x48
	AnimNodeNetworkMode m_networkMode; // 0x50
};

// Aligment: 4
// Size: 96
class CFutureVelocityMetricEvaluator : public CMotionMetricEvaluator
{
public:
	float m_flDistance; // 0x50
	float m_flStoppingDistance; // 0x54
	float m_flTargetSpeed; // 0x58
	VelocityMetricMode m_eMode; // 0x5c
};

// Aligment: 2
// Size: 16
class CMovementMode
{
public:
	// MPropertyFriendlyName "Name"
	CUtlString m_name; // 0x0
	// MPropertyFriendlyName "Top Speed"
	float m_flSpeed; // 0x8
};

// Aligment: 4
// Size: 80
class CMotionMetricEvaluator
{
public:
	CUtlVector< float32 > m_means; // 0x18
	CUtlVector< float32 > m_standardDeviations; // 0x30
	float m_flWeight; // 0x48
	int32_t m_nDimensionStartIndex; // 0x4c
};

// Aligment: 3
// Size: 72
class CDirectPlaybackAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	CAnimNodeConnection m_inputConnection; // 0x38
	// MPropertyFriendlyName "Finish Early"
	bool m_bFinishEarly; // 0x40
	// MPropertyFriendlyName "Reset Child On Finish"
	bool m_bResetOnFinish; // 0x41
};

// Aligment: 2
// Size: 48
class CToggleComponentAction : public CAnimActionBase
{
public:
	// MPropertyFriendlyName "Component"
	// MPropertyAttributeChoiceName "Component"
	AnimComponentID m_componentID; // 0x28
	// MPropertyFriendlyName "Set Enabled"
	bool m_bSetEnabled; // 0x2c
};

// Aligment: 9
// Size: 60
class CFootCycleDefinition
{
public:
	Vector m_vStancePositionMS; // 0x0
	Vector m_vMidpointPositionMS; // 0xc
	float m_flStanceDirectionMS; // 0x18
	Vector m_vToStrideStartPos; // 0x1c
	CAnimCycle m_stanceCycle; // 0x28
	CFootCycle m_footLiftCycle; // 0x2c
	CFootCycle m_footOffCycle; // 0x30
	CFootCycle m_footStrikeCycle; // 0x34
	CFootCycle m_footLandCycle; // 0x38
};

// Aligment: 3
// Size: 96
class CFootStepTriggerAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	CAnimNodeConnection m_inputConnection; // 0x38
	// MPropertyFriendlyName "Tolerance"
	float m_flTolerance; // 0x40
	// MPropertyFriendlyName "Feet"
	// MPropertyAutoExpandSelf
	CUtlVector< CFootStepTriggerItem > m_items; // 0x48
};

// Aligment: 5
// Size: 96
class CConstraintSlave
{
public:
	Quaternion m_qBaseOrientation; // 0x0
	Vector m_vBasePosition; // 0x10
	uint32_t m_nBoneHash; // 0x1c
	float m_flWeight; // 0x20
	CUtlString m_sName; // 0x28
};

// Aligment: 1
// Size: 64
class CLODComponent : public CAnimComponentBase
{
public:
	int32_t m_nServerLOD; // 0x38
};

// Aligment: 6
// Size: 80
struct ChainToSolveData_t
{
public:
	int32_t m_nChainIndex; // 0x0
	IKSolverSettings_t m_SolverSettings; // 0x4
	IKTargetSettings_t m_TargetSettings; // 0x10
	SolveIKChainAnimNodeDebugSetting m_DebugSetting; // 0x30
	float m_flDebugNormalizedValue; // 0x34
	VectorAligned m_vDebugOffset; // 0x40
};

// Aligment: 4
// Size: 48
class CHitBoxSet
{
public:
	CUtlString m_name; // 0x0
	uint32_t m_nNameHash; // 0x8
	CUtlVector< CHitBox > m_HitBoxes; // 0x10
	CUtlString m_SourceFilename; // 0x28
};

// Aligment: 1
// Size: 40
class CMotionParameterManager
{
public:
	CUtlVector< CSmartPtr< CMotionParameter > > m_params; // 0x10
};

// Aligment: 2
// Size: 16
class CAnimInputDamping
{
public:
	// MPropertyFriendlyName "Speed Function"
	DampingSpeedFunction m_speedFunction; // 0x8
	// MPropertyFriendlyName "Speed Scale"
	float m_fSpeedScale; // 0xc
};

// Aligment: 7
// Size: 72
class CSlopeComponentUpdater : public CAnimComponentUpdater
{
public:
	float m_flTraceDistance; // 0x34
	CAnimParamHandle m_hSlopeAngle; // 0x38
	CAnimParamHandle m_hSlopeAngleFront; // 0x3a
	CAnimParamHandle m_hSlopeAngleSide; // 0x3c
	CAnimParamHandle m_hSlopeHeading; // 0x3e
	CAnimParamHandle m_hSlopeNormal; // 0x40
	CAnimParamHandle m_hSlopeNormal_WorldSpace; // 0x42
};

// Aligment: 3
// Size: 112
class CContainerAnimNodeBase : public CAnimNodeBase
{
public:
	// MPropertyHideField
	AnimNodeID m_inputNodeID; // 0x48
	// MPropertyHideField
	AnimNodeID m_outputNodeID; // 0x4c
	// MPropertyHideField
	CUtlHashtable< AnimNodeOutputID, CAnimNodeConnection > m_inputConnectionMap; // 0x50
};

// Aligment: 4
// Size: 40
class CAnimFrameSegment
{
public:
	int32_t m_nUniqueFrameIndex; // 0x0
	uint32_t m_nLocalElementMasks; // 0x4
	int32_t m_nLocalChannel; // 0x8
	CUtlBinaryBlock m_container; // 0x10
};

// Aligment: 1
// Size: 4
class AnimTagID
{
public:
	uint32_t m_id; // 0x0
};

// Aligment: 6
// Size: 80
class CVrSkeletalInputSettings
{
public:
	CUtlVector< CWristBone > m_wristBones; // 0x0
	CUtlVector< CFingerChain > m_fingers; // 0x18
	CUtlString m_name; // 0x30
	CUtlString m_outerKnuckle1; // 0x38
	CUtlString m_outerKnuckle2; // 0x40
	AnimVRHand_t m_eHand; // 0x48
};

// Aligment: 2
// Size: 208
class CEnumAnimParameter : public CAnimParameterBase
{
public:
	// MPropertyFriendlyName "Default Value"
	uint8_t m_defaultValue; // 0x80
	// MPropertyFriendlyName "Values"
	CUtlVector< CUtlString > m_enumOptions; // 0x88
};

// Aligment: 4
// Size: 96
class CFootstepLandedAnimTag : public CAnimTagBase
{
public:
	// MPropertyFriendlyName "Footstep Type"
	FootstepLandedFootSoundType_t m_FootstepType; // 0x40
	// MPropertyFriendlyName "Override Sound"
	// MPropertyAttributeChoiceName "Sound"
	CUtlString m_OverrideSoundName; // 0x48
	// MPropertyFriendlyName "Debug Name"
	CUtlString m_DebugAnimSourceString; // 0x50
	// MPropertyFriendlyName "Bone Name"
	// MPropertyAttributeChoiceName "Bone"
	CUtlString m_BoneName; // 0x58
};

// Aligment: 2
// Size: 24
class CStateNodeStateData
{
public:
	CAnimUpdateNodeRef m_pChild; // 0x0
	bitfield:1 m_bExclusiveRootMotion; // 0x0
};

// Aligment: 1
// Size: 88
class CRootAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	CAnimNodeConnection m_inputConnection; // 0x50
};

// Aligment: 2
// Size: 88
class CFootStride
{
public:
	CFootCycleDefinition m_definition; // 0x0
	CFootTrajectories m_trajectories; // 0x40
};

// Aligment: 7
// Size: 40
class CFootPinningItem
{
public:
	// MPropertyFriendlyName "Foot"
	// MPropertyAttributeChoiceName "Foot"
	CUtlString m_footName; // 0x0
	// MPropertyFriendlyName "Target Bone"
	// MPropertyAttributeChoiceName "Bone"
	CUtlString m_targetBoneName; // 0x8
	// MPropertyFriendlyName "IK Chain"
	// MPropertyAttributeChoiceName "IKChain"
	CUtlString m_ikChainName; // 0x10
	// MPropertyFriendlyName "Tag"
	// MPropertyAttributeChoiceName "Tag"
	AnimTagID m_tag; // 0x18
	// MPropertyFriendlyName "Parameter"
	// MPropertyAttributeChoiceName "BoolParameter"
	AnimParamID m_param; // 0x1c
	// MPropertyFriendlyName "Max Left Rotation"
	// MPropertyAttributeRange "0 180"
	float m_flMaxRotationLeft; // 0x20
	// MPropertyFriendlyName "Max Right Rotation"
	// MPropertyAttributeRange "0 180"
	float m_flMaxRotationRight; // 0x24
};

// Aligment: 3
// Size: 24
class CAnimDecoder
{
public:
	CBufferString m_szName; // 0x0
	int32_t m_nVersion; // 0x10
	int32_t m_nType; // 0x14
};

// Aligment: 1
// Size: 1
class CAnimEnum
{
public:
	uint8_t m_value; // 0x0
};

// Aligment: 4
// Size: 152
class CAddUpdateNode : public CBinaryUpdateNode, CAnimUpdateNodeBase
{
public:
	BinaryNodeChildOption m_footMotionTiming; // 0x8c
	bool m_bApplyToFootMotion; // 0x90
	bool m_bApplyChannelsSeparately; // 0x91
	bool m_bUseModelSpace; // 0x92
};

// Aligment: 1
// Size: 48
class CBonePositionMetric : public CMotionMetricBase
{
public:
	// MPropertyFriendlyName "Bone"
	// MPropertyAttributeChoiceName "Bone"
	CUtlString m_boneName; // 0x28
};

// Aligment: 2
// Size: 88
class CFutureFacingMetricEvaluator : public CMotionMetricEvaluator
{
public:
	float m_flDistance; // 0x50
	float m_flTime; // 0x54
};

// Aligment: 1
// Size: 80
class CModelConfigElement_SetMaterialGroup : public CModelConfigElement
{
public:
	CUtlString m_MaterialGroupName; // 0x48
};

// Aligment: 10
// Size: 96
class CAddAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	CAnimNodeConnection m_baseInput; // 0x38
	// MPropertyHideField
	CAnimNodeConnection m_additiveInput; // 0x40
	// MPropertyFriendlyName "Timing Control"
	// MPropertyAttrChangeCallback
	BinaryNodeTiming m_timingBehavior; // 0x48
	// MPropertyFriendlyName "Timing Blend"
	// MPropertyAttributeRange "0 1"
	// MPropertyAttrStateCallback
	float m_flTimingBlend; // 0x4c
	// MPropertyFriendlyName "Foot Motion Timing"
	BinaryNodeChildOption m_footMotionTiming; // 0x50
	// MPropertyFriendlyName "Add Foot Motion"
	bool m_bApplyToFootMotion; // 0x54
	// MPropertyFriendlyName "Reset Base Child"
	bool m_bResetBase; // 0x55
	// MPropertyFriendlyName "Reset Additive Child"
	bool m_bResetAdditive; // 0x56
	// MPropertyFriendlyName "Treat Translation Separately"
	bool m_bApplyChannelsSeparately; // 0x57
	// MPropertyFriendlyName "Use Model Space"
	bool m_bUseModelSpace; // 0x58
};

// Aligment: 9
// Size: 192
class CMovementComponentUpdater : public CAnimComponentUpdater
{
public:
	CUtlVector< CMovementMode > m_movementModes; // 0x30
	CUtlVector< CSmartPtr< CAnimMotorUpdaterBase > > m_motors; // 0x48
	CAnimInputDamping m_facingDamping; // 0x60
	FacingMode m_eDefaultFacingMode; // 0x70
	int32_t m_nDefaultMotorIndex; // 0x7c
	bool m_bMoveVarsDisabled; // 0x80
	bool m_bNetworkPath; // 0x81
	bool m_bNetworkFacing; // 0x82
	CAnimParamHandle[30] m_paramHandles; // 0x83
};

// Aligment: 1
// Size: 272
class CFollowAttachmentUpdateNode : public CUnaryUpdateNode, CAnimUpdateNodeBase
{
public:
	FollowAttachmentSettings_t m_opFixedData; // 0x70
};

// Aligment: 1
// Size: 40
class CPathAnimMotorUpdaterBase : public CAnimMotorUpdaterBase
{
public:
	bool m_bLockToPath; // 0x20
};

// Aligment: 4
// Size: 72
class CAnimParamSpan
{
public:
	CUtlVector< CAnimParamSpanSample > m_samples; // 0x20
	AnimParamID m_id; // 0x38
	float m_flStartCycle; // 0x3c
	float m_flEndCycle; // 0x40
};

// Aligment: 10
// Size: 168
class CSelectorAnimNode : public CAnimNodeBase
{
public:
	// MPropertySuppressField
	CUtlVector< CAnimNodeConnection > m_children; // 0x40
	// MPropertyHideField
	CUtlVector< AnimTagID > m_tags; // 0x58
	// MPropertyFriendlyName "Selection Source"
	// MPropertyAttrChangeCallback
	SelectionSource_t m_selectionSource; // 0x70
	// MPropertyFriendlyName "Bool Parameter"
	// MPropertyAttributeChoiceName "BoolParameter"
	// MPropertyAttrChangeCallback
	// MPropertyAttrStateCallback
	AnimParamID m_boolParamID; // 0x74
	// MPropertyFriendlyName "Enum Parameter"
	// MPropertyAttributeChoiceName "EnumParameter"
	// MPropertyAttrChangeCallback
	// MPropertyAttrStateCallback
	AnimParamID m_enumParamID; // 0x78
	// MPropertyFriendlyName "Blend Duration"
	CFloatAnimValue m_blendDuration; // 0x80
	// MPropertyFriendlyName "Tag Behavior"
	SelectorTagBehavior_t m_tagBehavior; // 0x98
	// MPropertyFriendlyName "Reset On Change"
	bool m_bResetOnChange; // 0x9c
	// MPropertyFriendlyName "Start new option at same cycle"
	bool m_bSyncCyclesOnChange; // 0x9d
	// MPropertyHideField
	CBlendCurve m_blendCurve; // 0xa0
};

// Aligment: 5
// Size: 144
class CAnimReplayFrame
{
public:
	CUtlVector< CUtlBinaryBlock > m_inputDataBlocks; // 0x10
	CUtlBinaryBlock m_instanceData; // 0x28
	CTransform m_startingLocalToWorldTransform; // 0x40
	CTransform m_localToWorldTransform; // 0x60
	float m_timeStamp; // 0x80
};

// Aligment: 0
// Size: 80
class CCurrentVelocityMetricEvaluator : public CMotionMetricEvaluator
{
public:
// <no members described>
};

// Aligment: 2
// Size: 88
class CModelConfigElement_SetBodygroupOnAttachedModels : public CModelConfigElement
{
public:
	CUtlString m_GroupName; // 0x48
	int32_t m_nChoice; // 0x50
};

// Aligment: 1
// Size: 112
class CSpeedScaleUpdateNode : public CUnaryUpdateNode, CAnimUpdateNodeBase
{
public:
	CAnimParamHandle m_paramIndex; // 0x68
};

// Aligment: 12
// Size: 96
struct MoodAnimationLayer_t
{
public:
	// MPropertyFriendlyName "Name"
	// MPropertyDescription "Name of the layer"
	CUtlString m_sName; // 0x0
	// MPropertyFriendlyName "Active When Listening"
	// MPropertyDescription "Sets the mood's animation buckets to be active when the character is listening"
	bool m_bActiveListening; // 0x8
	// MPropertyFriendlyName "Active When Talking"
	// MPropertyDescription "Sets the mood's animation buckets to be active when the character is talking"
	bool m_bActiveTalking; // 0x9
	// MPropertyDescription "List of animations to choose from"
	CUtlVector< MoodAnimation_t > m_layerAnimations; // 0x10
	// MPropertyDescription "Intensity of the animation"
	// MPropertyAttributeRange "0 1"
	CRangeFloat m_flIntensity; // 0x28
	// MPropertyDescription "Multiplier of the animation duration"
	CRangeFloat m_flDurationScale; // 0x30
	// MPropertyDescription "When scaling an animation, grab the scale value as in int. Used for gestures/postures to control number of looping sections"
	bool m_bScaleWithInts; // 0x38
	// MPropertyDescription "Time before the next animation can start"
	CRangeFloat m_flNextStart; // 0x3c
	// MPropertyDescription "Time from the start of the mood before an animation can start"
	CRangeFloat m_flStartOffset; // 0x44
	// MPropertyDescription "Time from the end of the mood when an animation cannot play"
	CRangeFloat m_flEndOffset; // 0x4c
	// MPropertyDescription "Fade in time of the animation"
	float m_flFadeIn; // 0x54
	// MPropertyDescription "Fade out time of the animation"
	float m_flFadeOut; // 0x58
};

// Aligment: 2
// Size: 40
struct CBoneConstraintPoseSpaceMorph::Input_t
{
public:
	Vector m_inputValue; // 0x0
	CUtlVector< float32 > m_outputWeightList; // 0x10
};

// Aligment: 2
// Size: 64
class CSetParameterAction : public CAnimActionBase
{
public:
	// MPropertyFriendlyName "Parameter"
	// MPropertyAttributeChoiceName "Parameter"
	AnimParamID m_param; // 0x28
	// MPropertyFriendlyName "Value"
	CAnimVariant m_value; // 0x2c
};

// Aligment: 23
// Size: 208
class CMotionMatchingAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	CUtlVector< CSmartPtr< CMotionItemGroup > > m_groups; // 0x48
	// MPropertyHideField
	CUtlVector< CSmartPtr< CMotionMetricBase > > m_metrics; // 0x60
	// MPropertyHideField
	CBlendCurve m_blendCurve; // 0x78
	// MPropertyHideField
	int32_t m_nRandomSeed; // 0x80
	// MPropertyFriendlyName "Sample Rate"
	// MPropertyAttributeRange "0.01 0.2"
	float m_flSampleRate; // 0x84
	// MPropertyFriendlyName "Search Every Update"
	// MPropertyGroupName "Search Frequency"
	// MPropertyAttrChangeCallback
	bool m_bSearchEveryTick; // 0x88
	// MPropertyFriendlyName "Search Interval"
	// MPropertyGroupName "Search Frequency"
	// MPropertyAttrStateCallback
	float m_flSearchInterval; // 0x8c
	// MPropertyFriendlyName "Search when motion ends"
	// MPropertyGroupName "Search Frequency"
	// MPropertyAttrStateCallback
	bool m_bSearchWhenMotionEnds; // 0x90
	// MPropertyFriendlyName "Search when goal changes"
	// MPropertyGroupName "Search Frequency"
	// MPropertyAttrStateCallback
	bool m_bSearchWhenGoalChanges; // 0x91
	// MPropertyFriendlyName "Blend Time"
	float m_flBlendTime; // 0x94
	// MPropertyFriendlyName "Selection Threshold"
	float m_flSelectionThreshold; // 0x98
	// MPropertyFriendlyName "Re-Selection Time Window"
	float m_flReselectionTimeWindow; // 0x9c
	// MPropertyFriendlyName "Lock Selection When Waning"
	bool m_bLockSelectionWhenWaning; // 0xa0
	// MPropertyFriendlyName "Enable Rotation Correction"
	bool m_bEnableRotationCorrection; // 0xa1
	// MPropertyFriendlyName "Enable Goal Assist"
	// MPropertyGroupName "Goal Assist"
	// MPropertyAttrChangeCallback
	bool m_bGoalAssist; // 0xa2
	// MPropertyFriendlyName "Goal Assist Distance"
	// MPropertyGroupName "Goal Assist"
	// MPropertyAttrStateCallback
	float m_flGoalAssistDistance; // 0xa4
	// MPropertyFriendlyName "Goal Assist Tolerance"
	// MPropertyGroupName "Goal Assist"
	// MPropertyAttrStateCallback
	float m_flGoalAssistTolerance; // 0xa8
	// MPropertyFriendlyName "Enable Distance Scaling"
	// MPropertyGroupName "Distance Scaling"
	// MPropertyAttrChangeCallback
	bool m_bEnableDistanceScaling; // 0xac
	// MPropertyFriendlyName "Outer Stopping Radius"
	// MPropertyGroupName "Distance Scaling"
	// MPropertyAttrStateCallback
	float m_flDistanceScale_OuterRadius; // 0xb0
	// MPropertyFriendlyName "Inner Stopping Radius"
	// MPropertyGroupName "Distance Scaling"
	// MPropertyAttrStateCallback
	float m_flDistanceScale_InnerRadius; // 0xb4
	// MPropertyFriendlyName "Maximum Speed Scale"
	// MPropertyGroupName "Distance Scaling"
	// MPropertyAttrStateCallback
	float m_flDistanceScale_MaxScale; // 0xb8
	// MPropertyFriendlyName "Minimum Speed Scale"
	// MPropertyGroupName "Distance Scaling"
	// MPropertyAttrStateCallback
	float m_flDistanceScale_MinScale; // 0xbc
	// MPropertyFriendlyName "Damping"
	// MPropertyGroupName "Distance Scaling"
	// MPropertyAttrStateCallback
	CAnimInputDamping m_distanceScale_Damping; // 0xc0
};

// Aligment: 4
// Size: 120
class CCycleControlClipAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	CUtlVector< CSmartPtr< CAnimTagSpan > > m_tagSpans; // 0x50
	// MPropertyFriendlyName "Sequence"
	// MPropertyAttributeChoiceName "Sequence"
	CUtlString m_sequenceName; // 0x68
	// MPropertyFriendlyName "Blend Source"
	// MPropertyAttrChangeCallback
	// MPropertyAttrStateCallback
	AnimValueSource m_valueSource; // 0x70
	// MPropertyFriendlyName "Parameter"
	// MPropertyAttributeChoiceName "FloatParameter"
	AnimParamID m_param; // 0x74
};

// Aligment: 2
// Size: 16
class CRigidBodyWeight
{
public:
	CUtlString m_name; // 0x0
	float m_flWeight; // 0x8
};

// Aligment: 7
// Size: 72
class CAnimBone
{
public:
	CBufferString m_name; // 0x0
	int32_t m_parent; // 0x10
	Vector m_pos; // 0x14
	QuaternionStorage m_quat; // 0x20
	float m_scale; // 0x30
	QuaternionStorage m_qAlignment; // 0x34
	int32_t m_flags; // 0x44
};

// Aligment: 6
// Size: 336
class CLookAtUpdateNode : public CUnaryUpdateNode, CAnimUpdateNodeBase
{
public:
	LookAtOpFixedSettings_t m_opFixedSettings; // 0x70
	AnimVectorSource m_target; // 0x138
	CAnimParamHandle m_paramIndex; // 0x13c
	CAnimParamHandle m_weightParamIndex; // 0x13e
	bool m_bResetChild; // 0x140
	bool m_bLockWhenWaning; // 0x141
};

// Aligment: 8
// Size: 200
class CHitReactUpdateNode : public CUnaryUpdateNode, CAnimUpdateNodeBase
{
public:
	HitReactFixedSettings_t m_opFixedSettings; // 0x68
	CAnimParamHandle m_triggerParam; // 0xb4
	CAnimParamHandle m_hitBoneParam; // 0xb6
	CAnimParamHandle m_hitOffsetParam; // 0xb8
	CAnimParamHandle m_hitDirectionParam; // 0xba
	CAnimParamHandle m_hitStrengthParam; // 0xbc
	float m_flMinDelayBetweenHits; // 0xc0
	bool m_bResetChild; // 0xc4
};

// Aligment: 1
// Size: 168
class CSkeletalInputUpdateNode : public CLeafUpdateNode, CAnimUpdateNodeBase
{
public:
	SkeletalInputOpFixedSettings_t m_fixedOpData; // 0x58
};

// Aligment: 2
// Size: 8
class CFlexOp
{
public:
	FlexOpCode_t m_OpCode; // 0x0
	int32_t m_Data; // 0x4
};

// Aligment: 1
// Size: 4
class AnimScriptHandle
{
public:
	uint32_t m_id; // 0x0
};

// Aligment: 2
// Size: 96
class CModelConfigElement_Command : public CModelConfigElement
{
public:
	CUtlString m_Command; // 0x48
	KeyValues3 m_Args; // 0x50
};

// Aligment: 4
// Size: 112
class CAnimStateTransition
{
public:
	// MPropertySuppressField
	CConditionContainer m_conditionList; // 0x28
	// MPropertyHideField
	AnimStateID m_srcState; // 0x60
	// MPropertyHideField
	AnimStateID m_destState; // 0x64
	// MPropertyFriendlyName "Disable"
	bool m_bDisabled; // 0x68
};

// Aligment: 6
// Size: 352
class CAimMatrixUpdateNode : public CUnaryUpdateNode, CAnimUpdateNodeBase
{
public:
	AimMatrixOpFixedSettings_t m_opFixedSettings; // 0x70
	AnimVectorSource m_target; // 0x148
	CAnimParamHandle m_paramIndex; // 0x14c
	HSequence m_hSequence; // 0x150
	bool m_bResetChild; // 0x154
	bool m_bLockWhenWaning; // 0x155
};

// Aligment: 5
// Size: 248
class CStateMachineUpdateNode : public CAnimUpdateNodeBase
{
public:
	CAnimStateMachineUpdater m_stateMachine; // 0x68
	CUtlVector< CStateNodeStateData > m_stateData; // 0xc0
	CUtlVector< CStateNodeTransitionData > m_transitionData; // 0xd8
	bool m_bBlockWaningTags; // 0xf4
	bool m_bLockStateWhenWaning; // 0xf5
};

// Aligment: 14
// Size: 312
class CSequenceGroupData
{
public:
	CBufferString m_sName; // 0x10
	uint32_t m_nFlags; // 0x20
	CUtlVector< CBufferString > m_localSequenceNameArray; // 0x28
	CUtlVector< CSeqS1SeqDesc > m_localS1SeqDescArray; // 0x40
	CUtlVector< CSeqS1SeqDesc > m_localMultiSeqDescArray; // 0x58
	CUtlVector< CSeqSynthAnimDesc > m_localSynthAnimDescArray; // 0x70
	CUtlVector< CSeqCmdSeqDesc > m_localCmdSeqDescArray; // 0x88
	CUtlVector< CSeqBoneMaskList > m_localBoneMaskArray; // 0xa0
	CUtlVector< CSeqScaleSet > m_localScaleSetArray; // 0xb8
	CUtlVector< CBufferString > m_localBoneNameArray; // 0xd0
	CBufferString m_localNodeName; // 0xe8
	CUtlVector< CSeqPoseParamDesc > m_localPoseParamArray; // 0xf8
	KeyValues3 m_keyValues; // 0x110
	CUtlVector< CSeqIKLock > m_localIKAutoplayLockArray; // 0x120
};

// Aligment: 2
// Size: 72
class CStanceScaleAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	CAnimNodeConnection m_inputConnection; // 0x38
	// MPropertyFriendlyName "Parameter"
	// MPropertyAttributeChoiceName "FloatParameter"
	AnimParamID m_param; // 0x40
};

// Aligment: 0
// Size: 56
class CStaticPoseCacheBuilder : public CStaticPoseCache
{
public:
// <no members described>
};

// Aligment: 2
// Size: 8
class CAnimNodeConnection
{
public:
	AnimNodeID m_nodeID; // 0x0
	AnimNodeOutputID m_outputID; // 0x4
};

// Aligment: 23
// Size: 712
struct PermModelData_t
{
public:
	CUtlString m_name; // 0x0
	PermModelInfo_t m_modelInfo; // 0x8
	CUtlVector< PermModelExtPart_t > m_ExtParts; // 0x60
	CUtlVector< CStrongHandle< InfoForResourceTypeCRenderMesh > > m_refMeshes; // 0x78
	CUtlVector< uint64 > m_refMeshGroupMasks; // 0x90
	CUtlVector< uint64 > m_refPhysGroupMasks; // 0xa8
	CUtlVector< uint8 > m_refLODGroupMasks; // 0xc0
	CUtlVector< float32 > m_lodGroupSwitchDistances; // 0xd8
	CUtlVector< CStrongHandle< InfoForResourceTypeCPhysAggregateData > > m_refPhysicsData; // 0xf0
	CUtlVector< CStrongHandle< InfoForResourceTypeCPhysAggregateData > > m_refPhysicsHitboxData; // 0x108
	CUtlVector< CStrongHandle< InfoForResourceTypeCAnimationGroup > > m_refAnimGroups; // 0x120
	CUtlVector< CStrongHandle< InfoForResourceTypeCSequenceGroupData > > m_refSequenceGroups; // 0x138
	CUtlVector< CUtlString > m_meshGroups; // 0x150
	CUtlVector< MaterialGroup_t > m_materialGroups; // 0x168
	uint64_t m_nDefaultMeshGroupMask; // 0x180
	ModelSkeletonData_t m_modelSkeleton; // 0x188
	CUtlVector< int16 > m_remappingTable; // 0x230
	CUtlVector< uint16 > m_remappingTableStarts; // 0x248
	CUtlVector< ModelBoneFlexDriver_t > m_boneFlexDrivers; // 0x260
	CModelConfigList* m_pModelConfigList; // 0x278
	CUtlVector< CUtlString > m_BodyGroupsHiddenInTools; // 0x280
	CUtlVector< CStrongHandle< InfoForResourceTypeCModel > > m_refAnimIncludeModels; // 0x298
	CUtlVector< PermModelDataAnimatedMaterialAttribute_t > m_AnimatedMaterialAttributes; // 0x2b0
};

// Aligment: 2
// Size: 160
class CQuaternionAnimParameter : public CAnimParameterBase
{
public:
	// MPropertyFriendlyName "Default Value"
	Quaternion m_defaultValue; // 0x80
	// MPropertyFriendlyName "Interpolate"
	bool m_bInterpolate; // 0x90
};

// Aligment: 2
// Size: 72
class CFootPositionMetric : public CMotionMetricBase
{
public:
	// MPropertyFriendlyName "Foot"
	// MPropertyAttributeChoiceName "Foot"
	// MPropertyAutoExpandSelf
	CUtlVector< CUtlString > m_feet; // 0x28
	// MPropertyFriendlyName "Ignore Slope"
	bool m_bIgnoreSlope; // 0x40
};

// Aligment: 9
// Size: 72
class CVRInputComponentUpdater : public CAnimComponentUpdater
{
public:
	CAnimParamHandle m_FingerCurl_Thumb; // 0x34
	CAnimParamHandle m_FingerCurl_Index; // 0x36
	CAnimParamHandle m_FingerCurl_Middle; // 0x38
	CAnimParamHandle m_FingerCurl_Ring; // 0x3a
	CAnimParamHandle m_FingerCurl_Pinky; // 0x3c
	CAnimParamHandle m_FingerSplay_Thumb_Index; // 0x3e
	CAnimParamHandle m_FingerSplay_Index_Middle; // 0x40
	CAnimParamHandle m_FingerSplay_Middle_Ring; // 0x42
	CAnimParamHandle m_FingerSplay_Ring_Pinky; // 0x44
};

// Aligment: 11
// Size: 208
class CBlendUpdateNode : public CAnimUpdateNodeBase
{
public:
	CUtlVector< CAnimUpdateNodeRef > m_children; // 0x60
	CUtlVector< uint8 > m_sortedOrder; // 0x78
	CUtlVector< float32 > m_targetValues; // 0x90
	AnimValueSource m_blendValueSource; // 0xac
	CAnimParamHandle m_paramIndex; // 0xb0
	CAnimInputDamping m_damping; // 0xb8
	BlendKeyType m_blendKeyType; // 0xc8
	bool m_bLockBlendOnReset; // 0xcc
	bool m_bSyncCycles; // 0xcd
	bool m_bLoop; // 0xce
	bool m_bLockWhenWaning; // 0xcf
};

// Aligment: 6
// Size: 48
class CAnimLocalHierarchy
{
public:
	CBufferString m_sBone; // 0x0
	CBufferString m_sNewParent; // 0x10
	int32_t m_nStartFrame; // 0x20
	int32_t m_nPeakFrame; // 0x24
	int32_t m_nTailFrame; // 0x28
	int32_t m_nEndFrame; // 0x2c
};

// Aligment: 3
// Size: 32
class CDampedValueUpdateItem
{
public:
	CAnimInputDamping m_damping; // 0x0
	CAnimParamHandle m_hParamIn; // 0x18
	CAnimParamHandle m_hParamOut; // 0x1a
};

// Aligment: 1
// Size: 4
class HSequence
{
public:
	int32_t m_Value; // 0x0
};

// Aligment: 2
// Size: 112
class CFootPositionMetricEvaluator : public CMotionMetricEvaluator
{
public:
	CUtlVector< int32 > m_footIndices; // 0x50
	bool m_bIgnoreSlope; // 0x68
};

// Aligment: 0
// Size: 112
class CParentConstraint : public CBaseConstraint, CBoneConstraintBase
{
public:
// <no members described>
};

// Aligment: 0
// Size: 40
class CAnimActionBase
{
public:
// <no members described>
};

// Aligment: 5
// Size: 40
class CAnimFoot
{
public:
	CUtlString m_name; // 0x0
	Vector m_vBallOffset; // 0x8
	Vector m_vHeelOffset; // 0x14
	int32_t m_ankleBoneIndex; // 0x20
	int32_t m_toeBoneIndex; // 0x24
};

// Aligment: 5
// Size: 40
class CMorphRectData
{
public:
	int16_t m_nXLeftDst; // 0x0
	int16_t m_nYTopDst; // 0x2
	float m_flUWidthSrc; // 0x4
	float m_flVHeightSrc; // 0x8
	CUtlVector< CMorphBundleData > m_bundleDatas; // 0x10
};

// Aligment: 9
// Size: 144
class CAnimDataChannelDesc
{
public:
	CBufferString m_szChannelClass; // 0x0
	CBufferString m_szVariableName; // 0x10
	int32_t m_nFlags; // 0x20
	int32_t m_nType; // 0x24
	CBufferString m_szGrouping; // 0x28
	CBufferString m_szDescription; // 0x38
	CUtlVector< CBufferString > m_szElementNameArray; // 0x48
	CUtlVector< int32 > m_nElementIndexArray; // 0x60
	CUtlVector< uint32 > m_nElementMaskArray; // 0x78
};

// Aligment: 1
// Size: 56
class CLODComponentUpdater : public CAnimComponentUpdater
{
public:
	int32_t m_nServerLOD; // 0x30
};

// Aligment: 2
// Size: 16
struct MoodAnimation_t
{
public:
	// MPropertyDescription "Name of the animation"
	// MPropertyAttributeEditor "VDataModelAnim( m_sModelName; include_deltas )"
	CUtlString m_sName; // 0x0
	// MPropertyDescription "Weight of the animation, higher numbers get picked more"
	float m_flWeight; // 0x8
};

// Aligment: 8
// Size: 112
class CAnimState
{
public:
	// MPropertySuppressField
	CUtlVector< CSmartPtr< CAnimStateTransition > > m_transitions; // 0x28
	// MPropertyHideField
	CUtlVector< CStateAction > m_actions; // 0x40
	// MPropertyFriendlyName "Name"
	// MPropertySortPriority "100"
	CUtlString m_name; // 0x58
	// MPropertyHideField
	AnimStateID m_stateID; // 0x60
	// MPropertyHideField
	Vector2D m_position; // 0x64
	// MPropertyFriendlyName "Start State"
	bool m_bIsStartState; // 0x6c
	// MPropertyFriendlyName "End State"
	bool m_bIsEndtState; // 0x6d
	// MPropertyFriendlyName "Passthrough"
	bool m_bIsPassthrough; // 0x6e
};

// Aligment: 1
// Size: 136
class CJiggleBoneUpdateNode : public CUnaryUpdateNode, CAnimUpdateNodeBase
{
public:
	JiggleBoneSettingsList_t m_opFixedData; // 0x68
};

// Aligment: 3
// Size: 40
class CFootMotion
{
public:
	CUtlVector< CFootStride > m_strides; // 0x0
	CUtlString m_name; // 0x18
	bool m_bAdditive; // 0x20
};

// Aligment: 1
// Size: 96
class CModelConfigElement_RandomColor : public CModelConfigElement
{
public:
	CColorGradient m_Gradient; // 0x48
};

// Aligment: 1
// Size: 88
class CBoneVelocityMetricEvaluator : public CMotionMetricEvaluator
{
public:
	int32_t m_nBoneIndex; // 0x50
};

// Aligment: 18
// Size: 96
class FootLockPoseOpFixedSettings
{
public:
	CUtlVector< FootFixedData_t > m_footInfo; // 0x0
	CAnimInputDamping m_hipDampingSettings; // 0x18
	int32_t m_nHipBoneIndex; // 0x28
	IKSolverType m_ikSolverType; // 0x2c
	bool m_bApplyTilt; // 0x30
	bool m_bApplyHipDrop; // 0x31
	bool m_bAlwaysUseFallbackHinge; // 0x32
	bool m_bApplyFootRotationLimits; // 0x33
	bool m_bApplyLegTwistLimits; // 0x34
	float m_flMaxFootHeight; // 0x38
	float m_flExtensionScale; // 0x3c
	float m_flMaxLegTwist; // 0x40
	bool m_bEnableLockBreaking; // 0x44
	float m_flLockBreakTolerance; // 0x48
	float m_flLockBlendTime; // 0x4c
	bool m_bEnableStretching; // 0x50
	float m_flMaxStretchAmount; // 0x54
	float m_flStretchExtensionScale; // 0x58
};

// Aligment: 8
// Size: 208
class CJumpHelperUpdateNode : public CSequenceUpdateNode, CLeafUpdateNode, CAnimUpdateNodeBase
{
public:
	CAnimParamHandle m_hTargetParam; // 0xa8
	Vector m_flOriginalJumpMovement; // 0xac
	float m_flOriginalJumpDuration; // 0xb8
	float m_flJumpStartCycle; // 0xbc
	float m_flJumpEndCycle; // 0xc0
	JumpCorrectionMethod m_eCorrectionMethod; // 0xc4
	bool[3] m_bTranslationAxis; // 0xc8
	bool m_bScaleSpeed; // 0xcb
};

// Aligment: 2
// Size: 8
struct FingerSource_t
{
public:
	AnimVRFinger_t m_nFingerIndex; // 0x0
	float m_flFingerWeight; // 0x4
};

// Aligment: 7
// Size: 44
struct JiggleBoneSettings_t
{
public:
	int32_t m_nBoneIndex; // 0x0
	float m_flSpringStrength; // 0x4
	float m_flMaxTimeStep; // 0x8
	float m_flDamping; // 0xc
	Vector m_vBoundsMaxLS; // 0x10
	Vector m_vBoundsMinLS; // 0x1c
	JiggleBoneSimSpace m_eSimSpace; // 0x28
};

// Aligment: 1
// Size: 48
class CPathAnimMotorBase : public CAnimMotorBase
{
public:
	// MPropertyFriendlyName "Lock To Path"
	// MPropertySortPriority "90"
	bool m_bLockToPath; // 0x28
};

// Aligment: 20
// Size: 312
class CFootLockUpdateNode : public CUnaryUpdateNode, CAnimUpdateNodeBase
{
public:
	FootLockPoseOpFixedSettings m_opFixedSettings; // 0x68
	CUtlVector< FootFixedSettings > m_footSettings; // 0xd0
	CAnimInputDamping m_hipShiftDamping; // 0xe8
	CAnimInputDamping m_rootHeightDamping; // 0xf8
	float m_flStrideCurveScale; // 0x108
	float m_flStrideCurveLimitScale; // 0x10c
	float m_flStepHeightIncreaseScale; // 0x110
	float m_flStepHeightDecreaseScale; // 0x114
	float m_flHipShiftScale; // 0x118
	float m_flBlendTime; // 0x11c
	float m_flMaxRootHeightOffset; // 0x120
	float m_flMinRootHeightOffset; // 0x124
	float m_flTiltPlanePitchSpringStrength; // 0x128
	float m_flTiltPlaneRollSpringStrength; // 0x12c
	bool m_bApplyFootRotationLimits; // 0x130
	bool m_bApplyHipShift; // 0x131
	bool m_bModulateStepHeight; // 0x132
	bool m_bResetChild; // 0x133
	bool m_bEnableVerticalCurvedPaths; // 0x134
	bool m_bEnableRootHeightDamping; // 0x135
};

// Aligment: 3
// Size: 88
class CCommentAnimNode : public CAnimNodeBase
{
public:
	// MPropertySuppressField
	CUtlString m_commentText; // 0x40
	// MPropertySuppressField
	Vector2D m_size; // 0x48
	// MPropertyFriendlyName "Color"
	Color m_color; // 0x50
};

// Aligment: 4
// Size: 120
class CPathMetricEvaluator : public CMotionMetricEvaluator
{
public:
	CUtlVector< float32 > m_pathTimeSamples; // 0x50
	float m_flDistance; // 0x68
	bool m_bExtrapolateMovement; // 0x6c
	float m_flMinExtrapolationSpeed; // 0x70
};

// Aligment: 2
// Size: 72
class CNodeBlend2DItem : public CBlend2DItemBase
{
public:
	// MPropertyHideField
	CAnimNodeConnection m_inputConnection; // 0x38
	// MPropertyFriendlyName "Name"
	CUtlString m_name; // 0x40
};

// Aligment: 3
// Size: 32
class FootStepTrigger
{
public:
	CUtlVector< int32 > m_tags; // 0x0
	int32_t m_nFootIndex; // 0x18
	StepPhase m_triggerPhase; // 0x1c
};

// Aligment: 13
// Size: 120
class CMoverAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	CAnimNodeConnection m_inputConnection; // 0x38
	// MPropertyFriendlyName "Generate Movement"
	// MPropertyGroupName "Generate Movement"
	// MPropertyAttrChangeCallback
	bool m_bApplyMovement; // 0x40
	// MPropertyFriendlyName "Movement Velocity Parameter"
	// MPropertyGroupName "Generate Movement"
	// MPropertyAttributeChoiceName "VectorParameter"
	// MPropertyAttrStateCallback
	AnimParamID m_moveVectorParam; // 0x44
	// MPropertyFriendlyName "Orient Movement"
	// MPropertyGroupName "Orient Movement"
	// MPropertyAttrChangeCallback
	bool m_bOrientMovement; // 0x48
	// MPropertyFriendlyName "Movement Heading Parameter"
	// MPropertyGroupName "Orient Movement"
	// MPropertyAttributeChoiceName "FloatParameter"
	// MPropertyAttrStateCallback
	AnimParamID m_moveHeadingParam; // 0x4c
	// MPropertyFriendlyName "Additive"
	bool m_bAdditive; // 0x50
	// MPropertyFriendlyName "Turn to Face"
	// MPropertyGroupName "Turn to Face"
	// MPropertyAttrChangeCallback
	bool m_bTurnToFace; // 0x51
	// MPropertyFriendlyName "Face Direction"
	// MPropertyGroupName "Turn to Face"
	// MPropertyAttrChangeCallback
	// MPropertyAttrStateCallback
	AnimValueSource m_facingTarget; // 0x54
	// MPropertyFriendlyName "Facing Parameter"
	// MPropertyGroupName "Turn to Face"
	// MPropertyAttributeChoiceName "FloatParameter"
	// MPropertyAttrStateCallback
	AnimParamID m_param; // 0x58
	// MPropertyFriendlyName "Turn Limit Only"
	// MPropertyGroupName "Turn to Face"
	// MPropertyAttrStateCallback
	// MPropertyAttrChangeCallback
	bool m_bLimitOnly; // 0x5c
	// MPropertyFriendlyName "Turn to Face Offset"
	// MPropertyAttributeRange "-180 180"
	// MPropertyGroupName "Turn to Face"
	// MPropertyAttrStateCallback
	float m_flTurnToFaceOffset; // 0x60
	// MPropertyFriendlyName "Turn to Face Limit"
	// MPropertyAttributeRange "0 180"
	// MPropertyGroupName "Turn to Face"
	// MPropertyAttrStateCallback
	float m_flTurnToFaceLimit; // 0x64
	// MPropertyFriendlyName "Damping"
	// MPropertyGroupName "Turn to Face"
	// MPropertyAttrStateCallback
	CAnimInputDamping m_damping; // 0x68
};

// Aligment: 7
// Size: 104
class CDirectionalBlendAnimNode : public CAnimNodeBase
{
public:
	// MPropertyFriendlyName "Sequence Names Prefix"
	CUtlString m_animNamePrefix; // 0x40
	// MPropertyFriendlyName "Blend Source"
	// MPropertyAttrChangeCallback
	// MPropertyAttrStateCallback
	AnimValueSource m_blendValueSource; // 0x48
	// MPropertyFriendlyName "Parameter"
	// MPropertyAttributeChoiceName "FloatParameter"
	AnimParamID m_param; // 0x4c
	// MPropertyFriendlyName "Loop"
	bool m_bLoop; // 0x50
	// MPropertyFriendlyName "Lock Blend on Reset"
	bool m_bLockBlendOnReset; // 0x51
	// MPropertyFriendlyName "Playback Speed"
	float m_playbackSpeed; // 0x54
	// MPropertyFriendlyName "Damping"
	CAnimInputDamping m_damping; // 0x58
};

// Aligment: 7
// Size: 44
class CAnimMovement
{
public:
	int32_t endframe; // 0x0
	int32_t motionflags; // 0x4
	float v0; // 0x8
	float v1; // 0xc
	float angle; // 0x10
	Vector vector; // 0x14
	Vector position; // 0x20
};

// Aligment: 9
// Size: 96
struct FingerChain_t
{
public:
	CUtlVector< FingerSource_t > m_targets; // 0x0
	CUtlVector< FingerBone_t > m_bones; // 0x18
	Vector m_vTipOffset; // 0x30
	Vector m_vSplayHingeAxis; // 0x3c
	int32_t m_tipParentBoneIndex; // 0x48
	int32_t m_metacarpalBoneIndex; // 0x4c
	float m_flSplayMinAngle; // 0x50
	float m_flSplayMaxAngle; // 0x54
	float m_flFingerScaleRatio; // 0x58
};

// Aligment: 2
// Size: 88
class CModelConfigElement_SetBodygroup : public CModelConfigElement
{
public:
	CUtlString m_GroupName; // 0x48
	int32_t m_nChoice; // 0x50
};

// Aligment: 5
// Size: 32
class CSeqPoseParamDesc
{
public:
	CBufferString m_sName; // 0x0
	float m_flStart; // 0x10
	float m_flEnd; // 0x14
	float m_flLoop; // 0x18
	bool m_bLooping; // 0x1c
};

// Aligment: 8
// Size: 168
class CPhysSurfaceProperties
{
public:
	// MKV3TransferName "surfacePropertyName"
	CUtlString m_name; // 0x0
	uint32_t m_nameHash; // 0x8
	uint32_t m_baseNameHash; // 0xc
	// MKV3TransferName "hidden"
	bool m_bHidden; // 0x18
	// MKV3TransferName "description"
	CUtlString m_description; // 0x20
	// MKV3TransferName "physics"
	CPhysSurfacePropertiesPhysics m_physics; // 0x28
	// MKV3TransferName "audiosounds"
	CPhysSurfacePropertiesSoundNames m_audioSounds; // 0x48
	// MKV3TransferName "audioparams"
	CPhysSurfacePropertiesAudio m_audioParams; // 0x88
};

// Aligment: 1
// Size: 16
class CAnimUpdateNodeRef
{
public:
	int32_t m_nodeIndex; // 0x8
};

// Aligment: 1
// Size: 136
class CStateMachineComponentUpdater : public CAnimComponentUpdater
{
public:
	CAnimStateMachineUpdater m_stateMachine; // 0x30
};

// Aligment: 11
// Size: 136
class CFootPinningAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	CAnimNodeConnection m_inputConnection; // 0x38
	// MPropertyFriendlyName "Feet"
	// MPropertyAutoExpandSelf
	CUtlVector< CFootPinningItem > m_items; // 0x40
	// MPropertyFriendlyName "Lock Timing Source"
	FootPinningTimingSource m_eTimingSource; // 0x58
	// MPropertyFriendlyName "Blend Time"
	float m_flBlendTime; // 0x5c
	// MPropertyFriendlyName "Lock Break Distance"
	float m_flLockBreakDistance; // 0x60
	// MPropertyFriendlyName "Max Leg Straight Amount"
	// MPropertyAttributeRange "0 1"
	float m_flMaxLegStraightAmount; // 0x64
	// MPropertyFriendlyName "Limit Foot Rotation"
	// MPropertyGroupName "Foot Rotation Limits"
	bool m_bApplyFootRotationLimits; // 0x68
	// MPropertyFriendlyName "Hip Bone"
	// MPropertyAttributeChoiceName "Bone"
	// MPropertyGroupName "Foot Rotation Limits"
	CUtlString m_hipBoneName; // 0x70
	// MPropertyFriendlyName "Limit Leg Twist"
	// MPropertyGroupName "Knee Twist Limits"
	bool m_bApplyLegTwistLimits; // 0x78
	// MPropertyFriendlyName "Max Leg Twist Angle"
	// MPropertyGroupName "Knee Twist Limits"
	float m_flMaxLegTwist; // 0x7c
	// MPropertyFriendlyName "Reset Child"
	bool m_bResetChild; // 0x80
};

// Aligment: 8
// Size: 168
class CSelectorUpdateNode : public CAnimUpdateNodeBase
{
public:
	CUtlVector< CAnimUpdateNodeRef > m_children; // 0x58
	CUtlVector< int8 > m_tags; // 0x70
	CBlendCurve m_blendCurve; // 0x8c
	CAnimValue< float32 > m_flBlendTime; // 0x94
	CAnimParamHandle m_hParameter; // 0x9c
	SelectorTagBehavior_t m_eTagBehavior; // 0xa0
	bool m_bResetOnChange; // 0xa4
	bool m_bSyncCyclesOnChange; // 0xa5
};

// Aligment: 17
// Size: 416
class CCompressorGroup
{
public:
	int32_t m_nTotalElementCount; // 0x0
	CUtlVector< char* > m_szChannelClass; // 0x8
	CUtlVector< char* > m_szVariableName; // 0x20
	CUtlVector< fieldtype_t > m_nType; // 0x38
	CUtlVector< int32 > m_nFlags; // 0x50
	CUtlVector< CUtlString > m_szGrouping; // 0x68
	CUtlVector< int32 > m_nCompressorIndex; // 0x80
	CUtlVector< CUtlVector< char* > > m_szElementNames; // 0x98
	CUtlVector< CUtlVector< int32 > > m_nElementUniqueID; // 0xb0
	CUtlVector< uint32 > m_nElementMask; // 0xc8
	CUtlVector< CCompressor< Vector >* > m_vectorCompressor; // 0xf8
	CUtlVector< CCompressor< QuaternionStorage >* > m_quaternionCompressor; // 0x110
	CUtlVector< CCompressor< int32 >* > m_intCompressor; // 0x128
	CUtlVector< CCompressor< bool >* > m_boolCompressor; // 0x140
	CUtlVector< CCompressor< Color >* > m_colorCompressor; // 0x158
	CUtlVector< CCompressor< Vector2D >* > m_vector2DCompressor; // 0x170
	CUtlVector< CCompressor< Vector4D >* > m_vector4DCompressor; // 0x188
};

// Aligment: 1
// Size: 104
class CUnaryUpdateNode : public CAnimUpdateNodeBase
{
public:
	CAnimUpdateNodeRef m_pChildNode; // 0x58
};

// Aligment: 3
// Size: 88
class CAnimStateMachineUpdater
{
public:
	CUtlVector< CStateUpdateData > m_states; // 0x8
	CUtlVector< CTransitionUpdateData > m_transitions; // 0x20
	int32_t m_startStateIndex; // 0x50
};

// Aligment: 2
// Size: 32
class CEmitTagActionUpdater : public CAnimActionUpdater
{
public:
	int32_t m_nTagIndex; // 0x18
	bool m_bIsZeroDuration; // 0x1c
};

// Aligment: 9
// Size: 272
struct AnimationSnapshotBase_t
{
public:
	float m_flRealTime; // 0x0
	matrix3x4a_t m_rootToWorld; // 0x10
	bool m_bBonesInWorldSpace; // 0x40
	CUtlVector< uint32 > m_boneSetupMask; // 0x48
	CUtlVector< matrix3x4a_t > m_boneTransforms; // 0x60
	CUtlVector< float32 > m_flexControllers; // 0x78
	AnimationSnapshotType_t m_SnapshotType; // 0x90
	bool m_bHasDecodeDump; // 0x94
	AnimationDecodeDebugDumpElement_t m_DecodeDump; // 0x98
};

// Aligment: 0
// Size: 40
class CCurrentRotationVelocityMetric : public CMotionMetricBase
{
public:
// <no members described>
};

// Aligment: 5
// Size: 56
class CAnimAnimEvent
{
public:
	int32_t m_nFrame; // 0x0
	float m_flCycle; // 0x4
	KeyValues3 m_EventData; // 0x8
	// MKV3TransferName "m_sOptions"
	CBufferString m_sLegacyOptions; // 0x18
	CBufferString m_sEventName; // 0x28
};

// Aligment: 1
// Size: 4
class CCycleBase
{
public:
	float m_flCycle; // 0x0
};

// Aligment: 10
// Size: 128
class CParticleAnimTag : public CAnimTagBase
{
public:
	// MPropertySuppressField
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hParticleSystem; // 0x40
	// MPropertyAttributeEditor "AssetBrowse( vpcf )"
	// MPropertyFriendlyName "Particle System"
	CUtlString m_particleSystemName; // 0x48
	// MPropertyFriendlyName "Configuration"
	CUtlString m_configName; // 0x50
	// MPropertyFriendlyName "Detach From Owner"
	bool m_bDetachFromOwner; // 0x58
	// MPropertyFriendlyName "Stop on Tag End"
	// MPropertyGroupName "Ending"
	bool m_bStopWhenTagEnds; // 0x59
	// MPropertyFriendlyName "Tag End Stop is Instant"
	// MPropertyGroupName "Ending"
	bool m_bTagEndStopIsInstant; // 0x5a
	// MPropertyFriendlyName "Attachment"
	// MPropertyGroupName "Attachments"
	// MPropertyAttributeChoiceName "Attachment"
	CUtlString m_attachmentName; // 0x60
	// MPropertyFriendlyName "Attachment Type"
	// MPropertyGroupName "Attachments"
	ParticleAttachment_t m_attachmentType; // 0x68
	// MPropertyFriendlyName "Attachment (Control Point 1)"
	// MPropertyGroupName "Attachments"
	// MPropertyAttributeChoiceName "Attachment"
	CUtlString m_attachmentCP1Name; // 0x70
	// MPropertyFriendlyName "Attachment Type (Control Point 1)"
	// MPropertyGroupName "Attachments"
	ParticleAttachment_t m_attachmentCP1Type; // 0x78
};

// Aligment: 5
// Size: 72
class CCycleCondition : public CConditionBase
{
public:
	Comparison_t m_comparisonOp; // 0x28
	CUtlString m_comparisonString; // 0x30
	float m_comparisonValue; // 0x38
	ComparisonValueType m_comparisonValueType; // 0x3c
	AnimParamID m_comparisonParamID; // 0x40
};

// Aligment: 0
// Size: 24
class CAnimActionUpdater
{
public:
// <no members described>
};

// Aligment: 2
// Size: 72
class CSlowDownOnSlopesAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	CAnimNodeConnection m_inputConnection; // 0x38
	// MPropertyFriendlyName "Slow Down Strength"
	// MPropertyAttributeRange "0.1 2"
	float m_flSlowDownStrength; // 0x40
};

// Aligment: 1
// Size: 24
class CParamSpanUpdater
{
public:
	CUtlVector< ParamSpan_t > m_spans; // 0x0
};

// Aligment: 2
// Size: 32
class CDirectPlaybackTagData
{
public:
	CUtlString m_sequenceName; // 0x0
	CUtlVector< TagSpan_t > m_tags; // 0x8
};

// Aligment: 1
// Size: 4
class MotionDBIndex
{
public:
	uint32_t m_nIndex; // 0x0
};

// Aligment: 1
// Size: 24
class CHitBoxSetList
{
public:
	CUtlVector< CHitBoxSet > m_HitBoxSets; // 0x0
};

// Aligment: 2
// Size: 72
class CStepsRemainingMetric : public CMotionMetricBase
{
public:
	// MPropertyFriendlyName "Feet"
	// MPropertyAttributeChoiceName "Foot"
	// MPropertyAutoExpandSelf
	CUtlVector< CUtlString > m_feet; // 0x28
	// MPropertyFriendlyName "Min Steps Remaining"
	float m_flMinStepsRemaining; // 0x40
};

// Aligment: 3
// Size: 88
class CRagdollComponent : public CAnimComponentBase
{
public:
	CUtlVector< CRigidBodyWeightList > m_weightLists; // 0x38
	float m_flSpringFrequencyMin; // 0x50
	float m_flSpringFrequencyMax; // 0x54
};

// Aligment: 10
// Size: 232
class CLeanMatrixUpdateNode : public CLeafUpdateNode, CAnimUpdateNodeBase
{
public:
	int32[3][3] m_frameCorners; // 0x5c
	CPoseHandle[9] m_poses; // 0x80
	CAnimInputDamping m_damping; // 0xa8
	AnimVectorSource m_blendSource; // 0xb8
	CAnimParamHandle m_paramIndex; // 0xbc
	Vector m_verticalAxis; // 0xc0
	Vector m_horizontalAxis; // 0xcc
	HSequence m_hSequence; // 0xd8
	float m_flMaxValue; // 0xdc
	int32_t m_nSequenceMaxFrame; // 0xe0
};

// Aligment: 4
// Size: 64
struct PermModelExtPart_t
{
public:
	CTransform m_Transform; // 0x0
	CUtlString m_Name; // 0x20
	int32_t m_nParent; // 0x28
	CStrongHandle< InfoForResourceTypeCModel > m_refModel; // 0x30
};

// Aligment: 15
// Size: 240
class CBlend2DUpdateNode : public CAnimUpdateNodeBase
{
public:
	CUtlVector< BlendItem_t > m_items; // 0x60
	CUtlVector< TagSpan_t > m_tags; // 0x78
	CParamSpanUpdater m_paramSpans; // 0x90
	CUtlVector< int32 > m_nodeItemIndices; // 0xa8
	CAnimInputDamping m_damping; // 0xc0
	AnimValueSource m_blendSourceX; // 0xd0
	CAnimParamHandle m_paramX; // 0xd4
	AnimValueSource m_blendSourceY; // 0xd8
	CAnimParamHandle m_paramY; // 0xdc
	Blend2DMode m_eBlendMode; // 0xe0
	float m_playbackSpeed; // 0xe4
	bool m_bLoop; // 0xe8
	bool m_bLockBlendOnReset; // 0xe9
	bool m_bLockWhenWaning; // 0xea
	bool m_bAnimEventsAndTagsOnMostWeightedOnly; // 0xeb
};

// Aligment: 4
// Size: 48
class CAnimComponentUpdater
{
public:
	CUtlString m_name; // 0x18
	AnimComponentID m_id; // 0x20
	AnimNodeNetworkMode m_networkMode; // 0x24
	bool m_bStartEnabled; // 0x28
};

// Aligment: 6
// Size: 64
class CSeqSynthAnimDesc
{
public:
	CBufferString m_sName; // 0x0
	CSeqSeqDescFlag m_flags; // 0x10
	CSeqTransition m_transition; // 0x1c
	int16_t m_nLocalBaseReference; // 0x24
	int16_t m_nLocalBoneMask; // 0x26
	CUtlVector< CAnimActivity > m_activityArray; // 0x28
};

// Aligment: 9
// Size: 64
class CFootDefinition
{
public:
	CUtlString m_name; // 0x0
	CUtlString m_ankleBoneName; // 0x8
	CUtlString m_toeBoneName; // 0x10
	Vector m_vBallOffset; // 0x18
	Vector m_vHeelOffset; // 0x24
	float m_flFootLength; // 0x30
	float m_flBindPoseDirectionMS; // 0x34
	float m_flTraceHeight; // 0x38
	float m_flTraceRadius; // 0x3c
};

// Aligment: 6
// Size: 160
class CRagdollComponentUpdater : public CAnimComponentUpdater
{
public:
	CUtlVector< CAnimNodePath > m_ragdollNodePaths; // 0x30
	CUtlVector< int32 > m_boneIndices; // 0x48
	CUtlVector< CUtlString > m_boneNames; // 0x60
	CUtlVector< WeightList > m_weightLists; // 0x78
	float m_flSpringFrequencyMin; // 0x90
	float m_flSpringFrequencyMax; // 0x94
};

// Aligment: 2
// Size: 24
class CAnimUser
{
public:
	CBufferString m_name; // 0x0
	int32_t m_nType; // 0x10
};

// Aligment: 6
// Size: 96
class CConstraintTarget
{
public:
	Quaternion m_qOffset; // 0x20
	Vector m_vOffset; // 0x30
	uint32_t m_nBoneHash; // 0x3c
	CUtlString m_sName; // 0x40
	float m_flWeight; // 0x48
	bool m_bIsAttachment; // 0x59
};

// Aligment: 0
// Size: 56
class CInputStreamAnimNode : public CAnimNodeBase
{
public:
// <no members described>
};

// Aligment: 4
// Size: 256
struct VPhysXConstraint2_t
{
public:
	uint32_t m_nFlags; // 0x0
	uint16_t m_nParent; // 0x4
	uint16_t m_nChild; // 0x6
	VPhysXConstraintParams_t m_params; // 0x8
};

// Aligment: 1
// Size: 96
class CModelConfigElement_RandomPick : public CModelConfigElement
{
public:
	CUtlVector< CUtlString > m_Choices; // 0x48
};

// Aligment: 2
// Size: 184
class CSubGraphAnimNode : public CContainerAnimNodeBase, CAnimNodeBase
{
public:
	// MPropertyFriendlyName "SubGraph File"
	// MPropertyAttributeEditor "AssetBrowse( vsubgrph )"
	// MPropertyAttrChangeCallback
	CUtlString m_subGraphFilename; // 0x78
	// MPropertyHideField
	CUtlHashtable< CUtlString, CUtlString > m_animNameMap; // 0x80
};

// Aligment: 7
// Size: 96
class CSlopeComponent : public CAnimComponentBase
{
public:
	// MPropertyFriendlyName "Trace Distance"
	float m_flTraceDistance; // 0x40
	// MPropertyHideField
	AnimParamID m_slopeAngleID; // 0x44
	// MPropertyHideField
	AnimParamID m_slopeHeadingID; // 0x48
	// MPropertyHideField
	AnimParamID m_slopeAngleSideID; // 0x4c
	// MPropertyHideField
	AnimParamID m_slopeAngleFrontID; // 0x50
	// MPropertyHideField
	AnimParamID m_slopeNormalID; // 0x54
	// MPropertyHideField
	AnimParamID m_slopeNormal_WorldSpaceID; // 0x58
};

// Aligment: 6
// Size: 256
class CAnimParameterListUpdater
{
public:
	CUtlVector< CSmartPtr< CAnimParameterBase > > m_parameters; // 0x18
	CUtlHashtable< AnimParamID, int32 > m_idToIndexMap; // 0x30
	CUtlHashtable< CUtlString, int32 > m_nameToIndexMap; // 0x50
	CUtlVector< CAnimParamHandle > m_indexToHandle; // 0x70
	CUtlVector< CUtlPair< CAnimParamHandle, CAnimVariant > > m_autoResetParams; // 0x88
	CUtlHashtable< CAnimParamHandle, int16 > m_autoResetMap; // 0xa0
};

// Aligment: 5
// Size: 88
class CFollowAttachmentAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	CAnimNodeConnection m_inputConnection; // 0x38
	// MPropertyFriendlyName "Bone"
	// MPropertyAttributeChoiceName "Bone"
	CUtlString m_boneName; // 0x40
	// MPropertyFriendlyName "Target Attachment"
	// MPropertyAttributeChoiceName "Attachment"
	CUtlString m_attachmentName; // 0x48
	// MPropertyFriendlyName "Match Translation"
	bool m_bMatchTranslation; // 0x50
	// MPropertyFriendlyName "Match Rotation"
	bool m_bMatchRotation; // 0x51
};

// Aligment: 6
// Size: 64
struct BlendItem_t
{
public:
	CUtlVector< TagSpan_t > m_tags; // 0x0
	CAnimUpdateNodeRef m_pChild; // 0x18
	HSequence m_hSequence; // 0x28
	Vector2D m_vPos; // 0x2c
	float m_flDuration; // 0x34
	bool m_bUseCustomDuration; // 0x38
};

// Aligment: 4
// Size: 112
class CBaseConstraint : public CBoneConstraintBase
{
public:
	CUtlString m_name; // 0x28
	Vector m_vUpVector; // 0x30
	CUtlVector< CConstraintSlave > m_slaves; // 0x40
	CUtlVector< CConstraintTarget > m_targets; // 0x58
};

// Aligment: 1
// Size: 72
class CDampedValueComponentUpdater : public CAnimComponentUpdater
{
public:
	CUtlVector< CDampedValueUpdateItem > m_items; // 0x30
};

// Aligment: 2
// Size: 112
class CCycleControlUpdateNode : public CUnaryUpdateNode, CAnimUpdateNodeBase
{
public:
	AnimValueSource m_valueSource; // 0x68
	CAnimParamHandle m_paramIndex; // 0x6c
};

// Aligment: 3
// Size: 64
class CAnimationGraphVisualizerLine : public CAnimationGraphVisualizerPrimitiveBase
{
public:
	VectorAligned m_vWsPositionStart; // 0x10
	VectorAligned m_vWsPositionEnd; // 0x20
	Color m_Color; // 0x30
};

// Aligment: 3
// Size: 32
class CExpressionActionUpdater : public CAnimActionUpdater
{
public:
	CAnimParamHandle m_hParam; // 0x18
	AnimParamType_t m_eParamType; // 0x1a
	AnimScriptHandle m_hScript; // 0x1c
};

// Aligment: 4
// Size: 336
class CAnimationGraph : public CAnimationSubGraph
{
public:
	CSmartPtr< CAnimGraphSettingsManager > m_pSettingsManager; // 0xe8
	CAnimClipDataManager m_clipDataManager; // 0xf8
	CUtlString m_modelName; // 0x140
	CUtlString m_previewModelName; // 0x148
};

// Aligment: 7
// Size: 48
class CJiggleBoneItem
{
public:
	// MPropertyFriendlyName "Bone"
	// MPropertyAttributeChoiceName "Bone"
	CUtlString m_boneName; // 0x0
	// MPropertyFriendlyName "Spring Strength"
	float m_flSpringStrength; // 0x8
	// MPropertyFriendlyName "Sim Rate (FPS)"
	float m_flSimRateFPS; // 0xc
	// MPropertyFriendlyName "Damping"
	// MPropertyAttributeRange "0 1"
	float m_flDamping; // 0x10
	// MPropertyFriendlyName "Sim Space"
	JiggleBoneSimSpace m_eSimSpace; // 0x14
	// MPropertyFriendlyName "Max"
	// MPropertyGroupName "Movement Limits"
	Vector m_vBoundsMaxLS; // 0x18
	// MPropertyFriendlyName "Min"
	// MPropertyGroupName "Movement Limits"
	Vector m_vBoundsMinLS; // 0x24
};

// Aligment: 10
// Size: 184
class CChoiceUpdateNode : public CAnimUpdateNodeBase
{
public:
	CUtlVector< CAnimUpdateNodeRef > m_children; // 0x58
	CUtlVector< float32 > m_weights; // 0x70
	CUtlVector< float32 > m_blendTimes; // 0x88
	ChoiceMethod m_choiceMethod; // 0xa0
	ChoiceChangeMethod m_choiceChangeMethod; // 0xa4
	ChoiceBlendMethod m_blendMethod; // 0xa8
	float m_blendTime; // 0xac
	bool m_bCrossFade; // 0xb0
	bool m_bResetChosen; // 0xb1
	bool m_bDontResetSameSelection; // 0xb2
};

// Aligment: 2
// Size: 32
class CProductQuantizer
{
public:
	CUtlVector< CVectorQuantizer > m_subQuantizers; // 0x0
	int32_t m_nDimensions; // 0x18
};

// Aligment: 1
// Size: 64
class CFootCycleMetric : public CMotionMetricBase
{
public:
	// MPropertyFriendlyName "Foot"
	// MPropertyAttributeChoiceName "Foot"
	// MPropertyAutoExpandSelf
	CUtlVector< CUtlString > m_feet; // 0x28
};

// Aligment: 2
// Size: 32
class CMotionDataSet
{
public:
	CUtlVector< CMotionGraphGroup > m_groups; // 0x0
	int32_t m_nDimensionCount; // 0x18
};

// Aligment: 2
// Size: 16
struct PermModelDataAnimatedMaterialAttribute_t
{
public:
	CUtlString m_AttributeName; // 0x0
	int32_t m_nNumChannels; // 0x8
};

// Aligment: 4
// Size: 72
class CSkeletalInputAnimNode : public CAnimNodeBase
{
public:
	// MPropertyFriendlyName "Data Source"
	// MPropertyAttrChangeCallback
	AnimVrBoneTransformSource_t m_transformSource; // 0x38
	// MPropertyFriendlyName "Motion Range"
	// MPropertyAttrStateCallback
	AnimVRHandMotionRange_t m_motionRange; // 0x3c
	// MPropertyFriendlyName "Enable IK"
	// MPropertyGroupName "+Retargetting"
	bool m_bEnableIK; // 0x40
	// MPropertyFriendlyName "Enable Collision"
	// MPropertyGroupName "+Retargetting"
	bool m_bEnableCollision; // 0x41
};

// Aligment: 3
// Size: 12
struct TagSpan_t
{
public:
	int32_t m_tagIndex; // 0x0
	float m_startCycle; // 0x4
	float m_endCycle; // 0x8
};

// Aligment: 2
// Size: 96
class CSolveIKChainAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	CAnimNodeConnection m_inputConnection; // 0x40
	// MPropertyFriendlyName "IK Chains"
	// MPropertyAutoExpandSelf
	CUtlVector< CSolveIKChainAnimNodeChainData > m_IkChains; // 0x48
};

// Aligment: 17
// Size: 136
class CLookAtAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	CAnimNodeConnection m_inputConnection; // 0x38
	// MPropertyFriendlyName "Target"
	// MPropertyAttrChangeCallback
	AnimVectorSource m_target; // 0x40
	// MPropertyFriendlyName "Target Parameter"
	// MPropertyAttributeChoiceName "VectorParameter"
	// MPropertyAttrStateCallback
	AnimParamID m_param; // 0x44
	// MPropertyFriendlyName "Parameter is a Position"
	// MPropertyAttrStateCallback
	bool m_bIsPosition; // 0x48
	// MPropertyFriendlyName "Weight Parameter"
	// MPropertyAttributeChoiceName "FloatParameter"
	AnimParamID m_weightParam; // 0x4c
	// MPropertyFriendlyName "LookAt Chain"
	// MPropertyAttributeChoiceName "LookAtChain"
	CUtlString m_lookatChainName; // 0x50
	// MPropertyFriendlyName "Aim Attachment"
	// MPropertyAttributeChoiceName "Attachment"
	CUtlString m_attachmentName; // 0x58
	// MPropertyFriendlyName "Rotate Through Forward"
	// MPropertyGroupName "Rotation Limits"
	// MPropertyAttrChangeCallback
	bool m_bRotateYawForward; // 0x60
	// MPropertyFriendlyName "Yaw Limit"
	// MPropertyAttributeRange "0 180"
	// MPropertyGroupName "Rotation Limits"
	// MPropertyAttrStateCallback
	float m_flYawLimit; // 0x64
	// MPropertyFriendlyName "Pitch Limit"
	// MPropertyAttributeRange "0 90"
	// MPropertyGroupName "Rotation Limits"
	float m_flPitchLimit; // 0x68
	// MPropertyFriendlyName "Maintain Up Direction"
	bool m_bMaintainUpDirection; // 0x6c
	// MPropertyFriendlyName "Reset Child"
	bool m_bResetBase; // 0x6d
	// MPropertyFriendlyName "Lock Blend When Waning"
	bool m_bLockWhenWaning; // 0x6e
	// MPropertyFriendlyName "Use Hysteresis"
	// MPropertyGroupName "Hysteresis"
	bool m_bUseHysteresis; // 0x6f
	// MPropertyFriendlyName "Inner Angle"
	// MPropertyGroupName "Hysteresis"
	float m_flHysteresisInnerAngle; // 0x70
	// MPropertyFriendlyName "Outer Angle"
	// MPropertyGroupName "Hysteresis"
	float m_flHysteresisOuterAngle; // 0x74
	// MPropertyFriendlyName "Damping"
	CAnimInputDamping m_damping; // 0x78
};

// Aligment: 2
// Size: 48
class CTagCondition : public CConditionBase
{
public:
	// MPropertyFriendlyName "Tag"
	// MPropertyAttributeChoiceName "Tag"
	AnimTagID m_tagID; // 0x28
	// MPropertyFriendlyName "Value"
	bool m_comparisonValue; // 0x2c
};

// Aligment: 7
// Size: 168
struct ModelSkeletonData_t
{
public:
	CUtlVector< CUtlString > m_boneName; // 0x0
	CUtlVector< int16 > m_nParent; // 0x18
	CUtlVector< float32 > m_boneSphere; // 0x30
	CUtlVector< uint32 > m_nFlag; // 0x48
	CUtlVector< Vector > m_bonePosParent; // 0x60
	CUtlVector< QuaternionStorage > m_boneRotParent; // 0x78
	CUtlVector< float32 > m_boneScaleParent; // 0x90
};

// Aligment: 14
// Size: 112
class CHitBox
{
public:
	Vector m_vMinBounds; // 0x20
	Vector m_vMaxBounds; // 0x2c
	CUtlString m_name; // 0x38
	CUtlString m_sSurfaceProperty; // 0x40
	CUtlString m_sBoneName; // 0x48
	float m_flShapeRadius; // 0x50
	uint32_t m_nBoneNameHash; // 0x54
	int32_t m_nGroupId; // 0x58
	Color m_cRenderColor; // 0x5c
	uint16_t m_nHitBoxIndex; // 0x60
	uint8_t m_nShapeType; // 0x62
	bool m_bTranslationOnly; // 0x64
	bool m_bVisible; // 0x65
	bool m_bSelected; // 0x66
};

// Aligment: 0
// Size: 112
class CAnimComponentStateTransition : public CAnimStateTransition
{
public:
// <no members described>
};

// Aligment: 1
// Size: 104
class CFootCycleMetricEvaluator : public CMotionMetricEvaluator
{
public:
	CUtlVector< int32 > m_footIndices; // 0x50
};

// Aligment: 0
// Size: 112
class CAnimComponentState : public CAnimState
{
public:
// <no members described>
};

// Aligment: 3
// Size: 32
class CVectorQuantizer
{
public:
	CUtlVector< float32 > m_centroidVectors; // 0x0
	int32_t m_nCentroids; // 0x18
	int32_t m_nDimensions; // 0x1c
};

// Aligment: 2
// Size: 16
class CBodyGroupSetting
{
public:
	// MPropertyFriendlyName "BodyGroup"
	// MPropertyAttributeChoiceName "BodyGroup"
	// MPropertyAutoRebuildOnChange
	CUtlString m_BodyGroupName; // 0x0
	// MPropertyFriendlyName "BodyGroup Option"
	// MPropertyAttributeChoiceName "BodyGroupOption"
	// MPropertyAttrExtraInfoFn
	int32_t m_nBodyGroupOption; // 0x8
};

// Aligment: 2
// Size: 88
class CJiggleBoneAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	CAnimNodeConnection m_inputConnection; // 0x38
	// MPropertyFriendlyName "Jiggle Bones"
	// MPropertyAutoExpandSelf
	CUtlVector< CJiggleBoneItem > m_items; // 0x40
};

// Aligment: 3
// Size: 80
class CRagdollAnimNode : public CAnimNodeBase
{
public:
	CUtlString m_weightListName; // 0x38
	RagdollPoseControl m_poseControlMethod; // 0x40
	// MPropertyHideField
	CAnimNodeConnection m_inputConnection; // 0x44
};

// Aligment: 5
// Size: 184
class CAnimNodeStateTransition : public CAnimStateTransition
{
public:
	// MPropertyFriendlyName "Blend Duration"
	CFloatAnimValue m_blendDuration; // 0x78
	// MPropertyFriendlyName "Reset Destination"
	bool m_bReset; // 0x90
	// MPropertyFriendlyName "Start Cycle At"
	ResetCycleOption m_resetCycleOption; // 0x94
	// MPropertyFriendlyName "Fixed Start Cycle Value"
	CFloatAnimValue m_flFixedCycleValue; // 0x98
	// MPropertyHideField
	CBlendCurve m_blendCurve; // 0xb0
};

// Aligment: 2
// Size: 112
class CStepsRemainingMetricEvaluator : public CMotionMetricEvaluator
{
public:
	CUtlVector< int32 > m_footIndices; // 0x50
	float m_flMinStepsRemaining; // 0x68
};

// Aligment: 3
// Size: 40
class CFootStepTriggerItem
{
public:
	// MPropertyFriendlyName "Foot"
	// MPropertyAttributeChoiceName "Foot"
	CUtlString m_footName; // 0x0
	// MPropertyFriendlyName "Trigger Phase"
	StepPhase m_triggerPhase; // 0x8
	// MPropertyFriendlyName "Tags"
	// MPropertyAttributeChoiceName "Tag"
	CUtlVector< AnimTagID > m_tags; // 0x10
};

// Aligment: 12
// Size: 232
class CMaterialDrawDescriptor
{
public:
	RenderPrimitiveType_t m_nPrimitiveType; // 0x0
	int32_t m_nBaseVertex; // 0x4
	int32_t m_nVertexCount; // 0x8
	int32_t m_nStartIndex; // 0xc
	int32_t m_nIndexCount; // 0x10
	float m_flUvDensity; // 0x14
	Vector m_vTintColor; // 0x18
	float m_flAlpha; // 0x24
	uint32_t m_nFirstMeshlet; // 0x2c
	uint16_t m_nNumMeshlets; // 0x30
	CRenderBufferBinding m_indexBuffer; // 0xb8
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_material; // 0xe0
};

// Aligment: 1
// Size: 72
class CFootFallAnimTag : public CAnimTagBase
{
public:
	// MPropertyFriendlyName "Foot"
	FootFallTagFoot_t m_foot; // 0x40
};

// Aligment: 2
// Size: 144
class CAimConstraint : public CBaseConstraint, CBoneConstraintBase
{
public:
	Quaternion m_qAimOffset; // 0x70
	uint32_t m_nUpType; // 0x80
};

// Aligment: 1
// Size: 40
class CAnimComponentManager
{
public:
	CUtlVector< CSmartPtr< CAnimComponentBase > > m_components; // 0x8
};

// Aligment: 0
// Size: 112
class CChoreoUpdateNode : public CUnaryUpdateNode, CAnimUpdateNodeBase
{
public:
// <no members described>
};

// Aligment: 9
// Size: 168
class CFootAdjustmentUpdateNode : public CUnaryUpdateNode, CAnimUpdateNodeBase
{
public:
	CUtlVector< HSequence > m_clips; // 0x70
	CPoseHandle m_hBasePoseCacheHandle; // 0x88
	CAnimParamHandle m_facingTarget; // 0x8c
	float m_flTurnTimeMin; // 0x90
	float m_flTurnTimeMax; // 0x94
	float m_flStepHeightMax; // 0x98
	float m_flStepHeightMaxAngle; // 0x9c
	bool m_bResetChild; // 0xa0
	bool m_bAnimationDriven; // 0xa1
};

// Aligment: 7
// Size: 96
class CLookComponent : public CAnimComponentBase
{
public:
	// MPropertyFriendlyName "Network Look Target"
	bool m_bNetworkLookTarget; // 0x40
	// MPropertyHideField
	AnimParamID m_lookHeadingID; // 0x44
	// MPropertyHideField
	AnimParamID m_lookHeadingVelocityID; // 0x48
	// MPropertyHideField
	AnimParamID m_lookPitchID; // 0x4c
	// MPropertyHideField
	AnimParamID m_lookDirectionID; // 0x50
	// MPropertyHideField
	AnimParamID m_lookTargetID; // 0x54
	// MPropertyHideField
	AnimParamID m_lookTargetWorldSpaceID; // 0x58
};

// Aligment: 1
// Size: 96
class CModelConfigElement_UserPick : public CModelConfigElement
{
public:
	CUtlVector< CUtlString > m_Choices; // 0x48
};

// Aligment: 4
// Size: 56
class CMorphBundleData
{
public:
	float m_flULeftSrc; // 0x0
	float m_flVTopSrc; // 0x4
	CUtlVector< float32 > m_offsets; // 0x8
	CUtlVector< float32 > m_ranges; // 0x20
};

// Aligment: 2
// Size: 32
struct MaterialGroup_t
{
public:
	CUtlString m_name; // 0x0
	CUtlVector< CStrongHandle< InfoForResourceTypeIMaterial2 > > m_materials; // 0x8
};

// Aligment: 2
// Size: 40
class CAnimMotorBase
{
public:
	// MPropertyFriendlyName "Name"
	// MPropertySortPriority "100"
	CUtlString m_name; // 0x18
	// MPropertyFriendlyName "Is Default"
	bool m_bDefault; // 0x20
};

// Aligment: 2
// Size: 112
class CPathHelperUpdateNode : public CUnaryUpdateNode, CAnimUpdateNodeBase
{
public:
	float m_flStoppingRadius; // 0x68
	float m_flStoppingSpeedScale; // 0x6c
};

// Aligment: 1
// Size: 88
class CAnimTagManager
{
public:
	CUtlVector< CSmartPtr< CAnimTagBase > > m_tags; // 0x18
};

// Aligment: 1
// Size: 80
class CModelConfigElement_SetMaterialGroupOnAttachedModels : public CModelConfigElement
{
public:
	CUtlString m_MaterialGroupName; // 0x48
};

// Aligment: 7
// Size: 72
class CDampedPathAnimMotorUpdater : public CPathAnimMotorUpdaterBase, CAnimMotorUpdaterBase
{
public:
	float m_flAnticipationTime; // 0x2c
	float m_flMinSpeedScale; // 0x30
	CAnimParamHandle m_hAnticipationPosParam; // 0x34
	CAnimParamHandle m_hAnticipationHeadingParam; // 0x36
	float m_flSpringConstant; // 0x38
	float m_flMinSpringTension; // 0x3c
	float m_flMaxSpringTension; // 0x40
};

// Aligment: 1
// Size: 72
class CActionComponentUpdater : public CAnimComponentUpdater
{
public:
	CUtlVector< CSmartPtr< CAnimActionUpdater > > m_actions; // 0x30
};

// Aligment: 0
// Size: 4
class CAnimCycle : public CCycleBase
{
public:
// <no members described>
};

// Aligment: 5
// Size: 48
class CAnimBoneDifference
{
public:
	CBufferString m_name; // 0x0
	CBufferString m_parent; // 0x10
	Vector m_posError; // 0x20
	bool m_bHasRotation; // 0x2c
	bool m_bHasMovement; // 0x2d
};

// Aligment: 1
// Size: 40
class CAnimStateMachine
{
public:
	// MPropertyHideField
	CUtlVector< CSmartPtr< CAnimState > > m_states; // 0x8
};

// Aligment: 6
// Size: 96
class CStopAtGoalAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	CAnimNodeConnection m_inputConnection; // 0x38
	// MPropertyFriendlyName "Outer Stopping Radius"
	float m_flOuterRadius; // 0x40
	// MPropertyFriendlyName "Inner Stopping Radius"
	float m_flInnerRadius; // 0x44
	// MPropertyFriendlyName "Maximum Speed Scale"
	float m_flMaxScale; // 0x48
	// MPropertyFriendlyName "Minimum Speed Scale"
	float m_flMinScale; // 0x4c
	// MPropertyFriendlyName "Damping"
	CAnimInputDamping m_damping; // 0x50
};

// Aligment: 5
// Size: 144
class CStopAtGoalUpdateNode : public CUnaryUpdateNode, CAnimUpdateNodeBase
{
public:
	float m_flOuterRadius; // 0x6c
	float m_flInnerRadius; // 0x70
	float m_flMaxScale; // 0x74
	float m_flMinScale; // 0x78
	CAnimInputDamping m_damping; // 0x80
};

// Aligment: 2
// Size: 8
struct VPhysXRange_t
{
public:
	float m_flMin; // 0x0
	float m_flMax; // 0x4
};

// Aligment: 6
// Size: 6
class CSeqMultiFetchFlag
{
public:
	bool m_bRealtime; // 0x0
	bool m_bCylepose; // 0x1
	bool m_b0D; // 0x2
	bool m_b1D; // 0x3
	bool m_b2D; // 0x4
	bool m_b2D_TRI; // 0x5
};

// Aligment: 16
// Size: 312
struct VPhysXAggregateData_t
{
public:
	uint16_t m_nFlags; // 0x0
	uint16_t m_nRefCounter; // 0x2
	CUtlVector< uint32 > m_bonesHash; // 0x8
	CUtlVector< CUtlString > m_boneNames; // 0x20
	CUtlVector< uint16 > m_indexNames; // 0x38
	CUtlVector< uint16 > m_indexHash; // 0x50
	CUtlVector< matrix3x4a_t > m_bindPose; // 0x68
	CUtlVector< VPhysXBodyPart_t > m_parts; // 0x80
	CUtlVector< VPhysXConstraint2_t > m_constraints2; // 0x98
	CUtlVector< VPhysXJoint_t > m_joints; // 0xb0
	PhysFeModelDesc_t* m_pFeModel; // 0xc8
	CUtlVector< uint16 > m_boneParents; // 0xd0
	CUtlVector< uint32 > m_surfacePropertyHashes; // 0xe8
	CUtlVector< VPhysXCollisionAttributes_t > m_collisionAttributes; // 0x100
	CUtlVector< CUtlString > m_debugPartNames; // 0x118
	CUtlString m_embeddedKeyvalues; // 0x130
};

// Aligment: 1
// Size: 4
class AnimComponentID
{
public:
	uint32_t m_id; // 0x0
};

// Aligment: 3
// Size: 40
class CModelConfig
{
public:
	CUtlString m_ConfigName; // 0x0
	CUtlVector< CModelConfigElement* > m_Elements; // 0x8
	bool m_bTopLevel; // 0x20
};

// Aligment: 1
// Size: 56
class CConditionContainer
{
public:
	// MPropertySuppressField
	CUtlVector< CSmartPtr< CConditionBase > > m_conditions; // 0x10
};

// Aligment: 10
// Size: 64
class FootFixedSettings
{
public:
	TraceSettings_t m_traceSettings; // 0x0
	VectorAligned m_vFootBaseBindPosePositionMS; // 0x10
	float m_flFootBaseLength; // 0x20
	float m_flMaxRotationLeft; // 0x24
	float m_flMaxRotationRight; // 0x28
	int32_t m_footstepLandedTagIndex; // 0x2c
	bool m_bEnableTracing; // 0x30
	float m_flTraceAngleBlend; // 0x34
	int32_t m_nDisableTagIndex; // 0x38
	int32_t m_nFootIndex; // 0x3c
};

// Aligment: 3
// Size: 48
class CAnimTagSpan
{
public:
	AnimTagID m_id; // 0x20
	float m_fStartCycle; // 0x24
	float m_fDuration; // 0x28
};

// Aligment: 0
// Size: 48
class CPathAnimMotor : public CPathAnimMotorBase, CAnimMotorBase
{
public:
// <no members described>
};

// Aligment: 1
// Size: 40
class CAnimNodeList
{
public:
	CUtlVector< CAnimNodeBase* > m_nodes; // 0x10
};

// Aligment: 5
// Size: 168
class CSequenceAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	CUtlVector< CSmartPtr< CAnimTagSpan > > m_tagSpans; // 0x68
	// MPropertyHideField
	CUtlVector< CSmartPtr< CAnimParamSpan > > m_paramSpans; // 0x80
	// MPropertyFriendlyName "Sequence"
	// MPropertyAttributeChoiceName "Sequence"
	CUtlString m_sequenceName; // 0x98
	// MPropertyFriendlyName "Playback Speed"
	float m_playbackSpeed; // 0xa0
	// MPropertyFriendlyName "Loop"
	bool m_bLoop; // 0xa4
};

// Aligment: 2
// Size: 72
class CModelConfigElement
{
public:
	CUtlString m_ElementName; // 0x8
	CUtlVector< CModelConfigElement* > m_NestedElements; // 0x10
};

// Aligment: 38
// Size: 264
class CFootLockAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	CAnimNodeConnection m_inputConnection; // 0x38
	// MPropertyFriendlyName "Feet"
	// MPropertyAutoExpandSelf
	CUtlVector< CFootLockItem > m_items; // 0x40
	// MPropertyFriendlyName "Hip Bone"
	// MPropertyAttributeChoiceName "Bone"
	CUtlString m_hipBoneName; // 0x58
	// MPropertyFriendlyName "Blend Time"
	float m_flBlendTime; // 0x60
	// MPropertyFriendlyName "Apply Foot Rotation Limits"
	bool m_bApplyFootRotationLimits; // 0x64
	// MPropertyFriendlyName "Reset Child"
	bool m_bResetChild; // 0x65
	// MPropertyFriendlyName "IK Solver Type"
	// MPropertyGroupName "IK"
	// MPropertyAttrChangeCallback
	IKSolverType m_ikSolverType; // 0x68
	// MPropertyFriendlyName "Always use fallback hinge"
	// MPropertyGroupName "IK"
	// MPropertyAttrStateCallback
	bool m_bAlwaysUseFallbackHinge; // 0x6c
	// MPropertyFriendlyName "Limit Leg Twist"
	// MPropertyGroupName "IK"
	// MPropertyAttrStateCallback
	bool m_bApplyLegTwistLimits; // 0x6d
	// MPropertyFriendlyName "Max Leg Twist Angle"
	// MPropertyGroupName "IK"
	// MPropertyAttrStateCallback
	float m_flMaxLegTwist; // 0x70
	// MPropertyFriendlyName "Curve Foot Paths"
	// MPropertyGroupName "Curve Paths"
	// MPropertyAttributeRange "0 1"
	float m_flStrideCurveScale; // 0x74
	// MPropertyFriendlyName "Curve Paths Limit"
	// MPropertyGroupName "Curve Paths"
	// MPropertyAttributeRange "0 1"
	float m_flStrideCurveLimitScale; // 0x78
	// MPropertyFriendlyName "Enable Vertical Curved Paths"
	// MPropertyGroupName "Curve Paths"
	bool m_bEnableVerticalCurvedPaths; // 0x7c
	// MPropertyFriendlyName "Modulate Step Height"
	// MPropertyGroupName "Step Height"
	// MPropertyAttrChangeCallback
	bool m_bModulateStepHeight; // 0x7d
	// MPropertyFriendlyName "Height Increase Scale"
	// MPropertyGroupName "Step Height"
	// MPropertyAttrStateCallback
	float m_flStepHeightIncreaseScale; // 0x80
	// MPropertyFriendlyName "Height Decrease Scale"
	// MPropertyGroupName "Step Height"
	// MPropertyAttrStateCallback
	float m_flStepHeightDecreaseScale; // 0x84
	// MPropertyFriendlyName "Enable Hip Shift"
	// MPropertyGroupName "Hip Shift"
	bool m_bEnableHipShift; // 0x88
	// MPropertyFriendlyName "Hip Shift Scale"
	// MPropertyGroupName "Hip Shift"
	// MPropertyAttributeRange "0 1"
	float m_flHipShiftScale; // 0x8c
	// MPropertyFriendlyName "Damping"
	// MPropertyGroupName "Hip Shift"
	CAnimInputDamping m_hipShiftDamping; // 0x90
	// MPropertyFriendlyName "Apply Tilt"
	// MPropertyGroupName "Tilt"
	bool m_bApplyTilt; // 0xa0
	// MPropertyFriendlyName "Tilt Plane Pitch Spring Strength"
	// MPropertyGroupName "Tilt"
	float m_flTiltPlanePitchSpringStrength; // 0xa4
	// MPropertyFriendlyName "Tilt Plane Roll Spring Strength"
	// MPropertyGroupName "Tilt"
	float m_flTiltPlaneRollSpringStrength; // 0xa8
	// MPropertyFriendlyName "Enable Lock Breaking"
	// MPropertyGroupName "Lock Breaking"
	bool m_bEnableLockBreaking; // 0xac
	// MPropertyFriendlyName "Tolerance"
	// MPropertyGroupName "Lock Breaking"
	float m_flLockBreakTolerance; // 0xb0
	// MPropertyFriendlyName "Blend Time"
	// MPropertyGroupName "Lock Breaking"
	float m_flLockBreakBlendTime; // 0xb4
	// MPropertyFriendlyName "Enable Stretching"
	// MPropertyGroupName "Stretch"
	bool m_bEnableStretching; // 0xb8
	// MPropertyFriendlyName "Max Stretch Amount"
	// MPropertyGroupName "Stretch"
	float m_flMaxStretchAmount; // 0xbc
	// MPropertyFriendlyName "Extension Scale"
	// MPropertyGroupName "Stretch"
	// MPropertyAttributeRange "0 1"
	float m_flStretchExtensionScale; // 0xc0
	// MPropertyFriendlyName "Enable Ground Tracing"
	// MPropertyGroupName "Ground IK"
	// MPropertyAttrChangeCallback
	bool m_bEnableGroundTracing; // 0xc4
	// MPropertyFriendlyName "Angle Traces with Slope"
	// MPropertyGroupName "Ground IK"
	// MPropertyAttributeRange "0 1"
	// MPropertyAttrStateCallback
	float m_flTraceAngleBlend; // 0xc8
	// MPropertyFriendlyName "Apply Hip Drop"
	// MPropertyGroupName "Ground IK"
	// MPropertyAttrChangeCallback
	// MPropertyAttrStateCallback
	bool m_bApplyHipDrop; // 0xcc
	// MPropertyFriendlyName "Max Foot Lift"
	// MPropertyGroupName "Ground IK"
	// MPropertyAttrStateCallback
	float m_flMaxFootHeight; // 0xd0
	// MPropertyFriendlyName "Leg Extension Scale"
	// MPropertyGroupName "Ground IK"
	// MPropertyAttrStateCallback
	float m_flExtensionScale; // 0xd4
	// MPropertyFriendlyName "Hip Damping"
	// MPropertyGroupName "Ground IK"
	// MPropertyAttrStateCallback
	CAnimInputDamping m_hipDampingSettings; // 0xd8
	// MPropertyFriendlyName "Enable Root Height Damping"
	// MPropertyGroupName "Root Height Damping"
	// MPropertyAttrChangeCallback
	bool m_bEnableRootHeightDamping; // 0xe8
	// MPropertyFriendlyName "Damping Settings"
	// MPropertyGroupName "Root Height Damping"
	// MPropertyAttrStateCallback
	CAnimInputDamping m_rootHeightDamping; // 0xf0
	// MPropertyFriendlyName "Max Offset"
	// MPropertyGroupName "Root Height Damping"
	// MPropertyAttrStateCallback
	float m_flMaxRootHeightOffset; // 0x100
	// MPropertyFriendlyName "Min Offset"
	// MPropertyGroupName "Root Height Damping"
	// MPropertyAttrStateCallback
	float m_flMinRootHeightOffset; // 0x104
};

// Aligment: 2
// Size: 56
class CTimeCondition : public CConditionBase
{
public:
	Comparison_t m_comparisonOp; // 0x28
	CUtlString m_comparisonString; // 0x30
};

// Aligment: 4
// Size: 96
class CTimeRemainingMetricEvaluator : public CMotionMetricEvaluator
{
public:
	bool m_bMatchByTimeRemaining; // 0x50
	float m_flMaxTimeRemaining; // 0x54
	bool m_bFilterByTimeRemaining; // 0x58
	float m_flMinTimeRemaining; // 0x5c
};

// Aligment: 4
// Size: 120
class CSingleFrameAnimNode : public CAnimNodeBase
{
public:
	// MPropertyFriendlyName "Sequence"
	// MPropertyAttributeChoiceName "Sequence"
	CUtlString m_sequenceName; // 0x50
	// MPropertyFriendlyName "Frame Selection"
	// MPropertyAttrChangeCallback
	SingleFrameSelection m_eFrameSelection; // 0x58
	// MPropertyFriendlyName "Frame Index"
	// MPropertyAttrStateCallback
	int32_t m_nFrameIndex; // 0x5c
	CUtlVector< CSmartPtr< CAnimActionBase > > m_actions; // 0x60
};

// Aligment: 5
// Size: 28
class CStateNodeTransitionData
{
public:
	CBlendCurve m_curve; // 0x0
	CAnimValue< float32 > m_blendDuration; // 0x8
	CAnimValue< float32 > m_resetCycleValue; // 0x10
	bitfield:1 m_bReset; // 0x0
	bitfield:3 m_resetCycleOption; // 0x0
};

// Aligment: 13
// Size: 136
class CTwoBoneIKAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	CAnimNodeConnection m_inputConnection; // 0x38
	// MPropertyFriendlyName "IK Chain"
	// MPropertyAttributeChoiceName "IKChain"
	CUtlString m_ikChainName; // 0x40
	// MPropertyFriendlyName "Auto-Detect Hinge Axis"
	bool m_bAutoDetectHingeAxis; // 0x48
	// MPropertyGroupName "End Effector"
	// MPropertyFriendlyName "End Effector Type"
	// MPropertyAttrChangeCallback
	IkEndEffectorType m_endEffectorType; // 0x4c
	// MPropertyGroupName "End Effector"
	// MPropertyFriendlyName "Attachment"
	// MPropertyAttributeChoiceName "Attachment"
	// MPropertyAttrStateCallback
	CUtlString m_endEffectorAttachmentName; // 0x50
	// MPropertyGroupName "Target"
	// MPropertyFriendlyName "Target Type"
	// MPropertyAttrChangeCallback
	IkTargetType m_targetType; // 0x58
	// MPropertyGroupName "Target"
	// MPropertyFriendlyName "Attachment"
	// MPropertyAttributeChoiceName "Attachment"
	// MPropertyAttrStateCallback
	CUtlString m_attachmentName; // 0x60
	// MPropertyGroupName "Target"
	// MPropertyFriendlyName "Bone"
	// MPropertyAttributeChoiceName "Bone"
	// MPropertyAttrStateCallback
	CUtlString m_targetBoneName; // 0x68
	// MPropertyGroupName "Target"
	// MPropertyFriendlyName "Position Parameter"
	// MPropertyAttributeChoiceName "VectorParameter"
	// MPropertyAttrStateCallback
	AnimParamID m_targetParam; // 0x70
	// MPropertyGroupName "Target"
	// MPropertyFriendlyName "Match Target Orientation"
	// MPropertyAttrChangeCallback
	bool m_bMatchTargetOrientation; // 0x74
	// MPropertyGroupName "Target"
	// MPropertyFriendlyName "Rotation Parameter"
	// MPropertyAttributeChoiceName "QuaternionParameter"
	// MPropertyAttrStateCallback
	AnimParamID m_rotationParam; // 0x78
	// MPropertyGroupName "Target"
	// MPropertyFriendlyName "Constrain Twist"
	// MPropertyAttrStateCallback
	bool m_bConstrainTwist; // 0x7c
	// MPropertyGroupName "Target"
	// MPropertyFriendlyName "Max Twist"
	// MPropertyAttrStateCallback
	float m_flMaxTwist; // 0x80
};

// Aligment: 9
// Size: 104
class CChoiceAnimNode : public CAnimNodeBase
{
public:
	// MPropertyFriendlyName "Options"
	// MPropertyAutoExpandSelf
	CUtlVector< CChoiceNodeChild > m_children; // 0x38
	// MPropertyHideField
	int32_t m_seed; // 0x50
	// MPropertyFriendlyName "Method"
	ChoiceMethod m_choiceMethod; // 0x54
	// MPropertyFriendlyName "Change Selection"
	ChoiceChangeMethod m_choiceChangeMethod; // 0x58
	// MPropertyGroupName "Blending"
	// MPropertyFriendlyName "Blend Method"
	// MPropertyAttrChangeCallback
	ChoiceBlendMethod m_blendMethod; // 0x5c
	// MPropertyGroupName "Blending"
	// MPropertyFriendlyName "Blend Duration"
	// MPropertyAttrStateCallback
	float m_blendTime; // 0x60
	// MPropertyGroupName "Blending"
	// MPropertyFriendlyName "Cross Fade"
	bool m_bCrossFade; // 0x64
	// MPropertyFriendlyName "Reset On Selection"
	// MPropertyAttrChangeCallback
	bool m_bResetChosen; // 0x65
	// MPropertyFriendlyName "Don't Reset Same Selection"
	// MPropertyAttrStateCallback
	bool m_bDontResetSameSelection; // 0x66
};

// Aligment: 24
// Size: 176
struct VPhysXJoint_t
{
public:
	uint16_t m_nType; // 0x0
	uint16_t m_nBody1; // 0x2
	uint16_t m_nBody2; // 0x4
	uint16_t m_nFlags; // 0x6
	CTransform m_Frame1; // 0x10
	CTransform m_Frame2; // 0x30
	bool m_bEnableCollision; // 0x50
	bool m_bEnableLinearLimit; // 0x51
	VPhysXRange_t m_LinearLimit; // 0x54
	bool m_bEnableLinearMotor; // 0x5c
	Vector m_vLinearTargetVelocity; // 0x60
	float m_flMaxForce; // 0x6c
	bool m_bEnableSwingLimit; // 0x70
	VPhysXRange_t m_SwingLimit; // 0x74
	bool m_bEnableTwistLimit; // 0x7c
	VPhysXRange_t m_TwistLimit; // 0x80
	bool m_bEnableAngularMotor; // 0x88
	Vector m_vAngularTargetVelocity; // 0x8c
	float m_flMaxTorque; // 0x98
	float m_flLinearFrequency; // 0x9c
	float m_flLinearDampingRatio; // 0xa0
	float m_flAngularFrequency; // 0xa4
	float m_flAngularDampingRatio; // 0xa8
	float m_flFriction; // 0xac
};

// Aligment: 3
// Size: 16
class CDrawCullingData
{
public:
	Vector m_vConeApex; // 0x0
	int8[3] m_ConeAxis; // 0xc
	int8_t m_ConeCutoff; // 0xf
};

// Aligment: 5
// Size: 56
class CFutureVelocityMetric : public CMotionMetricBase
{
public:
	// MPropertyFriendlyName "Distance"
	float m_flDistance; // 0x28
	// MPropertyFriendlyName "Stopping Distance"
	float m_flStoppingDistance; // 0x2c
	// MPropertyFriendlyName "Mode"
	// MPropertyAttrChangeCallback
	VelocityMetricMode m_eMode; // 0x30
	// MPropertyFriendlyName "Auto-Calculate target speed"
	// MPropertyAttrChangeCallback
	// MPropertyAttrStateCallback
	bool m_bAutoTargetSpeed; // 0x31
	// MPropertyFriendlyName "Target Speed"
	// MPropertyAttrStateCallback
	float m_flManualTargetSpeed; // 0x34
};

// Aligment: 10
// Size: 120
class CFootAdjustmentAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	CAnimNodeConnection m_inputConnection; // 0x38
	// MPropertyFriendlyName "Turn to Face"
	// MPropertyAttributeChoiceName "FloatParameter"
	AnimParamID m_facingTarget; // 0x40
	// MPropertyFriendlyName "Reset Child"
	bool m_bResetChild; // 0x44
	// MPropertyFriendlyName "Animation Driven"
	// MPropertyAttrChangeCallback
	bool m_bAnimationDriven; // 0x45
	// MPropertyFriendlyName "Base Anim Clips"
	// MPropertyGroupName "Anim Driven Settings"
	// MPropertyAttributeChoiceName "Sequence"
	// MPropertyAttrStateCallback
	CUtlString m_baseClipName; // 0x48
	// MPropertyFriendlyName "Clips"
	// MPropertyGroupName "Anim Driven Settings"
	// MPropertyAttributeChoiceName "Sequence"
	// MPropertyAttrStateCallback
	CUtlVector< CUtlString > m_clips; // 0x50
	// MPropertyFriendlyName "Turn Time Min"
	// MPropertyGroupName "Procedural Settings"
	// MPropertyAttrStateCallback
	float m_flTurnTimeMin; // 0x68
	// MPropertyFriendlyName "Turn Time Max"
	// MPropertyGroupName "Procedural Settings"
	// MPropertyAttrStateCallback
	float m_flTurnTimeMax; // 0x6c
	// MPropertyFriendlyName "Step Height Max"
	// MPropertyGroupName "Procedural Settings"
	// MPropertyAttrStateCallback
	float m_flStepHeightMax; // 0x70
	// MPropertyFriendlyName "Step Height Max Angle"
	// MPropertyGroupName "Procedural Settings"
	// MPropertyAttrStateCallback
	float m_flStepHeightMaxAngle; // 0x74
};

// Aligment: 8
// Size: 144
class CAttachment
{
public:
	CUtlString m_name; // 0x0
	CUtlString[3] m_influenceNames; // 0x8
	Quaternion[3] m_vInfluenceRotations; // 0x20
	Vector[3] m_vInfluenceOffsets; // 0x50
	float32[3] m_influenceWeights; // 0x74
	bool[3] m_bInfluenceRootTransform; // 0x80
	uint8_t m_nInfluences; // 0x83
	bool m_bIgnoreRotation; // 0x84
};

// Aligment: 8
// Size: 64
class CSeqPoseSetting
{
public:
	CBufferString m_sPoseParameter; // 0x0
	CBufferString m_sAttachment; // 0x10
	CBufferString m_sReferenceSequence; // 0x20
	float m_flValue; // 0x30
	bool m_bX; // 0x34
	bool m_bY; // 0x35
	bool m_bZ; // 0x36
	int32_t m_eType; // 0x38
};

// Aligment: 4
// Size: 200
class CFootPinningUpdateNode : public CUnaryUpdateNode, CAnimUpdateNodeBase
{
public:
	FootPinningPoseOpFixedData_t m_poseOpFixedData; // 0x70
	FootPinningTimingSource m_eTimingSource; // 0xa0
	CUtlVector< CAnimParamHandle > m_params; // 0xa8
	bool m_bResetChild; // 0xc0
};

// Aligment: 2
// Size: 32
class CMorphData
{
public:
	CUtlString m_name; // 0x0
	CUtlVector< CMorphRectData > m_morphRectDatas; // 0x8
};

// Aligment: 3
// Size: 40
struct ModelBoneFlexDriver_t
{
public:
	CUtlString m_boneName; // 0x0
	uint32_t m_boneNameToken; // 0x8
	CUtlVector< ModelBoneFlexDriverControl_t > m_controls; // 0x10
};

// Aligment: 4
// Size: 80
class CPathMetric : public CMotionMetricBase
{
public:
	// MPropertyFriendlyName "Distance"
	float m_flDistance; // 0x28
	// MPropertyFriendlyName "Samples Times"
	CUtlVector< float32 > m_pathSamples; // 0x30
	// MPropertyFriendlyName "Extrapolate Movement"
	// MPropertyAttrChangeCallback
	bool m_bExtrapolateMovement; // 0x48
	// MPropertyFriendlyName "Min Extrapolation Speed"
	// MPropertyAttrStateCallback
	float m_flMinExtrapolationSpeed; // 0x4c
};

// Aligment: 1
// Size: 4
class AnimStateID
{
public:
	uint32_t m_id; // 0x0
};

// Aligment: 8
// Size: 8
class CSeqAutoLayerFlag
{
public:
	bool m_bPost; // 0x0
	bool m_bSpline; // 0x1
	bool m_bXFade; // 0x2
	bool m_bNoBlend; // 0x3
	bool m_bLocal; // 0x4
	bool m_bPose; // 0x5
	bool m_bFetchFrame; // 0x6
	bool m_bSubtract; // 0x7
};

// Aligment: 5
// Size: 48
class CMotionParameter
{
public:
	CUtlString m_name; // 0x18
	AnimParamID m_id; // 0x20
	float m_flMinValue; // 0x24
	float m_flMaxValue; // 0x28
	int32_t m_nSamples; // 0x2c
};

// Aligment: 3
// Size: 32
class CModelConfigList
{
public:
	bool m_bHideMaterialGroupInTools; // 0x0
	bool m_bHideRenderColorInTools; // 0x1
	CUtlVector< CModelConfig* > m_Configs; // 0x8
};

// Aligment: 0
// Size: 80
class CBlockSelectionMetricEvaluator : public CMotionMetricEvaluator
{
public:
// <no members described>
};

// Aligment: 4
// Size: 128
class CSingleFrameUpdateNode : public CLeafUpdateNode, CAnimUpdateNodeBase
{
public:
	CUtlVector< CSmartPtr< CAnimActionUpdater > > m_actions; // 0x58
	CPoseHandle m_hPoseCacheHandle; // 0x70
	HSequence m_hSequence; // 0x74
	float m_flCycle; // 0x78
};

// Aligment: 1
// Size: 40
class CAnimGraphNetworkSettings : public CAnimGraphSettingsGroup
{
public:
	// MPropertyFriendlyName "Enable Networking"
	bool m_bNetworkingEnabled; // 0x20
};

// Aligment: 7
// Size: 72
class CLookComponentUpdater : public CAnimComponentUpdater
{
public:
	CAnimParamHandle m_hLookHeading; // 0x34
	CAnimParamHandle m_hLookHeadingVelocity; // 0x36
	CAnimParamHandle m_hLookPitch; // 0x38
	CAnimParamHandle m_hLookDirection; // 0x3a
	CAnimParamHandle m_hLookTarget; // 0x3c
	CAnimParamHandle m_hLookTargetWorldSpace; // 0x3e
	bool m_bNetworkLookTarget; // 0x40
};

// Aligment: 2
// Size: 88
class CDampedValueComponent : public CAnimComponentBase
{
public:
	// MPropertyFriendlyName "Name"
	CUtlString m_name; // 0x38
	// MPropertyFriendlyName "Items"
	// MPropertyAutoExpandSelf
	CUtlVector< CDampedValueItem > m_items; // 0x40
};

// Aligment: 0
// Size: 40
class CBlockSelectionMetric : public CMotionMetricBase
{
public:
// <no members described>
};

// Aligment: 1
// Size: 4
class AnimNodeID
{
public:
	uint32_t m_id; // 0x0
};

// Aligment: 4
// Size: 144
struct FollowAttachmentSettings_t
{
public:
	CAnimAttachment m_attachment; // 0x0
	int32_t m_boneIndex; // 0x80
	bool m_bMatchTranslation; // 0x84
	bool m_bMatchRotation; // 0x85
};

// Aligment: 2
// Size: 4
class MotionIndex
{
public:
	uint16_t m_nGroup; // 0x0
	uint16_t m_nMotion; // 0x2
};

// Aligment: 2
// Size: 32
class WeightList
{
public:
	CUtlString m_name; // 0x0
	CUtlVector< float32 > m_weights; // 0x8
};

// Aligment: 2
// Size: 2
class CAnimParamHandle
{
public:
	AnimParamType_t m_type; // 0x0
	uint8_t m_index; // 0x1
};

// Aligment: 0
// Size: 104
class CRootUpdateNode : public CUnaryUpdateNode, CAnimUpdateNodeBase
{
public:
// <no members described>
};

// Aligment: 7
// Size: 168
class CAnimEncodeDifference
{
public:
	CUtlVector< CAnimBoneDifference > m_boneArray; // 0x0
	CUtlVector< CAnimMorphDifference > m_morphArray; // 0x18
	CUtlVector< CAnimUserDifference > m_userArray; // 0x30
	CUtlVector< uint8 > m_bHasRotationBitArray; // 0x48
	CUtlVector< uint8 > m_bHasMovementBitArray; // 0x60
	CUtlVector< uint8 > m_bHasMorphBitArray; // 0x78
	CUtlVector< uint8 > m_bHasUserBitArray; // 0x90
};

// Aligment: 1
// Size: 40
class CAnimStateList
{
public:
	CUtlVector< CAnimState* > m_states; // 0x10
};

// Aligment: 2
// Size: 8
struct LookAtBone_t
{
public:
	int32_t m_index; // 0x0
	float m_weight; // 0x4
};

// Aligment: 4
// Size: 152
class CStanceOverrideUpdateNode : public CUnaryUpdateNode, CAnimUpdateNodeBase
{
public:
	CUtlVector< StanceInfo_t > m_footStanceInfo; // 0x68
	CAnimUpdateNodeRef m_pStanceSourceNode; // 0x80
	CAnimParamHandle m_hParameter; // 0x90
	StanceOverrideMode m_eMode; // 0x94
};

// Aligment: 2
// Size: 136
class CVectorAnimParameter : public CAnimParameterBase
{
public:
	// MPropertyFriendlyName "Default Value"
	Vector m_defaultValue; // 0x78
	// MPropertyFriendlyName "Interpolate"
	bool m_bInterpolate; // 0x84
};

// Aligment: 5
// Size: 112
class CAnimGraphDebugReplay
{
public:
	CUtlString m_animGraphFileName; // 0x40
	CUtlVector< CSmartPtr< CAnimReplayFrame > > m_frameList; // 0x48
	int32_t m_startIndex; // 0x60
	int32_t m_writeIndex; // 0x64
	int32_t m_frameCount; // 0x68
};

// Aligment: 0
// Size: 32
class CAnimGraphSettingsGroup
{
public:
// <no members described>
};

// Aligment: 2
// Size: 8
class CSeqTransition
{
public:
	float m_flFadeInTime; // 0x0
	float m_flFadeOutTime; // 0x4
};

// Aligment: 4
// Size: 80
class CParameterCondition : public CConditionBase
{
public:
	AnimParamID m_paramID; // 0x28
	Comparison_t m_comparisonOp; // 0x2c
	CAnimVariant m_comparisonValue; // 0x30
	CUtlString m_comparisonString; // 0x48
};

// Aligment: 2
// Size: 288
struct AnimationSnapshot_t : public AnimationSnapshotBase_t
{
public:
	int32_t m_nEntIndex; // 0x110
	CUtlString m_modelName; // 0x118
};

// Aligment: 7
// Size: 88
class CMotionGraph
{
public:
	CParamSpanUpdater m_paramSpans; // 0x10
	CUtlVector< TagSpan_t > m_tags; // 0x28
	CSmartPtr< CMotionNode > m_pRootNode; // 0x40
	int32_t m_nParameterCount; // 0x48
	int32_t m_nConfigStartIndex; // 0x4c
	int32_t m_nConfigCount; // 0x50
	bool m_bLoop; // 0x54
};

// Aligment: 4
// Size: 56
class CAnimTagBase
{
public:
	// MPropertyFriendlyName "Name"
	// MPropertySortPriority "100"
	CUtlString m_name; // 0x20
	// MPropertyHideField
	CUtlString m_group; // 0x28
	// MPropertyHideField
	AnimTagID m_tagID; // 0x30
	// MPropertyHideField
	bool m_bIsReferenced; // 0x34
};

// Aligment: 5
// Size: 56
class CAnimComponentBase
{
public:
	// MPropertyHideField
	CUtlString m_group; // 0x18
	// MPropertyHideField
	AnimComponentID m_id; // 0x28
	// MPropertyFriendlyName "Start Enabled"
	bool m_bStartEnabled; // 0x2c
	// MPropertyFriendlyName "Priority"
	int32_t m_nPriority; // 0x30
	// MPropertyFriendlyName "Network Mode"
	AnimNodeNetworkMode m_networkMode; // 0x34
};

// Aligment: 17
// Size: 68
struct HitReactFixedSettings_t
{
public:
	int32_t m_nWeightListIndex; // 0x0
	int32_t m_nEffectedBoneCount; // 0x4
	float m_flMaxImpactForce; // 0x8
	float m_flMinImpactForce; // 0xc
	float m_flWhipImpactScale; // 0x10
	float m_flCounterRotationScale; // 0x14
	float m_flDistanceFadeScale; // 0x18
	float m_flPropagationScale; // 0x1c
	float m_flWhipDelay; // 0x20
	float m_flSpringStrength; // 0x24
	float m_flWhipSpringStrength; // 0x28
	float m_flMaxAngleRadians; // 0x2c
	int32_t m_nHipBoneIndex; // 0x30
	float m_flHipBoneTranslationScale; // 0x34
	float m_flHipDipSpringStrength; // 0x38
	float m_flHipDipImpactScale; // 0x3c
	float m_flHipDipDelay; // 0x40
};

// Aligment: 1
// Size: 112
class CStanceScaleUpdateNode : public CUnaryUpdateNode, CAnimUpdateNodeBase
{
public:
	CAnimParamHandle m_hParam; // 0x68
};

// Aligment: 1
// Size: 16
struct IKBoneNameAndIndex_t
{
public:
	// MPropertyAttributeChoiceName "Bone"
	CUtlString m_Name; // 0x0
};

// Aligment: 2
// Size: 16
struct StanceInfo_t
{
public:
	Vector m_vPosition; // 0x0
	float m_flDirection; // 0xc
};

// Aligment: 10
// Size: 88
struct PermModelInfo_t
{
public:
	uint32_t m_nFlags; // 0x0
	Vector m_vHullMin; // 0x4
	Vector m_vHullMax; // 0x10
	Vector m_vViewMin; // 0x1c
	Vector m_vViewMax; // 0x28
	float m_flMass; // 0x34
	Vector m_vEyePosition; // 0x38
	float m_flMaxEyeDeflection; // 0x44
	CUtlString m_sSurfaceProperty; // 0x48
	CUtlString m_keyValueText; // 0x50
};

// Aligment: 11
// Size: 11
class CSeqSeqDescFlag
{
public:
	bool m_bLooping; // 0x0
	bool m_bSnap; // 0x1
	bool m_bAutoplay; // 0x2
	bool m_bPost; // 0x3
	bool m_bHidden; // 0x4
	bool m_bMulti; // 0x5
	bool m_bLegacyDelta; // 0x6
	bool m_bLegacyWorldspace; // 0x7
	bool m_bLegacyCyclepose; // 0x8
	bool m_bLegacyRealtime; // 0x9
	bool m_bModelDoc; // 0xa
};

// Aligment: 0
// Size: 40
class CConditionBase
{
public:
// <no members described>
};

// Aligment: 6
// Size: 168
class CSequenceUpdateNode : public CLeafUpdateNode, CAnimUpdateNodeBase
{
public:
	CParamSpanUpdater m_paramSpans; // 0x60
	CUtlVector< TagSpan_t > m_tags; // 0x78
	HSequence m_hSequence; // 0x94
	float m_playbackSpeed; // 0x98
	float m_duration; // 0x9c
	bool m_bLoop; // 0xa0
};

// Aligment: 8
// Size: 160
struct VPhysXCollisionAttributes_t
{
public:
	uint32_t m_CollisionGroup; // 0x0
	CUtlVector< uint32 > m_InteractAs; // 0x8
	CUtlVector< uint32 > m_InteractWith; // 0x20
	CUtlVector< uint32 > m_InteractExclude; // 0x38
	CUtlString m_CollisionGroupString; // 0x50
	CUtlVector< CUtlString > m_InteractAsStrings; // 0x58
	CUtlVector< CUtlString > m_InteractWithStrings; // 0x70
	CUtlVector< CUtlString > m_InteractExcludeStrings; // 0x88
};

// Aligment: 2
// Size: 4
class ConfigIndex
{
public:
	uint16_t m_nGroup; // 0x0
	uint16_t m_nConfig; // 0x2
};

// Aligment: 8
// Size: 200
class CJumpHelperAnimNode : public CSequenceAnimNode, CAnimNodeBase
{
public:
	// MPropertyFriendlyName "Target Parameter"
	// MPropertyAttributeChoiceName "VectorParameter"
	AnimParamID m_targetParamID; // 0xb0
	// MPropertySuppressField
	float m_flJumpStartCycle; // 0xb4
	// MPropertySuppressField
	float m_flJumpDuration; // 0xb8
	// MPropertyFriendlyName "Translate X"
	bool m_bTranslateX; // 0xbc
	// MPropertyFriendlyName "Translate Y"
	bool m_bTranslateY; // 0xbd
	// MPropertyFriendlyName "Translate Z"
	bool m_bTranslateZ; // 0xbe
	// MPropertyFriendlyName "Apply Speed Scale"
	bool m_bScaleSpeed; // 0xbf
	// MPropertyFriendlyName "Correction Method"
	JumpCorrectionMethod m_eCorrectionMethod; // 0xc0
};

// Aligment: 6
// Size: 112
struct AnimationDecodeDebugDumpElement_t
{
public:
	int32_t m_nEntityIndex; // 0x0
	CUtlString m_modelName; // 0x8
	CUtlVector< CUtlString > m_poseParams; // 0x10
	CUtlVector< CUtlString > m_decodeOps; // 0x28
	CUtlVector< CUtlString > m_internalOps; // 0x40
	CUtlVector< CUtlString > m_decodedAnims; // 0x58
};

// Aligment: 1
// Size: 272
class CAnimScriptManager
{
public:
	CUtlVector< ScriptInfo_t > m_scriptInfo; // 0x10
};

// Aligment: 0
// Size: 40
class CCurrentVelocityMetric : public CMotionMetricBase
{
public:
// <no members described>
};

// Aligment: 4
// Size: 32
class CAnimActivity
{
public:
	CBufferString m_name; // 0x0
	int32_t m_nActivity; // 0x10
	int32_t m_nFlags; // 0x14
	int32_t m_nWeight; // 0x18
};

// Aligment: 5
// Size: 128
class CMotionSearchNode
{
public:
	CUtlVector< CMotionSearchNode* > m_children; // 0x0
	CVectorQuantizer m_quantizer; // 0x18
	CUtlVector< CUtlVector< SampleCode > > m_sampleCodes; // 0x38
	CUtlVector< CUtlVector< int32 > > m_sampleIndices; // 0x50
	CUtlVector< int32 > m_selectableSamples; // 0x68
};

// Aligment: 5
// Size: 32
class CMotionGraphConfig
{
public:
	float32[4] m_paramValues; // 0x0
	float m_flDuration; // 0x10
	MotionIndex m_nMotionIndex; // 0x14
	int32_t m_nSampleStart; // 0x18
	int32_t m_nSampleCount; // 0x1c
};

// Aligment: 1
// Size: 80
class CTaskStatusAnimTag : public CAnimTagBase
{
public:
	// MPropertyHideField
	CUtlString m_identifierString; // 0x40
};

// Aligment: 4
// Size: 64
class CCachedPose
{
public:
	CUtlVector< CTransform > m_transforms; // 0x8
	CUtlVector< float32 > m_morphWeights; // 0x20
	HSequence m_hSequence; // 0x38
	float m_flCycle; // 0x3c
};

// Aligment: 1
// Size: 8
class SampleCode
{
public:
	uint8[8] m_subCode; // 0x0
};

// Aligment: 5
// Size: 216
class CAnimEncodedFrames
{
public:
	CBufferString m_fileName; // 0x0
	int32_t m_nFrames; // 0x10
	int32_t m_nFramesPerBlock; // 0x14
	CUtlVector< CAnimFrameBlockAnim > m_frameblockArray; // 0x18
	CAnimEncodeDifference m_usageDifferences; // 0x30
};

// Aligment: 5
// Size: 96
class CSeqBoneMaskList
{
public:
	CBufferString m_sName; // 0x0
	CUtlVector< int16 > m_nLocalBoneArray; // 0x10
	CUtlVector< float32 > m_flBoneWeightArray; // 0x28
	float m_flDefaultMorphCtrlWeight; // 0x40
	CUtlVector< CUtlPair< CBufferString, float32 > > m_morphCtrlWeightArray; // 0x48
};

// Aligment: 1
// Size: 4
class AnimNodeOutputID
{
public:
	uint32_t m_id; // 0x0
};

// Aligment: 2
// Size: 48
class CAnimNodePath
{
public:
	AnimNodeID[11] m_path; // 0x0
	int32_t m_nCount; // 0x2c
};

// Aligment: 2
// Size: 24
class CStateAction
{
public:
	CSmartPtr< CAnimActionBase > m_pAction; // 0x8
	StateActionBehavior m_eBehavior; // 0x10
};

// Aligment: 7
// Size: 128
class CLeanMatrixAnimNode : public CAnimNodeBase
{
public:
	// MPropertyFriendlyName "Sequence"
	// MPropertyAttributeChoiceName "Sequence"
	CUtlString m_sequenceName; // 0x40
	// MPropertyFriendlyName "Max Value"
	float m_flMaxValue; // 0x48
	// MPropertyFriendlyName "Blend Source"
	AnimVectorSource m_blendSource; // 0x4c
	// MPropertyFriendlyName "Parameter"
	// MPropertyAttributeChoiceName "VectorParameter"
	AnimParamID m_param; // 0x50
	// MPropertyFriendlyName "Vertical Axis"
	Vector m_verticalAxisDirection; // 0x54
	// MPropertyFriendlyName "Horizontal Axis"
	Vector m_horizontalAxisDirection; // 0x60
	// MPropertyFriendlyName "Damping"
	CAnimInputDamping m_damping; // 0x70
};

// Aligment: 7
// Size: 40
class CFootLockItem
{
public:
	// MPropertyFriendlyName "Foot"
	// MPropertyAttributeChoiceName "Foot"
	CUtlString m_footName; // 0x0
	// MPropertyFriendlyName "Target Bone"
	// MPropertyAttributeChoiceName "Bone"
	CUtlString m_targetBoneName; // 0x8
	// MPropertyFriendlyName "IK Chain"
	// MPropertyAttributeChoiceName "IKChain"
	CUtlString m_ikChainName; // 0x10
	// MPropertyFriendlyName "Disable Tag"
	// MPropertyAttributeChoiceName "Tag"
	AnimTagID m_disableTagID; // 0x18
	// MPropertyFriendlyName "Max Left Rotation"
	// MPropertyAttributeRange "0 180"
	float m_flMaxRotationLeft; // 0x1c
	// MPropertyFriendlyName "Max Right Rotation"
	// MPropertyAttributeRange "0 180"
	float m_flMaxRotationRight; // 0x20
	// MPropertyFriendlyName "Footstep Landed Tag"
	// MPropertyAttributeChoiceName "Tag"
	AnimTagID m_footstepLandedTag; // 0x24
};

// Aligment: 3
// Size: 136
class CIntAnimParameter : public CAnimParameterBase
{
public:
	// MPropertyFriendlyName "Default Value"
	int32_t m_defaultValue; // 0x78
	// MPropertyFriendlyName "Min Value"
	int32_t m_minValue; // 0x7c
	// MPropertyFriendlyName "Max Value"
	int32_t m_maxValue; // 0x80
};

// Aligment: 0
// Size: 96
class CInputStreamUpdateNode : public CLeafUpdateNode, CAnimUpdateNodeBase
{
public:
// <no members described>
};

// Aligment: 4
// Size: 56
class CAnimNodeBase
{
public:
	// MPropertyFriendlyName "Name"
	// MPropertySortPriority "100"
	CUtlString m_sName; // 0x20
	// MPropertyHideField
	Vector2D m_vecPosition; // 0x28
	// MPropertyHideField
	AnimNodeID m_nNodeID; // 0x30
	// MPropertyFriendlyName "Network Mode"
	AnimNodeNetworkMode m_networkMode; // 0x34
};

// Aligment: 0
// Size: 4
class CFootCycle : public CCycleBase
{
public:
// <no members described>
};

// Aligment: 7
// Size: 88
class CTurnHelperAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	CAnimNodeConnection m_inputConnection; // 0x38
	// MPropertyFriendlyName "Turn to Face"
	AnimValueSource m_facingTarget; // 0x40
	// MPropertyFriendlyName "Turn Start Time"
	float m_turnStartTime; // 0x44
	// MPropertyFriendlyName "Turn Duration"
	float m_turnDuration; // 0x48
	// MPropertyFriendlyName "Match Child Duration"
	bool m_bMatchChildDuration; // 0x4c
	// MPropertyFriendlyName "Use Manual Turn Offset"
	bool m_bUseManualTurnOffset; // 0x4d
	// MPropertyFriendlyName "Manual Turn Offset"
	float m_manualTurnOffset; // 0x50
};

// Aligment: 2
// Size: 88
class CAnimScriptComponent : public CAnimComponentBase
{
public:
	// MPropertyFriendlyName "Name"
	// MPropertySortPriority "100"
	CUtlString m_sName; // 0x40
	// MPropertyFriendlyName "Script File"
	// MPropertyAttributeEditor "AssetBrowse( as )"
	// MPropertyAttrChangeCallback
	CUtlString m_scriptFilename; // 0x48
};

// Aligment: 3
// Size: 72
class CCycleControlAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	CAnimNodeConnection m_inputConnection; // 0x38
	// MPropertyFriendlyName "Blend Source"
	// MPropertyAttrChangeCallback
	// MPropertyAttrStateCallback
	AnimValueSource m_valueSource; // 0x40
	// MPropertyFriendlyName "Parameter"
	// MPropertyAttributeChoiceName "FloatParameter"
	AnimParamID m_param; // 0x44
};

// Aligment: 6
// Size: 120
class CSceneObjectData
{
public:
	Vector m_vMinBounds; // 0x0
	Vector m_vMaxBounds; // 0xc
	CUtlVector< CMaterialDrawDescriptor > m_drawCalls; // 0x18
	CUtlVector< AABB_t > m_drawBounds; // 0x30
	CUtlVector< CMeshletDescriptor > m_meshlets; // 0x48
	Vector4D m_vTintColor; // 0x60
};

// Aligment: 1
// Size: 72
class CSequenceFinishedAnimTag : public CAnimTagBase
{
public:
	// MPropertyFriendlyName "Sequence"
	// MPropertyAttributeChoiceName "Sequence"
	CUtlString m_sequenceName; // 0x40
};

// Aligment: 12
// Size: 120
class CAnimParameterBase
{
public:
	// MPropertyFriendlyName "Name"
	// MPropertySortPriority "100"
	CAnimGraphSymbolWithStorage m_name; // 0x18
	// MPropertyHideField
	CUtlString m_group; // 0x38
	// MPropertyHideField
	AnimParamID m_id; // 0x40
	// MPropertyHideField
	// MPropertyAttrChangeCallback
	CUtlString m_componentName; // 0x58
	// MPropertyFriendlyName "Preview Button"
	AnimParamButton_t m_previewButton; // 0x64
	// MPropertyFriendlyName "Force Latest Value"
	bool m_bUseMostRecentValue; // 0x68
	// MPropertyFriendlyName "Auto Reset"
	bool m_bAutoReset; // 0x69
	// MPropertyFriendlyName "Network"
	AnimParamNetworkSetting m_eNetworkSetting; // 0x6c
	// MPropertyFriendlyName "Game Writable"
	// MPropertyGroupName "+Permissions"
	// MPropertyAttrStateCallback
	bool m_bGameWritable; // 0x70
	// MPropertyFriendlyName "Graph Writable"
	// MPropertyGroupName "+Permissions"
	// MPropertyAttrStateCallback
	bool m_bGraphWritable; // 0x71
	// MPropertyHideField
	bool m_bIsReferenced; // 0x72
	// MPropertyHideField
	bool m_bNetworkingRequested; // 0x73
};

// Aligment: 3
// Size: 72
class CSetFacingAnimNode : public CAnimNodeBase
{
public:
	// MPropertyHideField
	CAnimNodeConnection m_inputConnection; // 0x38
	// MPropertyFriendlyName "Facing Mode"
	FacingMode m_facingMode; // 0x40
	// MPropertyFriendlyName "Reset Child"
	bool m_bResetChild; // 0x44
};

// Aligment: 1
// Size: 112
class CSlowDownOnSlopesUpdateNode : public CUnaryUpdateNode, CAnimUpdateNodeBase
{
public:
	float m_flSlowDownStrength; // 0x68
};

// Aligment: 0
// Size: 96
class CZeroPoseUpdateNode : public CLeafUpdateNode, CAnimUpdateNodeBase
{
public:
// <no members described>
};

// Aligment: 3
// Size: 32
class CAnimFrameBlockAnim
{
public:
	int32_t m_nStartFrame; // 0x0
	int32_t m_nEndFrame; // 0x4
	CUtlVector< int32 > m_segmentIndexArray; // 0x8
};

// Aligment: 3
// Size: 12
struct FeFitInfluence_t
{
public:
	uint32_t nVertexNode; // 0x0
	float flWeight; // 0x4
	uint32_t nMatrixNode; // 0x8
};

// Aligment: 1
// Size: 16
struct VertexPositionColor_t
{
public:
	Vector m_vPosition; // 0x0
};

// Aligment: 5
// Size: 128
struct FeSimdTri_t
{
public:
	uint32[4][3] nNode; // 0x0
	fltx4 w1; // 0x30
	fltx4 w2; // 0x40
	fltx4 v1x; // 0x50
	FourVectors2D v2; // 0x60
};

// Aligment: 4
// Size: 4
struct RnHalfEdge_t
{
public:
	uint8_t m_nNext; // 0x0
	uint8_t m_nTwin; // 0x1
	uint8_t m_nOrigin; // 0x2
	uint8_t m_nFace; // 0x3
};

// Aligment: 3
// Size: 8
struct FeFitWeight_t
{
public:
	float flWeight; // 0x0
	uint16_t nNode; // 0x4
	uint16_t nDummy; // 0x6
};

// Aligment: 5
// Size: 20
struct FeRodConstraint_t
{
public:
	uint16[2] nNode; // 0x0
	float flMaxDist; // 0x4
	float flMinDist; // 0x8
	float flWeight0; // 0xc
	float flRelaxationFactor; // 0x10
};

// Aligment: 1
// Size: 4
struct FeTreeChildren_t
{
public:
	uint16[2] nChild; // 0x0
};

// Aligment: 3
// Size: 16
struct RnShapeDesc_t
{
public:
	uint32_t m_nCollisionAttributeIndex; // 0x0
	uint32_t m_nSurfacePropertyIndex; // 0x4
	CUtlString m_UserFriendlyName; // 0x8
};

// Aligment: 2
// Size: 8
struct FeSoftParent_t
{
public:
	int32_t nParent; // 0x0
	float flAlpha; // 0x4
};

// Aligment: 2
// Size: 64
struct FeBuildTaperedCapsuleRigid_t : public FeTaperedCapsuleRigid_t
{
public:
	int32_t m_nPriority; // 0x30
	uint32_t m_nVertexMapHash; // 0x34
};

// Aligment: 6
// Size: 32
struct FeSphereRigid_t
{
public:
	fltx4 vSphere; // 0x0
	float flStickiness; // 0x10
	uint16_t nNode; // 0x14
	uint16_t nCollisionMask; // 0x16
	uint16_t nVertexMapIndex; // 0x18
	uint16_t nFlags; // 0x1a
};

// Aligment: 5
// Size: 24
struct constraint_breakableparams_t
{
public:
	float strength; // 0x0
	float forceLimit; // 0x4
	float torqueLimit; // 0x8
	float32[2] bodyMassScale; // 0xc
	bool isActive; // 0x14
};

// Aligment: 4
// Size: 96
class FourCovMatrices3
{
public:
	FourVectors m_vDiag; // 0x0
	fltx4 m_flXY; // 0x30
	fltx4 m_flXZ; // 0x40
	fltx4 m_flYZ; // 0x50
};

// Aligment: 5
// Size: 40
struct FeAxialEdgeBend_t
{
public:
	float te; // 0x0
	float tv; // 0x4
	float flDist; // 0x8
	float32[4] flWeight; // 0xc
	uint16[6] nNode; // 0x1c
};

// Aligment: 4
// Size: 8
struct FeNodeWindBase_t
{
public:
	uint16_t nNodeX0; // 0x0
	uint16_t nNodeX1; // 0x2
	uint16_t nNodeY0; // 0x4
	uint16_t nNodeY1; // 0x6
};

// Aligment: 4
// Size: 12
struct FeTwistConstraint_t
{
public:
	uint16_t nNodeOrient; // 0x0
	uint16_t nNodeEnd; // 0x2
	float flTwistRelax; // 0x4
	float flSwingRelax; // 0x8
};

// Aligment: 1
// Size: 4
struct FeSourceEdge_t
{
public:
	uint16[2] nNode; // 0x0
};

// Aligment: 2
// Size: 4
struct FeCtrlOsOffset_t
{
public:
	uint16_t nCtrlParent; // 0x0
	uint16_t nCtrlChild; // 0x2
};

// Aligment: 1
// Size: 1
struct RnFace_t
{
public:
	uint8_t m_nEdge; // 0x0
};

// Aligment: 1
// Size: 104
struct Dop26_t
{
public:
	float32[26] m_flSupport; // 0x0
};

// Aligment: 4
// Size: 24
class CovMatrix3
{
public:
	Vector m_vDiag; // 0x0
	float m_flXY; // 0xc
	float m_flXZ; // 0x10
	float m_flYZ; // 0x14
};

// Aligment: 12
// Size: 216
struct RnHull_t
{
public:
	Vector m_vCentroid; // 0x0
	float m_flMaxAngularRadius; // 0xc
	AABB_t m_Bounds; // 0x10
	Vector m_vOrthographicAreas; // 0x28
	matrix3x4_t m_MassProperties; // 0x34
	float m_flVolume; // 0x64
	CUtlVector< Vector > m_Vertices; // 0x68
	CUtlVector< RnHalfEdge_t > m_Edges; // 0x80
	CUtlVector< RnFace_t > m_Faces; // 0x98
	CUtlVector< RnPlane_t > m_Planes; // 0xb0
	uint32_t m_nFlags; // 0xc8
	CRegionSVM* m_pRegionSVM; // 0xd0
};

// Aligment: 5
// Size: 24
struct FeCollisionSphere_t
{
public:
	uint16_t nCtrlParent; // 0x0
	uint16_t nChildNode; // 0x2
	float m_flRFactor; // 0x4
	Vector m_vOrigin; // 0x8
	float flStickiness; // 0x14
};

// Aligment: 5
// Size: 28
struct FeTri_t
{
public:
	uint16[3] nNode; // 0x0
	float w1; // 0x8
	float w2; // 0xc
	float v1x; // 0x10
	Vector2D v2; // 0x14
};

// Aligment: 1
// Size: 24
class CFeVertexMapBuildArray
{
public:
	CUtlVector< FeVertexMapBuild_t* > m_Array; // 0x0
};

// Aligment: 6
// Size: 48
struct FeVertexMapBuild_t
{
public:
	CUtlString m_VertexMapName; // 0x0
	uint32_t m_nNameHash; // 0x8
	Color m_Color; // 0xc
	float m_flVolumetricSolveStrength; // 0x10
	int32_t m_nScaleSourceNode; // 0x14
	CUtlVector< float32 > m_Weights; // 0x18
};

// Aligment: 7
// Size: 32
struct FeNodeBase_t
{
public:
	uint16_t nNode; // 0x0
	uint16[3] nDummy; // 0x2
	uint16_t nNodeX0; // 0x8
	uint16_t nNodeX1; // 0xa
	uint16_t nNodeY0; // 0xc
	uint16_t nNodeY1; // 0xe
	QuaternionStorage qAdjust; // 0x10
};

// Aligment: 0
// Size: 8
class IPhysicsPlayerController
{
public:
// <no members described>
};

// Aligment: 3
// Size: 16
struct FeCtrlOffset_t
{
public:
	Vector vOffset; // 0x0
	uint16_t nCtrlParent; // 0xc
	uint16_t nCtrlChild; // 0xe
};

// Aligment: 8
// Size: 144
struct FeMorphLayerDepr_t
{
public:
	CUtlString m_Name; // 0x0
	uint32_t m_nNameHash; // 0x8
	CUtlVector< uint16 > m_Nodes; // 0x10
	CUtlVector< Vector > m_InitPos; // 0x28
	CUtlVector< float32 > m_Gravity; // 0x40
	CUtlVector< float32 > m_GoalStrength; // 0x58
	CUtlVector< float32 > m_GoalDamping; // 0x70
	uint32_t m_nFlags; // 0x88
};

// Aligment: 8
// Size: 64
struct FeBoxRigid_t
{
public:
	CTransform tmFrame2; // 0x0
	uint16_t nNode; // 0x20
	uint16_t nCollisionMask; // 0x22
	Vector vSize; // 0x24
	float flStickiness; // 0x30
	uint16_t nVertexMapIndex; // 0x34
	uint16_t nFlags; // 0x36
	float32[2] flReserved; // 0x38
};

// Aligment: 4
// Size: 28
struct FeStiffHingeBuild_t
{
public:
	float flMaxAngle; // 0x0
	float flStrength; // 0x4
	float32[3] flMotionBias; // 0x8
	uint16[3] nNode; // 0x14
};

// Aligment: 5
// Size: 28
struct FeCollisionPlane_t
{
public:
	uint16_t nCtrlParent; // 0x0
	uint16_t nChildNode; // 0x2
	RnPlane_t m_Plane; // 0x4
	float flStickiness; // 0x14
	float flStrength; // 0x18
};

// Aligment: 5
// Size: 12
struct FeRigidColliderIndices_t
{
public:
	uint16_t m_nTaperedCapsuleRigidIndex; // 0x0
	uint16_t m_nSphereRigidIndex; // 0x2
	uint16_t m_nBoxRigidIndex; // 0x4
	uint16[2] m_nCollisionSphereIndex; // 0x6
	uint16_t m_nCollisionPlaneIndex; // 0xa
};

// Aligment: 6
// Size: 48
struct CastSphereSATParams_t
{
public:
	Vector m_vRayStart; // 0x0
	Vector m_vRayDelta; // 0xc
	float m_flRadius; // 0x18
	float m_flMaxFraction; // 0x1c
	float m_flScale; // 0x20
	RnHull_t* m_pHull; // 0x28
};

// Aligment: 4
// Size: 24
struct FeKelagerBend2_t
{
public:
	float32[3] flWeight; // 0x0
	float flHeight0; // 0xc
	uint16[3] nNode; // 0x10
	uint16_t nReserved; // 0x16
};

// Aligment: 2
// Size: 32
class FourVectors2D
{
public:
	fltx4 x; // 0x0
	fltx4 y; // 0x10
};

// Aligment: 5
// Size: 20
struct FeSpringIntegrator_t
{
public:
	uint16[2] nNode; // 0x0
	float flSpringRestLength; // 0x4
	float flSpringConstant; // 0x8
	float flSpringDamping; // 0xc
	float flNodeWeight0; // 0x10
};

// Aligment: 4
// Size: 32
struct FeEffectDesc_t
{
public:
	CUtlString sName; // 0x0
	uint32_t nNameHash; // 0x8
	int32_t nType; // 0xc
	KeyValues3 m_Params; // 0x10
};

// Aligment: 2
// Size: 4
struct FeWeightedNode_t
{
public:
	uint16_t nNode; // 0x0
	uint16_t nWeight; // 0x2
};

// Aligment: 1
// Size: 12
struct RnWing_t
{
public:
	int32[3] m_nIndex; // 0x0
};

// Aligment: 3
// Size: 76
struct FeQuad_t
{
public:
	uint16[4] nNode; // 0x0
	float flSlack; // 0x8
	Vector4D[4] vShape; // 0xc
};

// Aligment: 7
// Size: 112
struct FeSimdNodeBase_t
{
public:
	uint16[4] nNode; // 0x0
	uint16[4] nNodeX0; // 0x8
	uint16[4] nNodeX1; // 0x10
	uint16[4] nNodeY0; // 0x18
	uint16[4] nNodeY1; // 0x20
	uint16[4] nDummy; // 0x28
	FourQuaternions qAdjust; // 0x30
};

// Aligment: 5
// Size: 80
struct FeSimdSpringIntegrator_t
{
public:
	uint16[4][2] nNode; // 0x0
	fltx4 flSpringRestLength; // 0x10
	fltx4 flSpringConstant; // 0x20
	fltx4 flSpringDamping; // 0x30
	fltx4 flNodeWeight0; // 0x40
};

// Aligment: 4
// Size: 304
struct FeSimdQuad_t
{
public:
	uint16[4][4] nNode; // 0x0
	fltx4 f4Slack; // 0x20
	FourVectors[4] vShape; // 0x30
	fltx4[4] f4Weights; // 0xf0
};

// Aligment: 5
// Size: 64
struct FeFitMatrix_t
{
public:
	CTransform bone; // 0x0
	Vector vCenter; // 0x20
	uint16_t nEnd; // 0x2c
	uint16_t nNode; // 0x2e
	uint16_t nBeginDynamic; // 0x30
};

// Aligment: 4
// Size: 32
struct RnNode_t
{
public:
	Vector m_vMin; // 0x0
	uint32_t m_nChildren; // 0xc
	Vector m_vMax; // 0x10
	uint32_t m_nTriangleOffset; // 0x1c
};

// Aligment: 4
// Size: 12
struct FeWorldCollisionParams_t
{
public:
	float flWorldFriction; // 0x0
	float flGroundFriction; // 0x4
	uint16_t nListBegin; // 0x8
	uint16_t nListEnd; // 0xa
};

// Aligment: 2
// Size: 48
class CRegionSVM
{
public:
	CUtlVector< RnPlane_t > m_Planes; // 0x0
	CUtlVector< uint32 > m_Nodes; // 0x18
};

// Aligment: 35
// Size: 156
class CFeJiggleBone
{
public:
	uint32_t m_nFlags; // 0x0
	float m_flLength; // 0x4
	float m_flTipMass; // 0x8
	float m_flYawStiffness; // 0xc
	float m_flYawDamping; // 0x10
	float m_flPitchStiffness; // 0x14
	float m_flPitchDamping; // 0x18
	float m_flAlongStiffness; // 0x1c
	float m_flAlongDamping; // 0x20
	float m_flAngleLimit; // 0x24
	float m_flMinYaw; // 0x28
	float m_flMaxYaw; // 0x2c
	float m_flYawFriction; // 0x30
	float m_flYawBounce; // 0x34
	float m_flMinPitch; // 0x38
	float m_flMaxPitch; // 0x3c
	float m_flPitchFriction; // 0x40
	float m_flPitchBounce; // 0x44
	float m_flBaseMass; // 0x48
	float m_flBaseStiffness; // 0x4c
	float m_flBaseDamping; // 0x50
	float m_flBaseMinLeft; // 0x54
	float m_flBaseMaxLeft; // 0x58
	float m_flBaseLeftFriction; // 0x5c
	float m_flBaseMinUp; // 0x60
	float m_flBaseMaxUp; // 0x64
	float m_flBaseUpFriction; // 0x68
	float m_flBaseMinForward; // 0x6c
	float m_flBaseMaxForward; // 0x70
	float m_flBaseForwardFriction; // 0x74
	float m_flRadius0; // 0x78
	float m_flRadius1; // 0x7c
	Vector m_vPoint0; // 0x80
	Vector m_vPoint1; // 0x8c
	uint16_t m_nCollisionMask; // 0x98
};

// Aligment: 2
// Size: 16
struct RnPlane_t
{
public:
	Vector m_vNormal; // 0x0
	float m_flOffset; // 0xc
};

// Aligment: 3
// Size: 16
struct FeNodeReverseOffset_t
{
public:
	Vector vOffset; // 0x0
	uint16_t nBoneCtrl; // 0xc
	uint16_t nTargetNode; // 0xe
};

// Aligment: 3
// Size: 16
struct FeEdgeDesc_t
{
public:
	uint16[2] nEdge; // 0x0
	uint16[2][2] nSide; // 0x4
	uint16[2] nVirtElem; // 0xc
};

// Aligment: 3
// Size: 12
struct FeAnimStrayRadius_t
{
public:
	uint16[2] nNode; // 0x0
	float flMaxDist; // 0x4
	float flRelaxationFactor; // 0x8
};

// Aligment: 6
// Size: 48
struct FeTaperedCapsuleRigid_t
{
public:
	fltx4[2] vSphere; // 0x0
	float flStickiness; // 0x20
	uint16_t nNode; // 0x24
	uint16_t nCollisionMask; // 0x26
	uint16_t nVertexMapIndex; // 0x28
	uint16_t nFlags; // 0x2a
};

// Aligment: 12
// Size: 56
struct FeVertexMapDesc_t
{
public:
	CUtlString sName; // 0x0
	uint32_t nNameHash; // 0x8
	uint32_t nColor; // 0xc
	uint32_t nFlags; // 0x10
	uint16_t nVertexBase; // 0x14
	uint16_t nVertexCount; // 0x16
	uint32_t nMapOffset; // 0x18
	uint32_t nNodeListOffset; // 0x1c
	Vector vCenterOfMass; // 0x20
	float flVolumetricSolveStrength; // 0x2c
	int16_t nScaleSourceNode; // 0x30
	uint16_t nNodeListCount; // 0x32
};

// Aligment: 4
// Size: 20
struct FeCtrlSoftOffset_t
{
public:
	uint16_t nCtrlParent; // 0x0
	uint16_t nCtrlChild; // 0x2
	Vector vOffset; // 0x4
	float flAlpha; // 0x10
};

// Aligment: 7
// Size: 136
class CFeMorphLayer
{
public:
	CUtlString m_Name; // 0x0
	uint32_t m_nNameHash; // 0x8
	CUtlVector< uint16 > m_Nodes; // 0x10
	CUtlVector< Vector > m_InitPos; // 0x28
	CUtlVector< float32 > m_Gravity; // 0x40
	CUtlVector< float32 > m_GoalStrength; // 0x58
	CUtlVector< float32 > m_GoalDamping; // 0x70
};

// Aligment: 8
// Size: 16
struct RnBlendVertex_t
{
public:
	uint16_t m_nWeight0; // 0x0
	uint16_t m_nIndex0; // 0x2
	uint16_t m_nWeight1; // 0x4
	uint16_t m_nIndex1; // 0x6
	uint16_t m_nWeight2; // 0x8
	uint16_t m_nIndex2; // 0xa
	uint16_t m_nFlags; // 0xc
	uint16_t m_nTargetIndex; // 0xe
};

// Aligment: 2
// Size: 24
struct VertexPositionNormal_t
{
public:
	Vector m_vPosition; // 0x0
	Vector m_vNormal; // 0xc
};

// Aligment: 8
// Size: 160
struct RnMesh_t
{
public:
	Vector m_vMin; // 0x0
	Vector m_vMax; // 0xc
	CUtlVector< RnNode_t > m_Nodes; // 0x18
	CUtlVectorSIMDPaddedVector m_Vertices; // 0x30
	CUtlVector< RnTriangle_t > m_Triangles; // 0x48
	CUtlVector< RnWing_t > m_Wings; // 0x60
	CUtlVector< uint8 > m_Materials; // 0x78
	Vector m_vOrthographicAreas; // 0x90
};

// Aligment: 3
// Size: 8
struct FeFollowNode_t
{
public:
	uint16_t nParentNode; // 0x0
	uint16_t nChildNode; // 0x2
	float flWeight; // 0x4
};

// Aligment: 12
// Size: 72
struct OldFeEdge_t
{
public:
	float32[3] m_flK; // 0x0
	float invA; // 0xc
	float t; // 0x10
	float flThetaRelaxed; // 0x14
	float flThetaFactor; // 0x18
	float c01; // 0x1c
	float c02; // 0x20
	float c03; // 0x24
	float c04; // 0x28
	float flAxialModelDist; // 0x2c
	float32[4] flAxialModelWeights; // 0x30
	uint16[4] m_nNode; // 0x40
};

// Aligment: 4
// Size: 208
class CFeNamedJiggleBone
{
public:
	CUtlString m_strParentBone; // 0x0
	CTransform m_transform; // 0x10
	uint32_t m_nJiggleParent; // 0x30
	CFeJiggleBone m_jiggleBone; // 0x34
};

// Aligment: 2
// Size: 28
struct RnCapsule_t
{
public:
	Vector[2] m_vCenter; // 0x0
	float m_flRadius; // 0x18
};

// Aligment: 4
// Size: 16
struct FeNodeIntegrator_t
{
public:
	float flPointDamping; // 0x0
	float flAnimationForceAttraction; // 0x4
	float flAnimationVertexAttraction; // 0x8
	float flGravity; // 0xc
};

// Aligment: 2
// Size: 16
struct FeProxyVertexMap_t
{
public:
	CUtlString m_Name; // 0x0
	float m_flWeight; // 0x8
};

// Aligment: 1
// Size: 12
struct RnTriangle_t
{
public:
	int32[3] m_nIndex; // 0x0
};

// Aligment: 3
// Size: 48
struct FeSimdAnimStrayRadius_t
{
public:
	uint16[4][2] nNode; // 0x0
	fltx4 flMaxDist; // 0x10
	fltx4 flRelaxationFactor; // 0x20
};

// Aligment: 2
// Size: 48
struct FeBuildSphereRigid_t : public FeSphereRigid_t
{
public:
	int32_t m_nPriority; // 0x20
	uint32_t m_nVertexMapHash; // 0x24
};

// Aligment: 2
// Size: 16
struct RnSphere_t
{
public:
	Vector m_vCenter; // 0x0
	float m_flRadius; // 0xc
};

// Aligment: 4
// Size: 64
struct constraint_hingeparams_t
{
public:
	Vector worldPosition; // 0x0
	Vector worldAxisDirection; // 0xc
	constraint_axislimit_t hingeAxis; // 0x18
	constraint_breakableparams_t constraint; // 0x28
};

// Aligment: 5
// Size: 80
struct FeSimdRodConstraint_t
{
public:
	uint16[4][2] nNode; // 0x0
	fltx4 f4MaxDist; // 0x10
	fltx4 f4MinDist; // 0x20
	fltx4 f4Weight0; // 0x30
	fltx4 f4RelaxationFactor; // 0x40
};

// Aligment: 4
// Size: 16
struct constraint_axislimit_t
{
public:
	float flMinRotation; // 0x0
	float flMaxRotation; // 0x4
	float flMotorTargetAngSpeed; // 0x8
	float flMotorMaxTorque; // 0xc
};

// Aligment: 5
// Size: 20
struct FeTaperedCapsuleStretch_t
{
public:
	uint16[2] nNode; // 0x0
	uint16_t nCollisionMask; // 0x4
	// MPropertySuppressField
	uint16_t nDummy; // 0x6
	float32[2] flRadius; // 0x8
	float flStickiness; // 0x10
};

// Aligment: 3
// Size: 20
struct FeBandBendLimit_t
{
public:
	float flDistMin; // 0x0
	float flDistMax; // 0x4
	uint16[6] nNode; // 0x8
};

// Aligment: 3
// Size: 164
class CFeIndexedJiggleBone
{
public:
	uint32_t m_nNode; // 0x0
	uint32_t m_nJiggleParent; // 0x4
	CFeJiggleBone m_jiggleBone; // 0x8
};

// Aligment: 2
// Size: 80
struct FeBuildBoxRigid_t : public FeBoxRigid_t
{
public:
	int32_t m_nPriority; // 0x40
	uint32_t m_nVertexMapHash; // 0x44
};

// Aligment: 100
// Size: 1536
struct PhysFeModelDesc_t
{
public:
	CUtlVector< uint32 > m_CtrlHash; // 0x0
	CUtlVector< CUtlString > m_CtrlName; // 0x18
	uint32_t m_nStaticNodeFlags; // 0x30
	uint32_t m_nDynamicNodeFlags; // 0x34
	float m_flLocalForce; // 0x38
	float m_flLocalRotation; // 0x3c
	uint16_t m_nNodeCount; // 0x40
	uint16_t m_nStaticNodes; // 0x42
	uint16_t m_nRotLockStaticNodes; // 0x44
	uint16_t m_nFirstPositionDrivenNode; // 0x46
	uint16_t m_nSimdTriCount1; // 0x48
	uint16_t m_nSimdTriCount2; // 0x4a
	uint16_t m_nSimdQuadCount1; // 0x4c
	uint16_t m_nSimdQuadCount2; // 0x4e
	uint16_t m_nQuadCount1; // 0x50
	uint16_t m_nQuadCount2; // 0x52
	uint16_t m_nCollisionSphereInclusiveCount; // 0x54
	uint16_t m_nTreeDepth; // 0x56
	uint16_t m_nNodeBaseJiggleboneDependsCount; // 0x58
	uint16_t m_nRopeCount; // 0x5a
	CUtlVector< uint16 > m_Ropes; // 0x60
	CUtlVector< FeNodeBase_t > m_NodeBases; // 0x78
	CUtlVector< FeSimdNodeBase_t > m_SimdNodeBases; // 0x90
	CUtlVector< FeQuad_t > m_Quads; // 0xa8
	CUtlVector< FeSimdQuad_t > m_SimdQuads; // 0xc0
	CUtlVector< FeSimdTri_t > m_SimdTris; // 0xd8
	CUtlVector< FeSimdRodConstraint_t > m_SimdRods; // 0xf0
	CUtlVector< CTransform > m_InitPose; // 0x108
	CUtlVector< FeRodConstraint_t > m_Rods; // 0x120
	CUtlVector< FeTwistConstraint_t > m_Twists; // 0x138
	CUtlVector< FeAxialEdgeBend_t > m_AxialEdges; // 0x150
	CUtlVector< float32 > m_NodeInvMasses; // 0x168
	CUtlVector< FeCtrlOffset_t > m_CtrlOffsets; // 0x180
	CUtlVector< FeCtrlOsOffset_t > m_CtrlOsOffsets; // 0x198
	CUtlVector< FeFollowNode_t > m_FollowNodes; // 0x1b0
	CUtlVector< FeCollisionSphere_t > m_CollisionSpheres; // 0x1c8
	CUtlVector< FeCollisionPlane_t > m_CollisionPlanes; // 0x1e0
	CUtlVector< FeNodeIntegrator_t > m_NodeIntegrator; // 0x1f8
	CUtlVector< FeSpringIntegrator_t > m_SpringIntegrator; // 0x210
	CUtlVector< FeSimdSpringIntegrator_t > m_SimdSpringIntegrator; // 0x228
	CUtlVector< FeWorldCollisionParams_t > m_WorldCollisionParams; // 0x240
	CUtlVector< float32 > m_LegacyStretchForce; // 0x258
	CUtlVector< float32 > m_NodeCollisionRadii; // 0x270
	CUtlVector< float32 > m_DynNodeFriction; // 0x288
	CUtlVector< float32 > m_LocalRotation; // 0x2a0
	CUtlVector< float32 > m_LocalForce; // 0x2b8
	CUtlVector< FeTaperedCapsuleStretch_t > m_TaperedCapsuleStretches; // 0x2d0
	CUtlVector< FeTaperedCapsuleRigid_t > m_TaperedCapsuleRigids; // 0x2e8
	CUtlVector< FeSphereRigid_t > m_SphereRigids; // 0x300
	CUtlVector< uint16 > m_WorldCollisionNodes; // 0x318
	CUtlVector< uint16 > m_TreeParents; // 0x330
	CUtlVector< uint16 > m_TreeCollisionMasks; // 0x348
	CUtlVector< FeTreeChildren_t > m_TreeChildren; // 0x360
	CUtlVector< uint16 > m_FreeNodes; // 0x378
	CUtlVector< FeFitMatrix_t > m_FitMatrices; // 0x390
	CUtlVector< FeFitWeight_t > m_FitWeights; // 0x3a8
	CUtlVector< FeNodeReverseOffset_t > m_ReverseOffsets; // 0x3c0
	CUtlVector< FeAnimStrayRadius_t > m_AnimStrayRadii; // 0x3d8
	CUtlVector< FeSimdAnimStrayRadius_t > m_SimdAnimStrayRadii; // 0x3f0
	CUtlVector< FeKelagerBend2_t > m_KelagerBends; // 0x408
	CUtlVector< FeCtrlSoftOffset_t > m_CtrlSoftOffsets; // 0x420
	CUtlVector< CFeIndexedJiggleBone > m_JiggleBones; // 0x438
	CUtlVector< uint16 > m_SourceElems; // 0x450
	CUtlVector< uint32 > m_GoalDampedSpringIntegrators; // 0x468
	CUtlVector< FeTri_t > m_Tris; // 0x480
	uint16_t m_nTriCount1; // 0x498
	uint16_t m_nTriCount2; // 0x49a
	uint8_t m_nReservedUint8; // 0x49c
	uint8_t m_nExtraPressureIterations; // 0x49d
	uint8_t m_nExtraGoalIterations; // 0x49e
	uint8_t m_nExtraIterations; // 0x49f
	CUtlVector< FeBoxRigid_t > m_BoxRigids; // 0x4a0
	CUtlVector< uint8 > m_DynNodeVertexSet; // 0x4b8
	CUtlVector< uint32 > m_VertexSetNames; // 0x4d0
	CUtlVector< FeRigidColliderIndices_t > m_RigidColliderPriorities; // 0x4e8
	CUtlVector< FeMorphLayerDepr_t > m_MorphLayers; // 0x500
	CUtlVector< uint8 > m_MorphSetData; // 0x518
	CUtlVector< FeVertexMapDesc_t > m_VertexMaps; // 0x530
	CUtlVector< uint8 > m_VertexMapValues; // 0x548
	CUtlVector< FeEffectDesc_t > m_Effects; // 0x560
	CUtlVector< FeCtrlOffset_t > m_LockToParent; // 0x578
	CUtlVector< uint16 > m_LockToGoal; // 0x590
	CUtlVector< FeNodeWindBase_t > m_DynNodeWindBases; // 0x5a8
	float m_flInternalPressure; // 0x5c0
	float m_flDefaultTimeDilation; // 0x5c4
	float m_flWindage; // 0x5c8
	float m_flWindDrag; // 0x5cc
	float m_flDefaultSurfaceStretch; // 0x5d0
	float m_flDefaultThreadStretch; // 0x5d4
	float m_flDefaultGravityScale; // 0x5d8
	float m_flDefaultVelAirDrag; // 0x5dc
	float m_flDefaultExpAirDrag; // 0x5e0
	float m_flDefaultVelQuadAirDrag; // 0x5e4
	float m_flDefaultExpQuadAirDrag; // 0x5e8
	float m_flRodVelocitySmoothRate; // 0x5ec
	float m_flQuadVelocitySmoothRate; // 0x5f0
	float m_flAddWorldCollisionRadius; // 0x5f4
	float m_flDefaultVolumetricSolveAmount; // 0x5f8
	uint16_t m_nRodVelocitySmoothIterations; // 0x5fc
	uint16_t m_nQuadVelocitySmoothIterations; // 0x5fe
};

// Aligment: 1
// Size: 176
struct RnMeshDesc_t : public RnShapeDesc_t
{
public:
	RnMesh_t m_Mesh; // 0x10
};

// Aligment: 1
// Size: 32
struct RnSphereDesc_t : public RnShapeDesc_t
{
public:
	RnSphere_t m_Sphere; // 0x10
};

// Aligment: 1
// Size: 48
struct RnCapsuleDesc_t : public RnShapeDesc_t
{
public:
	RnCapsule_t m_Capsule; // 0x10
};

// Aligment: 3
// Size: 32
struct RnSoftbodyCapsule_t
{
public:
	Vector[2] m_vCenter; // 0x0
	float m_flRadius; // 0x18
	uint16[2] m_nParticle; // 0x1c
};

// Aligment: 1
// Size: 232
struct RnHullDesc_t : public RnShapeDesc_t
{
public:
	RnHull_t m_Hull; // 0x10
};

// Aligment: 1
// Size: 4
struct RnSoftbodyParticle_t
{
public:
	float m_flMassInv; // 0x0
};

// Aligment: 2
// Size: 8
struct RnSoftbodySpring_t
{
public:
	uint16[2] m_nParticle; // 0x0
	float m_flLength; // 0x4
};

// Aligment: 12
// Size: 48
struct VMixDynamicsDesc_t
{
public:
	float m_fldbGain; // 0x0
	float m_fldbNoiseGateThreshold; // 0x4
	float m_fldbCompressionThreshold; // 0x8
	float m_fldbLimiterThreshold; // 0xc
	float m_fldbKneeWidth; // 0x10
	float m_flRatio; // 0x14
	float m_flLimiterRatio; // 0x18
	float m_flAttackTimeMS; // 0x1c
	float m_flReleaseTimeMS; // 0x20
	float m_flRMSTimeMS; // 0x24
	float m_flWetMix; // 0x28
	bool m_bPeakMode; // 0x2c
};

// Aligment: 3
// Size: 12
struct VMixOscDesc_t
{
public:
	// MPropertyFriendlyName "Type"
	VMixLFOShape_t oscType; // 0x0
	// MPropertyFriendlyName "Frequency (Hz)"
	// MPropertyAttributeRange "0.1 16000"
	float m_freq; // 0x4
	// MPropertyFriendlyName "Phase (degrees)"
	// MPropertyAttributeRange "0 360"
	float m_flPhase; // 0x8
};

// Aligment: 6
// Size: 16
struct VMixFilterDesc_t
{
public:
	VMixFilterType_t m_nFilterType; // 0x0
	VMixFilterSlope_t m_nFilterSlope; // 0x2
	bool m_bEnabled; // 0x3
	float m_fldbGain; // 0x4
	float m_flCutoffFreq; // 0x8
	float m_flQ; // 0xc
};

// Aligment: 6
// Size: 24
struct VMixUtilityDesc_t
{
public:
	// MPropertyFriendlyName "Channels"
	VMixChannelOperation_t m_nOp; // 0x0
	// MPropertyFriendlyName "Input Pan"
	// MPropertyAttributeRange "-1 1"
	float m_flInputPan; // 0x4
	// MPropertyFriendlyName "Output Balance"
	// MPropertyAttributeRange "-1 1"
	float m_flOutputBalance; // 0x8
	// MPropertyFriendlyName "Output Gain (dB)"
	// MPropertyAttributeRange "-36 0"
	float m_fldbOutputGain; // 0xc
	bool m_bBassMono; // 0x10
	float m_flBassFreq; // 0x14
};

// Aligment: 10
// Size: 40
struct VMixVocoderDesc_t
{
public:
	int32_t m_nBandCount; // 0x0
	float m_flBandwidth; // 0x4
	float m_fldBModGain; // 0x8
	float m_flFreqRangeStart; // 0xc
	float m_flFreqRangeEnd; // 0x10
	float m_fldBUnvoicedGain; // 0x14
	float m_flAttackTimeMS; // 0x18
	float m_flReleaseTimeMS; // 0x1c
	int32_t m_nDebugBand; // 0x20
	bool m_bPeakMode; // 0x24
};

// Aligment: 1
// Size: 32
class CSosGroupActionTimeLimitSchema : public CSosGroupActionSchema
{
public:
	// MPropertyFriendlyName "Max Time"
	float m_flMaxDuration; // 0x18
};

// Aligment: 1
// Size: 4
struct VMixEffectChainDesc_t
{
public:
	// MPropertyFriendlyName "Crossfade Time (s)"
	// MPropertyAttributeRange "0.1 10"
	float m_flCrossfadeTime; // 0x0
};

// Aligment: 10
// Size: 36
struct VMixDynamicsBand_t
{
public:
	// MPropertyFriendlyName "Input Gain (dB)"
	float m_fldbGainInput; // 0x0
	// MPropertyFriendlyName "Output Gain (dB)"
	float m_fldbGainOutput; // 0x4
	// MPropertyFriendlyName "Below Threshold(dB)"
	float m_fldbThresholdBelow; // 0x8
	// MPropertyFriendlyName "Above Threshold(dB)"
	float m_fldbThresholdAbove; // 0xc
	// MPropertyFriendlyName "Upward Ratio"
	float m_flRatioBelow; // 0x10
	// MPropertyFriendlyName "Downward Ratio"
	float m_flRatioAbove; // 0x14
	// MPropertyFriendlyName "Attack time (ms)"
	float m_flAttackTimeMS; // 0x18
	// MPropertyFriendlyName "Release time (ms)"
	float m_flReleaseTimeMS; // 0x1c
	// MPropertyFriendlyName "Enabled"
	bool m_bEnable; // 0x20
	// MPropertyFriendlyName "Solo"
	bool m_bSolo; // 0x21
};

// Aligment: 8
// Size: 44
struct VMixAutoFilterDesc_t
{
public:
	float m_flEnvelopeAmount; // 0x0
	float m_flAttackTimeMS; // 0x4
	float m_flReleaseTimeMS; // 0x8
	VMixFilterDesc_t m_filter; // 0xc
	float m_flLFOAmount; // 0x1c
	float m_flLFORate; // 0x20
	float m_flPhase; // 0x24
	VMixLFOShape_t m_nLFOShape; // 0x28
};

// Aligment: 3
// Size: 40
class CSosGroupActionLimitSchema : public CSosGroupActionSchema
{
public:
	// MPropertyFriendlyName "Max Count"
	int32_t m_nMaxCount; // 0x18
	// MPropertyAttributeChoiceEnumName
	// MPropertyFriendlyName "Stop Type"
	SosActionStopType_t m_nStopType; // 0x1c
	// MPropertyAttributeChoiceEnumName
	// MPropertyFriendlyName "Sort Type"
	SosActionSortType_t m_nSortType; // 0x20
};

// Aligment: 3
// Size: 12
struct VMixEnvelopeDesc_t
{
public:
	float m_flAttackTimeMS; // 0x0
	float m_flHoldTimeMS; // 0x4
	float m_flReleaseTimeMS; // 0x8
};

// Aligment: 5
// Size: 20
struct VMixShaperDesc_t
{
public:
	// MPropertyFriendlyName "Shape"
	// MPropertyAttributeRange "0 14"
	int32_t m_nShape; // 0x0
	// MPropertyFriendlyName "Drive (dB)"
	// MPropertyAttributeRange "0 36"
	float m_fldbDrive; // 0x4
	// MPropertyFriendlyName "Output Gain (dB)"
	// MPropertyAttributeRange "-36 0"
	float m_fldbOutputGain; // 0x8
	// MPropertyFriendlyName "Dry/Wet"
	float m_flWetMix; // 0xc
	// MPropertyFriendlyName "Oversampling"
	int32_t m_nOversampleFactor; // 0x10
};

// Aligment: 9
// Size: 36
struct VMixDynamicsCompressorDesc_t
{
public:
	// MPropertyFriendlyName "Output Gain (dB)"
	float m_fldbOutputGain; // 0x0
	// MPropertyFriendlyName "Threshold (dB)"
	float m_fldbCompressionThreshold; // 0x4
	// MPropertyFriendlyName "Knee Width (dB)"
	float m_fldbKneeWidth; // 0x8
	// MPropertyFriendlyName "Compression Ratio"
	float m_flCompressionRatio; // 0xc
	// MPropertyFriendlyName "Attack time (ms)"
	float m_flAttackTimeMS; // 0x10
	// MPropertyFriendlyName "Release time (ms)"
	float m_flReleaseTimeMS; // 0x14
	// MPropertyFriendlyName "Threshold detection time (ms)"
	float m_flRMSTimeMS; // 0x18
	// MPropertyFriendlyName "Dry/Wet"
	float m_flWetMix; // 0x1c
	// MPropertyFriendlyName "Peak mode"
	bool m_bPeakMode; // 0x20
};

// Aligment: 4
// Size: 16
struct VMixDiffusorDesc_t
{
public:
	float m_flSize; // 0x0
	float m_flComplexity; // 0x4
	float m_flFeedback; // 0x8
	float m_flOutputGain; // 0xc
};

// Aligment: 7
// Size: 28
struct VMixPlateverbDesc_t
{
public:
	float m_flPrefilter; // 0x0
	float m_flInputDiffusion1; // 0x4
	float m_flInputDiffusion2; // 0x8
	float m_flDecay; // 0xc
	float m_flDamp; // 0x10
	float m_flFeedbackDiffusion1; // 0x14
	float m_flFeedbackDiffusion2; // 0x18
};

// Aligment: 5
// Size: 48
struct SosEditItemInfo_t
{
public:
	SosEditItemType_t itemType; // 0x0
	CUtlString itemName; // 0x8
	CUtlString itemTypeName; // 0x10
	CUtlString itemKVString; // 0x20
	Vector2D itemPos; // 0x28
};

// Aligment: 4
// Size: 40
class CSosGroupMatchPattern : public CSosGroupBranchPattern
{
public:
	// MPropertyFriendlyName "Event Name"
	CUtlString m_matchSoundEventName; // 0x10
	// MPropertyFriendlyName "Sub-String"
	CUtlString m_matchSoundEventSubString; // 0x18
	// MPropertyFriendlyName "Entity Index"
	float m_flEntIndex; // 0x20
	// MPropertyFriendlyName "Operator Variable Value"
	float m_flOpvar; // 0x24
};

// Aligment: 1
// Size: 24
class CSosSoundEventGroupListSchema
{
public:
	// MPropertyAutoExpandSelf
	// MPropertyFriendlyName "Groups"
	CUtlVector< CSosSoundEventGroupSchema > m_groupList; // 0x0
};

// Aligment: 8
// Size: 32
struct VMixConvolutionDesc_t
{
public:
	// MPropertyFriendlyName "gain of wet signal (dB)"
	// MPropertyAttributeRange "-36 3"
	float m_fldbGain; // 0x0
	// MPropertyFriendlyName "Pre-delay (ms)"
	float m_flPreDelayMS; // 0x4
	// MPropertyFriendlyName "Dry/Wet"
	float m_flWetMix; // 0x8
	// MPropertyFriendlyName "Low EQ gain (dB)"
	// MPropertyAttributeRange "-24 24"
	float m_fldbLow; // 0xc
	// MPropertyFriendlyName "Mid EQ gain (dB)"
	// MPropertyAttributeRange "-24 24"
	float m_fldbMid; // 0x10
	// MPropertyFriendlyName "High EQ gain (dB)"
	// MPropertyAttributeRange "-24 24"
	float m_fldbHigh; // 0x14
	// MPropertyFriendlyName "Low Cutoff Freq (Hz)"
	float m_flLowCutoffFreq; // 0x18
	// MPropertyFriendlyName "High Cutoff Freq (Hz)"
	float m_flHighCutoffFreq; // 0x1c
};

// Aligment: 4
// Size: 16
struct VMixPitchShiftDesc_t
{
public:
	int32_t m_nGrainSampleCount; // 0x0
	float m_flPitchShift; // 0x4
	int32_t m_nQuality; // 0x8
	int32_t m_nProcType; // 0xc
};

// Aligment: 1
// Size: 8
class CSoundEventMetaData
{
public:
	CStrongHandle< InfoForResourceTypeCVMixListResource > m_soundEventVMix; // 0x0
};

// Aligment: 1
// Size: 128
struct VMixEQ8Desc_t
{
public:
	VMixFilterDesc_t[8] m_stages; // 0x0
};

// Aligment: 7
// Size: 40
struct VMixDelayDesc_t
{
public:
	VMixFilterDesc_t m_feedbackFilter; // 0x0
	bool m_bEnableFilter; // 0x10
	float m_flDelay; // 0x14
	float m_flDirectGain; // 0x18
	float m_flDelayGain; // 0x1c
	float m_flFeedbackGain; // 0x20
	float m_flWidth; // 0x24
};

// Aligment: 2
// Size: 32
class CDspPresetModifierList
{
public:
	// MPropertyDescription "Name of the DSP effect / subgraph used."
	// MPropertyFriendlyName "DSP Effect Name"
	CUtlString m_dspName; // 0x0
	// MPropertyDescription "Set of modifiers for individual mix groups"
	// MPropertyFriendlyName "Mixgroup Modifiers"
	CUtlVector< CDSPMixgroupModifier > m_modifiers; // 0x8
};

// Aligment: 6
// Size: 32
class CDSPMixgroupModifier
{
public:
	// MPropertyDescription "Name of the mixgroup. TODO: needs to be autopopulated with mixgroups."
	// MPropertyFriendlyName "Mixgroup Name"
	CUtlString m_mixgroup; // 0x0
	// MPropertyDescription "The amount to multiply the volume of the non-spatialized reverb/dsp by when at the max reverb blend distance. 1.0 leaves the volume unchanged."
	// MPropertyFriendlyName "Max reverb gain amount for listener DSP."
	float m_flModifier; // 0x8
	// MPropertyDescription "The amount to multiply the volume of the non-spatialized reverb/dsp by when at the min reverb blend distance. 1.0 leaves the volume unchanged."
	// MPropertyFriendlyName "Min reverb gain amount amount for listener DSP."
	float m_flModifierMin; // 0xc
	// MPropertyDescription "If set to >= 0, we will use this mix modifier for source-specific DSP effects. Otherwise we will use the listener DSP value."
	// MPropertyFriendlyName "Max reverb gain amount for source-specific DSP."
	float m_flSourceModifier; // 0x10
	// MPropertyDescription "If set to >= 0, we will use this mix modifier for source-specific DSP effects. Otherwise we will use the listener DSP value."
	// MPropertyFriendlyName "Min reverb gain amount for source-specific DSP."
	float m_flSourceModifierMin; // 0x14
	// MPropertyDescription "When a source has source-specific DSP, this can be used as an additional mix stage for the listener reverb amount."
	// MPropertyFriendlyName "Modification amount for listener DSP when source DSP is used."
	float m_flListenerReverbModifierWhenSourceReverbIsActive; // 0x18
};

// Aligment: 10
// Size: 144
struct VMixDynamics3BandDesc_t
{
public:
	float m_fldbGainOutput; // 0x0
	float m_flRMSTimeMS; // 0x4
	float m_fldbKneeWidth; // 0x8
	float m_flDepth; // 0xc
	float m_flWetMix; // 0x10
	float m_flTimeScale; // 0x14
	float m_flLowCutoffFreq; // 0x18
	float m_flHighCutoffFreq; // 0x1c
	bool m_bPeakMode; // 0x20
	VMixDynamicsBand_t[3] m_bandDesc; // 0x24
};

// Aligment: 4
// Size: 16
class CSosGroupBranchPattern
{
public:
	// MPropertyFriendlyName "Event Name"
	bool m_bMatchEventName; // 0x8
	// MPropertyFriendlyName "Sub-String"
	bool m_bMatchEventSubString; // 0x9
	// MPropertyFriendlyName "Source Entity Index"
	bool m_bMatchEntIndex; // 0xa
	// MPropertyFriendlyName "Operator Variable"
	bool m_bMatchOpvar; // 0xb
};

// Aligment: 8
// Size: 208
class CSosSoundEventGroupSchema
{
public:
	// MPropertyFriendlyName "Group Name"
	CUtlString m_name; // 0x0
	// MPropertyAttributeChoiceEnumName
	// MPropertyFriendlyName "Group Type"
	SosGroupType_t m_nType; // 0x8
	// MPropertyFriendlyName "Blocks Events"
	bool m_bIsBlocking; // 0xc
	// MPropertyFriendlyName "Block Max Count"
	int32_t m_nBlockMaxCount; // 0x10
	// MPropertyFriendlyName "Invert Match"
	bool m_bInvertMatch; // 0x14
	// MPropertyFriendlyName "Match Rules"
	CSosGroupMatchPattern m_matchPattern; // 0x18
	// MPropertyFriendlyName "Branch Rules"
	CSosGroupBranchPattern m_branchPattern; // 0x40
	// MPropertyFriendlyName "Actions"
	CSosGroupActionSchema*[4] m_vActions; // 0xb0
};

// Aligment: 3
// Size: 24
class CSosGroupActionSchema
{
public:
	// MPropertyFriendlyName "Name"
	CUtlString m_name; // 0x8
	// MPropertyFriendlyName "Action Type"
	ActionType_t m_actionType; // 0x10
	// MPropertySuppressField
	ActionType_t m_actionInstanceType; // 0x14
};

// Aligment: 17
// Size: 80
struct VMixBoxverbDesc_t
{
public:
	float m_flSizeMax; // 0x0
	float m_flSizeMin; // 0x4
	float m_flComplexity; // 0x8
	float m_flDiffusion; // 0xc
	float m_flModDepth; // 0x10
	float m_flModRate; // 0x14
	bool m_bParallel; // 0x18
	VMixFilterDesc_t m_filterType; // 0x1c
	float m_flWidth; // 0x2c
	float m_flHeight; // 0x30
	float m_flDepth; // 0x34
	float m_flFeedbackScale; // 0x38
	float m_flFeedbackWidth; // 0x3c
	float m_flFeedbackHeight; // 0x40
	float m_flFeedbackDepth; // 0x44
	float m_flOutputGain; // 0x48
	float m_flTaps; // 0x4c
};

// Aligment: 9
// Size: 48
struct VMixModDelayDesc_t
{
public:
	VMixFilterDesc_t m_feedbackFilter; // 0x0
	bool m_bPhaseInvert; // 0x10
	float m_flGlideTime; // 0x14
	float m_flDelay; // 0x18
	float m_flOutputGain; // 0x1c
	float m_flFeedbackGain; // 0x20
	float m_flModRate; // 0x24
	float m_flModDepth; // 0x28
	bool m_bApplyAntialiasing; // 0x2c
};

// Aligment: 1
// Size: 24
struct SelectedEditItemInfo_t
{
public:
	CUtlVector< SosEditItemInfo_t > m_EditItems; // 0x0
};

// Aligment: 2
// Size: 8
struct VMixPannerDesc_t
{
public:
	VMixPannerType_t m_type; // 0x0
	float m_flStrength; // 0x4
};

// Aligment: 3
// Size: 12
struct VMixSubgraphSwitchDesc_t
{
public:
	VMixSubgraphSwitchInterpolationType_t m_interpolationMode; // 0x0
	bool m_bOnlyTailsOnFadeOut; // 0x4
	float m_flInterpolationTime; // 0x8
};

// Aligment: 1
// Size: 24
class CDSPPresetMixgroupModifierTable
{
public:
	// MPropertyDescription "Table of mixgroup modifiers for effect names."
	// MPropertyFriendlyName "Modifier Table"
	CUtlVector< CDspPresetModifierList > m_table; // 0x0
};

// Aligment: 4
// Size: 16
struct VMixFreeverbDesc_t
{
public:
	float m_flRoomSize; // 0x0
	float m_flDamp; // 0x4
	float m_flWidth; // 0x8
	float m_flLateReflections; // 0xc
};

// Aligment: 1
// Size: 24
class CSSDSMsg_EndFrame
{
public:
	CUtlVector< CSSDSEndFrameViewInfo > m_Views; // 0x0
};

// Aligment: 2
// Size: 24
class CSSDSMsg_ViewRender
{
public:
	SceneViewId_t m_viewId; // 0x0
	CUtlString m_ViewName; // 0x10
};

// Aligment: 3
// Size: 48
class CSSDSMsg_ViewTargetList
{
public:
	SceneViewId_t m_viewId; // 0x0
	CUtlString m_ViewName; // 0x10
	CUtlVector< CSSDSMsg_ViewTarget > m_Targets; // 0x18
};

// Aligment: 0
// Size: 56
class CSSDSMsg_PreLayer : public CSSDSMsg_LayerBase
{
public:
// <no members described>
};

// Aligment: 6
// Size: 56
class CSSDSMsg_LayerBase
{
public:
	SceneViewId_t m_viewId; // 0x0
	CUtlString m_ViewName; // 0x10
	int32_t m_nLayerIndex; // 0x18
	uint64_t m_nLayerId; // 0x20
	CUtlString m_LayerName; // 0x28
	CUtlString m_displayText; // 0x30
};

// Aligment: 0
// Size: 56
class CSSDSMsg_PostLayer : public CSSDSMsg_LayerBase
{
public:
// <no members described>
};

// Aligment: 2
// Size: 16
class CSSDSEndFrameViewInfo
{
public:
	uint64_t m_nViewId; // 0x0
	CUtlString m_ViewName; // 0x8
};

// Aligment: 2
// Size: 16
struct SceneViewId_t
{
public:
	uint64_t m_nViewId; // 0x0
	uint64_t m_nFrameCount; // 0x8
};

// Aligment: 10
// Size: 48
class CSSDSMsg_ViewTarget
{
public:
	CUtlString m_Name; // 0x0
	uint64_t m_TextureId; // 0x8
	int32_t m_nWidth; // 0x10
	int32_t m_nHeight; // 0x14
	int32_t m_nRequestedWidth; // 0x18
	int32_t m_nRequestedHeight; // 0x1c
	int32_t m_nNumMipLevels; // 0x20
	int32_t m_nDepth; // 0x24
	int32_t m_nMultisampleNumSamples; // 0x28
	int32_t m_nFormat; // 0x2c
};

// Aligment: 13
// Size: 160
class CVoxelVisibility
{
public:
	uint32_t m_nBaseClusterCount; // 0x40
	uint32_t m_nPVSBytesPerCluster; // 0x44
	Vector m_vMinBounds; // 0x48
	Vector m_vMaxBounds; // 0x54
	float m_flGridSize; // 0x60
	uint32_t m_nSkyVisibilityCluster; // 0x64
	uint32_t m_nSunVisibilityCluster; // 0x68
	VoxelVisBlockOffset_t m_NodeBlock; // 0x6c
	VoxelVisBlockOffset_t m_RegionBlock; // 0x74
	VoxelVisBlockOffset_t m_EnclosedClusterListBlock; // 0x7c
	VoxelVisBlockOffset_t m_EnclosedClustersBlock; // 0x84
	VoxelVisBlockOffset_t m_MasksBlock; // 0x8c
	VoxelVisBlockOffset_t m_nVisBlocks; // 0x94
};

// Aligment: 2
// Size: 48
struct EntityKeyValueData_t
{
public:
	CUtlBinaryBlock m_keyValuesData; // 0x0
	CUtlVector< EntityIOConnectionData_t > m_connections; // 0x18
};

// Aligment: 3
// Size: 24
struct MaterialOverride_t : public BaseSceneObjectOverride_t
{
public:
	uint32_t m_nSubSceneObject; // 0x4
	uint32_t m_nDrawCallIndex; // 0x8
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_pMaterial; // 0x10
};

// Aligment: 10
// Size: 112
struct InfoOverlayData_t
{
public:
	matrix3x4_t m_transform; // 0x0
	float m_flWidth; // 0x30
	float m_flHeight; // 0x34
	float m_flDepth; // 0x38
	Vector2D m_vUVStart; // 0x3c
	Vector2D m_vUVEnd; // 0x44
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_pMaterial; // 0x50
	int32_t m_nRenderOrder; // 0x58
	Vector4D m_vTintColor; // 0x5c
	int32_t m_nSequenceOverride; // 0x6c
};

// Aligment: 4
// Size: 128
struct World_t
{
public:
	WorldBuilderParams_t m_builderParams; // 0x0
	CUtlVector< NodeData_t > m_worldNodes; // 0x20
	BakedLightingInfo_t m_worldLightingInfo; // 0x38
	CUtlVector< CStrongHandleCopyable< InfoForResourceTypeCEntityLump > > m_entityLumps; // 0x68
};

// Aligment: 12
// Size: 48
struct AggregateMeshInfo_t
{
public:
	uint32_t m_nVisClusterMemberOffset; // 0x0
	uint8_t m_nVisClusterMemberCount; // 0x4
	bool m_bHasTransform; // 0x5
	int16_t m_nDrawCallIndex; // 0x6
	Color m_vTintColor; // 0x8
	uint8_t m_nLODGroupMask; // 0xc
	ObjectTypeFlags_t m_objectFlags; // 0x10
	Vector m_vLODOrigin; // 0x14
	float m_fLODStartDrawDistance; // 0x20
	float m_fLODEndDrawDistance; // 0x24
	float m_fMaxObjectScale; // 0x28
	int32_t m_nLightProbeVolumePrecomputedHandshake; // 0x2c
};

// Aligment: 4
// Size: 56
struct WorldNodeOnDiskBufferData_t
{
public:
	int32_t m_nElementCount; // 0x0
	int32_t m_nElementSizeInBytes; // 0x4
	CUtlVector< RenderInputLayoutField_t > m_inputLayoutFields; // 0x8
	CUtlVector< uint8 > m_pData; // 0x20
};

// Aligment: 0
// Size: 1
struct InfoForResourceTypeVMapResourceData_t
{
public:
// <no members described>
};

// Aligment: 2
// Size: 8
struct VoxelVisBlockOffset_t
{
public:
	uint32_t m_nOffset; // 0x0
	uint32_t m_nElementCount; // 0x4
};

// Aligment: 5
// Size: 48
struct BakedLightingInfo_t
{
public:
	uint32_t m_nLightmapVersionNumber; // 0x0
	uint32_t m_nLightmapGameVersionNumber; // 0x4
	Vector2D m_vLightmapUvScale; // 0x8
	bool m_bHasLightmaps; // 0x10
	CUtlVector< CStrongHandle< InfoForResourceTypeCTextureBase > > m_lightMaps; // 0x18
};

// Aligment: 7
// Size: 48
struct EntityIOConnectionData_t
{
public:
	CUtlString m_outputName; // 0x0
	uint32_t m_targetType; // 0x8
	CUtlString m_targetName; // 0x10
	CUtlString m_inputName; // 0x18
	CUtlString m_overrideParam; // 0x20
	float m_flDelay; // 0x28
	int32_t m_nTimesToFire; // 0x2c
};

// Aligment: 1
// Size: 4
struct BaseSceneObjectOverride_t
{
public:
	uint32_t m_nSceneObjectIndex; // 0x0
};

// Aligment: 12
// Size: 296
struct WorldNode_t
{
public:
	CUtlVector< SceneObject_t > m_sceneObjects; // 0x0
	CUtlVector< InfoOverlayData_t > m_infoOverlays; // 0x18
	CUtlVector< uint16 > m_visClusterMembership; // 0x30
	CUtlVector< AggregateSceneObject_t > m_aggregateSceneObjects; // 0x48
	CUtlVector< ExtraVertexStreamOverride_t > m_extraVertexStreamOverrides; // 0x60
	CUtlVector< MaterialOverride_t > m_materialOverrides; // 0x78
	CUtlVector< WorldNodeOnDiskBufferData_t > m_extraVertexStreams; // 0x90
	CUtlVector< CUtlString > m_layerNames; // 0xa8
	CUtlVector< uint8 > m_sceneObjectLayerIndices; // 0xc0
	CUtlVector< uint8 > m_overlayLayerIndices; // 0xd8
	CUtlString m_grassFileName; // 0xf0
	BakedLightingInfo_t m_nodeLightingInfo; // 0xf8
};

// Aligment: 4
// Size: 64
struct PermEntityLumpData_t
{
public:
	CUtlString m_name; // 0x0
	CUtlString m_hammerUniqueId; // 0x8
	CUtlVector< CStrongHandleCopyable< InfoForResourceTypeCEntityLump > > m_childLumps; // 0x10
	CUtlVector< EntityKeyValueData_t > m_entityKeyValues; // 0x28
};

// Aligment: 5
// Size: 32
struct WorldBuilderParams_t
{
public:
	float m_flMinDrawVolumeSize; // 0x0
	bool m_bBuildBakedLighting; // 0x4
	Vector2D m_vLightmapUvScale; // 0x8
	uint64_t m_nCompileTimestamp; // 0x10
	uint64_t m_nCompileFingerprint; // 0x18
};

// Aligment: 0
// Size: 1
struct VMapResourceData_t
{
public:
// <no members described>
};

// Aligment: 7
// Size: 80
struct NodeData_t
{
public:
	int32_t m_nParent; // 0x0
	Vector m_vOrigin; // 0x4
	Vector m_vMinBounds; // 0x10
	Vector m_vMaxBounds; // 0x1c
	float m_flMinimumDistance; // 0x28
	CUtlVector< int32 > m_ChildNodeIndices; // 0x30
	CUtlString m_worldNodePrefix; // 0x48
};

// Aligment: 7
// Size: 96
struct AggregateSceneObject_t
{
public:
	ObjectTypeFlags_t m_allFlags; // 0x0
	ObjectTypeFlags_t m_anyFlags; // 0x4
	int16_t m_nLayer; // 0x8
	CUtlVector< AggregateMeshInfo_t > m_aggregateMeshes; // 0x10
	CUtlVector< uint16 > m_visClusterMembership; // 0x28
	CUtlVector< matrix3x4_t > m_fragmentTransforms; // 0x40
	CStrongHandle< InfoForResourceTypeCModel > m_renderableModel; // 0x58
};

// Aligment: 4
// Size: 40
struct ExtraVertexStreamOverride_t : public BaseSceneObjectOverride_t
{
public:
	uint32_t m_nSubSceneObject; // 0x4
	uint32_t m_nDrawCallIndex; // 0x8
	MeshDrawPrimitiveFlags_t m_nAdditionalMeshDrawPrimitiveFlags; // 0xc
	CRenderBufferBinding m_extraBufferBinding; // 0x10
};

// Aligment: 15
// Size: 144
struct SceneObject_t
{
public:
	uint32_t m_nObjectID; // 0x0
	Vector4D[3] m_vTransform; // 0x4
	float m_flFadeStartDistance; // 0x34
	float m_flFadeEndDistance; // 0x38
	Vector4D m_vTintColor; // 0x3c
	CUtlString m_skin; // 0x50
	ObjectTypeFlags_t m_nObjectTypeFlags; // 0x58
	Vector m_vLightingOrigin; // 0x5c
	uint32_t m_nLightGroup; // 0x68
	int16_t m_nOverlayRenderOrder; // 0x6c
	int16_t m_nLODOverride; // 0x6e
	int32_t m_nCubeMapPrecomputedHandshake; // 0x70
	int32_t m_nLightProbeVolumePrecomputedHandshake; // 0x74
	CStrongHandle< InfoForResourceTypeCModel > m_renderableModel; // 0x80
	CStrongHandle< InfoForResourceTypeCRenderMesh > m_renderable; // 0x88
};

// Aligment: 0
// Size: 40
class CParticleProperty
{
public:
// <no members described>
};

// Aligment: 3
// Size: 512
class C_OP_LerpEndCapScalar : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f0
	// MPropertyFriendlyName "value to lerp to"
	float m_flOutput; // 0x1f4
	// MPropertyFriendlyName "lerp time"
	float m_flLerpTime; // 0x1f8
};

// Aligment: 11
// Size: 544
class C_OP_CPOffsetToPercentageBetweenCPs : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "percentage minimum"
	float m_flInputMin; // 0x1f0
	// MPropertyFriendlyName "percentage maximum"
	float m_flInputMax; // 0x1f4
	// MPropertyFriendlyName "percentage bias"
	float m_flInputBias; // 0x1f8
	// MPropertyFriendlyName "starting control point"
	int32_t m_nStartCP; // 0x1fc
	// MPropertyFriendlyName "ending control point"
	int32_t m_nEndCP; // 0x200
	// MPropertyFriendlyName "offset control point"
	int32_t m_nOffsetCP; // 0x204
	// MPropertyFriendlyName "output control point"
	int32_t m_nOuputCP; // 0x208
	// MPropertyFriendlyName "input control point"
	int32_t m_nInputCP; // 0x20c
	// MPropertyFriendlyName "treat distance between points as radius"
	bool m_bRadialCheck; // 0x210
	// MPropertyFriendlyName "treat offset as scale of total distance"
	bool m_bScaleOffset; // 0x211
	// MPropertyFriendlyName "offset amount"
	// MVectorIsCoordinate
	Vector m_vecOffset; // 0x214
};

// Aligment: 4
// Size: 528
class C_INIT_SequenceFromCP : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "kill unused"
	bool m_bKillUnused; // 0x1f0
	// MPropertyFriendlyName "offset propotional to radius"
	bool m_bRadiusScale; // 0x1f1
	// MPropertyFriendlyName "control point"
	int32_t m_nCP; // 0x1f4
	// MPropertyFriendlyName "per particle spatial offset"
	// MVectorIsCoordinate
	Vector m_vecOffset; // 0x1f8
};

// Aligment: 0
// Size: 576
class C_INIT_RemapParticleCountToNamedModelMeshGroupScalar : public C_INIT_RemapParticleCountToNamedModelElementScalar, C_INIT_RemapParticleCountToScalar, CParticleFunctionInitializer, CParticleFunction
{
public:
// <no members described>
};

// Aligment: 2
// Size: 1984
class C_INIT_InitVecCollection : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "value"
	CParticleCollectionVecInput m_InputValue; // 0x1f0
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nOutputField; // 0x7b8
};

// Aligment: 7
// Size: 848
class C_OP_RotateVector : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f0
	// MPropertyFriendlyName "rotation axis min"
	// MVectorIsCoordinate
	Vector m_vecRotAxisMin; // 0x1f4
	// MPropertyFriendlyName "rotation axis max"
	// MVectorIsCoordinate
	Vector m_vecRotAxisMax; // 0x200
	// MPropertyFriendlyName "rotation rate min"
	float m_flRotRateMin; // 0x20c
	// MPropertyFriendlyName "rotation rate max"
	float m_flRotRateMax; // 0x210
	// MPropertyFriendlyName "normalize output"
	bool m_bNormalize; // 0x214
	// MPropertyFriendlyName "per particle scale"
	CPerParticleFloatInput m_flScale; // 0x218
};

// Aligment: 8
// Size: 576
class C_OP_RampScalarLinear : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "ramp rate min"
	float m_RateMin; // 0x1f0
	// MPropertyFriendlyName "ramp rate max"
	float m_RateMax; // 0x1f4
	// MPropertyFriendlyName "start time min"
	float m_flStartTime_min; // 0x1f8
	// MPropertyFriendlyName "start time max"
	float m_flStartTime_max; // 0x1fc
	// MPropertyFriendlyName "end time min"
	float m_flEndTime_min; // 0x200
	// MPropertyFriendlyName "end time max"
	float m_flEndTime_max; // 0x204
	// MPropertyFriendlyName "ramp field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nField; // 0x230
	// MPropertyFriendlyName "start/end proportional"
	bool m_bProportionalOp; // 0x234
};

// Aligment: 2
// Size: 320
struct FloatInputMaterialVariable_t
{
public:
	// MPropertyFriendlyName "material variable"
	CUtlString m_strVariable; // 0x0
	// MPropertyFriendlyName "input"
	CParticleCollectionFloatInput m_flInput; // 0x8
};

// Aligment: 8
// Size: 2736
class C_OP_RenderMaterialProxy : public CParticleFunctionRenderer, CParticleFunction
{
public:
	// MPropertyFriendlyName "Control Point for Model"
	int32_t m_nMaterialControlPoint; // 0x230
	// MPropertyFriendlyName "proxy type"
	MaterialProxyType_t m_nProxyType; // 0x234
	// MPropertyFriendlyName "material variables"
	// MPropertyAutoExpandSelf
	CUtlVector< MaterialVariable_t > m_MaterialVars; // 0x238
	// MPropertyFriendlyName "material override"
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hOverrideMaterial; // 0x250
	// MPropertyFriendlyName "material override enable"
	CParticleCollectionFloatInput m_flMaterialOverrideEnabled; // 0x258
	// MPropertyFriendlyName "model tint"
	CParticleCollectionVecInput m_vecColorScale; // 0x390
	// MPropertyFriendlyName "model alpha"
	CPerParticleFloatInput m_flAlpha; // 0x958
	// MPropertyFriendlyName "model tint blend type"
	ParticleColorBlendType_t m_nColorBlendType; // 0xa90
};

// Aligment: 10
// Size: 544
class C_OP_CycleScalar : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "destination scalar field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nDestField; // 0x1f0
	// MPropertyFriendlyName "Value at start of cycle"
	float m_flStartValue; // 0x1f4
	// MPropertyFriendlyName "Value at end of cycle"
	float m_flEndValue; // 0x1f8
	// MPropertyFriendlyName "Cycle time"
	float m_flCycleTime; // 0x1fc
	// MPropertyFriendlyName "Do not repeat cycle"
	bool m_bDoNotRepeatCycle; // 0x200
	// MPropertyFriendlyName "Synchronize particles"
	bool m_bSynchronizeParticles; // 0x201
	// MPropertyFriendlyName "Scale Start/End Control Point"
	int32_t m_nCPScale; // 0x204
	// MPropertyFriendlyName "start scale control point field"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nCPFieldMin; // 0x208
	// MPropertyFriendlyName "end scale control point field"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nCPFieldMax; // 0x20c
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x210
};

// Aligment: 5
// Size: 1168
class C_OP_SetAttributeToScalarExpression : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "expression"
	ScalarExpressionType_t m_nExpression; // 0x1f0
	// MPropertyFriendlyName "input 1"
	CPerParticleFloatInput m_flInput1; // 0x1f8
	// MPropertyFriendlyName "input 2"
	CPerParticleFloatInput m_flInput2; // 0x330
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nOutputField; // 0x468
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x46c
};

// Aligment: 0
// Size: 496
class C_OP_WorldCollideConstraint : public CParticleFunctionConstraint, CParticleFunction
{
public:
// <no members described>
};

// Aligment: 10
// Size: 608
class C_OP_RenderTreeShake : public CParticleFunctionRenderer, CParticleFunction
{
public:
	// MPropertyFriendlyName "peak strength"
	float m_flPeakStrength; // 0x230
	// MPropertyFriendlyName "peak strength field override"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nPeakStrengthFieldOverride; // 0x234
	// MPropertyFriendlyName "radius"
	float m_flRadius; // 0x238
	// MPropertyFriendlyName "strength field override"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nRadiusFieldOverride; // 0x23c
	// MPropertyFriendlyName "shake duration after end"
	float m_flShakeDuration; // 0x240
	// MPropertyFriendlyName "amount of time taken to smooth between different shake parameters"
	float m_flTransitionTime; // 0x244
	// MPropertyFriendlyName "Twist amount (-1..1)"
	float m_flTwistAmount; // 0x248
	// MPropertyFriendlyName "Radial Amount (-1..1)"
	float m_flRadialAmount; // 0x24c
	// MPropertyFriendlyName "Control Point Orientation Amount (-1..1)"
	float m_flControlPointOrientationAmount; // 0x250
	// MPropertyFriendlyName "Control Point for Orientation Amount"
	int32_t m_nControlPointForLinearDirection; // 0x254
};

// Aligment: 8
// Size: 1152
class C_OP_SetPerChildControlPoint : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "group ID to affect"
	int32_t m_nChildGroupID; // 0x1f0
	// MPropertyFriendlyName "control point to set"
	int32_t m_nFirstControlPoint; // 0x1f4
	// MPropertyFriendlyName "# of children to set"
	int32_t m_nNumControlPoints; // 0x1f8
	// MPropertyFriendlyName "particle increment amount"
	CParticleCollectionFloatInput m_nParticleIncrement; // 0x200
	// MPropertyFriendlyName "first particle to copy"
	CParticleCollectionFloatInput m_nFirstSourcePoint; // 0x338
	// MPropertyFriendlyName "set orientation from velocity"
	bool m_bSetOrientation; // 0x470
	// MPropertyFriendlyName "orientation vector"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nOrientationField; // 0x474
	// MPropertyFriendlyName "set number of children based on particle count"
	bool m_bNumBasedOnParticleCount; // 0x478
};

// Aligment: 12
// Size: 704
class C_OP_PercentageBetweenTransformLerpCPs : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f0
	// MPropertyFriendlyName "percentage minimum"
	float m_flInputMin; // 0x1f4
	// MPropertyFriendlyName "percentage maximum"
	float m_flInputMax; // 0x1f8
	// MPropertyFriendlyName "strarting transform"
	CParticleTransformInput m_TransformStart; // 0x200
	// MPropertyFriendlyName "end transform"
	CParticleTransformInput m_TransformEnd; // 0x250
	// MPropertyFriendlyName "output starting control point number"
	int32_t m_nOutputStartCP; // 0x2a0
	// MPropertyFriendlyName "output starting control point field 0-2 X/Y/Z"
	int32_t m_nOutputStartField; // 0x2a4
	// MPropertyFriendlyName "output ending control point number"
	int32_t m_nOutputEndCP; // 0x2a8
	// MPropertyFriendlyName "output ending control point field 0-2 X/Y/Z"
	int32_t m_nOutputEndField; // 0x2ac
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x2b0
	// MPropertyFriendlyName "only active within input range"
	bool m_bActiveRange; // 0x2b4
	// MPropertyFriendlyName "treat distance between points as radius"
	bool m_bRadialCheck; // 0x2b5
};

// Aligment: 27
// Size: 9920
class C_OP_RenderSprites : public CBaseRendererSource2, CParticleFunctionRenderer, CParticleFunction
{
public:
	// MPropertyStartGroup "Animation"
	// MPropertyFriendlyName "sequence id override"
	// MPropertySortPriority "500"
	CParticleCollectionFloatInput m_nSequenceOverride; // 0x2050
	// MPropertyStartGroup "Orientation"
	// MPropertyFriendlyName "orientation type"
	// MPropertySortPriority "750"
	ParticleOrientationChoiceList_t m_nOrientationType; // 0x2188
	// MPropertyFriendlyName "orientation control point"
	// MPropertySortPriority "750"
	// MPropertySuppressExpr "m_nOrientationType != PARTICLE_ORIENTATION_ALIGN_TO_PARTICLE_NORMAL && m_nOrientationType != PARTICLE_ORIENTATION_SCREENALIGN_TO_PARTICLE_NORMAL"
	int32_t m_nOrientationControlPoint; // 0x218c
	// MPropertyFriendlyName "enable yaw for particles aligned to normals"
	// MPropertySortPriority "750"
	// MPropertySuppressExpr "m_nOrientationType != PARTICLE_ORIENTATION_ALIGN_TO_PARTICLE_NORMAL && m_nOrientationType != PARTICLE_ORIENTATION_SCREENALIGN_TO_PARTICLE_NORMAL"
	bool m_bUseYawWithNormalAligned; // 0x2190
	// MPropertyStartGroup "Fading and culling"
	// MPropertyFriendlyName "minimum visual screen size"
	// MPropertySortPriority "1000"
	float m_flMinSize; // 0x2194
	// MPropertyFriendlyName "maximum visual screen size"
	// MPropertySortPriority "1000"
	float m_flMaxSize; // 0x2198
	// MPropertyFriendlyName "Factor to map size adjustment to alpha"
	// MPropertySortPriority "1000"
	float m_flAlphaAdjustWithSizeAdjust; // 0x219c
	// MPropertyFriendlyName "screen size to start fading"
	// MPropertySortPriority "1000"
	CParticleCollectionFloatInput m_flStartFadeSize; // 0x21a0
	// MPropertyFriendlyName "screen size to fade away"
	// MPropertySortPriority "1000"
	CParticleCollectionFloatInput m_flEndFadeSize; // 0x22d8
	// MPropertyFriendlyName "start fade dot product of normal vs view"
	// MPropertySortPriority "1000"
	float m_flStartFadeDot; // 0x2410
	// MPropertyFriendlyName "end fade dot product of normal vs view"
	// MPropertySortPriority "1000"
	float m_flEndFadeDot; // 0x2414
	// MPropertyStartGroup "Distance to alpha coding"
	// MPropertyFriendlyName "distance alpha"
	// MPropertySortPriority "0"
	bool m_bDistanceAlpha; // 0x2418
	// MPropertyFriendlyName "use soft edges for distance alpha"
	// MPropertySortPriority "0"
	// MPropertySuppressExpr "!m_bDistanceAlpha"
	bool m_bSoftEdges; // 0x2419
	// MPropertyFriendlyName "start value for soft edges for distance alpha"
	// MPropertySortPriority "0"
	// MPropertySuppressExpr "!m_bDistanceAlpha"
	float m_flEdgeSoftnessStart; // 0x241c
	// MPropertyFriendlyName "end value for soft edges for distance alpha"
	// MPropertySortPriority "0"
	// MPropertySuppressExpr "!m_bDistanceAlpha"
	float m_flEdgeSoftnessEnd; // 0x2420
	// MPropertyStartGroup "Outlining"
	// MPropertyFriendlyName "enable particle outlining"
	// MPropertySortPriority "0"
	bool m_bOutline; // 0x2424
	// MPropertyFriendlyName "outline color"
	// MPropertySortPriority "0"
	// MPropertySuppressExpr "!m_bOutline"
	Color m_OutlineColor; // 0x2425
	// MPropertyFriendlyName "outline alpha"
	// MPropertyAttributeRange "0 255"
	// MPropertySortPriority "0"
	// MPropertySuppressExpr "!m_bOutline"
	int32_t m_nOutlineAlpha; // 0x242c
	// MPropertyFriendlyName "outline start 0"
	// MPropertySortPriority "0"
	// MPropertySuppressExpr "!m_bOutline"
	float m_flOutlineStart0; // 0x2430
	// MPropertyFriendlyName "outline start 1"
	// MPropertySortPriority "0"
	// MPropertySuppressExpr "!m_bOutline"
	float m_flOutlineStart1; // 0x2434
	// MPropertyFriendlyName "outline end 0"
	// MPropertySortPriority "0"
	// MPropertySuppressExpr "!m_bOutline"
	float m_flOutlineEnd0; // 0x2438
	// MPropertyFriendlyName "outline end 1"
	// MPropertySortPriority "0"
	// MPropertySuppressExpr "!m_bOutline"
	float m_flOutlineEnd1; // 0x243c
	// MPropertyStartGroup "Lighting and Shadows"
	// MPropertyFriendlyName "lighting mode"
	// MPropertySortPriority "400"
	// MPropertySuppressExpr "mod != hlx"
	ParticleLightingQuality_t m_nLightingMode; // 0x2440
	// MPropertyFriendlyName "vertex lighting tessellation (0-5)"
	// MPropertyAttributeRange "0 5"
	// MPropertySortPriority "400"
	// MPropertySuppressExpr "mod != hlx || m_nLightingMode != PARTICLE_LIGHTING_PER_VERTEX"
	CParticleCollectionFloatInput m_flLightingTessellation; // 0x2448
	// MPropertyFriendlyName "lighting directionality"
	// MPropertySortPriority "400"
	// MPropertySuppressExpr "mod != hlx"
	CParticleCollectionFloatInput m_flLightingDirectionality; // 0x2580
	// MPropertyFriendlyName "Particle Shadows"
	// MPropertySortPriority "400"
	bool m_bParticleShadows; // 0x26b8
	// MPropertyFriendlyName "Shadow Density"
	// MPropertySortPriority "400"
	// MPropertySuppressExpr "!m_bParticleShadows"
	float m_flShadowDensity; // 0x26bc
};

// Aligment: 5
// Size: 640
class C_INIT_ModelCull : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1f0
	// MPropertyFriendlyName "use only bounding box"
	bool m_bBoundBox; // 0x1f4
	// MPropertyFriendlyName "cull outside instead of inside"
	bool m_bCullOutside; // 0x1f5
	// MPropertyFriendlyName "use bones instead of hitboxes"
	bool m_bUseBones; // 0x1f6
	// MPropertyFriendlyName "hitbox set"
	char[128] m_HitboxSetName; // 0x1f7
};

// Aligment: 4
// Size: 3472
class C_OP_ExternalWindForce : public CParticleFunctionForce, CParticleFunction
{
public:
	// MPropertyFriendlyName "sample position"
	CPerParticleVecInput m_vecSamplePosition; // 0x1f0
	// MPropertyFriendlyName "force scale"
	CPerParticleVecInput m_vecScale; // 0x7b8
	// MPropertyFriendlyName "sample wind"
	bool m_bSampleWind; // 0xd80
	// MPropertyFriendlyName "sample water current"
	bool m_bSampleWater; // 0xd81
};

// Aligment: 1
// Size: 24
struct PointDefinitionWithTimeValues_t : public PointDefinition_t
{
public:
	// MPropertyFriendlyName "Duration value for path point"
	float m_flTimeDuration; // 0x14
};

// Aligment: 0
// Size: 528
class C_OP_SpinYaw : public CGeneralSpin, CParticleFunctionOperator, CParticleFunction
{
public:
// <no members described>
};

// Aligment: 6
// Size: 2016
class C_OP_SetControlPointToCPVelocity : public CParticleFunctionPreEmission, CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "control point input"
	int32_t m_nCPInput; // 0x200
	// MPropertyFriendlyName "control point number to set velocity"
	int32_t m_nCPOutputVel; // 0x204
	// MPropertyFriendlyName "normalize output"
	bool m_bNormalize; // 0x208
	// MPropertyFriendlyName "control point number to set magnitude"
	int32_t m_nCPOutputMag; // 0x20c
	// MPropertyFriendlyName "control point field for magnitude"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nCPField; // 0x210
	// MPropertyFriendlyName "comparison velocity"
	CParticleCollectionVecInput m_vecComparisonVelocity; // 0x218
};

// Aligment: 3
// Size: 528
class C_OP_ParentVortices : public CParticleFunctionForce, CParticleFunction
{
public:
	// MPropertyFriendlyName "amount of force"
	float m_flForceScale; // 0x1f0
	// MPropertyFriendlyName "twist axis"
	// MVectorIsCoordinate
	Vector m_vecTwistAxis; // 0x1f4
	// MPropertyFriendlyName "flip twist axis with yaw"
	bool m_bFlipBasedOnYaw; // 0x200
};

// Aligment: 6
// Size: 48
struct ParticleControlPointDriver_t
{
public:
	int32_t m_iControlPoint; // 0x0
	ParticleAttachment_t m_iAttachType; // 0x4
	CUtlString m_attachmentName; // 0x8
	Vector m_vecOffset; // 0x10
	QAngle m_angOffset; // 0x1c
	CUtlString m_entityName; // 0x28
};

// Aligment: 3
// Size: 528
class C_OP_SetToCP : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1f0
	// MPropertyFriendlyName "offset"
	Vector m_vecOffset; // 0x1f4
	// MPropertyFriendlyName "offset in local space"
	bool m_bOffsetLocal; // 0x200
};

// Aligment: 7
// Size: 544
class C_OP_RemapModelVolumetoCP : public CParticleFunctionPreEmission, CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "input control point"
	int32_t m_nInControlPointNumber; // 0x200
	// MPropertyFriendlyName "output control point"
	int32_t m_nOutControlPointNumber; // 0x204
	// MPropertyFriendlyName "output CP component"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nField; // 0x208
	// MPropertyFriendlyName "input volume minimum in cubic units"
	float m_flInputMin; // 0x20c
	// MPropertyFriendlyName "input volume maximum in cubic units"
	float m_flInputMax; // 0x210
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x214
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x218
};

// Aligment: 2
// Size: 816
class C_INIT_QuantizeFloat : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "interval to snap to"
	CPerParticleFloatInput m_InputValue; // 0x1f0
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nOutputField; // 0x328
};

// Aligment: 7
// Size: 1760
class C_OP_RemapParticleCountToScalar : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f0
	// MPropertyFriendlyName "input minimum"
	CParticleCollectionFloatInput m_nInputMin; // 0x1f8
	// MPropertyFriendlyName "input maximum"
	CParticleCollectionFloatInput m_nInputMax; // 0x330
	// MPropertyFriendlyName "output minimum"
	CParticleCollectionFloatInput m_flOutputMin; // 0x468
	// MPropertyFriendlyName "output maximum"
	CParticleCollectionFloatInput m_flOutputMax; // 0x5a0
	// MPropertyFriendlyName
	bool m_bActiveRange; // 0x6d8
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x6dc
};

// Aligment: 0
// Size: 16
class IParticleCollection
{
public:
// <no members described>
};

// Aligment: 7
// Size: 544
class C_OP_VectorNoise : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f0
	// MPropertyFriendlyName "output minimum"
	// MVectorIsSometimesCoordinate
	Vector m_vecOutputMin; // 0x1f4
	// MPropertyFriendlyName "output maximum"
	// MVectorIsSometimesCoordinate
	Vector m_vecOutputMax; // 0x200
	// MPropertyFriendlyName "noise coordinate scale"
	float m_fl4NoiseScale; // 0x20c
	// MPropertyFriendlyName "additive"
	bool m_bAdditive; // 0x210
	// MPropertyFriendlyName "offset instead of accelerate position"
	bool m_bOffset; // 0x211
	// MPropertyFriendlyName "Noise animation time scale"
	float m_flNoiseAnimationTimeScale; // 0x214
};

// Aligment: 1
// Size: 528
class C_OP_ForceControlPointStub : public CParticleFunctionPreEmission, CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "control point"
	int32_t m_ControlPoint; // 0x200
};

// Aligment: 6
// Size: 848
class C_INIT_PositionWarpScalar : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "warp min"
	// MVectorIsCoordinate
	Vector m_vecWarpMin; // 0x1f0
	// MPropertyFriendlyName "warp max"
	// MVectorIsCoordinate
	Vector m_vecWarpMax; // 0x1fc
	// MPropertyFriendlyName "warp amount"
	CPerParticleFloatInput m_InputValue; // 0x208
	// MPropertyFriendlyName "previous position scale"
	float m_flPrevPosScale; // 0x340
	// MPropertyFriendlyName "warp scale control point number"
	int32_t m_nScaleControlPointNumber; // 0x344
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x348
};

// Aligment: 5
// Size: 1760
class C_OP_RopeSpringConstraint : public CParticleFunctionConstraint, CParticleFunction
{
public:
	// MPropertyFriendlyName "slack"
	CParticleCollectionFloatInput m_flRestLength; // 0x1f0
	// MPropertyFriendlyName "minimum segment length %"
	CParticleCollectionFloatInput m_flMinDistance; // 0x328
	// MPropertyFriendlyName "maximum segment length %"
	CParticleCollectionFloatInput m_flMaxDistance; // 0x460
	// MPropertyFriendlyName "scale factor for spring correction"
	float m_flAdjustmentScale; // 0x598
	// MPropertyFriendlyName "manual resting spacing"
	CParticleCollectionFloatInput m_flInitialRestingLength; // 0x5a0
};

// Aligment: 2
// Size: 528
class C_OP_SetControlPointOrientationToCPVelocity : public CParticleFunctionPreEmission, CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "control point input for velocity"
	int32_t m_nCPInput; // 0x200
	// MPropertyFriendlyName "control point output for orientation"
	int32_t m_nCPOutput; // 0x204
};

// Aligment: 0
// Size: 576
class C_INIT_RemapNamedModelMeshGroupToScalar : public C_INIT_RemapNamedModelElementToScalar, CParticleFunctionInitializer, CParticleFunction
{
public:
// <no members described>
};

// Aligment: 1
// Size: 496
class CParticleFunctionEmitter : public CParticleFunction
{
public:
	// MPropertyFriendlyName "Emitter Index"
	int32_t m_nEmitterIndex; // 0x1e8
};

// Aligment: 47
// Size: 8400
class C_OP_RenderModels : public CParticleFunctionRenderer, CParticleFunction
{
public:
	// MPropertyFriendlyName "Only Render in effects bloom pass"
	// MPropertySortPriority "1100"
	bool m_bOnlyRenderInEffectsBloomPass; // 0x230
	// MPropertyFriendlyName "Only Render in effects water pass"
	// MPropertySortPriority "1050"
	// MPropertySuppressExpr "mod != csgo"
	bool m_bOnlyRenderInEffectsWaterPass; // 0x231
	// MPropertyFriendlyName "Use Mixed Resolution Rendering"
	// MPropertySortPriority "1200"
	bool m_bUseMixedResolutionRendering; // 0x232
	// MPropertyFriendlyName "Only Render in effects game overlay pass"
	// MPropertySortPriority "1210"
	// MPropertySuppressExpr "mod != csgo"
	bool m_bOnlyRenderInEffecsGameOverlay; // 0x233
	// MPropertyFriendlyName "models"
	// MParticleRequireDefaultArrayEntry
	// MPropertyAutoExpandSelf
	// MPropertySortPriority "775"
	CUtlVector< ModelReference_t > m_ModelList; // 0x238
	// MPropertyFriendlyName "bodygroup field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nBodyGroupField; // 0x254
	// MPropertyFriendlyName "submodel field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nSubModelField; // 0x258
	// MPropertyStartGroup "Orientation"
	// MPropertyFriendlyName "ignore normal"
	// MPropertySortPriority "750"
	bool m_bIgnoreNormal; // 0x25c
	// MPropertyFriendlyName "orient model z to normal"
	// MPropertySortPriority "750"
	// MPropertySuppressExpr "m_bIgnoreNormal"
	bool m_bOrientZ; // 0x25d
	// MPropertyFriendlyName "center mesh"
	// MPropertySortPriority "750"
	bool m_bCenterOffset; // 0x25e
	// MPropertyFriendlyName "model local offset"
	// MPropertySortPriority "750"
	CPerParticleVecInput m_vecLocalOffset; // 0x260
	// MPropertyFriendlyName "model local rotation (pitch/yaw/roll)"
	// MPropertySortPriority "750"
	CPerParticleVecInput m_vecLocalRotation; // 0x828
	// MPropertyStartGroup "Model Scale"
	// MPropertyFriendlyName "ignore radius"
	// MPropertySortPriority "700"
	bool m_bIgnoreRadius; // 0xdf0
	// MPropertyFriendlyName "model scale CP"
	// MPropertySortPriority "700"
	int32_t m_nModelScaleCP; // 0xdf4
	// MPropertyFriendlyName "model component scale"
	// MPropertySortPriority "700"
	CPerParticleVecInput m_vecComponentScale; // 0xdf8
	// MPropertyFriendlyName "apply scales in local model space"
	// MPropertySortPriority "700"
	bool m_bLocalScale; // 0x13c0
	// MPropertyStartGroup "Animation"
	// MPropertyFriendlyName "animated"
	// MPropertySortPriority "500"
	bool m_bAnimated; // 0x13c1
	// MPropertyFriendlyName "animation rate"
	// MPropertySortPriority "500"
	// MPropertySuppressExpr "!m_bAnimated"
	float m_flAnimationRate; // 0x13c4
	// MPropertyFriendlyName "scale animation rate"
	// MPropertySortPriority "500"
	// MPropertySuppressExpr "!m_bAnimated"
	bool m_bScaleAnimationRate; // 0x13c8
	// MPropertyFriendlyName "force looping animations"
	// MPropertySortPriority "500"
	// MPropertySuppressExpr "!m_bAnimated"
	bool m_bForceLoopingAnimation; // 0x13c9
	// MPropertyFriendlyName "reset animation frame on stop"
	// MPropertySortPriority "500"
	// MPropertySuppressExpr "!m_bAnimated"
	bool m_bResetAnimOnStop; // 0x13ca
	// MPropertyFriendlyName "set animation frame manually"
	// MPropertySortPriority "500"
	// MPropertySuppressExpr "!m_bAnimated"
	bool m_bManualAnimFrame; // 0x13cb
	// MPropertyFriendlyName "animation rate scale field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	// MPropertySortPriority "500"
	// MPropertySuppressExpr "!m_bAnimated"
	ParticleAttributeIndex_t m_nAnimationScaleField; // 0x13cc
	// MPropertyStartGroup "Animation"
	// MPropertyFriendlyName "animation sequence field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	// MPropertySortPriority "500"
	ParticleAttributeIndex_t m_nAnimationField; // 0x13d0
	// MPropertyFriendlyName "manual animation frame field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	// MPropertySortPriority "500"
	// MPropertySuppressExpr "!(m_bAnimated && m_bManualAnimFrame)"
	ParticleAttributeIndex_t m_nManualFrameField; // 0x13d4
	// MPropertyFriendlyName "activity override"
	// MPropertySortPriority "500"
	char[256] m_ActivityName; // 0x13d8
	// MPropertyFriendlyName "Enable Cloth Simulation"
	bool m_bEnableClothSimulation; // 0x14d8
	// MPropertyStartGroup "Material"
	// MPropertyFriendlyName "material override"
	// MPropertySortPriority "600"
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hOverrideMaterial; // 0x14e0
	// MPropertyFriendlyName "override translucent materials"
	// MPropertySortPriority "600"
	bool m_bOverrideTranslucentMaterials; // 0x14e8
	// MPropertyFriendlyName "skin number"
	// MPropertySortPriority "600"
	int32_t m_nSkin; // 0x14ec
	// MPropertyFriendlyName "skin override CP"
	// MPropertySortPriority "600"
	int32_t m_nSkinCP; // 0x14f0
	// MPropertyFriendlyName "material variables"
	// MPropertyAutoExpandSelf
	// MPropertySortPriority "600"
	CUtlVector< MaterialVariable_t > m_MaterialVars; // 0x14f8
	// MPropertyStartGroup "Model Overrides"
	// MPropertyFriendlyName "model LOD"
	int32_t m_nLOD; // 0x1510
	// MPropertyFriendlyName "model override CP"
	int32_t m_nModelCP; // 0x1514
	// MPropertyFriendlyName "model override economy loadout slot type"
	char[256] m_EconSlotName; // 0x1518
	// MPropertyFriendlyName "model override original model only (ignore shapeshift/hex/etc)"
	bool m_bOriginalModel; // 0x1618
	// MPropertyFriendlyName "suppress tinting of the model"
	bool m_bSuppressTint; // 0x1619
	// MPropertyFriendlyName "use raw mesh group (ignore bodygroup field and use submodel field as raw meshgroup)"
	bool m_bUseRawMeshGroup; // 0x161a
	// MPropertyFriendlyName "disable shadows"
	bool m_bDisableShadows; // 0x161b
	// MPropertyFriendlyName "forcedrawinterlevedwithsiblings"
	bool m_bForceDrawInterlevedWithSiblings; // 0x161c
	// MPropertyFriendlyName "render attribute"
	char[260] m_szRenderAttribute; // 0x161d
	// MPropertyStartGroup "+Renderer Modifiers"
	// MPropertyFriendlyName "Radius Scale"
	// MPropertySortPriority "700"
	CParticleCollectionFloatInput m_flRadiusScale; // 0x1728
	// MPropertyFriendlyName "alpha scale"
	// MPropertySortPriority "700"
	CParticleCollectionFloatInput m_flAlphaScale; // 0x1860
	// MPropertyFriendlyName "rotation roll scale"
	// MPropertySortPriority "700"
	CParticleCollectionFloatInput m_flRollScale; // 0x1998
	// MPropertyFriendlyName "per-particle alpha scale attribute"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	// MPropertySortPriority "700"
	ParticleAttributeIndex_t m_nAlpha2Field; // 0x1ad0
	// MPropertyFriendlyName "color blend"
	// MPropertySortPriority "700"
	CParticleCollectionVecInput m_vecColorScale; // 0x1ad8
	// MPropertyFriendlyName "color blend type"
	// MPropertySortPriority "700"
	ParticleColorBlendType_t m_nColorBlendType; // 0x20a0
};

// Aligment: 7
// Size: 528
class C_OP_RemapSpeed : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f0
	// MPropertyFriendlyName "input minimum"
	float m_flInputMin; // 0x1f4
	// MPropertyFriendlyName "input maximum"
	float m_flInputMax; // 0x1f8
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x1fc
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x200
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x204
	// MPropertyFriendlyName "ignore delta time"
	bool m_bIgnoreDelta; // 0x208
};

// Aligment: 0
// Size: 496
class CParticleFunctionConstraint : public CParticleFunction
{
public:
// <no members described>
};

// Aligment: 3
// Size: 16
struct MaterialVariable_t
{
public:
	// MPropertyFriendlyName "material variable"
	CUtlString m_strVariable; // 0x0
	// MPropertyFriendlyName "particle field"
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nVariableField; // 0x8
	// MPropertyFriendlyName "scale"
	float m_flScale; // 0xc
};

// Aligment: 4
// Size: 512
class C_INIT_SetRigidAttachment : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1f0
	// MPropertyFriendlyName "attribute to read from"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldInput; // 0x1f4
	// MPropertyFriendlyName "attribute to cache to"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f8
	// MPropertyFriendlyName "local space"
	bool m_bLocalSpace; // 0x1fc
};

// Aligment: 3
// Size: 120
struct ParticleControlPointConfiguration_t
{
public:
	CUtlString m_name; // 0x0
	CUtlVector< ParticleControlPointDriver_t > m_drivers; // 0x8
	ParticlePreviewState_t m_previewState; // 0x20
};

// Aligment: 6
// Size: 544
class C_OP_RemapDensityToVector : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "Radius scale for particle influence"
	float m_flRadiusScale; // 0x1f0
	// MPropertyFriendlyName "Output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f4
	// MPropertyFriendlyName "Density value to map to min value"
	float m_flDensityMin; // 0x1f8
	// MPropertyFriendlyName "Density value to map to max value"
	float m_flDensityMax; // 0x1fc
	// MPropertyFriendlyName "Output minimum"
	Vector m_vecOutputMin; // 0x200
	// MPropertyFriendlyName "Output maximum"
	Vector m_vecOutputMax; // 0x20c
};

// Aligment: 7
// Size: 560
class C_OP_ForceBasedOnDistanceToPlane : public CParticleFunctionForce, CParticleFunction
{
public:
	// MPropertyFriendlyName "min distance from plane"
	float m_flMinDist; // 0x1f0
	// MPropertyFriendlyName "force at min distance"
	// MVectorIsCoordinate
	Vector m_vecForceAtMinDist; // 0x1f4
	// MPropertyFriendlyName "max distance from plane"
	float m_flMaxDist; // 0x200
	// MPropertyFriendlyName "force at max distance"
	// MVectorIsCoordinate
	Vector m_vecForceAtMaxDist; // 0x204
	// MPropertyFriendlyName "plane normal"
	// MVectorIsCoordinate
	Vector m_vecPlaneNormal; // 0x210
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x21c
	// MPropertyFriendlyName "exponent"
	float m_flExponent; // 0x220
};

// Aligment: 0
// Size: 496
class C_OP_EndCapDecay : public CParticleFunctionOperator, CParticleFunction
{
public:
// <no members described>
};

// Aligment: 15
// Size: 2240
class C_INIT_DistanceToCPInit : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f0
	// MPropertyFriendlyName "distance minimum"
	CPerParticleFloatInput m_flInputMin; // 0x1f8
	// MPropertyFriendlyName "distance maximum"
	CPerParticleFloatInput m_flInputMax; // 0x330
	// MPropertyFriendlyName "output minimum"
	CPerParticleFloatInput m_flOutputMin; // 0x468
	// MPropertyFriendlyName "output maximum"
	CPerParticleFloatInput m_flOutputMax; // 0x5a0
	// MPropertyFriendlyName "control point"
	int32_t m_nStartCP; // 0x6d8
	// MPropertyFriendlyName "ensure line of sight"
	bool m_bLOS; // 0x6dc
	// MPropertyFriendlyName "LOS collision group"
	char[128] m_CollisionGroupName; // 0x6dd
	// MPropertyFriendlyName "Trace Set"
	ParticleTraceSet_t m_nTraceSet; // 0x760
	// MPropertyFriendlyName "Maximum Trace Length"
	CPerParticleFloatInput m_flMaxTraceLength; // 0x768
	// MPropertyFriendlyName "LOS Failure Scalar"
	float m_flLOSScale; // 0x8a0
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x8a4
	// MPropertyFriendlyName "only active within specified distance"
	bool m_bActiveRange; // 0x8a8
	// MPropertyFriendlyName "distance component scale"
	Vector m_vecDistanceScale; // 0x8ac
	// MPropertyFriendlyName "remap bias"
	float m_flRemapBias; // 0x8b8
};

// Aligment: 3
// Size: 832
class C_OP_EnableChildrenFromParentParticleCount : public CParticleFunctionPreEmission, CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "group ID to affect"
	int32_t m_nChildGroupID; // 0x200
	// MPropertyFriendlyName "first child to enable"
	int32_t m_nFirstChild; // 0x204
	// MPropertyFriendlyName "max # of children to enable (-1 for max particle count)"
	CParticleCollectionFloatInput m_nNumChildrenToEnable; // 0x208
};

// Aligment: 3
// Size: 576
class C_OP_RenderFlattenGrass : public CParticleFunctionRenderer, CParticleFunction
{
public:
	// MPropertyFriendlyName "flattening strength"
	float m_flFlattenStrength; // 0x230
	// MPropertyFriendlyName "strength field override"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nStrengthFieldOverride; // 0x234
	// MPropertyFriendlyName "radius scale"
	float m_flRadiusScale; // 0x238
};

// Aligment: 6
// Size: 528
class C_OP_MovementRigidAttachToCP : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1f0
	// MPropertyFriendlyName "scale control point number"
	int32_t m_nScaleControlPoint; // 0x1f4
	// MPropertyFriendlyName "scale control point field"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nScaleCPField; // 0x1f8
	// MPropertyFriendlyName "cache attribute to read from"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldInput; // 0x1fc
	// MPropertyFriendlyName "attribute to write to"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x200
	// MPropertyFriendlyName "local space"
	bool m_bOffsetLocal; // 0x204
};

// Aligment: 9
// Size: 544
class C_INIT_ChaoticAttractor : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "pickover A parameter"
	float m_flAParm; // 0x1f0
	// MPropertyFriendlyName "pickover B parameter"
	float m_flBParm; // 0x1f4
	// MPropertyFriendlyName "pickover C parameter"
	float m_flCParm; // 0x1f8
	// MPropertyFriendlyName "pickover D parameter"
	float m_flDParm; // 0x1fc
	// MPropertyFriendlyName "scale"
	float m_flScale; // 0x200
	// MPropertyFriendlyName "speed min"
	float m_flSpeedMin; // 0x204
	// MPropertyFriendlyName "speed max"
	float m_flSpeedMax; // 0x208
	// MPropertyFriendlyName "relative control point number"
	int32_t m_nBaseCP; // 0x20c
	// MPropertyFriendlyName "uniform speed"
	bool m_bUniformSpeed; // 0x210
};

// Aligment: 4
// Size: 560
class C_OP_RampScalarLinearSimple : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "ramp rate"
	float m_Rate; // 0x1f0
	// MPropertyFriendlyName "start time"
	float m_flStartTime; // 0x1f4
	// MPropertyFriendlyName "end time"
	float m_flEndTime; // 0x1f8
	// MPropertyFriendlyName "ramp field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nField; // 0x220
};

// Aligment: 5
// Size: 528
class C_INIT_InheritFromParentParticles : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "scale"
	float m_flScale; // 0x1f0
	// MPropertyFriendlyName "inherited field"
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f4
	// MPropertyFriendlyName "particle increment amount"
	int32_t m_nIncrement; // 0x1f8
	// MPropertyFriendlyName "random parent particle distribution"
	bool m_bRandomDistribution; // 0x1fc
	// MPropertyFriendlyName "random seed"
	int32_t m_nRandomSeed; // 0x200
};

// Aligment: 12
// Size: 544
class C_INIT_RemapParticleCountToScalar : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f0
	// MPropertyFriendlyName "input minimum"
	int32_t m_nInputMin; // 0x1f4
	// MPropertyFriendlyName "input maximum"
	int32_t m_nInputMax; // 0x1f8
	// MPropertyFriendlyName "input scale control point"
	int32_t m_nScaleControlPoint; // 0x1fc
	// MPropertyFriendlyName "input scale control point field"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nScaleControlPointField; // 0x200
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x204
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x208
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x20c
	// MPropertyFriendlyName "only active within specified input range"
	bool m_bActiveRange; // 0x210
	// MPropertyFriendlyName "invert input from total particle count"
	bool m_bInvert; // 0x211
	// MPropertyFriendlyName "wrap input"
	bool m_bWrap; // 0x212
	// MPropertyFriendlyName "remap bias"
	float m_flRemapBias; // 0x214
};

// Aligment: 10
// Size: 576
class C_INIT_RandomColor : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "color1"
	Color m_ColorMin; // 0x20c
	// MPropertyFriendlyName "color2"
	Color m_ColorMax; // 0x210
	// MPropertyFriendlyName "tint clamp min"
	Color m_TintMin; // 0x214
	// MPropertyFriendlyName "tint clamp max"
	Color m_TintMax; // 0x218
	// MPropertyFriendlyName "tint perc"
	float m_flTintPerc; // 0x21c
	// MPropertyFriendlyName "tint update movement threshold"
	float m_flUpdateThreshold; // 0x220
	// MPropertyFriendlyName "tint control point"
	int32_t m_nTintCP; // 0x224
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x228
	// MPropertyFriendlyName "tint blend mode"
	ParticleColorBlendMode_t m_nTintBlendMode; // 0x22c
	// MPropertyFriendlyName "light amplification amount"
	float m_flLightAmplification; // 0x230
};

// Aligment: 4
// Size: 864
class C_OP_LerpToOtherAttribute : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "Interpolation"
	CPerParticleFloatInput m_flInterpolation; // 0x1f0
	// MPropertyFriendlyName "input attribute from"
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nFieldInputFrom; // 0x328
	// MPropertyFriendlyName "input attribute to"
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nFieldInput; // 0x32c
	// MPropertyFriendlyName "output attribute"
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x330
};

// Aligment: 5
// Size: 544
class C_INIT_PointList : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f0
	// MPropertyFriendlyName "point list"
	CUtlVector< PointDefinition_t > m_pointList; // 0x1f8
	// MPropertyFriendlyName "space points along path"
	bool m_bPlaceAlongPath; // 0x210
	// MPropertyFriendlyName "Treat path as a loop"
	bool m_bClosedLoop; // 0x211
	// MPropertyFriendlyName "Numer of points along path"
	int32_t m_nNumPointsAlongPath; // 0x214
};

// Aligment: 43
// Size: 312
class CParticleFloatInput
{
public:
	ParticleFloatType_t m_nType; // 0x0
	ParticleFloatMapType_t m_nMapType; // 0x4
	float m_flLiteralValue; // 0x8
	CKV3MemberNameWithStorage m_NamedValue; // 0x10
	int32_t m_nControlPoint; // 0x48
	ParticleAttributeIndex_t m_nScalarAttribute; // 0x4c
	ParticleAttributeIndex_t m_nVectorAttribute; // 0x50
	int32_t m_nVectorComponent; // 0x54
	float m_flRandomMin; // 0x58
	float m_flRandomMax; // 0x5c
	bool m_bHasRandomSignFlip; // 0x60
	ParticleFloatRandomMode_t m_nRandomMode; // 0x64
	float m_flLOD0; // 0x6c
	float m_flLOD1; // 0x70
	float m_flLOD2; // 0x74
	float m_flLOD3; // 0x78
	ParticleAttributeIndex_t m_nNoiseInputVectorAttribute; // 0x7c
	float m_flNoiseOutputMin; // 0x80
	float m_flNoiseOutputMax; // 0x84
	float m_flNoiseScale; // 0x88
	Vector m_vecNoiseOffsetRate; // 0x8c
	float m_flNoiseOffset; // 0x98
	int32_t m_nNoiseOctaves; // 0x9c
	PFNoiseTurbulence_t m_nNoiseTurbulence; // 0xa0
	PFNoiseType_t m_nNoiseType; // 0xa4
	PFNoiseModifier_t m_nNoiseModifier; // 0xa8
	float m_flNoiseTurbulenceScale; // 0xac
	float m_flNoiseTurbulenceMix; // 0xb0
	float m_flNoiseImgPreviewScale; // 0xb4
	bool m_bNoiseImgPreviewLive; // 0xb8
	ParticleFloatInputMode_t m_nInputMode; // 0xc0
	float m_flMultFactor; // 0xc4
	float m_flInput0; // 0xc8
	float m_flInput1; // 0xcc
	float m_flOutput0; // 0xd0
	float m_flOutput1; // 0xd4
	float m_flNotchedRangeMin; // 0xd8
	float m_flNotchedRangeMax; // 0xdc
	float m_flNotchedOutputOutside; // 0xe0
	float m_flNotchedOutputInside; // 0xe4
	ParticleFloatBiasType_t m_nBiasType; // 0xe8
	float m_flBiasParameter; // 0xec
	CPiecewiseCurve m_Curve; // 0xf0
};

// Aligment: 8
// Size: 976
class C_OP_MoveToHitbox : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1f0
	// MPropertyFriendlyName "lifetime lerp start"
	float m_flLifeTimeLerpStart; // 0x1f8
	// MPropertyFriendlyName "lifetime lerp end"
	float m_flLifeTimeLerpEnd; // 0x1fc
	// MPropertyFriendlyName "previous position scale"
	float m_flPrevPosScale; // 0x200
	// MPropertyFriendlyName "hitbox set"
	char[128] m_HitboxSetName; // 0x204
	// MPropertyFriendlyName "use bones instead of hitboxes"
	bool m_bUseBones; // 0x284
	// MPropertyFriendlyName "lerp type"
	HitboxLerpType_t m_nLerpType; // 0x288
	// MPropertyFriendlyName "Constant Interpolation"
	CPerParticleFloatInput m_flInterpolation; // 0x290
};

// Aligment: 1
// Size: 1984
class C_INIT_ScaleVelocity : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "velocity scale"
	// MVectorIsCoordinate
	CParticleCollectionVecInput m_vecScale; // 0x1f0
};

// Aligment: 7
// Size: 592
class C_OP_RemapNamedModelElementEndCap : public CParticleFunctionOperator, CParticleFunction
{
public:
	CStrongHandle< InfoForResourceTypeCModel > m_hModel; // 0x1f0
	// MPropertyFriendlyName "input names"
	CUtlVector< CUtlString > m_inNames; // 0x1f8
	// MPropertyFriendlyName "output names"
	CUtlVector< CUtlString > m_outNames; // 0x210
	// MPropertyFriendlyName "fallback names when the input doesn't match"
	CUtlVector< CUtlString > m_fallbackNames; // 0x228
	// MPropertyFriendlyName "model from renderer"
	bool m_bModelFromRenderer; // 0x240
	// MPropertyFriendlyName "input field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldInput; // 0x244
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x248
};

// Aligment: 2
// Size: 816
class C_OP_CPVelocityForce : public CParticleFunctionForce, CParticleFunction
{
public:
	// MPropertyFriendlyName "control point"
	int32_t m_nControlPointNumber; // 0x1f0
	// MPropertyFriendlyName "velocity scale"
	CPerParticleFloatInput m_flScale; // 0x1f8
};

// Aligment: 7
// Size: 528
class C_INIT_CreateSpiralSphere : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1f0
	// MPropertyFriendlyName "override CP (X/Y/Z *= radius/density/speed)"
	int32_t m_nOverrideCP; // 0x1f4
	// MPropertyFriendlyName "density"
	int32_t m_nDensity; // 0x1f8
	// MPropertyFriendlyName "initial radius"
	float m_flInitialRadius; // 0x1fc
	// MPropertyFriendlyName "min initial speed"
	float m_flInitialSpeedMin; // 0x200
	// MPropertyFriendlyName "max initial speed"
	float m_flInitialSpeedMax; // 0x204
	// MPropertyFriendlyName "use particle count as density scale"
	bool m_bUseParticleCount; // 0x208
};

// Aligment: 6
// Size: 528
class C_OP_LockPoints : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "min column/particle index to affect"
	int32_t m_nMinCol; // 0x1f0
	// MPropertyFriendlyName "max column/particle index to affect"
	int32_t m_nMaxCol; // 0x1f4
	// MPropertyFriendlyName "min row/particle index to affect"
	int32_t m_nMinRow; // 0x1f8
	// MPropertyFriendlyName "max row/particle index to affect"
	int32_t m_nMaxRow; // 0x1fc
	// MPropertyFriendlyName "control point to lock to"
	int32_t m_nControlPoint; // 0x200
	// MPropertyFriendlyName "amount of current position to preserve"
	float m_flBlendValue; // 0x204
};

// Aligment: 4
// Size: 832
class C_INIT_CreateFromCPs : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "control point increment amount"
	int32_t m_nIncrement; // 0x1f0
	// MPropertyFriendlyName "starting control point"
	int32_t m_nMinCP; // 0x1f4
	// MPropertyFriendlyName "ending control point"
	// MParticleMinVersion
	int32_t m_nMaxCP; // 0x1f8
	// MPropertyFriendlyName "dynamic control point count"
	CParticleCollectionFloatInput m_nDynamicCPCount; // 0x200
};

// Aligment: 7
// Size: 1152
class C_OP_PlanarConstraint : public CParticleFunctionConstraint, CParticleFunction
{
public:
	// MPropertyFriendlyName "plane point"
	// MVectorIsCoordinate
	Vector m_PointOnPlane; // 0x1f0
	// MPropertyFriendlyName "plane normal"
	Vector m_PlaneNormal; // 0x1fc
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x208
	// MPropertyFriendlyName "global origin"
	bool m_bGlobalOrigin; // 0x20c
	// MPropertyFriendlyName "global normal"
	bool m_bGlobalNormal; // 0x20d
	// MPropertyFriendlyName "radius scale"
	CPerParticleFloatInput m_flRadiusScale; // 0x210
	// MPropertyFriendlyName "falloff distance from control point"
	CParticleCollectionFloatInput m_flMaximumDistanceToCP; // 0x348
};

// Aligment: 2
// Size: 16
struct ModelReference_t
{
public:
	// MPropertyFriendlyName "model"
	CStrongHandle< InfoForResourceTypeCModel > m_model; // 0x0
	// MPropertyFriendlyName "Relative probability"
	float m_flRelativeProbabilityOfSpawn; // 0x8
};

// Aligment: 5
// Size: 1456
class C_OP_SelectivelyEnableChildren : public CParticleFunctionPreEmission, CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "group ID to affect"
	CParticleCollectionFloatInput m_nChildGroupID; // 0x200
	// MPropertyFriendlyName "first child to enable"
	CParticleCollectionFloatInput m_nFirstChild; // 0x338
	// MPropertyFriendlyName "# of children to enable"
	CParticleCollectionFloatInput m_nNumChildrenToEnable; // 0x470
	// MPropertyFriendlyName "play endcap when children are removed"
	bool m_bPlayEndcapOnStop; // 0x5a8
	// MPropertyFriendlyName "destroy particles immediately when child is removed"
	bool m_bDestroyImmediately; // 0x5a9
};

// Aligment: 1
// Size: 496
class CParticleFunctionInitializer : public CParticleFunction
{
public:
	// MPropertyFriendlyName "Associated emitter Index"
	int32_t m_nAssociatedEmitterIndex; // 0x1e8
};

// Aligment: 15
// Size: 560
class C_OP_NoiseEmitter : public CParticleFunctionEmitter, CParticleFunction
{
public:
	// MPropertyFriendlyName "emission duration"
	float m_flEmissionDuration; // 0x1f0
	// MPropertyFriendlyName "emission start time"
	float m_flStartTime; // 0x1f4
	// MPropertyFriendlyName "scale emission to used control points"
	// MParticleMaxVersion
	float m_flEmissionScale; // 0x1f8
	// MPropertyFriendlyName "emission count scale control point"
	int32_t m_nScaleControlPoint; // 0x1fc
	// MPropertyFriendlyName "emission count scale control point field"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nScaleControlPointField; // 0x200
	// MPropertyFriendlyName "world noise scale control point"
	int32_t m_nWorldNoisePoint; // 0x204
	// MPropertyFriendlyName "absolute value"
	bool m_bAbsVal; // 0x208
	// MPropertyFriendlyName "invert absolute value"
	bool m_bAbsValInv; // 0x209
	// MPropertyFriendlyName "time coordinate offset"
	float m_flOffset; // 0x20c
	// MPropertyFriendlyName "emission minimum"
	float m_flOutputMin; // 0x210
	// MPropertyFriendlyName "emission maximum"
	float m_flOutputMax; // 0x214
	// MPropertyFriendlyName "time noise coordinate scale"
	float m_flNoiseScale; // 0x218
	// MPropertyFriendlyName "world spatial noise coordinate scale"
	float m_flWorldNoiseScale; // 0x21c
	// MPropertyFriendlyName "spatial coordinate offset"
	// MVectorIsCoordinate
	Vector m_vecOffsetLoc; // 0x220
	// MPropertyFriendlyName "world time noise coordinate scale"
	float m_flWorldTimeScale; // 0x22c
};

// Aligment: 8
// Size: 528
class C_INIT_InitialSequenceFromModel : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1f0
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f4
	// MPropertyFriendlyName "current anim time output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutputAnim; // 0x1f8
	// MPropertyFriendlyName "input minimum"
	float m_flInputMin; // 0x1fc
	// MPropertyFriendlyName "input maximum"
	float m_flInputMax; // 0x200
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x204
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x208
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x20c
};

// Aligment: 12
// Size: 576
class C_INIT_RemapScalarToVector : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "input field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldInput; // 0x1f0
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f4
	// MPropertyFriendlyName "input minimum"
	float m_flInputMin; // 0x1f8
	// MPropertyFriendlyName "input maximum"
	float m_flInputMax; // 0x1fc
	// MPropertyFriendlyName "output minimum"
	// MVectorIsSometimesCoordinate
	Vector m_vecOutputMin; // 0x200
	// MPropertyFriendlyName "output maximum"
	// MVectorIsSometimesCoordinate
	Vector m_vecOutputMax; // 0x20c
	// MPropertyFriendlyName "emitter lifetime start time (seconds)"
	float m_flStartTime; // 0x218
	// MPropertyFriendlyName "emitter lifetime end time (seconds)"
	float m_flEndTime; // 0x21c
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x220
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x224
	// MPropertyFriendlyName "use local system"
	bool m_bLocalCoords; // 0x228
	// MPropertyFriendlyName "remap bias"
	float m_flRemapBias; // 0x22c
};

// Aligment: 0
// Size: 576
class C_INIT_RemapNamedModelBodyPartToScalar : public C_INIT_RemapNamedModelElementToScalar, CParticleFunctionInitializer, CParticleFunction
{
public:
// <no members described>
};

// Aligment: 1
// Size: 512
class C_OP_RadiusDecay : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "minimum radius"
	float m_flMinRadius; // 0x1f0
};

// Aligment: 14
// Size: 6304
class C_INIT_CreateWithinSphereTransform : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "distance min"
	CPerParticleFloatInput m_fRadiusMin; // 0x1f0
	// MPropertyFriendlyName "distance max"
	CPerParticleFloatInput m_fRadiusMax; // 0x328
	// MPropertyFriendlyName "distance bias"
	// MVectorIsCoordinate
	CPerParticleVecInput m_vecDistanceBias; // 0x460
	// MPropertyFriendlyName "distance bias absolute value"
	// MVectorIsCoordinate
	Vector m_vecDistanceBiasAbs; // 0xa28
	// MPropertyFriendlyName "input position transform"
	CParticleTransformInput m_TransformInput; // 0xa38
	// MPropertyFriendlyName "speed min"
	CPerParticleFloatInput m_fSpeedMin; // 0xa88
	// MPropertyFriendlyName "speed max"
	CPerParticleFloatInput m_fSpeedMax; // 0xbc0
	// MPropertyFriendlyName "speed random exponent"
	float m_fSpeedRandExp; // 0xcf8
	// MPropertyFriendlyName "bias in local system"
	bool m_bLocalCoords; // 0xcfc
	// MPropertyFriendlyName "randomly distribution growth time"
	float m_flEndCPGrowthTime; // 0xd00
	// MPropertyFriendlyName "speed in local coordinate system min"
	// MVectorIsCoordinate
	CPerParticleVecInput m_LocalCoordinateSystemSpeedMin; // 0xd08
	// MPropertyFriendlyName "speed in local coordinate system max"
	// MVectorIsCoordinate
	CPerParticleVecInput m_LocalCoordinateSystemSpeedMax; // 0x12d0
	// MPropertyFriendlyName "Output vector"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1898
	// MPropertyFriendlyName "Velocity vector"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldVelocity; // 0x189c
};

// Aligment: 7
// Size: 528
class C_OP_SnapshotSkinToBones : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "rotate normals"
	bool m_bTransformNormals; // 0x1f0
	// MPropertyFriendlyName "scale radii"
	bool m_bTransformRadii; // 0x1f1
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1f4
	// MPropertyFriendlyName "lifetime fade start"
	float m_flLifeTimeFadeStart; // 0x1f8
	// MPropertyFriendlyName "lifetime fade end"
	float m_flLifeTimeFadeEnd; // 0x1fc
	// MPropertyFriendlyName "instant jump threshold"
	float m_flJumpThreshold; // 0x200
	// MPropertyFriendlyName "previous position scale"
	float m_flPrevPosScale; // 0x204
};

// Aligment: 9
// Size: 672
class C_OP_SetCPOrientationToGroundNormal : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "interpolation rate"
	float m_flInterpRate; // 0x1f0
	// MPropertyFriendlyName "max trace length"
	float m_flMaxTraceLength; // 0x1f4
	// MPropertyFriendlyName "CP movement tolerance"
	float m_flTolerance; // 0x1f8
	// MPropertyFriendlyName "trace offset"
	float m_flTraceOffset; // 0x1fc
	// MPropertyFriendlyName "collision group"
	char[128] m_CollisionGroupName; // 0x200
	// MPropertyFriendlyName "Trace Set"
	ParticleTraceSet_t m_nTraceSet; // 0x280
	// MPropertyFriendlyName "CP to trace from"
	int32_t m_nInputCP; // 0x284
	// MPropertyFriendlyName "CP to set"
	int32_t m_nOutputCP; // 0x288
	// MPropertyFriendlyName "include water"
	bool m_bIncludeWater; // 0x298
};

// Aligment: 4
// Size: 528
class C_OP_TimeVaryingForce : public CParticleFunctionForce, CParticleFunction
{
public:
	// MPropertyFriendlyName "time to start transition"
	float m_flStartLerpTime; // 0x1f0
	// MPropertyFriendlyName "starting force"
	// MVectorIsCoordinate
	Vector m_StartingForce; // 0x1f4
	// MPropertyFriendlyName "time to end transition"
	float m_flEndLerpTime; // 0x200
	// MPropertyFriendlyName "ending force"
	// MVectorIsCoordinate
	Vector m_EndingForce; // 0x204
};

// Aligment: 9
// Size: 2584
struct TextureGroup_t
{
public:
	// MPropertyFriendlyName "Enabled"
	bool m_bEnabled; // 0x0
	// MPropertyFriendlyName "Author Texture As Gradient"
	// MPropertySuppressExpr "( m_nTextureType == SPRITECARD_TEXTURE_NORMALMAP || m_nTextureType == SPRITECARD_TEXTURE_ANIMMOTIONVEC || m_nTextureType == SPRITECARD_TEXTURE_6POINT_XYZ_A || m_nTextureType == SPRITECARD_TEXTURE_6POINT_NEGXYZ_E )"
	bool m_bReplaceTextureWithGradient; // 0x1
	// MPropertyFriendlyName "Texture"
	// MPropertySuppressExpr "m_bReplaceTextureWithGradient"
	// MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hTexture; // 0x8
	// MPropertyFriendlyName "Gradient"
	// MPropertySuppressExpr "!m_bReplaceTextureWithGradient"
	CColorGradient m_Gradient; // 0x10
	// MPropertyFriendlyName "Texture Type"
	SpriteCardTextureType_t m_nTextureType; // 0x28
	// MPropertyFriendlyName "Channel Mix"
	// MPropertySuppressExpr "( m_nTextureType == SPRITECARD_TEXTURE_NORMALMAP || m_nTextureType == SPRITECARD_TEXTURE_ANIMMOTIONVEC || m_nTextureType == SPRITECARD_TEXTURE_6POINT_XYZ_A || m_nTextureType == SPRITECARD_TEXTURE_6POINT_NEGXYZ_E )"
	SpriteCardTextureChannel_t m_nTextureChannels; // 0x2c
	// MPropertyFriendlyName "Mix Blend Mode"
	// MPropertySuppressExpr "( m_nTextureType == SPRITECARD_TEXTURE_NORMALMAP || m_nTextureType == SPRITECARD_TEXTURE_ANIMMOTIONVEC || m_nTextureType == SPRITECARD_TEXTURE_6POINT_XYZ_A || m_nTextureType == SPRITECARD_TEXTURE_6POINT_NEGXYZ_E )"
	ParticleTextureLayerBlendType_t m_nTextureBlendMode; // 0x30
	// MPropertyFriendlyName "Blend Amount"
	// MPropertySuppressExpr "( m_nTextureType == SPRITECARD_TEXTURE_NORMALMAP || m_nTextureType == SPRITECARD_TEXTURE_ANIMMOTIONVEC || m_nTextureType == SPRITECARD_TEXTURE_6POINT_XYZ_A || m_nTextureType == SPRITECARD_TEXTURE_6POINT_NEGXYZ_E )"
	CParticleCollectionFloatInput m_flTextureBlend; // 0x38
	// MPropertyFriendlyName "Texture Controls"
	// MPropertySuppressExpr "( m_nTextureType == SPRITECARD_TEXTURE_NORMALMAP || m_nTextureType == SPRITECARD_TEXTURE_ANIMMOTIONVEC || m_nTextureType == SPRITECARD_TEXTURE_6POINT_XYZ_A || m_nTextureType == SPRITECARD_TEXTURE_6POINT_NEGXYZ_E )"
	TextureControls_t m_TextureControls; // 0x170
};

// Aligment: 3
// Size: 528
class C_OP_SetControlPointFieldToWater : public CParticleFunctionPreEmission, CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "source CP"
	int32_t m_nSourceCP; // 0x200
	// MPropertyFriendlyName "dest CP"
	int32_t m_nDestCP; // 0x204
	// MPropertyFriendlyName "dest control point component"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nCPField; // 0x208
};

// Aligment: 5
// Size: 528
class C_OP_LerpVector : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f0
	// MPropertyFriendlyName "value to lerp to"
	// MVectorIsSometimesCoordinate
	Vector m_vecOutput; // 0x1f4
	// MPropertyFriendlyName "start time"
	float m_flStartTime; // 0x200
	// MPropertyFriendlyName "end time"
	float m_flEndTime; // 0x204
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x208
};

// Aligment: 5
// Size: 640
class C_INIT_InitialVelocityFromHitbox : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "velocity minimum"
	float m_flVelocityMin; // 0x1f0
	// MPropertyFriendlyName "velocity maximum"
	float m_flVelocityMax; // 0x1f4
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1f8
	// MPropertyFriendlyName "hitbox set"
	char[128] m_HitboxSetName; // 0x1fc
	// MPropertyFriendlyName "use bones instead of hitboxes"
	bool m_bUseBones; // 0x27c
};

// Aligment: 1
// Size: 512
class C_INIT_RadiusFromCPObject : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "control point"
	int32_t m_nControlPoint; // 0x1f0
};

// Aligment: 6
// Size: 512
class C_INIT_GlobalScale : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "scale amount"
	float m_flScale; // 0x1f0
	// MPropertyFriendlyName "scale control point number"
	int32_t m_nScaleControlPointNumber; // 0x1f4
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1f8
	// MPropertyFriendlyName "scale radius"
	bool m_bScaleRadius; // 0x1fc
	// MPropertyFriendlyName "scale position"
	bool m_bScalePosition; // 0x1fd
	// MPropertyFriendlyName "scale velocity"
	bool m_bScaleVelocity; // 0x1fe
};

// Aligment: 4
// Size: 544
class C_OP_HSVShiftToCP : public CParticleFunctionPreEmission, CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "Target color control point number"
	int32_t m_nColorCP; // 0x200
	// MPropertyFriendlyName "Color Gem Enable control point number"
	int32_t m_nColorGemEnableCP; // 0x204
	// MPropertyFriendlyName "output control point number"
	int32_t m_nOutputCP; // 0x208
	// MPropertyFriendlyName "Default HSV Color"
	Color m_DefaultHSVColor; // 0x20c
};

// Aligment: 5
// Size: 544
class C_OP_RemapBoundingVolumetoCP : public CParticleFunctionPreEmission, CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "output control point"
	int32_t m_nOutControlPointNumber; // 0x200
	// MPropertyFriendlyName "input volume minimum in cubic units"
	float m_flInputMin; // 0x204
	// MPropertyFriendlyName "input volume maximum in cubic units"
	float m_flInputMax; // 0x208
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x20c
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x210
};

// Aligment: 9
// Size: 608
class C_OP_RenderScreenShake : public CParticleFunctionRenderer, CParticleFunction
{
public:
	// MPropertyFriendlyName "duration scale"
	float m_flDurationScale; // 0x230
	// MPropertyFriendlyName "radius scale"
	float m_flRadiusScale; // 0x234
	// MPropertyFriendlyName "frequence scale"
	float m_flFrequencyScale; // 0x238
	// MPropertyFriendlyName "amplitude scale"
	float m_flAmplitudeScale; // 0x23c
	// MPropertyFriendlyName "radius field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nRadiusField; // 0x240
	// MPropertyFriendlyName "duration field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nDurationField; // 0x244
	// MPropertyFriendlyName "frequency field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFrequencyField; // 0x248
	// MPropertyFriendlyName "amplitude field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nAmplitudeField; // 0x24c
	// MPropertyFriendlyName "control point of shake recipient (-1 = global)"
	int32_t m_nFilterCP; // 0x250
};

// Aligment: 4
// Size: 512
class C_OP_FadeIn : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "fade in time min"
	float m_flFadeInTimeMin; // 0x1f0
	// MPropertyFriendlyName "fade in time max"
	float m_flFadeInTimeMax; // 0x1f4
	// MPropertyFriendlyName "fade in time exponent"
	float m_flFadeInTimeExp; // 0x1f8
	// MPropertyFriendlyName "proportional 0/1"
	bool m_bProportional; // 0x1fc
};

// Aligment: 1
// Size: 832
class C_OP_SetSimulationRate : public CParticleFunctionPreEmission, CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "simulation timescale"
	CParticleCollectionFloatInput m_flSimulationScale; // 0x200
};

// Aligment: 3
// Size: 512
class C_INIT_Orient2DRelToCP : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "control point"
	int32_t m_nCP; // 0x1f0
	// MPropertyFriendlyName "rotation field"
	// MPropertyAttributeChoiceName "particlefield_rotation"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f4
	// MPropertyFriendlyName "rotation offset"
	float m_flRotOffset; // 0x1f8
};

// Aligment: 6
// Size: 5568
class C_OP_CurlNoiseForce : public CParticleFunctionForce, CParticleFunction
{
public:
	// MPropertyFriendlyName "noise type"
	ParticleDirectionNoiseType_t m_nNoiseType; // 0x1f0
	// MPropertyFriendlyName "noise frequency"
	// MVectorIsCoordinate
	CPerParticleVecInput m_vecNoiseFreq; // 0x1f8
	// MPropertyFriendlyName "noise amplitude"
	// MVectorIsCoordinate
	CPerParticleVecInput m_vecNoiseScale; // 0x7c0
	// MPropertyFriendlyName "offset rate"
	// MVectorIsCoordinate
	CPerParticleVecInput m_vecOffsetRate; // 0xd88
	// MPropertyFriendlyName "worley seed"
	CPerParticleFloatInput m_flWorleySeed; // 0x1350
	// MPropertyFriendlyName "worley jitter"
	CPerParticleFloatInput m_flWorleyJitter; // 0x1488
};

// Aligment: 0
// Size: 8
class IControlPointEditorData
{
public:
// <no members described>
};

// Aligment: 4
// Size: 2320
class C_OP_SetControlPointRotation : public CParticleFunctionPreEmission, CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "rotation axis"
	// MVectorIsCoordinate
	CParticleCollectionVecInput m_vecRotAxis; // 0x200
	// MPropertyFriendlyName "rotation rate"
	CParticleCollectionFloatInput m_flRotRate; // 0x7c8
	// MPropertyFriendlyName "control point"
	int32_t m_nCP; // 0x900
	// MPropertyFriendlyName "local space control point"
	int32_t m_nLocalCP; // 0x904
};

// Aligment: 10
// Size: 560
class C_OP_RemapCPtoCP : public CParticleFunctionPreEmission, CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "input control point number"
	int32_t m_nInputControlPoint; // 0x200
	// MPropertyFriendlyName "output control point number"
	int32_t m_nOutputControlPoint; // 0x204
	// MPropertyFriendlyName "input field"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nInputField; // 0x208
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nOutputField; // 0x20c
	// MPropertyFriendlyName "input minimum"
	float m_flInputMin; // 0x210
	// MPropertyFriendlyName "input maximum"
	float m_flInputMax; // 0x214
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x218
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x21c
	// MPropertyFriendlyName "use the derivative"
	bool m_bDerivative; // 0x220
	// MPropertyFriendlyName "interpolation"
	float m_flInterpRate; // 0x224
};

// Aligment: 11
// Size: 544
class C_OP_RemapDotProductToScalar : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "first input control point"
	int32_t m_nInputCP1; // 0x1f0
	// MPropertyFriendlyName "second input control point"
	int32_t m_nInputCP2; // 0x1f4
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f8
	// MPropertyFriendlyName "input minimum (-1 to 1)"
	float m_flInputMin; // 0x1fc
	// MPropertyFriendlyName "input maximum (-1 to 1)"
	float m_flInputMax; // 0x200
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x204
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x208
	// MPropertyFriendlyName "use particle velocity for first input"
	bool m_bUseParticleVelocity; // 0x20c
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x210
	// MPropertyFriendlyName "only active within specified input range"
	bool m_bActiveRange; // 0x214
	// MPropertyFriendlyName "use particle normal for first input"
	bool m_bUseParticleNormal; // 0x215
};

// Aligment: 7
// Size: 544
class C_OP_RemapAverageScalarValuetoCP : public CParticleFunctionPreEmission, CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "output control point"
	int32_t m_nOutControlPointNumber; // 0x200
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nOutVectorField; // 0x204
	// MPropertyFriendlyName "scalar field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nField; // 0x208
	// MPropertyFriendlyName "input volume minimum"
	float m_flInputMin; // 0x20c
	// MPropertyFriendlyName "input volume maximum"
	float m_flInputMax; // 0x210
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x214
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x218
};

// Aligment: 2
// Size: 528
class C_OP_SetControlPointToCenter : public CParticleFunctionPreEmission, CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "control point number to set"
	int32_t m_nCP1; // 0x200
	// MPropertyFriendlyName "center offset"
	// MVectorIsCoordinate
	Vector m_vecCP1Pos; // 0x204
};

// Aligment: 4
// Size: 512
class C_OP_RemapControlPointOrientationToRotation : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "control point"
	int32_t m_nCP; // 0x1f0
	// MPropertyFriendlyName "rotation field"
	// MPropertyAttributeChoiceName "particlefield_rotation"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f4
	// MPropertyFriendlyName "offset rotation"
	float m_flOffsetRot; // 0x1f8
	// MPropertyFriendlyName "control point axis"
	// MPropertyAttributeChoiceName "vector_component"
	// MVectorIsSometimesCoordinate
	int32_t m_nComponent; // 0x1fc
};

// Aligment: 15
// Size: 3472
class C_OP_DistanceToTransform : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f0
	// MPropertyFriendlyName "distance minimum"
	CPerParticleFloatInput m_flInputMin; // 0x1f8
	// MPropertyFriendlyName "distance maximum"
	CPerParticleFloatInput m_flInputMax; // 0x330
	// MPropertyFriendlyName "output minimum"
	CPerParticleFloatInput m_flOutputMin; // 0x468
	// MPropertyFriendlyName "output maximum"
	CPerParticleFloatInput m_flOutputMax; // 0x5a0
	// MPropertyFriendlyName "transform input"
	CParticleTransformInput m_TransformStart; // 0x6d8
	// MPropertyFriendlyName "ensure line of sight"
	bool m_bLOS; // 0x728
	// MPropertyFriendlyName "LOS collision group"
	char[128] m_CollisionGroupName; // 0x729
	// MPropertyFriendlyName "Trace Set"
	ParticleTraceSet_t m_nTraceSet; // 0x7ac
	// MPropertyFriendlyName "maximum trace length"
	float m_flMaxTraceLength; // 0x7b0
	// MPropertyFriendlyName "LOS Failure Scalar"
	float m_flLOSScale; // 0x7b4
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x7b8
	// MPropertyFriendlyName "only active within specified distance"
	bool m_bActiveRange; // 0x7bc
	// MPropertyFriendlyName "output is additive"
	bool m_bAdditive; // 0x7bd
	// MPropertyFriendlyName "component scale"
	CPerParticleVecInput m_vecComponentScale; // 0x7c0
};

// Aligment: 29
// Size: 4640
class C_OP_RenderStandardLight : public CParticleFunctionRenderer, CParticleFunction
{
public:
	// MPropertyFriendlyName "light type"
	ParticleLightTypeChoiceList_t m_nLightType; // 0x230
	// MPropertyFriendlyName "color blend"
	CParticleCollectionVecInput m_vecColorScale; // 0x238
	// MPropertyFriendlyName "color blend type"
	ParticleColorBlendType_t m_nColorBlendType; // 0x800
	// MPropertyFriendlyName "intensity"
	CParticleCollectionFloatInput m_flIntensity; // 0x808
	// MPropertyFriendlyName "cast shadows"
	// MPropertySuppressExpr "m_nLightType == PARTICLE_LIGHT_TYPE_FX"
	bool m_bCastShadows; // 0x940
	// MPropertyFriendlyName "inner cone angle"
	// MPropertySuppressExpr "m_nLightType != PARTICLE_LIGHT_TYPE_SPOT"
	CParticleCollectionFloatInput m_flTheta; // 0x948
	// MPropertyFriendlyName "outer cone angle"
	// MPropertySuppressExpr "m_nLightType != PARTICLE_LIGHT_TYPE_SPOT"
	CParticleCollectionFloatInput m_flPhi; // 0xa80
	// MPropertyFriendlyName "light radius multiplier"
	CParticleCollectionFloatInput m_flRadiusMultiplier; // 0xbb8
	// MPropertyFriendlyName "attenuation type"
	StandardLightingAttenuationStyle_t m_nAttenuationStyle; // 0xcf0
	// MPropertyFriendlyName "falloff linearity"
	// MPropertySuppressExpr "m_nAttenuationStyle == LIGHT_STYLE_NEW || ( m_nAttenuationStyle == LIGHT_STYLE_OLD && m_nLightType == PARTICLE_LIGHT_TYPE_FX )"
	CParticleCollectionFloatInput m_flFalloffLinearity; // 0xcf8
	// MPropertyFriendlyName "falloff fifty percent"
	// MPropertySuppressExpr "m_nAttenuationStyle == LIGHT_STYLE_OLD"
	CParticleCollectionFloatInput m_flFiftyPercentFalloff; // 0xe30
	// MPropertyFriendlyName "falloff zero percent"
	// MPropertySuppressExpr "m_nAttenuationStyle == LIGHT_STYLE_OLD"
	CParticleCollectionFloatInput m_flZeroPercentFalloff; // 0xf68
	// MPropertyFriendlyName "render diffuse"
	// MPropertySuppressExpr "m_nLightType == PARTICLE_LIGHT_TYPE_FX"
	bool m_bRenderDiffuse; // 0x10a0
	// MPropertyFriendlyName "render specular"
	// MPropertySuppressExpr "m_nLightType == PARTICLE_LIGHT_TYPE_FX"
	bool m_bRenderSpecular; // 0x10a1
	// MPropertyFriendlyName "light cookie string"
	CUtlString m_lightCookie; // 0x10a8
	// MPropertyFriendlyName "light priority"
	int32_t m_nPriority; // 0x10b0
	// MPropertyFriendlyName "fog lighting mode"
	// MPropertySuppressExpr "m_nLightType == PARTICLE_LIGHT_TYPE_FX"
	ParticleLightFogLightingMode_t m_nFogLightingMode; // 0x10b4
	// MPropertyFriendlyName "fog contribution"
	// MPropertySuppressExpr "m_nLightType == PARTICLE_LIGHT_TYPE_FX"
	CParticleCollectionFloatInput m_flFogContribution; // 0x10b8
	// MPropertyFriendlyName "capsule behavior"
	ParticleLightBehaviorChoiceList_t m_nCapsuleLightBehavior; // 0x11f0
	// MPropertyStartGroup "Capsule Light Controls"
	// MPropertyFriendlyName "capsule length"
	// MPropertySuppressExpr "m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_ROPE || m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_TRAILS"
	float m_flCapsuleLength; // 0x11f4
	// MPropertyFriendlyName "reverse point order"
	// MPropertySuppressExpr "m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_FOLLOW_DIRECTION || m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_TRAILS"
	bool m_bReverseOrder; // 0x11f8
	// MPropertyFriendlyName "Closed loop"
	// MPropertySuppressExpr "m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_FOLLOW_DIRECTION || m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_TRAILS"
	bool m_bClosedLoop; // 0x11f9
	// MPropertyFriendlyName "Anchor point source"
	// MPropertyAttributeChoiceName "particlefield_vector"
	// MPropertySuppressExpr "m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_FOLLOW_DIRECTION || m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_ROPE"
	ParticleAttributeIndex_t m_nPrevPntSource; // 0x11fc
	// MPropertyFriendlyName "max length"
	// MPropertySuppressExpr "m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_FOLLOW_DIRECTION || m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_ROPE"
	float m_flMaxLength; // 0x1200
	// MPropertyFriendlyName "min length"
	// MPropertySuppressExpr "m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_FOLLOW_DIRECTION || m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_ROPE"
	float m_flMinLength; // 0x1204
	// MPropertyFriendlyName "ignore delta time"
	// MPropertySuppressExpr "m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_FOLLOW_DIRECTION || m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_ROPE"
	bool m_bIgnoreDT; // 0x1208
	// MPropertyFriendlyName "constrain radius to no more than this times the length"
	// MPropertySuppressExpr "m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_FOLLOW_DIRECTION || m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_ROPE"
	float m_flConstrainRadiusToLengthRatio; // 0x120c
	// MPropertyFriendlyName "amount to scale trail length by"
	// MPropertySuppressExpr "m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_FOLLOW_DIRECTION || m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_ROPE"
	float m_flLengthScale; // 0x1210
	// MPropertyFriendlyName "how long before a trail grows to its full length"
	// MPropertySuppressExpr "m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_FOLLOW_DIRECTION || m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_ROPE"
	float m_flLengthFadeInTime; // 0x1214
};

// Aligment: 1
// Size: 512
class C_OP_WindForce : public CParticleFunctionForce, CParticleFunction
{
public:
	// MPropertyFriendlyName "force to apply"
	// MVectorIsCoordinate
	Vector m_vForce; // 0x1f0
};

// Aligment: 0
// Size: 312
class CParticleCollectionFloatInput : public CParticleFloatInput
{
public:
// <no members described>
};

// Aligment: 0
// Size: 8
class IParticleSystemDefinition
{
public:
// <no members described>
};

// Aligment: 11
// Size: 544
class C_INIT_RemapCPtoScalar : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "input control point number"
	int32_t m_nCPInput; // 0x1f0
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f4
	// MPropertyFriendlyName "input field 0-2 X/Y/Z"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nField; // 0x1f8
	// MPropertyFriendlyName "input minimum"
	float m_flInputMin; // 0x1fc
	// MPropertyFriendlyName "input maximum"
	float m_flInputMax; // 0x200
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x204
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x208
	// MPropertyFriendlyName "emitter lifetime start time (seconds)"
	float m_flStartTime; // 0x20c
	// MPropertyFriendlyName "emitter lifetime end time (seconds)"
	float m_flEndTime; // 0x210
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x214
	// MPropertyFriendlyName "remap bias"
	float m_flRemapBias; // 0x218
};

// Aligment: 6
// Size: 608
class C_OP_RenderStatusEffectCitadel : public CParticleFunctionRenderer, CParticleFunction
{
public:
	// MPropertyFriendlyName "color warp texture (3d)"
	// MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
	CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureColorWarp; // 0x230
	// MPropertyFriendlyName "normal texture"
	// MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
	CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureNormal; // 0x238
	// MPropertyFriendlyName "metalness texture"
	// MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
	CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureMetalness; // 0x240
	// MPropertyFriendlyName "roughness texture"
	// MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
	CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureRoughness; // 0x248
	// MPropertyFriendlyName "self illum texture"
	// MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
	CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureSelfIllum; // 0x250
	// MPropertyFriendlyName "detail texture"
	// MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
	CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureDetail; // 0x258
};

// Aligment: 3
// Size: 3472
class C_OP_ClampVector : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f0
	// MPropertyFriendlyName "output minimum"
	// MVectorIsSometimesCoordinate
	CPerParticleVecInput m_vecOutputMin; // 0x1f8
	// MPropertyFriendlyName "output maximum"
	// MVectorIsSometimesCoordinate
	CPerParticleVecInput m_vecOutputMax; // 0x7c0
};

// Aligment: 7
// Size: 576
class C_INIT_RemapNamedModelElementToScalar : public CParticleFunctionInitializer, CParticleFunction
{
public:
	CStrongHandle< InfoForResourceTypeCModel > m_hModel; // 0x1f0
	// MPropertyFriendlyName "names"
	CUtlVector< CUtlString > m_names; // 0x1f8
	// MPropertyFriendlyName "remap values for names"
	CUtlVector< float32 > m_values; // 0x210
	// MPropertyFriendlyName "input field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldInput; // 0x228
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x22c
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x230
	// MPropertyFriendlyName "model from renderer"
	bool m_bModelFromRenderer; // 0x234
};

// Aligment: 4
// Size: 576
class C_OP_LockToSavedSequentialPath : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "start fade time"
	float m_flFadeStart; // 0x1f4
	// MPropertyFriendlyName "end fade time"
	float m_flFadeEnd; // 0x1f8
	// MPropertyFriendlyName "Use sequential CP pairs between start and end point"
	bool m_bCPPairs; // 0x1fc
	CPathParameters m_PathParams; // 0x200
};

// Aligment: 3
// Size: 528
class CGeneralSpin : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "spin rate degrees"
	int32_t m_nSpinRateDegrees; // 0x1f0
	// MPropertyFriendlyName "spin rate min"
	int32_t m_nSpinRateMinDegrees; // 0x1f4
	// MPropertyFriendlyName "spin stop time"
	float m_fSpinRateStopTime; // 0x1fc
};

// Aligment: 3
// Size: 832
class C_OP_StopAfterCPDuration : public CParticleFunctionPreEmission, CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "duration at which to stop"
	CParticleCollectionFloatInput m_flDuration; // 0x200
	// MPropertyFriendlyName "destroy all particles immediately"
	bool m_bDestroyImmediately; // 0x338
	// MPropertyFriendlyName "play end cap effect"
	bool m_bPlayEndCap; // 0x339
};

// Aligment: 0
// Size: 592
class C_OP_RemapNamedModelBodyPartEndCap : public C_OP_RemapNamedModelElementEndCap, CParticleFunctionOperator, CParticleFunction
{
public:
// <no members described>
};

// Aligment: 7
// Size: 592
class C_OP_MaintainSequentialPath : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "maximum distance"
	float m_fMaxDistance; // 0x1f0
	// MPropertyFriendlyName "particles to map from start to end"
	float m_flNumToAssign; // 0x1f4
	// MPropertyFriendlyName "cohesion strength"
	float m_flCohesionStrength; // 0x1f8
	// MPropertyFriendlyName "control point movement tolerance"
	float m_flTolerance; // 0x1fc
	// MPropertyFriendlyName "restart behavior (0 = bounce, 1 = loop )"
	bool m_bLoop; // 0x200
	// MPropertyFriendlyName "use existing particle count"
	bool m_bUseParticleCount; // 0x201
	CPathParameters m_PathParams; // 0x210
};

// Aligment: 2
// Size: 528
class C_OP_SetControlPointFromObjectScale : public CParticleFunctionPreEmission, CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "input control point number"
	int32_t m_nCPInput; // 0x200
	// MPropertyFriendlyName "output control point number"
	int32_t m_nCPOutput; // 0x204
};

// Aligment: 5
// Size: 528
class C_OP_ExternalGenericForce : public CParticleFunctionForce, CParticleFunction
{
public:
	// MPropertyFriendlyName "strength"
	float m_flStrength; // 0x1f0
	// MPropertyFriendlyName "curl strength"
	float m_flCurlStrength; // 0x1f4
	// MPropertyFriendlyName "linear strength"
	float m_flLinearStrength; // 0x1f8
	// MPropertyFriendlyName "radial strength"
	float m_flRadialStrength; // 0x1fc
	// MPropertyFriendlyName "rotation strength"
	float m_flRotationStrength; // 0x200
};

// Aligment: 0
// Size: 592
class C_OP_RemapNamedModelSequenceOnceTimed : public C_OP_RemapNamedModelElementOnceTimed, CParticleFunctionOperator, CParticleFunction
{
public:
// <no members described>
};

// Aligment: 1
// Size: 512
class C_OP_ScreenForceFromPlayerView : public CParticleFunctionForce, CParticleFunction
{
public:
	// MPropertyFriendlyName "Acceleration"
	float m_flAccel; // 0x1f0
};

// Aligment: 10
// Size: 576
class C_OP_RampScalarSpline : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "ramp rate min"
	float m_RateMin; // 0x1f0
	// MPropertyFriendlyName "ramp rate max"
	float m_RateMax; // 0x1f4
	// MPropertyFriendlyName "start time min"
	float m_flStartTime_min; // 0x1f8
	// MPropertyFriendlyName "start time max"
	float m_flStartTime_max; // 0x1fc
	// MPropertyFriendlyName "end time min"
	float m_flEndTime_min; // 0x200
	// MPropertyFriendlyName "end time max"
	float m_flEndTime_max; // 0x204
	// MPropertyFriendlyName "bias"
	float m_flBias; // 0x208
	// MPropertyFriendlyName "ramp field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nField; // 0x230
	// MPropertyFriendlyName "start/end proportional"
	bool m_bProportionalOp; // 0x234
	// MPropertyFriendlyName "ease out"
	bool m_bEaseOut; // 0x235
};

// Aligment: 5
// Size: 528
class C_OP_ColorInterpolate : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "color fade"
	Color m_ColorFade; // 0x1f0
	// MPropertyFriendlyName "fade start time"
	float m_flFadeStartTime; // 0x200
	// MPropertyFriendlyName "fade end time"
	float m_flFadeEndTime; // 0x204
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x208
	// MPropertyFriendlyName "ease in and out"
	bool m_bEaseInOut; // 0x20c
};

// Aligment: 1
// Size: 4
class PARTICLE_WORLD_HANDLE__
{
public:
	int32_t unused; // 0x0
};

// Aligment: 7
// Size: 528
class C_OP_FadeAndKill : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "start fade in time"
	float m_flStartFadeInTime; // 0x1f0
	// MPropertyFriendlyName "end fade in time"
	float m_flEndFadeInTime; // 0x1f4
	// MPropertyFriendlyName "start fade out time"
	float m_flStartFadeOutTime; // 0x1f8
	// MPropertyFriendlyName "end fade out time"
	float m_flEndFadeOutTime; // 0x1fc
	// MPropertyFriendlyName "start alpha"
	float m_flStartAlpha; // 0x200
	// MPropertyFriendlyName "end alpha"
	float m_flEndAlpha; // 0x204
	// MPropertyFriendlyName "force preserving particle order"
	bool m_bForcePreserveParticleOrder; // 0x208
};

// Aligment: 4
// Size: 592
class C_INIT_RemapInitialTransformDirectionToRotation : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "transform input"
	CParticleTransformInput m_TransformInput; // 0x1f0
	// MPropertyFriendlyName "rotation field"
	// MPropertyAttributeChoiceName "particlefield_rotation"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x240
	// MPropertyFriendlyName "offset rotation"
	float m_flOffsetRot; // 0x244
	// MPropertyFriendlyName "control point axis"
	// MPropertyAttributeChoiceName "vector_component"
	// MVectorIsSometimesCoordinate
	int32_t m_nComponent; // 0x248
};

// Aligment: 3
// Size: 512
class C_INIT_PositionOffsetToCP : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "creation control point number"
	int32_t m_nControlPointNumberStart; // 0x1f0
	// MPropertyFriendlyName "offset control point number"
	int32_t m_nControlPointNumberEnd; // 0x1f4
	// MPropertyFriendlyName "offset in local space 0/1"
	bool m_bLocalCoords; // 0x1f8
};

// Aligment: 8
// Size: 1152
class C_OP_MaintainEmitter : public CParticleFunctionEmitter, CParticleFunction
{
public:
	// MPropertyFriendlyName "count to maintain"
	int32_t m_nParticlesToMaintain; // 0x1f0
	// MPropertyFriendlyName "emission start time"
	float m_flStartTime; // 0x1f4
	// MPropertyFriendlyName "emission duration"
	CParticleCollectionFloatInput m_flEmissionDuration; // 0x1f8
	// MPropertyFriendlyName "emission rate"
	float m_flEmissionRate; // 0x330
	// MPropertyFriendlyName "control point with snapshot data"
	int32_t m_nSnapshotControlPoint; // 0x334
	// MPropertyFriendlyName "group emission times for new particles"
	bool m_bEmitInstantaneously; // 0x338
	// MPropertyFriendlyName "perform final emit on stop"
	bool m_bFinalEmitOnStop; // 0x339
	// MPropertyFriendlyName "total count scale"
	CParticleCollectionFloatInput m_flScale; // 0x340
};

// Aligment: 3
// Size: 512
class C_INIT_VelocityFromNormal : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "random speed min"
	float m_fSpeedMin; // 0x1f0
	// MPropertyFriendlyName "random speed max"
	float m_fSpeedMax; // 0x1f4
	// MPropertyFriendlyName "ignore delta time"
	bool m_bIgnoreDt; // 0x1f8
};

// Aligment: 3
// Size: 512
class C_OP_MaxVelocity : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "maximum velocity"
	float m_flMaxVelocity; // 0x1f0
	// MPropertyFriendlyName "override max velocity from this CP"
	int32_t m_nOverrideCP; // 0x1f4
	// MPropertyFriendlyName "override CP field"
	int32_t m_nOverrideCPField; // 0x1f8
};

// Aligment: 11
// Size: 640
class C_OP_RenderProjected : public CParticleFunctionRenderer, CParticleFunction
{
public:
	// MPropertyFriendlyName "project on characters"
	bool m_bProjectCharacter; // 0x230
	// MPropertyFriendlyName "project on world"
	bool m_bProjectWorld; // 0x231
	// MPropertyFriendlyName "project on water"
	bool m_bProjectWater; // 0x232
	// MPropertyFriendlyName "flip horizontal"
	bool m_bFlipHorizontal; // 0x233
	// MPropertyFriendlyName "enable projected depth controls"
	bool m_bEnableProjectedDepthControls; // 0x234
	// MPropertyFriendlyName "min projection depth"
	// MPropertySuppressExpr "!m_bEnableProjectedDepthControls"
	float m_flMinProjectionDepth; // 0x238
	// MPropertyFriendlyName "max projection depth"
	// MPropertySuppressExpr "!m_bEnableProjectedDepthControls"
	float m_flMaxProjectionDepth; // 0x23c
	// MPropertyFriendlyName "material"
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hProjectedMaterial; // 0x240
	// MPropertyFriendlyName "sheet animation time scale"
	float m_flAnimationTimeScale; // 0x248
	// MPropertyFriendlyName "orient to normal"
	bool m_bOrientToNormal; // 0x24c
	// MPropertyFriendlyName "material variables"
	// MPropertyAutoExpandSelf
	CUtlVector< MaterialVariable_t > m_MaterialVars; // 0x250
};

// Aligment: 0
// Size: 544
class C_INIT_RandomNamedModelMeshGroup : public C_INIT_RandomNamedModelElement, CParticleFunctionInitializer, CParticleFunction
{
public:
// <no members described>
};

// Aligment: 3
// Size: 2304
class C_OP_PerParticleForce : public CParticleFunctionForce, CParticleFunction
{
public:
	// MPropertyFriendlyName "force scale"
	CPerParticleFloatInput m_flForceScale; // 0x1f0
	// MPropertyFriendlyName "force to apply"
	// MVectorIsCoordinate
	CPerParticleVecInput m_vForce; // 0x328
	// MPropertyFriendlyName "local space control point"
	int32_t m_nCP; // 0x8f0
};

// Aligment: 4
// Size: 512
class C_OP_InheritFromPeerSystem : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "read field"
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f0
	// MPropertyFriendlyName "written field"
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nFieldInput; // 0x1f4
	// MPropertyFriendlyName "particle neighbor increment amount"
	int32_t m_nIncrement; // 0x1f8
	// MPropertyFriendlyName "group id"
	int32_t m_nGroupID; // 0x1fc
};

// Aligment: 12
// Size: 3936
class C_INIT_CreateOnModel : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1f0
	// MPropertyFriendlyName "force to be inside model"
	int32_t m_nForceInModel; // 0x1f4
	// MPropertyFriendlyName "desired hitbox"
	int32_t m_nDesiredHitbox; // 0x1f8
	// MPropertyFriendlyName "Control Point Providing Hitbox index"
	int32_t m_nHitboxValueFromControlPointIndex; // 0x1fc
	// MPropertyFriendlyName "hitbox scale"
	CParticleCollectionVecInput m_vecHitBoxScale; // 0x200
	// MPropertyFriendlyName "inherited velocity scale"
	float m_flBoneVelocity; // 0x7c8
	// MPropertyFriendlyName "maximum inherited velocity"
	float m_flMaxBoneVelocity; // 0x7cc
	// MPropertyFriendlyName "direction bias"
	// MVectorIsCoordinate
	CParticleCollectionVecInput m_vecDirectionBias; // 0x7d0
	// MPropertyFriendlyName "hitbox set"
	char[128] m_HitboxSetName; // 0xd98
	// MPropertyFriendlyName "bias in local space"
	bool m_bLocalCoords; // 0xe18
	// MPropertyFriendlyName "use bones instead of hitboxes"
	bool m_bUseBones; // 0xe19
	// MPropertyFriendlyName "hitbox shell thickness"
	CParticleCollectionFloatInput m_flShellSize; // 0xe20
};

// Aligment: 4
// Size: 1136
class C_INIT_InitFloat : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "value"
	CPerParticleFloatInput m_InputValue; // 0x1f0
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nOutputField; // 0x328
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x32c
	// MPropertyFriendlyName "per-particle strength"
	CPerParticleFloatInput m_InputStrength; // 0x330
};

// Aligment: 4
// Size: 2384
class C_OP_MovementRotateParticleAroundAxis : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "rotation axis"
	// MVectorIsCoordinate
	CParticleCollectionVecInput m_vecRotAxis; // 0x1f0
	// MPropertyFriendlyName "rotation rate"
	CParticleCollectionFloatInput m_flRotRate; // 0x7b8
	// MPropertyFriendlyName "transform input"
	CParticleTransformInput m_TransformInput; // 0x8f0
	// MPropertyFriendlyName "use local space"
	bool m_bLocalSpace; // 0x940
};

// Aligment: 6
// Size: 3792
class C_OP_SetFloatAttributeToVectorExpression : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "expression"
	VectorFloatExpressionType_t m_nExpression; // 0x1f0
	// MPropertyFriendlyName "input 1"
	CPerParticleVecInput m_vInput1; // 0x1f8
	// MPropertyFriendlyName "input 2"
	CPerParticleVecInput m_vInput2; // 0x7c0
	// MPropertyFriendlyName "output"
	CParticleRemapFloatInput m_flOutputRemap; // 0xd88
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nOutputField; // 0xec0
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0xec4
};

// Aligment: 12
// Size: 592
class C_OP_SetControlPointPositions : public CParticleFunctionPreEmission, CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "set positions in world space"
	bool m_bUseWorldLocation; // 0x200
	// MPropertyFriendlyName "inherit CP orientation"
	bool m_bOrient; // 0x201
	// MPropertyFriendlyName "only set position once"
	bool m_bSetOnce; // 0x202
	// MPropertyFriendlyName "first control point number"
	int32_t m_nCP1; // 0x204
	// MPropertyFriendlyName "second control point number"
	int32_t m_nCP2; // 0x208
	// MPropertyFriendlyName "third control point number"
	int32_t m_nCP3; // 0x20c
	// MPropertyFriendlyName "fourth control point number"
	int32_t m_nCP4; // 0x210
	// MPropertyFriendlyName "first control point location"
	// MVectorIsCoordinate
	Vector m_vecCP1Pos; // 0x214
	// MPropertyFriendlyName "second control point location"
	// MVectorIsCoordinate
	Vector m_vecCP2Pos; // 0x220
	// MPropertyFriendlyName "third control point location"
	// MVectorIsCoordinate
	Vector m_vecCP3Pos; // 0x22c
	// MPropertyFriendlyName "fourth control point location"
	// MVectorIsCoordinate
	Vector m_vecCP4Pos; // 0x238
	// MPropertyFriendlyName "control point to offset positions from"
	int32_t m_nHeadLocation; // 0x244
};

// Aligment: 5
// Size: 544
class C_OP_ConstrainDistanceToUserSpecifiedPath : public CParticleFunctionConstraint, CParticleFunction
{
public:
	// MPropertyFriendlyName "minimum distance"
	float m_fMinDistance; // 0x1f0
	// MPropertyFriendlyName "maximum distance"
	float m_flMaxDistance; // 0x1f4
	// MPropertyFriendlyName "Time scale"
	float m_flTimeScale; // 0x1f8
	// MPropertyFriendlyName "Treat path as a loop"
	bool m_bLoopedPath; // 0x1fc
	// MPropertyFriendlyName "path points"
	CUtlVector< PointDefinitionWithTimeValues_t > m_pointList; // 0x200
};

// Aligment: 10
// Size: 1776
class C_INIT_CreateInEpitrochoid : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "first dimension 0-2 (-1 disables)"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nComponent1; // 0x1f0
	// MPropertyFriendlyName "second dimension 0-2 (-1 disables)"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nComponent2; // 0x1f4
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1f8
	// MPropertyFriendlyName "particle density"
	CPerParticleFloatInput m_flParticleDensity; // 0x200
	// MPropertyFriendlyName "point offset"
	CPerParticleFloatInput m_flOffset; // 0x338
	// MPropertyFriendlyName "radius 1"
	CPerParticleFloatInput m_flRadius1; // 0x470
	// MPropertyFriendlyName "radius 2"
	CPerParticleFloatInput m_flRadius2; // 0x5a8
	// MPropertyFriendlyName "use particle count instead of creation time"
	bool m_bUseCount; // 0x6e0
	// MPropertyFriendlyName "local space"
	bool m_bUseLocalCoords; // 0x6e1
	// MPropertyFriendlyName "offset from existing position"
	bool m_bOffsetExistingPos; // 0x6e2
};

// Aligment: 2
// Size: 512
class C_OP_DensityForce : public CParticleFunctionForce, CParticleFunction
{
public:
	// MPropertyFriendlyName "Radius scale for particle influence"
	float m_flRadiusScale; // 0x1f0
	// MPropertyFriendlyName "Scale of force"
	float m_flForceScale; // 0x1f4
};

// Aligment: 5
// Size: 1456
class C_INIT_CreateParticleImpulse : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "radius"
	CPerParticleFloatInput m_InputRadius; // 0x1f0
	// MPropertyFriendlyName "magnitude"
	CPerParticleFloatInput m_InputMagnitude; // 0x328
	// MPropertyFriendlyName "force falloff function"
	ParticleFalloffFunction_t m_nFalloffFunction; // 0x460
	// MPropertyFriendlyName "exponential falloff exponent"
	CPerParticleFloatInput m_InputFalloffExp; // 0x468
	// MPropertyFriendlyName "impulse type"
	ParticleImpulseType_t m_nImpulseType; // 0x5a0
};

// Aligment: 13
// Size: 576
class C_OP_RemapCPtoVector : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "input control point number"
	int32_t m_nCPInput; // 0x1f0
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f4
	// MPropertyFriendlyName "local space CP"
	int32_t m_nLocalSpaceCP; // 0x1f8
	// MPropertyFriendlyName "input minimum"
	// MVectorIsSometimesCoordinate
	Vector m_vInputMin; // 0x1fc
	// MPropertyFriendlyName "input maximum"
	// MVectorIsSometimesCoordinate
	Vector m_vInputMax; // 0x208
	// MPropertyFriendlyName "output minimum"
	// MVectorIsSometimesCoordinate
	Vector m_vOutputMin; // 0x214
	// MPropertyFriendlyName "output maximum"
	// MVectorIsSometimesCoordinate
	Vector m_vOutputMax; // 0x220
	// MPropertyFriendlyName "emitter lifetime start time (seconds)"
	float m_flStartTime; // 0x22c
	// MPropertyFriendlyName "emitter lifetime end time (seconds)"
	float m_flEndTime; // 0x230
	// MPropertyFriendlyName "interpolation scale"
	float m_flInterpRate; // 0x234
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x238
	// MPropertyFriendlyName "offset position"
	bool m_bOffset; // 0x23c
	// MPropertyFriendlyName "accelerate position"
	bool m_bAccelerate; // 0x23d
};

// Aligment: 12
// Size: 3568
class C_OP_PinParticleToCP : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1f0
	// MPropertyFriendlyName "offset"
	CParticleCollectionVecInput m_vecOffset; // 0x1f8
	// MPropertyFriendlyName "offset in local space"
	bool m_bOffsetLocal; // 0x7c0
	// MPropertyFriendlyName "particle to use"
	ParticleSelection_t m_nParticleSelection; // 0x7c4
	// MPropertyFriendlyName "particle number"
	CParticleCollectionFloatInput m_nParticleNumber; // 0x7c8
	// MPropertyFriendlyName "pin break type"
	ParticlePinDistance_t m_nPinBreakType; // 0x900
	// MPropertyFriendlyName "break length %"
	CParticleCollectionFloatInput m_flBreakDistance; // 0x908
	// MPropertyFriendlyName "break speed"
	CParticleCollectionFloatInput m_flBreakSpeed; // 0xa40
	// MPropertyFriendlyName "break age"
	CParticleCollectionFloatInput m_flAge; // 0xb78
	// MPropertyFriendlyName "break comparison control point 1"
	int32_t m_nBreakControlPointNumber; // 0xcb0
	// MPropertyFriendlyName "break comparison control point 2"
	int32_t m_nBreakControlPointNumber2; // 0xcb4
	// MPropertyFriendlyName "Interpolation"
	CPerParticleFloatInput m_flInterpolation; // 0xcb8
};

// Aligment: 7
// Size: 672
class C_OP_RtEnvCull : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "test direction"
	// MVectorIsCoordinate
	Vector m_vecTestDir; // 0x1f0
	// MPropertyFriendlyName "cull normal"
	// MVectorIsCoordinate
	Vector m_vecTestNormal; // 0x1fc
	// MPropertyFriendlyName "cull on miss"
	bool m_bCullOnMiss; // 0x208
	// MPropertyFriendlyName "stick instead of cull"
	bool m_bStickInsteadOfCull; // 0x209
	// MPropertyFriendlyName "ray trace environment name"
	char[128] m_RtEnvName; // 0x20a
	// MPropertyFriendlyName "ray trace environment cp"
	int32_t m_nRTEnvCP; // 0x28c
	// MPropertyFriendlyName "rt env control point component"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nComponent; // 0x290
};

// Aligment: 9
// Size: 576
class C_OP_DriveCPFromGlobalSoundFloat : public CParticleFunctionPreEmission, CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "output control point"
	int32_t m_nOutputControlPoint; // 0x200
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nOutputField; // 0x204
	// MPropertyFriendlyName "input minimum"
	float m_flInputMin; // 0x208
	// MPropertyFriendlyName "input maximum"
	float m_flInputMax; // 0x20c
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x210
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x214
	// MPropertyFriendlyName "sound stack name"
	CUtlString m_StackName; // 0x218
	// MPropertyFriendlyName "sound operator name"
	CUtlString m_OperatorName; // 0x220
	// MPropertyFriendlyName "sound field name"
	CUtlString m_FieldName; // 0x228
};

// Aligment: 7
// Size: 544
class C_OP_RemapDirectionToCPToVector : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "control point"
	int32_t m_nCP; // 0x1f0
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f4
	// MPropertyFriendlyName "scale factor"
	float m_flScale; // 0x1f8
	// MPropertyFriendlyName "offset rotation"
	float m_flOffsetRot; // 0x1fc
	// MPropertyFriendlyName "offset axis"
	// MVectorIsCoordinate
	Vector m_vecOffsetAxis; // 0x200
	// MPropertyFriendlyName "normalize"
	bool m_bNormalize; // 0x20c
	// MPropertyFriendlyName "strength field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldStrength; // 0x210
};

// Aligment: 10
// Size: 4736
class C_OP_ChladniWave : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f0
	// MPropertyFriendlyName "wave minimum"
	CPerParticleFloatInput m_flInputMin; // 0x1f8
	// MPropertyFriendlyName "wave maximum"
	CPerParticleFloatInput m_flInputMax; // 0x330
	// MPropertyFriendlyName "output minimum"
	CPerParticleFloatInput m_flOutputMin; // 0x468
	// MPropertyFriendlyName "output maximum"
	CPerParticleFloatInput m_flOutputMax; // 0x5a0
	// MPropertyFriendlyName "wave length"
	CPerParticleVecInput m_vecWaveLength; // 0x6d8
	// MPropertyFriendlyName "harmonics"
	CPerParticleVecInput m_vecHarmonics; // 0xca0
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x1268
	// MPropertyFriendlyName "local space control point"
	int32_t m_nLocalSpaceControlPoint; // 0x126c
	// MPropertyFriendlyName "3D"
	bool m_b3D; // 0x1270
};

// Aligment: 5
// Size: 832
class C_OP_SetChildControlPoints : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "group ID to affect"
	int32_t m_nChildGroupID; // 0x1f0
	// MPropertyFriendlyName "first control point to set"
	int32_t m_nFirstControlPoint; // 0x1f4
	// MPropertyFriendlyName "# of control points to set"
	int32_t m_nNumControlPoints; // 0x1f8
	// MPropertyFriendlyName "first particle to copy"
	CParticleCollectionFloatInput m_nFirstSourcePoint; // 0x200
	// MPropertyFriendlyName "set orientation"
	bool m_bSetOrientation; // 0x338
};

// Aligment: 2
// Size: 512
class C_INIT_NormalAlignToCP : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1f0
	// MPropertyFriendlyName "control point axis"
	ParticleControlPointAxis_t m_nControlPointAxis; // 0x1f4
};

// Aligment: 6
// Size: 3552
class C_INIT_PositionOffset : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "offset min"
	// MVectorIsCoordinate
	CPerParticleVecInput m_OffsetMin; // 0x1f0
	// MPropertyFriendlyName "offset max"
	// MVectorIsCoordinate
	CPerParticleVecInput m_OffsetMax; // 0x7b8
	// MPropertyFriendlyName "transform input"
	CParticleTransformInput m_TransformInput; // 0xd80
	// MPropertyFriendlyName "offset in local space 0/1"
	bool m_bLocalCoords; // 0xdd0
	// MPropertyFriendlyName "offset proportional to radius 0/1"
	bool m_bProportional; // 0xdd1
	// MPropertyFriendlyName "Random number generator controls"
	CRandomNumberGeneratorParameters m_randomnessParameters; // 0xdd4
};

// Aligment: 7
// Size: 864
class C_OP_SetControlPointToWaterSurface : public CParticleFunctionPreEmission, CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "source CP"
	int32_t m_nSourceCP; // 0x200
	// MPropertyFriendlyName "CP to set to surface"
	int32_t m_nDestCP; // 0x204
	// MPropertyFriendlyName "CP to set to surface current flow velocity"
	// MPropertySuppressExpr "mod != hlx"
	int32_t m_nFlowCP; // 0x208
	// MPropertyFriendlyName "CP to set component of if water"
	int32_t m_nActiveCP; // 0x20c
	// MPropertyFriendlyName "CP component"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nActiveCPField; // 0x210
	// MPropertyFriendlyName "retest rate"
	CParticleCollectionFloatInput m_flRetestRate; // 0x218
	// MPropertyFriendlyName "adaptive retest on moving surface"
	bool m_bAdaptiveThreshold; // 0x350
};

// Aligment: 2
// Size: 512
class C_INIT_InheritVelocity : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1f0
	// MPropertyFriendlyName "velocity scale"
	float m_flVelocityScale; // 0x1f4
};

// Aligment: 22
// Size: 4768
class C_OP_RenderCables : public CParticleFunctionRenderer, CParticleFunction
{
public:
	// MPropertyStartGroup "Renderer Modifiers"
	// MPropertyFriendlyName "Radius Scale"
	// MPropertySortPriority "700"
	CParticleCollectionFloatInput m_flRadiusScale; // 0x230
	// MPropertyFriendlyName "alpha scale"
	// MPropertySortPriority "700"
	CParticleCollectionFloatInput m_flAlphaScale; // 0x368
	// MPropertyFriendlyName "color blend"
	// MPropertySortPriority "700"
	CParticleCollectionVecInput m_vecColorScale; // 0x4a0
	// MPropertyFriendlyName "color blend type"
	// MPropertySortPriority "700"
	ParticleColorBlendType_t m_nColorBlendType; // 0xa68
	// MPropertyStartGroup
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial; // 0xa70
	// MPropertyFriendlyName "texture repetition mode"
	TextureRepetitionMode_t m_nTextureRepetitionMode; // 0xa78
	// MPropertyFriendlyName "texture repetitions"
	CParticleCollectionFloatInput m_flTextureRepeatsPerSegment; // 0xa80
	// MPropertyFriendlyName "texture repetitions around cable"
	CParticleCollectionFloatInput m_flTextureRepeatsCircumference; // 0xbb8
	// MPropertyFriendlyName "color map offset along path"
	CParticleCollectionFloatInput m_flColorMapOffsetV; // 0xcf0
	// MPropertyFriendlyName "color map offset around cable"
	CParticleCollectionFloatInput m_flColorMapOffsetU; // 0xe28
	// MPropertyFriendlyName "normal map offset along path"
	CParticleCollectionFloatInput m_flNormalMapOffsetV; // 0xf60
	// MPropertyFriendlyName "normal map offset around cable"
	CParticleCollectionFloatInput m_flNormalMapOffsetU; // 0x1098
	// MPropertyFriendlyName "draw caps at each end of the cable"
	bool m_bDrawCableCaps; // 0x11d0
	// MPropertyFriendlyName "cable end cap shape factor"
	// MPropertyAttributeRange "0 2"
	float m_flCapRoundness; // 0x11d4
	// MPropertyFriendlyName "cable end cap offset amount"
	// MPropertyAttributeRange "0 2"
	float m_flCapOffsetAmount; // 0x11d8
	// MPropertyFriendlyName "tessellation scale factor"
	float m_flTessScale; // 0x11dc
	// MPropertyFriendlyName "minimum steps between particles"
	int32_t m_nMinTesselation; // 0x11e0
	// MPropertyFriendlyName "maximum steps between particles"
	int32_t m_nMaxTesselation; // 0x11e4
	// MPropertyFriendlyName "roundness factor"
	int32_t m_nRoundness; // 0x11e8
	// MPropertyFriendlyName "diffuse lighting origin"
	// MParticleTransformInputOptional
	CParticleTransformInput m_LightingTransform; // 0x11f0
	// MPropertyFriendlyName "material float variables"
	CUtlVector< FloatInputMaterialVariable_t > m_MaterialFloatVars; // 0x1240
	// MPropertyFriendlyName "material vector variables"
	CUtlVector< VecInputMaterialVariable_t > m_MaterialVecVars; // 0x1270
};

// Aligment: 9
// Size: 848
class C_INIT_InitFromCPSnapshot : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "snapshot control point number"
	int32_t m_nControlPointNumber; // 0x1f0
	// MPropertyFriendlyName "field to read"
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nAttributeToRead; // 0x1f4
	// MPropertyFriendlyName "field to write"
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nAttributeToWrite; // 0x1f8
	// MPropertyFriendlyName "local space control point number"
	int32_t m_nLocalSpaceCP; // 0x1fc
	// MPropertyFriendlyName "random order"
	bool m_bRandom; // 0x200
	// MPropertyFriendlyName "reverse order"
	bool m_bReverse; // 0x201
	// MPropertyFriendlyName "Snapshot increment amount"
	CParticleCollectionFloatInput m_nSnapShotIncrement; // 0x208
	// MPropertyFriendlyName "random seed"
	int32_t m_nRandomSeed; // 0x340
	// MPropertyFriendlyName "local space angles"
	bool m_bLocalSpaceAngles; // 0x344
};

// Aligment: 0
// Size: 592
class C_OP_RemapNamedModelSequenceEndCap : public C_OP_RemapNamedModelElementEndCap, CParticleFunctionOperator, CParticleFunction
{
public:
// <no members described>
};

// Aligment: 3
// Size: 832
class C_INIT_PlaneCull : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "control point of plane"
	int32_t m_nControlPoint; // 0x1f0
	// MPropertyFriendlyName "cull offset"
	CParticleCollectionFloatInput m_flDistance; // 0x1f8
	// MPropertyFriendlyName "flip cull normal"
	bool m_bCullInside; // 0x330
};

// Aligment: 10
// Size: 688
class C_OP_PercentageBetweenTransforms : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f0
	// MPropertyFriendlyName "percentage minimum"
	float m_flInputMin; // 0x1f4
	// MPropertyFriendlyName "percentage maximum"
	float m_flInputMax; // 0x1f8
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x1fc
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x200
	// MPropertyFriendlyName "strarting transform"
	CParticleTransformInput m_TransformStart; // 0x208
	// MPropertyFriendlyName "end transform"
	CParticleTransformInput m_TransformEnd; // 0x258
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x2a8
	// MPropertyFriendlyName "only active within input range"
	bool m_bActiveRange; // 0x2ac
	// MPropertyFriendlyName "treat distance between points as radius"
	bool m_bRadialCheck; // 0x2ad
};

// Aligment: 6
// Size: 3808
class C_OP_SetControlPointFieldFromVectorExpression : public CParticleFunctionPreEmission, CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "expression"
	VectorFloatExpressionType_t m_nExpression; // 0x200
	// MPropertyFriendlyName "input 1"
	CParticleCollectionVecInput m_vecInput1; // 0x208
	// MPropertyFriendlyName "input 2"
	CParticleCollectionVecInput m_vecInput2; // 0x7d0
	// MPropertyFriendlyName "output"
	CParticleRemapFloatInput m_flOutputRemap; // 0xd98
	// MPropertyFriendlyName "output control point"
	int32_t m_nOutputCP; // 0xed0
	// MPropertyFriendlyName "output component"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nOutVectorField; // 0xed4
};

// Aligment: 9
// Size: 528
class C_OP_DifferencePreviousParticle : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "input field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldInput; // 0x1f0
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f4
	// MPropertyFriendlyName "difference minimum"
	float m_flInputMin; // 0x1f8
	// MPropertyFriendlyName "difference maximum"
	float m_flInputMax; // 0x1fc
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x200
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x204
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x208
	// MPropertyFriendlyName "only active within specified difference"
	bool m_bActiveRange; // 0x20c
	// MPropertyFriendlyName "also set ouput to previous particle"
	bool m_bSetPreviousParticle; // 0x20d
};

// Aligment: 3
// Size: 544
class C_OP_SetControlPointToHMD : public CParticleFunctionPreEmission, CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nCP1; // 0x200
	// MPropertyFriendlyName "control point offset"
	// MVectorIsCoordinate
	Vector m_vecCP1Pos; // 0x204
	// MPropertyFriendlyName "use hmd orientation"
	bool m_bOrientToHMD; // 0x210
};

// Aligment: 3
// Size: 1136
class C_OP_ClampScalar : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f0
	// MPropertyFriendlyName "output minimum"
	CPerParticleFloatInput m_flOutputMin; // 0x1f8
	// MPropertyFriendlyName "output maximum"
	CPerParticleFloatInput m_flOutputMax; // 0x330
};

// Aligment: 13
// Size: 688
class C_INIT_InitialRepulsionVelocity : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "collision group"
	char[128] m_CollisionGroupName; // 0x1f0
	// MPropertyFriendlyName "Trace Set"
	ParticleTraceSet_t m_nTraceSet; // 0x270
	// MPropertyFriendlyName "minimum velocity"
	// MVectorIsCoordinate
	Vector m_vecOutputMin; // 0x274
	// MPropertyFriendlyName "maximum velocity"
	// MVectorIsCoordinate
	Vector m_vecOutputMax; // 0x280
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x28c
	// MPropertyFriendlyName "per particle world collision tests"
	bool m_bPerParticle; // 0x290
	// MPropertyFriendlyName "offset instead of accelerate"
	bool m_bTranslate; // 0x291
	// MPropertyFriendlyName "offset proportional to radius 0/1"
	bool m_bProportional; // 0x292
	// MPropertyFriendlyName "trace length"
	float m_flTraceLength; // 0x294
	// MPropertyFriendlyName "use radius for per particle trace length"
	bool m_bPerParticleTR; // 0x298
	// MPropertyFriendlyName "inherit from parent"
	bool m_bInherit; // 0x299
	// MPropertyFriendlyName "control points to broadcast to children (n + 1)"
	int32_t m_nChildCP; // 0x29c
	// MPropertyFriendlyName "child group ID to affect"
	int32_t m_nChildGroupID; // 0x2a0
};

// Aligment: 4
// Size: 832
class C_OP_LerpScalar : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f0
	// MPropertyFriendlyName "value to lerp to"
	CPerParticleFloatInput m_flOutput; // 0x1f8
	// MPropertyFriendlyName "start time"
	float m_flStartTime; // 0x330
	// MPropertyFriendlyName "end time"
	float m_flEndTime; // 0x334
};

// Aligment: 6
// Size: 1136
class C_OP_MovementMoveAlongSkinnedCPSnapshot : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1f0
	// MPropertyFriendlyName "snapshot control point number"
	int32_t m_nSnapshotControlPointNumber; // 0x1f4
	// MPropertyFriendlyName "set normal"
	bool m_bSetNormal; // 0x1f8
	// MPropertyFriendlyName "set radius"
	bool m_bSetRadius; // 0x1f9
	// MPropertyFriendlyName "Interpolation"
	CPerParticleFloatInput m_flInterpolation; // 0x200
	// MPropertyFriendlyName "Snapshot Index T Value"
	CPerParticleFloatInput m_flTValue; // 0x338
};

// Aligment: 9
// Size: 2448
class C_INIT_SetHitboxToModel : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1f0
	// MPropertyFriendlyName "force to be inside model"
	int32_t m_nForceInModel; // 0x1f4
	// MPropertyFriendlyName "desired hitbox"
	int32_t m_nDesiredHitbox; // 0x1f8
	// MPropertyFriendlyName "model hitbox scale"
	CParticleCollectionVecInput m_vecHitBoxScale; // 0x200
	// MPropertyFriendlyName "direction bias"
	// MVectorIsCoordinate
	Vector m_vecDirectionBias; // 0x7c8
	// MPropertyFriendlyName "maintain existing hitbox"
	bool m_bMaintainHitbox; // 0x7d4
	// MPropertyFriendlyName "use bones instead of hitboxes"
	bool m_bUseBones; // 0x7d5
	// MPropertyFriendlyName "hitbox set"
	char[128] m_HitboxSetName; // 0x7d6
	// MPropertyFriendlyName "hitbox shell thickness"
	CParticleCollectionFloatInput m_flShellSize; // 0x858
};

// Aligment: 5
// Size: 2000
class C_INIT_InitVec : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "value"
	CPerParticleVecInput m_InputValue; // 0x1f0
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nOutputField; // 0x7b8
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x7bc
	// MPropertyFriendlyName "normalize result"
	bool m_bNormalizedOutput; // 0x7c0
	// MPropertyFriendlyName "set previous position"
	// MPropertySuppressExpr "m_nOutputField != PARTICLE_ATTRIBUTE_XYZ"
	bool m_bWritePreviousPosition; // 0x7c1
};

// Aligment: 2
// Size: 512
class C_OP_RemapDensityGradientToVectorAttribute : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "Radius scale for particle influence"
	float m_flRadiusScale; // 0x1f0
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f4
};

// Aligment: 1
// Size: 512
class C_OP_AlphaDecay : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "minimum alpha"
	float m_flMinAlpha; // 0x1f0
};

// Aligment: 8
// Size: 528
class C_OP_SequenceFromModel : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1f0
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f4
	// MPropertyFriendlyName "current anim time output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutputAnim; // 0x1f8
	// MPropertyFriendlyName "input minimum"
	float m_flInputMin; // 0x1fc
	// MPropertyFriendlyName "input maximum"
	float m_flInputMax; // 0x200
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x204
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x208
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x20c
};

// Aligment: 3
// Size: 1440
class C_OP_ColorAdjustHSL : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "hue adjust"
	CPerParticleFloatInput m_flHueAdjust; // 0x1f0
	// MPropertyFriendlyName "saturation adjust"
	CPerParticleFloatInput m_flSaturationAdjust; // 0x328
	// MPropertyFriendlyName "lightness adjust"
	CPerParticleFloatInput m_flLightnessAdjust; // 0x460
};

// Aligment: 6
// Size: 528
class C_OP_FadeAndKillForTracers : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "start fade in time"
	float m_flStartFadeInTime; // 0x1f0
	// MPropertyFriendlyName "end fade in time"
	float m_flEndFadeInTime; // 0x1f4
	// MPropertyFriendlyName "start fade out time"
	float m_flStartFadeOutTime; // 0x1f8
	// MPropertyFriendlyName "end fade out time"
	float m_flEndFadeOutTime; // 0x1fc
	// MPropertyFriendlyName "start alpha"
	float m_flStartAlpha; // 0x200
	// MPropertyFriendlyName "end alpha"
	float m_flEndAlpha; // 0x204
};

// Aligment: 6
// Size: 528
class C_OP_Noise : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f0
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x1f4
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x1f8
	// MPropertyFriendlyName "noise coordinate scale"
	float m_fl4NoiseScale; // 0x1fc
	// MPropertyFriendlyName "additive"
	bool m_bAdditive; // 0x200
	// MPropertyFriendlyName "Noise animation time scale"
	float m_flNoiseAnimationTimeScale; // 0x204
};

// Aligment: 2
// Size: 1120
class C_OP_CollideWithSelf : public CParticleFunctionConstraint, CParticleFunction
{
public:
	// MPropertyFriendlyName "particle radius scale"
	CPerParticleFloatInput m_flRadiusScale; // 0x1f0
	// MPropertyFriendlyName "minimum speed for check"
	CPerParticleFloatInput m_flMinimumSpeed; // 0x328
};

// Aligment: 4
// Size: 512
class C_OP_LagCompensation : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "desired velocity CP"
	int32_t m_nDesiredVelocityCP; // 0x1f0
	// MPropertyFriendlyName "latency CP"
	int32_t m_nLatencyCP; // 0x1f4
	// MPropertyFriendlyName "latency CP field"
	int32_t m_nLatencyCPField; // 0x1f8
	// MPropertyFriendlyName "desired velocity CP field override(for speed only)"
	int32_t m_nDesiredVelocityCPField; // 0x1fc
};

// Aligment: 17
// Size: 560
class C_INIT_InitSkinnedPositionFromCPSnapshot : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "snapshot control point number"
	int32_t m_nSnapshotControlPointNumber; // 0x1f0
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1f4
	// MPropertyFriendlyName "random order"
	bool m_bRandom; // 0x1f8
	// MPropertyFriendlyName "random seed"
	int32_t m_nRandomSeed; // 0x1fc
	// MPropertyFriendlyName "prepare for rigid lock"
	bool m_bRigid; // 0x200
	// MPropertyFriendlyName "set normal"
	bool m_bSetNormal; // 0x201
	// MPropertyFriendlyName "normal velocity ignore delta time"
	bool m_bIgnoreDt; // 0x202
	// MPropertyFriendlyName "normal velocity min"
	float m_flMinNormalVelocity; // 0x204
	// MPropertyFriendlyName "normal velocity max"
	float m_flMaxNormalVelocity; // 0x208
	// MPropertyFriendlyName "particle increment amount"
	float m_flIncrement; // 0x20c
	// MPropertyFriendlyName "Full Loop Increment Amount"
	int32_t m_nFullLoopIncrement; // 0x210
	// MPropertyFriendlyName "Snapshot start point"
	int32_t m_nSnapShotStartPoint; // 0x214
	// MPropertyFriendlyName "inherited bone velocity"
	float m_flBoneVelocity; // 0x218
	// MPropertyFriendlyName "max inherited bone velocity"
	float m_flBoneVelocityMax; // 0x21c
	// MPropertyFriendlyName "Set Color"
	bool m_bCopyColor; // 0x220
	// MPropertyFriendlyName "Set Alpha"
	bool m_bCopyAlpha; // 0x221
	// MPropertyFriendlyName "Set Radius"
	bool m_bSetRadius; // 0x222
};

// Aligment: 0
// Size: 576
class C_INIT_RemapParticleCountToNamedModelBodyPartScalar : public C_INIT_RemapParticleCountToNamedModelElementScalar, C_INIT_RemapParticleCountToScalar, CParticleFunctionInitializer, CParticleFunction
{
public:
// <no members described>
};

// Aligment: 0
// Size: 312
class CPerParticleFloatInput : public CParticleFloatInput
{
public:
// <no members described>
};

// Aligment: 2
// Size: 512
class C_OP_ConnectParentParticleToNearest : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "control point to set"
	int32_t m_nFirstControlPoint; // 0x1f0
	// MPropertyFriendlyName "Second Control point to set"
	int32_t m_nSecondControlPoint; // 0x1f4
};

// Aligment: 13
// Size: 4272
class C_OP_RenderOmni2Light : public CParticleFunctionRenderer, CParticleFunction
{
public:
	// MPropertyFriendlyName "Type"
	ParticleOmni2LightTypeChoiceList_t m_nLightType; // 0x230
	// MPropertyFriendlyName "Color Blend"
	CParticleCollectionVecInput m_vColorBlend; // 0x238
	// MPropertyFriendlyName "Color Blend Type"
	// MPropertySortPriority "700"
	ParticleColorBlendType_t m_nColorBlendType; // 0x800
	ParticleLightUnitChoiceList_t m_nBrightnessUnit; // 0x804
	// MPropertyFriendlyName "Lumens"
	// MPropertySuppressExpr "m_nBrightnessUnit != PARTICLE_LIGHT_UNIT_LUMENS"
	CPerParticleFloatInput m_flBrightnessLumens; // 0x808
	// MPropertyFriendlyName "Candelas"
	// MPropertySuppressExpr "m_nBrightnessUnit != PARTICLE_LIGHT_UNIT_CANDELAS"
	CPerParticleFloatInput m_flBrightnessCandelas; // 0x940
	// MPropertyFriendlyName "Shadows"
	// MPropertySuppressExpr "mod == csgo"
	bool m_bCastShadows; // 0xa78
	// MPropertyFriendlyName "Light Radius"
	// MPropertySuppressExpr "!m_bAreaLight"
	CPerParticleFloatInput m_flLuminaireRadius; // 0xa80
	// MPropertyFriendlyName "Skirt"
	CPerParticleFloatInput m_flSkirt; // 0xbb8
	// MPropertyFriendlyName "Range"
	CPerParticleFloatInput m_flRange; // 0xcf0
	// MPropertyFriendlyName "Inner Cone Angle"
	CPerParticleFloatInput m_flInnerConeAngle; // 0xe28
	// MPropertyFriendlyName "Outer Cone Angle"
	CPerParticleFloatInput m_flOuterConeAngle; // 0xf60
	// MPropertyFriendlyName "Cookie"
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightCookie; // 0x1098
};

// Aligment: 1
// Size: 4
class PARTICLE_EHANDLE__
{
public:
	int32_t unused; // 0x0
};

// Aligment: 0
// Size: 544
class C_INIT_RandomNamedModelBodyPart : public C_INIT_RandomNamedModelElement, CParticleFunctionInitializer, CParticleFunction
{
public:
// <no members described>
};

// Aligment: 0
// Size: 8
class IParticleEffect
{
public:
// <no members described>
};

// Aligment: 5
// Size: 528
class C_INIT_CreateFromParentParticles : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "inherited velocity scale"
	float m_flVelocityScale; // 0x1f0
	// MPropertyFriendlyName "particle increment amount"
	float m_flIncrement; // 0x1f4
	// MPropertyFriendlyName "random parent particle distribution"
	bool m_bRandomDistribution; // 0x1f8
	// MPropertyFriendlyName "random seed"
	int32_t m_nRandomSeed; // 0x1fc
	// MPropertyFriendlyName "sub frame interpolation"
	bool m_bSubFrame; // 0x200
};

// Aligment: 5
// Size: 2304
class C_OP_SetVec : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "value"
	CPerParticleVecInput m_InputValue; // 0x1f0
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nOutputField; // 0x7b8
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x7bc
	// MPropertyFriendlyName "interpolation"
	CPerParticleFloatInput m_Lerp; // 0x7c0
	// MPropertyFriendlyName "normalize result"
	bool m_bNormalizedOutput; // 0x8f8
};

// Aligment: 3
// Size: 528
class C_OP_MovementMaintainOffset : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "desired offset"
	// MVectorIsCoordinate
	Vector m_vecOffset; // 0x1f0
	// MPropertyFriendlyName "local space CP"
	int32_t m_nCP; // 0x1fc
	// MPropertyFriendlyName "scale by radius"
	bool m_bRadiusScale; // 0x200
};

// Aligment: 0
// Size: 592
class C_OP_RemapNamedModelBodyPartOnceTimed : public C_OP_RemapNamedModelElementOnceTimed, CParticleFunctionOperator, CParticleFunction
{
public:
// <no members described>
};

// Aligment: 14
// Size: 2464
class C_OP_LockToBone : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "control_point_number"
	int32_t m_nControlPointNumber; // 0x1f0
	// MPropertyFriendlyName "lifetime fade start"
	float m_flLifeTimeFadeStart; // 0x1f4
	// MPropertyFriendlyName "lifetime fade end"
	float m_flLifeTimeFadeEnd; // 0x1f8
	// MPropertyFriendlyName "instant jump threshold"
	float m_flJumpThreshold; // 0x1fc
	// MPropertyFriendlyName "previous position scale"
	float m_flPrevPosScale; // 0x200
	// MPropertyFriendlyName "hitbox set"
	char[128] m_HitboxSetName; // 0x204
	// MPropertyFriendlyName "rigid lock"
	bool m_bRigid; // 0x284
	// MPropertyFriendlyName "use bones instead of hitboxes"
	bool m_bUseBones; // 0x285
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x288
	// MPropertyFriendlyName "output field prev"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutputPrev; // 0x28c
	// MPropertyStartGroup "Set Rotations to Bones"
	// MPropertyFriendlyName "lock rotations to bone orientation"
	ParticleRotationLockType_t m_nRotationSetType; // 0x290
	// MPropertyFriendlyName "rigid set rotation from bones"
	bool m_bRigidRotationLock; // 0x294
	// MPropertyFriendlyName "rigid rotation offset pitch/yaw/roll"
	CPerParticleVecInput m_vecRotation; // 0x298
	// MPropertyFriendlyName "rigid rotation interpolation"
	CPerParticleFloatInput m_flRotLerp; // 0x860
};

// Aligment: 8
// Size: 80
class CParticleTransformInput
{
public:
	ParticleTransformType_t m_nType; // 0x4
	CKV3MemberNameWithStorage m_NamedValue; // 0x8
	bool m_bFollowNamedValue; // 0x40
	bool m_bSupportsDisabled; // 0x41
	bool m_bUseOrientation; // 0x42
	int32_t m_nControlPoint; // 0x44
	int32_t m_nControlPointRangeMax; // 0x48
	float m_flEndCPGrowthTime; // 0x4c
};

// Aligment: 11
// Size: 592
class C_OP_CalculateVectorAttribute : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "start value"
	Vector m_vStartValue; // 0x1f0
	// MPropertyFriendlyName "input field 1"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldInput1; // 0x1fc
	// MPropertyFriendlyName "input scale 1"
	float m_flInputScale1; // 0x200
	// MPropertyFriendlyName "input field 2"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldInput2; // 0x204
	// MPropertyFriendlyName "input scale 2"
	float m_flInputScale2; // 0x208
	// MPropertyFriendlyName "control point input 1"
	ControlPointReference_t m_nControlPointInput1; // 0x20c
	// MPropertyFriendlyName "control point scale 1"
	float m_flControlPointScale1; // 0x220
	// MPropertyFriendlyName "control point input 2"
	ControlPointReference_t m_nControlPointInput2; // 0x224
	// MPropertyFriendlyName "control point scale 2"
	float m_flControlPointScale2; // 0x238
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x23c
	// MPropertyFriendlyName "final per component scale"
	Vector m_vFinalOutputScale; // 0x240
};

// Aligment: 3
// Size: 512
class C_OP_DampenToCP : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1f0
	// MPropertyFriendlyName "falloff range"
	float m_flRange; // 0x1f4
	// MPropertyFriendlyName "dampen scale"
	float m_flScale; // 0x1f8
};

// Aligment: 9
// Size: 4720
class C_OP_DistanceBetweenVecs : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f0
	// MPropertyFriendlyName "first vector"
	CPerParticleVecInput m_vecPoint1; // 0x1f8
	// MPropertyFriendlyName "second vector"
	CPerParticleVecInput m_vecPoint2; // 0x7c0
	// MPropertyFriendlyName "distance minimum"
	CPerParticleFloatInput m_flInputMin; // 0xd88
	// MPropertyFriendlyName "distance maximum"
	CPerParticleFloatInput m_flInputMax; // 0xec0
	// MPropertyFriendlyName "output minimum"
	CPerParticleFloatInput m_flOutputMin; // 0xff8
	// MPropertyFriendlyName "output maximum"
	CPerParticleFloatInput m_flOutputMax; // 0x1130
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x1268
	// MPropertyFriendlyName "divide by deltatime (for comparing motion since last simulation)"
	bool m_bDeltaTime; // 0x126c
};

// Aligment: 6
// Size: 528
class CGeneralRandomRotation : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "rotation field"
	// MPropertyAttributeChoiceName "particlefield_rotation"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f0
	// MPropertyFriendlyName "rotation initial"
	float m_flDegrees; // 0x1f4
	// MPropertyFriendlyName "rotation offset from initial min"
	float m_flDegreesMin; // 0x1f8
	// MPropertyFriendlyName "rotation offset from initial max"
	float m_flDegreesMax; // 0x1fc
	// MPropertyFriendlyName "rotation offset exponent"
	float m_flRotationRandExponent; // 0x200
	// MPropertyFriendlyName "randomly flip direction"
	bool m_bRandomlyFlipDirection; // 0x204
};

// Aligment: 3
// Size: 512
class C_OP_RemapVectorComponentToScalar : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "Input Vector"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldInput; // 0x1f0
	// MPropertyFriendlyName "Output Scalar"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f4
	// MPropertyFriendlyName "Vector Component"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nComponent; // 0x1f8
};

// Aligment: 8
// Size: 544
class C_INIT_AgeNoise : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "absolute value"
	bool m_bAbsVal; // 0x1f0
	// MPropertyFriendlyName "invert absolute value"
	bool m_bAbsValInv; // 0x1f1
	// MPropertyFriendlyName "time coordinate offset"
	float m_flOffset; // 0x1f4
	// MPropertyFriendlyName "start age minimum"
	float m_flAgeMin; // 0x1f8
	// MPropertyFriendlyName "start age maximum"
	float m_flAgeMax; // 0x1fc
	// MPropertyFriendlyName "time noise coordinate scale"
	float m_flNoiseScale; // 0x200
	// MPropertyFriendlyName "spatial noise coordinate scale"
	float m_flNoiseScaleLoc; // 0x204
	// MPropertyFriendlyName "spatial coordinate offset"
	// MVectorIsCoordinate
	Vector m_vecOffsetLoc; // 0x208
};

// Aligment: 4
// Size: 848
class C_OP_SetControlPointPositionToRandomActiveCP : public CParticleFunctionPreEmission, CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nCP1; // 0x200
	// MPropertyFriendlyName "min active CP"
	int32_t m_nHeadLocationMin; // 0x204
	// MPropertyFriendlyName "max active CP"
	int32_t m_nHeadLocationMax; // 0x208
	// MPropertyFriendlyName "reset rate"
	CParticleCollectionFloatInput m_flResetRate; // 0x210
};

// Aligment: 3
// Size: 20
struct PointDefinition_t
{
public:
	// MPropertyFriendlyName "Control point"
	int32_t m_nControlPoint; // 0x0
	// MPropertyFriendlyName "Use local coordinates for offset"
	bool m_bLocalCoords; // 0x4
	// MPropertyFriendlyName "Offset from control point"
	Vector m_vOffset; // 0x8
};

// Aligment: 4
// Size: 1168
class C_OP_SetFloatCollection : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "value"
	CParticleCollectionFloatInput m_InputValue; // 0x1f0
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nOutputField; // 0x328
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x32c
	// MPropertyFriendlyName "interpolation"
	CParticleCollectionFloatInput m_Lerp; // 0x330
};

// Aligment: 2
// Size: 512
class C_INIT_RandomSecondSequence : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "sequence min"
	// MPropertyAttributeEditor "SequencePicker( 2 )"
	int32_t m_nSequenceMin; // 0x1f0
	// MPropertyFriendlyName "sequence max"
	// MPropertyAttributeEditor "SequencePicker( 2 )"
	int32_t m_nSequenceMax; // 0x1f4
};

// Aligment: 5
// Size: 528
class C_OP_InheritFromParentParticlesV2 : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "scale"
	float m_flScale; // 0x1f0
	// MPropertyFriendlyName "inherited field"
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f4
	// MPropertyFriendlyName "particle increment amount"
	int32_t m_nIncrement; // 0x1f8
	// MPropertyFriendlyName "random parent particle distribution"
	bool m_bRandomDistribution; // 0x1fc
	// MPropertyFriendlyName "behavior if parent particle dies"
	MissingParentInheritBehavior_t m_nMissingParentBehavior; // 0x200
};

// Aligment: 0
// Size: 528
class C_INIT_RandomRotationSpeed : public CGeneralRandomRotation, CParticleFunctionInitializer, CParticleFunction
{
public:
// <no members described>
};

// Aligment: 4
// Size: 592
class C_OP_RemapTransformOrientationToRotations : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "transform input"
	CParticleTransformInput m_TransformInput; // 0x1f0
	// MPropertyFriendlyName "offset pitch/yaw/roll"
	Vector m_vecRotation; // 0x240
	// MPropertyFriendlyName "Use Quaternians Internally"
	bool m_bUseQuat; // 0x24c
	// MPropertyFriendlyName "Write normal instead of rotation"
	bool m_bWriteNormal; // 0x24d
};

// Aligment: 4
// Size: 3472
class C_OP_RemapCrossProductOfTwoVectorsToVector : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "input vector 1"
	CPerParticleVecInput m_InputVec1; // 0x1f0
	// MPropertyFriendlyName "input vector 2"
	CPerParticleVecInput m_InputVec2; // 0x7b8
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0xd80
	// MPropertyFriendlyName "normalize output"
	bool m_bNormalize; // 0xd84
};

// Aligment: 2
// Size: 512
class C_OP_SetCPOrientationToDirection : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "input control point"
	int32_t m_nInputControlPoint; // 0x1f0
	// MPropertyFriendlyName "output control point"
	int32_t m_nOutputControlPoint; // 0x1f4
};

// Aligment: 17
// Size: 1008
class C_OP_MovementPlaceOnGround : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "offset"
	CPerParticleFloatInput m_flOffset; // 0x1f0
	// MPropertyFriendlyName "max trace length"
	float m_flMaxTraceLength; // 0x328
	// MPropertyFriendlyName "CP movement tolerance"
	float m_flTolerance; // 0x32c
	// MPropertyFriendlyName "trace offset"
	float m_flTraceOffset; // 0x330
	// MPropertyFriendlyName "interpolation rate"
	float m_flLerpRate; // 0x334
	// MPropertyFriendlyName "collision group"
	char[128] m_CollisionGroupName; // 0x338
	// MPropertyFriendlyName "Trace Set"
	ParticleTraceSet_t m_nTraceSet; // 0x3b8
	// MPropertyFriendlyName "reference CP 1"
	int32_t m_nRefCP1; // 0x3bc
	// MPropertyFriendlyName "reference CP 2"
	int32_t m_nRefCP2; // 0x3c0
	// MPropertyFriendlyName "interploation distance tolerance cp"
	int32_t m_nLerpCP; // 0x3c4
	// MPropertyFriendlyName "No Collision Behavior"
	ParticleTraceMissBehavior_t m_nTraceMissBehavior; // 0x3d0
	// MPropertyFriendlyName "include default contents trace hulls"
	bool m_bIncludeShotHull; // 0x3d4
	// MPropertyFriendlyName "include water"
	bool m_bIncludeWater; // 0x3d5
	// MPropertyFriendlyName "set normal"
	bool m_bSetNormal; // 0x3d8
	// MPropertyFriendlyName "treat offset as scalar of particle radius"
	bool m_bScaleOffset; // 0x3d9
	// MPropertyFriendlyName "preserve initial Z-offset relative to cp"
	int32_t m_nPreserveOffsetCP; // 0x3dc
	// MPropertyFriendlyName "CP Entity to Ignore for Collisions"
	int32_t m_nIgnoreCP; // 0x3e0
};

// Aligment: 5
// Size: 544
class C_OP_LockToPointList : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f0
	// MPropertyFriendlyName "point list"
	CUtlVector< PointDefinition_t > m_pointList; // 0x1f8
	// MPropertyFriendlyName "space points along path"
	bool m_bPlaceAlongPath; // 0x210
	// MPropertyFriendlyName "Treat path as a loop"
	bool m_bClosedLoop; // 0x211
	// MPropertyFriendlyName "Numer of points along path"
	int32_t m_nNumPointsAlongPath; // 0x214
};

// Aligment: 6
// Size: 848
class C_OP_SetCPOrientationToPointAtCP : public CParticleFunctionPreEmission, CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "CP to point towards"
	int32_t m_nInputCP; // 0x200
	// MPropertyFriendlyName "CP to set"
	int32_t m_nOutputCP; // 0x204
	// MPropertyFriendlyName "Interpolation"
	CParticleCollectionFloatInput m_flInterpolation; // 0x208
	// MPropertyFriendlyName "2D Orient"
	bool m_b2DOrientation; // 0x340
	// MPropertyFriendlyName "Avoid Vertical Axis Singularity"
	bool m_bAvoidSingularity; // 0x341
	// MPropertyFriendlyName "Point Away"
	bool m_bPointAway; // 0x342
};

// Aligment: 1
// Size: 512
class C_OP_VelocityDecay : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "minimum velocity"
	float m_flMinVelocity; // 0x1f0
};

// Aligment: 3
// Size: 528
class C_OP_LerpEndCapVector : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f0
	// MPropertyFriendlyName "value to lerp to"
	// MVectorIsSometimesCoordinate
	Vector m_vecOutput; // 0x1f4
	// MPropertyFriendlyName "lerp time"
	float m_flLerpTime; // 0x200
};

// Aligment: 0
// Size: 528
class C_INIT_RandomRotation : public CGeneralRandomRotation, CParticleFunctionInitializer, CParticleFunction
{
public:
// <no members described>
};

// Aligment: 5
// Size: 2624
class C_OP_LerpToInitialPosition : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1f0
	// MPropertyFriendlyName "Interpolation"
	CPerParticleFloatInput m_flInterpolation; // 0x1f8
	// MPropertyFriendlyName "position cache attribute"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nCacheField; // 0x330
	// MPropertyFriendlyName "scale"
	CParticleCollectionFloatInput m_flScale; // 0x338
	// MPropertyFriendlyName "component scale"
	CParticleCollectionVecInput m_vecScale; // 0x470
};

// Aligment: 2
// Size: 576
class C_OP_RenderText : public CParticleFunctionRenderer, CParticleFunction
{
public:
	// MPropertyFriendlyName "outline color"
	Color m_OutlineColor; // 0x230
	// MPropertyFriendlyName "default text"
	CUtlString m_DefaultText; // 0x238
};

// Aligment: 5
// Size: 1136
class C_OP_ReadFromNeighboringParticle : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "read field"
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nFieldInput; // 0x1f0
	// MPropertyFriendlyName "written field"
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f4
	// MPropertyFriendlyName "particle increment amount"
	int32_t m_nIncrement; // 0x1f8
	// MPropertyFriendlyName "maximum distance"
	CPerParticleFloatInput m_DistanceCheck; // 0x200
	// MPropertyFriendlyName "Interpolation"
	CPerParticleFloatInput m_flInterpolation; // 0x338
};

// Aligment: 2
// Size: 8
struct SequenceWeightedList_t
{
public:
	// MPropertyFriendlyName "sequence"
	// MPropertyAttributeEditor "SequencePicker( 1 )"
	int32_t m_nSequence; // 0x0
	// MPropertyFriendlyName "weight"
	float m_flRelativeWeight; // 0x4
};

// Aligment: 1
// Size: 512
class C_INIT_RandomYawFlip : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "flip percentage"
	float m_flPercent; // 0x1f0
};

// Aligment: 4
// Size: 512
class C_OP_Cull : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "cull percentage"
	float m_flCullPerc; // 0x1f0
	// MPropertyFriendlyName "cull start time"
	float m_flCullStart; // 0x1f4
	// MPropertyFriendlyName "cull end time"
	float m_flCullEnd; // 0x1f8
	// MPropertyFriendlyName "cull time exponent"
	float m_flCullExp; // 0x1fc
};

// Aligment: 4
// Size: 592
class C_INIT_RemapTransformOrientationToRotations : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "transform input"
	CParticleTransformInput m_TransformInput; // 0x1f0
	// MPropertyFriendlyName "offset pitch/yaw/roll"
	Vector m_vecRotation; // 0x240
	// MPropertyFriendlyName "Use Quaternians Internally"
	bool m_bUseQuat; // 0x24c
	// MPropertyFriendlyName "Write normal instead of rotation"
	bool m_bWriteNormal; // 0x24d
};

// Aligment: 1
// Size: 512
class C_OP_NormalLock : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1f0
};

// Aligment: 4
// Size: 576
class C_OP_LockToSavedSequentialPathV2 : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "start fade time"
	float m_flFadeStart; // 0x1f0
	// MPropertyFriendlyName "end fade time"
	float m_flFadeEnd; // 0x1f4
	// MPropertyFriendlyName "Use sequential CP pairs between start and end point"
	bool m_bCPPairs; // 0x1f8
	CPathParameters m_PathParams; // 0x200
};

// Aligment: 6
// Size: 608
class C_INIT_RemapInitialDirectionToTransformToVector : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "transform input"
	CParticleTransformInput m_TransformInput; // 0x1f0
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x240
	// MPropertyFriendlyName "scale factor"
	float m_flScale; // 0x244
	// MPropertyFriendlyName "offset rotation"
	float m_flOffsetRot; // 0x248
	// MPropertyFriendlyName "offset axis"
	// MVectorIsCoordinate
	Vector m_vecOffsetAxis; // 0x24c
	// MPropertyFriendlyName "normalize"
	bool m_bNormalize; // 0x258
};

// Aligment: 2
// Size: 1488
struct VecInputMaterialVariable_t
{
public:
	// MPropertyFriendlyName "material variable"
	CUtlString m_strVariable; // 0x0
	// MPropertyFriendlyName "input"
	CParticleCollectionVecInput m_vecInput; // 0x8
};

// Aligment: 6
// Size: 1216
class C_INIT_CreateSequentialPathV2 : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "maximum distance"
	CPerParticleFloatInput m_fMaxDistance; // 0x1f0
	// MPropertyFriendlyName "particles to map from start to end"
	CParticleCollectionFloatInput m_flNumToAssign; // 0x328
	// MPropertyFriendlyName "restart behavior (0 = bounce, 1 = loop )"
	bool m_bLoop; // 0x460
	// MPropertyFriendlyName "use sequential CP pairs between start and end point"
	bool m_bCPPairs; // 0x461
	// MPropertyFriendlyName "save offset"
	bool m_bSaveOffset; // 0x462
	CPathParameters m_PathParams; // 0x470
};

// Aligment: 7
// Size: 528
class C_OP_RemapVisibilityScalar : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "input field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldInput; // 0x1f0
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f4
	// MPropertyFriendlyName "visibility minimum"
	float m_flInputMin; // 0x1f8
	// MPropertyFriendlyName "visibility maximum"
	float m_flInputMax; // 0x1fc
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x200
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x204
	// MPropertyFriendlyName "radius scale"
	float m_flRadiusScale; // 0x208
};

// Aligment: 0
// Size: 560
class C_OP_RenderClothForce : public CParticleFunctionRenderer, CParticleFunction
{
public:
// <no members described>
};

// Aligment: 6
// Size: 528
class C_OP_RestartAfterDuration : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "minimum restart time"
	float m_flDurationMin; // 0x1f0
	// MPropertyFriendlyName "maximum restart time"
	float m_flDurationMax; // 0x1f4
	// MPropertyFriendlyName "control point to scale duration"
	int32_t m_nCP; // 0x1f8
	// MPropertyFriendlyName "control point field X/Y/Z"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nCPField; // 0x1fc
	// MPropertyFriendlyName "child group ID"
	int32_t m_nChildGroupID; // 0x200
	// MPropertyFriendlyName "only restart children"
	bool m_bOnlyChildren; // 0x204
};

// Aligment: 14
// Size: 4544
class C_INIT_CreateOnModelAtHeight : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "use bones instead of hitboxes"
	bool m_bUseBones; // 0x1f0
	// MPropertyFriendlyName "force creation height to desired height"
	bool m_bForceZ; // 0x1f1
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1f4
	// MPropertyFriendlyName "height override control point number"
	int32_t m_nHeightCP; // 0x1f8
	// MPropertyFriendlyName "desired height is relative to water"
	bool m_bUseWaterHeight; // 0x1fc
	// MPropertyFriendlyName "relative desired height"
	CParticleCollectionFloatInput m_flDesiredHeight; // 0x200
	// MPropertyFriendlyName "model hitbox scale"
	CParticleCollectionVecInput m_vecHitBoxScale; // 0x338
	// MPropertyFriendlyName "direction bias"
	// MVectorIsCoordinate
	CParticleCollectionVecInput m_vecDirectionBias; // 0x900
	// MPropertyFriendlyName "bias type"
	ParticleHitboxBiasType_t m_nBiasType; // 0xec8
	// MPropertyFriendlyName "bias in local space"
	bool m_bLocalCoords; // 0xecc
	// MPropertyFriendlyName "bias prefers moving hitboxes"
	bool m_bPreferMovingBoxes; // 0xecd
	// MPropertyFriendlyName "hitbox set"
	char[128] m_HitboxSetName; // 0xece
	// MPropertyFriendlyName "hitbox velocity inherited scale"
	CParticleCollectionFloatInput m_flHitboxVelocityScale; // 0xf50
	// MPropertyFriendlyName "max hitbox velocity"
	CParticleCollectionFloatInput m_flMaxBoneVelocity; // 0x1088
};

// Aligment: 3
// Size: 512
class C_INIT_RandomAlphaWindowThreshold : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "min"
	float m_flMin; // 0x1f0
	// MPropertyFriendlyName "max"
	float m_flMax; // 0x1f4
	// MPropertyFriendlyName "exponent"
	float m_flExponent; // 0x1f8
};

// Aligment: 3
// Size: 512
class C_OP_VelocityMatchingForce : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "direction matching strength"
	float m_flDirScale; // 0x1f0
	// MPropertyFriendlyName "speed matching strength"
	float m_flSpdScale; // 0x1f4
	// MPropertyFriendlyName "control point to broadcast speed and direction to"
	int32_t m_nCPBroadcast; // 0x1f8
};

// Aligment: 3
// Size: 544
class C_OP_RampCPLinearRandom : public CParticleFunctionPreEmission, CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "output control point"
	int32_t m_nOutControlPointNumber; // 0x200
	// MPropertyFriendlyName "ramp rate min"
	Vector m_vecRateMin; // 0x204
	// MPropertyFriendlyName "ramp rate max"
	Vector m_vecRateMax; // 0x210
};

// Aligment: 10
// Size: 2384
class C_INIT_CreateOnGrid : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "X Dimension Count"
	CParticleCollectionFloatInput m_nXCount; // 0x1f0
	// MPropertyFriendlyName "Y Dimension Count"
	CParticleCollectionFloatInput m_nYCount; // 0x328
	// MPropertyFriendlyName "Z Dimension Count"
	CParticleCollectionFloatInput m_nZCount; // 0x460
	// MPropertyFriendlyName "X Dimension Spacing"
	CParticleCollectionFloatInput m_nXSpacing; // 0x598
	// MPropertyFriendlyName "Y Dimension Spacing"
	CParticleCollectionFloatInput m_nYSpacing; // 0x6d0
	// MPropertyFriendlyName "Z Dimension Spacing"
	CParticleCollectionFloatInput m_nZSpacing; // 0x808
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x940
	// MPropertyFriendlyName "use local space"
	bool m_bLocalSpace; // 0x944
	// MPropertyFriendlyName "center around control point"
	bool m_bCenter; // 0x945
	// MPropertyFriendlyName "hollow"
	bool m_bHollow; // 0x946
};

// Aligment: 1
// Size: 576
class C_OP_RenderPoints : public CParticleFunctionRenderer, CParticleFunction
{
public:
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial; // 0x230
};

// Aligment: 7
// Size: 560
class C_INIT_ColorLitPerParticle : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "color1"
	Color m_ColorMin; // 0x208
	// MPropertyFriendlyName "color2"
	Color m_ColorMax; // 0x20c
	// MPropertyFriendlyName "tint clamp min"
	Color m_TintMin; // 0x210
	// MPropertyFriendlyName "tint clamp max"
	Color m_TintMax; // 0x214
	// MPropertyFriendlyName "light bias"
	float m_flTintPerc; // 0x218
	// MPropertyFriendlyName "tint blend mode"
	ParticleColorBlendMode_t m_nTintBlendMode; // 0x21c
	// MPropertyFriendlyName "light amplification amount"
	float m_flLightAmplification; // 0x220
};

// Aligment: 2
// Size: 8
class CRandomNumberGeneratorParameters
{
public:
	// MPropertyFriendlyName "Distribute evenly"
	bool m_bDistributeEvenly; // 0x0
	// MPropertyFriendlyName "Seed (negative values=randomize)"
	// MPropertySuppressExpr "!m_bDistributeEvenly"
	int32_t m_nSeed; // 0x4
};

// Aligment: 1
// Size: 816
class C_OP_DecayClampCount : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "Maximum Count"
	CParticleCollectionFloatInput m_nCount; // 0x1f0
};

// Aligment: 7
// Size: 608
class C_OP_RenderLights : public C_OP_RenderPoints, CParticleFunctionRenderer, CParticleFunction
{
public:
	// MPropertyFriendlyName "animation rate"
	float m_flAnimationRate; // 0x240
	// MPropertyFriendlyName "animation type"
	AnimationType_t m_nAnimationType; // 0x244
	// MPropertyFriendlyName "set animation value in FPS"
	bool m_bAnimateInFPS; // 0x248
	// MPropertyFriendlyName "minimum visual size"
	float m_flMinSize; // 0x24c
	// MPropertyFriendlyName "maximum visual size"
	float m_flMaxSize; // 0x250
	// MPropertyFriendlyName "size at which to start fading"
	float m_flStartFadeSize; // 0x254
	// MPropertyFriendlyName "size at which to fade away"
	float m_flEndFadeSize; // 0x258
};

// Aligment: 0
// Size: 576
class C_INIT_RemapNamedModelSequenceToScalar : public C_INIT_RemapNamedModelElementToScalar, CParticleFunctionInitializer, CParticleFunction
{
public:
// <no members described>
};

// Aligment: 6
// Size: 560
class C_OP_ColorInterpolateRandom : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "color fade min"
	Color m_ColorFadeMin; // 0x1f0
	// MPropertyFriendlyName "color fade max"
	Color m_ColorFadeMax; // 0x20c
	// MPropertyFriendlyName "fade start time"
	float m_flFadeStartTime; // 0x21c
	// MPropertyFriendlyName "fade end time"
	float m_flFadeEndTime; // 0x220
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x224
	// MPropertyFriendlyName "ease in and out"
	bool m_bEaseInOut; // 0x228
};

// Aligment: 7
// Size: 768
class C_OP_SetControlPointsToModelParticles : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "hitbox set"
	char[128] m_HitboxSetName; // 0x1f0
	// MPropertyFriendlyName "attachment to follow"
	char[128] m_AttachmentName; // 0x270
	// MPropertyFriendlyName "First control point to set"
	int32_t m_nFirstControlPoint; // 0x2f0
	// MPropertyFriendlyName "# of control points to set"
	int32_t m_nNumControlPoints; // 0x2f4
	// MPropertyFriendlyName "first particle to copy"
	int32_t m_nFirstSourcePoint; // 0x2f8
	// MPropertyFriendlyName "use skinning instead of hitboxes"
	bool m_bSkin; // 0x2fc
	// MPropertyFriendlyName "follow attachment"
	bool m_bAttachment; // 0x2fd
};

// Aligment: 5
// Size: 608
class C_INIT_CreateAlongPath : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "maximum distance"
	float m_fMaxDistance; // 0x1f0
	CPathParameters m_PathParams; // 0x200
	// MPropertyFriendlyName "randomly select sequential CP pairs between start and end points"
	bool m_bUseRandomCPs; // 0x240
	// MPropertyFriendlyName "Offset from control point for path end"
	// MVectorIsCoordinate
	Vector m_vEndOffset; // 0x244
	// MPropertyFriendlyName "save offset"
	bool m_bSaveOffset; // 0x250
};

// Aligment: 4
// Size: 528
class C_OP_DistanceCull : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "control point"
	int32_t m_nControlPoint; // 0x1f0
	// MPropertyFriendlyName "control point offset"
	// MVectorIsCoordinate
	Vector m_vecPointOffset; // 0x1f4
	// MPropertyFriendlyName "cull distance"
	float m_flDistance; // 0x200
	// MPropertyFriendlyName "cull inside instead of outside"
	bool m_bCullInside; // 0x204
};

// Aligment: 8
// Size: 592
class C_OP_ConstrainDistanceToPath : public CParticleFunctionConstraint, CParticleFunction
{
public:
	// MPropertyFriendlyName "minimum distance"
	float m_fMinDistance; // 0x1f0
	// MPropertyFriendlyName "maximum distance"
	float m_flMaxDistance0; // 0x1f4
	// MPropertyFriendlyName "maximum distance middle"
	float m_flMaxDistanceMid; // 0x1f8
	// MPropertyFriendlyName "maximum distance end"
	float m_flMaxDistance1; // 0x1fc
	CPathParameters m_PathParameters; // 0x200
	// MPropertyFriendlyName "travel time"
	float m_flTravelTime; // 0x240
	// MPropertyFriendlyName "travel time scale field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldScale; // 0x244
	// MPropertyFriendlyName "manual time placement field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nManualTField; // 0x248
};

// Aligment: 4
// Size: 544
class C_OP_SetControlPointToHand : public CParticleFunctionPreEmission, CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nCP1; // 0x200
	// MPropertyFriendlyName "hand"
	int32_t m_nHand; // 0x204
	// MPropertyFriendlyName "control point offset"
	// MVectorIsCoordinate
	Vector m_vecCP1Pos; // 0x208
	// MPropertyFriendlyName "use hand orientation"
	bool m_bOrientToHand; // 0x214
};

// Aligment: 15
// Size: 704
class C_OP_DistanceBetweenCPsToCP : public CParticleFunctionPreEmission, CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "starting control point"
	int32_t m_nStartCP; // 0x200
	// MPropertyFriendlyName "ending control point"
	int32_t m_nEndCP; // 0x204
	// MPropertyFriendlyName "output control point"
	int32_t m_nOutputCP; // 0x208
	// MPropertyFriendlyName "output control point field"
	int32_t m_nOutputCPField; // 0x20c
	// MPropertyFriendlyName "only set distance once"
	bool m_bSetOnce; // 0x210
	// MPropertyFriendlyName "distance minimum"
	float m_flInputMin; // 0x214
	// MPropertyFriendlyName "distance maximum"
	float m_flInputMax; // 0x218
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x21c
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x220
	// MPropertyFriendlyName "maximum trace length"
	float m_flMaxTraceLength; // 0x224
	// MPropertyFriendlyName "LOS Failure Scale"
	float m_flLOSScale; // 0x228
	// MPropertyFriendlyName "ensure line of sight"
	bool m_bLOS; // 0x22c
	// MPropertyFriendlyName "LOS collision group"
	char[128] m_CollisionGroupName; // 0x22d
	// MPropertyFriendlyName "Trace Set"
	ParticleTraceSet_t m_nTraceSet; // 0x2b0
	// MPropertyFriendlyName "set parent"
	ParticleParentSetMode_t m_nSetParent; // 0x2b4
};

// Aligment: 11
// Size: 1472
class C_OP_SetFromCPSnapshot : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "snapshot control point number"
	int32_t m_nControlPointNumber; // 0x1f0
	// MPropertyFriendlyName "field to read"
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nAttributeToRead; // 0x1f4
	// MPropertyFriendlyName "field to write"
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nAttributeToWrite; // 0x1f8
	// MPropertyFriendlyName "local space control point number"
	int32_t m_nLocalSpaceCP; // 0x1fc
	// MPropertyFriendlyName "random order"
	bool m_bRandom; // 0x200
	// MPropertyFriendlyName "reverse order"
	bool m_bReverse; // 0x201
	// MPropertyFriendlyName "random seed"
	int32_t m_nRandomSeed; // 0x204
	// MPropertyFriendlyName "Snapshot start point"
	CParticleCollectionFloatInput m_nSnapShotStartPoint; // 0x208
	// MPropertyFriendlyName "Snapshot increment amount"
	CParticleCollectionFloatInput m_nSnapShotIncrement; // 0x340
	// MPropertyFriendlyName "Interpolation"
	CPerParticleFloatInput m_flInterpolation; // 0x478
	// MPropertyFriendlyName "Sub-Sample Between Input Points"
	bool m_bSubSample; // 0x5b0
};

// Aligment: 3
// Size: 512
class C_OP_RemapVectortoCP : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "output control point"
	int32_t m_nOutControlPointNumber; // 0x1f0
	// MPropertyFriendlyName "input field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldInput; // 0x1f4
	// MPropertyFriendlyName "particle number to read"
	int32_t m_nParticleNumber; // 0x1f8
};

// Aligment: 0
// Size: 312
class CParticleRemapFloatInput : public CParticleFloatInput
{
public:
// <no members described>
};

// Aligment: 3
// Size: 544
class C_OP_RemapDistanceToLineSegmentToScalar : public C_OP_RemapDistanceToLineSegmentBase, CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x210
	// MPropertyFriendlyName "output value at min distance"
	float m_flMinOutputValue; // 0x214
	// MPropertyFriendlyName "output value at max distance"
	float m_flMaxOutputValue; // 0x218
};

// Aligment: 13
// Size: 736
class C_INIT_RemapTransformToVector : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f0
	// MPropertyFriendlyName "input minimum"
	// MVectorIsSometimesCoordinate
	Vector m_vInputMin; // 0x1f4
	// MPropertyFriendlyName "input maximum"
	// MVectorIsSometimesCoordinate
	Vector m_vInputMax; // 0x200
	// MPropertyFriendlyName "output minimum"
	// MVectorIsSometimesCoordinate
	Vector m_vOutputMin; // 0x20c
	// MPropertyFriendlyName "output maximum"
	// MVectorIsSometimesCoordinate
	Vector m_vOutputMax; // 0x218
	// MPropertyFriendlyName "transform input"
	CParticleTransformInput m_TransformInput; // 0x228
	// MPropertyFriendlyName "local space transform"
	// MParticleTransformInputOptional
	CParticleTransformInput m_LocalSpaceTransform; // 0x278
	// MPropertyFriendlyName "emitter lifetime start time (seconds)"
	float m_flStartTime; // 0x2c8
	// MPropertyFriendlyName "emitter lifetime end time (seconds)"
	float m_flEndTime; // 0x2cc
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x2d0
	// MPropertyFriendlyName "offset position"
	bool m_bOffset; // 0x2d4
	// MPropertyFriendlyName "accelerate position"
	bool m_bAccelerate; // 0x2d5
	// MPropertyFriendlyName "remap bias"
	float m_flRemapBias; // 0x2d8
};

// Aligment: 4
// Size: 1168
class C_OP_SetFloat : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "value"
	CPerParticleFloatInput m_InputValue; // 0x1f0
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nOutputField; // 0x328
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x32c
	// MPropertyFriendlyName "interpolation"
	CPerParticleFloatInput m_Lerp; // 0x330
};

// Aligment: 5
// Size: 640
class C_OP_ModelCull : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1f0
	// MPropertyFriendlyName "use only bounding box"
	bool m_bBoundBox; // 0x1f4
	// MPropertyFriendlyName "cull outside instead of inside"
	bool m_bCullOutside; // 0x1f5
	// MPropertyFriendlyName "use bones instead of hitboxes"
	bool m_bUseBones; // 0x1f6
	// MPropertyFriendlyName "hitbox set"
	char[128] m_HitboxSetName; // 0x1f7
};

// Aligment: 3
// Size: 1984
class C_OP_LocalAccelerationForce : public CParticleFunctionForce, CParticleFunction
{
public:
	// MPropertyFriendlyName "local space control point"
	int32_t m_nCP; // 0x1f0
	// MPropertyFriendlyName "scale control point"
	int32_t m_nScaleCP; // 0x1f4
	// MPropertyFriendlyName "local space acceleration"
	CParticleCollectionVecInput m_vecAccel; // 0x1f8
};

// Aligment: 15
// Size: 88
struct ParticlePreviewState_t
{
public:
	CUtlString m_previewModel; // 0x0
	uint32_t m_nModSpecificData; // 0x8
	PetGroundType_t m_groundType; // 0xc
	CUtlString m_sequenceName; // 0x10
	int32_t m_nFireParticleOnSequenceFrame; // 0x18
	CUtlString m_hitboxSetName; // 0x20
	CUtlString m_materialGroupName; // 0x28
	CUtlVector< ParticlePreviewBodyGroup_t > m_vecBodyGroups; // 0x30
	float m_flPlaybackSpeed; // 0x48
	float m_flParticleSimulationRate; // 0x4c
	bool m_bShouldDrawHitboxes; // 0x50
	bool m_bShouldDrawAttachments; // 0x51
	bool m_bShouldDrawAttachmentNames; // 0x52
	bool m_bShouldDrawControlPointAxes; // 0x53
	bool m_bAnimationNonLooping; // 0x54
};

// Aligment: 7
// Size: 528
class C_OP_RemapParticleCountOnScalarEndCap : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f0
	// MPropertyFriendlyName "input minimum"
	int32_t m_nInputMin; // 0x1f4
	// MPropertyFriendlyName "input maximum"
	int32_t m_nInputMax; // 0x1f8
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x1fc
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x200
	// MPropertyFriendlyName "count back from last particle"
	bool m_bBackwards; // 0x204
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x208
};

// Aligment: 2
// Size: 528
class C_OP_RandomForce : public CParticleFunctionForce, CParticleFunction
{
public:
	// MPropertyFriendlyName "min force"
	// MVectorIsCoordinate
	Vector m_MinForce; // 0x1f0
	// MPropertyFriendlyName "max force"
	// MVectorIsCoordinate
	Vector m_MaxForce; // 0x1fc
};

// Aligment: 7
// Size: 624
class C_OP_RenderStatusEffect : public CParticleFunctionRenderer, CParticleFunction
{
public:
	// MPropertyFriendlyName "color warp texture (3d)"
	// MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
	CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureColorWarp; // 0x230
	// MPropertyFriendlyName "detail 2 texture"
	// MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
	CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureDetail2; // 0x238
	// MPropertyFriendlyName "diffuse warp texture (3d)"
	// MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
	CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureDiffuseWarp; // 0x240
	// MPropertyFriendlyName "fresnel color warp texture (3d)"
	// MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
	CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureFresnelColorWarp; // 0x248
	// MPropertyFriendlyName "fresnel warp texture"
	// MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
	CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureFresnelWarp; // 0x250
	// MPropertyFriendlyName "specular warp texture"
	// MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
	CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureSpecularWarp; // 0x258
	// MPropertyFriendlyName "environment map texture"
	// MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
	CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureEnvMap; // 0x260
};

// Aligment: 4
// Size: 592
class C_OP_RemapTransformOrientationToYaw : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "transform input"
	CParticleTransformInput m_TransformInput; // 0x1f0
	// MPropertyFriendlyName "rotation field"
	// MPropertyAttributeChoiceName "particlefield_rotation"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x240
	// MPropertyFriendlyName "rotation offset"
	float m_flRotOffset; // 0x244
	// MPropertyFriendlyName "spin strength"
	float m_flSpinStrength; // 0x248
};

// Aligment: 5
// Size: 528
class C_INIT_RemapInitialVisibilityScalar : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f4
	// MPropertyFriendlyName "visibility minimum"
	float m_flInputMin; // 0x1f8
	// MPropertyFriendlyName "visibility maximum"
	float m_flInputMax; // 0x1fc
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x200
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x204
};

// Aligment: 6
// Size: 560
class C_INIT_AddVectorToVector : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "component scale factor"
	Vector m_vecScale; // 0x1f0
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1fc
	// MPropertyFriendlyName "input field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldInput; // 0x200
	// MPropertyFriendlyName "random offset min"
	Vector m_vOffsetMin; // 0x204
	// MPropertyFriendlyName "random offset max"
	Vector m_vOffsetMax; // 0x210
	// MPropertyFriendlyName "Random number generator controls"
	CRandomNumberGeneratorParameters m_randomnessParameters; // 0x21c
};

// Aligment: 6
// Size: 3584
class C_OP_SetVectorAttributeToVectorExpression : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "expression"
	VectorExpressionType_t m_nExpression; // 0x1f0
	// MPropertyFriendlyName "input 1"
	CPerParticleVecInput m_vInput1; // 0x1f8
	// MPropertyFriendlyName "input 2"
	CPerParticleVecInput m_vInput2; // 0x7c0
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nOutputField; // 0xd88
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0xd8c
	// MPropertyFriendlyName "normalize result"
	bool m_bNormalizedOutput; // 0xd90
};

// Aligment: 5
// Size: 2000
class C_INIT_InitFromVectorFieldSnapshot : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "snapshot control point number"
	int32_t m_nControlPointNumber; // 0x1f0
	// MPropertyFriendlyName "local space control point number"
	int32_t m_nLocalSpaceCP; // 0x1f4
	// MPropertyFriendlyName "weight update control point"
	int32_t m_nWeightUpdateCP; // 0x1f8
	// MPropertyFriendlyName "use vertical velocity for weighting"
	bool m_bUseVerticalVelocity; // 0x1fc
	// MPropertyFriendlyName "Component Scale"
	CPerParticleVecInput m_vecScale; // 0x200
};

// Aligment: 2
// Size: 1120
class C_OP_CollideWithParentParticles : public CParticleFunctionConstraint, CParticleFunction
{
public:
	// MPropertyFriendlyName "parent particle radius scale"
	CPerParticleFloatInput m_flParentRadiusScale; // 0x1f0
	// MPropertyFriendlyName "particle radius scale"
	CPerParticleFloatInput m_flRadiusScale; // 0x328
};

// Aligment: 3
// Size: 832
class C_INIT_DistanceCull : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "control point"
	int32_t m_nControlPoint; // 0x1f0
	// MPropertyFriendlyName "cull distance"
	CParticleCollectionFloatInput m_flDistance; // 0x1f8
	// MPropertyFriendlyName "cull inside instead of outside"
	bool m_bCullInside; // 0x330
};

// Aligment: 5
// Size: 560
class C_OP_RampScalarSplineSimple : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "ramp rate"
	float m_Rate; // 0x1f0
	// MPropertyFriendlyName "start time"
	float m_flStartTime; // 0x1f4
	// MPropertyFriendlyName "end time"
	float m_flEndTime; // 0x1f8
	// MPropertyFriendlyName "ramp field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nField; // 0x220
	// MPropertyFriendlyName "ease out"
	bool m_bEaseOut; // 0x224
};

// Aligment: 5
// Size: 544
class C_INIT_RandomSequence : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "sequence min"
	// MPropertyAttributeEditor "SequencePicker( 1 )"
	int32_t m_nSequenceMin; // 0x1f0
	// MPropertyFriendlyName "sequence max"
	// MPropertyAttributeEditor "SequencePicker( 1 )"
	int32_t m_nSequenceMax; // 0x1f4
	// MPropertyFriendlyName "shuffle"
	bool m_bShuffle; // 0x1f8
	// MPropertyFriendlyName "linear"
	bool m_bLinear; // 0x1f9
	// MPropertyFriendlyName "weighted list"
	CUtlVector< SequenceWeightedList_t > m_WeightedList; // 0x200
};

// Aligment: 6
// Size: 576
class C_OP_FadeOut : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "fade out time min"
	float m_flFadeOutTimeMin; // 0x1f0
	// MPropertyFriendlyName "fade out time max"
	float m_flFadeOutTimeMax; // 0x1f4
	// MPropertyFriendlyName "fade out time exponent"
	float m_flFadeOutTimeExp; // 0x1f8
	// MPropertyFriendlyName "fade bias"
	float m_flFadeBias; // 0x1fc
	// MPropertyFriendlyName "proportional 0/1"
	bool m_bProportional; // 0x230
	// MPropertyFriendlyName "ease in and out"
	bool m_bEaseInAndOut; // 0x231
};

// Aligment: 13
// Size: 544
class C_OP_OscillateScalar : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "oscillation rate min"
	float m_RateMin; // 0x1f0
	// MPropertyFriendlyName "oscillation rate max"
	float m_RateMax; // 0x1f4
	// MPropertyFriendlyName "oscillation frequency min"
	float m_FrequencyMin; // 0x1f8
	// MPropertyFriendlyName "oscillation frequency max"
	float m_FrequencyMax; // 0x1fc
	// MPropertyFriendlyName "oscillation field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nField; // 0x200
	// MPropertyFriendlyName "proportional 0/1"
	bool m_bProportional; // 0x204
	// MPropertyFriendlyName "start/end proportional"
	bool m_bProportionalOp; // 0x205
	// MPropertyFriendlyName "start time min"
	float m_flStartTime_min; // 0x208
	// MPropertyFriendlyName "start time max"
	float m_flStartTime_max; // 0x20c
	// MPropertyFriendlyName "end time min"
	float m_flEndTime_min; // 0x210
	// MPropertyFriendlyName "end time max"
	float m_flEndTime_max; // 0x214
	// MPropertyFriendlyName "oscillation multiplier"
	float m_flOscMult; // 0x218
	// MPropertyFriendlyName "oscillation start phase"
	float m_flOscAdd; // 0x21c
};

// Aligment: 5
// Size: 1520
class C_OP_RenderBlobs : public CParticleFunctionRenderer, CParticleFunction
{
public:
	// MPropertyFriendlyName "cube width"
	CParticleCollectionFloatInput m_cubeWidth; // 0x230
	// MPropertyFriendlyName "cutoff radius"
	CParticleCollectionFloatInput m_cutoffRadius; // 0x368
	// MPropertyFriendlyName "render radius"
	CParticleCollectionFloatInput m_renderRadius; // 0x4a0
	// MPropertyFriendlyName "scale CP (cube width/cutoff/render = x/y/z)"
	int32_t m_nScaleCP; // 0x5d8
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial; // 0x5e0
};

// Aligment: 0
// Size: 1480
class CParticleCollectionVecInput : public CParticleVecInput
{
public:
// <no members described>
};

// Aligment: 26
// Size: 2272
class C_OP_WorldTraceConstraint : public CParticleFunctionConstraint, CParticleFunction
{
public:
	// MPropertyFriendlyName "control point for fast collision tests"
	int32_t m_nCP; // 0x1f0
	// MPropertyFriendlyName "control point offset for fast collisions"
	// MVectorIsCoordinate
	Vector m_vecCpOffset; // 0x1f4
	// MPropertyFriendlyName "collision mode"
	ParticleCollisionMode_t m_nCollisionMode; // 0x200
	// MPropertyFriendlyName "minimum detail collision mode"
	ParticleCollisionMode_t m_nCollisionModeMin; // 0x204
	// MPropertyStartGroup "Collision Options"
	// MPropertyFriendlyName "Trace Set"
	ParticleTraceSet_t m_nTraceSet; // 0x208
	// MPropertyFriendlyName "collision group"
	char[128] m_CollisionGroupName; // 0x20c
	// MPropertyFriendlyName "World Only"
	bool m_bWorldOnly; // 0x28c
	// MPropertyFriendlyName "brush only"
	bool m_bBrushOnly; // 0x28d
	// MPropertyFriendlyName "include water"
	bool m_bIncludeWater; // 0x28e
	// MPropertyFriendlyName "CP Entity to Ignore for Collisions"
	int32_t m_nIgnoreCP; // 0x290
	// MPropertyFriendlyName "control point movement distance tolerance"
	// MPropertySuppressExpr "m_nCollisionMode == COLLISION_MODE_PER_PARTICLE_TRACE"
	float m_flCpMovementTolerance; // 0x294
	// MPropertyFriendlyName "plane cache retest rate"
	// MPropertySuppressExpr "m_nCollisionMode != COLLISION_MODE_PER_FRAME_PLANESET"
	float m_flRetestRate; // 0x298
	// MPropertyFriendlyName "trace accuracy tolerance"
	// MPropertySuppressExpr "m_nCollisionMode != COLLISION_MODE_USE_NEAREST_TRACE"
	float m_flTraceTolerance; // 0x29c
	// MPropertyFriendlyName "Confirm Collision Speed Threshold"
	// MPropertySuppressExpr "m_nCollisionMode == COLLISION_MODE_PER_PARTICLE_TRACE"
	float m_flCollisionConfirmationSpeed; // 0x2a0
	// MPropertyFriendlyName "Max Confirmation Traces Per Fame"
	// MPropertySuppressExpr "m_nCollisionMode == COLLISION_MODE_PER_PARTICLE_TRACE"
	float m_nMaxTracesPerFrame; // 0x2a4
	// MPropertyStartGroup "Impact Options"
	// MPropertyFriendlyName "radius scale"
	CPerParticleFloatInput m_flRadiusScale; // 0x2a8
	// MPropertyFriendlyName "amount of bounce"
	CPerParticleFloatInput m_flBounceAmount; // 0x3e0
	// MPropertyFriendlyName "amount of slide"
	CPerParticleFloatInput m_flSlideAmount; // 0x518
	// MPropertyFriendlyName "Random Direction scale"
	CPerParticleFloatInput m_flRandomDirScale; // 0x650
	// MPropertyFriendlyName "Add Decay to Bounce"
	bool m_bDecayBounce; // 0x788
	// MPropertyFriendlyName "kill particle on collision"
	bool m_bKillonContact; // 0x789
	// MPropertyFriendlyName "minimum speed to kill on collision"
	float m_flMinSpeed; // 0x78c
	// MPropertyFriendlyName "Set Normal"
	bool m_bSetNormal; // 0x790
	// MPropertyFriendlyName "Stick On Collision Cache Field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nStickOnCollisionField; // 0x794
	// MPropertyFriendlyName "Speed to stop when sticking"
	CPerParticleFloatInput m_flStopSpeed; // 0x798
	// MPropertyFriendlyName "Entity Hitbox Cache Field (Requires Stick on Collision)"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nEntityStickDataField; // 0x8d0
};

// Aligment: 3
// Size: 896
class C_OP_RenderPostProcessing : public CParticleFunctionRenderer, CParticleFunction
{
public:
	// MPropertyFriendlyName "Post Processing Strength"
	CPerParticleFloatInput m_flPostProcessStrength; // 0x230
	// MPropertyFriendlyName "Post Processing File"
	// MPropertyAttributeEditor "AssetBrowse( vpost, *showassetpreview )"
	CStrongHandle< InfoForResourceTypeCPostProcessingResource > m_hPostTexture; // 0x368
	// MPropertyFriendlyName "Post Processing Priority Group"
	ParticlePostProcessPriorityGroup_t m_nPriority; // 0x370
};

// Aligment: 4
// Size: 512
class C_INIT_RandomScalar : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "min"
	float m_flMin; // 0x1f0
	// MPropertyFriendlyName "max"
	float m_flMax; // 0x1f4
	// MPropertyFriendlyName "exponent"
	float m_flExponent; // 0x1f8
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1fc
};

// Aligment: 13
// Size: 1296
class C_INIT_PositionPlaceOnGround : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "offset"
	CPerParticleFloatInput m_flOffset; // 0x1f0
	// MPropertyFriendlyName "max trace length"
	CPerParticleFloatInput m_flMaxTraceLength; // 0x328
	// MPropertyFriendlyName "collision group"
	char[128] m_CollisionGroupName; // 0x460
	// MPropertyFriendlyName "Trace Set"
	ParticleTraceSet_t m_nTraceSet; // 0x4e0
	// MPropertyFriendlyName "No Collision Behavior"
	ParticleTraceMissBehavior_t m_nTraceMissBehavior; // 0x4f0
	// MPropertyFriendlyName "include water"
	bool m_bIncludeWater; // 0x4f4
	// MPropertyFriendlyName "set normal"
	bool m_bSetNormal; // 0x4f5
	// MPropertyFriendlyName "set Previous XYZ only"
	bool m_bSetPXYZOnly; // 0x4f6
	// MPropertyFriendlyName "Trace along particle normal"
	bool m_bTraceAlongNormal; // 0x4f7
	// MPropertyFriendlyName "Offset only if trace hit"
	bool m_bOffsetonColOnly; // 0x4f8
	// MPropertyFriendlyName "offset final position by this fraction of the particle radius"
	float m_flOffsetByRadiusFactor; // 0x4fc
	// MPropertyFriendlyName "preserve initial Z-offset relative to cp"
	int32_t m_nPreserveOffsetCP; // 0x500
	// MPropertyFriendlyName "CP Entity to Ignore for Collisions"
	int32_t m_nIgnoreCP; // 0x504
};

// Aligment: 11
// Size: 1920
class C_OP_CylindricalDistanceToTransform : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f0
	// MPropertyFriendlyName "cylinder inner radius"
	CPerParticleFloatInput m_flInputMin; // 0x1f8
	// MPropertyFriendlyName "cylinder outer radius"
	CPerParticleFloatInput m_flInputMax; // 0x330
	// MPropertyFriendlyName "cylinder inner output"
	CPerParticleFloatInput m_flOutputMin; // 0x468
	// MPropertyFriendlyName "cylinder outer output"
	CPerParticleFloatInput m_flOutputMax; // 0x5a0
	// MPropertyFriendlyName "cylindrical top transform"
	CParticleTransformInput m_TransformStart; // 0x6d8
	// MPropertyFriendlyName "cylindrical bottom transform"
	CParticleTransformInput m_TransformEnd; // 0x728
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x778
	// MPropertyFriendlyName "only active within specified distance"
	bool m_bActiveRange; // 0x77c
	// MPropertyFriendlyName "output is additive"
	bool m_bAdditive; // 0x77d
	// MPropertyFriendlyName "apply radius to ends (capsule)"
	bool m_bCapsule; // 0x77e
};

// Aligment: 9
// Size: 2320
class C_OP_VectorFieldSnapshot : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "snapshot control point number"
	int32_t m_nControlPointNumber; // 0x1f0
	// MPropertyFriendlyName "extra velocity field to write"
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nAttributeToWrite; // 0x1f4
	// MPropertyFriendlyName "local space control point number"
	int32_t m_nLocalSpaceCP; // 0x1f8
	// MPropertyFriendlyName "Interpolation"
	CPerParticleFloatInput m_flInterpolation; // 0x200
	// MPropertyFriendlyName "Component Scale"
	CPerParticleVecInput m_vecScale; // 0x338
	// MPropertyFriendlyName "Boundary Dampening"
	float m_flBoundaryDampening; // 0x900
	// MPropertyFriendlyName "Set Velocity"
	bool m_bSetVelocity; // 0x904
	// MPropertyFriendlyName "Lock to Surface"
	bool m_bLockToSurface; // 0x905
	// MPropertyFriendlyName "Vector Field Grid Spacing Override"
	float m_flGridSpacing; // 0x908
};

// Aligment: 33
// Size: 1856
class C_OP_ControlpointLight : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "initial color bias"
	float m_flScale; // 0x1f0
	// MPropertyFriendlyName "light 1 control point"
	int32_t m_nControlPoint1; // 0x6c0
	// MPropertyFriendlyName "light 2 control point"
	int32_t m_nControlPoint2; // 0x6c4
	// MPropertyFriendlyName "light 3 control point"
	int32_t m_nControlPoint3; // 0x6c8
	// MPropertyFriendlyName "light 4 control point"
	int32_t m_nControlPoint4; // 0x6cc
	// MPropertyFriendlyName "light 1 control point offset"
	Vector m_vecCPOffset1; // 0x6d0
	// MPropertyFriendlyName "light 2 control point offset"
	Vector m_vecCPOffset2; // 0x6dc
	// MPropertyFriendlyName "light 3 control point offset"
	Vector m_vecCPOffset3; // 0x6e8
	// MPropertyFriendlyName "light 4 control point offset"
	Vector m_vecCPOffset4; // 0x6f4
	// MPropertyFriendlyName "light 1 50% distance"
	float m_LightFiftyDist1; // 0x700
	// MPropertyFriendlyName "light 1 0% distance"
	float m_LightZeroDist1; // 0x704
	// MPropertyFriendlyName "light 2 50% distance"
	float m_LightFiftyDist2; // 0x708
	// MPropertyFriendlyName "light 2 0% distance"
	float m_LightZeroDist2; // 0x70c
	// MPropertyFriendlyName "light 3 50% distance"
	float m_LightFiftyDist3; // 0x710
	// MPropertyFriendlyName "light 3 0% distance"
	float m_LightZeroDist3; // 0x714
	// MPropertyFriendlyName "light 4 50% distance"
	float m_LightFiftyDist4; // 0x718
	// MPropertyFriendlyName "light 4 0% distance"
	float m_LightZeroDist4; // 0x71c
	// MPropertyFriendlyName "light 1 color"
	Color m_LightColor1; // 0x720
	// MPropertyFriendlyName "light 2 color"
	Color m_LightColor2; // 0x724
	// MPropertyFriendlyName "light 3 color"
	Color m_LightColor3; // 0x728
	// MPropertyFriendlyName "light 4 color"
	Color m_LightColor4; // 0x72c
	// MPropertyFriendlyName "light 1 type 0=point 1=spot"
	bool m_bLightType1; // 0x730
	// MPropertyFriendlyName "light 2 type 0=point 1=spot"
	bool m_bLightType2; // 0x731
	// MPropertyFriendlyName "light 3 type 0=point 1=spot"
	bool m_bLightType3; // 0x732
	// MPropertyFriendlyName "light 4 type 0=point 1=spot"
	bool m_bLightType4; // 0x733
	// MPropertyFriendlyName "light 1 dynamic light"
	bool m_bLightDynamic1; // 0x734
	// MPropertyFriendlyName "light 2 dynamic light"
	bool m_bLightDynamic2; // 0x735
	// MPropertyFriendlyName "light 3 dynamic light"
	bool m_bLightDynamic3; // 0x736
	// MPropertyFriendlyName "light 4 dynamic light"
	bool m_bLightDynamic4; // 0x737
	// MPropertyFriendlyName "compute normals from control points"
	bool m_bUseNormal; // 0x738
	// MPropertyFriendlyName "half-lambert normals"
	bool m_bUseHLambert; // 0x739
	// MPropertyFriendlyName "clamp minimum light value to initial color"
	bool m_bClampLowerRange; // 0x73e
	// MPropertyFriendlyName "clamp maximum light value to initial color"
	bool m_bClampUpperRange; // 0x73f
};

// Aligment: 2
// Size: 832
class C_OP_ChooseRandomChildrenInGroup : public CParticleFunctionPreEmission, CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "group ID to affect"
	int32_t m_nChildGroupID; // 0x200
	// MPropertyFriendlyName "Number of Children to Use"
	CParticleCollectionFloatInput m_flNumberOfChildren; // 0x208
};

// Aligment: 5
// Size: 3472
class C_INIT_CreateWithinBox : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "min"
	// MVectorIsCoordinate
	CPerParticleVecInput m_vecMin; // 0x1f0
	// MPropertyFriendlyName "max"
	// MVectorIsCoordinate
	CPerParticleVecInput m_vecMax; // 0x7b8
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0xd80
	// MPropertyFriendlyName "use local space"
	bool m_bLocalSpace; // 0xd84
	// MPropertyFriendlyName "Random number generator controls"
	CRandomNumberGeneratorParameters m_randomnessParameters; // 0xd88
};

// Aligment: 6
// Size: 528
class C_OP_UpdateLightSource : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "color tint"
	Color m_vColorTint; // 0x1f0
	// MPropertyFriendlyName "amount to multiply light brightness by"
	float m_flBrightnessScale; // 0x1f4
	// MPropertyFriendlyName "amount to multiply particle system radius by to get light radius"
	float m_flRadiusScale; // 0x1f8
	// MPropertyFriendlyName "minimum radius for created lights"
	float m_flMinimumLightingRadius; // 0x1fc
	// MPropertyFriendlyName "maximum radius for created lights"
	float m_flMaximumLightingRadius; // 0x200
	// MPropertyFriendlyName "amount of damping of changes"
	float m_flPositionDampingConstant; // 0x204
};

// Aligment: 2
// Size: 576
class C_OP_RenderScreenVelocityRotate : public CParticleFunctionRenderer, CParticleFunction
{
public:
	// MPropertyFriendlyName "rotate rate(dps)"
	float m_flRotateRateDegrees; // 0x230
	// MPropertyFriendlyName "forward angle"
	float m_flForwardDegrees; // 0x234
};

// Aligment: 10
// Size: 704
class C_OP_PercentageBetweenTransformsVector : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f0
	// MPropertyFriendlyName "percentage minimum"
	float m_flInputMin; // 0x1f4
	// MPropertyFriendlyName "percentage maximum"
	float m_flInputMax; // 0x1f8
	// MPropertyFriendlyName "output minimum"
	// MVectorIsSometimesCoordinate
	Vector m_vecOutputMin; // 0x1fc
	// MPropertyFriendlyName "output maximum"
	// MVectorIsSometimesCoordinate
	Vector m_vecOutputMax; // 0x208
	// MPropertyFriendlyName "strarting transform"
	CParticleTransformInput m_TransformStart; // 0x218
	// MPropertyFriendlyName "end transform"
	CParticleTransformInput m_TransformEnd; // 0x268
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x2b8
	// MPropertyFriendlyName "only active within input range"
	bool m_bActiveRange; // 0x2bc
	// MPropertyFriendlyName "treat distance between points as radius"
	bool m_bRadialCheck; // 0x2bd
};

// Aligment: 0
// Size: 592
class C_OP_RemapNamedModelMeshGroupEndCap : public C_OP_RemapNamedModelElementEndCap, CParticleFunctionOperator, CParticleFunction
{
public:
// <no members described>
};

// Aligment: 60
// Size: 928
class CParticleSystemDefinition : public IParticleSystemDefinition
{
public:
	// MPropertyFriendlyName "version"
	// MPropertySuppressField
	int32_t m_nBehaviorVersion; // 0x8
	// MPropertySuppressField
	CUtlVector< CParticleFunctionPreEmission* > m_PreEmissionOperators; // 0x10
	// MPropertySuppressField
	CUtlVector< CParticleFunctionEmitter* > m_Emitters; // 0x28
	// MPropertySuppressField
	CUtlVector< CParticleFunctionInitializer* > m_Initializers; // 0x40
	// MPropertySuppressField
	CUtlVector< CParticleFunctionOperator* > m_Operators; // 0x58
	// MPropertySuppressField
	CUtlVector< CParticleFunctionForce* > m_ForceGenerators; // 0x70
	// MPropertySuppressField
	CUtlVector< CParticleFunctionConstraint* > m_Constraints; // 0x88
	// MPropertySuppressField
	CUtlVector< CParticleFunctionRenderer* > m_Renderers; // 0xa0
	// MPropertySuppressField
	CUtlVector< ParticleChildrenInfo_t > m_Children; // 0xb8
	// MPropertySuppressField
	int32_t m_nFirstMultipleOverride_BackwardCompat; // 0x178
	// MPropertyStartGroup "+Collection Options"
	// MPropertyFriendlyName "initial particles"
	int32_t m_nInitialParticles; // 0x1f0
	// MPropertyFriendlyName "max particles"
	int32_t m_nMaxParticles; // 0x1f4
	// MPropertyFriendlyName "group id"
	int32_t m_nGroupID; // 0x1f8
	// MPropertyStartGroup "Bounding Box"
	// MPropertyFriendlyName "bounding box bloat min"
	// MVectorIsCoordinate
	Vector m_BoundingBoxMin; // 0x1fc
	// MPropertyFriendlyName "bounding box bloat max"
	// MVectorIsCoordinate
	Vector m_BoundingBoxMax; // 0x208
	// MPropertyFriendlyName "bounding box depth sort bias"
	float m_flDepthSortBias; // 0x214
	// MPropertyFriendlyName "sort override position CP"
	int32_t m_nSortOverridePositionCP; // 0x218
	// MPropertyFriendlyName "infinite bounds - don't cull"
	bool m_bInfiniteBounds; // 0x21c
	// MPropertyStartGroup "+Base Properties"
	// MPropertyFriendlyName "color"
	// MPropertyColorPlusAlpha
	Color m_ConstantColor; // 0x21d
	// MPropertyFriendlyName "normal"
	// MVectorIsCoordinate
	Vector m_ConstantNormal; // 0x224
	// MPropertyFriendlyName "radius"
	// MPropertyAttributeRange "biased 0 500"
	float m_flConstantRadius; // 0x230
	// MPropertyFriendlyName "rotation"
	float m_flConstantRotation; // 0x234
	// MPropertyFriendlyName "rotation speed"
	float m_flConstantRotationSpeed; // 0x238
	// MPropertyFriendlyName "lifetime"
	float m_flConstantLifespan; // 0x23c
	// MPropertyFriendlyName "sequence number"
	// MPropertyAttributeEditor "SequencePicker( 1 )"
	int32_t m_nConstantSequenceNumber; // 0x240
	// MPropertyFriendlyName "sequence number 1"
	// MPropertyAttributeEditor "SequencePicker( 2 )"
	int32_t m_nConstantSequenceNumber1; // 0x244
	// MPropertyStartGroup "Snapshot Options"
	int32_t m_nSnapshotControlPoint; // 0x248
	CStrongHandle< InfoForResourceTypeIParticleSnapshot > m_hSnapshot; // 0x250
	// MPropertyStartGroup "Replacement Options"
	// MPropertyFriendlyName "cull replacement definition"
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_pszCullReplacementName; // 0x258
	// MPropertyFriendlyName "cull radius"
	float m_flCullRadius; // 0x260
	// MPropertyFriendlyName "cull cost"
	float m_flCullFillCost; // 0x264
	// MPropertyFriendlyName "cull control point"
	int32_t m_nCullControlPoint; // 0x268
	// MPropertyFriendlyName "fallback replacement definition"
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hFallback; // 0x270
	// MPropertyFriendlyName "fallback max count"
	int32_t m_nFallbackMaxCount; // 0x278
	// MPropertyFriendlyName "low violence definition"
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hLowViolenceDef; // 0x280
	// MPropertyFriendlyName "reference replacement definition"
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hReferenceReplacement; // 0x288
	// MPropertyStartGroup "Simulation Options"
	// MPropertyFriendlyName "pre-simulation time"
	float m_flPreSimulationTime; // 0x290
	// MPropertyFriendlyName "freeze simulation after time"
	float m_flStopSimulationAfterTime; // 0x294
	// MPropertyFriendlyName "maximum time step"
	float m_flMaximumTimeStep; // 0x298
	// MPropertyFriendlyName "maximum sim tick rate"
	float m_flMaximumSimTime; // 0x29c
	// MPropertyFriendlyName "minimum sim tick rate"
	float m_flMinimumSimTime; // 0x2a0
	// MPropertyFriendlyName "minimum simulation time step"
	float m_flMinimumTimeStep; // 0x2a4
	// MPropertyFriendlyName "minimum required rendered frames"
	int32_t m_nMinimumFrames; // 0x2a8
	// MPropertyStartGroup "Performance Options"
	// MPropertyFriendlyName "minimum CPU level"
	int32_t m_nMinCPULevel; // 0x2ac
	// MPropertyFriendlyName "minimum GPU level"
	int32_t m_nMinGPULevel; // 0x2b0
	// MPropertyFriendlyName "time to sleep when not drawn"
	float m_flNoDrawTimeToGoToSleep; // 0x2b4
	// MPropertyFriendlyName "maximum draw distance"
	float m_flMaxDrawDistance; // 0x2b8
	// MPropertyFriendlyName "start fade distance"
	float m_flStartFadeDistance; // 0x2bc
	// MPropertyFriendlyName "maximum creation distance"
	float m_flMaxCreationDistance; // 0x2c0
	// MPropertyFriendlyName "minimum free particles to aggregate"
	int32_t m_nAggregationMinAvailableParticles; // 0x2c4
	// MPropertyFriendlyName "aggregation radius"
	float m_flAggregateRadius; // 0x2c8
	// MPropertyFriendlyName "batch particle systems"
	bool m_bShouldBatch; // 0x2cc
	// MPropertyFriendlyName "Hitboxes fall back to render bounds"
	bool m_bShouldHitboxesFallbackToRenderBounds; // 0x2cd
	// MPropertyStartGroup "Rendering Options"
	// MPropertyFriendlyName "view model effect"
	// MPropertySuppressExpr "m_bScreenSpaceEffect"
	InheritableBoolType_t m_nViewModelEffect; // 0x2d0
	// MPropertyFriendlyName "screen space effect"
	// MPropertySuppressExpr "m_nViewModelEffect == INHERITABLE_BOOL_TRUE"
	bool m_bScreenSpaceEffect; // 0x2d4
	// MPropertyFriendlyName "target layer ID for rendering"
	CUtlSymbolLarge m_pszTargetLayerID; // 0x2d8
	// MPropertyFriendlyName "control point to disable rendering if it is the camera"
	int32_t m_nSkipRenderControlPoint; // 0x2e0
	// MPropertyFriendlyName "control point to only enable rendering if it is the camera"
	int32_t m_nAllowRenderControlPoint; // 0x2e4
	// MPropertyFriendlyName "sort particles (DEPRECATED - USE RENDERER OPTION)"
	// MParticleAdvancedField
	bool m_bShouldSort; // 0x2e8
	// MPropertySuppressField
	CUtlVector< ParticleControlPointConfiguration_t > m_controlPointConfigurations; // 0x328
};

// Aligment: 3
// Size: 560
class CParticleFunctionRenderer : public CParticleFunction
{
public:
	// MPropertySortPriority "-1"
	CParticleVisibilityInputs VisibilityInputs; // 0x1e8
	// MPropertyStartGroup "Rendering filter"
	// MPropertyFriendlyName "I cannot be refracted through refracting objects like water"
	// MPropertySortPriority "-1"
	bool m_bCannotBeRefracted; // 0x22c
	// MPropertyFriendlyName "Skip rendering on mobile"
	// MPropertySortPriority "-1"
	bool m_bSkipRenderingOnMobile; // 0x22d
};

// Aligment: 11
// Size: 544
class C_OP_RemapCPtoScalar : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "input control point number"
	int32_t m_nCPInput; // 0x1f0
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f4
	// MPropertyFriendlyName "input field 0-2 X/Y/Z"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nField; // 0x1f8
	// MPropertyFriendlyName "input minimum"
	float m_flInputMin; // 0x1fc
	// MPropertyFriendlyName "input maximum"
	float m_flInputMax; // 0x200
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x204
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x208
	// MPropertyFriendlyName "emitter lifetime start time (seconds)"
	float m_flStartTime; // 0x20c
	// MPropertyFriendlyName "emitter lifetime end time (seconds)"
	float m_flEndTime; // 0x210
	// MPropertyFriendlyName "interpolation scale"
	float m_flInterpRate; // 0x214
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x218
};

// Aligment: 1
// Size: 816
class C_INIT_DistanceToNeighborCull : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "cull distance"
	CPerParticleFloatInput m_flDistance; // 0x1f0
};

// Aligment: 5
// Size: 2016
class C_OP_SetSingleControlPointPosition : public CParticleFunctionPreEmission, CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "set positions in world space"
	bool m_bUseWorldLocation; // 0x200
	// MPropertyFriendlyName "only set position once"
	bool m_bSetOnce; // 0x201
	// MPropertyFriendlyName "control point number"
	int32_t m_nCP1; // 0x204
	// MPropertyFriendlyName "control point location"
	CParticleCollectionVecInput m_vecCP1Pos; // 0x208
	// MPropertyFriendlyName "control point to offset positions from"
	int32_t m_nHeadLocation; // 0x7d0
};

// Aligment: 3
// Size: 512
class C_OP_SnapshotRigidSkinToBones : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "rotate normals"
	bool m_bTransformNormals; // 0x1f0
	// MPropertyFriendlyName "scale radii"
	bool m_bTransformRadii; // 0x1f1
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1f4
};

// Aligment: 0
// Size: 528
class C_INIT_RandomYaw : public CGeneralRandomRotation, CParticleFunctionInitializer, CParticleFunction
{
public:
// <no members described>
};

// Aligment: 2
// Size: 512
class C_OP_SetCPtoVector : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "input control point number"
	int32_t m_nCPInput; // 0x1f0
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f4
};

// Aligment: 0
// Size: 496
class CParticleFunctionOperator : public CParticleFunction
{
public:
// <no members described>
};

// Aligment: 3
// Size: 512
class C_OP_RemapControlPointDirectionToVector : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f0
	// MPropertyFriendlyName "scale factor"
	float m_flScale; // 0x1f4
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1f8
};

// Aligment: 8
// Size: 608
class C_OP_RemapTransformVisibilityToScalar : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x1f0
	// MPropertyFriendlyName "transform input"
	CParticleTransformInput m_TransformInput; // 0x1f8
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x248
	// MPropertyFriendlyName "CP visibility minimum"
	float m_flInputMin; // 0x24c
	// MPropertyFriendlyName "CP visibility maximum"
	float m_flInputMax; // 0x250
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x254
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x258
	// MPropertyFriendlyName "visibility radius"
	float m_flRadius; // 0x25c
};

// Aligment: 8
// Size: 1184
class C_OP_SetRandomControlPointPosition : public CParticleFunctionPreEmission, CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "set positions in world space"
	bool m_bUseWorldLocation; // 0x200
	// MPropertyFriendlyName "inherit CP orientation"
	bool m_bOrient; // 0x201
	// MPropertyFriendlyName "control point number"
	int32_t m_nCP1; // 0x204
	// MPropertyFriendlyName "control point to offset positions from"
	int32_t m_nHeadLocation; // 0x208
	// MPropertyFriendlyName "re-randomize rate (-1 for once only)"
	CParticleCollectionFloatInput m_flReRandomRate; // 0x210
	// MPropertyFriendlyName "control point min"
	Vector m_vecCPMinPos; // 0x348
	// MPropertyFriendlyName "control point max"
	Vector m_vecCPMaxPos; // 0x354
	// MPropertyFriendlyName "Interpolation"
	CParticleCollectionFloatInput m_flInterpolation; // 0x360
};

// Aligment: 32
// Size: 200
class CNewParticleEffect : public IParticleEffect
{
public:
	CNewParticleEffect* m_pNext; // 0x10
	CNewParticleEffect* m_pPrev; // 0x18
	IParticleCollection* m_pParticles; // 0x20
	char* m_pDebugName; // 0x28
	bitfield:1 m_bDontRemove; // 0x0
	bitfield:1 m_bRemove; // 0x0
	bitfield:1 m_bNeedsBBoxUpdate; // 0x0
	bitfield:1 m_bIsFirstFrame; // 0x0
	bitfield:1 m_bAutoUpdateBBox; // 0x0
	bitfield:1 m_bAllocated; // 0x0
	bitfield:1 m_bSimulate; // 0x0
	bitfield:1 m_bShouldPerformCullCheck; // 0x0
	bitfield:1 m_bForceNoDraw; // 0x0
	bitfield:1 m_bShouldSave; // 0x0
	bitfield:1 m_bDisableAggregation; // 0x0
	bitfield:1 m_bShouldSimulateDuringGamePaused; // 0x0
	bitfield:1 m_bShouldCheckFoW; // 0x0
	Vector m_vSortOrigin; // 0x40
	float m_flScale; // 0x4c
	PARTICLE_EHANDLE__* m_hOwner; // 0x50
	CParticleProperty* m_pOwningParticleProperty; // 0x58
	float m_flFreezeTransitionStart; // 0x70
	float m_flFreezeTransitionDuration; // 0x74
	float m_flFreezeTransitionOverride; // 0x78
	bool m_bFreezeTransitionActive; // 0x7c
	bool m_bFreezeTargetState; // 0x7d
	bool m_bCanFreeze; // 0x7e
	Vector m_LastMin; // 0x80
	Vector m_LastMax; // 0x8c
	CSplitScreenSlot m_nSplitScreenUser; // 0x98
	Vector m_vecAggregationCenter; // 0x9c
	int32_t m_RefCount; // 0xc0
};

// Aligment: 1
// Size: 816
class C_OP_EndCapTimedFreeze : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "freeze time"
	CParticleCollectionFloatInput m_flFreezeTime; // 0x1f0
};

// Aligment: 3
// Size: 544
class C_OP_SetControlPointToPlayer : public CParticleFunctionPreEmission, CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nCP1; // 0x200
	// MPropertyFriendlyName "control point offset"
	// MVectorIsCoordinate
	Vector m_vecCP1Pos; // 0x204
	// MPropertyFriendlyName "use eye orientation"
	bool m_bOrientToEyes; // 0x210
};

// Aligment: 9
// Size: 592
class C_OP_RemapNamedModelElementOnceTimed : public CParticleFunctionOperator, CParticleFunction
{
public:
	CStrongHandle< InfoForResourceTypeCModel > m_hModel; // 0x1f0
	// MPropertyFriendlyName "input names"
	CUtlVector< CUtlString > m_inNames; // 0x1f8
	// MPropertyFriendlyName "output names"
	CUtlVector< CUtlString > m_outNames; // 0x210
	// MPropertyFriendlyName "fallback names when the input doesn't match"
	CUtlVector< CUtlString > m_fallbackNames; // 0x228
	// MPropertyFriendlyName "model from renderer"
	bool m_bModelFromRenderer; // 0x240
	// MPropertyFriendlyName "remap time proportional"
	bool m_bProportional; // 0x241
	// MPropertyFriendlyName "input field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldInput; // 0x244
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x248
	// MPropertyFriendlyName "remap time"
	float m_flRemapTime; // 0x24c
};

// Aligment: 8
// Size: 560
class C_OP_TurbulenceForce : public CParticleFunctionForce, CParticleFunction
{
public:
	// MPropertyFriendlyName "noise scale 0"
	float m_flNoiseCoordScale0; // 0x1f0
	// MPropertyFriendlyName "noise scale 1"
	float m_flNoiseCoordScale1; // 0x1f4
	// MPropertyFriendlyName "noise scale 2"
	float m_flNoiseCoordScale2; // 0x1f8
	// MPropertyFriendlyName "noise scale 3"
	float m_flNoiseCoordScale3; // 0x1fc
	// MPropertyFriendlyName "noise amount 0"
	// MVectorIsCoordinate
	Vector m_vecNoiseAmount0; // 0x200
	// MPropertyFriendlyName "noise amount 1"
	// MVectorIsCoordinate
	Vector m_vecNoiseAmount1; // 0x20c
	// MPropertyFriendlyName "noise amount 2"
	// MVectorIsCoordinate
	Vector m_vecNoiseAmount2; // 0x218
	// MPropertyFriendlyName "noise amount 3"
	// MVectorIsCoordinate
	Vector m_vecNoiseAmount3; // 0x224
};

// Aligment: 3
// Size: 512
class C_OP_ReinitializeScalarEndCap : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f0
	// MPropertyFriendlyName "minimum"
	float m_flOutputMin; // 0x1f4
	// MPropertyFriendlyName "maximum"
	float m_flOutputMax; // 0x1f8
};

// Aligment: 1
// Size: 4
struct ParticleAttributeIndex_t
{
public:
	int32_t m_Value; // 0x0
};

// Aligment: 6
// Size: 576
class C_OP_InterpolateRadius : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "start time"
	float m_flStartTime; // 0x1f0
	// MPropertyFriendlyName "end time"
	float m_flEndTime; // 0x1f4
	// MPropertyFriendlyName "radius start scale"
	float m_flStartScale; // 0x1f8
	// MPropertyFriendlyName "radius end scale"
	float m_flEndScale; // 0x1fc
	// MPropertyFriendlyName "ease in and out"
	bool m_bEaseInAndOut; // 0x200
	// MPropertyFriendlyName "scale bias"
	float m_flBias; // 0x204
};

// Aligment: 11
// Size: 1008
class C_OP_SetControlPointToImpactPoint : public CParticleFunctionPreEmission, CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "control point to set"
	int32_t m_nCPOut; // 0x200
	// MPropertyFriendlyName "control point to trace from"
	int32_t m_nCPIn; // 0x204
	// MPropertyFriendlyName "trace update rate"
	float m_flUpdateRate; // 0x208
	// MPropertyFriendlyName "max trace length"
	CParticleCollectionFloatInput m_flTraceLength; // 0x210
	// MPropertyFriendlyName "offset start point amount"
	float m_flStartOffset; // 0x348
	// MPropertyFriendlyName "offset end point amount"
	float m_flOffset; // 0x34c
	// MPropertyFriendlyName "trace direction override"
	// MVectorIsCoordinate
	Vector m_vecTraceDir; // 0x350
	// MPropertyFriendlyName "trace collision group"
	char[128] m_CollisionGroupName; // 0x35c
	// MPropertyFriendlyName "Trace Set"
	ParticleTraceSet_t m_nTraceSet; // 0x3dc
	// MPropertyFriendlyName "set to trace endpoint if no collision"
	bool m_bSetToEndpoint; // 0x3e0
	// MPropertyFriendlyName "trace to closest surface along all cardinal directions"
	bool m_bTraceToClosestSurface; // 0x3e1
};

// Aligment: 4
// Size: 896
class C_OP_RenderVRHapticEvent : public CParticleFunctionRenderer, CParticleFunction
{
public:
	// MPropertyFriendlyName "haptic hand"
	ParticleVRHandChoiceList_t m_nHand; // 0x230
	// MPropertyFriendlyName "hand control point number"
	int32_t m_nOutputHandCP; // 0x234
	// MPropertyFriendlyName "cp field"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nOutputField; // 0x238
	// MPropertyFriendlyName "amplitude"
	CPerParticleFloatInput m_flAmplitude; // 0x240
};

// Aligment: 15
// Size: 2432
class C_OP_PositionLock : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "transform input"
	CParticleTransformInput m_TransformInput; // 0x1f0
	// MPropertyFriendlyName "start fadeout min"
	float m_flStartTime_min; // 0x240
	// MPropertyFriendlyName "start fadeout max"
	float m_flStartTime_max; // 0x244
	// MPropertyFriendlyName "start fadeout exponent"
	float m_flStartTime_exp; // 0x248
	// MPropertyFriendlyName "end fadeout min"
	float m_flEndTime_min; // 0x24c
	// MPropertyFriendlyName "end fadeout max"
	float m_flEndTime_max; // 0x250
	// MPropertyFriendlyName "end fadeout exponent"
	float m_flEndTime_exp; // 0x254
	// MPropertyFriendlyName "distance fade range"
	float m_flRange; // 0x258
	// MPropertyFriendlyName "distance fade bias"
	CParticleCollectionFloatInput m_flRangeBias; // 0x260
	// MPropertyFriendlyName "instant jump threshold"
	float m_flJumpThreshold; // 0x398
	// MPropertyFriendlyName "previous position scale"
	float m_flPrevPosScale; // 0x39c
	// MPropertyFriendlyName "lock rotation"
	bool m_bLockRot; // 0x3a0
	// MPropertyFriendlyName "component scale"
	CParticleCollectionVecInput m_vecScale; // 0x3a8
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x970
	// MPropertyFriendlyName "output field prev"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutputPrev; // 0x974
};

// Aligment: 15
// Size: 1504
class C_OP_OscillateVector : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "oscillation rate min"
	// MVectorIsSometimesCoordinate
	Vector m_RateMin; // 0x1f0
	// MPropertyFriendlyName "oscillation rate max"
	// MVectorIsSometimesCoordinate
	Vector m_RateMax; // 0x1fc
	// MPropertyFriendlyName "oscillation frequency min"
	// MVectorIsSometimesCoordinate
	Vector m_FrequencyMin; // 0x208
	// MPropertyFriendlyName "oscillation frequency max"
	// MVectorIsSometimesCoordinate
	Vector m_FrequencyMax; // 0x214
	// MPropertyFriendlyName "oscillation field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nField; // 0x220
	// MPropertyFriendlyName "proportional 0/1"
	bool m_bProportional; // 0x224
	// MPropertyFriendlyName "start/end proportional"
	bool m_bProportionalOp; // 0x225
	// MPropertyFriendlyName "offset instead of accelerate position"
	bool m_bOffset; // 0x226
	// MPropertyFriendlyName "start time min"
	float m_flStartTime_min; // 0x228
	// MPropertyFriendlyName "start time max"
	float m_flStartTime_max; // 0x22c
	// MPropertyFriendlyName "end time min"
	float m_flEndTime_min; // 0x230
	// MPropertyFriendlyName "end time max"
	float m_flEndTime_max; // 0x234
	// MPropertyFriendlyName "oscillation multiplier"
	CPerParticleFloatInput m_flOscMult; // 0x238
	// MPropertyFriendlyName "oscillation start phase"
	CPerParticleFloatInput m_flOscAdd; // 0x370
	// MPropertyFriendlyName "rate scale"
	CPerParticleFloatInput m_flRateScale; // 0x4a8
};

// Aligment: 10
// Size: 1776
class C_OP_MovementSkinnedPositionFromCPSnapshot : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "snapshot control point number"
	int32_t m_nSnapshotControlPointNumber; // 0x1f0
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1f4
	// MPropertyFriendlyName "random order"
	bool m_bRandom; // 0x1f8
	// MPropertyFriendlyName "random seed"
	int32_t m_nRandomSeed; // 0x1fc
	// MPropertyFriendlyName "set normal"
	bool m_bSetNormal; // 0x200
	// MPropertyFriendlyName "set radius"
	bool m_bSetRadius; // 0x201
	// MPropertyFriendlyName "particle increment amount"
	CParticleCollectionFloatInput m_flIncrement; // 0x208
	// MPropertyFriendlyName "Full Loop Increment Amount"
	CParticleCollectionFloatInput m_nFullLoopIncrement; // 0x340
	// MPropertyFriendlyName "Snapshot start point"
	CParticleCollectionFloatInput m_nSnapShotStartPoint; // 0x478
	// MPropertyFriendlyName "Interpolation"
	CPerParticleFloatInput m_flInterpolation; // 0x5b0
};

// Aligment: 8
// Size: 864
class C_OP_SetControlPointOrientation : public CParticleFunctionPreEmission, CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "set orientation in world space"
	bool m_bUseWorldLocation; // 0x200
	// MPropertyFriendlyName "randomize"
	bool m_bRandomize; // 0x202
	// MPropertyFriendlyName "only set orientation once"
	bool m_bSetOnce; // 0x203
	// MPropertyFriendlyName "control point number"
	int32_t m_nCP; // 0x204
	// MPropertyFriendlyName "control point to offset orientation from"
	int32_t m_nHeadLocation; // 0x208
	// MPropertyFriendlyName "pitch yaw roll"
	QAngle m_vecRotation; // 0x20c
	// MPropertyFriendlyName "pitch yaw roll max"
	QAngle m_vecRotationB; // 0x218
	// MPropertyFriendlyName "interpolation"
	CParticleCollectionFloatInput m_flInterpolation; // 0x228
};

// Aligment: 5
// Size: 528
class C_INIT_VelocityFromCP : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPoint; // 0x1f0
	// MPropertyFriendlyName "comparison control point number"
	int32_t m_nControlPointCompare; // 0x1f4
	// MPropertyFriendlyName "local space control point number"
	int32_t m_nControlPointLocal; // 0x1f8
	// MPropertyFriendlyName "velocity scale"
	float m_flVelocityScale; // 0x1fc
	// MPropertyFriendlyName "direction only"
	bool m_bDirectionOnly; // 0x200
};

// Aligment: 7
// Size: 8928
class CBaseTrailRenderer : public CBaseRendererSource2, CParticleFunctionRenderer, CParticleFunction
{
public:
	// MPropertyStartGroup "Orientation"
	// MPropertyFriendlyName "orientation type"
	// MPropertySortPriority "750"
	ParticleOrientationChoiceList_t m_nOrientationType; // 0x2050
	// MPropertyFriendlyName "orientation control point"
	// MPropertySortPriority "750"
	// MPropertySuppressExpr "m_nOrientationType != PARTICLE_ORIENTATION_ALIGN_TO_PARTICLE_NORMAL && m_nOrientationType != PARTICLE_ORIENTATION_SCREENALIGN_TO_PARTICLE_NORMAL"
	int32_t m_nOrientationControlPoint; // 0x2054
	// MPropertyStartGroup "Screenspace Fading and culling"
	// MPropertyFriendlyName "minimum visual screen-size"
	// MPropertySortPriority "900"
	float m_flMinSize; // 0x2058
	// MPropertyFriendlyName "maximum visual screen-size"
	// MPropertySortPriority "900"
	float m_flMaxSize; // 0x205c
	// MPropertyFriendlyName "start fade screen-size"
	// MPropertySortPriority "900"
	CParticleCollectionFloatInput m_flStartFadeSize; // 0x2060
	// MPropertyFriendlyName "end fade and cull screen-size"
	// MPropertySortPriority "900"
	CParticleCollectionFloatInput m_flEndFadeSize; // 0x2198
	// MPropertyStartGroup "Trail UV Controls"
	// MPropertyFriendlyName "Clamp Non-Sheet texture V coords"
	// MPropertySortPriority "800"
	bool m_bClampV; // 0x22d0
};

// Aligment: 8
// Size: 688
class C_INIT_LifespanFromVelocity : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "bias distance"
	// MVectorIsCoordinate
	Vector m_vecComponentScale; // 0x1f0
	// MPropertyFriendlyName "trace offset"
	float m_flTraceOffset; // 0x1fc
	// MPropertyFriendlyName "maximum trace length"
	float m_flMaxTraceLength; // 0x200
	// MPropertyFriendlyName "trace recycle tolerance"
	float m_flTraceTolerance; // 0x204
	// MPropertyFriendlyName "maximum points to cache"
	int32_t m_nMaxPlanes; // 0x208
	// MPropertyFriendlyName "trace collision group"
	char[128] m_CollisionGroupName; // 0x210
	// MPropertyFriendlyName "Trace Set"
	ParticleTraceSet_t m_nTraceSet; // 0x290
	// MPropertyFriendlyName "collide with water"
	bool m_bIncludeWater; // 0x2a0
};

// Aligment: 2
// Size: 512
class C_OP_ConstrainLineLength : public CParticleFunctionConstraint, CParticleFunction
{
public:
	// MPropertyFriendlyName "minimum length"
	float m_flMinDistance; // 0x1f0
	// MPropertyFriendlyName "maximum length"
	float m_flMaxDistance; // 0x1f4
};

// Aligment: 5
// Size: 1136
class C_OP_InstantaneousEmitter : public CParticleFunctionEmitter, CParticleFunction
{
public:
	// MPropertyFriendlyName "num to emit"
	// MPropertyAttributeRange "1 1000"
	CParticleCollectionFloatInput m_nParticlesToEmit; // 0x1f0
	// MPropertyFriendlyName "emission start time"
	CParticleCollectionFloatInput m_flStartTime; // 0x328
	// MPropertyFriendlyName "emission scale from killed parent particles"
	float m_flInitFromKilledParentParticles; // 0x460
	// MPropertyFriendlyName "maximum emission per frame"
	int32_t m_nMaxEmittedPerFrame; // 0x464
	// MPropertyFriendlyName "control point with snapshot data"
	int32_t m_nSnapshotControlPoint; // 0x468
};

// Aligment: 22
// Size: 1480
class CParticleVecInput
{
public:
	ParticleVecType_t m_nType; // 0x0
	Vector m_vLiteralValue; // 0x4
	Color m_LiteralColor; // 0x10
	CKV3MemberNameWithStorage m_NamedValue; // 0x18
	bool m_bFollowNamedValue; // 0x50
	ParticleAttributeIndex_t m_nVectorAttribute; // 0x54
	Vector m_vVectorAttributeScale; // 0x58
	int32_t m_nControlPoint; // 0x64
	Vector m_vCPValueScale; // 0x68
	Vector m_vCPRelativePosition; // 0x74
	Vector m_vCPRelativeDir; // 0x80
	CParticleFloatInput m_FloatComponentX; // 0x90
	CParticleFloatInput m_FloatComponentY; // 0x1c8
	CParticleFloatInput m_FloatComponentZ; // 0x300
	CParticleFloatInput m_FloatInterp; // 0x438
	float m_flInterpInput0; // 0x570
	float m_flInterpInput1; // 0x574
	Vector m_vInterpOutput0; // 0x578
	Vector m_vInterpOutput1; // 0x584
	CColorGradient m_Gradient; // 0x590
	Vector m_vRandomMin; // 0x5a8
	Vector m_vRandomMax; // 0x5b4
};

// Aligment: 0
// Size: 528
class C_OP_Spin : public CGeneralSpin, CParticleFunctionOperator, CParticleFunction
{
public:
// <no members described>
};

// Aligment: 10
// Size: 544
class C_INIT_CreationNoise : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f0
	// MPropertyFriendlyName "absolute value"
	bool m_bAbsVal; // 0x1f4
	// MPropertyFriendlyName "invert absolute value"
	bool m_bAbsValInv; // 0x1f5
	// MPropertyFriendlyName "time coordinate offset"
	float m_flOffset; // 0x1f8
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x1fc
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x200
	// MPropertyFriendlyName "time noise coordinate scale"
	float m_flNoiseScale; // 0x204
	// MPropertyFriendlyName "spatial noise coordinate scale"
	float m_flNoiseScaleLoc; // 0x208
	// MPropertyFriendlyName "spatial coordinate offset"
	// MVectorIsCoordinate
	Vector m_vecOffsetLoc; // 0x20c
	// MPropertyFriendlyName "world time noise coordinate scale"
	float m_flWorldTimeScale; // 0x218
};

// Aligment: 8
// Size: 624
class C_OP_RenderAsModels : public CParticleFunctionRenderer, CParticleFunction
{
public:
	// MPropertyFriendlyName "models"
	// MParticleRequireDefaultArrayEntry
	CUtlVector< ModelReference_t > m_ModelList; // 0x230
	// MPropertyFriendlyName "scale factor for radius"
	float m_flModelScale; // 0x24c
	// MPropertyFriendlyName "scale model to match particle size"
	bool m_bFitToModelSize; // 0x250
	// MPropertyFriendlyName "non-uniform scaling"
	bool m_bNonUniformScaling; // 0x251
	// MPropertyFriendlyName "X axis scaling scalar field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nXAxisScalingAttribute; // 0x254
	// MPropertyFriendlyName "Y axis scaling scalar field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nYAxisScalingAttribute; // 0x258
	// MPropertyFriendlyName "Z axis scaling scalar field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nZAxisScalingAttribute; // 0x25c
	// MPropertyFriendlyName "model size cull bloat"
	// MPropertyAttributeChoiceName "particlefield_size_cull_bloat"
	int32_t m_nSizeCullBloat; // 0x260
};

// Aligment: 3
// Size: 560
class C_OP_RemapDistanceToLineSegmentToVector : public C_OP_RemapDistanceToLineSegmentBase, CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x210
	// MPropertyFriendlyName "output value at min distance"
	Vector m_vMinOutputValue; // 0x214
	// MPropertyFriendlyName "output value at max distance"
	Vector m_vMaxOutputValue; // 0x220
};

// Aligment: 5
// Size: 528
class C_INIT_NormalOffset : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "offset min"
	// MVectorIsCoordinate
	Vector m_OffsetMin; // 0x1f0
	// MPropertyFriendlyName "offset max"
	// MVectorIsCoordinate
	Vector m_OffsetMax; // 0x1fc
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x208
	// MPropertyFriendlyName "offset in local space 0/1"
	bool m_bLocalCoords; // 0x20c
	// MPropertyFriendlyName "normalize output 0/1"
	bool m_bNormalize; // 0x20d
};

// Aligment: 0
// Size: 496
class C_OP_SpinUpdate : public CSpinUpdateBase, CParticleFunctionOperator, CParticleFunction
{
public:
// <no members described>
};

// Aligment: 5
// Size: 544
class C_OP_ControlPointToRadialScreenSpace : public CParticleFunctionPreEmission, CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "source Control Point in World"
	int32_t m_nCPIn; // 0x200
	// MPropertyFriendlyName "Source Control Point offset"
	// MVectorIsCoordinate
	Vector m_vecCP1Pos; // 0x204
	// MPropertyFriendlyName "Set control point number"
	int32_t m_nCPOut; // 0x210
	// MPropertyFriendlyName "Output field 0-2 X/Y/Z"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nCPOutField; // 0x214
	// MPropertyFriendlyName "Ss Pos and Dot OUT CP"
	int32_t m_nCPSSPosOut; // 0x218
};

// Aligment: 3
// Size: 528
class C_INIT_CreateFromPlaneCache : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "local offset min"
	// MVectorIsCoordinate
	Vector m_vecOffsetMin; // 0x1f0
	// MPropertyFriendlyName "local offset max"
	// MVectorIsCoordinate
	Vector m_vecOffsetMax; // 0x1fc
	// MPropertyFriendlyName "set normal"
	bool m_bUseNormal; // 0x209
};

// Aligment: 6
// Size: 528
class C_OP_RemapScalarEndCap : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "input field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldInput; // 0x1f0
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f4
	// MPropertyFriendlyName "input minimum"
	float m_flInputMin; // 0x1f8
	// MPropertyFriendlyName "input maximum"
	float m_flInputMax; // 0x1fc
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x200
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x204
};

// Aligment: 8
// Size: 64
class CPathParameters
{
public:
	// MPropertyFriendlyName "start control point number"
	int32_t m_nStartControlPointNumber; // 0x0
	// MPropertyFriendlyName "end control point number"
	int32_t m_nEndControlPointNumber; // 0x4
	// MPropertyFriendlyName "bulge control 0=random 1=orientation of start pnt 2=orientation of end point"
	int32_t m_nBulgeControl; // 0x8
	// MPropertyFriendlyName "random bulge"
	float m_flBulge; // 0xc
	// MPropertyFriendlyName "mid point position"
	float m_flMidPoint; // 0x10
	// MPropertyFriendlyName "Offset from curve start point for path start"
	// MVectorIsCoordinate
	Vector m_vStartPointOffset; // 0x14
	// MPropertyFriendlyName "Offset from curve midpoint for curve center"
	// MVectorIsCoordinate
	Vector m_vMidPointOffset; // 0x20
	// MPropertyFriendlyName "Offset from control point for path end"
	// MVectorIsCoordinate
	Vector m_vEndOffset; // 0x2c
};

// Aligment: 2
// Size: 816
class C_INIT_InitFloatCollection : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "value"
	CParticleCollectionFloatInput m_InputValue; // 0x1f0
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nOutputField; // 0x328
};

// Aligment: 2
// Size: 528
class C_OP_PlayEndCapWhenFinished : public CParticleFunctionPreEmission, CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "play when emission ends"
	bool m_bFireOnEmissionEnd; // 0x200
	// MPropertyFriendlyName "wait for children to finish"
	bool m_bIncludeChildren; // 0x201
};

// Aligment: 4
// Size: 1152
class C_OP_QuantizeCPComponent : public CParticleFunctionPreEmission, CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "input"
	CParticleCollectionFloatInput m_flInputValue; // 0x200
	// MPropertyFriendlyName "output control point"
	int32_t m_nCPOutput; // 0x338
	// MPropertyFriendlyName "output component"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nOutVectorField; // 0x33c
	// MPropertyFriendlyName "interval to snap to"
	CParticleCollectionFloatInput m_flQuantizeValue; // 0x340
};

// Aligment: 4
// Size: 2304
class C_OP_MovementLoopInsideSphere : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "control point"
	int32_t m_nCP; // 0x1f0
	// MPropertyFriendlyName "distance maximum"
	CParticleCollectionFloatInput m_flDistance; // 0x1f8
	// MPropertyFriendlyName "component scale"
	CParticleCollectionVecInput m_vecScale; // 0x330
	// MPropertyFriendlyName "distance squared output attribute"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nDistSqrAttr; // 0x8f8
};

// Aligment: 3
// Size: 3472
class C_OP_DirectionBetweenVecsToVec : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f0
	// MPropertyFriendlyName "first vector"
	CPerParticleVecInput m_vecPoint1; // 0x1f8
	// MPropertyFriendlyName "second vector"
	CPerParticleVecInput m_vecPoint2; // 0x7c0
};

// Aligment: 8
// Size: 624
class C_OP_RemapTransformVisibilityToVector : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x1f0
	// MPropertyFriendlyName "transform input"
	CParticleTransformInput m_TransformInput; // 0x1f8
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x248
	// MPropertyFriendlyName "CP visibility minimum"
	float m_flInputMin; // 0x24c
	// MPropertyFriendlyName "CP visibility maximum"
	float m_flInputMax; // 0x250
	// MPropertyFriendlyName "output minimum"
	Vector m_vecOutputMin; // 0x254
	// MPropertyFriendlyName "output maximum"
	Vector m_vecOutputMax; // 0x260
	// MPropertyFriendlyName "visibility radius"
	float m_flRadius; // 0x26c
};

// Aligment: 6
// Size: 3584
class C_INIT_SetVectorAttributeToVectorExpression : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "expression"
	VectorExpressionType_t m_nExpression; // 0x1f0
	// MPropertyFriendlyName "input 1"
	CPerParticleVecInput m_vInput1; // 0x1f8
	// MPropertyFriendlyName "input 2"
	CPerParticleVecInput m_vInput2; // 0x7c0
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nOutputField; // 0xd88
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0xd8c
	// MPropertyFriendlyName "normalize result"
	bool m_bNormalizedOutput; // 0xd90
};

// Aligment: 4
// Size: 512
class C_OP_InheritFromParentParticles : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "scale"
	float m_flScale; // 0x1f0
	// MPropertyFriendlyName "inherited field"
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f4
	// MPropertyFriendlyName "particle increment amount"
	int32_t m_nIncrement; // 0x1f8
	// MPropertyFriendlyName "random parent particle distribution"
	bool m_bRandomDistribution; // 0x1fc
};

// Aligment: 4
// Size: 512
class C_INIT_RandomVectorComponent : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "min"
	float m_flMin; // 0x1f0
	// MPropertyFriendlyName "max"
	float m_flMax; // 0x1f4
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f8
	// MPropertyFriendlyName "component 0/1/2 X/Y/Z"
	// MPropertyAttributeChoiceName "vector_component"
	// MVectorIsSometimesCoordinate
	int32_t m_nComponent; // 0x1fc
};

// Aligment: 0
// Size: 496
class CParticleFunctionForce : public CParticleFunction
{
public:
// <no members described>
};

// Aligment: 6
// Size: 1472
class C_OP_SetControlPointFieldToScalarExpression : public CParticleFunctionPreEmission, CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "expression"
	ScalarExpressionType_t m_nExpression; // 0x200
	// MPropertyFriendlyName "input 1"
	CParticleCollectionFloatInput m_flInput1; // 0x208
	// MPropertyFriendlyName "input 2"
	CParticleCollectionFloatInput m_flInput2; // 0x340
	// MPropertyFriendlyName "output"
	CParticleRemapFloatInput m_flOutputRemap; // 0x478
	// MPropertyFriendlyName "output control point"
	int32_t m_nOutputCP; // 0x5b0
	// MPropertyFriendlyName "output component"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nOutVectorField; // 0x5b4
};

// Aligment: 10
// Size: 3488
class C_INIT_PositionWarp : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "warp min"
	// MVectorIsCoordinate
	CParticleCollectionVecInput m_vecWarpMin; // 0x1f0
	// MPropertyFriendlyName "warp max"
	// MVectorIsCoordinate
	CParticleCollectionVecInput m_vecWarpMax; // 0x7b8
	// MPropertyFriendlyName "warp scale control point number"
	int32_t m_nScaleControlPointNumber; // 0xd80
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0xd84
	// MPropertyFriendlyName "radius scale component"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nRadiusComponent; // 0xd88
	// MPropertyFriendlyName "warp transition time (treats min/max as start/end sizes)"
	float m_flWarpTime; // 0xd8c
	// MPropertyFriendlyName "warp transition start time"
	float m_flWarpStartTime; // 0xd90
	// MPropertyFriendlyName "previous position sacale"
	float m_flPrevPosScale; // 0xd94
	// MPropertyFriendlyName "reverse warp (0/1)"
	bool m_bInvertWarp; // 0xd98
	// MPropertyFriendlyName "use particle count instead of time"
	bool m_bUseCount; // 0xd99
};

// Aligment: 1
// Size: 576
class C_INIT_RemapQAnglesToRotation : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "transform input"
	CParticleTransformInput m_TransformInput; // 0x1f0
};

// Aligment: 10
// Size: 544
class C_INIT_RemapSpeedToScalar : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f0
	// MPropertyFriendlyName "control point number (ignored if per particle)"
	int32_t m_nControlPointNumber; // 0x1f4
	// MPropertyFriendlyName "emitter lifetime start time (seconds)"
	float m_flStartTime; // 0x1f8
	// MPropertyFriendlyName "emitter lifetime end time (seconds)"
	float m_flEndTime; // 0x1fc
	// MPropertyFriendlyName "input minimum"
	float m_flInputMin; // 0x200
	// MPropertyFriendlyName "input maximum"
	float m_flInputMax; // 0x204
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x208
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x20c
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x210
	// MPropertyFriendlyName "per particle"
	bool m_bPerParticle; // 0x214
};

// Aligment: 0
// Size: 592
class C_OP_RemapNamedModelMeshGroupOnceTimed : public C_OP_RemapNamedModelElementOnceTimed, CParticleFunctionOperator, CParticleFunction
{
public:
// <no members described>
};

// Aligment: 15
// Size: 3968
class C_OP_LightningSnapshotGenerator : public CParticleFunctionPreEmission, CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "snapshot control point number"
	int32_t m_nCPSnapshot; // 0x200
	// MPropertyFriendlyName "start control point number"
	int32_t m_nCPStartPnt; // 0x204
	// MPropertyFriendlyName "end control point number"
	int32_t m_nCPEndPnt; // 0x208
	// MPropertyFriendlyName "Recursion Depth"
	CParticleCollectionFloatInput m_flSegments; // 0x210
	// MPropertyFriendlyName "Offset"
	CParticleCollectionFloatInput m_flOffset; // 0x348
	// MPropertyFriendlyName "Offset Decay"
	CParticleCollectionFloatInput m_flOffsetDecay; // 0x480
	// MPropertyFriendlyName "Recalculation Rate"
	CParticleCollectionFloatInput m_flRecalcRate; // 0x5b8
	// MPropertyFriendlyName "UV Scale"
	CParticleCollectionFloatInput m_flUVScale; // 0x6f0
	// MPropertyFriendlyName "UV Offset"
	CParticleCollectionFloatInput m_flUVOffset; // 0x828
	// MPropertyFriendlyName "Branch Split Rate"
	CParticleCollectionFloatInput m_flSplitRate; // 0x960
	// MPropertyFriendlyName "Branch Twist"
	CParticleCollectionFloatInput m_flBranchTwist; // 0xa98
	// MPropertyFriendlyName "Branch Behavior"
	ParticleLightnintBranchBehavior_t m_nBranchBehavior; // 0xbd0
	// MPropertyFriendlyName "Start Radius"
	CParticleCollectionFloatInput m_flRadiusStart; // 0xbd8
	// MPropertyFriendlyName "End Radius"
	CParticleCollectionFloatInput m_flRadiusEnd; // 0xd10
	// MPropertyFriendlyName "Dedicated Particle Pool Count"
	CParticleCollectionFloatInput m_flDedicatedPool; // 0xe48
};

// Aligment: 5
// Size: 3488
class C_OP_SetControlPointToVectorExpression : public CParticleFunctionPreEmission, CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "expression"
	VectorExpressionType_t m_nExpression; // 0x200
	// MPropertyFriendlyName "output control point"
	int32_t m_nOutputCP; // 0x204
	// MPropertyFriendlyName "input 1"
	CParticleCollectionVecInput m_vInput1; // 0x208
	// MPropertyFriendlyName "input 2"
	CParticleCollectionVecInput m_vInput2; // 0x7d0
	// MPropertyFriendlyName "normalize result"
	bool m_bNormalizedOutput; // 0xd98
};

// Aligment: 3
// Size: 20
struct ControlPointReference_t
{
public:
	// MPropertyFriendlyName "Control point"
	int32_t m_controlPointNameString; // 0x0
	// MPropertyFriendlyName "Offset from control point"
	Vector m_vOffsetFromControlPoint; // 0x4
	// MPropertyFriendlyName "Use local space offset"
	bool m_bOffsetInLocalSpace; // 0x10
};

// Aligment: 16
// Size: 2216
struct TextureControls_t
{
public:
	// MPropertyFriendlyName "horizontal texture scale"
	CParticleCollectionFloatInput m_flFinalTextureScaleU; // 0x0
	// MPropertyFriendlyName "vertical texture scale"
	CParticleCollectionFloatInput m_flFinalTextureScaleV; // 0x138
	// MPropertyFriendlyName "horizontal texture offset"
	CParticleCollectionFloatInput m_flFinalTextureOffsetU; // 0x270
	// MPropertyFriendlyName "vertical texture offset"
	CParticleCollectionFloatInput m_flFinalTextureOffsetV; // 0x3a8
	// MPropertyFriendlyName "texture rotation / animation rate scale"
	CParticleCollectionFloatInput m_flFinalTextureUVRotation; // 0x4e0
	// MPropertyFriendlyName "Infinite Zoom Scale"
	CParticleCollectionFloatInput m_flZoomScale; // 0x618
	// MPropertyFriendlyName "Distortion Amount"
	CParticleCollectionFloatInput m_flDistortion; // 0x750
	// MPropertyFriendlyName "Randomize Initial Offset"
	bool m_bRandomizeOffsets; // 0x888
	// MPropertyFriendlyName "Clamp UVs"
	bool m_bClampUVs; // 0x889
	// MPropertyFriendlyName "per-particle scalar for blend"
	SpriteCardPerParticleScale_t m_nPerParticleBlend; // 0x88c
	// MPropertyFriendlyName "per-particle scalar for scale"
	SpriteCardPerParticleScale_t m_nPerParticleScale; // 0x890
	// MPropertyFriendlyName "per-particle scalar for horizontal offset"
	SpriteCardPerParticleScale_t m_nPerParticleOffsetU; // 0x894
	// MPropertyFriendlyName "per-particle scalar for vertical offset"
	SpriteCardPerParticleScale_t m_nPerParticleOffsetV; // 0x898
	// MPropertyFriendlyName "per-particle scalar for rotation"
	SpriteCardPerParticleScale_t m_nPerParticleRotation; // 0x89c
	// MPropertyFriendlyName "per-particle scalar for zoom"
	SpriteCardPerParticleScale_t m_nPerParticleZoom; // 0x8a0
	// MPropertyFriendlyName "per-particle scalar for distortion"
	SpriteCardPerParticleScale_t m_nPerParticleDistortion; // 0x8a4
};

// Aligment: 4
// Size: 512
class C_OP_Orient2DRelToCP : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "rotation offset"
	float m_flRotOffset; // 0x1f0
	// MPropertyFriendlyName "spin strength"
	float m_flSpinStrength; // 0x1f4
	// MPropertyFriendlyName "control point"
	int32_t m_nCP; // 0x1f8
	// MPropertyFriendlyName "rotation field"
	// MPropertyAttributeChoiceName "particlefield_rotation"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1fc
};

// Aligment: 3
// Size: 512
class C_INIT_RandomRadius : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "radius min"
	// MPropertyAttributeRange "biased 0 500"
	float m_flRadiusMin; // 0x1f0
	// MPropertyFriendlyName "radius max"
	// MPropertyAttributeRange "biased 0 500"
	float m_flRadiusMax; // 0x1f4
	// MPropertyFriendlyName "radius random exponent"
	// MPropertyAttributeRange "-2 2"
	float m_flRadiusRandExponent; // 0x1f8
};

// Aligment: 5
// Size: 528
class C_INIT_VelocityRadialRandom : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1f0
	// MPropertyFriendlyName "random speed min"
	float m_fSpeedMin; // 0x1f4
	// MPropertyFriendlyName "random speed max"
	float m_fSpeedMax; // 0x1f8
	// MPropertyFriendlyName "local space scale"
	Vector m_vecLocalCoordinateSystemSpeedScale; // 0x1fc
	// MPropertyFriendlyName "ignore delta time"
	bool m_bIgnoreDelta; // 0x209
};

// Aligment: 0
// Size: 576
class C_INIT_RemapParticleCountToNamedModelSequenceScalar : public C_INIT_RemapParticleCountToNamedModelElementScalar, C_INIT_RemapParticleCountToScalar, CParticleFunctionInitializer, CParticleFunction
{
public:
// <no members described>
};

// Aligment: 3
// Size: 512
class C_INIT_RandomLifeTime : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "lifetime min"
	// MPropertyAttributeRange "0 20"
	float m_fLifetimeMin; // 0x1f0
	// MPropertyFriendlyName "lifetime max"
	// MPropertyAttributeRange "0 20"
	float m_fLifetimeMax; // 0x1f4
	// MPropertyFriendlyName "lifetime random exponent"
	float m_fLifetimeRandExponent; // 0x1f8
};

// Aligment: 6
// Size: 1232
class C_OP_AttractToControlPoint : public CParticleFunctionForce, CParticleFunction
{
public:
	// MPropertyFriendlyName "component scale"
	// MVectorIsCoordinate
	Vector m_vecComponentScale; // 0x1f0
	// MPropertyFriendlyName "amount of force (or Max Force)"
	CPerParticleFloatInput m_fForceAmount; // 0x200
	// MPropertyFriendlyName "falloff power"
	float m_fFalloffPower; // 0x338
	// MPropertyFriendlyName "input position transform"
	CParticleTransformInput m_TransformInput; // 0x340
	// MPropertyFriendlyName "Min Pullforce"
	CPerParticleFloatInput m_fForceAmountMin; // 0x390
	// MPropertyFriendlyName "Apply Min Pullforce"
	bool m_bApplyMinForce; // 0x4c8
};

// Aligment: 14
// Size: 544
class C_INIT_CreatePhyllotaxis : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1f0
	// MPropertyFriendlyName "scale size multiplier from CP"
	int32_t m_nScaleCP; // 0x1f4
	// MPropertyFriendlyName "scale CP component 0/1/2 X/Y/Z"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nComponent; // 0x1f8
	// MPropertyFriendlyName "center core radius"
	float m_fRadCentCore; // 0x1fc
	// MPropertyFriendlyName "radius multiplier"
	float m_fRadPerPoint; // 0x200
	// MPropertyFriendlyName "radius max (-1 procedural growth)"
	float m_fRadPerPointTo; // 0x204
	// MPropertyFriendlyName "golden angle (is 137.508)"
	float m_fpointAngle; // 0x208
	// MPropertyFriendlyName "overall size multiplier (-1 count based distribution)"
	float m_fsizeOverall; // 0x20c
	// MPropertyFriendlyName "radius bias"
	float m_fRadBias; // 0x210
	// MPropertyFriendlyName "radius min "
	float m_fMinRad; // 0x214
	// MPropertyFriendlyName "distribution bias"
	float m_fDistBias; // 0x218
	// MPropertyFriendlyName "local space"
	bool m_bUseLocalCoords; // 0x21c
	// MPropertyFriendlyName "use continuous emission"
	bool m_bUseWithContEmit; // 0x21d
	// MPropertyFriendlyName "scale radius from initial value"
	bool m_bUseOrigRadius; // 0x21e
};

// Aligment: 4
// Size: 528
class C_OP_BoxConstraint : public CParticleFunctionConstraint, CParticleFunction
{
public:
	// MPropertyFriendlyName "min coords"
	Vector m_vecMin; // 0x1f0
	// MPropertyFriendlyName "max coords"
	Vector m_vecMax; // 0x1fc
	// MPropertyFriendlyName "control point"
	int32_t m_nCP; // 0x208
	// MPropertyFriendlyName "use local space"
	bool m_bLocalSpace; // 0x20c
};

// Aligment: 5
// Size: 544
class C_OP_SetParentControlPointsToChildCP : public CParticleFunctionPreEmission, CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "group ID to affect"
	int32_t m_nChildGroupID; // 0x200
	// MPropertyFriendlyName "control point to set"
	int32_t m_nChildControlPoint; // 0x204
	// MPropertyFriendlyName "# of children to set"
	int32_t m_nNumControlPoints; // 0x208
	// MPropertyFriendlyName "first parent control point to set from"
	int32_t m_nFirstSourcePoint; // 0x20c
	// MPropertyFriendlyName "set orientation"
	bool m_bSetOrientation; // 0x210
};

// Aligment: 8
// Size: 528
class C_OP_SetPerChildControlPointFromAttribute : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "group ID to affect"
	int32_t m_nChildGroupID; // 0x1f0
	// MPropertyFriendlyName "control point to set"
	int32_t m_nFirstControlPoint; // 0x1f4
	// MPropertyFriendlyName "# of children to set"
	int32_t m_nNumControlPoints; // 0x1f8
	// MPropertyFriendlyName "particle increment amount"
	int32_t m_nParticleIncrement; // 0x1fc
	// MPropertyFriendlyName "first particle to copy"
	int32_t m_nFirstSourcePoint; // 0x200
	// MPropertyFriendlyName "set number of children based on particle count"
	bool m_bNumBasedOnParticleCount; // 0x204
	// MPropertyFriendlyName "field to read"
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nAttributeToRead; // 0x208
	// MPropertyFriendlyName "control point field for scalars"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nCPField; // 0x20c
};

// Aligment: 5
// Size: 544
class C_INIT_OffsetVectorToVector : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "input field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldInput; // 0x1f0
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f4
	// MPropertyFriendlyName "output offset minimum"
	// MVectorIsSometimesCoordinate
	Vector m_vecOutputMin; // 0x1f8
	// MPropertyFriendlyName "output offset maximum"
	// MVectorIsSometimesCoordinate
	Vector m_vecOutputMax; // 0x204
	// MPropertyFriendlyName "Random number generator controls"
	CRandomNumberGeneratorParameters m_randomnessParameters; // 0x210
};

// Aligment: 3
// Size: 512
class C_OP_GlobalLight : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "initial color bias"
	float m_flScale; // 0x1f0
	// MPropertyFriendlyName "clamp minimum light value to initial color"
	bool m_bClampLowerRange; // 0x1f4
	// MPropertyFriendlyName "clamp maximum light value to initial color"
	bool m_bClampUpperRange; // 0x1f5
};

// Aligment: 16
// Size: 496
class CParticleFunction
{
public:
	// MPropertyFriendlyName "operator strength"
	// MPropertySortPriority "-100"
	CParticleCollectionFloatInput m_flOpStrength; // 0x8
	// MPropertyFriendlyName "operator end cap state"
	// MPropertySortPriority "-100"
	ParticleEndcapMode_t m_nOpEndCapState; // 0x140
	// MPropertyStartGroup "Operator Fade"
	// MPropertyFriendlyName "operator start fadein"
	// MParticleAdvancedField
	// MPropertySortPriority "-100"
	float m_flOpStartFadeInTime; // 0x144
	// MPropertyFriendlyName "operator end fadein"
	// MParticleAdvancedField
	// MPropertySortPriority "-100"
	float m_flOpEndFadeInTime; // 0x148
	// MPropertyFriendlyName "operator start fadeout"
	// MParticleAdvancedField
	// MPropertySortPriority "-100"
	float m_flOpStartFadeOutTime; // 0x14c
	// MPropertyFriendlyName "operator end fadeout"
	// MParticleAdvancedField
	// MPropertySortPriority "-100"
	float m_flOpEndFadeOutTime; // 0x150
	// MPropertyFriendlyName "operator fade oscillate"
	// MParticleAdvancedField
	// MPropertySortPriority "-100"
	float m_flOpFadeOscillatePeriod; // 0x154
	// MPropertyFriendlyName "normalize fade times to endcap"
	// MParticleAdvancedField
	// MPropertySortPriority "-100"
	bool m_bNormalizeToStopTime; // 0x158
	// MPropertyStartGroup "Operator Fade Time Offset"
	// MPropertyFriendlyName "operator fade time offset min"
	// MParticleAdvancedField
	// MPropertySortPriority "-100"
	float m_flOpTimeOffsetMin; // 0x15c
	// MPropertyFriendlyName "operator fade time offset max"
	// MParticleAdvancedField
	// MPropertySortPriority "-100"
	float m_flOpTimeOffsetMax; // 0x160
	// MPropertyFriendlyName "operator fade time offset seed"
	// MParticleAdvancedField
	// MPropertySortPriority "-100"
	int32_t m_nOpTimeOffsetSeed; // 0x164
	// MPropertyStartGroup "Operator Fade Timescale Modifiers"
	// MPropertyFriendlyName "operator fade time scale seed"
	// MParticleAdvancedField
	// MPropertySortPriority "-100"
	int32_t m_nOpTimeScaleSeed; // 0x168
	// MPropertyFriendlyName "operator fade time scale min"
	// MParticleAdvancedField
	// MPropertySortPriority "-100"
	float m_flOpTimeScaleMin; // 0x16c
	// MPropertyFriendlyName "operator fade time scale max"
	// MParticleAdvancedField
	// MPropertySortPriority "-100"
	float m_flOpTimeScaleMax; // 0x170
	// MPropertyStartGroup
	// MPropertySuppressField
	bool m_bDisableOperator; // 0x175
	// MPropertyFriendlyName "operator help and notes"
	// MParticleHelpField
	// MParticleAdvancedField
	// MPropertySortPriority "-100"
	CUtlString m_Notes; // 0x178
};

// Aligment: 0
// Size: 560
class C_OP_Callback : public CParticleFunctionRenderer, CParticleFunction
{
public:
// <no members described>
};

// Aligment: 1
// Size: 640
class C_INIT_InitFromParentKilled : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "field to init"
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nAttributeToCopy; // 0x1f0
};

// Aligment: 6
// Size: 544
class C_INIT_RandomNamedModelElement : public CParticleFunctionInitializer, CParticleFunction
{
public:
	CStrongHandle< InfoForResourceTypeCModel > m_hModel; // 0x1f0
	// MPropertyFriendlyName "names"
	CUtlVector< CUtlString > m_names; // 0x1f8
	// MPropertyFriendlyName "shuffle"
	bool m_bShuffle; // 0x210
	// MPropertyFriendlyName "linear"
	bool m_bLinear; // 0x211
	// MPropertyFriendlyName "model from renderer"
	bool m_bModelFromRenderer; // 0x212
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x214
};

// Aligment: 3
// Size: 528
class C_OP_BasicMovement : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "gravity"
	// MVectorIsCoordinate
	Vector m_Gravity; // 0x1f0
	// MPropertyFriendlyName "drag"
	// MPropertyAttributeRange "-1 1"
	float m_fDrag; // 0x1fc
	// MPropertyFriendlyName "max constraint passes"
	int32_t m_nMaxConstraintPasses; // 0x200
};

// Aligment: 2
// Size: 848
class C_OP_QuantizeFloat : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "value"
	CPerParticleFloatInput m_InputValue; // 0x1f0
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nOutputField; // 0x328
};

// Aligment: 11
// Size: 544
class C_INIT_RemapScalar : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "input field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldInput; // 0x1f0
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f4
	// MPropertyFriendlyName "input minimum"
	float m_flInputMin; // 0x1f8
	// MPropertyFriendlyName "input maximum"
	float m_flInputMax; // 0x1fc
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x200
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x204
	// MPropertyFriendlyName "emitter lifetime start time (seconds)"
	float m_flStartTime; // 0x208
	// MPropertyFriendlyName "emitter lifetime end time (seconds)"
	float m_flEndTime; // 0x20c
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x210
	// MPropertyFriendlyName "only active within specified input range"
	bool m_bActiveRange; // 0x214
	// MPropertyFriendlyName "remap bias"
	float m_flRemapBias; // 0x218
};

// Aligment: 7
// Size: 2064
class C_INIT_MoveBetweenPoints : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "minimum speed"
	CPerParticleFloatInput m_flSpeedMin; // 0x1f0
	// MPropertyFriendlyName "maximum speed"
	CPerParticleFloatInput m_flSpeedMax; // 0x328
	// MPropertyFriendlyName "end spread"
	CPerParticleFloatInput m_flEndSpread; // 0x460
	// MPropertyFriendlyName "start offset"
	CPerParticleFloatInput m_flStartOffset; // 0x598
	// MPropertyFriendlyName "end offset"
	CPerParticleFloatInput m_flEndOffset; // 0x6d0
	// MPropertyFriendlyName "end control point"
	int32_t m_nEndControlPointNumber; // 0x808
	// MPropertyFriendlyName "bias lifetime by trail length"
	bool m_bTrailBias; // 0x80c
};

// Aligment: 1
// Size: 512
class C_INIT_SequenceLifeTime : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "frames per second"
	float m_flFramerate; // 0x1f0
};

// Aligment: 6
// Size: 544
class C_OP_OscillateVectorSimple : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "oscillation rate"
	// MVectorIsSometimesCoordinate
	Vector m_Rate; // 0x1f0
	// MPropertyFriendlyName "oscillation frequency"
	Vector m_Frequency; // 0x1fc
	// MPropertyFriendlyName "oscillation field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nField; // 0x208
	// MPropertyFriendlyName "oscillation multiplier"
	float m_flOscMult; // 0x20c
	// MPropertyFriendlyName "oscillation start phase"
	float m_flOscAdd; // 0x210
	// MPropertyFriendlyName "offset instead of accelerate position"
	bool m_bOffset; // 0x214
};

// Aligment: 9
// Size: 1456
class C_OP_ContinuousEmitter : public CParticleFunctionEmitter, CParticleFunction
{
public:
	// MPropertyFriendlyName "emission duration"
	CParticleCollectionFloatInput m_flEmissionDuration; // 0x1f0
	// MPropertyFriendlyName "emission start time"
	CParticleCollectionFloatInput m_flStartTime; // 0x328
	// MPropertyFriendlyName "emission rate"
	CParticleCollectionFloatInput m_flEmitRate; // 0x460
	// MPropertyFriendlyName "scale emission to used control points"
	// MParticleMaxVersion
	float m_flEmissionScale; // 0x598
	// MPropertyFriendlyName "scale emission by parent particle count"
	float m_flScalePerParentParticle; // 0x59c
	// MPropertyFriendlyName "emit particles for killed parent particles"
	bool m_bInitFromKilledParentParticles; // 0x5a0
	// MPropertyFriendlyName "limit per update"
	int32_t m_nLimitPerUpdate; // 0x5a4
	// MPropertyFriendlyName "force emit on first update"
	bool m_bForceEmitOnFirstUpdate; // 0x5a8
	// MPropertyFriendlyName "force emit on last update"
	bool m_bForceEmitOnLastUpdate; // 0x5a9
};

// Aligment: 5
// Size: 528
class C_OP_RemapDistanceToLineSegmentBase : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "control point 0"
	int32_t m_nCP0; // 0x1f0
	// MPropertyFriendlyName "control point 1"
	int32_t m_nCP1; // 0x1f4
	// MPropertyFriendlyName "min distance value"
	float m_flMinInputValue; // 0x1f8
	// MPropertyFriendlyName "max distance value"
	float m_flMaxInputValue; // 0x1fc
	// MPropertyFriendlyName "use distance to an infinite line instead of a finite line segment"
	bool m_bInfiniteLine; // 0x200
};

// Aligment: 1
// Size: 512
class C_OP_EndCapTimedDecay : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "decay time"
	float m_flDecayTime; // 0x1f0
};

// Aligment: 6
// Size: 576
class C_INIT_CreateSequentialPath : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "maximum distance"
	float m_fMaxDistance; // 0x1f0
	// MPropertyFriendlyName "particles to map from start to end"
	float m_flNumToAssign; // 0x1f4
	// MPropertyFriendlyName "restart behavior (0 = bounce, 1 = loop )"
	bool m_bLoop; // 0x1f8
	// MPropertyFriendlyName "use sequential CP pairs between start and end point"
	bool m_bCPPairs; // 0x1f9
	// MPropertyFriendlyName "save offset"
	bool m_bSaveOffset; // 0x1fa
	CPathParameters m_PathParams; // 0x200
};

// Aligment: 1
// Size: 816
class C_OP_DecayOffscreen : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "Offscreen Time Before Decay"
	CParticleCollectionFloatInput m_flOffscreenTime; // 0x1f0
};

// Aligment: 13
// Size: 2064
class C_OP_DistanceBetweenTransforms : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f0
	// MPropertyFriendlyName "strarting transform"
	CParticleTransformInput m_TransformStart; // 0x1f8
	// MPropertyFriendlyName "end transform"
	CParticleTransformInput m_TransformEnd; // 0x248
	// MPropertyFriendlyName "distance minimum"
	CPerParticleFloatInput m_flInputMin; // 0x298
	// MPropertyFriendlyName "distance maximum"
	CPerParticleFloatInput m_flInputMax; // 0x3d0
	// MPropertyFriendlyName "output minimum"
	CPerParticleFloatInput m_flOutputMin; // 0x508
	// MPropertyFriendlyName "output maximum"
	CPerParticleFloatInput m_flOutputMax; // 0x640
	// MPropertyFriendlyName "maximum trace length"
	float m_flMaxTraceLength; // 0x778
	// MPropertyFriendlyName "LOS Failure Scalar"
	float m_flLOSScale; // 0x77c
	// MPropertyFriendlyName "LOS collision group"
	char[128] m_CollisionGroupName; // 0x780
	// MPropertyFriendlyName "Trace Set"
	ParticleTraceSet_t m_nTraceSet; // 0x800
	// MPropertyFriendlyName "ensure line of sight"
	bool m_bLOS; // 0x804
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x808
};

// Aligment: 6
// Size: 528
class C_OP_RemapScalar : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "input field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldInput; // 0x1f0
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f4
	// MPropertyFriendlyName "input minimum"
	float m_flInputMin; // 0x1f8
	// MPropertyFriendlyName "input maximum"
	float m_flInputMax; // 0x1fc
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x200
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x204
};

// Aligment: 3
// Size: 512
class C_INIT_RandomTrailLength : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "length min"
	float m_flMinLength; // 0x1f0
	// MPropertyFriendlyName "length max"
	float m_flMaxLength; // 0x1f4
	// MPropertyFriendlyName "length random exponent"
	float m_flLengthRandExponent; // 0x1f8
};

// Aligment: 11
// Size: 3088
class C_INIT_RingWave : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "input transform"
	CParticleTransformInput m_TransformInput; // 0x1f0
	// MPropertyFriendlyName "even distribution count"
	CParticleCollectionFloatInput m_flParticlesPerOrbit; // 0x240
	// MPropertyFriendlyName "initial radius"
	CPerParticleFloatInput m_flInitialRadius; // 0x378
	// MPropertyFriendlyName "thickness"
	CPerParticleFloatInput m_flThickness; // 0x4b0
	// MPropertyFriendlyName "min initial speed"
	CPerParticleFloatInput m_flInitialSpeedMin; // 0x5e8
	// MPropertyFriendlyName "max initial speed"
	CPerParticleFloatInput m_flInitialSpeedMax; // 0x720
	// MPropertyFriendlyName "roll"
	CPerParticleFloatInput m_flRoll; // 0x858
	// MPropertyFriendlyName "pitch"
	CPerParticleFloatInput m_flPitch; // 0x990
	// MPropertyFriendlyName "yaw"
	CPerParticleFloatInput m_flYaw; // 0xac8
	// MPropertyFriendlyName "even distribution"
	bool m_bEvenDistribution; // 0xc00
	// MPropertyFriendlyName "XY velocity only"
	bool m_bXYVelocityOnly; // 0xc01
};

// Aligment: 9
// Size: 2448
class C_INIT_SetHitboxToClosest : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1f0
	// MPropertyFriendlyName "desired hitbox"
	int32_t m_nDesiredHitbox; // 0x1f4
	// MPropertyFriendlyName "model hitbox scale"
	CParticleCollectionVecInput m_vecHitBoxScale; // 0x1f8
	// MPropertyFriendlyName "hitbox set"
	char[128] m_HitboxSetName; // 0x7c0
	// MPropertyFriendlyName "use bones instead of hitboxes"
	bool m_bUseBones; // 0x840
	// MPropertyFriendlyName "get closest point on closest hitbox"
	bool m_bUseClosestPointOnHitbox; // 0x841
	// MPropertyFriendlyName "closest point test type"
	ClosestPointTestType_t m_nTestType; // 0x844
	// MPropertyFriendlyName "hybrid ratio"
	CParticleCollectionFloatInput m_flHybridRatio; // 0x848
	// MPropertyFriendlyName "set initial position"
	bool m_bUpdatePosition; // 0x980
};

// Aligment: 3
// Size: 512
class C_OP_RemapVelocityToVector : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f0
	// MPropertyFriendlyName "scale factor"
	float m_flScale; // 0x1f4
	// MPropertyFriendlyName "normalize"
	bool m_bNormalize; // 0x1f8
};

// Aligment: 4
// Size: 576
class C_OP_RenderTonemapController : public CParticleFunctionRenderer, CParticleFunction
{
public:
	// MPropertyFriendlyName "tonemap level scale"
	float m_flTonemapLevel; // 0x230
	// MPropertyFriendlyName "tonemap weight scale"
	float m_flTonemapWeight; // 0x234
	// MPropertyFriendlyName "tonemap level"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nTonemapLevelField; // 0x238
	// MPropertyFriendlyName "tonemap weight"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nTonemapWeightField; // 0x23c
};

// Aligment: 5
// Size: 1472
class C_OP_RepeatedTriggerChildGroup : public CParticleFunctionPreEmission, CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "group ID to affect"
	int32_t m_nChildGroupID; // 0x200
	// MPropertyFriendlyName "Within-Cluster Refire Time"
	CParticleCollectionFloatInput m_flClusterRefireTime; // 0x208
	// MPropertyFriendlyName "Within-Cluster Fire Count Before Cooldown"
	CParticleCollectionFloatInput m_flClusterSize; // 0x340
	// MPropertyFriendlyName "Cluster Cooldown Time"
	CParticleCollectionFloatInput m_flClusterCooldown; // 0x478
	// MPropertyFriendlyName "limit active children to parent particle count"
	bool m_bLimitChildCount; // 0x5b0
};

// Aligment: 2
// Size: 512
class C_OP_FadeInSimple : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "proportional fade in time"
	float m_flFadeInTime; // 0x1f0
	// MPropertyFriendlyName "alpha field"
	// MPropertyAttributeChoiceName "particlefield_alpha"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f4
};

// Aligment: 2
// Size: 512
class C_OP_NormalizeVector : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f0
	// MPropertyFriendlyName "scale factor"
	float m_flScale; // 0x1f4
};

// Aligment: 4
// Size: 528
class C_INIT_RandomAlpha : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "alpha field"
	// MPropertyAttributeChoiceName "particlefield_alpha"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f0
	// MPropertyFriendlyName "alpha min"
	// MPropertyAttributeRange "0 255"
	int32_t m_nAlphaMin; // 0x1f4
	// MPropertyFriendlyName "alpha max"
	// MPropertyAttributeRange "0 255"
	int32_t m_nAlphaMax; // 0x1f8
	// MPropertyFriendlyName "alpha random exponent"
	float m_flAlphaRandExponent; // 0x204
};

// Aligment: 10
// Size: 3392
class C_OP_RemapAverageHitboxSpeedtoCP : public CParticleFunctionPreEmission, CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "input control point"
	int32_t m_nInControlPointNumber; // 0x200
	// MPropertyFriendlyName "output control point"
	int32_t m_nOutControlPointNumber; // 0x204
	// MPropertyFriendlyName "Output component"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nField; // 0x208
	// MPropertyFriendlyName "input minimum"
	CParticleCollectionFloatInput m_flInputMin; // 0x210
	// MPropertyFriendlyName "input maximum"
	CParticleCollectionFloatInput m_flInputMax; // 0x348
	// MPropertyFriendlyName "output minimum"
	CParticleCollectionFloatInput m_flOutputMin; // 0x480
	// MPropertyFriendlyName "output maximum"
	CParticleCollectionFloatInput m_flOutputMax; // 0x5b8
	// MPropertyFriendlyName "intersection height CP"
	int32_t m_nHeightControlPointNumber; // 0x6f0
	// MPropertyFriendlyName "comparison velocity"
	CParticleCollectionVecInput m_vecComparisonVelocity; // 0x6f8
	// MPropertyFriendlyName "hitbox set"
	char[128] m_HitboxSetName; // 0xcc0
};

// Aligment: 5
// Size: 816
class C_OP_ExternalGameImpulseForce : public CParticleFunctionForce, CParticleFunction
{
public:
	// MPropertyFriendlyName "force scale"
	CPerParticleFloatInput m_flForceScale; // 0x1f0
	// MPropertyFriendlyName "rope shake"
	bool m_bRopes; // 0x328
	// MPropertyFriendlyName "limit rope impulses to Z"
	bool m_bRopesZOnly; // 0x329
	// MPropertyFriendlyName "explosions"
	bool m_bExplosions; // 0x32a
	// MPropertyFriendlyName "particle systems"
	bool m_bParticles; // 0x32b
};

// Aligment: 0
// Size: 1480
class CPerParticleVecInput : public CParticleVecInput
{
public:
// <no members described>
};

// Aligment: 2
// Size: 768
class C_INIT_RandomModelSequence : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "activity"
	char[256] m_ActivityName; // 0x1f0
	// MPropertyFriendlyName "model"
	CStrongHandle< InfoForResourceTypeCModel > m_hModel; // 0x2f0
};

// Aligment: 6
// Size: 832
class C_OP_DecayMaintainCount : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "count to maintain"
	int32_t m_nParticlesToMaintain; // 0x1f0
	// MPropertyFriendlyName "decay delay"
	float m_flDecayDelay; // 0x1f4
	// MPropertyFriendlyName "snapshot control point for count"
	int32_t m_nSnapshotControlPoint; // 0x1f8
	// MPropertyFriendlyName "decay on lifespan"
	bool m_bLifespanDecay; // 0x1fc
	// MPropertyFriendlyName "total count scale"
	CParticleCollectionFloatInput m_flScale; // 0x200
	// MPropertyFriendlyName "kill newest instead of oldest"
	bool m_bKillNewest; // 0x338
};

// Aligment: 3
// Size: 672
class C_OP_SetControlPointPositionToTimeOfDayValue : public CParticleFunctionPreEmission, CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x200
	// MPropertyFriendlyName "time-of-day parameter"
	char[128] m_pszTimeOfDayParameter; // 0x204
	// MPropertyFriendlyName "default value"
	Vector m_vecDefaultValue; // 0x284
};

// Aligment: 20
// Size: 13200
class C_OP_RenderTrails : public CBaseTrailRenderer, CBaseRendererSource2, CParticleFunctionRenderer, CParticleFunction
{
public:
	// MPropertyStartGroup "Screenspace Fading and culling"
	// MPropertyFriendlyName "enable fading and clamping"
	// MPropertySortPriority "1000"
	bool m_bEnableFadingAndClamping; // 0x22e0
	// MPropertyFriendlyName "start fade dot product of normal vs view"
	// MPropertySortPriority "1000"
	float m_flStartFadeDot; // 0x22e4
	// MPropertyFriendlyName "end fade dot product of normal vs view"
	// MPropertySortPriority "1000"
	float m_flEndFadeDot; // 0x22e8
	// MPropertyStartGroup "+Trail Length"
	// MPropertyFriendlyName "Anchor point source"
	// MPropertyAttributeChoiceName "particlefield_vector"
	// MPropertySortPriority "800"
	ParticleAttributeIndex_t m_nPrevPntSource; // 0x22ec
	// MPropertyFriendlyName "max length"
	// MPropertySortPriority "800"
	float m_flMaxLength; // 0x22f0
	// MPropertyFriendlyName "min length"
	// MPropertySortPriority "800"
	float m_flMinLength; // 0x22f4
	// MPropertyFriendlyName "ignore delta time"
	// MPropertySortPriority "800"
	bool m_bIgnoreDT; // 0x22f8
	// MPropertyFriendlyName "constrain radius to no more than this times the length"
	// MPropertySortPriority "800"
	float m_flConstrainRadiusToLengthRatio; // 0x22fc
	// MPropertyFriendlyName "amount to scale trail length by"
	float m_flLengthScale; // 0x2300
	// MPropertyFriendlyName "how long before a trail grows to its full length"
	float m_flLengthFadeInTime; // 0x2304
	// MPropertyStartGroup "Trail Head & Tail"
	// MPropertyFriendlyName "head taper scale"
	// MPropertySortPriority "800"
	CPerParticleFloatInput m_flRadiusHeadTaper; // 0x2308
	// MPropertyFriendlyName "head color scale"
	CParticleCollectionVecInput m_vecHeadColorScale; // 0x2440
	// MPropertyFriendlyName "head alpha scale"
	CPerParticleFloatInput m_flHeadAlphaScale; // 0x2a08
	// MPropertyFriendlyName "tail taper scale"
	CPerParticleFloatInput m_flRadiusTaper; // 0x2b40
	// MPropertyFriendlyName "tail color scale"
	CParticleCollectionVecInput m_vecTailColorScale; // 0x2c78
	// MPropertyFriendlyName "tail alpha scale"
	CPerParticleFloatInput m_flTailAlphaScale; // 0x3240
	// MPropertyStartGroup "Trail UV Controls"
	// MPropertyFriendlyName "texture UV horizontal Scale field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	// MPropertySortPriority "800"
	ParticleAttributeIndex_t m_nHorizCropField; // 0x3378
	// MPropertyFriendlyName "texture UV vertical Scale field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nVertCropField; // 0x337c
	// MPropertyFriendlyName "Trail forward shift (fraction)"
	float m_flForwardShift; // 0x3380
	// MPropertyFriendlyName "Flip U or V texcoords if pitch or yaw go over PI"
	bool m_bFlipUVBasedOnPitchYaw; // 0x3384
};

// Aligment: 4
// Size: 576
class C_INIT_RemapParticleCountToNamedModelElementScalar : public C_INIT_RemapParticleCountToScalar, CParticleFunctionInitializer, CParticleFunction
{
public:
	CStrongHandle< InfoForResourceTypeCModel > m_hModel; // 0x220
	// MPropertyFriendlyName "output min name"
	CUtlString m_outputMinName; // 0x228
	// MPropertyFriendlyName "output max name"
	CUtlString m_outputMaxName; // 0x230
	bool m_bModelFromRenderer; // 0x238
};

// Aligment: 8
// Size: 1776
class C_OP_RemapDotProductToCP : public CParticleFunctionPreEmission, CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "first input control point"
	int32_t m_nInputCP1; // 0x200
	// MPropertyFriendlyName "second input control point"
	int32_t m_nInputCP2; // 0x204
	// MPropertyFriendlyName "output control point"
	int32_t m_nOutputCP; // 0x208
	// MPropertyFriendlyName "output component"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nOutVectorField; // 0x20c
	// MPropertyFriendlyName "input minimum (-1 to 1)"
	CParticleCollectionFloatInput m_flInputMin; // 0x210
	// MPropertyFriendlyName "input maximum (-1 to 1)"
	CParticleCollectionFloatInput m_flInputMax; // 0x348
	// MPropertyFriendlyName "output minimum"
	CParticleCollectionFloatInput m_flOutputMin; // 0x480
	// MPropertyFriendlyName "output maximum"
	CParticleCollectionFloatInput m_flOutputMax; // 0x5b8
};

// Aligment: 3
// Size: 512
class C_OP_OrientTo2dDirection : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "rotation offset"
	float m_flRotOffset; // 0x1f0
	// MPropertyFriendlyName "spin strength"
	float m_flSpinStrength; // 0x1f4
	// MPropertyFriendlyName "rotation field"
	// MPropertyAttributeChoiceName "particlefield_rotation"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f8
};

// Aligment: 0
// Size: 496
class CSpinUpdateBase : public CParticleFunctionOperator, CParticleFunction
{
public:
// <no members described>
};

// Aligment: 60
// Size: 8272
class CBaseRendererSource2 : public CParticleFunctionRenderer, CParticleFunction
{
public:
	// MPropertyStartGroup "+Renderer Modifiers"
	// MPropertyFriendlyName "radius scale"
	// MPropertySortPriority "700"
	CParticleCollectionFloatInput m_flRadiusScale; // 0x230
	// MPropertyFriendlyName "alpha scale"
	// MPropertySortPriority "700"
	CParticleCollectionFloatInput m_flAlphaScale; // 0x368
	// MPropertyFriendlyName "rotation roll scale"
	// MPropertySortPriority "700"
	CParticleCollectionFloatInput m_flRollScale; // 0x4a0
	// MPropertyFriendlyName "per-particle alpha scale attribute"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	// MPropertySortPriority "700"
	ParticleAttributeIndex_t m_nAlpha2Field; // 0x5d8
	// MPropertyFriendlyName "color blend"
	// MPropertySortPriority "700"
	CParticleCollectionVecInput m_vecColorScale; // 0x5e0
	// MPropertyFriendlyName "color blend type"
	// MPropertySortPriority "700"
	ParticleColorBlendType_t m_nColorBlendType; // 0xba8
	// MPropertyStartGroup "+Material"
	// MPropertyFriendlyName "Shader"
	// MPropertySortPriority "600"
	SpriteCardShaderType_t m_nShaderType; // 0xbac
	// MPropertyFriendlyName "Custom Shader"
	// MPropertySuppressExpr "m_nShaderType != SPRITECARD_SHADER_CUSTOM"
	// MPropertySortPriority "600"
	CUtlString m_strShaderOverride; // 0xbb0
	// MPropertyFriendlyName "X offset of center point"
	// MPropertySortPriority "600"
	CParticleCollectionFloatInput m_flCenterXOffset; // 0xbb8
	// MPropertyFriendlyName "Y offset of center point"
	// MPropertySortPriority "600"
	CParticleCollectionFloatInput m_flCenterYOffset; // 0xcf0
	// MPropertyFriendlyName "Bump Strength"
	// MPropertySortPriority "600"
	float m_flBumpStrength; // 0xe28
	// MPropertyFriendlyName "Sheet Crop Behavior"
	// MPropertySortPriority "600"
	ParticleSequenceCropOverride_t m_nCropTextureOverride; // 0xe2c
	// MPropertyFriendlyName "Textures"
	// MParticleRequireDefaultArrayEntry
	// MPropertyAutoExpandSelf
	// MPropertySortPriority "600"
	CUtlVector< TextureGroup_t > m_vecTexturesInput; // 0xe30
	// MPropertyStartGroup "Animation"
	// MPropertyFriendlyName "animation rate"
	// MPropertyAttributeRange "0 5"
	// MPropertySortPriority "500"
	float m_flAnimationRate; // 0xe48
	// MPropertyFriendlyName "animation type"
	// MPropertySortPriority "500"
	AnimationType_t m_nAnimationType; // 0xe4c
	// MPropertyFriendlyName "set animation value in FPS"
	// MPropertySortPriority "500"
	bool m_bAnimateInFPS; // 0xe50
	// MPropertyStartGroup "Lighting and Shadows"
	// MPropertyFriendlyName "self illum amount"
	// MPropertyAttributeRange "0 2"
	// MPropertySortPriority "400"
	CParticleCollectionFloatInput m_flSelfIllumAmount; // 0xe58
	// MPropertyFriendlyName "diffuse lighting amount"
	// MPropertyAttributeRange "0 1"
	// MPropertySortPriority "400"
	CParticleCollectionFloatInput m_flDiffuseAmount; // 0xf90
	// MPropertyFriendlyName "diffuse lighting origin Control Point"
	// MPropertySortPriority "400"
	int32_t m_nLightingControlPoint; // 0x10c8
	// MPropertyFriendlyName "self illum per-particle"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	// MPropertySortPriority "400"
	ParticleAttributeIndex_t m_nSelfIllumPerParticle; // 0x10cc
	// MPropertyStartGroup "+Color and alpha adjustments"
	// MPropertyFriendlyName "output blend mode"
	// MPropertySortPriority "300"
	ParticleOutputBlendMode_t m_nOutputBlendMode; // 0x10d0
	// MPropertyFriendlyName "Gamma-correct vertex colors"
	// MPropertySortPriority "300"
	bool m_bGammaCorrectVertexColors; // 0x10d4
	// MPropertyFriendlyName "Saturate color pre alphablend"
	// MPropertySortPriority "300"
	// MPropertySuppressExpr "mod!=dota"
	bool m_bSaturateColorPreAlphaBlend; // 0x10d5
	// MPropertyFriendlyName "add self amount over alphablend"
	// MPropertySortPriority "300"
	CParticleCollectionFloatInput m_flAddSelfAmount; // 0x10d8
	// MPropertyFriendlyName "desaturation amount"
	// MPropertyAttributeRange "0 1"
	// MPropertySortPriority "300"
	CParticleCollectionFloatInput m_flDesaturation; // 0x1210
	// MPropertyFriendlyName "overbright factor"
	// MPropertySortPriority "300"
	CParticleCollectionFloatInput m_flOverbrightFactor; // 0x1348
	// MPropertyFriendlyName "HSV Shift Control Point"
	// MPropertySortPriority "300"
	int32_t m_nHSVShiftControlPoint; // 0x1480
	// MPropertyFriendlyName "Apply fog to particle"
	// MPropertySortPriority "300"
	ParticleFogType_t m_nFogType; // 0x1484
	// MPropertyFriendlyName "Apply fog of war to color"
	// MPropertySortPriority "300"
	// MPropertySuppressExpr "mod != dota"
	bool m_bTintByFOW; // 0x1488
	// MPropertyFriendlyName "Apply global light to color"
	// MPropertySortPriority "300"
	// MPropertySuppressExpr "mod != dota"
	bool m_bTintByGlobalLight; // 0x1489
	// MPropertyStartGroup "Color and alpha adjustments/Alpha Reference"
	// MPropertyFriendlyName "alpha reference"
	// MPropertySortPriority "300"
	SpriteCardPerParticleScale_t m_nPerParticleAlphaReference; // 0x148c
	// MPropertyFriendlyName "alpha reference window size"
	// MPropertySortPriority "300"
	SpriteCardPerParticleScale_t m_nPerParticleAlphaRefWindow; // 0x1490
	// MPropertyFriendlyName "alpha reference type"
	// MPropertySortPriority "300"
	ParticleAlphaReferenceType_t m_nAlphaReferenceType; // 0x1494
	// MPropertyFriendlyName "alpha reference softness"
	// MPropertyAttributeRange "0 1"
	// MPropertySortPriority "300"
	CParticleCollectionFloatInput m_flAlphaReferenceSoftness; // 0x1498
	// MPropertyFriendlyName "source alpha value to map to alpha of zero"
	// MPropertyAttributeRange "0 1"
	// MPropertySortPriority "300"
	CParticleCollectionFloatInput m_flSourceAlphaValueToMapToZero; // 0x15d0
	// MPropertyFriendlyName "source alpha value to map to alpha of 1"
	// MPropertyAttributeRange "0 1"
	// MPropertySortPriority "300"
	CParticleCollectionFloatInput m_flSourceAlphaValueToMapToOne; // 0x1708
	// MPropertyStartGroup "Refraction"
	// MPropertyFriendlyName "refract background"
	// MPropertySortPriority "200"
	bool m_bRefract; // 0x1840
	// MPropertyFriendlyName "refract draws opaque - alpha scales refraction"
	// MPropertySortPriority "200"
	// MPropertySuppressExpr "!m_bRefract"
	bool m_bRefractSolid; // 0x1841
	// MPropertyFriendlyName "refract amount"
	// MPropertyAttributeRange "-2 2"
	// MPropertySortPriority "200"
	// MPropertySuppressExpr "!m_bRefract"
	CParticleCollectionFloatInput m_flRefractAmount; // 0x1848
	// MPropertyFriendlyName "refract blur radius"
	// MPropertySortPriority "200"
	// MPropertySuppressExpr "!m_bRefract"
	int32_t m_nRefractBlurRadius; // 0x1980
	// MPropertyFriendlyName "refract blur type"
	// MPropertySortPriority "200"
	// MPropertySuppressExpr "!m_bRefract"
	BlurFilterType_t m_nRefractBlurType; // 0x1984
	// MPropertyStartGroup
	// MPropertyFriendlyName "Only Render in effects bloom pass"
	// MPropertySortPriority "1100"
	bool m_bOnlyRenderInEffectsBloomPass; // 0x1988
	// MPropertyFriendlyName "Only Render in effects water pass"
	// MPropertySortPriority "1050"
	// MPropertySuppressExpr "mod != csgo"
	bool m_bOnlyRenderInEffectsWaterPass; // 0x1989
	// MPropertyFriendlyName "Use Mixed Resolution Rendering"
	// MPropertySortPriority "1200"
	bool m_bUseMixedResolutionRendering; // 0x198a
	// MPropertyFriendlyName "Only Render in effects game overlay pass"
	// MPropertySortPriority "1210"
	// MPropertySuppressExpr "mod != csgo"
	bool m_bOnlyRenderInEffecsGameOverlay; // 0x198b
	// MPropertyStartGroup "Stencil"
	// MPropertyFriendlyName "stencil test ID"
	// MPropertySortPriority "0"
	char[128] m_stencilTestID; // 0x198c
	// MPropertyFriendlyName "only write where stencil is NOT stencil test ID"
	// MPropertySortPriority "0"
	bool m_bStencilTestExclude; // 0x1a0c
	// MPropertyFriendlyName "stencil write ID"
	// MPropertySortPriority "0"
	char[128] m_stencilWriteID; // 0x1a0d
	// MPropertyFriendlyName "write stencil on z-buffer test success"
	// MPropertySortPriority "0"
	bool m_bWriteStencilOnDepthPass; // 0x1a8d
	// MPropertyFriendlyName "write stencil on z-buffer test failure"
	// MPropertySortPriority "0"
	bool m_bWriteStencilOnDepthFail; // 0x1a8e
	// MPropertyStartGroup "Depth buffer control and effects"
	// MPropertyFriendlyName "reverse z-buffer test"
	// MPropertySortPriority "900"
	bool m_bReverseZBuffering; // 0x1a8f
	// MPropertyFriendlyName "disable z-buffer test"
	// MPropertySortPriority "900"
	bool m_bDisableZBuffering; // 0x1a90
	// MPropertyFriendlyName "Depth feathering mode"
	// MPropertySortPriority "900"
	ParticleDepthFeatheringMode_t m_nFeatheringMode; // 0x1a94
	// MPropertyFriendlyName "particle feathering closest distance to surface"
	// MPropertySortPriority "900"
	CParticleCollectionFloatInput m_flFeatheringMinDist; // 0x1a98
	// MPropertyFriendlyName "particle feathering farthest distance to surface"
	// MPropertySortPriority "900"
	CParticleCollectionFloatInput m_flFeatheringMaxDist; // 0x1bd0
	// MPropertyFriendlyName "particle feathering filter"
	// MPropertySortPriority "900"
	CParticleCollectionFloatInput m_flFeatheringFilter; // 0x1d08
	// MPropertyFriendlyName "depth comparison bias"
	// MPropertySortPriority "900"
	float m_flDepthBias; // 0x1e40
	// MPropertyFriendlyName "Sort Method"
	// MPropertySortPriority "900"
	ParticleSortingChoiceList_t m_nSortMethod; // 0x1e44
	// MPropertyStartGroup "Animation"
	// MPropertyFriendlyName "blend sequence animation frames"
	// MPropertySortPriority "500"
	bool m_bBlendFramesSeq0; // 0x1e48
	// MPropertyFriendlyName "use max-luminance blending for sequence"
	// MPropertySortPriority "500"
	// MPropertySuppressExpr "!m_bBlendFramesSeq0"
	bool m_bMaxLuminanceBlendingSequence0; // 0x1e49
};

// Aligment: 5
// Size: 2016
class C_OP_RemapExternalWindToCP : public CParticleFunctionPreEmission, CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "control point to sample wind"
	int32_t m_nCP; // 0x200
	// MPropertyFriendlyName "output control point"
	int32_t m_nCPOutput; // 0x204
	// MPropertyFriendlyName "wind scale"
	CParticleCollectionVecInput m_vecScale; // 0x208
	// MPropertyFriendlyName "set magnitude instead of vector"
	bool m_bSetMagnitude; // 0x7d0
	// MPropertyFriendlyName "magnitude output component"
	// MPropertyAttributeChoiceName "vector_component"
	// MPropertySuppressExpr "!m_bSetMagnitude"
	int32_t m_nOutVectorField; // 0x7d4
};

// Aligment: 11
// Size: 560
class C_OP_TeleportBeam : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "Position Control Point"
	int32_t m_nCPPosition; // 0x1f0
	// MPropertyFriendlyName "Velocity Control Point"
	int32_t m_nCPVelocity; // 0x1f4
	// MPropertyFriendlyName "Misc Control Point"
	int32_t m_nCPMisc; // 0x1f8
	// MPropertyFriendlyName "Color Control Point"
	int32_t m_nCPColor; // 0x1fc
	// MPropertyFriendlyName "Invalid Color Control Point"
	int32_t m_nCPInvalidColor; // 0x200
	// MPropertyFriendlyName "Extra Arc Data Point"
	int32_t m_nCPExtraArcData; // 0x204
	// MPropertyFriendlyName "Gravity"
	Vector m_vGravity; // 0x208
	// MPropertyFriendlyName "Arc Duration Maximum"
	float m_flArcMaxDuration; // 0x214
	// MPropertyFriendlyName "Segment Break"
	float m_flSegmentBreak; // 0x218
	// MPropertyFriendlyName "Arc Speed"
	float m_flArcSpeed; // 0x21c
	// MPropertyFriendlyName "Alpha"
	float m_flAlpha; // 0x220
};

// Aligment: 4
// Size: 528
class C_OP_TwistAroundAxis : public CParticleFunctionForce, CParticleFunction
{
public:
	// MPropertyFriendlyName "amount of force"
	float m_fForceAmount; // 0x1f0
	// MPropertyFriendlyName "twist axis"
	// MVectorIsCoordinate
	Vector m_TwistAxis; // 0x1f4
	// MPropertyFriendlyName "object local space axis 0/1"
	bool m_bLocalSpace; // 0x200
	// MPropertyFriendlyName "control point"
	int32_t m_nControlPointNumber; // 0x204
};

// Aligment: 7
// Size: 2128
class C_OP_ModelDampenMovement : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1f0
	// MPropertyFriendlyName "use only bounding box"
	bool m_bBoundBox; // 0x1f4
	// MPropertyFriendlyName "dampen outside instead of inside"
	bool m_bOutside; // 0x1f5
	// MPropertyFriendlyName "use bones instead of hitboxes"
	bool m_bUseBones; // 0x1f6
	// MPropertyFriendlyName "hitbox set"
	char[128] m_HitboxSetName; // 0x1f7
	// MPropertyFriendlyName "test position offset"
	// MVectorIsCoordinate
	CPerParticleVecInput m_vecPosOffset; // 0x278
	// MPropertyFriendlyName "drag"
	// MPropertyAttributeRange "-1 1"
	float m_fDrag; // 0x840
};

// Aligment: 7
// Size: 4112
class C_INIT_VelocityRandom : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1f0
	// MPropertyFriendlyName "random speed min"
	CPerParticleFloatInput m_fSpeedMin; // 0x1f8
	// MPropertyFriendlyName "random speed max"
	CPerParticleFloatInput m_fSpeedMax; // 0x330
	// MPropertyFriendlyName "speed in local coordinate system min"
	// MVectorIsCoordinate
	CPerParticleVecInput m_LocalCoordinateSystemSpeedMin; // 0x468
	// MPropertyFriendlyName "speed in local coordinate system max"
	// MVectorIsCoordinate
	CPerParticleVecInput m_LocalCoordinateSystemSpeedMax; // 0xa30
	// MPropertyFriendlyName "Ignore delta time (RenderTrails)"
	bool m_bIgnoreDT; // 0xff8
	// MPropertyFriendlyName "Random number generator controls"
	CRandomNumberGeneratorParameters m_randomnessParameters; // 0xffc
};

// Aligment: 4
// Size: 528
class C_OP_PlaneCull : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "control point for point on plane"
	int32_t m_nPlaneControlPoint; // 0x1f0
	// MPropertyFriendlyName "plane normal"
	// MVectorIsCoordinate
	Vector m_vecPlaneDirection; // 0x1f4
	// MPropertyFriendlyName "use local space"
	bool m_bLocalSpace; // 0x200
	// MPropertyFriendlyName "cull plane offset"
	float m_flPlaneOffset; // 0x204
};

// Aligment: 0
// Size: 544
class C_INIT_RandomNamedModelSequence : public C_INIT_RandomNamedModelElement, CParticleFunctionInitializer, CParticleFunction
{
public:
// <no members described>
};

// Aligment: 8
// Size: 528
class C_OP_RemapScalarOnceTimed : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "remap time proportional"
	bool m_bProportional; // 0x1f0
	// MPropertyFriendlyName "input field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldInput; // 0x1f4
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f8
	// MPropertyFriendlyName "input minimum"
	float m_flInputMin; // 0x1fc
	// MPropertyFriendlyName "input maximum"
	float m_flInputMax; // 0x200
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x204
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x208
	// MPropertyFriendlyName "remap time"
	float m_flRemapTime; // 0x20c
};

// Aligment: 5
// Size: 32
struct ParticleChildrenInfo_t
{
public:
	// MPropertySuppressField
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_ChildRef; // 0x0
	// MPropertyFriendlyName "delay"
	float m_flDelay; // 0x8
	// MPropertyFriendlyName "end cap effect"
	bool m_bEndCap; // 0xc
	// MPropertySuppressField
	bool m_bDisableChild; // 0xd
	// MPropertyFriendlyName "disable at detail levels below"
	ParticleDetailLevel_t m_nDetailLevel; // 0x10
};

// Aligment: 10
// Size: 5984
class C_INIT_InitialVelocityNoise : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "absolute value"
	// MVectorIsCoordinate
	Vector m_vecAbsVal; // 0x1f0
	// MPropertyFriendlyName "invert abs value"
	// MVectorIsCoordinate
	Vector m_vecAbsValInv; // 0x1fc
	// MPropertyFriendlyName "spatial coordinate offset"
	// MVectorIsCoordinate
	CPerParticleVecInput m_vecOffsetLoc; // 0x208
	// MPropertyFriendlyName "time coordinate offset"
	CPerParticleFloatInput m_flOffset; // 0x7d0
	// MPropertyFriendlyName "output minimum"
	CPerParticleVecInput m_vecOutputMin; // 0x908
	// MPropertyFriendlyName "output maximum"
	CPerParticleVecInput m_vecOutputMax; // 0xed0
	// MPropertyFriendlyName "time noise coordinate scale"
	CPerParticleFloatInput m_flNoiseScale; // 0x1498
	// MPropertyFriendlyName "spatial noise coordinate scale"
	CPerParticleFloatInput m_flNoiseScaleLoc; // 0x15d0
	// MPropertyFriendlyName "input local space velocity (optional)"
	// MParticleTransformInputOptional
	CParticleTransformInput m_TransformInput; // 0x1708
	// MPropertyFriendlyName "ignore delta time"
	bool m_bIgnoreDt; // 0x1758
};

// Aligment: 4
// Size: 544
class C_INIT_RandomVector : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "min"
	// MVectorIsSometimesCoordinate
	Vector m_vecMin; // 0x1f0
	// MPropertyFriendlyName "max"
	// MVectorIsSometimesCoordinate
	Vector m_vecMax; // 0x1fc
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x208
	// MPropertyFriendlyName "Random number generator controls"
	CRandomNumberGeneratorParameters m_randomnessParameters; // 0x20c
};

// Aligment: 5
// Size: 1152
class C_OP_ConstrainDistance : public CParticleFunctionConstraint, CParticleFunction
{
public:
	// MPropertyFriendlyName "minimum distance"
	CParticleCollectionFloatInput m_fMinDistance; // 0x1f0
	// MPropertyFriendlyName "maximum distance"
	CParticleCollectionFloatInput m_fMaxDistance; // 0x328
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x460
	// MPropertyFriendlyName "offset of center"
	// MVectorIsCoordinate
	Vector m_CenterOffset; // 0x464
	// MPropertyFriendlyName "global center point"
	bool m_bGlobalCenter; // 0x470
};

// Aligment: 8
// Size: 672
class C_INIT_RtEnvCull : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "test direction"
	// MVectorIsCoordinate
	Vector m_vecTestDir; // 0x1f0
	// MPropertyFriendlyName "cull normal"
	// MVectorIsCoordinate
	Vector m_vecTestNormal; // 0x1fc
	// MPropertyFriendlyName "use velocity for test direction"
	bool m_bUseVelocity; // 0x208
	// MPropertyFriendlyName "cull on miss"
	bool m_bCullOnMiss; // 0x209
	// MPropertyFriendlyName "velocity test adjust lifespan"
	bool m_bLifeAdjust; // 0x20a
	// MPropertyFriendlyName "ray trace environment name"
	char[128] m_RtEnvName; // 0x20b
	// MPropertyFriendlyName "ray trace environment cp"
	int32_t m_nRTEnvCP; // 0x28c
	// MPropertyFriendlyName "rt env control point component"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nComponent; // 0x290
};

// Aligment: 18
// Size: 592
class C_INIT_StatusEffect : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "D_DETAIL_2"
	Detail2Combo_t m_nDetail2Combo; // 0x1f0
	// MPropertyFriendlyName "$DETAIL2ROTATION"
	float m_flDetail2Rotation; // 0x1f4
	// MPropertyFriendlyName "$DETAIL2SCALE"
	float m_flDetail2Scale; // 0x1f8
	// MPropertyFriendlyName "$DETAIL2BLENDFACTOR"
	float m_flDetail2BlendFactor; // 0x1fc
	// MPropertyFriendlyName "$COLORWARPINTENSITY"
	float m_flColorWarpIntensity; // 0x200
	// MPropertyFriendlyName "$DIFFUSEWARPBLENDTOFULL"
	float m_flDiffuseWarpBlendToFull; // 0x204
	// MPropertyFriendlyName "$ENVMAPINTENSITY"
	float m_flEnvMapIntensity; // 0x208
	// MPropertyFriendlyName "$AMBIENTSCALE"
	float m_flAmbientScale; // 0x20c
	// MPropertyFriendlyName "$SPECULARCOLOR"
	Color m_specularColor; // 0x210
	// MPropertyFriendlyName "$SPECULARSCALE"
	float m_flSpecularScale; // 0x214
	// MPropertyFriendlyName "$SPECULAREXPONENT"
	float m_flSpecularExponent; // 0x218
	// MPropertyFriendlyName "$SPECULAREXPONENTBLENDTOFULL"
	float m_flSpecularExponentBlendToFull; // 0x21c
	// MPropertyFriendlyName "$SPECULARBLENDTOFULL"
	float m_flSpecularBlendToFull; // 0x220
	// MPropertyFriendlyName "$RIMLIGHTCOLOR"
	Color m_rimLightColor; // 0x224
	// MPropertyFriendlyName "$RIMLIGHTSCALE"
	float m_flRimLightScale; // 0x228
	// MPropertyFriendlyName "$REFLECTIONSTINTBYBASEBLENDTONONE"
	float m_flReflectionsTintByBaseBlendToNone; // 0x22c
	// MPropertyFriendlyName "$METALNESSBLENDTOFULL"
	float m_flMetalnessBlendToFull; // 0x230
	// MPropertyFriendlyName "$SELFILLUMBLENDTOFULL"
	float m_flSelfIllumBlendToFull; // 0x234
};

// Aligment: 5
// Size: 560
class C_OP_OscillateScalarSimple : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "oscillation rate"
	float m_Rate; // 0x1f0
	// MPropertyFriendlyName "oscillation frequency"
	float m_Frequency; // 0x1f4
	// MPropertyFriendlyName "oscillation field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nField; // 0x1f8
	// MPropertyFriendlyName "oscillation multiplier"
	float m_flOscMult; // 0x1fc
	// MPropertyFriendlyName "oscillation start phase"
	float m_flOscAdd; // 0x200
};

// Aligment: 2
// Size: 16
struct ParticlePreviewBodyGroup_t
{
public:
	CUtlString m_bodyGroupName; // 0x0
	int32_t m_nValue; // 0x8
};

// Aligment: 2
// Size: 816
class C_OP_PointVectorAtNextParticle : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f0
	// MPropertyFriendlyName "Interpolation"
	CPerParticleFloatInput m_flInterpolation; // 0x1f8
};

// Aligment: 4
// Size: 512
class C_OP_RemapCPVelocityToVector : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "control point"
	int32_t m_nControlPoint; // 0x1f0
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f4
	// MPropertyFriendlyName "scale factor"
	float m_flScale; // 0x1f8
	// MPropertyFriendlyName "normalize"
	bool m_bNormalize; // 0x1fc
};

// Aligment: 7
// Size: 528
class C_OP_SetControlPointsToParticle : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "group ID to affect"
	int32_t m_nChildGroupID; // 0x1f0
	// MPropertyFriendlyName "first control point to set"
	int32_t m_nFirstControlPoint; // 0x1f4
	// MPropertyFriendlyName "# of control points to set"
	int32_t m_nNumControlPoints; // 0x1f8
	// MPropertyFriendlyName "first particle to copy"
	int32_t m_nFirstSourcePoint; // 0x1fc
	// MPropertyFriendlyName "set orientation"
	bool m_bSetOrientation; // 0x200
	// MPropertyFriendlyName "orientation style"
	ParticleOrientationSetMode_t m_nOrientationMode; // 0x204
	// MPropertyFriendlyName "set parent"
	ParticleParentSetMode_t m_nSetParent; // 0x208
};

// Aligment: 18
// Size: 68
class CParticleVisibilityInputs
{
public:
	// MPropertyFriendlyName "camera depth bias"
	float m_flCameraBias; // 0x0
	// MPropertyFriendlyName "input control point number"
	int32_t m_nCPin; // 0x4
	// MPropertyFriendlyName "input proxy radius"
	// MPropertySuppressExpr "m_nCPin == -1"
	float m_flProxyRadius; // 0x8
	// MPropertyFriendlyName "input proxy visibility minimum"
	// MPropertySuppressExpr "m_nCPin == -1"
	float m_flInputMin; // 0xc
	// MPropertyFriendlyName "input proxy visibility maximum"
	// MPropertySuppressExpr "m_nCPin == -1"
	float m_flInputMax; // 0x10
	// MPropertyFriendlyName "input proxy unsupported hardware fallback value"
	// MPropertySuppressExpr "m_nCPin == -1"
	float m_flNoPixelVisibilityFallback; // 0x14
	// MPropertyFriendlyName "input distance minimum"
	// MPropertySuppressExpr "m_nCPin == -1"
	float m_flDistanceInputMin; // 0x18
	// MPropertyFriendlyName "input distance maximum"
	// MPropertySuppressExpr "m_nCPin == -1"
	float m_flDistanceInputMax; // 0x1c
	// MPropertyFriendlyName "input dot minimum"
	// MPropertySuppressExpr "m_nCPin == -1"
	float m_flDotInputMin; // 0x20
	// MPropertyFriendlyName "input dot maximum"
	// MPropertySuppressExpr "m_nCPin == -1"
	float m_flDotInputMax; // 0x24
	// MPropertyFriendlyName "input dot use CP angles"
	// MPropertySuppressExpr "m_nCPin == -1"
	bool m_bDotCPAngles; // 0x28
	// MPropertyFriendlyName "input dot use Camera angles"
	// MPropertySuppressExpr "m_nCPin == -1"
	bool m_bDotCameraAngles; // 0x29
	// MPropertyFriendlyName "output alpha scale minimum"
	// MPropertySuppressExpr "m_nCPin == -1"
	float m_flAlphaScaleMin; // 0x2c
	// MPropertyFriendlyName "output alpha scale maximum"
	// MPropertySuppressExpr "m_nCPin == -1"
	float m_flAlphaScaleMax; // 0x30
	// MPropertyFriendlyName "output radius scale minimum"
	// MPropertySuppressExpr "m_nCPin == -1"
	float m_flRadiusScaleMin; // 0x34
	// MPropertyFriendlyName "output radius scale maximum"
	// MPropertySuppressExpr "m_nCPin == -1"
	float m_flRadiusScaleMax; // 0x38
	// MPropertyFriendlyName "output radius FOV scale base"
	// MPropertySuppressExpr "m_nCPin == -1"
	float m_flRadiusScaleFOVBase; // 0x3c
	// MPropertyFriendlyName "vr camera right eye"
	// MParticleAdvancedField
	bool m_bRightEye; // 0x40
};

// Aligment: 12
// Size: 864
class C_OP_RenderSound : public CParticleFunctionRenderer, CParticleFunction
{
public:
	// MPropertyFriendlyName "duration scale"
	float m_flDurationScale; // 0x230
	// MPropertyFriendlyName "decibel level scale"
	float m_flSndLvlScale; // 0x234
	// MPropertyFriendlyName "pitch scale"
	float m_flPitchScale; // 0x238
	// MPropertyFriendlyName "volume scale"
	float m_flVolumeScale; // 0x23c
	// MPropertyFriendlyName "decibel level field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nSndLvlField; // 0x240
	// MPropertyFriendlyName "duration field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nDurationField; // 0x244
	// MPropertyFriendlyName "pitch field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nPitchField; // 0x248
	// MPropertyFriendlyName "volume field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nVolumeField; // 0x24c
	// MPropertyFriendlyName "sound channel"
	// MPropertyAttributeChoiceName "sound_channel"
	int32_t m_nChannel; // 0x250
	// MPropertyFriendlyName "sound control point number"
	int32_t m_nCPReference; // 0x254
	// MPropertyFriendlyName "sound"
	// MPropertyAttributeEditor "SoundPicker()"
	char[256] m_pszSoundName; // 0x258
	// MPropertyFriendlyName "suppress stop event"
	bool m_bSuppressStopSoundEvent; // 0x358
};

// Aligment: 19
// Size: 576
class C_INIT_StatusEffectCitadel : public CParticleFunctionInitializer, CParticleFunction
{
public:
	// MPropertyFriendlyName "$SFXColorWarpAmount"
	float m_flSFXColorWarpAmount; // 0x1f0
	// MPropertyFriendlyName "$SFXNormalAmount"
	float m_flSFXNormalAmount; // 0x1f4
	// MPropertyFriendlyName "$SFXMetalnessAmount"
	float m_flSFXMetalnessAmount; // 0x1f8
	// MPropertyFriendlyName "$SFXRoughnessAmount"
	float m_flSFXRoughnessAmount; // 0x1fc
	// MPropertyFriendlyName "$SFXSelfIllumAmount"
	float m_flSFXSelfIllumAmount; // 0x200
	// MPropertyFriendlyName "$SFXTextureScale"
	float m_flSFXSScale; // 0x204
	// MPropertyFriendlyName "$SFXTextureScrollX"
	float m_flSFXSScrollX; // 0x208
	// MPropertyFriendlyName "$SFXTextureScrollY"
	float m_flSFXSScrollY; // 0x20c
	// MPropertyFriendlyName "$SFXTextureScrollZ"
	float m_flSFXSScrollZ; // 0x210
	// MPropertyFriendlyName "$SFXTextureOffsetX"
	float m_flSFXSOffsetX; // 0x214
	// MPropertyFriendlyName "$SFXTextureOffsetY"
	float m_flSFXSOffsetY; // 0x218
	// MPropertyFriendlyName "$SFXTextureOffsetZ"
	float m_flSFXSOffsetZ; // 0x21c
	// MPropertyFriendlyName "D_DETAIL"
	DetailCombo_t m_nDetailCombo; // 0x220
	// MPropertyFriendlyName "$SFXDetailAmount"
	float m_flSFXSDetailAmount; // 0x224
	// MPropertyFriendlyName "$SFXDetailTextureScale"
	float m_flSFXSDetailScale; // 0x228
	// MPropertyFriendlyName "$SFXDetailTextureScrollX"
	float m_flSFXSDetailScrollX; // 0x22c
	// MPropertyFriendlyName "$SFXDetailTextureScrollY"
	float m_flSFXSDetailScrollY; // 0x230
	// MPropertyFriendlyName "$SFXDetailTextureScrollZ"
	float m_flSFXSDetailScrollZ; // 0x234
	// MPropertyFriendlyName "$SFXUseModelUVs"
	float m_flSFXSUseModelUVs; // 0x238
};

// Aligment: 30
// Size: 9312
class C_OP_RenderRopes : public CBaseRendererSource2, CParticleFunctionRenderer, CParticleFunction
{
public:
	// MPropertyStartGroup "Screenspace Fading and culling"
	// MPropertyFriendlyName "enable fading and clamping"
	// MPropertySortPriority "1000"
	bool m_bEnableFadingAndClamping; // 0x2050
	// MPropertyFriendlyName "minimum visual screen-size"
	// MPropertySuppressExpr "!m_bEnableFadingAndClamping"
	float m_flMinSize; // 0x2054
	// MPropertyFriendlyName "maximum visual screen-size"
	// MPropertySuppressExpr "!m_bEnableFadingAndClamping"
	float m_flMaxSize; // 0x2058
	// MPropertyFriendlyName "start fade screen-size"
	// MPropertySuppressExpr "!m_bEnableFadingAndClamping"
	float m_flStartFadeSize; // 0x205c
	// MPropertyFriendlyName "end fade and cull screen-size"
	// MPropertySuppressExpr "!m_bEnableFadingAndClamping"
	float m_flEndFadeSize; // 0x2060
	// MPropertyFriendlyName "start fade dot product of normal vs view"
	// MPropertySortPriority "1000"
	float m_flStartFadeDot; // 0x2064
	// MPropertyFriendlyName "end fade dot product of normal vs view"
	// MPropertySortPriority "1000"
	float m_flEndFadeDot; // 0x2068
	// MPropertyStartGroup "Rope Tesselation"
	// MPropertyFriendlyName "amount to taper the width of the trail end by"
	float m_flRadiusTaper; // 0x206c
	// MPropertyFriendlyName "minium number of quads per render segment"
	// MPropertySortPriority "850"
	int32_t m_nMinTesselation; // 0x2070
	// MPropertyFriendlyName "maximum number of quads per render segment"
	int32_t m_nMaxTesselation; // 0x2074
	// MPropertyFriendlyName "tesselation resolution scale factor"
	float m_flTessScale; // 0x2078
	// MPropertyStartGroup "+Rope Global UV Controls"
	// MPropertyFriendlyName "global texture V World Size"
	// MPropertySortPriority "800"
	CParticleCollectionFloatInput m_flTextureVWorldSize; // 0x2080
	// MPropertyFriendlyName "global texture V Scroll Rate"
	CParticleCollectionFloatInput m_flTextureVScrollRate; // 0x21b8
	// MPropertyFriendlyName "global texture V Offset"
	CParticleCollectionFloatInput m_flTextureVOffset; // 0x22f0
	// MPropertyFriendlyName "global texture V Params CP"
	int32_t m_nTextureVParamsCP; // 0x2428
	// MPropertyFriendlyName "Clamp Non-Sheet texture V coords"
	bool m_bClampV; // 0x242c
	// MPropertyStartGroup "Rope Global UV Controls/CP Scaling"
	// MPropertyFriendlyName "scale CP start"
	int32_t m_nScaleCP1; // 0x2430
	// MPropertyFriendlyName "scale CP end"
	int32_t m_nScaleCP2; // 0x2434
	// MPropertyFriendlyName "scale V world size by CP distance"
	float m_flScaleVSizeByControlPointDistance; // 0x2438
	// MPropertyFriendlyName "scale V scroll rate by CP distance"
	float m_flScaleVScrollByControlPointDistance; // 0x243c
	// MPropertyFriendlyName "scale V offset by CP distance"
	float m_flScaleVOffsetByControlPointDistance; // 0x2440
	// MPropertyStartGroup "Rope Global UV Controls"
	// MPropertyFriendlyName "Use scalar attribute for texture coordinate"
	bool m_bUseScalarForTextureCoordinate; // 0x2445
	// MPropertyFriendlyName "scalar to use for texture coordinate"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	// MPropertySuppressExpr "!m_bUseScalarForTextureCoordinate"
	ParticleAttributeIndex_t m_nScalarFieldForTextureCoordinate; // 0x2448
	// MPropertyFriendlyName "scale value to map attribute to texture coordinate"
	// MPropertySuppressExpr "!m_bUseScalarForTextureCoordinate"
	float m_flScalarAttributeTextureCoordScale; // 0x244c
	// MPropertyStartGroup "Rope Order Controls"
	// MPropertyFriendlyName "reverse point order"
	// MPropertySortPriority "800"
	bool m_bReverseOrder; // 0x2450
	// MPropertyFriendlyName "Closed loop"
	bool m_bClosedLoop; // 0x2451
	// MPropertyStartGroup "Orientation"
	// MPropertyFriendlyName "orientation_type"
	// MPropertySortPriority "750"
	ParticleOrientationChoiceList_t m_nOrientationType; // 0x2454
	// MPropertyFriendlyName "attribute to use for normal"
	// MPropertyAttributeChoiceName "particlefield_vector"
	// MPropertySortPriority "750"
	// MPropertySuppressExpr "m_nOrientationType != PARTICLE_ORIENTATION_ALIGN_TO_PARTICLE_NORMAL && m_nOrientationType != PARTICLE_ORIENTATION_SCREENALIGN_TO_PARTICLE_NORMAL"
	ParticleAttributeIndex_t m_nVectorFieldForOrientation; // 0x2458
	// MPropertyStartGroup "Material"
	// MPropertyFriendlyName "draw as opaque"
	bool m_bDrawAsOpaque; // 0x245c
	// MPropertyStartGroup "Orientation"
	// MPropertyFriendlyName "generate normals for cylinder"
	bool m_bGenerateNormals; // 0x245d
};

// Aligment: 5
// Size: 3232
class C_OP_SpringToVectorConstraint : public CParticleFunctionConstraint, CParticleFunction
{
public:
	// MPropertyFriendlyName "slack"
	CPerParticleFloatInput m_flRestLength; // 0x1f0
	// MPropertyFriendlyName "minimum segment length %"
	CPerParticleFloatInput m_flMinDistance; // 0x328
	// MPropertyFriendlyName "maximum segment length %"
	CPerParticleFloatInput m_flMaxDistance; // 0x460
	// MPropertyFriendlyName "resting spacing"
	CPerParticleFloatInput m_flRestingLength; // 0x598
	// MPropertyFriendlyName "anchor vector"
	CPerParticleVecInput m_vecAnchorVector; // 0x6d0
};

// Aligment: 2
// Size: 512
class C_OP_FadeOutSimple : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "proportional fade out time"
	float m_flFadeOutTime; // 0x1f0
	// MPropertyFriendlyName "alpha field"
	// MPropertyAttributeChoiceName "particlefield_alpha"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f4
};

// Aligment: 1
// Size: 512
class CParticleFunctionPreEmission : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "Run Only Once"
	bool m_bRunOnce; // 0x1f0
};

// Aligment: 1
// Size: 4
struct CollisionGroupContext_t
{
public:
	int32_t m_nCollisionGroupNumber; // 0x0
};

// Aligment: 1
// Size: 576
class C_OP_RemapTransformToVelocity : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "transform input"
	CParticleTransformInput m_TransformInput; // 0x1f0
};

// Aligment: 8
// Size: 544
class C_OP_RemapSpeedtoCP : public CParticleFunctionPreEmission, CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "input control point"
	int32_t m_nInControlPointNumber; // 0x200
	// MPropertyFriendlyName "output control point"
	int32_t m_nOutControlPointNumber; // 0x204
	// MPropertyFriendlyName "Output field 0-2 X/Y/Z"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nField; // 0x208
	// MPropertyFriendlyName "input minimum"
	float m_flInputMin; // 0x20c
	// MPropertyFriendlyName "input maximum"
	float m_flInputMax; // 0x210
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x214
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x218
	// MPropertyFriendlyName "use delta of velocity instead of constant speed"
	bool m_bUseDeltaV; // 0x21c
};

// Aligment: 16
// Size: 2112
class C_OP_RenderDeferredLight : public CParticleFunctionRenderer, CParticleFunction
{
public:
	// MPropertyFriendlyName "projected texture use alpha test window"
	// MPropertySuppressExpr "!m_bUseTexture"
	bool m_bUseAlphaTestWindow; // 0x230
	// MPropertyFriendlyName "projected texture light"
	bool m_bUseTexture; // 0x231
	// MPropertyStartGroup "+Renderer Modifiers"
	// MPropertyFriendlyName "radius scale"
	// MPropertySortPriority "700"
	float m_flRadiusScale; // 0x234
	// MPropertyFriendlyName "alpha scale"
	// MPropertySortPriority "700"
	float m_flAlphaScale; // 0x238
	// MPropertyFriendlyName "per-particle alpha scale attribute"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	// MPropertySortPriority "700"
	ParticleAttributeIndex_t m_nAlpha2Field; // 0x23c
	// MPropertyFriendlyName "color blend"
	// MPropertySortPriority "700"
	CParticleCollectionVecInput m_vecColorScale; // 0x240
	// MPropertyFriendlyName "color blend type"
	// MPropertySortPriority "700"
	ParticleColorBlendType_t m_nColorBlendType; // 0x808
	// MPropertyStartGroup
	// MPropertyFriendlyName "spotlight distance"
	float m_flLightDistance; // 0x80c
	// MPropertyFriendlyName "light start falloff"
	float m_flStartFalloff; // 0x810
	// MPropertyFriendlyName "spotlight distance falloff"
	float m_flDistanceFalloff; // 0x814
	// MPropertyFriendlyName "spotlight FoV"
	float m_flSpotFoV; // 0x818
	// MPropertyFriendlyName "projected texture alpha test point scale field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	// MPropertySuppressExpr "!m_bUseTexture"
	ParticleAttributeIndex_t m_nAlphaTestPointField; // 0x81c
	// MPropertyFriendlyName "projected texture alpha test range scale field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	// MPropertySuppressExpr "!m_bUseTexture"
	ParticleAttributeIndex_t m_nAlphaTestRangeField; // 0x820
	// MPropertyFriendlyName "projected texture alpha test sharpness scale field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	// MPropertySuppressExpr "!m_bUseTexture"
	ParticleAttributeIndex_t m_nAlphaTestSharpnessField; // 0x824
	// MPropertyFriendlyName "texture"
	// MPropertySuppressExpr "!m_bUseTexture"
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hTexture; // 0x828
	// MPropertyFriendlyName "HSV Shift Control Point"
	int32_t m_nHSVShiftControlPoint; // 0x830
};

// Aligment: 2
// Size: 512
class C_OP_Decay : public CParticleFunctionOperator, CParticleFunction
{
public:
	// MPropertyFriendlyName "Reduce rope popping on decay"
	bool m_bRopeDecay; // 0x1f0
	// MPropertyFriendlyName "force preserving particle order"
	bool m_bForcePreserveParticleOrder; // 0x1f1
};

// Aligment: 2
// Size: 8
struct Relationship_t
{
public:
	Disposition_t disposition; // 0x0
	int32_t priority; // 0x4
};

// Aligment: 2
// Size: 128
class CNavVolumeSphere : public CNavVolume
{
public:
	Vector m_vCenter; // 0x70
	float m_flRadius; // 0x7c
};

// Aligment: 0
// Size: 152
class CNavVolumeAll : public CNavVolumeVector, CNavVolume
{
public:
// <no members described>
};

// Aligment: 3
// Size: 40
class CNetworkVelocityVector
{
public:
	// MNetworkBitCount "18"
	// MNetworkMinValue "-4096"
	// MNetworkMaxValue "4096"
	// MNetworkEncodeFlags
	// MNetworkChangeCallback "CNetworkVelocityVector"
	CNetworkedQuantizedFloat m_vecX; // 0x10
	// MNetworkBitCount "18"
	// MNetworkMinValue "-4096"
	// MNetworkMaxValue "4096"
	// MNetworkEncodeFlags
	// MNetworkChangeCallback "CNetworkVelocityVector"
	CNetworkedQuantizedFloat m_vecY; // 0x18
	// MNetworkBitCount "18"
	// MNetworkMinValue "-4096"
	// MNetworkMaxValue "4096"
	// MNetworkEncodeFlags
	// MNetworkChangeCallback "CNetworkVelocityVector"
	CNetworkedQuantizedFloat m_vecZ; // 0x20
};

// Aligment: 6
// Size: 20
struct hudtextparms_t
{
public:
	Color color1; // 0x0
	Color color2; // 0x4
	uint8_t effect; // 0x8
	uint8_t channel; // 0x9
	float x; // 0xc
	float y; // 0x10
};

// Aligment: 0
// Size: 8
class IRagdoll
{
public:
// <no members described>
};

// Aligment: 3
// Size: 16
class sGlaiveDef
{
public:
	CDOTA_BaseNPC* pGlaive; // 0x0
	ParticleIndex_t nGlaiveFXIndex; // 0x8
	int32_t nGlaiveState; // 0xc
};

// Aligment: 4
// Size: 24
struct CavernCrawlPath_t
{
public:
	CavernCrawlRoomID_t m_nStartingRoomID; // 0x0
	CavernCrawlRoomID_t m_nEndingRoomID; // 0x1
	char* m_pCSSClass; // 0x8
	bool m_bCannotBeSwapped; // 0x10
};

// Aligment: 1
// Size: 2
struct attrib_definition_index_t
{
public:
	uint16_t m_Value; // 0x0
};

// Aligment: 4
// Size: 32
class CDOTA_Tree : public CObstructionObject
{
public:
	bool m_bStanding; // 0x18
	bool m_bSpecialConsume; // 0x19
	bool m_bSpecialPathing; // 0x1a
	uint32_t m_unOccluderID; // 0x1c
public:
	static int32_t &Get_s_nNextChangeToken() { return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CDOTA_Tree")->m_static_fiels[0]->m_instance); }
};

// Aligment: 0
// Size: 100
struct dynpitchvol_t : public dynpitchvol_base_t
{
public:
// <no members described>
};

// Aligment: 2
// Size: 184
class CNavVolumeBreadthFirstSearch : public CNavVolumeCalculatedVector, CNavVolume
{
public:
	Vector m_vStartPos; // 0xa0
	float m_flSearchDist; // 0xac
};

// Aligment: 0
// Size: 40
class CEntitySubclassVDataBase
{
public:
// <no members described>
};

// Aligment: 0
// Size: 32
class CJiggleBones
{
public:
// <no members described>
};

// Aligment: 1
// Size: 4
struct ModelConfigHandle_t
{
public:
	uint32_t m_Value; // 0x0
};

// Aligment: 5
// Size: 576
class CResponseQueue::CDeferredResponse
{
public:
	CResponseCriteriaSet m_contexts; // 0x10
	float m_fDispatchTime; // 0x40
	CHandle< CBaseEntity > m_hIssuer; // 0x44
	CRR_Response m_response; // 0x50
	bool m_bResponseValid; // 0x238
};

// Aligment: 3
// Size: 32
class CLocalNPCObstructionsCache
{
public:
	GameTick_t m_nLastUpdatedTick; // 0x0
	float m_flRadius; // 0x4
	CUtlVector< CHandle< CDOTA_BaseNPC > > m_hCachedNPCs; // 0x8
};

// Aligment: 20
// Size: 92
struct WheeledPhysicsVehicleControlsData_t
{
public:
	// MPropertyDescription "Rate at which the throttle input increases when the user is pressing a throttle button"
	float m_flThrottleRiseRate; // 0x0
	// MPropertyDescription "Rate at which the throttle input decreases when the user is not pressing a throttle button"
	float m_flThrottleFallRate; // 0x4
	// MPropertyDescription "Rate at which the brake input increases when the user is pressing the brake button"
	float m_flBrakeRiseRate; // 0x8
	// MPropertyDescription "Rate at which the brake input decreases when the user is not pressing the brake button"
	float m_flBrakeFallRate; // 0xc
	// MPropertyDescription "The in-game throttle / brake input must reach this value before we start to accelerate / brake"
	float m_flThrottleBrakeDeadzone; // 0x10
	// MPropertyDescription "Rate at which the handbrake input increases when the user is pressing the brake button"
	float m_flHandbrakeRiseRate; // 0x14
	// MPropertyDescription "Rate at which the handbrake input decreases when the user is not pressing the brake button"
	float m_flHandbrakeFallRate; // 0x18
	// MPropertyDescription "Rate at which the steering input increases when the user is pressing the left or right steering button"
	float m_flSteeringRiseRate; // 0x1c
	// MPropertyDescription "Rate at which the steering input decreases when the user is not pressing a steering button"
	float m_flSteeringFallRate; // 0x20
	// MPropertyDescription "The in-game steering input must reach this value before we start to steer. (Helps the user drive straight forward/backward on a gamepad) "
	float m_flSteeringDeadzone; // 0x24
	// MPropertyDescription "If we're below this speed and we're holding down the brake button, we'll switch to reverse"
	float m_flMaxSpeedToEnterReverseKPH; // 0x28
	// MPropertyDescription "If we're below this speed and not pushing any controls, we'll automatically apply the brake"
	float m_flMaxSpeedToAutoBrakeKPH; // 0x2c
	// MPropertyDescription "Max steering range at low speed"
	float m_flSteeringRangeAtLowSpeed; // 0x30
	// MPropertyDescription "Max steering range at high speed"
	float m_flSteeringRangeAtHighSpeed; // 0x34
	// MPropertyDescription "Fraction of top speed below which we use the full steering range (between the low and high speed thresholds, we blend the range)"
	float m_flLowSpeedFractionForSteeringRangeScale; // 0x38
	// MPropertyDescription "Fraction of top speed above which we use the limited steering range (between the low and high speed thresholds, we blend the range) "
	float m_flHighSpeedFractionForSteeringRangeScale; // 0x3c
	// MPropertyDescription "Scale on the steering rise and fall rates at high speeds"
	float m_flSteeringRateScaleAtHighSpeed; // 0x40
	// MPropertyDescription "Fraction of top speed below which we use the base steering rise/fall rates (between the low and high speed thresholds, we blend the rates)"
	float m_flLowSpeedFractionForSteeringRateScale; // 0x44
	// MPropertyDescription "Fraction of top speed above which we use the scaled steering rise/fall rates (between the low and high speed thresholds, we blend the rates) "
	float m_flHighSpeedFractionForSteeringRateScale; // 0x48
	WheeledPhysicsVehicleLookSteeringData_t m_LookSteering; // 0x4c
};

// Aligment: 12
// Size: 528
class SPingWheelMessageDefinition
{
public:
	// MPropertyDescription "unique integer ID of this ping wheel message"
	// MVDataUniqueMonotonicInt
	// MPropertyAttributeEditor "locked_int()"
	PingWheelMessageID_t nID; // 0xc
	// MPropertyDescription "localization string ID for name of ping"
	CUtlString sLocName; // 0x10
	// MPropertyDescription "Particle system of ping effect"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > sParticle; // 0x18
	// MPropertyDescription "Particle system of ping effect when targetting an npc (optional)"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > sParticleTarget; // 0xf8
	// MPropertyDescription "Color of ping effect. Leave default to use pinging player color."
	// MPropertyColorPlusAlpha
	Color color; // 0x1d8
	// MPropertyDescription "Image shown while customizing ping wheel"
	CPanoramaImageName sImage; // 0x1e0
	// MPropertyDescription "Sound played when pinging"
	// MPropertyCustomFGDType
	CUtlString sSound; // 0x1f0
	// MPropertyDescription "localization string ID for chat message when pinging"
	CUtlString sChat; // 0x1f8
	// MPropertyDescription "Multiplier to apply to 3 second base duration (dota_minimap_ping_duration)"
	float fDurationMultiplier; // 0x200
	// MPropertyDescription "Event for tracking expiration. See EEvent enum"
	EEvent eUnlockEvent; // 0x204
	// MPropertyDescription "Action of the unlock event which awards this ping wheel"
	uint32_t nUnlockEventActionID; // 0x208
	// MPropertyDescription "ID of icon to show on minimap. See scripts/minimap_icons.txt"
	int32_t nMinimapIcon; // 0x20c
};

// Aligment: 0
// Size: 152
class CNavVolumeCalculatedVector : public CNavVolume
{
public:
// <no members described>
};

// Aligment: 1
// Size: 152
class CSingleplayRules : public CGameRules
{
public:
	bool m_bSinglePlayerGameEnding; // 0x90
};

// Aligment: 3
// Size: 24
struct TrophyLevel_t
{
public:
	// MPropertyDescription "the score at which this level is unlocked"
	uint32_t m_nScore; // 0x0
	// MPropertyDescription "points to award for achieving this trophy level"
	int32_t m_nBadgePoints; // 0x4
	// MPropertyDescription "the image used to represent this level"
	CPanoramaImageName m_sImage; // 0x8
};

// Aligment: 3
// Size: 32
class sGlaiveInfo
{
public:
	int32_t iAttackIndex; // 0x0
	int32_t iBounceCount; // 0x4
	CUtlVector< CHandle< CBaseEntity > > hAlreadyHitList; // 0x8
};

// Aligment: 53
// Size: 224
class CDOTA_AttackRecord
{
public:
	CHandle< CBaseEntity > m_hSource; // 0x8
	CHandle< CBaseEntity > m_hInflictor; // 0xc
	CHandle< CBaseEntity > m_hTarget; // 0x10
	CHandle< CBaseEntity > m_hProjectileSource; // 0x14
	float m_flDamage; // 0x18
	float m_flOriginalDamage; // 0x1c
	float m_flDamagePhysical; // 0x20
	float m_flDamagePhysical_IllusionDisplay; // 0x24
	float m_flDamageMagical; // 0x28
	float m_flDamageComposite; // 0x2c
	float m_flDamagePure; // 0x30
	int16_t m_iRecord; // 0x34
	int32_t m_iDamageCategory; // 0x38
	int32_t m_iFailType; // 0x3c
	int32_t m_iDamageType; // 0x40
	int32_t m_iFlags; // 0x44
	int32_t m_animation; // 0x48
	CDOTA_Orb* m_pOrb; // 0x50
	CDOTA_Orb* m_pOrb2; // 0x58
	bitfield:1 m_bAttack; // 0x0
	bitfield:1 m_bRangedAttack; // 0x0
	bitfield:1 m_bDirectionalRangedAttack; // 0x0
	bitfield:1 m_bSkipRangeCheck; // 0x0
	bitfield:1 m_bFakeAttack; // 0x0
	bitfield:1 m_bNeverMiss; // 0x0
	bitfield:1 m_bLethalAttack; // 0x0
	bitfield:1 m_bTriggeredAttack; // 0x0
	bitfield:1 m_bNoCooldown; // 0x0
	bitfield:1 m_bProcessProcs; // 0x0
	bitfield:1 m_bUseProjectile; // 0x0
	bitfield:1 m_bUseCastAttackOrb; // 0x0
	bitfield:1 m_bAutoCastAttack; // 0x0
	bitfield:1 m_bIgnoreBaseArmor; // 0x0
	bitfield:1 m_bIgnoreObstructions; // 0x0
	bitfield:1 m_bSuppressAttackSounds; // 0x0
	bitfield:1 m_bSuppressDamageSounds; // 0x0
	bitfield:1 m_bSuppressDamageEffects; // 0x0
	int32_t m_nBashSource; // 0x64
	float m_flAttackHeight; // 0x68
	float m_flCombatLogCreditFactor; // 0x6c
	float m_flCriticalBonus; // 0x70
	float m_flCriticalDamage; // 0x74
	float m_flCriticalDisplay; // 0x78
	float m_flDeadlyBlowBonus; // 0x7c
	float m_flDeadlyBlowDamage; // 0x80
	float m_flDeadlyBlowDisplay; // 0x84
	int32_t m_iProjectileSpeed; // 0x88
	Vector m_vForceDirectionOverride; // 0x8c
	Vector m_vTargetLoc; // 0x98
	Vector m_vBlockLoc; // 0xa4
	CUtlSymbolLarge m_iszAutoAttackRangedParticle; // 0xb0
	ParticleIndex_t m_iCustomFXIndex; // 0xc0
	DOTAProjectileAttachment_t m_iCustomProjectileAttachment; // 0xc4
};

// Aligment: 33
// Size: 116
struct TimedHeroStats_t
{
public:
	uint32_t m_nTime; // 0x0
	uint32_t m_nNetWorth; // 0x4
	uint16_t m_nXP; // 0x8
	uint16_t m_nKills; // 0xa
	uint16_t m_nDeaths; // 0xc
	uint16_t m_nAssists; // 0xe
	uint16_t m_nLastHits; // 0x10
	uint16_t m_nDenies; // 0x12
	uint16_t m_nObserverWardsDestroyed; // 0x14
	uint16_t m_nBountyRuneGold; // 0x16
	uint32_t m_nRangeCreepUpgradeGold; // 0x18
	uint32_t m_nReliableGoldEarned; // 0x1c
	uint32_t m_nGoldLossPrevented; // 0x20
	uint32_t m_nHeroKillGold; // 0x24
	uint32_t m_nCreepKillGold; // 0x28
	uint32_t m_nBuildingGold; // 0x2c
	uint32_t m_nOtherGold; // 0x30
	uint32_t m_nComebackGold; // 0x34
	uint32_t m_nExperimentalGold; // 0x38
	uint32_t m_nExperimental2Gold; // 0x3c
	uint32_t m_nTPScrollsPurchased; // 0x40
	uint32_t m_nCreepDenyGold; // 0x44
	uint32_t m_nNeutralGold; // 0x48
	uint32_t m_nCourierGold; // 0x4c
	uint32_t m_nRoshanGold; // 0x50
	uint32_t m_nIncomeGold; // 0x54
	uint32_t m_nCustomStats; // 0x58
	uint32_t m_unItemValue; // 0x5c
	uint32_t m_unSupportGoldSpent; // 0x60
	uint32_t m_unWardsPlaced; // 0x64
	uint32_t m_unCampsStacked; // 0x68
	uint32_t m_unTripleKills; // 0x6c
	uint32_t m_unRampages; // 0x70
};

// Aligment: 1
// Size: 32
class CInButtonState
{
public:
	uint64[3] m_pButtonStates; // 0x8
};

// Aligment: 5
// Size: 24
struct CreatureStateData_t
{
public:
	char* pszName; // 0x0
	float flAggression; // 0x8
	float flAvoidance; // 0xc
	float flSupport; // 0x10
	float flRoamDistance; // 0x14
};

// Aligment: 4
// Size: 24
class CDOTA_ReconnectInfo
{
public:
	uint64_t m_playerSteamId; // 0x0
	int32_t m_iTeam; // 0x8
	CEntityIndex m_iUnitControlled; // 0xc
	bool m_bWantsRandomHero; // 0x10
};

// Aligment: 1
// Size: 32
class CTakeDamageSummaryScopeGuard
{
public:
	CUtlVector< SummaryTakeDamageInfo_t* > m_vecSummaries; // 0x8
public:
	static SummaryTakeDamageInfo_t &Get_EmptySummary() { return *reinterpret_cast<SummaryTakeDamageInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CTakeDamageSummaryScopeGuard")->m_static_fiels[0]->m_instance); }
};

// Aligment: 5
// Size: 48
struct BlessingPath_t
{
public:
	// MPropertyAttributeEditor "VDataNodePicker(//m_mapBlessings/*)"
	CUtlString Node1; // 0x8
	// MPropertyAttributeEditor "VDataNodePicker(//m_mapBlessings/*)"
	CUtlString Node2; // 0x18
	// MPropertyDescription "This edge only allows unlocks in the direction of the arrow."
	bool bOneWay; // 0x24
	// MPropertyAttributeRange "-1 1"
	// MPropertyDescription "0 = line, + = curve to the 'right' from node 1 to node 2, - = curve left"
	float flCircleInvRadius; // 0x28
	// MPropertyDescription "path particle color"
	Color color; // 0x2c
};

// Aligment: 1
// Size: 112
class CAI_ExpresserWithFollowup : public CAI_Expresser
{
public:
	ResponseFollowup* m_pPostponedFollowup; // 0x60
};

// Aligment: 1
// Size: 4
struct ParticleIndex_t
{
public:
	int32_t m_Value; // 0x0
};

// Aligment: 6
// Size: 24
struct CavernCrawlRoom_t
{
public:
	Vector2D m_vecPosition; // 0x0
	char* m_pCSSClass; // 0x8
	float m_flRoomRadius; // 0x10
	bool m_bAlwaysVisible; // 0x14
	bool m_bStartingRoom; // 0x15
	bool m_bFinalTreasure; // 0x16
};

// Aligment: 3
// Size: 32
class sAghsfortWardBounceInfo
{
public:
	int32_t iAttackIndex; // 0x0
	int32_t iBounceCount; // 0x4
	CUtlVector< CHandle< CBaseEntity > > hAlreadyHitList; // 0x8
};

// Aligment: 0
// Size: 40
class IIntention : public INextBotComponent, INextBotEventResponder
{
public:
// <no members described>
};

// Aligment: 0
// Size: 112
class CNavVolume
{
public:
// <no members described>
};

// Aligment: 12
// Size: 56
struct CavernCrawlReward_t
{
public:
	uint32_t m_nActionID; // 0x0
	CUtlString m_rewardName; // 0x8
	CavernCrawlItemType_t m_nItemType; // 0x10
	CUtlString m_locString; // 0x18
	CUtlString m_tooltipString; // 0x20
	CUtlString m_image; // 0x28
	CavernCrawlRewardType_t m_nStyleUnlockRewardType; // 0x30
	uint8_t m_nPriority; // 0x31
	style_index_t m_nBundleItemDefStyle; // 0x32
	bool m_bImageIsBundleItemDef; // 0x33
	bool m_bCannotBeReplacedWithUltraRareReward; // 0x34
	bool m_bIsUltraRareReward; // 0x35
};

// Aligment: 1
// Size: 120
class CMultiplayer_Expresser : public CAI_ExpresserWithFollowup, CAI_Expresser
{
public:
	bool m_bAllowMultipleScenes; // 0x70
};

// Aligment: 0
// Size: 8
class INextBotEventResponder
{
public:
// <no members described>
};

// Aligment: 0
// Size: 8
class IEconItemInterface
{
public:
// <no members described>
};

// Aligment: 1
// Size: 4
struct FantasyPeriod_t
{
public:
	uint32_t m_Value; // 0x0
};

// Aligment: 5
// Size: 32
class sSpiritInfo
{
public:
	Vector vTargetLoc; // 0x4
	CHandle< CBaseEntity > hTarget; // 0x10
	bool bHit; // 0x14
	int32_t iHealAmount; // 0x18
	ParticleIndex_t nFXAmbientIndex; // 0x1c
};

// Aligment: 5
// Size: 20
struct WheeledPhysicsVehicleDrivetrainData_t
{
public:
	// MPropertyDescription "Scale on the torque at low wheelspeeds, to help the wheels get unstuck from obstacles"
	float m_flDriveTorqueScaleAtLowSpinAngVel; // 0x0
	// MPropertyDescription "Spin angular velocity above which DriveTorqueScaleAtLowSpinAngVel is fully disabled"
	float m_flLowSpinAngVelThreshold; // 0x4
	// MPropertyDescription "Drivetrain-limited top speed in kilometers per hour (not incorporating drag or other losses)"
	float m_flDrivetrainLimitedTopSpeedKPH; // 0x8
	// MPropertyDescription "Drivetrain-limited top speed in kilometers per hour when the car is in reverse (not incorporating drag or other losses)"
	float m_flDrivetrainLimitedTopSpeedReverseKPH; // 0xc
	// MPropertyDescription "Scale on the strength of the traction contol effect (0 to 1)"
	float m_flTractionControlScale; // 0x10
};

// Aligment: 1
// Size: 1
struct HeroPersona_t
{
public:
	int8_t m_Value; // 0x0
};

// Aligment: 3
// Size: 32
class sAghsFortGlaiveInfo
{
public:
	int32_t iAttackIndex; // 0x0
	int32_t iBounceCount; // 0x4
	CUtlVector< CHandle< CBaseEntity > > hAlreadyHitList; // 0x8
};

// Aligment: 2
// Size: 24
class Extent
{
public:
	Vector lo; // 0x0
	Vector hi; // 0xc
};

// Aligment: 20
// Size: 44
struct CreatureAbilityData_t
{
public:
	CHandle< CBaseEntity > hAbility; // 0x0
	bool bIsDamage; // 0x4
	bool bIsDebuff; // 0x5
	bool bIsStun; // 0x6
	bool bIsAOE; // 0x7
	bool bIsLinear; // 0x8
	bool bUseOnCreeps; // 0x9
	bool bIsHeal; // 0xa
	bool bIsBuff; // 0xb
	bool bUseSelfishly; // 0xc
	bool bCanHelpOthersEscape; // 0xd
	bool bUseOnTrees; // 0xe
	bool bUseOnStrongestAlly; // 0xf
	int32_t nUseAtHealthPercent; // 0x10
	int32_t nRadius; // 0x14
	int32_t nMinimumTargets; // 0x18
	int32_t nMaximumTargets; // 0x1c
	int32_t nMinimumHP; // 0x20
	int32_t nMinimumRange; // 0x24
	CreatureAbilityType nAbilityType; // 0x28
};

// Aligment: 2
// Size: 16
class sRevenantDef
{
public:
	CDOTA_BaseNPC* pRevenant; // 0x0
	ParticleIndex_t nRevenantFXIndex; // 0x8
};

// Aligment: 2
// Size: 8
struct WeightedSuggestion_t
{
public:
	// MNetworkEnable
	int32_t nSuggestion; // 0x0
	// MNetworkEnable
	float fWeight; // 0x4
};

// Aligment: 1
// Size: 4
struct BlessingID_t
{
public:
	int32_t m_Value; // 0x0
};

// Aligment: 2
// Size: 40
class CDOTAMusicProbabilityEntry
{
public:
	CUtlVector< float32 > m_flProbabilityElements; // 0x8
	float m_flProbability; // 0x20
};

// Aligment: 1
// Size: 48
class CDOTA_ArcanaDataEntity_Base
{
public:
	// MNetworkDisable
	// MNetworkChangeAccessorFieldPathIndex
	CNetworkVarChainer __m_pChainEntity; // 0x8
};

// Aligment: 1
// Size: 4
struct ChatWheelMessageID_t
{
public:
	uint32_t m_Value; // 0x0
};

// Aligment: 2
// Size: 16
class CRandSimTimer : public CSimpleSimTimer
{
public:
	float m_minInterval; // 0x8
	float m_maxInterval; // 0xc
};

// Aligment: 19
// Size: 176
class CTakeDamageInfo
{
public:
	Vector m_vecDamageForce; // 0x8
	Vector m_vecDamagePosition; // 0x14
	Vector m_vecReportedPosition; // 0x20
	Vector m_vecDamageDirection; // 0x2c
	CHandle< CBaseEntity > m_hInflictor; // 0x38
	CHandle< CBaseEntity > m_hAttacker; // 0x3c
	CHandle< CBaseEntity > m_hAbility; // 0x40
	float m_flDamage; // 0x44
	int32_t m_bitsDamageType; // 0x48
	int32_t m_iDamageCustom; // 0x4c
	AmmoIndex_t m_iAmmoType; // 0x50
	float m_flOriginalDamage; // 0x60
	TakeDamageFlags_t m_nDamageFlags; // 0x70
	int32_t m_bitsDotaDamageType; // 0x74
	int32_t m_nDotaDamageCategory; // 0x78
	float m_flCombatLogCreditFactor; // 0x7c
	int16_t m_iRecord; // 0x80
	HSCRIPT m_hScriptInstance; // 0x88
	bool m_bInTakeDamageFlow; // 0xa8
public:
	static CTakeDamageInfo &Get_EmptyInfo() { return *reinterpret_cast<CTakeDamageInfo*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CTakeDamageInfo")->m_static_fiels[0]->m_instance); }
};

// Aligment: 4
// Size: 64
class CConstantForceController
{
public:
	Vector m_linear; // 0xc
	RotationVector m_angular; // 0x18
	Vector m_linearSave; // 0x24
	RotationVector m_angularSave; // 0x30
};

// Aligment: 10
// Size: 488
class CRR_Response
{
public:
	uint8_t m_Type; // 0x0
	char[192] m_szResponseName; // 0x1
	char[128] m_szMatchingRule; // 0xc1
	ResponseParams m_Params; // 0x148
	float m_fMatchScore; // 0x168
	char* m_szSpeakerContext; // 0x170
	char* m_szWorldContext; // 0x178
	ResponseFollowup m_Followup; // 0x180
	CUtlVector< CUtlSymbol > m_pchCriteriaNames; // 0x1b8
	CUtlVector< char* > m_pchCriteriaValues; // 0x1d0
};

// Aligment: 14
// Size: 32
class CDotaEntityFilterFlags
{
public:
	bool m_bInvertFilter; // 0x0
	bool m_bEveryUnit; // 0x1
	int32_t m_nTeamNumber; // 0x4
	CUtlSymbolLarge m_UnitName; // 0x8
	bool m_bIsAncient; // 0x10
	bool m_bIsNeutralUnitType; // 0x11
	bool m_bIsSummoned; // 0x12
	bool m_bIsHero; // 0x13
	bool m_bIsRealHero; // 0x14
	bool m_bIsTower; // 0x15
	bool m_bIsPhantom; // 0x16
	bool m_bIsIllusion; // 0x17
	bool m_bIsCreep; // 0x18
	bool m_bIsLaneCreep; // 0x19
};

// Aligment: 4
// Size: 24
class sPendingTreeModelChange
{
public:
	int32_t nTeam; // 0x0
	int32_t nIndex; // 0x4
	CUtlString strModel; // 0x8
	int32_t nChangeToken; // 0x10
};

// Aligment: 4
// Size: 200
struct SummaryTakeDamageInfo_t
{
public:
	int32_t nSummarisedCount; // 0x0
	CTakeDamageInfo info; // 0x8
	CTakeDamageResult result; // 0xb8
	CHandle< CBaseEntity > hTarget; // 0xc0
};

// Aligment: 1
// Size: 1
struct CavernCrawlMapVariant_t
{
public:
	uint8_t m_Value; // 0x0
};

// Aligment: 1
// Size: 12
class CSimTimer : public CSimpleSimTimer
{
public:
	float m_interval; // 0x8
};

// Aligment: 14
// Size: 104
class CDOTATrophyDefinition
{
public:
	// MPropertyDescription "unique integer ID of this trophy"
	// MVDataUniqueMonotonicInt
	// MPropertyAttributeEditor "locked_int()"
	uint16_t m_nID; // 0x8
	// MPropertyDescription "is this trophy still obtainable? This way we can have different presentations based on past and current trophies"
	bool m_bObtainable; // 0xa
	// MPropertyDescription "should we render a progrss bar of progress towards the next tier"
	bool m_bShowProgressBar; // 0xb
	// MPropertyDescription "should we show the popup when you earn the first tier of this trophy"
	bool m_bShowInitialEarn; // 0xc
	// MPropertyDescription "the date this trophy was introduced (YYYY-MM-DD or YYYY-MM-DD hh:mm:ss)"
	CUtlString m_sCreationDate; // 0x10
	// MPropertyDescription "how many badge points to grant for each increment"
	// MPropertyHideField
	uint32_t m_nBadgePointsPerUnit; // 0x1c
	// MPropertyDescription "how many units need to be leveled up in order to get the badge point grant"
	// MPropertyHideField
	uint32_t m_nUnitsPerBadgePoint; // 0x20
	// MPropertyDescription "the cutoff for where badge points stop granting (0 is disable this limit)"
	// MPropertyHideField
	uint32_t m_nMaxUnitsForBadgePoints; // 0x24
	// MPropertyDescription "higher sort tiers come first in presentation"
	// MPropertyHideField
	uint32_t m_nSortTier; // 0x28
	// MPropertyDescription "localization string ID to use for the user facing category trophy belongs to"
	CUtlString m_sLocCategory; // 0x30
	// MPropertyDescription "localization string ID to use for the user facing name of this trophy"
	CUtlString m_sLocName; // 0x38
	// MPropertyDescription "localization string ID to use for the user facing descriptiontrophy"
	CUtlString m_sLocDescription; // 0x40
	// MPropertyDescription "pluralizable localization string ID to use for the user facing unit to display on the trophy tooltip (e.g. 1 Challenge Completed / 3 Challenges Completed)"
	CUtlString m_sLocUnitsPluralizable; // 0x48
	// MPropertyAutoExpandSelf
	CUtlVector< TrophyLevel_t > m_vecLevels; // 0x50
};

// Aligment: 4
// Size: 32
class CMotorController
{
public:
	float m_speed; // 0x8
	float m_maxTorque; // 0xc
	Vector m_axis; // 0x10
	float m_inertiaFactor; // 0x1c
};

// Aligment: 3
// Size: 16
class sSpiritDef
{
public:
	CDOTA_BaseNPC* pSpirit; // 0x0
	ParticleIndex_t nSpiritFXIndex; // 0x8
	int32_t nSpiritState; // 0xc
};

// Aligment: 1
// Size: 1
struct item_steam_cache_version_t
{
public:
	uint8_t m_Value; // 0x0
};

// Aligment: 23
// Size: 216
struct WheeledPhysicsVehiclePhysicsData_t
{
public:
	CUtlString m_sChassisBodyName; // 0x0
	// MPropertyDescription "How is the vehicle oriented relative to its root bone in ModelDoc?"
	WheeledPhysicsVehicleChassisFrame_t m_nChassisFrame; // 0x8
	CUtlVector< WheeledPhysicsVehicleWheelData_t > m_vecWheels; // 0x10
	CUtlVector< WheeledPhysicsVehicleAxleData_t > m_vecAxles; // 0x28
	WheeledPhysicsVehicleDrivetrainData_t m_Drivetrain; // 0x40
	WheeledPhysicsVehicleAeroData_t m_Aero; // 0x54
	// MPropertyDescription "Wheel angular velocity at which we start blending between stationary (Coulomb) friction and rolling tire friction"
	float m_flRollingFrictionBlendMinWheelSpinAngVel; // 0x94
	// MPropertyDescription "Wheel angular velocity at which rolling tire friction fully blended in"
	float m_flRollingFrictionBlendMaxWheelSpinAngVel; // 0x98
	// MPropertyDescription "Angle (from horizontal) at which a surface is considered "steep" and uses different tire behavior to make it harder to drive on"
	float m_flSteepSurfaceAngle; // 0x9c
	// MPropertyDescription "Friction scale to use on a steep surface"
	float m_flSteepSurfaceFrictionScale; // 0xa0
	float m_flShallowSurfaceLongitudinalCollisionScale; // 0xa4
	float m_flShallowSurfaceLateralCollisionScale; // 0xa8
	float m_flSteepSurfaceLongitudinalCollisionScale; // 0xac
	float m_flSteepSurfaceLateralCollisionScale; // 0xb0
	// MPropertyDescription "The maximum angle (in degrees) we allow the player to steer"
	float m_flMaxSteeringAngle; // 0xb4
	// MPropertyDescription "Converts upward contact force on the vehicle chassis (which reduces available tire grip) into an artificial thrust force to help the vehicle get unstuck when high-centered."
	float m_flHighCenteredThrustScale; // 0xb8
	// MPropertyDescription "Yaw damping applied to help straighten the vehicle out when steering straight"
	float m_flStraighteningYawDampingScale; // 0xbc
	// MPropertyDescription "Steering input at which the straightening yaw damping is fully faded out"
	float m_flMaxSteeringInputForStraighteningYawDamping; // 0xc0
	// MPropertyDescription "Should gameplay code manually control the vehicle's roll angle?"
	bool m_bStabilizeRoll; // 0xc4
	// MPropertyDescription "Should gameplay code manually control the vehicle's pitch angle?"
	bool m_bStabilizePitch; // 0xc5
	// MPropertyDescription "Scale on the gravity force applied to the vehicle's bodies"
	float m_flGravityScale; // 0xc8
	// MPropertyDescription "Angular damping applied to the wheels when the vehicle is unmanned. We want this to be nonzero so the wheels don't spin forever when the vehicle is flipped over"
	float m_flUnmannedWheelAngularDamping; // 0xcc
	// MPropertyDescription "Scale on the force of buoyancy and water drag"
	float m_flBuoyancyFactor; // 0xd0
};

// Aligment: 9
// Size: 9
struct HullFlags_t
{
public:
	bool m_bHull_Human; // 0x0
	bool m_bHull_SmallCentered; // 0x1
	bool m_bHull_WideHuman; // 0x2
	bool m_bHull_Tiny; // 0x3
	bool m_bHull_Medium; // 0x4
	bool m_bHull_TinyCentered; // 0x5
	bool m_bHull_Large; // 0x6
	bool m_bHull_LargeCentered; // 0x7
	bool m_bHull_MediumTall; // 0x8
};

// Aligment: 4
// Size: 56
struct ragdoll_t
{
public:
	CUtlVector< ragdollelement_t > list; // 0x0
	CUtlVector< int32 > boneIndex; // 0x18
	bool allowStretch; // 0x30
	bool unused; // 0x31
};

// Aligment: 2
// Size: 16
class sAbilityHistory
{
public:
	GameTime_t flAppliedTime; // 0x0
	CDOTABaseAbility* pAbility; // 0x8
};

// Aligment: 0
// Size: 8
class IHasAttributes
{
public:
// <no members described>
};

// Aligment: 1
// Size: 2
struct LeagueNodeID_t
{
public:
	uint16_t m_Value; // 0x0
};

// Aligment: 5
// Size: 32
class CSmoothFunc
{
public:
	float m_flSmoothAmplitude; // 0x8
	float m_flSmoothBias; // 0xc
	float m_flSmoothDuration; // 0x10
	float m_flSmoothRemainingTime; // 0x14
	int32_t m_nSmoothDir; // 0x18
};

// Aligment: 2
// Size: 40
class CCopyRecipientFilter
{
public:
	int32_t m_Flags; // 0x8
	CUtlVector< CPlayerSlot > m_Recipients; // 0x10
};

// Aligment: 2
// Size: 2
struct DOTACavernCrawlMapResult_t
{
public:
	CavernCrawlPathID_t m_nCompletedPathID; // 0x0
	CavernCrawlRoomID_t m_nClaimedRoomID; // 0x1
};

// Aligment: 1
// Size: 4
struct item_definition_index_t
{
public:
	uint32_t m_Value; // 0x0
};

// Aligment: 3
// Size: 32
struct locksound_t
{
public:
	CUtlSymbolLarge sLockedSound; // 0x8
	CUtlSymbolLarge sUnlockedSound; // 0x10
	GameTime_t flwaitSound; // 0x18
};

// Aligment: 2
// Size: 8
struct PurchasedItem_t
{
public:
	int32_t nItemID; // 0x0
	float flPurchaseTime; // 0x4
};

// Aligment: 84
// Size: 552
struct DOTAAbilityDefinition_t
{
public:
	char* m_pszAbilityName; // 0x0
	char* m_pszTextureName; // 0x8
	char* m_pszSharedCooldownName; // 0x10
	char* m_pszKeyOverride; // 0x18
	char* m_pszItemRecipeName; // 0x20
	char* m_pszLinkedAbility; // 0x28
	int32_t m_castActivity; // 0x30
	DotaGestureSlot_t m_castActivityGestureSlot; // 0x34
	KeyValues* m_pKVData; // 0x38
	AbilityID_t m_iAbilityID; // 0x40
	int32_t m_iAbilityType; // 0x44
	uint64_t m_iAbilityBehavior; // 0x48
	int32_t m_iAbilityTargetTeam; // 0x50
	int32_t m_iAbilityTargetType; // 0x54
	int32_t m_iAbilityTargetFlags; // 0x58
	int32_t m_iAbilityDamageType; // 0x5c
	int32_t m_iAbilityImmunityType; // 0x60
	int32_t m_iAbilityDispellableType; // 0x64
	int32_t m_iFightRecapLevel; // 0x68
	item_definition_index_t m_iAssociatedConsumableItemDef; // 0x6c
	uint32_t m_nRequiredEffectsMask; // 0x70
	int32_t m_iAssociatedEventID; // 0x74
	int32_t m_iMaxLevel; // 0x78
	int32_t m_iItemBaseLevel; // 0x7c
	float m_flItemLevelByGameTime; // 0x80
	int32_t m_iItemCost; // 0x84
	int32_t m_iItemInitialCharges; // 0x88
	int32_t m_iItemNeutralTierIndex; // 0x8c
	int32_t m_iItemStockMax; // 0x90
	float m_fItemStockTime; // 0x94
	int32* m_pItemShopTagKeys; // 0x98
	AbilityID_t m_nRecipeResultAbilityID; // 0xa0
	CUtlVector< AbilityID_t > m_vecItemCombinesInto; // 0xa8
	CUtlVector< ItemRecipe_t > m_vecItemRecipes; // 0xc0
	int32_t m_nUpgradeGoal; // 0xd8
	ItemQuality_t m_ItemQuality; // 0xdc
	float m_flModifierValue; // 0xe0
	float m_flModifierValueBonus; // 0xe4
	CUtlVector< CUtlString > m_InvalidHeroes; // 0xe8
	bool m_bHasScepterUpgrade; // 0x1b4
	bool m_bHasShardUpgrade; // 0x1b5
	bool m_bSharedWithTeammates; // 0x1b6
	int32_t m_nCastRangeBuffer; // 0x1b8
	int32_t m_nSpecialAbilities; // 0x1bc
	DOTASpecialAbility_t* m_pSpecialAbilities; // 0x1c0
	CUtlVector< DOTAOutgoingBonus_t > m_OutgoingBonuses; // 0x1c8
	char* m_pModelName; // 0x1e0
	char* m_pModelAlternateName; // 0x1e8
	char* m_pEffectName; // 0x1f0
	char* m_pPingOverrideText; // 0x1f8
	char* m_pszRequiredCustomShopName; // 0x200
	char* m_pszLinkedScepterAbility; // 0x208
	char* m_pszLinkedShardAbility; // 0x210
	int32_t m_nKillToastOverride; // 0x218
	int32_t m_iLevelsBetweenUpgrades; // 0x21c
	int32_t m_iRequiredLevel; // 0x220
	bitfield:1 m_bIsItem; // 0x0
	bitfield:1 m_bItemIsRecipe; // 0x0
	bitfield:1 m_bItemIsRecipeGenerated; // 0x0
	bitfield:1 m_bItemAvailableAtSecretShop; // 0x0
	bitfield:1 m_bItemAvailableAtGlobalShop; // 0x0
	bitfield:1 m_bItemAvailableAtSideShop; // 0x0
	bitfield:1 m_bItemAvailableAtCustomShop; // 0x0
	bitfield:1 m_bItemIsPureSupport; // 0x0
	bitfield:1 m_bItemIsPurchasable; // 0x0
	bitfield:1 m_bItemIsUpgradeable; // 0x0
	bitfield:1 m_bItemStackable; // 0x0
	bitfield:1 m_bDisplayAdditionalHeroes; // 0x0
	bitfield:1 m_bItemContributesToNetWorthWhenDropped; // 0x0
	bitfield:1 m_bOnCastbar; // 0x0
	bitfield:1 m_bOnLearnbar; // 0x0
	bitfield:1 m_bIsGrantedByScepter; // 0x0
	bitfield:1 m_bIsGrantedByShard; // 0x0
	bitfield:1 m_bIsCastableWhileHidden; // 0x0
	bitfield:1 m_bAnimationIgnoresModelScale; // 0x0
	bitfield:1 m_bIsPlayerSpecificCooldown; // 0x0
	bitfield:1 m_bIsAllowedInBackpack; // 0x0
	bitfield:1 m_bIsObsolete; // 0x0
	bitfield:1 m_bItemRequiresCustomShop; // 0x0
	bitfield:1 m_bShouldBeSuggested; // 0x0
	bitfield:1 m_bShouldBeInitiallySuggested; // 0x0
	bitfield:1 m_bHasCastAnimation; // 0x0
	bitfield:1 m_bItemHasPassive; // 0x0
	bitfield:1 m_bDisplayOverheadAlertOnReceived; // 0x0
};

// Aligment: 1
// Size: 1
struct style_index_t
{
public:
	uint8_t m_Value; // 0x0
};

// Aligment: 13
// Size: 144
class CSoundPatch
{
public:
	CSoundEnvelope m_pitch; // 0x8
	CSoundEnvelope m_volume; // 0x18
	float m_shutdownTime; // 0x30
	float m_flLastTime; // 0x34
	CUtlSymbolLarge m_iszSoundScriptName; // 0x38
	CHandle< CBaseEntity > m_hEnt; // 0x40
	CEntityIndex m_soundEntityIndex; // 0x44
	Vector m_soundOrigin; // 0x48
	int32_t m_isPlaying; // 0x54
	CCopyRecipientFilter m_Filter; // 0x58
	float m_flCloseCaptionDuration; // 0x80
	bool m_bUpdatedSoundOrigin; // 0x84
	CUtlSymbolLarge m_iszClassName; // 0x88
public:
	static int32_t &Get_g_SoundPatchCount() { return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CSoundPatch")->m_static_fiels[0]->m_instance); }
};

// Aligment: 3
// Size: 32
class sBounceInfo
{
public:
	int32_t iAttackIndex; // 0x0
	int32_t iBounceCount; // 0x4
	CUtlVector< CHandle< CBaseEntity > > hAlreadyHitList; // 0x8
};

// Aligment: 4
// Size: 24
class sLoadoutItem
{
public:
	CUtlSymbolLarge name; // 0x0
	int32_t iFlags; // 0x8
	AbilityID_t iAbilityID; // 0xc
	bool bPurchased; // 0x10
};

// Aligment: 6
// Size: 104
struct BaseVehicleAllowedPassenger_t
{
public:
	// MPropertyDescription "The subclass of the allowed passenger"
	CSubclassNameGeneric m_sAllowedSubclass; // 0x0
	// MPropertyDescription "The pawn subclass to create to control the vehicle (player passengers only)"
	CSubclassNameGeneric m_sPawnSubclassToCreate; // 0x10
	// MPropertyDescription "Attachment name to attached the spawned pawn subclass to"
	// MPropertyAttributeEditor "VDataModelAttachment( m_sModelName )"
	CUtlString m_sPawnAttachmentName; // 0x20
	// MPropertyFriendlyName "Vehicle Entry Animgraph Parameter"
	// MPropertyDescription "The animgraph parameter that is set on the vehicle to animate the passenger getting in."
	// MPropertyGroupName "Animation"
	// MPropertyAttributeEditor "VDataAnimGraphParam( m_sModelName )"
	CAnimGraphSymbolWithStorage m_sAnimgraphParamEnter; // 0x28
	// MPropertyFriendlyName "Vehicle Entry Animgraph Finish Tag"
	// MPropertyDescription "The animgraph status tag that will be set by the animgraph when it has finished performing the 'Entry Animgraph Parameter' step."
	// MPropertyGroupName "Animation"
	// MPropertyAttributeEditor "VDataAnimGraphTag( m_sModelName )"
	CUtlString m_sAnimgraphFinishTagEnter; // 0x48
	// MPropertyGroupName "Animation"
	CUtlVector< BaseVehiclePotentialExitAnim_t > m_vecExitAnimations; // 0x50
};

// Aligment: 17
// Size: 96
class CSceneEventInfo
{
public:
	int32_t m_iLayer; // 0x0
	int32_t m_iPriority; // 0x4
	HSequence m_hSequence; // 0x8
	float m_flWeight; // 0xc
	bool m_bIsMoving; // 0x10
	bool m_bHasArrived; // 0x11
	float m_flInitialYaw; // 0x14
	float m_flTargetYaw; // 0x18
	float m_flFacingYaw; // 0x1c
	int32_t m_nType; // 0x20
	GameTime_t m_flNext; // 0x24
	bool m_bIsGesture; // 0x28
	bool m_bShouldRemove; // 0x29
	CHandle< CBaseEntity > m_hTarget; // 0x54
	uint32_t m_nSceneEventId; // 0x58
	bool m_bClientSide; // 0x5c
	bool m_bStarted; // 0x5d
};

// Aligment: 1
// Size: 16
class CSkillFloat
{
public:
	float32[4] m_pValue; // 0x0
};

// Aligment: 1
// Size: 4
struct PeriodicResourceID_t
{
public:
	uint32_t m_Value; // 0x0
};

// Aligment: 3
// Size: 16
class sSharedCooldownInfo
{
public:
	CUtlString cooldownName; // 0x0
	float cooldownLength; // 0x8
	GameTime_t cooldownTime; // 0xc
};

// Aligment: 4
// Size: 32
struct thinkfunc_t
{
public:
	HSCRIPT m_hFn; // 0x8
	CUtlStringToken m_nContext; // 0x10
	GameTick_t m_nNextThinkTick; // 0x14
	GameTick_t m_nLastThinkTick; // 0x18
};

// Aligment: 1
// Size: 16
class CSkillInt
{
public:
	int32[4] m_pValue; // 0x0
};

// Aligment: 1
// Size: 1
struct CavernCrawlRewardType_t
{
public:
	uint8_t m_Value; // 0x0
};

// Aligment: 2
// Size: 144
class CGameRules
{
public:
	char[128] m_szQuestName; // 0x8
	int32_t m_nQuestPhase; // 0x88
};

// Aligment: 1
// Size: 16
struct magnetted_objects_t
{
public:
	CHandle< CBaseEntity > hEntity; // 0x8
};

// Aligment: 3
// Size: 40
class CNetworkOriginQuantizedVector
{
public:
	// MNetworkBitCount "19"
	// MNetworkMinValue "-16384"
	// MNetworkMaxValue "16384"
	// MNetworkEncodeFlags
	// MNetworkChangeCallback "CNetworkOriginQuantizedVector"
	CNetworkedQuantizedFloat m_vecX; // 0x10
	// MNetworkBitCount "19"
	// MNetworkMinValue "-16384"
	// MNetworkMaxValue "16384"
	// MNetworkEncodeFlags
	// MNetworkChangeCallback "CNetworkOriginQuantizedVector"
	CNetworkedQuantizedFloat m_vecY; // 0x18
	// MNetworkBitCount "19"
	// MNetworkMinValue "-16384"
	// MNetworkMaxValue "16384"
	// MNetworkEncodeFlags
	// MNetworkChangeCallback "CNetworkOriginQuantizedVector"
	CNetworkedQuantizedFloat m_vecZ; // 0x20
};

// Aligment: 5
// Size: 12
struct TimedTeamStats_t
{
public:
	uint32_t m_nTime; // 0x0
	uint16_t m_nEnemyTowerStatus; // 0x4
	uint16_t m_nEnemyBarracksStatus; // 0x6
	uint8_t m_nEnemyTowersKilled; // 0x8
	uint8_t m_nEnemyBarracksKilled; // 0x9
};

// Aligment: 2
// Size: 24
class CDOTA_ActionRunner
{
public:
	// MNetworkDisable
	CModifierParams* m_pEventContext; // 0x8
	// MNetworkDisable
	CDOTA_BaseNPC* m_pCaster; // 0x10
};

// Aligment: 17
// Size: 288
struct DOTASpecialAbility_t
{
public:
	char* m_pszName; // 0x0
	char* m_pszValue; // 0x8
	char* m_pszLevelKey; // 0x10
	char* m_pszSpecialBonusAbility; // 0x18
	char* m_pszSpecialBonusField; // 0x20
	char* m_pszSpecialBonusADLinkedAbilities; // 0x28
	int32_t m_nCount; // 0x30
	float32[20] m_Values; // 0x34
	int32_t m_nBonusesCount; // 0x84
	DOTASpecialAbilityBonus_t[4] m_Bonuses; // 0x88
	DOTALevelingAbilityBonus_t m_ScepterBonus; // 0xc8
	DOTALevelingAbilityBonus_t m_ShardBonus; // 0xf0
	int32_t m_nDamageTypeField; // 0x118
	bool m_bSpellDamageField; // 0x11c
	bool m_bScepterField; // 0x11d
	bool m_bShardField; // 0x11e
	EDOTASpecialBonusOperation m_eSpecialBonusOperation; // 0x11f
};

// Aligment: 1
// Size: 4
struct BlessingTypeID_t
{
public:
	int32_t m_Value; // 0x0
};

// Aligment: 7
// Size: 48
class CNetworkOriginCellCoordQuantizedVector
{
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnCellChanged"
	// MNetworkPriority "31"
	// MNetworkSerializer "cellx"
	uint16_t m_cellX; // 0x10
	// MNetworkEnable
	// MNetworkChangeCallback "OnCellChanged"
	// MNetworkPriority "31"
	// MNetworkSerializer "celly"
	uint16_t m_cellY; // 0x12
	// MNetworkEnable
	// MNetworkChangeCallback "OnCellChanged"
	// MNetworkPriority "31"
	// MNetworkSerializer "cellz"
	uint16_t m_cellZ; // 0x14
	// MNetworkEnable
	uint16_t m_nOutsideWorld; // 0x16
	// MNetworkBitCount "13"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "256"
	// MNetworkEncodeFlags
	// MNetworkChangeCallback "OnCellChanged"
	// MNetworkPriority "31"
	// MNetworkSerializer "posx"
	CNetworkedQuantizedFloat m_vecX; // 0x18
	// MNetworkBitCount "13"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "256"
	// MNetworkEncodeFlags
	// MNetworkChangeCallback "OnCellChanged"
	// MNetworkPriority "31"
	// MNetworkSerializer "posy"
	CNetworkedQuantizedFloat m_vecY; // 0x20
	// MNetworkBitCount "13"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "256"
	// MNetworkEncodeFlags
	// MNetworkChangeCallback "OnCellChanged"
	// MNetworkPriority "31"
	// MNetworkSerializer "posz"
	CNetworkedQuantizedFloat m_vecZ; // 0x28
};

// Aligment: 3
// Size: 40
struct ragdollelement_t
{
public:
	Vector originParentSpace; // 0x0
	int32_t parentIndex; // 0x20
	float m_flRadius; // 0x24
};

// Aligment: 12
// Size: 80
struct CommandToolCommand_t
{
public:
	bool m_bEnabled; // 0x0
	bool m_bOpened; // 0x1
	uint32_t m_InternalId; // 0x4
	CUtlString m_ShortName; // 0x8
	CommandExecMode_t m_ExecMode; // 0x10
	CUtlString m_SpawnGroup; // 0x18
	float m_PeriodicExecDelay; // 0x20
	CommandEntitySpecType_t m_SpecType; // 0x24
	CUtlString m_EntitySpec; // 0x28
	CUtlString m_Commands; // 0x30
	DebugOverlayBits_t m_SetDebugBits; // 0x38
	DebugOverlayBits_t m_ClearDebugBits; // 0x40
};

// Aligment: 0
// Size: 12
class CSimpleStopwatch : public CStopwatchBase, CSimpleSimTimer
{
public:
// <no members described>
};

// Aligment: 0
// Size: 144
class CLocomotionBase : public INextBotComponent, INextBotEventResponder
{
public:
// <no members described>
};

// Aligment: 5
// Size: 32
class CGameChoreoServices : public IChoreoServices
{
public:
	CHandle< CBaseAnimGraph > m_hOwner; // 0x8
	CHandle< CScriptedSequence > m_hScriptedSequence; // 0xc
	IChoreoServices::ScriptState_t m_scriptState; // 0x10
	IChoreoServices::ChoreoState_t m_choreoState; // 0x14
	GameTime_t m_flTimeStartedState; // 0x18
};

// Aligment: 6
// Size: 48
class sPlayerSnapshot
{
public:
	AbilityID_t[10] m_nItemAbilityID; // 0x0
	float m_fGameTime; // 0x28
	uint8_t unKills; // 0x2c
	uint8_t unDeaths; // 0x2d
	uint8_t unAssists; // 0x2e
	uint8_t unLevel; // 0x2f
};

// Aligment: 1
// Size: 8
struct itemid_t
{
public:
	uint64_t m_Value; // 0x0
};

// Aligment: 2
// Size: 496
struct ConceptHistory_t
{
public:
	float timeSpoken; // 0x0
	CRR_Response m_response; // 0x8
};

// Aligment: 4
// Size: 32
class CDOTA_CreepKillInfo
{
public:
	GameTime_t m_flTimeOfDeath; // 0x0
	float m_flDeathFlightDuration; // 0x4
	Vector m_vWsKillDirection; // 0x8
	Vector m_vWsKillOrigin; // 0x14
};

// Aligment: 0
// Size: 8
class IContextualQuery
{
public:
// <no members described>
};

// Aligment: 2
// Size: 20
class CRandStopwatch : public CStopwatchBase, CSimpleSimTimer
{
public:
	float m_minInterval; // 0xc
	float m_maxInterval; // 0x10
};

// Aligment: 4
// Size: 16
struct WheeledPhysicsVehicleLookSteeringData_t
{
public:
	float m_flLowSpeedKPHForSensitivity; // 0x0
	float m_flHighSpeedKPHForSensitivity; // 0x4
	float m_flSensitivityAtLowSpeed; // 0x8
	float m_flSensitivityAtHighSpeed; // 0xc
};

// Aligment: 4
// Size: 40
struct ItemDropData_t
{
public:
	CUtlVector< CUtlString > sItemNames; // 0x0
	float flChance; // 0x18
	int32_t nReqLevel; // 0x1c
	bool bMustBeChampion; // 0x20
};

// Aligment: 8
// Size: 56
struct Blessing_t
{
public:
	// MVDataUniqueMonotonicInt
	// MPropertyAttributeEditor "locked_int()"
	BlessingID_t nID; // 0x0
	// MPropertyAttributeEditor "VDataNodePicker(//m_mapBlessingTypes/*)"
	CUtlString BlessingType; // 0x8
	// MPropertyDescription "fragment cost"
	int32_t nCost; // 0x14
	// MPropertyDescription "number of grants of action to give"
	int32_t nValue; // 0x18
	// MPropertyDescription "can you unlock this node without owning any connected nodes?"
	bool bStartNode; // 0x1c
	Vector2D vecPos; // 0x28
	// MPropertyAttributeRange "0 10"
	float flSize; // 0x30
	// MPropertyDescription "node color"
	Color color; // 0x34
};

// Aligment: 1
// Size: 4
struct attrib_definition_index_db32_t
{
public:
	uint32_t m_Value; // 0x0
};

// Aligment: 28
// Size: 192
class CBaseAchievement
{
public:
	char* m_pszName; // 0x18
	int32_t m_iAchievementID; // 0x20
	int32_t m_iFlags; // 0x24
	int32_t m_iGoal; // 0x28
	int32_t m_iProgressMsgIncrement; // 0x2c
	int32_t m_iProgressMsgMinimum; // 0x30
	int32_t m_iPointValue; // 0x34
	bool m_bHideUntilAchieved; // 0x38
	bool m_bStoreProgressInSteam; // 0x39
	char* m_pInflictorClassNameFilter; // 0x40
	char* m_pInflictorEntityNameFilter; // 0x48
	char* m_pVictimClassNameFilter; // 0x50
	char* m_pAttackerClassNameFilter; // 0x58
	char* m_pMapNameFilter; // 0x60
	char* m_pGameDirFilter; // 0x68
	char** m_pszComponentNames; // 0x70
	char** m_pszComponentDisplayNames; // 0x78
	int32_t m_iNumComponents; // 0x80
	char* m_pszComponentPrefix; // 0x88
	int32_t m_iComponentPrefixLen; // 0x90
	bool m_bAchieved; // 0x94
	int32_t m_iCount; // 0x98
	int32_t m_iProgressShown; // 0x9c
	uint64_t m_iComponentBits; // 0xa0
	int32_t m_nUserSlot; // 0xb0
	int32_t m_iDisplayOrder; // 0xb4
	bool m_bShowOnHUD; // 0xb8
	int32_t m_iAssetAwardID; // 0xbc
};

// Aligment: 1
// Size: 8
class CRangeInt
{
public:
	int32[2] m_pValue; // 0x0
};

// Aligment: 3
// Size: 20
struct NianDamageTaken_t
{
public:
	int32_t nDamage; // 0x0
	PlayerID_t nPlayerID; // 0x4
	Vector vPos; // 0x8
};

// Aligment: 0
// Size: 8
class INextBotReply
{
public:
// <no members described>
};

// Aligment: 3
// Size: 12
struct HeroPickRecord_t
{
public:
	HeroPickType eType; // 0x0
	int32_t nHeroID; // 0x4
	int32_t nTeam; // 0x8
};

// Aligment: 2
// Size: 16
struct RagdollCreationParams_t
{
public:
	Vector m_vForce; // 0x0
	int32_t m_nForceBone; // 0xc
};

// Aligment: 1
// Size: 4
struct AbilityID_t
{
public:
	int32_t m_Value; // 0x0
};

// Aligment: 2
// Size: 24
class CDOTA_Orb
{
public:
	CHandle< CBaseEntity > m_hCaster; // 0x10
	CHandle< CBaseEntity > m_hAbility; // 0x14
};

// Aligment: 5
// Size: 20
struct WheeledPhysicsVehicleCameraData_t
{
public:
	// MPropertyDescription "There must be at least this much difference between the current and desired camera pitch angle before we start to adjust the camera."
	float m_flPitchDeadzone; // 0x0
	// MPropertyDescription "If the desired camera pitch is more upward than the current pitch, we'll wait this long before we start to adjust the camera."
	float m_flTimeBeforeResolvingUpwardPitchViolation; // 0x4
	// MPropertyDescription "If the desired camera pitch is more downward than the current pitch, we'll wait this long before we start to adjust the camera."
	float m_flTimeBeforeResolvingDownwardPitchViolation; // 0x8
	// MPropertyDescription "If the desired camera pitch is within the deadzone, we'll wait this long before restoring the camera to 0 pitch."
	float m_flTimeBeforeRestoringCameraToZeroPitch; // 0xc
	// MPropertyDescription "Time in which the camera tries to reach 63% of its target pitch angle"
	float m_flTargetPitchSmoothingTimeConstant; // 0x10
};

// Aligment: 3
// Size: 32
class CNavLinkMovementVData
{
public:
	// MPropertyFriendlyName "Is Interpolated"
	// MPropertyDescription "Indicates that the animation has a segment that's interpolated. In general using this on navlinks that traverse +/- 50% of the recommended distance should look okay."
	bool m_bIsInterpolated; // 0x0
	// MPropertyFriendlyName "Recommended Distance"
	// MPropertyDescription "Recommended distance this movement traverses"
	uint32_t m_unRecommendedDistance; // 0x4
	// MPropertyFriendlyName "Animgraph Variables"
	// MPropertyDescription "List of animgraph variables to use when moving through this navlink. Can include multiple, with different amounts of angular slack. The most permissive animgraph variable that exists on the entity's animgraph will be used,"
	// MPropertyAutoExpandSelf
	CUtlVector< CNavLinkAnimgraphVar > m_vecAnimgraphVars; // 0x8
};

// Aligment: 1
// Size: 416
class CNetworkTransmitComponent
{
public:
	uint8_t m_nTransmitStateOwnedCounter; // 0x16c
public:
	static int32_t &Get_s_nDebugStateChange() { return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CNetworkTransmitComponent")->m_static_fiels[0]->m_instance); }
	static int32_t &Get_s_nWatchTransmitEntity() { return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CNetworkTransmitComponent")->m_static_fiels[1]->m_instance); }
	static bool &Get_s_bUseNetworkVars() { return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CNetworkTransmitComponent")->m_static_fiels[2]->m_instance); }
	static bool &Get_s_bNetworkVarPerFieldTracking() { return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CNetworkTransmitComponent")->m_static_fiels[3]->m_instance); }
	static bool &Get_s_bNetworkVarValidate() { return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CNetworkTransmitComponent")->m_static_fiels[4]->m_instance); }
	static bool &Get_s_bUsingPVSConvars() { return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CNetworkTransmitComponent")->m_static_fiels[5]->m_instance); }
};

// Aligment: 2
// Size: 16
class CNavLinkAnimgraphVar
{
public:
	// MPropertyFriendlyName "Animgraph Variable"
	// MPropertyDescription "Animgraph variable to use for animation for this movement."
	CUtlString m_strAnimgraphVar; // 0x0
	// MPropertyFriendlyName "Alignment Degrees"
	// MPropertyDescription "Amount of angular slack the animation has when aligning to the navlink. 0 indicates that it must be strictly aligned."
	uint32_t m_unAlignmentDegrees; // 0x8
};

// Aligment: 5
// Size: 56
struct AmmoTypeInfo_t
{
public:
	int32_t m_nMaxCarry; // 0x10
	CRangeInt m_nSplashSize; // 0x1c
	AmmoFlags_t m_nFlags; // 0x24
	float m_flMass; // 0x28
	CRangeFloat m_flSpeed; // 0x2c
};

// Aligment: 8
// Size: 49
class ResponseFollowup
{
public:
	char* followup_concept; // 0x0
	char* followup_contexts; // 0x8
	float followup_delay; // 0x10
	char* followup_target; // 0x14
	char* followup_entityiotarget; // 0x1c
	char* followup_entityioinput; // 0x24
	float followup_entityiodelay; // 0x2c
	bool bFired; // 0x30
};

// Aligment: 10
// Size: 96
class CCommentarySystem
{
public:
	bool m_bCommentaryConvarsChanging; // 0x11
	bool m_bCommentaryEnabledMidGame; // 0x12
	GameTime_t m_flNextTeleportTime; // 0x14
	int32_t m_iTeleportStage; // 0x18
	bool m_bCheatState; // 0x1c
	bool m_bIsFirstSpawnGroupToLoad; // 0x1d
	CHandle< CPointCommentaryNode > m_hCurrentNode; // 0x38
	CHandle< CPointCommentaryNode > m_hActiveCommentaryNode; // 0x3c
	CHandle< CPointCommentaryNode > m_hLastCommentaryNode; // 0x40
	CUtlVector< CHandle< CPointCommentaryNode > > m_vecNodes; // 0x48
};

// Aligment: 5
// Size: 56
struct WheeledPhysicsVehicleWheelData_t
{
public:
	// MPropertyDescription "Name of the physics body for this wheel"
	CUtlString m_sBodyName; // 0x0
	WheeledPhysicsVehicleTireModelData_t m_LateralTireParams; // 0x8
	WheeledPhysicsVehicleTireModelData_t m_LongitudinalTireParams; // 0x1c
	// MPropertyDescription "Linear drag on the wheel body (scaled by velocity, not velocity squared)"
	float m_flLinearDrag; // 0x30
	// MPropertyDescription "Angular drag on the wheel body (scaled by angular velocity, not ang vel squared)"
	float m_flAngularDrag; // 0x34
};

// Aligment: 1
// Size: 4
struct PlayerID_t
{
public:
	int32_t m_Value; // 0x0
};

// Aligment: 6
// Size: 12
class CDOTA_BuffParticle
{
public:
	ParticleIndex_t m_iIndex; // 0x0
	int32_t m_iPriority; // 0x4
	bool m_bDestroyImmediatly; // 0x8
	bool m_bStatusEffect; // 0x9
	bool m_bHeroEffect; // 0xa
	bool m_bOverheadEffectOffset; // 0xb
};

// Aligment: 2
// Size: 8
class CTakeDamageResult
{
public:
	int32_t m_nHealthLost; // 0x0
	int32_t m_nDamageTaken; // 0x4
};

// Aligment: 3
// Size: 20
class VelocitySampler
{
public:
	Vector m_prevSample; // 0x0
	GameTime_t m_fPrevSampleTime; // 0xc
	float m_fIdealSampleRate; // 0x10
};

// Aligment: 5
// Size: 56
struct NeutralSpawnBoxes_t
{
public:
	AABB_t neutralSpawnBoxes; // 0x0
	Vector vSpawnBoxOrigin; // 0x18
	CUtlString strCampName; // 0x28
	CEntityIndex iSpawnerEntIndex; // 0x30
	int32_t nCampType; // 0x34
};

// Aligment: 1
// Size: 24
class CPhysicsShake
{
public:
	Vector m_force; // 0x8
};

// Aligment: 0
// Size: 144
class CMultiplayRules : public CGameRules
{
public:
// <no members described>
};

// Aligment: 8
// Size: 64
struct WheeledPhysicsVehicleAeroData_t
{
public:
	// MPropertyDescription "Decays chassis linear velocity exponentially. Overrides the linear damping value from the model."
	float m_flLinearDamping; // 0x0
	// MPropertyDescription "Decays chassis angular velocity exponentially. Overrides the angular damping value from the model."
	float m_flAngularDamping; // 0x4
	// MPropertyDescription "Linear drag scale along each axis (X: Longitudinal, Y: Lateral, Z: Vertical). Multiplied by squared velocity along that axis to get the drag force."
	Vector m_vLinearDragParams; // 0x8
	// MPropertyDescription "Angular drag scale about each axis (X: Roll, Y: Pitch, Z: Yaw). Multiplied by squared angular velocity (deg / sec) along that axis to get the drag torque."
	Vector m_vAngularDragParams; // 0x14
	// MPropertyDescription "Front downforce scale from squared velocity along each axis (X: Longitudinal, Y: Lateral, Z: Vertical). Negative values generate lift."
	Vector m_vFrontDownforceParams; // 0x20
	// MPropertyDescription "Rear downforce scale from squared velocity along each axis (X: Longitudinal, Y: Lateral, Z: Vertical). Negative values generate lift."
	Vector m_vRearDownforceParams; // 0x2c
	// MPropertyDescription "How far away from the center of mass is the linear drag applied, as a fraction of the maximum extent in the front (positive) or rear (negative) direction?"
	float m_flLinearDragLeverAsFractionOfExtent; // 0x38
	// MPropertyDescription "How far away from the center of mass are the downforce forces applied, as a fraction of the maximum extent in that direction?"
	float m_flDownforceLeverAsFractionOfExtent; // 0x3c
};

// Aligment: 1
// Size: 152
class CNavVolumeVector : public CNavVolume
{
public:
	bool m_bHasBeenPreFiltered; // 0x78
};

// Aligment: 8
// Size: 64
class CUnitOrders
{
public:
	CUtlVector< CEntityIndex > m_nUnits; // 0x0
	Vector m_vPosition; // 0x18
	PlayerID_t m_nIssuerPlayerIndex; // 0x24
	int32_t m_nOrderSequenceNumber; // 0x28
	int32_t m_nOrderType; // 0x2c
	CEntityIndex m_nTargetIndex; // 0x30
	CEntityIndex m_nAbilityIndex; // 0x34
	uint32_t m_nFlags; // 0x38
};

// Aligment: 6
// Size: 32
class CHeadLookParams
{
public:
	CHeadLookParams::HeadLookPriority_t m_LookPriority; // 0x0
	float m_flLookDuration; // 0x4
	INextBotReply* m_pReplyWhenAimed; // 0x8
	char* m_pReasonStr; // 0x10
	bool m_bWaitForSteady; // 0x18
	float m_flEaseInTime; // 0x1c
public:
	static CHeadLookParams &Get_ms_Defaults() { return *reinterpret_cast<CHeadLookParams*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CHeadLookParams")->m_static_fiels[0]->m_instance); }
};

// Aligment: 1
// Size: 1
struct CavernCrawlRoomID_t
{
public:
	uint8_t m_Value; // 0x0
};

// Aligment: 1
// Size: 12
class CStopwatchBase : public CSimpleSimTimer
{
public:
	bool m_fIsRunning; // 0x8
};

// Aligment: 25
// Size: 100
struct dynpitchvol_base_t
{
public:
	int32_t preset; // 0x0
	int32_t pitchrun; // 0x4
	int32_t pitchstart; // 0x8
	int32_t spinup; // 0xc
	int32_t spindown; // 0x10
	int32_t volrun; // 0x14
	int32_t volstart; // 0x18
	int32_t fadein; // 0x1c
	int32_t fadeout; // 0x20
	int32_t lfotype; // 0x24
	int32_t lforate; // 0x28
	int32_t lfomodpitch; // 0x2c
	int32_t lfomodvol; // 0x30
	int32_t cspinup; // 0x34
	int32_t cspincount; // 0x38
	int32_t pitch; // 0x3c
	int32_t spinupsav; // 0x40
	int32_t spindownsav; // 0x44
	int32_t pitchfrac; // 0x48
	int32_t vol; // 0x4c
	int32_t fadeinsav; // 0x50
	int32_t fadeoutsav; // 0x54
	int32_t volfrac; // 0x58
	int32_t lfofrac; // 0x5c
	int32_t lfomult; // 0x60
};

// Aligment: 4
// Size: 16
class CSoundEnvelope
{
public:
	float m_current; // 0x0
	float m_target; // 0x4
	float m_rate; // 0x8
	bool m_forceupdate; // 0xc
};

// Aligment: 3
// Size: 32
class sLilShredderBounceInfo
{
public:
	int32_t iAttackIndex; // 0x0
	int32_t iBounceCount; // 0x4
	CUtlVector< CHandle< CBaseEntity > > hAlreadyHitList; // 0x8
};

// Aligment: 9
// Size: 96
class sAcquireHistory
{
public:
	AbilityID_t m_nAbilityID; // 0x0
	int32_t m_nLevel; // 0x4
	int32_t m_nGold; // 0x8
	int32_t m_nNetWorth; // 0xc
	int32_t m_bCombinedItem; // 0x10
	float m_fGameTime; // 0x14
	CUtlVector< AbilityID_t > m_vecItemList; // 0x18
	CUtlVector< AbilityID_t > m_vecTalentSkilledList; // 0x30
	CUtlVector< AbilityID_t > m_vecAvailableNeutralItemList; // 0x48
};

// Aligment: 1
// Size: 4
struct GuildID_t
{
public:
	uint32_t m_Value; // 0x0
};

// Aligment: 2
// Size: 32
struct BlessingType_t
{
public:
	// MVDataUniqueMonotonicInt
	// MPropertyAttributeEditor "locked_int()"
	BlessingTypeID_t nID; // 0x0
	CPanoramaImageName szIconImage; // 0x10
};

// Aligment: 10
// Size: 96
class JiggleData
{
public:
	int32_t bone; // 0x0
	int32_t id; // 0x4
	float lastUpdate; // 0x8
	Vector basePos; // 0xc
	Vector baseLastPos; // 0x18
	Vector baseVel; // 0x24
	Vector baseAccel; // 0x30
	Vector tipPos; // 0x3c
	Vector tipVel; // 0x48
	Vector tipAccel; // 0x54
};

// Aligment: 8
// Size: 136
class ConstraintSoundInfo
{
public:
	VelocitySampler m_vSampler; // 0x8
	SimpleConstraintSoundProfile m_soundProfile; // 0x20
	Vector m_forwardAxis; // 0x40
	CUtlSymbolLarge m_iszTravelSoundFwd; // 0x50
	CUtlSymbolLarge m_iszTravelSoundBack; // 0x58
	CUtlSymbolLarge[3] m_iszReversalSounds; // 0x68
	bool m_bPlayTravelSound; // 0x80
	bool m_bPlayReversalSound; // 0x81
};

// Aligment: 6
// Size: 48
struct WheeledPhysicsVehicleAxleData_t
{
public:
	// MPropertyDescription "Names of the physics bodies for the wheels associated with this axle"
	CUtlVector< CUtlString > m_vecWheelNames; // 0x0
	// MPropertyDescription "Maximum drive torque (in Newton-meters) sent to this axle when the vehicle is moving forward"
	float m_flMaxDriveTorqueNm; // 0x18
	// MPropertyDescription "Maximum drive torque (in Newton-meters) sent to this axle when the vehicle is in reverse"
	float m_flMaxDriveTorqueReverseNm; // 0x1c
	// MPropertyDescription "Maximum brake torque delivered to this axle"
	float m_flMaxBrakeTorqueNm; // 0x20
	// MPropertyDescription "Maximum handbrake torque delivered to this axle"
	float m_flMaxHandbrakeTorqueNm; // 0x24
	// MPropertyDescription "Is this axle steered?"
	bool m_bIsSteered; // 0x28
};

// Aligment: 3
// Size: 12
class sPendingTreeRemoval
{
public:
	int32_t nTeam; // 0x0
	int32_t nIndex; // 0x4
	GameTime_t fTimestamp; // 0x8
};

// Aligment: 2
// Size: 200
class CFailableAchievement : public CBaseAchievement
{
public:
	bool m_bActivated; // 0xc0
	bool m_bFailed; // 0xc1
};

// Aligment: 1
// Size: 4
struct GameTick_t
{
public:
	int32_t m_Value; // 0x0
public:
	static GameTick_t &Get_Zero() { return *reinterpret_cast<GameTick_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("GameTick_t")->m_static_fiels[0]->m_instance); }
};

// Aligment: 3
// Size: 32
class sGlaiveInfoSilencer
{
public:
	int32_t iAttackIndex; // 0x0
	int32_t iBounceCount; // 0x4
	CUtlVector< CHandle< CBaseEntity > > hAlreadyHitList; // 0x8
};

// Aligment: 1
// Size: 2
struct LeagueNodeGroupID_t
{
public:
	uint16_t m_Value; // 0x0
};

// Aligment: 3
// Size: 32
class ResponseParams
{
public:
	int16_t odds; // 0x10
	int16_t flags; // 0x12
	ResponseFollowup* m_pFollowup; // 0x18
};

// Aligment: 1
// Size: 16
class CStopwatch : public CStopwatchBase, CSimpleSimTimer
{
public:
	float m_interval; // 0xc
};

// Aligment: 3
// Size: 48
struct WaveData_t
{
public:
	Vector m_vStart; // 0x0
	CUtlVector< CHandle< CBaseEntity > > m_hAlreadyHitList; // 0x10
	int32_t m_hProjectileHandle; // 0x28
};

// Aligment: 0
// Size: 8
class IChoreoServices
{
public:
// <no members described>
};

// Aligment: 9
// Size: 96
class CAI_Expresser
{
public:
	GameTime_t m_flStopTalkTime; // 0x38
	GameTime_t m_flStopTalkTimeWithoutDelay; // 0x3c
	GameTime_t m_flBlockedTalkTime; // 0x40
	int32_t m_voicePitch; // 0x44
	GameTime_t m_flLastTimeAcceptedSpeak; // 0x48
	bool m_bAllowSpeakingInterrupts; // 0x4c
	bool m_bConsiderSceneInvolvementAsSpeech; // 0x4d
	int32_t m_nLastSpokenPriority; // 0x50
	CBaseFlex* m_pOuter; // 0x58
};

// Aligment: 2
// Size: 48
class CResponseCriteriaSet
{
public:
	int32_t m_nNumPrefixedContexts; // 0x28
	bool m_bOverrideOnAppend; // 0x2c
};

// Aligment: 10
// Size: 72
struct BaseVehicleRole_t
{
public:
	CUtlSymbolLarge m_sRoleName; // 0x0
	bool m_bIsNonDriverPassenger; // 0x8
	// MPropertyAttributeEditor "VDataModelHitboxSet( m_sModelName )"
	CUtlString m_sEntryHitboxSetName; // 0x10
	// MPropertyGroupName "View"
	float m_flCameraFOV; // 0x18
	// MPropertyGroupName "View"
	float m_flHighSpeedFOVScale; // 0x1c
	// MPropertyGroupName "View"
	float m_flFractionOfTopSpeedForStandardFOV; // 0x20
	// MPropertyGroupName "View"
	float m_flFractionOfTopSpeedForHighSpeedFOV; // 0x24
	// MPropertyGroupName "View"
	float m_flCameraZNearOverride; // 0x28
	// MPropertyGroupName "View"
	float m_flCameraZFarOverride; // 0x2c
	CUtlVector< BaseVehicleAllowedPassenger_t > m_vecAllowedPassengers; // 0x30
};

// Aligment: 0
// Size: 216
class CNavVolumeMarkupVolume : public CNavVolume
{
public:
// <no members described>
};

// Aligment: 1
// Size: 16
class CSkeletonAnimationController
{
public:
	// MNetworkDisable
	CSkeletonInstance* m_pSkeletonInstance; // 0x8
};

// Aligment: 16
// Size: 92
class CGameScriptedMoveData
{
public:
	Vector m_vDest; // 0x0
	Vector m_vSrc; // 0xc
	QAngle m_angSrc; // 0x18
	QAngle m_angDst; // 0x24
	QAngle m_angCurrent; // 0x30
	float m_flAngRate; // 0x3c
	float m_flDuration; // 0x40
	GameTime_t m_flStartTime; // 0x44
	MoveType_t m_nPrevMoveType; // 0x48
	bool m_bActive; // 0x49
	bool m_bTeleportOnEnd; // 0x4a
	bool m_bIgnoreRotation; // 0x4b
	ScriptedMoveType_t m_nType; // 0x4c
	bool m_bSuccess; // 0x50
	ForcedCrouchState_t m_nForcedCrouchState; // 0x54
	bool m_bIgnoreCollisions; // 0x58
};

// Aligment: 1
// Size: 1
struct CavernCrawlPathID_t
{
public:
	uint8_t m_Value; // 0x0
};

// Aligment: 4
// Size: 16
struct HeroDeathRecord_t
{
public:
	PlayerID_t nKillerPlayerID; // 0x0
	PlayerID_t nVictimPlayerID; // 0x4
	float fTime; // 0x8
	float fTimeRespawn; // 0xc
};

// Aligment: 1
// Size: 24
class CObstructionObject
{
public:
	int32_t m_nObstructionProperties; // 0x10
};

// Aligment: 2
// Size: 32
struct ItemRecipe_t
{
public:
	CUtlVector< AbilityID_t > m_vecRecipeComponents; // 0x0
	int32_t m_nPrimaryComponentIndex; // 0x18
};

// Aligment: 1
// Size: 64
class CPlayerPawnComponent
{
public:
	// MNetworkDisable
	// MNetworkChangeAccessorFieldPathIndex
	CNetworkVarChainer __m_pChainEntity; // 0x8
};

// Aligment: 1
// Size: 4
struct LeagueID_t
{
public:
	uint32_t m_Value; // 0x0
};

// Aligment: 3
// Size: 12
struct TimedKillEvent_t
{
public:
	int32_t m_nKillTime; // 0x0
	float m_flKillValue; // 0x4
	PlayerID_t m_nPlayerID; // 0x8
};

// Aligment: 1
// Size: 136
class CNavVolumeSphericalShell : public CNavVolumeSphere, CNavVolume
{
public:
	float m_flRadiusInner; // 0x80
};

// Aligment: 3
// Size: 24
struct ResponseContext_t
{
public:
	CUtlSymbolLarge m_iszName; // 0x0
	CUtlSymbolLarge m_iszValue; // 0x8
	GameTime_t m_fExpirationTime; // 0x10
};

// Aligment: 12
// Size: 408
class CDOTALabyrinthBlessingsMap
{
public:
	CUtlString m_strBlessingEventAction; // 0x8
	// MPropertyAttributeEditor "locked_int()"
	BlessingTypeID_t m_nNextBlessingTypeID; // 0x18
	// MPropertyAttributeEditor "locked_int()"
	BlessingID_t m_nNextBlessingID; // 0x1c
	// MPropertyAttributeEditor "VDataNodePicker(//m_mapBlessingTypes/*)"
	CUtlString m_UnlockHeroBlessingType; // 0x20
	CUtlVector< CUtlString > m_vecHeroNames; // 0x30
	int32_t m_nNumStartingHeroesUnlocked; // 0x60
	// MPropertyAttributeEditor "VDataNodePicker(//m_mapBlessingTypes/*)"
	CUtlString m_UnlockLegacyHeroBlessingType; // 0x68
	CUtlVector< CUtlString > m_vecLegacyHeroNames; // 0x78
	int32_t m_nNumStartingLegacyHeroesUnlocked; // 0xa8
	// MVDataPromoteField
	CUtlDict< BlessingType_t > m_mapBlessingTypes; // 0xb0
	// MVDataPromoteField
	CUtlDict< Blessing_t > m_mapBlessings; // 0x118
	// MVDataPromoteField
	CUtlVector< BlessingPath_t > m_vecPaths; // 0x168
};

// Aligment: 57
// Size: 456
class CModifierParams
{
public:
	CHandle< CDOTABaseAbility > ability; // 0x0
	float fDamage; // 0x4
	float fOriginalDamage; // 0x8
	int32_t nActivity; // 0xc
	bool bTooltip; // 0x10
	int32_t nTooltipParam; // 0x14
	bool bIgnoreInvis; // 0x18
	bool bNoCooldown; // 0x19
	bool bIgnoreBaseArmor; // 0x1a
	bool bReincarnate; // 0x1b
	bool bDoNotConsume; // 0x1c
	float fDistance; // 0x20
	float fGain; // 0x24
	float fAttackTimeRemaining; // 0x28
	PlayerID_t m_nIssuerPlayerIndex; // 0x2c
	PlayerID_t m_nVictimPlayerID; // 0x30
	CHandle< CBaseEntity > inflictor; // 0x34
	int32_t nDamageType; // 0x38
	int32_t nDamageflags; // 0x3c
	int32_t nDamageCategory; // 0x40
	int32_t iFailType; // 0x44
	int16_t iRecord; // 0x48
	CDOTA_Orb* pOrb; // 0x50
	CDOTA_Orb* pOrb2; // 0x58
	int32_t nCost; // 0x60
	int32_t nOrdertype; // 0x64
	Vector vOldLoc; // 0x68
	Vector vNewLoc; // 0x74
	Vector vCastLocation; // 0x80
	bool bCraniumBasherTested; // 0x8c
	bool bMKBTested; // 0x8d
	bool bOctarineTested; // 0x8e
	bool bHeartRegenApplied; // 0x8f
	bool bSangeAmpApplied; // 0x90
	bool bLocketAmpApplied; // 0x91
	bool bPaladinAmpApplied; // 0x92
	bool bBlademailApplied; // 0x93
	bool bForceFieldApplied; // 0x94
	bool bKayaApplied; // 0x95
	bool bStoutConsidered; // 0x96
	bool bInterrupted; // 0x97
	bool bDiffusalApplied; // 0x98
	bool bChainLightningConsidered; // 0x99
	bool bSuppressDamage; // 0x9a
	bool bRangedAttack; // 0x9b
	bool bProcessProcs; // 0x9c
	bool bProjectileIsFromIllusion; // 0x9d
	bool bHasMagicComponent; // 0x9e
	bool bIsSpellLifesteal; // 0x9f
	CEntityIndex[64] pnMagicStickProcEntityIndices; // 0xa0
	bool bBloodstoneRegenApplied; // 0x1a0
	char* pszAbilitySpecialName; // 0x1a8
	int32_t nAbilitySpecialLevel; // 0x1b0
	CHandle< CBaseEntity > hattacker; // 0x1b4
	CHandle< CBaseEntity > htarget; // 0x1b8
	CHandle< CBaseEntity > hunit; // 0x1bc
	CDOTA_Buff* pAddedBuff; // 0x1c0
public:
	static CModifierParams &Get_s_Default() { return *reinterpret_cast<CModifierParams*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CModifierParams")->m_static_fiels[0]->m_instance); }
};

// Aligment: 0
// Size: 32
class IBody : public INextBotComponent, INextBotEventResponder
{
public:
// <no members described>
};

// Aligment: 5
// Size: 20
struct WheeledPhysicsVehicleTireModelData_t
{
public:
	// MPropertyDescription "Effective friction coefficient at the peak of the slip curve"
	float m_flPeakEffectiveFrictionCoeff; // 0x0
	// MPropertyDescription "Friction coefficient at full sliding"
	float m_flSlidingFrictionCoeff; // 0x4
	// MPropertyDescription "Slip value for peak force"
	float m_flPeakSlip; // 0x8
	// MPropertyDescription "Slip value at the start of the full sliding region"
	float m_flFullSlidingSlip; // 0xc
	// MPropertyDescription "Initial slope of the linear portion of the slip curve (delta mu / delta slip)"
	float m_flSlope; // 0x10
};

// Aligment: 1
// Size: 8
struct MatchID_t
{
public:
	uint64_t m_Value; // 0x0
};

// Aligment: 7
// Size: 80
class CDOTAFeaturedGamemodeDefinition
{
public:
	// MPropertyDescription "unique integer ID of this weekly featured game mode"
	// MVDataUniqueMonotonicInt
	// MPropertyAttributeEditor "locked_int()"
	uint16_t m_nID; // 0x18
	// MPropertyDescription "Game Mode; use DOTA_GAMEMODE_EVENT for custom games and include custom game name"
	DOTA_GameMode m_eGameMode; // 0x1c
	// MPropertyDescription "custom game addon name if any; references event_games.txt"
	CUtlString m_sCustomGame; // 0x20
	// MPropertyDescription "shards per win"
	int32_t m_nShardsPerWin; // 0x28
	// MPropertyDescription "shards per loss"
	int32_t m_nShardsPerLoss; // 0x2c
	// MPropertyDescription "the date/time this mode starts (YYYY-MM-DD hh:mm:ss) UTC"
	CUtlString m_sStartTime; // 0x30
	// MPropertyDescription "the date/time this mode ends (YYYY-MM-DD hh:mm:ss) UTC"
	CUtlString m_sEndTime; // 0x40
};

// Aligment: 13
// Size: 96
struct VehiclePassengerInternalInfo_t
{
public:
	CUtlSymbolLarge m_sRoleName; // 0x0
	AttachmentHandle_t m_hAttachment; // 0x8
	VehiclePassengerState_t m_nState; // 0x9
	CHandle< CBaseCombatCharacter > m_hPassenger; // 0xc
	CHandle< CBasePlayerPawn > m_hPassengerPawn; // 0x10
	CHandle< CBasePlayerWeapon > m_hPassengerWeapon; // 0x14
	CUtlStringToken m_nStateChangeFinishTag; // 0x18
	int32_t m_nAllowedPassengerIndex; // 0x1c
	int32_t m_nExitAnimIndex; // 0x20
	bool m_bExitForced; // 0x24
	CTransform m_xAbsExitLocation; // 0x30
	CHandle< CEntityBlocker > m_hExitBlocker; // 0x50
	GameTime_t m_flEntryTime; // 0x54
};

// Aligment: 1
// Size: 1
struct AmmoIndex_t
{
public:
	int8_t m_Value; // 0x0
};

// Aligment: 3
// Size: 40
class CNetworkViewOffsetVector
{
public:
	// MNetworkBitCount "10"
	// MNetworkMinValue "-64"
	// MNetworkMaxValue "64"
	// MNetworkEncodeFlags
	// MNetworkChangeCallback "CNetworkViewOffsetVector"
	CNetworkedQuantizedFloat m_vecX; // 0x10
	// MNetworkBitCount "10"
	// MNetworkMinValue "-64"
	// MNetworkMaxValue "64"
	// MNetworkEncodeFlags
	// MNetworkChangeCallback "CNetworkViewOffsetVector"
	CNetworkedQuantizedFloat m_vecY; // 0x18
	// MNetworkBitCount "20"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "128"
	// MNetworkEncodeFlags
	// MNetworkChangeCallback "CNetworkViewOffsetVector"
	CNetworkedQuantizedFloat m_vecZ; // 0x20
};

// Aligment: 1
// Size: 4
struct GameTime_t
{
public:
	float m_Value; // 0x0
public:
	static GameTime_t &Get_Zero() { return *reinterpret_cast<GameTime_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("GameTime_t")->m_static_fiels[0]->m_instance); }
};

// Aligment: 2
// Size: 32
class INextBotComponent : public INextBotEventResponder
{
public:
	GameTime_t m_lastUpdateTime; // 0x8
	float m_curInterval; // 0xc
};

// Aligment: 1
// Size: 4
struct BlessingPathID_t
{
public:
	int32_t m_Value; // 0x0
};

// Aligment: 2
// Size: 20
class CSkillDamage
{
public:
	// MPropertyDescription "Damage Dealt (in the case of NPC vs NPC damage, medium skill is used)"
	CSkillFloat m_flDamage; // 0x0
	// MPropertyDescription "If specified, the damage used to compute physics forces. Otherwise normal damage is used."
	float m_flPhysicsForceDamage; // 0x10
};

// Aligment: 3
// Size: 40
struct DOTALevelingAbilityBonus_t
{
public:
	char* m_pszName; // 0x0
	CUtlVector< float32 > m_vecValues; // 0x8
	EDOTASpecialBonusOperation m_eOperation; // 0x20
};

// Aligment: 2
// Size: 8
class CSimpleSimTimer
{
public:
	GameTime_t m_next; // 0x0
	WorldGroupId_t m_nWorldGroupId; // 0x4
};

// Aligment: 3
// Size: 12
struct DamageShareEvent_t
{
public:
	float m_flOriginalDamage; // 0x0
	float m_flTakenDamage; // 0x4
	PlayerID_t m_nPlayerID; // 0x8
};

// Aligment: 3
// Size: 32
class SimpleConstraintSoundProfile
{
public:
	SimpleConstraintSoundProfile::SimpleConstraintsSoundProfileKeypoints_t eKeypoints; // 0x8
	float32[2] m_keyPoints; // 0xc
	float32[3] m_reversalSoundThresholds; // 0x14
};

// Aligment: 2
// Size: 8
struct WeightedAbilitySuggestion_t
{
public:
	// MNetworkEnable
	AbilityID_t nSuggestion; // 0x0
	// MNetworkEnable
	float fWeight; // 0x4
};

// Aligment: 6
// Size: 64
struct lerpdata_t
{
public:
	CHandle< CBaseEntity > m_hEnt; // 0x0
	MoveType_t m_MoveType; // 0x4
	GameTime_t m_flStartTime; // 0x8
	Vector m_vecStartOrigin; // 0xc
	Quaternion m_qStartRot; // 0x20
	ParticleIndex_t m_nFXIndex; // 0x30
};

// Aligment: 2
// Size: 160
class CScriptUniformRandomStream
{
public:
	HSCRIPT m_hScriptScope; // 0x8
	int32_t m_nInitialSeed; // 0x9c
public:
	static CUtlVector< CScriptUniformRandomStream* > &Get_sm_UniformStreams() { return *reinterpret_cast<CUtlVector< CScriptUniformRandomStream* >*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CScriptUniformRandomStream")->m_static_fiels[0]->m_instance); }
};

// Aligment: 1
// Size: 104
class CResponseQueue
{
public:
	CUtlVector< CAI_Expresser* > m_ExpresserTargets; // 0x50
};

// Aligment: 12
// Size: 52
class CSound
{
public:
	CHandle< CBaseEntity > m_hOwner; // 0x0
	CHandle< CBaseEntity > m_hTarget; // 0x4
	int32_t m_iVolume; // 0x8
	float m_flOcclusionScale; // 0xc
	int32_t m_iType; // 0x10
	int32_t m_iNextAudible; // 0x14
	GameTime_t m_flExpireTime; // 0x18
	int16_t m_iNext; // 0x1c
	bool m_bNoExpirationTime; // 0x1e
	int32_t m_ownerChannelIndex; // 0x20
	Vector m_vecOrigin; // 0x24
	bool m_bHasOwner; // 0x30
};

// Aligment: 1
// Size: 64
class CPlayerControllerComponent
{
public:
	// MNetworkDisable
	// MNetworkChangeAccessorFieldPathIndex
	CNetworkVarChainer __m_pChainEntity; // 0x8
};

// Aligment: 0
// Size: 16
class CHorizontalMotionController
{
public:
// <no members described>
};

// Aligment: 1
// Size: 4
struct PingWheelMessageID_t
{
public:
	uint32_t m_Value; // 0x0
};

// Aligment: 4
// Size: 24
struct GameChatLogEntry_t
{
public:
	int32_t m_nTeam; // 0x0
	PlayerID_t m_nPlayerID; // 0x4
	CUtlString m_sText; // 0x8
	GameTime_t m_flGameTime; // 0x10
};

// Aligment: 0
// Size: 8
class CFootstepTableHandle
{
public:
// <no members described>
};

// Aligment: 3
// Size: 32
class sGlaiveInfoStorm
{
public:
	int32_t iAttackIndex; // 0x0
	int32_t iBounceCount; // 0x4
	CUtlVector< CHandle< CBaseEntity > > hAlreadyHitList; // 0x8
};

// Aligment: 0
// Size: 16
class CVerticalMotionController
{
public:
// <no members described>
};

// Aligment: 0
// Size: 8
class dota_minimap_boundary : public CEmptyEntityInstance
{
public:
// <no members described>
};

// Aligment: 34
// Size: 4408
class CDOTA_Buff : public CHorizontalMotionController
{
public:
	CUtlSymbolLarge m_name; // 0x28
	CUtlSymbolLarge m_szModifierAura; // 0x38
	int32_t m_iSerialNumber; // 0x48
	// MFieldVerificationName
	int32_t m_iStringIndex; // 0x4c
	int32_t m_iIndex; // 0x50
	GameTime_t m_flCreationTime; // 0x54
	int32_t m_iCreationFrame; // 0x58
	GameTime_t m_flLastAppliedTime; // 0x5c
	float m_flDuration; // 0x60
	GameTime_t m_flDieTime; // 0x64
	CHandle< CBaseEntity > m_hCaster; // 0x68
	CHandle< CBaseEntity > m_hAbility; // 0x6c
	CHandle< CBaseEntity > m_hParent; // 0x70
	CHandle< CBaseEntity > m_hAuraOwner; // 0x74
	int32_t m_iStackCount; // 0x78
	int16_t m_iAuraSearchTeam; // 0x7c
	int16_t m_iAuraSearchType; // 0x7e
	int32_t m_iAuraSearchFlags; // 0x80
	int32_t m_iAuraRadius; // 0x84
	int32_t m_iTeam; // 0x88
	int32_t m_iAttributes; // 0x8c
	// MFieldVerificationName
	int16_t m_iPaddingToMakeSchemaHappy2; // 0x90
	bitfield:1 m_bIsAura; // 0x0
	bitfield:1 m_bIsAuraActiveOnDeath; // 0x0
	bitfield:1 m_bMarkedForDeletion; // 0x0
	bitfield:1 m_bAuraIsHeal; // 0x0
	bitfield:1 m_bProvidedByAura; // 0x0
	bool m_bPurgedDestroy; // 0x93
	GameTime_t m_flPreviousTick; // 0x94
	float m_flThinkInterval; // 0x98
	float m_flThinkTimeAccumulator; // 0x9c
	CUtlVector< CDOTA_BuffParticle > m_iParticles; // 0xa0
	CUtlVector< CHandle< CBaseEntity > > m_hAuraUnits; // 0xb8
	HSCRIPT m_hScriptScope; // 0x1130
};

// Aligment: 9
// Size: 128
class CRagdoll : public IRagdoll
{
public:
	ragdoll_t m_ragdoll; // 0x8
	Vector m_mins; // 0x40
	Vector m_maxs; // 0x4c
	Vector m_origin; // 0x58
	float m_lastUpdate; // 0x64
	bool m_allAsleep; // 0x68
	Vector m_vecLastOrigin; // 0x6c
	float m_flLastOriginChangeTime; // 0x78
	float m_flAwakeTime; // 0x7c
public:
	static uint32_t &Get_s_globalCount() { return *reinterpret_cast<uint32_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CRagdoll")->m_static_fiels[0]->m_instance); }
};

// Aligment: 3
// Size: 16
struct DOTASpecialAbilityBonus_t
{
public:
	char* m_pszName; // 0x0
	float m_fValue; // 0x8
	EDOTASpecialBonusOperation m_eOperation; // 0xc
};

// Aligment: 1
// Size: 16
class CRemapFloat
{
public:
	float32[4] m_pValue; // 0x0
};

// Aligment: 4
// Size: 24
struct DOTAOutgoingBonus_t
{
public:
	char* m_pszAbilityName; // 0x0
	char* m_pszSpecialName; // 0x8
	float m_fValue; // 0x10
	EDOTASpecialBonusOperation m_eOperation; // 0x14
};

// Aligment: 2
// Size: 8
struct RemnantData_t
{
public:
	CHandle< CBaseEntity > m_hRemnant; // 0x0
	int32_t m_nProjectileHandle; // 0x4
};

// Aligment: 2
// Size: 16
struct RelationshipOverride_t : public Relationship_t
{
public:
	CHandle< CBaseEntity > entity; // 0x8
	Class_T classType; // 0xc
};

// Aligment: 1
// Size: 1
struct GCPlayerSlot_t
{
public:
	uint8_t m_Value; // 0x0
};

// Aligment: 5
// Size: 56
struct BaseVehiclePotentialExitAnim_t
{
public:
	// MPropertyDescription "Attachment name indicating where the player will exit"
	// MPropertyAttributeEditor "VDataModelAttachment( m_sModelName )"
	CUtlString m_sExitPointAttachmentName; // 0x0
	// MPropertyDescription "Escape exits have lower priority"
	bool m_bIsEscapeExit; // 0x8
	// MPropertyDescription "Is this exit appropriate only if the vehicle is overturned?"
	bool m_bIsOverturnedExit; // 0x9
	// MPropertyFriendlyName "Vehicle Exit Animgraph Parameter"
	// MPropertyDescription "The animgraph parameter that is set on the vehicle to animate the passenger getting in."
	// MPropertyAttributeEditor "VDataAnimGraphParam( m_sModelName )"
	CAnimGraphSymbolWithStorage m_sAnimgraphParamExit; // 0x10
	// MPropertyFriendlyName "Vehicle Exit Animgraph Finish Tag"
	// MPropertyDescription "The animgraph status tag that will be set by the animgraph when it has finished performing the 'Exit Animgraph Parameter' step."
	// MPropertyAttributeEditor "VDataAnimGraphTag( m_sModelName )"
	CUtlString m_sAnimgraphFinishTagExit; // 0x30
};

// Aligment: 1
// Size: 8
class CRangeFloat
{
public:
	float32[2] m_pValue; // 0x0
};

// Aligment: 2
// Size: 32
struct CDOTABattleReportHighlightTier_t
{
public:
	// MPropertyDescription "Tier of the Reward"
	CMsgBattleReport_HighlightTier m_eTier; // 0x0
	// MPropertyDescription "Compare Contexts to Achieve Tier"
	// MPropertyAutoExpandSelf
	CUtlVector< CDOTABattleReportHighlightCompareContext_t > m_vecCompareContexts; // 0x8
};

// Aligment: 5
// Size: 28
struct NeutralCampStackPullAlarm_t
{
public:
	Vector m_vPosition; // 0x0
	float m_flPullAlarmTime; // 0xc
	float m_flStackAlarmTime; // 0x10
	int32_t m_nCampIndex; // 0x14
	int32_t m_nAlarmTypes; // 0x18
};

// Aligment: 100
// Size: 976
class CLightInfoBase
{
public:
	Vector2D m_origin2D; // 0x10
	Color[2] m_Color; // 0x18
	float32[2] m_LightScale; // 0x20
	Color[2] m_AmbientColor; // 0x28
	float32[2] m_AmbientScale; // 0x30
	Color[2] m_ShadowColor; // 0x38
	Color[2] m_ShadowSecondaryColor; // 0x40
	float32[2] m_ShadowScale; // 0x48
	float32[2] m_ShadowGroundScale; // 0x50
	Color[2] m_SpecularColor; // 0x58
	float32[2] m_flSpecularPower; // 0x60
	float32[2] m_flSpecularIndependence; // 0x68
	Vector[2] m_SpecularDirection; // 0x70
	Vector[2] m_InspectorSpecularDirection; // 0x88
	Vector[2] m_LightDirection; // 0xa0
	Vector[2] m_AmbientDirection; // 0xb8
	Color[2] m_FogColor; // 0xd0
	float32[2] m_FogStart; // 0xd8
	float32[2] m_FogEnd; // 0xe0
	float32[2] m_HeightFogValue; // 0xe8
	Color[2] m_HeightFogColor; // 0xf0
	float32[2] m_FoWDarkness; // 0xf8
	float32[2] m_FoWColorR; // 0x100
	float32[2] m_FoWColorG; // 0x108
	float32[2] m_FoWColorB; // 0x110
	Color[2] m_InspectorViewFogColor; // 0x118
	QAngle m_windAngle; // 0x120
	float32[2] m_flWindAmount; // 0x12c
	float m_flMinWind; // 0x134
	float m_flMaxWind; // 0x138
	float m_flMinGust; // 0x13c
	float m_flMaxGust; // 0x140
	float m_flMinGustDelay; // 0x144
	float m_flMaxGustDelay; // 0x148
	float m_flGustDuration; // 0x14c
	float m_flGustDirChange; // 0x150
	QAngle[2] m_skyboxAngle; // 0x154
	CStrongHandle< InfoForResourceTypeIMaterial2 >[2] m_hSkyboxMaterial; // 0x170
	Color[2] m_vSkyboxTintColor; // 0x180
	uint8_t m_nSkyboxFogType; // 0x188
	float m_flSkyboxAngularFogMaxEnd; // 0x18c
	float m_flSkyboxAngularFogMaxStart; // 0x190
	float m_flSkyboxAngularFogMinStart; // 0x194
	float m_flSkyboxAngularFogMinEnd; // 0x198
	Vector4D m_vAngularParams; // 0x19c
	Color[2] m_vHeightFogColor; // 0x1ac
	float m_flFogMaxZ; // 0x1b4
	float32[2] m_flFogDensity; // 0x1b8
	float m_flFogFalloff; // 0x1c0
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hFogTexture0; // 0x1c8
	float m_flFogLayer0Rotation; // 0x1d0
	float m_flFogLayer0Scale; // 0x1d4
	float32[2] m_flFoglayer0ScrollU; // 0x1d8
	float32[2] m_flFoglayer0ScrollV; // 0x1e0
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hFogTexture1; // 0x1e8
	float m_flFogLayer1Rotation; // 0x1f0
	float m_flFogLayer1Scale; // 0x1f4
	float32[2] m_flFoglayer1ScrollU; // 0x1f8
	float32[2] m_flFoglayer1ScrollV; // 0x200
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hFogTextureOpacity; // 0x208
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hWaterFlowMapTexture; // 0x210
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hFogFlowMapTexture; // 0x218
	float m_flFogExclusionInnerRadius; // 0x220
	float m_flFogExclusionHeightBias; // 0x224
	float m_flCausticSpeedScale; // 0x22c
	float m_flCausticAmplitudeScale; // 0x230
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hColorWarp; // 0x238
	float m_flColorWarpBlendToFull; // 0x240
	float m_fInnerRadius; // 0x244
	float m_fOuterRadius; // 0x248
	float m_flLightning_specular_pow_scale_min; // 0x24c
	float m_flLightning_specular_pow_scale_max; // 0x250
	Color m_lightningColor; // 0x254
	float m_flLightningIntensityMin; // 0x258
	float m_flLightningIntensityMax; // 0x25c
	float m_flLightningElevation; // 0x260
	float m_flLightningSpecularIntensity; // 0x264
	float m_flFarZOverride; // 0x268
	float m_flAmbientShadowAmount; // 0x26c
	int32_t m_nWeatherType; // 0x270
	CUtlString m_WeatherEffect; // 0x278
	float m_flLightning_period_min; // 0x280
	float m_flLightning_period_max; // 0x284
	float m_flLightning_duration_min; // 0x288
	float m_flLightning_duration_max; // 0x28c
	float m_flLightning_fluctuation_min; // 0x290
	float m_flLightning_fluctuation_max; // 0x294
	char[260] m_pszLightningSound; // 0x298
	float m_flNextLightningStartTime; // 0x39c
	float m_flNextLightningEndTime; // 0x3a0
	float m_flLightningFluctuationTimeStart; // 0x3a4
	float m_flLightningFluctuationTimeEnd; // 0x3a8
	float m_flLightningNumFluctuations; // 0x3ac
	float m_flNextLightningSoundTime; // 0x3b0
	bool m_bPlayLightingSound; // 0x3b4
	float m_flLightningEventMagnitude; // 0x3b8
	float m_flLightningScale; // 0x3bc
	float m_flLightningFluctuation; // 0x3c0
	float m_flLightningAngle; // 0x3c4
	float m_flLightningEventPercentage; // 0x3c8
};

// Aligment: 0
// Size: 8
class IClientAlphaProperty
{
public:
// <no members described>
};

// Aligment: 45
// Size: 1312
class CGlobalLightBase
{
public:
	bool m_bSpotLight; // 0x10
	Vector m_SpotLightOrigin; // 0x14
	QAngle m_SpotLightAngles; // 0x20
	Vector m_ShadowDirection; // 0x2c
	Vector m_AmbientDirection; // 0x38
	Vector m_SpecularDirection; // 0x44
	Vector m_InspectorSpecularDirection; // 0x50
	float m_flSpecularPower; // 0x5c
	float m_flSpecularIndependence; // 0x60
	Color m_SpecularColor; // 0x64
	bool m_bStartDisabled; // 0x68
	bool m_bEnabled; // 0x69
	Color m_LightColor; // 0x6a
	Color m_AmbientColor1; // 0x6e
	Color m_AmbientColor2; // 0x72
	Color m_AmbientColor3; // 0x76
	float m_flSunDistance; // 0x7c
	float m_flFOV; // 0x80
	float m_flNearZ; // 0x84
	float m_flFarZ; // 0x88
	bool m_bEnableShadows; // 0x8c
	bool m_bOldEnableShadows; // 0x8d
	bool m_bBackgroundClearNotRequired; // 0x8e
	float m_flCloudScale; // 0x90
	float m_flCloud1Speed; // 0x94
	float m_flCloud1Direction; // 0x98
	float m_flCloud2Speed; // 0x9c
	float m_flCloud2Direction; // 0xa0
	float m_flAmbientScale1; // 0xa4
	float m_flAmbientScale2; // 0xa8
	float m_flGroundScale; // 0xac
	float m_flLightScale; // 0xb0
	float m_flFoWDarkness; // 0xb4
	bool m_bEnableSeparateSkyboxFog; // 0xb8
	Vector m_vFowColor; // 0xbc
	Vector m_ViewOrigin; // 0xc8
	QAngle m_ViewAngles; // 0xd4
	float m_flViewFoV; // 0xe0
	Vector[8] m_WorldPoints; // 0xe4
	Vector2D m_vFogOffsetLayer0; // 0x4a8
	Vector2D m_vFogOffsetLayer1; // 0x4b0
	CHandle< C_BaseEntity > m_hEnvWind; // 0x4b8
	CHandle< C_BaseEntity > m_hEnvSky; // 0x4bc
	float m_fSmoothedAmount; // 0x4c0
	float m_fSlowSmoothedAmount; // 0x4c4
};

// Aligment: 0
// Size: 16
class C_HorizontalMotionController
{
public:
// <no members described>
};

// Aligment: 13
// Size: 48
class CClientAlphaProperty : public IClientAlphaProperty
{
public:
	uint8_t m_nRenderFX; // 0x10
	uint8_t m_nRenderMode; // 0x11
	bitfield:1 m_bAlphaOverride; // 0x0
	bitfield:1 m_bShadowAlphaOverride; // 0x0
	bitfield:6 m_nReserved; // 0x0
	uint8_t m_nAlpha; // 0x13
	uint16_t m_nDesyncOffset; // 0x14
	uint16_t m_nReserved2; // 0x16
	uint16_t m_nDistFadeStart; // 0x18
	uint16_t m_nDistFadeEnd; // 0x1a
	float m_flFadeScale; // 0x1c
	GameTime_t m_flRenderFxStartTime; // 0x20
	float m_flRenderFxDuration; // 0x24
};

// Aligment: 11
// Size: 64
struct CandyShopRewardOption_t
{
public:
	// MPropertyDescription "A unique ID for this reward option."
	CandyShopRewardOptionID_t m_unRewardOptionID; // 0x0
	// MPropertyDescription "A CSS class to assign to rewards of this type"
	CUtlString m_sRewardClass; // 0x8
	// MPropertyDescription "The maximum number of this reward option to grant. 0 means infinite"
	uint32_t m_unRewardOptionMaxCount; // 0x10
	// MPropertyDescription "what are the odds that this option will be picked compared to other options"
	uint32_t m_unWeight; // 0x14
	// MPropertyDescription "How many candy does it cost for one of these rewards"
	uint32_t m_unCandyPrice; // 0x18
	// MPropertyDescription "how should rewards for this option be generated?"
	// MPropertyAttributeChoiceEnumName
	ECandyShopRewardOptionType m_eOptionType; // 0x1c
	// MPropertyDescription "For k_eCandyShopRewardOptionType_SingleItem, what is the item def."
	// MPropertySuppressExpr "m_eOptionType != k_eCandyShopRewardOptionType_SingleItem"
	item_definition_index_t m_unSingleItemDef; // 0x20
	// MPropertyDescription "For k_eCandyShopRewardOptionType_LootList, what is the loot list to get the reward from."
	// MPropertySuppressExpr "m_eOptionType != k_eCandyShopRewardOptionType_LootList"
	CUtlString m_sLootList; // 0x28
	// MPropertyDescription "For k_eCandyShopRewardOptionType_SingleEventAction, what is the event id for the action."
	// MPropertySuppressExpr "m_eOptionType != k_eCandyShopRewardOptionType_SingleEventAction && m_eOptionType != k_eCandyShopRewardOptionType_EventPoints"
	// MPropertyAttributeChoiceEnumName
	EEvent m_eEvent; // 0x30
	// MPropertyDescription "For k_eCandyShopRewardOptionType_SingleEventAction, what is the action id for the action."
	// MPropertySuppressExpr "m_eOptionType != k_eCandyShopRewardOptionType_SingleEventAction"
	uint32_t m_unEventActionID; // 0x34
	// MPropertyDescription "For k_eCandyShopRewardOptionType_EventPoints, what is the amount of event points."
	// MPropertySuppressExpr "m_eOptionType != k_eCandyShopRewardOptionType_EventPoints"
	uint32_t m_unEventPoints; // 0x38
};

// Aligment: 0
// Size: 8
class C_SingleplayRules : public C_GameRules
{
public:
// <no members described>
};

// Aligment: 16
// Size: 192
class CDOTACandyShopDefinition
{
public:
	// MPropertyDescription "unique integer ID of this candy shop"
	CandyShopID_t m_unCandyShopID; // 0x8
	// MPropertyDescription "localization name of the candy shop"
	CUtlString m_sLocName; // 0x10
	// MPropertyDescription "default inventory size"
	uint32_t m_unDefaultInventorySize; // 0x18
	// MPropertyDescription "the image used to display an inventory size upgrade"
	CPanoramaImageName m_sInventorySizeUpgradeImage; // 0x20
	// MPropertyDescription "default reroll charges"
	uint32_t m_unDefaultRerollCharges; // 0x30
	// MPropertyDescription "candy bag item def"
	item_definition_index_t m_unCandyBagItemDef; // 0x34
	// MPropertyDescription "Maximum number of input or output candies for fixed exchange recipes."
	uint8_t m_unFixedExchangeRecipeMaxCandies; // 0x38
	// MPropertyDescription "Start date for the fixed exchange recipes."
	uint32_t m_unFixedExchangeRecipeStartDate; // 0x3c
	// MPropertyDescription "Frequency of updating fixed exchange recipes in seconds."
	uint32_t m_unFixedExchangeRecipeUpdateRateInSeconds; // 0x40
	// MPropertyDescription "Number of fixed exchange recipes."
	uint8_t m_unFixedExchangeRecipeCount; // 0x44
	// MPropertyDescription "Input candy count for variable exchange recipe"
	uint8_t m_unVariableExchangeInputCandyCount; // 0x45
	// MPropertyDescription "Output candy count for variable exchange recipe"
	uint8_t m_unVariableExchangeOutputCandyCount; // 0x46
	// MPropertyDescription "After this event expires, you can no longer interact with this candy shop."
	// MPropertyAttributeChoiceEnumName
	EEvent m_eExpireEvent; // 0x48
	CUtlVector< CandyShopCandyType_t > m_vecCandyTypes; // 0x50
	CUtlVector< CandyShopRewardSlot_t > m_vecRewardSlots; // 0x68
	CUtlVector< CandyShopRewardOption_t > m_vecDefaultRewardOptions; // 0x80
};

// Aligment: 2
// Size: 3504
class CPortraitData : public CBasePortraitData
{
public:
	CUtlVector< CHandle< C_BaseEntity > > m_RenderList; // 0xd80
	CHandle< C_BaseEntity > m_hHero; // 0xd98
};

// Aligment: 2
// Size: 120
class C_CommandContext
{
public:
	bool needsprocessing; // 0x0
	int32_t command_number; // 0x70
};

// Aligment: 0
// Size: 8
class C_GameRules
{
public:
// <no members described>
};

// Aligment: 4
// Size: 32
class CGlowSprite
{
public:
	Vector m_vColor; // 0x0
	float m_flHorzSize; // 0xc
	float m_flVertSize; // 0x10
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial; // 0x18
};

// Aligment: 13
// Size: 736
class CFlashlightEffect
{
public:
	bool m_bIsOn; // 0x10
	bool m_bMuzzleFlashEnabled; // 0x20
	float m_flMuzzleFlashBrightness; // 0x24
	Quaternion m_quatMuzzleFlashOrientation; // 0x30
	Vector m_vecMuzzleFlashOrigin; // 0x40
	float m_flFov; // 0x4c
	float m_flFarZ; // 0x50
	float m_flLinearAtten; // 0x54
	bool m_bCastsShadows; // 0x58
	float m_flCurrentPullBackDist; // 0x5c
	CStrongHandle< InfoForResourceTypeCTextureBase > m_FlashlightTexture; // 0x60
	CStrongHandle< InfoForResourceTypeCTextureBase > m_MuzzleFlashTexture; // 0x68
	char[64] m_textureName; // 0x70
};

// Aligment: 2
// Size: 8
class TimedEvent
{
public:
	float m_TimeBetweenEvents; // 0x0
	float m_fNextEvent; // 0x4
};

// Aligment: 5
// Size: 20
class CInterpolatedValue
{
public:
	float m_flStartTime; // 0x0
	float m_flEndTime; // 0x4
	float m_flStartValue; // 0x8
	float m_flEndValue; // 0xc
	int32_t m_nInterpType; // 0x10
};

// Aligment: 3
// Size: 12
struct CDOTABattleReportHighlightCompareContext_t
{
public:
	// MPropertyDescription "How to view the baseline data of the player's performance for comparison."
	CMsgBattleReport_CompareContext m_eCompareContext; // 0x0
	// MPropertyDescription "Comparison Type for player score to baseline data or threshold value"
	EHighlightScoreComparison m_eComparisonType; // 0x4
	// MPropertyDescription "Value for comparison using the selected context."
	// MPropertySuppressExpr "m_eCompareContext != k_eAbsoluteValue"
	float m_flCompareValue; // 0x8
};

// Aligment: 15
// Size: 208
class CGlowOverlay
{
public:
	Vector m_vPos; // 0x8
	bool m_bDirectional; // 0x14
	Vector m_vDirection; // 0x18
	bool m_bInSky; // 0x24
	float m_skyObstructionScale; // 0x28
	CGlowSprite[4] m_Sprites; // 0x30
	int32_t m_nSprites; // 0xb0
	float m_flProxyRadius; // 0xb4
	float m_flHDRColorScale; // 0xb8
	float m_flGlowObstructionScale; // 0xbc
	bool m_bCacheGlowObstruction; // 0xc0
	bool m_bCacheSkyObstruction; // 0xc1
	int16_t m_bActivated; // 0xc2
	uint16_t m_ListIndex; // 0xc4
	int32_t m_queryHandle; // 0xc8
};

// Aligment: 1
// Size: 48
class C_DotaTree
{
public:
	uint32_t m_unOccluderID; // 0x2c
};

// Aligment: 4
// Size: 16
struct PlayerSeatAssignment_t
{
public:
	uint32_t unAccountID; // 0x0
	uint32_t unSeat; // 0x4
	uint32_t unReversedSeat; // 0x8
	uint32_t unTeamID; // 0xc
};

// Aligment: 4
// Size: 3456
class CBasePortraitData
{
public:
	CStrongHandle< InfoForResourceTypeCModel > m_iModelIndex; // 0x3b0
	CUtlStringToken m_skin; // 0x3b8
	bool m_bHasSetupView; // 0xd5c
	float m_flRotation; // 0xd78
};

// Aligment: 0
// Size: 16
class C_VerticalMotionController
{
public:
// <no members described>
};

// Aligment: 4
// Size: 40
class CAnnouncerDescriptor
{
public:
	CUtlString m_strAnnouncerName; // 0x8
	CUtlString m_strAnnouncerVoiceFile; // 0x10
	itemid_t m_nAnnouncerItemId; // 0x18
	bool m_bItemOwnedByLocalPlayer; // 0x20
};

// Aligment: 2
// Size: 32
struct CandyShopRewardSlot_t
{
public:
	// MPropertyDescription "A CSS class to assign to this slot"
	CUtlString m_sSlotClass; // 0x0
	CUtlVector< CandyShopRewardOption_t > m_vecSlotRewardOptions; // 0x8
};

// Aligment: 10
// Size: 152
class CDecalInfo
{
public:
	float m_flAnimationScale; // 0x0
	float m_flAnimationLifeSpan; // 0x4
	float m_flPlaceTime; // 0x8
	float m_flFadeStartTime; // 0xc
	float m_flFadeDuration; // 0x10
	int32_t m_nVBSlot; // 0x14
	int32_t m_nBoneIndex; // 0x18
	CDecalInfo* m_pNext; // 0x28
	CDecalInfo* m_pPrev; // 0x30
	int32_t m_nDecalMaterialIndex; // 0x90
};

// Aligment: 3
// Size: 32
struct CandyShopCandyType_t
{
public:
	// MPropertyDescription "unique integer ID of this candy type"
	CandyShopCandyTypeID_t m_unCandyTypeID; // 0x0
	// MPropertyDescription "localization name of the candy type"
	CUtlString m_sLocName; // 0x8
	// MPropertyDescription "the image used for this candy type"
	CPanoramaImageName m_sImage; // 0x10
};

// Aligment: 6
// Size: 792
class sControlGroupElem
{
public:
	char[260] m_UnitName; // 0x0
	char[260] m_UnitLabel; // 0x104
	uint8_t m_unUnitLabelIndex; // 0x208
	CHandle< C_BaseEntity > m_hEntity; // 0x20c
	bool m_bIsIllusion; // 0x210
	char[260] m_IllusionLabel; // 0x211
};

// Aligment: 0
// Size: 8
class C_MultiplayRules : public C_GameRules
{
public:
// <no members described>
};

// Aligment: 12
// Size: 112
class CDOTABattleReportHighlight
{
public:
	// MPropertyDescription "Battle Report Highlight ID"
	// MVDataUniqueMonotonicInt
	// MPropertyAttributeEditor "locked_int()"
	uint16_t m_nID; // 0x8
	// MPropertyDescription "Enabled"
	bool m_bEnabled; // 0xa
	// MPropertyDescription "Battle Report Highlight Type"
	// MPropertyFriendlyName "Gameplay Outcome to Highlight"
	CMsgBattleReport_HighlightType m_eHighlightType; // 0xc
	// MPropertyDescription "Battle Report Highlight Category"
	CMsgBattleReport_HighlightCategory m_eHighlightCategory; // 0x10
	// MPropertyDescription "Battle Report Highlight Rarity"
	CMsgBattleReport_HighlightRarity m_eHighlightRarity; // 0x14
	// MPropertyDescription "Localized name for this highlight"
	CUtlString m_sNameToken; // 0x18
	// MPropertyDescription "Localized name for this highlight"
	CUtlString m_sFlavorToken; // 0x20
	// MPropertyDescription "Helper Tooltip Available"
	bool m_bTooltip; // 0x28
	// MPropertyDescription "Helper Tooltip Loc String"
	// MPropertySuppressExpr "m_bTooltip == false"
	CUtlString m_sTooltipLocString; // 0x30
	// MPropertyDescription "Number formatting for player score"
	EHighlightNumberFormat m_eFormat; // 0x38
	// MPropertyDescription "Roles for the Highlight.  If none selected, use all roles."
	// MPropertySuppressExpr "m_eHighlightCategory != k_eHighlightRole"
	CUtlVector< CMsgBattleReport_Role > m_vecRoles; // 0x40
	// MPropertyDescription "Possible Tiers for the Highlight"
	// MPropertyAutoExpandSelf
	CUtlVector< CDOTABattleReportHighlightTier_t > m_vecTiers; // 0x58
};

