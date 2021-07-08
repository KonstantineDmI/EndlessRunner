#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Func`2<UnityEngine.MeshFilter,System.Boolean>
struct Func_2_tDA13BFE7A65FB2551A825A13C2B5B061461BA351;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8;
// System.Collections.Generic.IEnumerable`1<UnityEngine.MeshFilter>
struct IEnumerable_1_t36D36000DA049FFB3E4D4373202835671FC2BCDF;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t34AA4AF4E7352129CA58045901530E41445AC16D;
// System.Collections.Generic.List`1<Chunk>
struct List_1_t7A626F883F5F76159AA059998344989D9386C55C;
// System.Collections.Generic.List`1<UnityEngine.CombineInstance>
struct List_1_t6B1E95FA5DF30925360D5903D54D1063F95AFFEF;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5;
// System.Collections.Generic.List`1<UnityEngine.Material>
struct List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// Chunk[]
struct ChunkU5BU5D_t79919EE5B782347D73E235CCE5023F0B78D350A8;
// ChunkHolder[]
struct ChunkHolderU5BU5D_t88B5A732A46BD3B7D6C0C56321912FA3130395E0;
// Coin[]
struct CoinU5BU5D_tF692E89BF912268D41D6362D65CD174BA878BC87;
// UnityEngine.CombineInstance[]
struct CombineInstanceU5BU5D_tCEC5E0C06082119E1FF9C16E274C016F216803BF;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// UnityEngine.Material[]
struct MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492;
// UnityEngine.MeshFilter[]
struct MeshFilterU5BU5D_tE8AA77783A24784C69A8083B4F3E482D866FD503;
// UnityEngine.MeshRenderer[]
struct MeshRendererU5BU5D_t535468079DEF88AD38546DC5D04E9102C401D228;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// UnityEngine.UI.Text[]
struct TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F;
// UnityEngine.Transform[]
struct TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE;
// AudioController
struct AudioController_tA9F9625D78D7B82E16202C1EBD62C8CA84CE7B5E;
// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B;
// Balance
struct Balance_t2C96E30A413FF03954FF7EE1D62E73AAA4A48ADF;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// UnityEngine.BoxCollider
struct BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5;
// CameraFollow
struct CameraFollow_tC9B62E254DA1376073E7B793597F9D6CD2A82DF8;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// Chunk
struct Chunk_t9B72CD748941C5A60C8A8C73024F32445F793EC2;
// ChunkCreator
struct ChunkCreator_tE0280F95F7F316AA5D7907CF17F3ADD314C81074;
// ChunkHolder
struct ChunkHolder_t93603EBB9F5C67C25E077B97A7A85AD9BFD9BBE9;
// Coin
struct Coin_t327139A024DB28F40ED5C48479FA8AB572E86550;
// CoinsCreator
struct CoinsCreator_t1BC3124D0C17A37853ED12A89D2FAA146CF42942;
// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02;
// UnityEngine.Collision
struct Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// DamageZone
struct DamageZone_t7E17CB7C4777F0F7319F4122AE04A70C274632D9;
// DeadZone
struct DeadZone_tD1E10D680CDC9E8D0C44EDD7C880F4AD1EDA8CAD;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// DifficultySystem
struct DifficultySystem_t890C85560517296BDCC85431D950A36A8E5FA6E7;
// FPS
struct FPS_t2BF93E8D6D0DE5740268969C725821F2730E9D88;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// HCTraffic
struct HCTraffic_t1CEB8C258DECA919DFD60C350B3D04680E06CC02;
// HCVehicle
struct HCVehicle_tD4C626176997767010D3E92648CED7AA2AFADAE1;
// Health
struct Health_tB86D9293C9CF1E5B8E4C7271395F56DD4C67AE96;
// HeighLimit
struct HeighLimit_t9C5A911EC2D9A78566683C9D7C7B658B30D90AB4;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// LowZone
struct LowZone_t01FB485ABD40AB26E05D1531AB4E9010B2A1844B;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// Menu
struct Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6;
// MenuController
struct MenuController_t588D7E4A49E600642B37B1A23E9A1C0DBDF0CEC4;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// MeshCombiner
struct MeshCombiner_t2CD8003020EE4332F6A85F814B7876EE79DE1C05;
// UnityEngine.MeshFilter
struct MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A;
// UnityEngine.MeshRenderer
struct MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// Movement
struct Movement_t81B548083980F3B23F17AC9CA1C906E46F4B594C;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// ObjCollision
struct ObjCollision_t6D595F964DA9124367E2EFD26AAA71F60077BDE0;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// Player
struct Player_t5689617909B48F7640EA0892D85C92C13CC22C6F;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C;
// RestartGame
struct RestartGame_t4871D9CCA018BBE024190E8DA63A0E07CFA7C286;
// UnityEngine.Rigidbody
struct Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD;
// Session
struct Session_tBF465A2B862D5E44002D0BBEE7F68FB6B64129BC;
// UnityEngine.UI.Slider
struct Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A;
// SpawnPoint
struct SpawnPoint_t77028DEDD80A0DA2C96B701D023CFD026514EB9B;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// StartGameButton
struct StartGameButton_t6F140D4EF1936A8550D13A33B125F4F68B27BDDB;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C;
// DamageZone/<Collision>d__8
struct U3CCollisionU3Ed__8_tA42703A19ABC4B010180FE96850C09DD884090FC;
// FPS/<FPSShow>d__1
struct U3CFPSShowU3Ed__1_t96B8D881F827C451C455FB3E4D52DA18284ADA6A;
// HCTraffic/<SpawnInterval>d__15
struct U3CSpawnIntervalU3Ed__15_tFF276102F52D81BEBF574FB151E15CBCAC9EC109;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// MeshCombiner/<>c
struct U3CU3Ec_tC607834D420DED2B2B095D41BAB8005F418C3722;
// MeshCombiner/<>c__DisplayClass33_0
struct U3CU3Ec__DisplayClass33_0_t625D1FF1495408366D10B041997D39A1E07A4B4C;
// MeshCombiner/<>c__DisplayClass33_1
struct U3CU3Ec__DisplayClass33_1_t47917A8CA5B35A825FA0802DA1F60C2FB0051AE3;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780;

IL2CPP_EXTERN_C RuntimeClass* CombineInstanceU5BU5D_tCEC5E0C06082119E1FF9C16E274C016F216803BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tDA13BFE7A65FB2551A825A13C2B5B061461BA351_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6B1E95FA5DF30925360D5903D54D1063F95AFFEF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t7A626F883F5F76159AA059998344989D9386C55C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MeshFilterU5BU5D_tE8AA77783A24784C69A8083B4F3E482D866FD503_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MeshRendererU5BU5D_t535468079DEF88AD38546DC5D04E9102C401D228_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCollisionU3Ed__8_tA42703A19ABC4B010180FE96850C09DD884090FC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CFPSShowU3Ed__1_t96B8D881F827C451C455FB3E4D52DA18284ADA6A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSpawnIntervalU3Ed__15_tFF276102F52D81BEBF574FB151E15CBCAC9EC109_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass33_0_t625D1FF1495408366D10B041997D39A1E07A4B4C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass33_1_t47917A8CA5B35A825FA0802DA1F60C2FB0051AE3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tC607834D420DED2B2B095D41BAB8005F418C3722_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B;
IL2CPP_EXTERN_C String_t* _stringLiteral0795559209156A8AA4E423EC306783E185F571B8;
IL2CPP_EXTERN_C String_t* _stringLiteral082ADBD2B65B27F6C56EA11FD6E0EA36380647D6;
IL2CPP_EXTERN_C String_t* _stringLiteral33475665902203BC82B0D5F5AE97A7CC3F47EE21;
IL2CPP_EXTERN_C String_t* _stringLiteral36C60883FA5366BBEAB95DC47357F7013A19859A;
IL2CPP_EXTERN_C String_t* _stringLiteral47892CCD861138A3AD23D6B3FD2BCC63203ADC1E;
IL2CPP_EXTERN_C String_t* _stringLiteral5B06C52112CA55E3DB716F4A77D7B31D8F31DE4F;
IL2CPP_EXTERN_C String_t* _stringLiteral69AF8E51CA8BB988590A57E2EF12E2390A322CE4;
IL2CPP_EXTERN_C String_t* _stringLiteralB5C4039D91DE2DE4E28AD026E5CF58DA69383E0E;
IL2CPP_EXTERN_C String_t* _stringLiteralB841E4F49ECE3D852FBDF3ADC5C8DFD24C7B9BD7;
IL2CPP_EXTERN_C String_t* _stringLiteralC1D776C5F458EEF55767EB604CF9D00C7AFC1528;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralE6D56CAE0EB074009242B47D6FDE88003022E6E0;
IL2CPP_EXTERN_C String_t* _stringLiteralEB0BB5D4FA59FF963FDE2494755AB4182D0F8AA2;
IL2CPP_EXTERN_C String_t* _stringLiteralFAA8B192E9D503722EA506BCBF50B02369C3C4DC;
IL2CPP_EXTERN_C String_t* _stringLiteralFEBAFD123827314D891E242058D1A1D88D39E29E;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisDifficultySystem_t890C85560517296BDCC85431D950A36A8E5FA6E7_m35D9B704CBFCB2BA65B5C4B4CBF24541BA2F9300_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisHealth_tB86D9293C9CF1E5B8E4C7271395F56DD4C67AE96_mBE180BF7DF7D587AD18D31151AEAB9937D497D4B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m87EEABB28FFB9E9553015DD36B7C6F7C45A7F537_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMovement_t81B548083980F3B23F17AC9CA1C906E46F4B594C_m9D1BFBFF8E499B921BAAE1AE985D894E46DEBA54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m1BED3A96709F9A68D06117FAAE2AE1456F74CE7B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_mC14A87BD002F3F04000161028A31535C5C929ACE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m65A516E0B5EAC734DFF622A5E548CB87FEC256E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m95B8BE04A1B29F6743BD22D1B7AD02A91BD1D7CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Where_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m0AFE42607F680EDF565C25BBE7837AE2FB9D64DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mEE5387FCFA1D33E7B064E9E3B5F754599986D229_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisBoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5_m106D19D2AB9862E4B35BBBCF1A510C4A16C928FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisChunk_t9B72CD748941C5A60C8A8C73024F32445F793EC2_mD6507016FFD45D30783B8EB825C0373D1C7099D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisHCTraffic_t1CEB8C258DECA919DFD60C350B3D04680E06CC02_m2053BBCD431FAC27EB3DD76342D368A8CA9D49DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisHCVehicle_tD4C626176997767010D3E92648CED7AA2AFADAE1_m861D98AECF4FCD810F00C20CDC7FD51A9A20986C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisHealth_tB86D9293C9CF1E5B8E4C7271395F56DD4C67AE96_m51AE0CFCE2B84137462CD38079641E797E862570_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m4E244CD0EBBF9E0A3A73AF14F6EC434CA82E6F4B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m82212DD756C5F3A2B4844722FD1EE504E9AAD906_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mA1779277BB07CE3D2CB8E340CEA85C40C6B52354_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m583619246DFE5A4BE61DBA1CA5153C5BE8A82363_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m93A08EA489A09A73780119772DE17BA06864EB10_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mC998C3F80F9B9E5605956025867EB1C57E391105_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m026DA3DB85DFB0C649219929F5592253C71EF71C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m631A61127CAE4A180CC066347B119BB013A955EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m2548438FB818F2F6A96859D1762D06A9CE8DC100_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m186505F66F97198D8539D9673736392642EE45CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_mFE00BBE0A524D1A0943DEA309FC7CB7877BC2236_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m497DA7006D664307F20A0546E5B717AA4B5E8A86_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m5EEEE92C9EB645D4CEA676AB09D14DBEA8A5E22C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC0B6BFCEFF3017582F5D5F36A3B5C41DC1DFCC11_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m2D5331F0E51DEDFD0BC68D4AE665FD93010CA0BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m32EAB7C20FE929AB4D52FE42710A40B827F4EE31_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m8410A846B60687AFEBC23E8230D3138A97BA947F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m0A488362BBE7887970BB6FED1614EC1E1792F19D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m13B9C8BE116476A73890AFB00F5596C13FC3FFAF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCollisionU3Ed__8_System_Collections_IEnumerator_Reset_m508F8D21EA6F9F392DBA5BEA71162C21053EA1A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CFPSShowU3Ed__1_System_Collections_IEnumerator_Reset_m3D5EC969C5006655148E0A6C056D1A68EBB921A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSpawnIntervalU3Ed__15_System_Collections_IEnumerator_Reset_m5484963831F860BD947C482F5C103D3F1CD78383_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CGetMeshFiltersToCombineU3Eb__33_1_m9330A19419806D557A51C004767734F45BB225F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass33_0_U3CGetMeshFiltersToCombineU3Eb__0_m257ED5A742B494F6E5C12C847B723D84583EF17D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass33_1_U3CGetMeshFiltersToCombineU3Eb__2_m499A70231221E766848D5EB60BB711481249796A_RuntimeMethod_var;
struct ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 ;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE;
struct ChunkHolderU5BU5D_t88B5A732A46BD3B7D6C0C56321912FA3130395E0;
struct CombineInstanceU5BU5D_tCEC5E0C06082119E1FF9C16E274C016F216803BF;
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
struct MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492;
struct MeshFilterU5BU5D_tE8AA77783A24784C69A8083B4F3E482D866FD503;
struct MeshRendererU5BU5D_t535468079DEF88AD38546DC5D04E9102C401D228;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F;
struct TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D;
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object


// System.Collections.Generic.List`1<Chunk>
struct  List_1_t7A626F883F5F76159AA059998344989D9386C55C  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ChunkU5BU5D_t79919EE5B782347D73E235CCE5023F0B78D350A8* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t7A626F883F5F76159AA059998344989D9386C55C, ____items_1)); }
	inline ChunkU5BU5D_t79919EE5B782347D73E235CCE5023F0B78D350A8* get__items_1() const { return ____items_1; }
	inline ChunkU5BU5D_t79919EE5B782347D73E235CCE5023F0B78D350A8** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ChunkU5BU5D_t79919EE5B782347D73E235CCE5023F0B78D350A8* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t7A626F883F5F76159AA059998344989D9386C55C, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t7A626F883F5F76159AA059998344989D9386C55C, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t7A626F883F5F76159AA059998344989D9386C55C, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t7A626F883F5F76159AA059998344989D9386C55C_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ChunkU5BU5D_t79919EE5B782347D73E235CCE5023F0B78D350A8* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t7A626F883F5F76159AA059998344989D9386C55C_StaticFields, ____emptyArray_5)); }
	inline ChunkU5BU5D_t79919EE5B782347D73E235CCE5023F0B78D350A8* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ChunkU5BU5D_t79919EE5B782347D73E235CCE5023F0B78D350A8** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ChunkU5BU5D_t79919EE5B782347D73E235CCE5023F0B78D350A8* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.CombineInstance>
struct  List_1_t6B1E95FA5DF30925360D5903D54D1063F95AFFEF  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	CombineInstanceU5BU5D_tCEC5E0C06082119E1FF9C16E274C016F216803BF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6B1E95FA5DF30925360D5903D54D1063F95AFFEF, ____items_1)); }
	inline CombineInstanceU5BU5D_tCEC5E0C06082119E1FF9C16E274C016F216803BF* get__items_1() const { return ____items_1; }
	inline CombineInstanceU5BU5D_tCEC5E0C06082119E1FF9C16E274C016F216803BF** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(CombineInstanceU5BU5D_tCEC5E0C06082119E1FF9C16E274C016F216803BF* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6B1E95FA5DF30925360D5903D54D1063F95AFFEF, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6B1E95FA5DF30925360D5903D54D1063F95AFFEF, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6B1E95FA5DF30925360D5903D54D1063F95AFFEF, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6B1E95FA5DF30925360D5903D54D1063F95AFFEF_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	CombineInstanceU5BU5D_tCEC5E0C06082119E1FF9C16E274C016F216803BF* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6B1E95FA5DF30925360D5903D54D1063F95AFFEF_StaticFields, ____emptyArray_5)); }
	inline CombineInstanceU5BU5D_tCEC5E0C06082119E1FF9C16E274C016F216803BF* get__emptyArray_5() const { return ____emptyArray_5; }
	inline CombineInstanceU5BU5D_tCEC5E0C06082119E1FF9C16E274C016F216803BF** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(CombineInstanceU5BU5D_tCEC5E0C06082119E1FF9C16E274C016F216803BF* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct  List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____items_1)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get__items_1() const { return ____items_1; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_StaticFields, ____emptyArray_5)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get__emptyArray_5() const { return ____emptyArray_5; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Material>
struct  List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4, ____items_1)); }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* get__items_1() const { return ____items_1; }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4_StaticFields, ____emptyArray_5)); }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* get__emptyArray_5() const { return ____emptyArray_5; }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct  List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct  ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct  YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// DamageZone/<Collision>d__8
struct  U3CCollisionU3Ed__8_tA42703A19ABC4B010180FE96850C09DD884090FC  : public RuntimeObject
{
public:
	// System.Int32 DamageZone/<Collision>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object DamageZone/<Collision>d__8::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// DamageZone DamageZone/<Collision>d__8::<>4__this
	DamageZone_t7E17CB7C4777F0F7319F4122AE04A70C274632D9 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CCollisionU3Ed__8_tA42703A19ABC4B010180FE96850C09DD884090FC, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CCollisionU3Ed__8_tA42703A19ABC4B010180FE96850C09DD884090FC, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CCollisionU3Ed__8_tA42703A19ABC4B010180FE96850C09DD884090FC, ___U3CU3E4__this_2)); }
	inline DamageZone_t7E17CB7C4777F0F7319F4122AE04A70C274632D9 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline DamageZone_t7E17CB7C4777F0F7319F4122AE04A70C274632D9 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(DamageZone_t7E17CB7C4777F0F7319F4122AE04A70C274632D9 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// FPS/<FPSShow>d__1
struct  U3CFPSShowU3Ed__1_t96B8D881F827C451C455FB3E4D52DA18284ADA6A  : public RuntimeObject
{
public:
	// System.Int32 FPS/<FPSShow>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object FPS/<FPSShow>d__1::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// FPS FPS/<FPSShow>d__1::<>4__this
	FPS_t2BF93E8D6D0DE5740268969C725821F2730E9D88 * ___U3CU3E4__this_2;
	// System.Single FPS/<FPSShow>d__1::<fps>5__1
	float ___U3CfpsU3E5__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CFPSShowU3Ed__1_t96B8D881F827C451C455FB3E4D52DA18284ADA6A, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CFPSShowU3Ed__1_t96B8D881F827C451C455FB3E4D52DA18284ADA6A, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CFPSShowU3Ed__1_t96B8D881F827C451C455FB3E4D52DA18284ADA6A, ___U3CU3E4__this_2)); }
	inline FPS_t2BF93E8D6D0DE5740268969C725821F2730E9D88 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline FPS_t2BF93E8D6D0DE5740268969C725821F2730E9D88 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(FPS_t2BF93E8D6D0DE5740268969C725821F2730E9D88 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CfpsU3E5__1_3() { return static_cast<int32_t>(offsetof(U3CFPSShowU3Ed__1_t96B8D881F827C451C455FB3E4D52DA18284ADA6A, ___U3CfpsU3E5__1_3)); }
	inline float get_U3CfpsU3E5__1_3() const { return ___U3CfpsU3E5__1_3; }
	inline float* get_address_of_U3CfpsU3E5__1_3() { return &___U3CfpsU3E5__1_3; }
	inline void set_U3CfpsU3E5__1_3(float value)
	{
		___U3CfpsU3E5__1_3 = value;
	}
};


// HCTraffic/<SpawnInterval>d__15
struct  U3CSpawnIntervalU3Ed__15_tFF276102F52D81BEBF574FB151E15CBCAC9EC109  : public RuntimeObject
{
public:
	// System.Int32 HCTraffic/<SpawnInterval>d__15::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object HCTraffic/<SpawnInterval>d__15::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Single HCTraffic/<SpawnInterval>d__15::rTime
	float ___rTime_2;
	// HCTraffic HCTraffic/<SpawnInterval>d__15::<>4__this
	HCTraffic_t1CEB8C258DECA919DFD60C350B3D04680E06CC02 * ___U3CU3E4__this_3;
	// System.Int32 HCTraffic/<SpawnInterval>d__15::<k0>5__1
	int32_t ___U3Ck0U3E5__1_4;
	// UnityEngine.GameObject HCTraffic/<SpawnInterval>d__15::<obj>5__2
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CobjU3E5__2_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSpawnIntervalU3Ed__15_tFF276102F52D81BEBF574FB151E15CBCAC9EC109, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CSpawnIntervalU3Ed__15_tFF276102F52D81BEBF574FB151E15CBCAC9EC109, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_rTime_2() { return static_cast<int32_t>(offsetof(U3CSpawnIntervalU3Ed__15_tFF276102F52D81BEBF574FB151E15CBCAC9EC109, ___rTime_2)); }
	inline float get_rTime_2() const { return ___rTime_2; }
	inline float* get_address_of_rTime_2() { return &___rTime_2; }
	inline void set_rTime_2(float value)
	{
		___rTime_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CSpawnIntervalU3Ed__15_tFF276102F52D81BEBF574FB151E15CBCAC9EC109, ___U3CU3E4__this_3)); }
	inline HCTraffic_t1CEB8C258DECA919DFD60C350B3D04680E06CC02 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline HCTraffic_t1CEB8C258DECA919DFD60C350B3D04680E06CC02 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(HCTraffic_t1CEB8C258DECA919DFD60C350B3D04680E06CC02 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3Ck0U3E5__1_4() { return static_cast<int32_t>(offsetof(U3CSpawnIntervalU3Ed__15_tFF276102F52D81BEBF574FB151E15CBCAC9EC109, ___U3Ck0U3E5__1_4)); }
	inline int32_t get_U3Ck0U3E5__1_4() const { return ___U3Ck0U3E5__1_4; }
	inline int32_t* get_address_of_U3Ck0U3E5__1_4() { return &___U3Ck0U3E5__1_4; }
	inline void set_U3Ck0U3E5__1_4(int32_t value)
	{
		___U3Ck0U3E5__1_4 = value;
	}

	inline static int32_t get_offset_of_U3CobjU3E5__2_5() { return static_cast<int32_t>(offsetof(U3CSpawnIntervalU3Ed__15_tFF276102F52D81BEBF574FB151E15CBCAC9EC109, ___U3CobjU3E5__2_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CobjU3E5__2_5() const { return ___U3CobjU3E5__2_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CobjU3E5__2_5() { return &___U3CobjU3E5__2_5; }
	inline void set_U3CobjU3E5__2_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CobjU3E5__2_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CobjU3E5__2_5), (void*)value);
	}
};


// MeshCombiner/<>c
struct  U3CU3Ec_tC607834D420DED2B2B095D41BAB8005F418C3722  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tC607834D420DED2B2B095D41BAB8005F418C3722_StaticFields
{
public:
	// MeshCombiner/<>c MeshCombiner/<>c::<>9
	U3CU3Ec_tC607834D420DED2B2B095D41BAB8005F418C3722 * ___U3CU3E9_0;
	// System.Func`2<UnityEngine.MeshFilter,System.Boolean> MeshCombiner/<>c::<>9__33_1
	Func_2_tDA13BFE7A65FB2551A825A13C2B5B061461BA351 * ___U3CU3E9__33_1_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tC607834D420DED2B2B095D41BAB8005F418C3722_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tC607834D420DED2B2B095D41BAB8005F418C3722 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tC607834D420DED2B2B095D41BAB8005F418C3722 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tC607834D420DED2B2B095D41BAB8005F418C3722 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__33_1_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tC607834D420DED2B2B095D41BAB8005F418C3722_StaticFields, ___U3CU3E9__33_1_1)); }
	inline Func_2_tDA13BFE7A65FB2551A825A13C2B5B061461BA351 * get_U3CU3E9__33_1_1() const { return ___U3CU3E9__33_1_1; }
	inline Func_2_tDA13BFE7A65FB2551A825A13C2B5B061461BA351 ** get_address_of_U3CU3E9__33_1_1() { return &___U3CU3E9__33_1_1; }
	inline void set_U3CU3E9__33_1_1(Func_2_tDA13BFE7A65FB2551A825A13C2B5B061461BA351 * value)
	{
		___U3CU3E9__33_1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__33_1_1), (void*)value);
	}
};


// MeshCombiner/<>c__DisplayClass33_0
struct  U3CU3Ec__DisplayClass33_0_t625D1FF1495408366D10B041997D39A1E07A4B4C  : public RuntimeObject
{
public:
	// UnityEngine.MeshFilter[] MeshCombiner/<>c__DisplayClass33_0::meshFilters
	MeshFilterU5BU5D_tE8AA77783A24784C69A8083B4F3E482D866FD503* ___meshFilters_0;
	// MeshCombiner MeshCombiner/<>c__DisplayClass33_0::<>4__this
	MeshCombiner_t2CD8003020EE4332F6A85F814B7876EE79DE1C05 * ___U3CU3E4__this_1;

public:
	inline static int32_t get_offset_of_meshFilters_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass33_0_t625D1FF1495408366D10B041997D39A1E07A4B4C, ___meshFilters_0)); }
	inline MeshFilterU5BU5D_tE8AA77783A24784C69A8083B4F3E482D866FD503* get_meshFilters_0() const { return ___meshFilters_0; }
	inline MeshFilterU5BU5D_tE8AA77783A24784C69A8083B4F3E482D866FD503** get_address_of_meshFilters_0() { return &___meshFilters_0; }
	inline void set_meshFilters_0(MeshFilterU5BU5D_tE8AA77783A24784C69A8083B4F3E482D866FD503* value)
	{
		___meshFilters_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshFilters_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass33_0_t625D1FF1495408366D10B041997D39A1E07A4B4C, ___U3CU3E4__this_1)); }
	inline MeshCombiner_t2CD8003020EE4332F6A85F814B7876EE79DE1C05 * get_U3CU3E4__this_1() const { return ___U3CU3E4__this_1; }
	inline MeshCombiner_t2CD8003020EE4332F6A85F814B7876EE79DE1C05 ** get_address_of_U3CU3E4__this_1() { return &___U3CU3E4__this_1; }
	inline void set_U3CU3E4__this_1(MeshCombiner_t2CD8003020EE4332F6A85F814B7876EE79DE1C05 * value)
	{
		___U3CU3E4__this_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_1), (void*)value);
	}
};


// MeshCombiner/<>c__DisplayClass33_1
struct  U3CU3Ec__DisplayClass33_1_t47917A8CA5B35A825FA0802DA1F60C2FB0051AE3  : public RuntimeObject
{
public:
	// System.Int32 MeshCombiner/<>c__DisplayClass33_1::i
	int32_t ___i_0;
	// MeshCombiner/<>c__DisplayClass33_0 MeshCombiner/<>c__DisplayClass33_1::CSU24<>8__locals1
	U3CU3Ec__DisplayClass33_0_t625D1FF1495408366D10B041997D39A1E07A4B4C * ___CSU24U3CU3E8__locals1_1;

public:
	inline static int32_t get_offset_of_i_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass33_1_t47917A8CA5B35A825FA0802DA1F60C2FB0051AE3, ___i_0)); }
	inline int32_t get_i_0() const { return ___i_0; }
	inline int32_t* get_address_of_i_0() { return &___i_0; }
	inline void set_i_0(int32_t value)
	{
		___i_0 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals1_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass33_1_t47917A8CA5B35A825FA0802DA1F60C2FB0051AE3, ___CSU24U3CU3E8__locals1_1)); }
	inline U3CU3Ec__DisplayClass33_0_t625D1FF1495408366D10B041997D39A1E07A4B4C * get_CSU24U3CU3E8__locals1_1() const { return ___CSU24U3CU3E8__locals1_1; }
	inline U3CU3Ec__DisplayClass33_0_t625D1FF1495408366D10B041997D39A1E07A4B4C ** get_address_of_CSU24U3CU3E8__locals1_1() { return &___CSU24U3CU3E8__locals1_1; }
	inline void set_CSU24U3CU3E8__locals1_1(U3CU3Ec__DisplayClass33_0_t625D1FF1495408366D10B041997D39A1E07A4B4C * value)
	{
		___CSU24U3CU3E8__locals1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals1_1), (void*)value);
	}
};


// System.Boolean
struct  Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// UnityEngine.Color
struct  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// System.DateTime
struct  DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MinValue_31)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MaxValue_32)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MaxValue_32 = value;
	}
};


// UnityEngine.DrivenRectTransformTracker
struct  DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2__padding[1];
	};

public:
};


// System.Enum
struct  Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct  Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int64
struct  Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// UnityEngine.Matrix4x4
struct  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 
{
public:
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___identityMatrix_17 = value;
	}
};


// UnityEngine.Quaternion
struct  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// System.Single
struct  Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.UI.SpriteState
struct  SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_HighlightedSprite_0)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighlightedSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_PressedSprite_1)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PressedSprite_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_SelectedSprite_2)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_SelectedSprite_2() const { return ___m_SelectedSprite_2; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_SelectedSprite_2() { return &___m_SelectedSprite_2; }
	inline void set_m_SelectedSprite_2(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_SelectedSprite_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSprite_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_3() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_DisabledSprite_3)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_DisabledSprite_3() const { return ___m_DisabledSprite_3; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_DisabledSprite_3() { return &___m_DisabledSprite_3; }
	inline void set_m_DisabledSprite_3(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_DisabledSprite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisabledSprite_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_pinvoke
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_com
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};

// UnityEngine.Vector2
struct  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct  Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.WaitForSeconds
struct  WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.Collision
struct  Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 UnityEngine.Collision::m_Impulse
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Impulse_0;
	// UnityEngine.Vector3 UnityEngine.Collision::m_RelativeVelocity
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_RelativeVelocity_1;
	// UnityEngine.Rigidbody UnityEngine.Collision::m_Rigidbody
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___m_Rigidbody_2;
	// UnityEngine.Collider UnityEngine.Collision::m_Collider
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___m_Collider_3;
	// System.Int32 UnityEngine.Collision::m_ContactCount
	int32_t ___m_ContactCount_4;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_ReusedContacts
	ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* ___m_ReusedContacts_5;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_LegacyContacts
	ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* ___m_LegacyContacts_6;

public:
	inline static int32_t get_offset_of_m_Impulse_0() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_Impulse_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Impulse_0() const { return ___m_Impulse_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Impulse_0() { return &___m_Impulse_0; }
	inline void set_m_Impulse_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Impulse_0 = value;
	}

	inline static int32_t get_offset_of_m_RelativeVelocity_1() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_RelativeVelocity_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_RelativeVelocity_1() const { return ___m_RelativeVelocity_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_RelativeVelocity_1() { return &___m_RelativeVelocity_1; }
	inline void set_m_RelativeVelocity_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_RelativeVelocity_1 = value;
	}

	inline static int32_t get_offset_of_m_Rigidbody_2() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_Rigidbody_2)); }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * get_m_Rigidbody_2() const { return ___m_Rigidbody_2; }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A ** get_address_of_m_Rigidbody_2() { return &___m_Rigidbody_2; }
	inline void set_m_Rigidbody_2(Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * value)
	{
		___m_Rigidbody_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Rigidbody_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Collider_3() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_Collider_3)); }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * get_m_Collider_3() const { return ___m_Collider_3; }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 ** get_address_of_m_Collider_3() { return &___m_Collider_3; }
	inline void set_m_Collider_3(Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * value)
	{
		___m_Collider_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Collider_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_ContactCount_4() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_ContactCount_4)); }
	inline int32_t get_m_ContactCount_4() const { return ___m_ContactCount_4; }
	inline int32_t* get_address_of_m_ContactCount_4() { return &___m_ContactCount_4; }
	inline void set_m_ContactCount_4(int32_t value)
	{
		___m_ContactCount_4 = value;
	}

	inline static int32_t get_offset_of_m_ReusedContacts_5() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_ReusedContacts_5)); }
	inline ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* get_m_ReusedContacts_5() const { return ___m_ReusedContacts_5; }
	inline ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B** get_address_of_m_ReusedContacts_5() { return &___m_ReusedContacts_5; }
	inline void set_m_ReusedContacts_5(ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* value)
	{
		___m_ReusedContacts_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ReusedContacts_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_LegacyContacts_6() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_LegacyContacts_6)); }
	inline ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* get_m_LegacyContacts_6() const { return ___m_LegacyContacts_6; }
	inline ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B** get_address_of_m_LegacyContacts_6() { return &___m_LegacyContacts_6; }
	inline void set_m_LegacyContacts_6(ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* value)
	{
		___m_LegacyContacts_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LegacyContacts_6), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Collision
struct Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0_marshaled_pinvoke
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Impulse_0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_RelativeVelocity_1;
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___m_Rigidbody_2;
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 * ___m_ReusedContacts_5;
	ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 * ___m_LegacyContacts_6;
};
// Native definition for COM marshalling of UnityEngine.Collision
struct Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0_marshaled_com
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Impulse_0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_RelativeVelocity_1;
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___m_Rigidbody_2;
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 * ___m_ReusedContacts_5;
	ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 * ___m_LegacyContacts_6;
};

// UnityEngine.UI.ColorBlock
struct  ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_NormalColor_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_HighlightedColor_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_PressedColor_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_SelectedColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_SelectedColor_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_SelectedColor_3() const { return ___m_SelectedColor_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_SelectedColor_3() { return &___m_SelectedColor_3; }
	inline void set_m_SelectedColor_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_SelectedColor_3 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_4() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_DisabledColor_4)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_DisabledColor_4() const { return ___m_DisabledColor_4; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_DisabledColor_4() { return &___m_DisabledColor_4; }
	inline void set_m_DisabledColor_4(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_DisabledColor_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_5() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_ColorMultiplier_5)); }
	inline float get_m_ColorMultiplier_5() const { return ___m_ColorMultiplier_5; }
	inline float* get_address_of_m_ColorMultiplier_5() { return &___m_ColorMultiplier_5; }
	inline void set_m_ColorMultiplier_5(float value)
	{
		___m_ColorMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_6() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_FadeDuration_6)); }
	inline float get_m_FadeDuration_6() const { return ___m_FadeDuration_6; }
	inline float* get_address_of_m_FadeDuration_6() { return &___m_FadeDuration_6; }
	inline void set_m_FadeDuration_6(float value)
	{
		___m_FadeDuration_6 = value;
	}
};

struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields
{
public:
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___defaultColorBlock_7;

public:
	inline static int32_t get_offset_of_defaultColorBlock_7() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields, ___defaultColorBlock_7)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_defaultColorBlock_7() const { return ___defaultColorBlock_7; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_defaultColorBlock_7() { return &___defaultColorBlock_7; }
	inline void set_defaultColorBlock_7(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___defaultColorBlock_7 = value;
	}
};


// UnityEngine.CombineInstance
struct  CombineInstance_t3ECBD54BBDD018CE04D23414CDFE0F78A447B45C 
{
public:
	// System.Int32 UnityEngine.CombineInstance::m_MeshInstanceID
	int32_t ___m_MeshInstanceID_0;
	// System.Int32 UnityEngine.CombineInstance::m_SubMeshIndex
	int32_t ___m_SubMeshIndex_1;
	// UnityEngine.Matrix4x4 UnityEngine.CombineInstance::m_Transform
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___m_Transform_2;
	// UnityEngine.Vector4 UnityEngine.CombineInstance::m_LightmapScaleOffset
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_LightmapScaleOffset_3;
	// UnityEngine.Vector4 UnityEngine.CombineInstance::m_RealtimeLightmapScaleOffset
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RealtimeLightmapScaleOffset_4;

public:
	inline static int32_t get_offset_of_m_MeshInstanceID_0() { return static_cast<int32_t>(offsetof(CombineInstance_t3ECBD54BBDD018CE04D23414CDFE0F78A447B45C, ___m_MeshInstanceID_0)); }
	inline int32_t get_m_MeshInstanceID_0() const { return ___m_MeshInstanceID_0; }
	inline int32_t* get_address_of_m_MeshInstanceID_0() { return &___m_MeshInstanceID_0; }
	inline void set_m_MeshInstanceID_0(int32_t value)
	{
		___m_MeshInstanceID_0 = value;
	}

	inline static int32_t get_offset_of_m_SubMeshIndex_1() { return static_cast<int32_t>(offsetof(CombineInstance_t3ECBD54BBDD018CE04D23414CDFE0F78A447B45C, ___m_SubMeshIndex_1)); }
	inline int32_t get_m_SubMeshIndex_1() const { return ___m_SubMeshIndex_1; }
	inline int32_t* get_address_of_m_SubMeshIndex_1() { return &___m_SubMeshIndex_1; }
	inline void set_m_SubMeshIndex_1(int32_t value)
	{
		___m_SubMeshIndex_1 = value;
	}

	inline static int32_t get_offset_of_m_Transform_2() { return static_cast<int32_t>(offsetof(CombineInstance_t3ECBD54BBDD018CE04D23414CDFE0F78A447B45C, ___m_Transform_2)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_m_Transform_2() const { return ___m_Transform_2; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_m_Transform_2() { return &___m_Transform_2; }
	inline void set_m_Transform_2(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___m_Transform_2 = value;
	}

	inline static int32_t get_offset_of_m_LightmapScaleOffset_3() { return static_cast<int32_t>(offsetof(CombineInstance_t3ECBD54BBDD018CE04D23414CDFE0F78A447B45C, ___m_LightmapScaleOffset_3)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_LightmapScaleOffset_3() const { return ___m_LightmapScaleOffset_3; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_LightmapScaleOffset_3() { return &___m_LightmapScaleOffset_3; }
	inline void set_m_LightmapScaleOffset_3(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_LightmapScaleOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_RealtimeLightmapScaleOffset_4() { return static_cast<int32_t>(offsetof(CombineInstance_t3ECBD54BBDD018CE04D23414CDFE0F78A447B45C, ___m_RealtimeLightmapScaleOffset_4)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RealtimeLightmapScaleOffset_4() const { return ___m_RealtimeLightmapScaleOffset_4; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RealtimeLightmapScaleOffset_4() { return &___m_RealtimeLightmapScaleOffset_4; }
	inline void set_m_RealtimeLightmapScaleOffset_4(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RealtimeLightmapScaleOffset_4 = value;
	}
};


// UnityEngine.Coroutine
struct  Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// UnityEngine.ForceMode
struct  ForceMode_t7778317A4C46140D50D98811D65A7B22E38163D5 
{
public:
	// System.Int32 UnityEngine.ForceMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ForceMode_t7778317A4C46140D50D98811D65A7B22E38163D5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.IndexFormat
struct  IndexFormat_tDB840806BBDDDE721BF45EFE55CFB3EF3038DB20 
{
public:
	// System.Int32 UnityEngine.Rendering.IndexFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(IndexFormat_tDB840806BBDDDE721BF45EFE55CFB3EF3038DB20, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Space
struct  Space_t568D704D2B0AAC3E5894DDFF13DB2E02E2CD539E 
{
public:
	// System.Int32 UnityEngine.Space::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Space_t568D704D2B0AAC3E5894DDFF13DB2E02E2CD539E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Navigation/Mode
struct  Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Selectable/Transition
struct  Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Slider/Direction
struct  Direction_tFC329DCFF9844C052301C90100CA0F5FA9C65961 
{
public:
	// System.Int32 UnityEngine.UI.Slider/Direction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Direction_tFC329DCFF9844C052301C90100CA0F5FA9C65961, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.AudioClip
struct  AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * ___m_PCMSetPositionCallback_5;

public:
	inline static int32_t get_offset_of_m_PCMReaderCallback_4() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMReaderCallback_4)); }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * get_m_PCMReaderCallback_4() const { return ___m_PCMReaderCallback_4; }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B ** get_address_of_m_PCMReaderCallback_4() { return &___m_PCMReaderCallback_4; }
	inline void set_m_PCMReaderCallback_4(PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * value)
	{
		___m_PCMReaderCallback_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMReaderCallback_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_PCMSetPositionCallback_5() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMSetPositionCallback_5)); }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * get_m_PCMSetPositionCallback_5() const { return ___m_PCMSetPositionCallback_5; }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C ** get_address_of_m_PCMSetPositionCallback_5() { return &___m_PCMSetPositionCallback_5; }
	inline void set_m_PCMSetPositionCallback_5(PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * value)
	{
		___m_PCMSetPositionCallback_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMSetPositionCallback_5), (void*)value);
	}
};


// UnityEngine.Component
struct  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Material
struct  Material_t8927C00353A72755313F046D0CE85178AE8218EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Mesh
struct  Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// UnityEngine.UI.Navigation
struct  Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_WrapAround_1() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_WrapAround_1)); }
	inline bool get_m_WrapAround_1() const { return ___m_WrapAround_1; }
	inline bool* get_address_of_m_WrapAround_1() { return &___m_WrapAround_1; }
	inline void set_m_WrapAround_1(bool value)
	{
		___m_WrapAround_1 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_2() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnUp_2)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnUp_2() const { return ___m_SelectOnUp_2; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnUp_2() { return &___m_SelectOnUp_2; }
	inline void set_m_SelectOnUp_2(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnUp_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnUp_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_3() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnDown_3)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnDown_3() const { return ___m_SelectOnDown_3; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnDown_3() { return &___m_SelectOnDown_3; }
	inline void set_m_SelectOnDown_3(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnDown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnDown_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_4() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnLeft_4)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnLeft_4() const { return ___m_SelectOnLeft_4; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnLeft_4() { return &___m_SelectOnLeft_4; }
	inline void set_m_SelectOnLeft_4(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnLeft_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnLeft_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_5() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnRight_5)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnRight_5() const { return ___m_SelectOnRight_5; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnRight_5() { return &___m_SelectOnRight_5; }
	inline void set_m_SelectOnRight_5(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnRight_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnRight_5), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};

// System.SystemException
struct  SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Func`2<UnityEngine.MeshFilter,System.Boolean>
struct  Func_2_tDA13BFE7A65FB2551A825A13C2B5B061461BA351  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Collider
struct  Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.MeshFilter
struct  MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.NotSupportedException
struct  NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.Renderer
struct  Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Rigidbody
struct  Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.AudioBehaviour
struct  AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.BoxCollider
struct  BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5  : public Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02
{
public:

public:
};


// UnityEngine.MeshRenderer
struct  MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B  : public Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// AudioController
struct  AudioController_tA9F9625D78D7B82E16202C1EBD62C8CA84CE7B5E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.AudioSource AudioController::_audioSource
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ____audioSource_4;
	// UnityEngine.AudioClip[] AudioController::_audioClips
	AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* ____audioClips_5;
	// System.Int32 AudioController::_randomTrack
	int32_t ____randomTrack_6;

public:
	inline static int32_t get_offset_of__audioSource_4() { return static_cast<int32_t>(offsetof(AudioController_tA9F9625D78D7B82E16202C1EBD62C8CA84CE7B5E, ____audioSource_4)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get__audioSource_4() const { return ____audioSource_4; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of__audioSource_4() { return &____audioSource_4; }
	inline void set__audioSource_4(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		____audioSource_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____audioSource_4), (void*)value);
	}

	inline static int32_t get_offset_of__audioClips_5() { return static_cast<int32_t>(offsetof(AudioController_tA9F9625D78D7B82E16202C1EBD62C8CA84CE7B5E, ____audioClips_5)); }
	inline AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* get__audioClips_5() const { return ____audioClips_5; }
	inline AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE** get_address_of__audioClips_5() { return &____audioClips_5; }
	inline void set__audioClips_5(AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* value)
	{
		____audioClips_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____audioClips_5), (void*)value);
	}

	inline static int32_t get_offset_of__randomTrack_6() { return static_cast<int32_t>(offsetof(AudioController_tA9F9625D78D7B82E16202C1EBD62C8CA84CE7B5E, ____randomTrack_6)); }
	inline int32_t get__randomTrack_6() const { return ____randomTrack_6; }
	inline int32_t* get_address_of__randomTrack_6() { return &____randomTrack_6; }
	inline void set__randomTrack_6(int32_t value)
	{
		____randomTrack_6 = value;
	}
};


// UnityEngine.AudioSource
struct  AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B  : public AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A
{
public:

public:
};


// Balance
struct  Balance_t2C96E30A413FF03954FF7EE1D62E73AAA4A48ADF  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 Balance::_balance
	int32_t ____balance_4;

public:
	inline static int32_t get_offset_of__balance_4() { return static_cast<int32_t>(offsetof(Balance_t2C96E30A413FF03954FF7EE1D62E73AAA4A48ADF, ____balance_4)); }
	inline int32_t get__balance_4() const { return ____balance_4; }
	inline int32_t* get_address_of__balance_4() { return &____balance_4; }
	inline void set__balance_4(int32_t value)
	{
		____balance_4 = value;
	}
};


// CameraFollow
struct  CameraFollow_tC9B62E254DA1376073E7B793597F9D6CD2A82DF8  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Transform CameraFollow::_player
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ____player_4;
	// UnityEngine.Transform CameraFollow::_cameraPoint
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ____cameraPoint_5;
	// System.Single CameraFollow::_yDist
	float ____yDist_6;
	// System.Single CameraFollow::_zDist
	float ____zDist_7;
	// UnityEngine.Vector3 CameraFollow::dir
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___dir_8;
	// UnityEngine.Quaternion CameraFollow::rot
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rot_9;
	// System.Single CameraFollow::_smoothTime
	float ____smoothTime_10;
	// UnityEngine.Vector3 CameraFollow::velocity
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___velocity_11;

public:
	inline static int32_t get_offset_of__player_4() { return static_cast<int32_t>(offsetof(CameraFollow_tC9B62E254DA1376073E7B793597F9D6CD2A82DF8, ____player_4)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get__player_4() const { return ____player_4; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of__player_4() { return &____player_4; }
	inline void set__player_4(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		____player_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____player_4), (void*)value);
	}

	inline static int32_t get_offset_of__cameraPoint_5() { return static_cast<int32_t>(offsetof(CameraFollow_tC9B62E254DA1376073E7B793597F9D6CD2A82DF8, ____cameraPoint_5)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get__cameraPoint_5() const { return ____cameraPoint_5; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of__cameraPoint_5() { return &____cameraPoint_5; }
	inline void set__cameraPoint_5(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		____cameraPoint_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____cameraPoint_5), (void*)value);
	}

	inline static int32_t get_offset_of__yDist_6() { return static_cast<int32_t>(offsetof(CameraFollow_tC9B62E254DA1376073E7B793597F9D6CD2A82DF8, ____yDist_6)); }
	inline float get__yDist_6() const { return ____yDist_6; }
	inline float* get_address_of__yDist_6() { return &____yDist_6; }
	inline void set__yDist_6(float value)
	{
		____yDist_6 = value;
	}

	inline static int32_t get_offset_of__zDist_7() { return static_cast<int32_t>(offsetof(CameraFollow_tC9B62E254DA1376073E7B793597F9D6CD2A82DF8, ____zDist_7)); }
	inline float get__zDist_7() const { return ____zDist_7; }
	inline float* get_address_of__zDist_7() { return &____zDist_7; }
	inline void set__zDist_7(float value)
	{
		____zDist_7 = value;
	}

	inline static int32_t get_offset_of_dir_8() { return static_cast<int32_t>(offsetof(CameraFollow_tC9B62E254DA1376073E7B793597F9D6CD2A82DF8, ___dir_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_dir_8() const { return ___dir_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_dir_8() { return &___dir_8; }
	inline void set_dir_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___dir_8 = value;
	}

	inline static int32_t get_offset_of_rot_9() { return static_cast<int32_t>(offsetof(CameraFollow_tC9B62E254DA1376073E7B793597F9D6CD2A82DF8, ___rot_9)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_rot_9() const { return ___rot_9; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_rot_9() { return &___rot_9; }
	inline void set_rot_9(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___rot_9 = value;
	}

	inline static int32_t get_offset_of__smoothTime_10() { return static_cast<int32_t>(offsetof(CameraFollow_tC9B62E254DA1376073E7B793597F9D6CD2A82DF8, ____smoothTime_10)); }
	inline float get__smoothTime_10() const { return ____smoothTime_10; }
	inline float* get_address_of__smoothTime_10() { return &____smoothTime_10; }
	inline void set__smoothTime_10(float value)
	{
		____smoothTime_10 = value;
	}

	inline static int32_t get_offset_of_velocity_11() { return static_cast<int32_t>(offsetof(CameraFollow_tC9B62E254DA1376073E7B793597F9D6CD2A82DF8, ___velocity_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_velocity_11() const { return ___velocity_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_velocity_11() { return &___velocity_11; }
	inline void set_velocity_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___velocity_11 = value;
	}
};


// Chunk
struct  Chunk_t9B72CD748941C5A60C8A8C73024F32445F793EC2  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Transform Chunk::begin
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___begin_4;
	// UnityEngine.Transform Chunk::end
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___end_5;
	// Coin[] Chunk::_allCoins
	CoinU5BU5D_tF692E89BF912268D41D6362D65CD174BA878BC87* ____allCoins_6;

public:
	inline static int32_t get_offset_of_begin_4() { return static_cast<int32_t>(offsetof(Chunk_t9B72CD748941C5A60C8A8C73024F32445F793EC2, ___begin_4)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_begin_4() const { return ___begin_4; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_begin_4() { return &___begin_4; }
	inline void set_begin_4(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___begin_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___begin_4), (void*)value);
	}

	inline static int32_t get_offset_of_end_5() { return static_cast<int32_t>(offsetof(Chunk_t9B72CD748941C5A60C8A8C73024F32445F793EC2, ___end_5)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_end_5() const { return ___end_5; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_end_5() { return &___end_5; }
	inline void set_end_5(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___end_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___end_5), (void*)value);
	}

	inline static int32_t get_offset_of__allCoins_6() { return static_cast<int32_t>(offsetof(Chunk_t9B72CD748941C5A60C8A8C73024F32445F793EC2, ____allCoins_6)); }
	inline CoinU5BU5D_tF692E89BF912268D41D6362D65CD174BA878BC87* get__allCoins_6() const { return ____allCoins_6; }
	inline CoinU5BU5D_tF692E89BF912268D41D6362D65CD174BA878BC87** get_address_of__allCoins_6() { return &____allCoins_6; }
	inline void set__allCoins_6(CoinU5BU5D_tF692E89BF912268D41D6362D65CD174BA878BC87* value)
	{
		____allCoins_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____allCoins_6), (void*)value);
	}
};


// ChunkCreator
struct  ChunkCreator_tE0280F95F7F316AA5D7907CF17F3ADD314C81074  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Transform ChunkCreator::_playerTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ____playerTransform_4;
	// UnityEngine.Transform ChunkCreator::_cameraTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ____cameraTransform_5;
	// Chunk ChunkCreator::_firstChunk
	Chunk_t9B72CD748941C5A60C8A8C73024F32445F793EC2 * ____firstChunk_6;
	// ChunkHolder[] ChunkCreator::_chunkHolders
	ChunkHolderU5BU5D_t88B5A732A46BD3B7D6C0C56321912FA3130395E0* ____chunkHolders_7;
	// Coin[] ChunkCreator::_allCoins
	CoinU5BU5D_tF692E89BF912268D41D6362D65CD174BA878BC87* ____allCoins_8;
	// UnityEngine.Vector3 ChunkCreator::_nativeCarPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ____nativeCarPosition_9;
	// UnityEngine.Vector3 ChunkCreator::_nativeChunkPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ____nativeChunkPosition_10;
	// UnityEngine.Vector3 ChunkCreator::_nativeCameraPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ____nativeCameraPosition_11;
	// System.Int32 ChunkCreator::_maxCount
	int32_t ____maxCount_12;
	// System.Collections.Generic.List`1<Chunk> ChunkCreator::_spawnedChunks
	List_1_t7A626F883F5F76159AA059998344989D9386C55C * ____spawnedChunks_13;

public:
	inline static int32_t get_offset_of__playerTransform_4() { return static_cast<int32_t>(offsetof(ChunkCreator_tE0280F95F7F316AA5D7907CF17F3ADD314C81074, ____playerTransform_4)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get__playerTransform_4() const { return ____playerTransform_4; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of__playerTransform_4() { return &____playerTransform_4; }
	inline void set__playerTransform_4(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		____playerTransform_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____playerTransform_4), (void*)value);
	}

	inline static int32_t get_offset_of__cameraTransform_5() { return static_cast<int32_t>(offsetof(ChunkCreator_tE0280F95F7F316AA5D7907CF17F3ADD314C81074, ____cameraTransform_5)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get__cameraTransform_5() const { return ____cameraTransform_5; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of__cameraTransform_5() { return &____cameraTransform_5; }
	inline void set__cameraTransform_5(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		____cameraTransform_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____cameraTransform_5), (void*)value);
	}

	inline static int32_t get_offset_of__firstChunk_6() { return static_cast<int32_t>(offsetof(ChunkCreator_tE0280F95F7F316AA5D7907CF17F3ADD314C81074, ____firstChunk_6)); }
	inline Chunk_t9B72CD748941C5A60C8A8C73024F32445F793EC2 * get__firstChunk_6() const { return ____firstChunk_6; }
	inline Chunk_t9B72CD748941C5A60C8A8C73024F32445F793EC2 ** get_address_of__firstChunk_6() { return &____firstChunk_6; }
	inline void set__firstChunk_6(Chunk_t9B72CD748941C5A60C8A8C73024F32445F793EC2 * value)
	{
		____firstChunk_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____firstChunk_6), (void*)value);
	}

	inline static int32_t get_offset_of__chunkHolders_7() { return static_cast<int32_t>(offsetof(ChunkCreator_tE0280F95F7F316AA5D7907CF17F3ADD314C81074, ____chunkHolders_7)); }
	inline ChunkHolderU5BU5D_t88B5A732A46BD3B7D6C0C56321912FA3130395E0* get__chunkHolders_7() const { return ____chunkHolders_7; }
	inline ChunkHolderU5BU5D_t88B5A732A46BD3B7D6C0C56321912FA3130395E0** get_address_of__chunkHolders_7() { return &____chunkHolders_7; }
	inline void set__chunkHolders_7(ChunkHolderU5BU5D_t88B5A732A46BD3B7D6C0C56321912FA3130395E0* value)
	{
		____chunkHolders_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____chunkHolders_7), (void*)value);
	}

	inline static int32_t get_offset_of__allCoins_8() { return static_cast<int32_t>(offsetof(ChunkCreator_tE0280F95F7F316AA5D7907CF17F3ADD314C81074, ____allCoins_8)); }
	inline CoinU5BU5D_tF692E89BF912268D41D6362D65CD174BA878BC87* get__allCoins_8() const { return ____allCoins_8; }
	inline CoinU5BU5D_tF692E89BF912268D41D6362D65CD174BA878BC87** get_address_of__allCoins_8() { return &____allCoins_8; }
	inline void set__allCoins_8(CoinU5BU5D_tF692E89BF912268D41D6362D65CD174BA878BC87* value)
	{
		____allCoins_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____allCoins_8), (void*)value);
	}

	inline static int32_t get_offset_of__nativeCarPosition_9() { return static_cast<int32_t>(offsetof(ChunkCreator_tE0280F95F7F316AA5D7907CF17F3ADD314C81074, ____nativeCarPosition_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get__nativeCarPosition_9() const { return ____nativeCarPosition_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of__nativeCarPosition_9() { return &____nativeCarPosition_9; }
	inline void set__nativeCarPosition_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		____nativeCarPosition_9 = value;
	}

	inline static int32_t get_offset_of__nativeChunkPosition_10() { return static_cast<int32_t>(offsetof(ChunkCreator_tE0280F95F7F316AA5D7907CF17F3ADD314C81074, ____nativeChunkPosition_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get__nativeChunkPosition_10() const { return ____nativeChunkPosition_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of__nativeChunkPosition_10() { return &____nativeChunkPosition_10; }
	inline void set__nativeChunkPosition_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		____nativeChunkPosition_10 = value;
	}

	inline static int32_t get_offset_of__nativeCameraPosition_11() { return static_cast<int32_t>(offsetof(ChunkCreator_tE0280F95F7F316AA5D7907CF17F3ADD314C81074, ____nativeCameraPosition_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get__nativeCameraPosition_11() const { return ____nativeCameraPosition_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of__nativeCameraPosition_11() { return &____nativeCameraPosition_11; }
	inline void set__nativeCameraPosition_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		____nativeCameraPosition_11 = value;
	}

	inline static int32_t get_offset_of__maxCount_12() { return static_cast<int32_t>(offsetof(ChunkCreator_tE0280F95F7F316AA5D7907CF17F3ADD314C81074, ____maxCount_12)); }
	inline int32_t get__maxCount_12() const { return ____maxCount_12; }
	inline int32_t* get_address_of__maxCount_12() { return &____maxCount_12; }
	inline void set__maxCount_12(int32_t value)
	{
		____maxCount_12 = value;
	}

	inline static int32_t get_offset_of__spawnedChunks_13() { return static_cast<int32_t>(offsetof(ChunkCreator_tE0280F95F7F316AA5D7907CF17F3ADD314C81074, ____spawnedChunks_13)); }
	inline List_1_t7A626F883F5F76159AA059998344989D9386C55C * get__spawnedChunks_13() const { return ____spawnedChunks_13; }
	inline List_1_t7A626F883F5F76159AA059998344989D9386C55C ** get_address_of__spawnedChunks_13() { return &____spawnedChunks_13; }
	inline void set__spawnedChunks_13(List_1_t7A626F883F5F76159AA059998344989D9386C55C * value)
	{
		____spawnedChunks_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____spawnedChunks_13), (void*)value);
	}
};


// ChunkHolder
struct  ChunkHolder_t93603EBB9F5C67C25E077B97A7A85AD9BFD9BBE9  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject ChunkHolder::_chunkGameObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ____chunkGameObject_4;
	// System.Int32 ChunkHolder::_chunksAmount
	int32_t ____chunksAmount_5;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> ChunkHolder::_allCopyes
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ____allCopyes_6;

public:
	inline static int32_t get_offset_of__chunkGameObject_4() { return static_cast<int32_t>(offsetof(ChunkHolder_t93603EBB9F5C67C25E077B97A7A85AD9BFD9BBE9, ____chunkGameObject_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get__chunkGameObject_4() const { return ____chunkGameObject_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of__chunkGameObject_4() { return &____chunkGameObject_4; }
	inline void set__chunkGameObject_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		____chunkGameObject_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____chunkGameObject_4), (void*)value);
	}

	inline static int32_t get_offset_of__chunksAmount_5() { return static_cast<int32_t>(offsetof(ChunkHolder_t93603EBB9F5C67C25E077B97A7A85AD9BFD9BBE9, ____chunksAmount_5)); }
	inline int32_t get__chunksAmount_5() const { return ____chunksAmount_5; }
	inline int32_t* get_address_of__chunksAmount_5() { return &____chunksAmount_5; }
	inline void set__chunksAmount_5(int32_t value)
	{
		____chunksAmount_5 = value;
	}

	inline static int32_t get_offset_of__allCopyes_6() { return static_cast<int32_t>(offsetof(ChunkHolder_t93603EBB9F5C67C25E077B97A7A85AD9BFD9BBE9, ____allCopyes_6)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get__allCopyes_6() const { return ____allCopyes_6; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of__allCopyes_6() { return &____allCopyes_6; }
	inline void set__allCopyes_6(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		____allCopyes_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____allCopyes_6), (void*)value);
	}
};


// Coin
struct  Coin_t327139A024DB28F40ED5C48479FA8AB572E86550  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 Coin::_coinValue
	int32_t ____coinValue_4;

public:
	inline static int32_t get_offset_of__coinValue_4() { return static_cast<int32_t>(offsetof(Coin_t327139A024DB28F40ED5C48479FA8AB572E86550, ____coinValue_4)); }
	inline int32_t get__coinValue_4() const { return ____coinValue_4; }
	inline int32_t* get_address_of__coinValue_4() { return &____coinValue_4; }
	inline void set__coinValue_4(int32_t value)
	{
		____coinValue_4 = value;
	}
};


// CoinsCreator
struct  CoinsCreator_t1BC3124D0C17A37853ED12A89D2FAA146CF42942  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// DamageZone
struct  DamageZone_t7E17CB7C4777F0F7319F4122AE04A70C274632D9  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Vector3 DamageZone::_startPos
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ____startPos_4;
	// UnityEngine.Quaternion DamageZone::_startRot
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ____startRot_5;
	// System.Single DamageZone::_speed
	float ____speed_6;
	// UnityEngine.Vector3 DamageZone::_direction
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ____direction_7;
	// UnityEngine.Rigidbody DamageZone::_rigidBody
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ____rigidBody_8;
	// UnityEngine.BoxCollider DamageZone::_boxCollider
	BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * ____boxCollider_9;

public:
	inline static int32_t get_offset_of__startPos_4() { return static_cast<int32_t>(offsetof(DamageZone_t7E17CB7C4777F0F7319F4122AE04A70C274632D9, ____startPos_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get__startPos_4() const { return ____startPos_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of__startPos_4() { return &____startPos_4; }
	inline void set__startPos_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		____startPos_4 = value;
	}

	inline static int32_t get_offset_of__startRot_5() { return static_cast<int32_t>(offsetof(DamageZone_t7E17CB7C4777F0F7319F4122AE04A70C274632D9, ____startRot_5)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get__startRot_5() const { return ____startRot_5; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of__startRot_5() { return &____startRot_5; }
	inline void set__startRot_5(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		____startRot_5 = value;
	}

	inline static int32_t get_offset_of__speed_6() { return static_cast<int32_t>(offsetof(DamageZone_t7E17CB7C4777F0F7319F4122AE04A70C274632D9, ____speed_6)); }
	inline float get__speed_6() const { return ____speed_6; }
	inline float* get_address_of__speed_6() { return &____speed_6; }
	inline void set__speed_6(float value)
	{
		____speed_6 = value;
	}

	inline static int32_t get_offset_of__direction_7() { return static_cast<int32_t>(offsetof(DamageZone_t7E17CB7C4777F0F7319F4122AE04A70C274632D9, ____direction_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get__direction_7() const { return ____direction_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of__direction_7() { return &____direction_7; }
	inline void set__direction_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		____direction_7 = value;
	}

	inline static int32_t get_offset_of__rigidBody_8() { return static_cast<int32_t>(offsetof(DamageZone_t7E17CB7C4777F0F7319F4122AE04A70C274632D9, ____rigidBody_8)); }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * get__rigidBody_8() const { return ____rigidBody_8; }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A ** get_address_of__rigidBody_8() { return &____rigidBody_8; }
	inline void set__rigidBody_8(Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * value)
	{
		____rigidBody_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rigidBody_8), (void*)value);
	}

	inline static int32_t get_offset_of__boxCollider_9() { return static_cast<int32_t>(offsetof(DamageZone_t7E17CB7C4777F0F7319F4122AE04A70C274632D9, ____boxCollider_9)); }
	inline BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * get__boxCollider_9() const { return ____boxCollider_9; }
	inline BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 ** get_address_of__boxCollider_9() { return &____boxCollider_9; }
	inline void set__boxCollider_9(BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * value)
	{
		____boxCollider_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____boxCollider_9), (void*)value);
	}
};


// DeadZone
struct  DeadZone_tD1E10D680CDC9E8D0C44EDD7C880F4AD1EDA8CAD  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// DifficultySystem
struct  DifficultySystem_t890C85560517296BDCC85431D950A36A8E5FA6E7  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Movement DifficultySystem::_movement
	Movement_t81B548083980F3B23F17AC9CA1C906E46F4B594C * ____movement_4;

public:
	inline static int32_t get_offset_of__movement_4() { return static_cast<int32_t>(offsetof(DifficultySystem_t890C85560517296BDCC85431D950A36A8E5FA6E7, ____movement_4)); }
	inline Movement_t81B548083980F3B23F17AC9CA1C906E46F4B594C * get__movement_4() const { return ____movement_4; }
	inline Movement_t81B548083980F3B23F17AC9CA1C906E46F4B594C ** get_address_of__movement_4() { return &____movement_4; }
	inline void set__movement_4(Movement_t81B548083980F3B23F17AC9CA1C906E46F4B594C * value)
	{
		____movement_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____movement_4), (void*)value);
	}
};


// FPS
struct  FPS_t2BF93E8D6D0DE5740268969C725821F2730E9D88  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// HCTraffic
struct  HCTraffic_t1CEB8C258DECA919DFD60C350B3D04680E06CC02  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 HCTraffic::MaxVehicleCount
	int32_t ___MaxVehicleCount_4;
	// System.Single HCTraffic::MinSpawnInterval
	float ___MinSpawnInterval_5;
	// System.Single HCTraffic::MaxSpawnInterval
	float ___MaxSpawnInterval_6;
	// System.Single HCTraffic::MaxStartScatter
	float ___MaxStartScatter_7;
	// UnityEngine.GameObject[] HCTraffic::Vehicle
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___Vehicle_8;
	// System.Single HCTraffic::CarLineSpeedVarMin
	float ___CarLineSpeedVarMin_9;
	// System.Single HCTraffic::CarLineSpeedVarMax
	float ___CarLineSpeedVarMax_10;
	// System.Int32 HCTraffic::VehicleCount
	int32_t ___VehicleCount_11;
	// UnityEngine.Transform[] HCTraffic::SpawnPoints
	TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* ___SpawnPoints_12;
	// System.Boolean HCTraffic::locked
	bool ___locked_13;
	// System.Single[] HCTraffic::CarSpeedVariations
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___CarSpeedVariations_14;
	// UnityEngine.GameObject HCTraffic::VehicleContainer
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___VehicleContainer_15;

public:
	inline static int32_t get_offset_of_MaxVehicleCount_4() { return static_cast<int32_t>(offsetof(HCTraffic_t1CEB8C258DECA919DFD60C350B3D04680E06CC02, ___MaxVehicleCount_4)); }
	inline int32_t get_MaxVehicleCount_4() const { return ___MaxVehicleCount_4; }
	inline int32_t* get_address_of_MaxVehicleCount_4() { return &___MaxVehicleCount_4; }
	inline void set_MaxVehicleCount_4(int32_t value)
	{
		___MaxVehicleCount_4 = value;
	}

	inline static int32_t get_offset_of_MinSpawnInterval_5() { return static_cast<int32_t>(offsetof(HCTraffic_t1CEB8C258DECA919DFD60C350B3D04680E06CC02, ___MinSpawnInterval_5)); }
	inline float get_MinSpawnInterval_5() const { return ___MinSpawnInterval_5; }
	inline float* get_address_of_MinSpawnInterval_5() { return &___MinSpawnInterval_5; }
	inline void set_MinSpawnInterval_5(float value)
	{
		___MinSpawnInterval_5 = value;
	}

	inline static int32_t get_offset_of_MaxSpawnInterval_6() { return static_cast<int32_t>(offsetof(HCTraffic_t1CEB8C258DECA919DFD60C350B3D04680E06CC02, ___MaxSpawnInterval_6)); }
	inline float get_MaxSpawnInterval_6() const { return ___MaxSpawnInterval_6; }
	inline float* get_address_of_MaxSpawnInterval_6() { return &___MaxSpawnInterval_6; }
	inline void set_MaxSpawnInterval_6(float value)
	{
		___MaxSpawnInterval_6 = value;
	}

	inline static int32_t get_offset_of_MaxStartScatter_7() { return static_cast<int32_t>(offsetof(HCTraffic_t1CEB8C258DECA919DFD60C350B3D04680E06CC02, ___MaxStartScatter_7)); }
	inline float get_MaxStartScatter_7() const { return ___MaxStartScatter_7; }
	inline float* get_address_of_MaxStartScatter_7() { return &___MaxStartScatter_7; }
	inline void set_MaxStartScatter_7(float value)
	{
		___MaxStartScatter_7 = value;
	}

	inline static int32_t get_offset_of_Vehicle_8() { return static_cast<int32_t>(offsetof(HCTraffic_t1CEB8C258DECA919DFD60C350B3D04680E06CC02, ___Vehicle_8)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_Vehicle_8() const { return ___Vehicle_8; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_Vehicle_8() { return &___Vehicle_8; }
	inline void set_Vehicle_8(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___Vehicle_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Vehicle_8), (void*)value);
	}

	inline static int32_t get_offset_of_CarLineSpeedVarMin_9() { return static_cast<int32_t>(offsetof(HCTraffic_t1CEB8C258DECA919DFD60C350B3D04680E06CC02, ___CarLineSpeedVarMin_9)); }
	inline float get_CarLineSpeedVarMin_9() const { return ___CarLineSpeedVarMin_9; }
	inline float* get_address_of_CarLineSpeedVarMin_9() { return &___CarLineSpeedVarMin_9; }
	inline void set_CarLineSpeedVarMin_9(float value)
	{
		___CarLineSpeedVarMin_9 = value;
	}

	inline static int32_t get_offset_of_CarLineSpeedVarMax_10() { return static_cast<int32_t>(offsetof(HCTraffic_t1CEB8C258DECA919DFD60C350B3D04680E06CC02, ___CarLineSpeedVarMax_10)); }
	inline float get_CarLineSpeedVarMax_10() const { return ___CarLineSpeedVarMax_10; }
	inline float* get_address_of_CarLineSpeedVarMax_10() { return &___CarLineSpeedVarMax_10; }
	inline void set_CarLineSpeedVarMax_10(float value)
	{
		___CarLineSpeedVarMax_10 = value;
	}

	inline static int32_t get_offset_of_VehicleCount_11() { return static_cast<int32_t>(offsetof(HCTraffic_t1CEB8C258DECA919DFD60C350B3D04680E06CC02, ___VehicleCount_11)); }
	inline int32_t get_VehicleCount_11() const { return ___VehicleCount_11; }
	inline int32_t* get_address_of_VehicleCount_11() { return &___VehicleCount_11; }
	inline void set_VehicleCount_11(int32_t value)
	{
		___VehicleCount_11 = value;
	}

	inline static int32_t get_offset_of_SpawnPoints_12() { return static_cast<int32_t>(offsetof(HCTraffic_t1CEB8C258DECA919DFD60C350B3D04680E06CC02, ___SpawnPoints_12)); }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* get_SpawnPoints_12() const { return ___SpawnPoints_12; }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D** get_address_of_SpawnPoints_12() { return &___SpawnPoints_12; }
	inline void set_SpawnPoints_12(TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* value)
	{
		___SpawnPoints_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SpawnPoints_12), (void*)value);
	}

	inline static int32_t get_offset_of_locked_13() { return static_cast<int32_t>(offsetof(HCTraffic_t1CEB8C258DECA919DFD60C350B3D04680E06CC02, ___locked_13)); }
	inline bool get_locked_13() const { return ___locked_13; }
	inline bool* get_address_of_locked_13() { return &___locked_13; }
	inline void set_locked_13(bool value)
	{
		___locked_13 = value;
	}

	inline static int32_t get_offset_of_CarSpeedVariations_14() { return static_cast<int32_t>(offsetof(HCTraffic_t1CEB8C258DECA919DFD60C350B3D04680E06CC02, ___CarSpeedVariations_14)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_CarSpeedVariations_14() const { return ___CarSpeedVariations_14; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_CarSpeedVariations_14() { return &___CarSpeedVariations_14; }
	inline void set_CarSpeedVariations_14(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___CarSpeedVariations_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CarSpeedVariations_14), (void*)value);
	}

	inline static int32_t get_offset_of_VehicleContainer_15() { return static_cast<int32_t>(offsetof(HCTraffic_t1CEB8C258DECA919DFD60C350B3D04680E06CC02, ___VehicleContainer_15)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_VehicleContainer_15() const { return ___VehicleContainer_15; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_VehicleContainer_15() { return &___VehicleContainer_15; }
	inline void set_VehicleContainer_15(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___VehicleContainer_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___VehicleContainer_15), (void*)value);
	}
};


// HCVehicle
struct  HCVehicle_tD4C626176997767010D3E92648CED7AA2AFADAE1  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single HCVehicle::CarSpeed
	float ___CarSpeed_4;
	// System.Single HCVehicle::CarLife
	float ___CarLife_5;
	// HCTraffic HCVehicle::_HCTrafficLinked
	HCTraffic_t1CEB8C258DECA919DFD60C350B3D04680E06CC02 * ____HCTrafficLinked_6;
	// UnityEngine.Vector3 HCVehicle::StartPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___StartPosition_7;

public:
	inline static int32_t get_offset_of_CarSpeed_4() { return static_cast<int32_t>(offsetof(HCVehicle_tD4C626176997767010D3E92648CED7AA2AFADAE1, ___CarSpeed_4)); }
	inline float get_CarSpeed_4() const { return ___CarSpeed_4; }
	inline float* get_address_of_CarSpeed_4() { return &___CarSpeed_4; }
	inline void set_CarSpeed_4(float value)
	{
		___CarSpeed_4 = value;
	}

	inline static int32_t get_offset_of_CarLife_5() { return static_cast<int32_t>(offsetof(HCVehicle_tD4C626176997767010D3E92648CED7AA2AFADAE1, ___CarLife_5)); }
	inline float get_CarLife_5() const { return ___CarLife_5; }
	inline float* get_address_of_CarLife_5() { return &___CarLife_5; }
	inline void set_CarLife_5(float value)
	{
		___CarLife_5 = value;
	}

	inline static int32_t get_offset_of__HCTrafficLinked_6() { return static_cast<int32_t>(offsetof(HCVehicle_tD4C626176997767010D3E92648CED7AA2AFADAE1, ____HCTrafficLinked_6)); }
	inline HCTraffic_t1CEB8C258DECA919DFD60C350B3D04680E06CC02 * get__HCTrafficLinked_6() const { return ____HCTrafficLinked_6; }
	inline HCTraffic_t1CEB8C258DECA919DFD60C350B3D04680E06CC02 ** get_address_of__HCTrafficLinked_6() { return &____HCTrafficLinked_6; }
	inline void set__HCTrafficLinked_6(HCTraffic_t1CEB8C258DECA919DFD60C350B3D04680E06CC02 * value)
	{
		____HCTrafficLinked_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____HCTrafficLinked_6), (void*)value);
	}

	inline static int32_t get_offset_of_StartPosition_7() { return static_cast<int32_t>(offsetof(HCVehicle_tD4C626176997767010D3E92648CED7AA2AFADAE1, ___StartPosition_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_StartPosition_7() const { return ___StartPosition_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_StartPosition_7() { return &___StartPosition_7; }
	inline void set_StartPosition_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___StartPosition_7 = value;
	}
};


// Health
struct  Health_tB86D9293C9CF1E5B8E4C7271395F56DD4C67AE96  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject Health::_gameOverPanel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ____gameOverPanel_4;
	// UnityEngine.UI.Slider Health::_healthSlider
	Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * ____healthSlider_5;
	// System.Int32 Health::_health
	int32_t ____health_6;
	// Movement Health::_playersMovement
	Movement_t81B548083980F3B23F17AC9CA1C906E46F4B594C * ____playersMovement_7;
	// Session Health::_currentSession
	Session_tBF465A2B862D5E44002D0BBEE7F68FB6B64129BC * ____currentSession_8;

public:
	inline static int32_t get_offset_of__gameOverPanel_4() { return static_cast<int32_t>(offsetof(Health_tB86D9293C9CF1E5B8E4C7271395F56DD4C67AE96, ____gameOverPanel_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get__gameOverPanel_4() const { return ____gameOverPanel_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of__gameOverPanel_4() { return &____gameOverPanel_4; }
	inline void set__gameOverPanel_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		____gameOverPanel_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____gameOverPanel_4), (void*)value);
	}

	inline static int32_t get_offset_of__healthSlider_5() { return static_cast<int32_t>(offsetof(Health_tB86D9293C9CF1E5B8E4C7271395F56DD4C67AE96, ____healthSlider_5)); }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * get__healthSlider_5() const { return ____healthSlider_5; }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A ** get_address_of__healthSlider_5() { return &____healthSlider_5; }
	inline void set__healthSlider_5(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * value)
	{
		____healthSlider_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____healthSlider_5), (void*)value);
	}

	inline static int32_t get_offset_of__health_6() { return static_cast<int32_t>(offsetof(Health_tB86D9293C9CF1E5B8E4C7271395F56DD4C67AE96, ____health_6)); }
	inline int32_t get__health_6() const { return ____health_6; }
	inline int32_t* get_address_of__health_6() { return &____health_6; }
	inline void set__health_6(int32_t value)
	{
		____health_6 = value;
	}

	inline static int32_t get_offset_of__playersMovement_7() { return static_cast<int32_t>(offsetof(Health_tB86D9293C9CF1E5B8E4C7271395F56DD4C67AE96, ____playersMovement_7)); }
	inline Movement_t81B548083980F3B23F17AC9CA1C906E46F4B594C * get__playersMovement_7() const { return ____playersMovement_7; }
	inline Movement_t81B548083980F3B23F17AC9CA1C906E46F4B594C ** get_address_of__playersMovement_7() { return &____playersMovement_7; }
	inline void set__playersMovement_7(Movement_t81B548083980F3B23F17AC9CA1C906E46F4B594C * value)
	{
		____playersMovement_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____playersMovement_7), (void*)value);
	}

	inline static int32_t get_offset_of__currentSession_8() { return static_cast<int32_t>(offsetof(Health_tB86D9293C9CF1E5B8E4C7271395F56DD4C67AE96, ____currentSession_8)); }
	inline Session_tBF465A2B862D5E44002D0BBEE7F68FB6B64129BC * get__currentSession_8() const { return ____currentSession_8; }
	inline Session_tBF465A2B862D5E44002D0BBEE7F68FB6B64129BC ** get_address_of__currentSession_8() { return &____currentSession_8; }
	inline void set__currentSession_8(Session_tBF465A2B862D5E44002D0BBEE7F68FB6B64129BC * value)
	{
		____currentSession_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____currentSession_8), (void*)value);
	}
};


// HeighLimit
struct  HeighLimit_t9C5A911EC2D9A78566683C9D7C7B658B30D90AB4  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// LowZone
struct  LowZone_t01FB485ABD40AB26E05D1531AB4E9010B2A1844B  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// CameraFollow LowZone::_cameraFollow
	CameraFollow_tC9B62E254DA1376073E7B793597F9D6CD2A82DF8 * ____cameraFollow_4;

public:
	inline static int32_t get_offset_of__cameraFollow_4() { return static_cast<int32_t>(offsetof(LowZone_t01FB485ABD40AB26E05D1531AB4E9010B2A1844B, ____cameraFollow_4)); }
	inline CameraFollow_tC9B62E254DA1376073E7B793597F9D6CD2A82DF8 * get__cameraFollow_4() const { return ____cameraFollow_4; }
	inline CameraFollow_tC9B62E254DA1376073E7B793597F9D6CD2A82DF8 ** get_address_of__cameraFollow_4() { return &____cameraFollow_4; }
	inline void set__cameraFollow_4(CameraFollow_tC9B62E254DA1376073E7B793597F9D6CD2A82DF8 * value)
	{
		____cameraFollow_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____cameraFollow_4), (void*)value);
	}
};


// Menu
struct  Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Balance Menu::_totalBalance
	Balance_t2C96E30A413FF03954FF7EE1D62E73AAA4A48ADF * ____totalBalance_4;
	// Session Menu::_session
	Session_tBF465A2B862D5E44002D0BBEE7F68FB6B64129BC * ____session_5;

public:
	inline static int32_t get_offset_of__totalBalance_4() { return static_cast<int32_t>(offsetof(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6, ____totalBalance_4)); }
	inline Balance_t2C96E30A413FF03954FF7EE1D62E73AAA4A48ADF * get__totalBalance_4() const { return ____totalBalance_4; }
	inline Balance_t2C96E30A413FF03954FF7EE1D62E73AAA4A48ADF ** get_address_of__totalBalance_4() { return &____totalBalance_4; }
	inline void set__totalBalance_4(Balance_t2C96E30A413FF03954FF7EE1D62E73AAA4A48ADF * value)
	{
		____totalBalance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____totalBalance_4), (void*)value);
	}

	inline static int32_t get_offset_of__session_5() { return static_cast<int32_t>(offsetof(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6, ____session_5)); }
	inline Session_tBF465A2B862D5E44002D0BBEE7F68FB6B64129BC * get__session_5() const { return ____session_5; }
	inline Session_tBF465A2B862D5E44002D0BBEE7F68FB6B64129BC ** get_address_of__session_5() { return &____session_5; }
	inline void set__session_5(Session_tBF465A2B862D5E44002D0BBEE7F68FB6B64129BC * value)
	{
		____session_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____session_5), (void*)value);
	}
};


// MenuController
struct  MenuController_t588D7E4A49E600642B37B1A23E9A1C0DBDF0CEC4  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Balance MenuController::_totalBalance
	Balance_t2C96E30A413FF03954FF7EE1D62E73AAA4A48ADF * ____totalBalance_4;
	// UnityEngine.UI.Text MenuController::_balanceTxt
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ____balanceTxt_5;

public:
	inline static int32_t get_offset_of__totalBalance_4() { return static_cast<int32_t>(offsetof(MenuController_t588D7E4A49E600642B37B1A23E9A1C0DBDF0CEC4, ____totalBalance_4)); }
	inline Balance_t2C96E30A413FF03954FF7EE1D62E73AAA4A48ADF * get__totalBalance_4() const { return ____totalBalance_4; }
	inline Balance_t2C96E30A413FF03954FF7EE1D62E73AAA4A48ADF ** get_address_of__totalBalance_4() { return &____totalBalance_4; }
	inline void set__totalBalance_4(Balance_t2C96E30A413FF03954FF7EE1D62E73AAA4A48ADF * value)
	{
		____totalBalance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____totalBalance_4), (void*)value);
	}

	inline static int32_t get_offset_of__balanceTxt_5() { return static_cast<int32_t>(offsetof(MenuController_t588D7E4A49E600642B37B1A23E9A1C0DBDF0CEC4, ____balanceTxt_5)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get__balanceTxt_5() const { return ____balanceTxt_5; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of__balanceTxt_5() { return &____balanceTxt_5; }
	inline void set__balanceTxt_5(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		____balanceTxt_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____balanceTxt_5), (void*)value);
	}
};


// MeshCombiner
struct  MeshCombiner_t2CD8003020EE4332F6A85F814B7876EE79DE1C05  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean MeshCombiner::createMultiMaterialMesh
	bool ___createMultiMaterialMesh_5;
	// System.Boolean MeshCombiner::combineInactiveChildren
	bool ___combineInactiveChildren_6;
	// System.Boolean MeshCombiner::deactivateCombinedChildren
	bool ___deactivateCombinedChildren_7;
	// System.Boolean MeshCombiner::deactivateCombinedChildrenMeshRenderers
	bool ___deactivateCombinedChildrenMeshRenderers_8;
	// System.Boolean MeshCombiner::generateUVMap
	bool ___generateUVMap_9;
	// System.Boolean MeshCombiner::destroyCombinedChildren
	bool ___destroyCombinedChildren_10;
	// System.String MeshCombiner::folderPath
	String_t* ___folderPath_11;
	// UnityEngine.MeshFilter[] MeshCombiner::meshFiltersToSkip
	MeshFilterU5BU5D_tE8AA77783A24784C69A8083B4F3E482D866FD503* ___meshFiltersToSkip_12;

public:
	inline static int32_t get_offset_of_createMultiMaterialMesh_5() { return static_cast<int32_t>(offsetof(MeshCombiner_t2CD8003020EE4332F6A85F814B7876EE79DE1C05, ___createMultiMaterialMesh_5)); }
	inline bool get_createMultiMaterialMesh_5() const { return ___createMultiMaterialMesh_5; }
	inline bool* get_address_of_createMultiMaterialMesh_5() { return &___createMultiMaterialMesh_5; }
	inline void set_createMultiMaterialMesh_5(bool value)
	{
		___createMultiMaterialMesh_5 = value;
	}

	inline static int32_t get_offset_of_combineInactiveChildren_6() { return static_cast<int32_t>(offsetof(MeshCombiner_t2CD8003020EE4332F6A85F814B7876EE79DE1C05, ___combineInactiveChildren_6)); }
	inline bool get_combineInactiveChildren_6() const { return ___combineInactiveChildren_6; }
	inline bool* get_address_of_combineInactiveChildren_6() { return &___combineInactiveChildren_6; }
	inline void set_combineInactiveChildren_6(bool value)
	{
		___combineInactiveChildren_6 = value;
	}

	inline static int32_t get_offset_of_deactivateCombinedChildren_7() { return static_cast<int32_t>(offsetof(MeshCombiner_t2CD8003020EE4332F6A85F814B7876EE79DE1C05, ___deactivateCombinedChildren_7)); }
	inline bool get_deactivateCombinedChildren_7() const { return ___deactivateCombinedChildren_7; }
	inline bool* get_address_of_deactivateCombinedChildren_7() { return &___deactivateCombinedChildren_7; }
	inline void set_deactivateCombinedChildren_7(bool value)
	{
		___deactivateCombinedChildren_7 = value;
	}

	inline static int32_t get_offset_of_deactivateCombinedChildrenMeshRenderers_8() { return static_cast<int32_t>(offsetof(MeshCombiner_t2CD8003020EE4332F6A85F814B7876EE79DE1C05, ___deactivateCombinedChildrenMeshRenderers_8)); }
	inline bool get_deactivateCombinedChildrenMeshRenderers_8() const { return ___deactivateCombinedChildrenMeshRenderers_8; }
	inline bool* get_address_of_deactivateCombinedChildrenMeshRenderers_8() { return &___deactivateCombinedChildrenMeshRenderers_8; }
	inline void set_deactivateCombinedChildrenMeshRenderers_8(bool value)
	{
		___deactivateCombinedChildrenMeshRenderers_8 = value;
	}

	inline static int32_t get_offset_of_generateUVMap_9() { return static_cast<int32_t>(offsetof(MeshCombiner_t2CD8003020EE4332F6A85F814B7876EE79DE1C05, ___generateUVMap_9)); }
	inline bool get_generateUVMap_9() const { return ___generateUVMap_9; }
	inline bool* get_address_of_generateUVMap_9() { return &___generateUVMap_9; }
	inline void set_generateUVMap_9(bool value)
	{
		___generateUVMap_9 = value;
	}

	inline static int32_t get_offset_of_destroyCombinedChildren_10() { return static_cast<int32_t>(offsetof(MeshCombiner_t2CD8003020EE4332F6A85F814B7876EE79DE1C05, ___destroyCombinedChildren_10)); }
	inline bool get_destroyCombinedChildren_10() const { return ___destroyCombinedChildren_10; }
	inline bool* get_address_of_destroyCombinedChildren_10() { return &___destroyCombinedChildren_10; }
	inline void set_destroyCombinedChildren_10(bool value)
	{
		___destroyCombinedChildren_10 = value;
	}

	inline static int32_t get_offset_of_folderPath_11() { return static_cast<int32_t>(offsetof(MeshCombiner_t2CD8003020EE4332F6A85F814B7876EE79DE1C05, ___folderPath_11)); }
	inline String_t* get_folderPath_11() const { return ___folderPath_11; }
	inline String_t** get_address_of_folderPath_11() { return &___folderPath_11; }
	inline void set_folderPath_11(String_t* value)
	{
		___folderPath_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___folderPath_11), (void*)value);
	}

	inline static int32_t get_offset_of_meshFiltersToSkip_12() { return static_cast<int32_t>(offsetof(MeshCombiner_t2CD8003020EE4332F6A85F814B7876EE79DE1C05, ___meshFiltersToSkip_12)); }
	inline MeshFilterU5BU5D_tE8AA77783A24784C69A8083B4F3E482D866FD503* get_meshFiltersToSkip_12() const { return ___meshFiltersToSkip_12; }
	inline MeshFilterU5BU5D_tE8AA77783A24784C69A8083B4F3E482D866FD503** get_address_of_meshFiltersToSkip_12() { return &___meshFiltersToSkip_12; }
	inline void set_meshFiltersToSkip_12(MeshFilterU5BU5D_tE8AA77783A24784C69A8083B4F3E482D866FD503* value)
	{
		___meshFiltersToSkip_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshFiltersToSkip_12), (void*)value);
	}
};


// Movement
struct  Movement_t81B548083980F3B23F17AC9CA1C906E46F4B594C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single Movement::_speed
	float ____speed_4;
	// UnityEngine.Transform Movement::_carTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ____carTransform_5;
	// UnityEngine.Rigidbody Movement::_rigidBody
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ____rigidBody_6;
	// UnityEngine.Vector2 Movement::_LimitX
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ____LimitX_7;
	// UnityEngine.Vector2 Movement::_LimitY
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ____LimitY_8;
	// System.Single Movement::_lookRateSpeed
	float ____lookRateSpeed_9;
	// UnityEngine.Vector2 Movement::_lookInput
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ____lookInput_10;
	// UnityEngine.Vector2 Movement::_screenCenter
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ____screenCenter_11;
	// UnityEngine.Vector2 Movement::_mouseDistance
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ____mouseDistance_12;

public:
	inline static int32_t get_offset_of__speed_4() { return static_cast<int32_t>(offsetof(Movement_t81B548083980F3B23F17AC9CA1C906E46F4B594C, ____speed_4)); }
	inline float get__speed_4() const { return ____speed_4; }
	inline float* get_address_of__speed_4() { return &____speed_4; }
	inline void set__speed_4(float value)
	{
		____speed_4 = value;
	}

	inline static int32_t get_offset_of__carTransform_5() { return static_cast<int32_t>(offsetof(Movement_t81B548083980F3B23F17AC9CA1C906E46F4B594C, ____carTransform_5)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get__carTransform_5() const { return ____carTransform_5; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of__carTransform_5() { return &____carTransform_5; }
	inline void set__carTransform_5(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		____carTransform_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____carTransform_5), (void*)value);
	}

	inline static int32_t get_offset_of__rigidBody_6() { return static_cast<int32_t>(offsetof(Movement_t81B548083980F3B23F17AC9CA1C906E46F4B594C, ____rigidBody_6)); }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * get__rigidBody_6() const { return ____rigidBody_6; }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A ** get_address_of__rigidBody_6() { return &____rigidBody_6; }
	inline void set__rigidBody_6(Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * value)
	{
		____rigidBody_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rigidBody_6), (void*)value);
	}

	inline static int32_t get_offset_of__LimitX_7() { return static_cast<int32_t>(offsetof(Movement_t81B548083980F3B23F17AC9CA1C906E46F4B594C, ____LimitX_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get__LimitX_7() const { return ____LimitX_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of__LimitX_7() { return &____LimitX_7; }
	inline void set__LimitX_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		____LimitX_7 = value;
	}

	inline static int32_t get_offset_of__LimitY_8() { return static_cast<int32_t>(offsetof(Movement_t81B548083980F3B23F17AC9CA1C906E46F4B594C, ____LimitY_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get__LimitY_8() const { return ____LimitY_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of__LimitY_8() { return &____LimitY_8; }
	inline void set__LimitY_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		____LimitY_8 = value;
	}

	inline static int32_t get_offset_of__lookRateSpeed_9() { return static_cast<int32_t>(offsetof(Movement_t81B548083980F3B23F17AC9CA1C906E46F4B594C, ____lookRateSpeed_9)); }
	inline float get__lookRateSpeed_9() const { return ____lookRateSpeed_9; }
	inline float* get_address_of__lookRateSpeed_9() { return &____lookRateSpeed_9; }
	inline void set__lookRateSpeed_9(float value)
	{
		____lookRateSpeed_9 = value;
	}

	inline static int32_t get_offset_of__lookInput_10() { return static_cast<int32_t>(offsetof(Movement_t81B548083980F3B23F17AC9CA1C906E46F4B594C, ____lookInput_10)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get__lookInput_10() const { return ____lookInput_10; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of__lookInput_10() { return &____lookInput_10; }
	inline void set__lookInput_10(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		____lookInput_10 = value;
	}

	inline static int32_t get_offset_of__screenCenter_11() { return static_cast<int32_t>(offsetof(Movement_t81B548083980F3B23F17AC9CA1C906E46F4B594C, ____screenCenter_11)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get__screenCenter_11() const { return ____screenCenter_11; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of__screenCenter_11() { return &____screenCenter_11; }
	inline void set__screenCenter_11(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		____screenCenter_11 = value;
	}

	inline static int32_t get_offset_of__mouseDistance_12() { return static_cast<int32_t>(offsetof(Movement_t81B548083980F3B23F17AC9CA1C906E46F4B594C, ____mouseDistance_12)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get__mouseDistance_12() const { return ____mouseDistance_12; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of__mouseDistance_12() { return &____mouseDistance_12; }
	inline void set__mouseDistance_12(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		____mouseDistance_12 = value;
	}
};


// ObjCollision
struct  ObjCollision_t6D595F964DA9124367E2EFD26AAA71F60077BDE0  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String ObjCollision::playerTag
	String_t* ___playerTag_4;

public:
	inline static int32_t get_offset_of_playerTag_4() { return static_cast<int32_t>(offsetof(ObjCollision_t6D595F964DA9124367E2EFD26AAA71F60077BDE0, ___playerTag_4)); }
	inline String_t* get_playerTag_4() const { return ___playerTag_4; }
	inline String_t** get_address_of_playerTag_4() { return &___playerTag_4; }
	inline void set_playerTag_4(String_t* value)
	{
		___playerTag_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerTag_4), (void*)value);
	}
};


// Player
struct  Player_t5689617909B48F7640EA0892D85C92C13CC22C6F  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Session Player::_currentSession
	Session_tBF465A2B862D5E44002D0BBEE7F68FB6B64129BC * ____currentSession_4;
	// UnityEngine.UI.Text Player::_coinsCountText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ____coinsCountText_5;
	// System.Boolean Player::_isDead
	bool ____isDead_6;

public:
	inline static int32_t get_offset_of__currentSession_4() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ____currentSession_4)); }
	inline Session_tBF465A2B862D5E44002D0BBEE7F68FB6B64129BC * get__currentSession_4() const { return ____currentSession_4; }
	inline Session_tBF465A2B862D5E44002D0BBEE7F68FB6B64129BC ** get_address_of__currentSession_4() { return &____currentSession_4; }
	inline void set__currentSession_4(Session_tBF465A2B862D5E44002D0BBEE7F68FB6B64129BC * value)
	{
		____currentSession_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____currentSession_4), (void*)value);
	}

	inline static int32_t get_offset_of__coinsCountText_5() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ____coinsCountText_5)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get__coinsCountText_5() const { return ____coinsCountText_5; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of__coinsCountText_5() { return &____coinsCountText_5; }
	inline void set__coinsCountText_5(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		____coinsCountText_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____coinsCountText_5), (void*)value);
	}

	inline static int32_t get_offset_of__isDead_6() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ____isDead_6)); }
	inline bool get__isDead_6() const { return ____isDead_6; }
	inline bool* get_address_of__isDead_6() { return &____isDead_6; }
	inline void set__isDead_6(bool value)
	{
		____isDead_6 = value;
	}
};


// RestartGame
struct  RestartGame_t4871D9CCA018BBE024190E8DA63A0E07CFA7C286  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject RestartGame::_gameOverPanel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ____gameOverPanel_4;
	// ChunkCreator RestartGame::_chunkCreator
	ChunkCreator_tE0280F95F7F316AA5D7907CF17F3ADD314C81074 * ____chunkCreator_5;

public:
	inline static int32_t get_offset_of__gameOverPanel_4() { return static_cast<int32_t>(offsetof(RestartGame_t4871D9CCA018BBE024190E8DA63A0E07CFA7C286, ____gameOverPanel_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get__gameOverPanel_4() const { return ____gameOverPanel_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of__gameOverPanel_4() { return &____gameOverPanel_4; }
	inline void set__gameOverPanel_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		____gameOverPanel_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____gameOverPanel_4), (void*)value);
	}

	inline static int32_t get_offset_of__chunkCreator_5() { return static_cast<int32_t>(offsetof(RestartGame_t4871D9CCA018BBE024190E8DA63A0E07CFA7C286, ____chunkCreator_5)); }
	inline ChunkCreator_tE0280F95F7F316AA5D7907CF17F3ADD314C81074 * get__chunkCreator_5() const { return ____chunkCreator_5; }
	inline ChunkCreator_tE0280F95F7F316AA5D7907CF17F3ADD314C81074 ** get_address_of__chunkCreator_5() { return &____chunkCreator_5; }
	inline void set__chunkCreator_5(ChunkCreator_tE0280F95F7F316AA5D7907CF17F3ADD314C81074 * value)
	{
		____chunkCreator_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____chunkCreator_5), (void*)value);
	}
};


// Session
struct  Session_tBF465A2B862D5E44002D0BBEE7F68FB6B64129BC  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Transform Session::_player
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ____player_4;
	// UnityEngine.UI.Text Session::_coinsText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ____coinsText_5;
	// UnityEngine.UI.Text[] Session::_rangeText
	TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* ____rangeText_6;
	// UnityEngine.UI.Text Session::_scoreText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ____scoreText_7;
	// DifficultySystem Session::_difficultySystem
	DifficultySystem_t890C85560517296BDCC85431D950A36A8E5FA6E7 * ____difficultySystem_8;
	// System.Single Session::_oldZPosition
	float ____oldZPosition_9;
	// System.Int32 Session::_sessionCoinsAmount
	int32_t ____sessionCoinsAmount_10;
	// System.Single Session::_sessionRange
	float ____sessionRange_11;
	// System.Int32 Session::_sessionScore
	int32_t ____sessionScore_12;

public:
	inline static int32_t get_offset_of__player_4() { return static_cast<int32_t>(offsetof(Session_tBF465A2B862D5E44002D0BBEE7F68FB6B64129BC, ____player_4)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get__player_4() const { return ____player_4; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of__player_4() { return &____player_4; }
	inline void set__player_4(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		____player_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____player_4), (void*)value);
	}

	inline static int32_t get_offset_of__coinsText_5() { return static_cast<int32_t>(offsetof(Session_tBF465A2B862D5E44002D0BBEE7F68FB6B64129BC, ____coinsText_5)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get__coinsText_5() const { return ____coinsText_5; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of__coinsText_5() { return &____coinsText_5; }
	inline void set__coinsText_5(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		____coinsText_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____coinsText_5), (void*)value);
	}

	inline static int32_t get_offset_of__rangeText_6() { return static_cast<int32_t>(offsetof(Session_tBF465A2B862D5E44002D0BBEE7F68FB6B64129BC, ____rangeText_6)); }
	inline TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* get__rangeText_6() const { return ____rangeText_6; }
	inline TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F** get_address_of__rangeText_6() { return &____rangeText_6; }
	inline void set__rangeText_6(TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* value)
	{
		____rangeText_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rangeText_6), (void*)value);
	}

	inline static int32_t get_offset_of__scoreText_7() { return static_cast<int32_t>(offsetof(Session_tBF465A2B862D5E44002D0BBEE7F68FB6B64129BC, ____scoreText_7)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get__scoreText_7() const { return ____scoreText_7; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of__scoreText_7() { return &____scoreText_7; }
	inline void set__scoreText_7(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		____scoreText_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____scoreText_7), (void*)value);
	}

	inline static int32_t get_offset_of__difficultySystem_8() { return static_cast<int32_t>(offsetof(Session_tBF465A2B862D5E44002D0BBEE7F68FB6B64129BC, ____difficultySystem_8)); }
	inline DifficultySystem_t890C85560517296BDCC85431D950A36A8E5FA6E7 * get__difficultySystem_8() const { return ____difficultySystem_8; }
	inline DifficultySystem_t890C85560517296BDCC85431D950A36A8E5FA6E7 ** get_address_of__difficultySystem_8() { return &____difficultySystem_8; }
	inline void set__difficultySystem_8(DifficultySystem_t890C85560517296BDCC85431D950A36A8E5FA6E7 * value)
	{
		____difficultySystem_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____difficultySystem_8), (void*)value);
	}

	inline static int32_t get_offset_of__oldZPosition_9() { return static_cast<int32_t>(offsetof(Session_tBF465A2B862D5E44002D0BBEE7F68FB6B64129BC, ____oldZPosition_9)); }
	inline float get__oldZPosition_9() const { return ____oldZPosition_9; }
	inline float* get_address_of__oldZPosition_9() { return &____oldZPosition_9; }
	inline void set__oldZPosition_9(float value)
	{
		____oldZPosition_9 = value;
	}

	inline static int32_t get_offset_of__sessionCoinsAmount_10() { return static_cast<int32_t>(offsetof(Session_tBF465A2B862D5E44002D0BBEE7F68FB6B64129BC, ____sessionCoinsAmount_10)); }
	inline int32_t get__sessionCoinsAmount_10() const { return ____sessionCoinsAmount_10; }
	inline int32_t* get_address_of__sessionCoinsAmount_10() { return &____sessionCoinsAmount_10; }
	inline void set__sessionCoinsAmount_10(int32_t value)
	{
		____sessionCoinsAmount_10 = value;
	}

	inline static int32_t get_offset_of__sessionRange_11() { return static_cast<int32_t>(offsetof(Session_tBF465A2B862D5E44002D0BBEE7F68FB6B64129BC, ____sessionRange_11)); }
	inline float get__sessionRange_11() const { return ____sessionRange_11; }
	inline float* get_address_of__sessionRange_11() { return &____sessionRange_11; }
	inline void set__sessionRange_11(float value)
	{
		____sessionRange_11 = value;
	}

	inline static int32_t get_offset_of__sessionScore_12() { return static_cast<int32_t>(offsetof(Session_tBF465A2B862D5E44002D0BBEE7F68FB6B64129BC, ____sessionScore_12)); }
	inline int32_t get__sessionScore_12() const { return ____sessionScore_12; }
	inline int32_t* get_address_of__sessionScore_12() { return &____sessionScore_12; }
	inline void set__sessionScore_12(int32_t value)
	{
		____sessionScore_12 = value;
	}
};


// SpawnPoint
struct  SpawnPoint_t77028DEDD80A0DA2C96B701D023CFD026514EB9B  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean SpawnPoint::isEmpty
	bool ___isEmpty_4;

public:
	inline static int32_t get_offset_of_isEmpty_4() { return static_cast<int32_t>(offsetof(SpawnPoint_t77028DEDD80A0DA2C96B701D023CFD026514EB9B, ___isEmpty_4)); }
	inline bool get_isEmpty_4() const { return ___isEmpty_4; }
	inline bool* get_address_of_isEmpty_4() { return &___isEmpty_4; }
	inline void set_isEmpty_4(bool value)
	{
		___isEmpty_4 = value;
	}
};


// StartGameButton
struct  StartGameButton_t6F140D4EF1936A8550D13A33B125F4F68B27BDDB  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.UI.Graphic
struct  Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.UI.Selectable
struct  Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * ___m_CanvasGroupCache_19;

public:
	inline static int32_t get_offset_of_m_EnableCalled_6() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_EnableCalled_6)); }
	inline bool get_m_EnableCalled_6() const { return ___m_EnableCalled_6; }
	inline bool* get_address_of_m_EnableCalled_6() { return &___m_EnableCalled_6; }
	inline void set_m_EnableCalled_6(bool value)
	{
		___m_EnableCalled_6 = value;
	}

	inline static int32_t get_offset_of_m_Navigation_7() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Navigation_7)); }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  get_m_Navigation_7() const { return ___m_Navigation_7; }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A * get_address_of_m_Navigation_7() { return &___m_Navigation_7; }
	inline void set_m_Navigation_7(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  value)
	{
		___m_Navigation_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnUp_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnDown_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnLeft_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnRight_5), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Transition_8() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Transition_8)); }
	inline int32_t get_m_Transition_8() const { return ___m_Transition_8; }
	inline int32_t* get_address_of_m_Transition_8() { return &___m_Transition_8; }
	inline void set_m_Transition_8(int32_t value)
	{
		___m_Transition_8 = value;
	}

	inline static int32_t get_offset_of_m_Colors_9() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Colors_9)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_m_Colors_9() const { return ___m_Colors_9; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_m_Colors_9() { return &___m_Colors_9; }
	inline void set_m_Colors_9(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___m_Colors_9 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_10() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_SpriteState_10)); }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  get_m_SpriteState_10() const { return ___m_SpriteState_10; }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E * get_address_of_m_SpriteState_10() { return &___m_SpriteState_10; }
	inline void set_m_SpriteState_10(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  value)
	{
		___m_SpriteState_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_HighlightedSprite_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_PressedSprite_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_SelectedSprite_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_DisabledSprite_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_11() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_AnimationTriggers_11)); }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * get_m_AnimationTriggers_11() const { return ___m_AnimationTriggers_11; }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 ** get_address_of_m_AnimationTriggers_11() { return &___m_AnimationTriggers_11; }
	inline void set_m_AnimationTriggers_11(AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * value)
	{
		___m_AnimationTriggers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationTriggers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactable_12() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Interactable_12)); }
	inline bool get_m_Interactable_12() const { return ___m_Interactable_12; }
	inline bool* get_address_of_m_Interactable_12() { return &___m_Interactable_12; }
	inline void set_m_Interactable_12(bool value)
	{
		___m_Interactable_12 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_13() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_TargetGraphic_13)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_m_TargetGraphic_13() const { return ___m_TargetGraphic_13; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_m_TargetGraphic_13() { return &___m_TargetGraphic_13; }
	inline void set_m_TargetGraphic_13(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___m_TargetGraphic_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetGraphic_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_14() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_GroupsAllowInteraction_14)); }
	inline bool get_m_GroupsAllowInteraction_14() const { return ___m_GroupsAllowInteraction_14; }
	inline bool* get_address_of_m_GroupsAllowInteraction_14() { return &___m_GroupsAllowInteraction_14; }
	inline void set_m_GroupsAllowInteraction_14(bool value)
	{
		___m_GroupsAllowInteraction_14 = value;
	}

	inline static int32_t get_offset_of_m_CurrentIndex_15() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CurrentIndex_15)); }
	inline int32_t get_m_CurrentIndex_15() const { return ___m_CurrentIndex_15; }
	inline int32_t* get_address_of_m_CurrentIndex_15() { return &___m_CurrentIndex_15; }
	inline void set_m_CurrentIndex_15(int32_t value)
	{
		___m_CurrentIndex_15 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerInsideU3Ek__BackingField_16)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_16() const { return ___U3CisPointerInsideU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_16() { return &___U3CisPointerInsideU3Ek__BackingField_16; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_16(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerDownU3Ek__BackingField_17)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_17() const { return ___U3CisPointerDownU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_17() { return &___U3CisPointerDownU3Ek__BackingField_17; }
	inline void set_U3CisPointerDownU3Ek__BackingField_17(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3ChasSelectionU3Ek__BackingField_18)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_18() const { return ___U3ChasSelectionU3Ek__BackingField_18; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_18() { return &___U3ChasSelectionU3Ek__BackingField_18; }
	inline void set_U3ChasSelectionU3Ek__BackingField_18(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_19() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CanvasGroupCache_19)); }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * get_m_CanvasGroupCache_19() const { return ___m_CanvasGroupCache_19; }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D ** get_address_of_m_CanvasGroupCache_19() { return &___m_CanvasGroupCache_19; }
	inline void set_m_CanvasGroupCache_19(List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * value)
	{
		___m_CanvasGroupCache_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasGroupCache_19), (void*)value);
	}
};

struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields
{
public:
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;

public:
	inline static int32_t get_offset_of_s_Selectables_4() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_Selectables_4)); }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* get_s_Selectables_4() const { return ___s_Selectables_4; }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535** get_address_of_s_Selectables_4() { return &___s_Selectables_4; }
	inline void set_s_Selectables_4(SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* value)
	{
		___s_Selectables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Selectables_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectableCount_5() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_SelectableCount_5)); }
	inline int32_t get_s_SelectableCount_5() const { return ___s_SelectableCount_5; }
	inline int32_t* get_address_of_s_SelectableCount_5() { return &___s_SelectableCount_5; }
	inline void set_s_SelectableCount_5(int32_t value)
	{
		___s_SelectableCount_5 = value;
	}
};


// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Slider
struct  Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_FillRect_20;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_HandleRect_21;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_22;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_23;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_24;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_25;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_26;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * ___m_OnValueChanged_27;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___m_FillImage_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_FillTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_FillContainerRect_30;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_HandleTransform_31;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_HandleContainerRect_32;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Offset_33;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  ___m_Tracker_34;
	// System.Boolean UnityEngine.UI.Slider::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_35;

public:
	inline static int32_t get_offset_of_m_FillRect_20() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillRect_20)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_FillRect_20() const { return ___m_FillRect_20; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_FillRect_20() { return &___m_FillRect_20; }
	inline void set_m_FillRect_20(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_FillRect_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillRect_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleRect_21() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_HandleRect_21)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_HandleRect_21() const { return ___m_HandleRect_21; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_HandleRect_21() { return &___m_HandleRect_21; }
	inline void set_m_HandleRect_21(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_HandleRect_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleRect_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_Direction_22() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Direction_22)); }
	inline int32_t get_m_Direction_22() const { return ___m_Direction_22; }
	inline int32_t* get_address_of_m_Direction_22() { return &___m_Direction_22; }
	inline void set_m_Direction_22(int32_t value)
	{
		___m_Direction_22 = value;
	}

	inline static int32_t get_offset_of_m_MinValue_23() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_MinValue_23)); }
	inline float get_m_MinValue_23() const { return ___m_MinValue_23; }
	inline float* get_address_of_m_MinValue_23() { return &___m_MinValue_23; }
	inline void set_m_MinValue_23(float value)
	{
		___m_MinValue_23 = value;
	}

	inline static int32_t get_offset_of_m_MaxValue_24() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_MaxValue_24)); }
	inline float get_m_MaxValue_24() const { return ___m_MaxValue_24; }
	inline float* get_address_of_m_MaxValue_24() { return &___m_MaxValue_24; }
	inline void set_m_MaxValue_24(float value)
	{
		___m_MaxValue_24 = value;
	}

	inline static int32_t get_offset_of_m_WholeNumbers_25() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_WholeNumbers_25)); }
	inline bool get_m_WholeNumbers_25() const { return ___m_WholeNumbers_25; }
	inline bool* get_address_of_m_WholeNumbers_25() { return &___m_WholeNumbers_25; }
	inline void set_m_WholeNumbers_25(bool value)
	{
		___m_WholeNumbers_25 = value;
	}

	inline static int32_t get_offset_of_m_Value_26() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Value_26)); }
	inline float get_m_Value_26() const { return ___m_Value_26; }
	inline float* get_address_of_m_Value_26() { return &___m_Value_26; }
	inline void set_m_Value_26(float value)
	{
		___m_Value_26 = value;
	}

	inline static int32_t get_offset_of_m_OnValueChanged_27() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_OnValueChanged_27)); }
	inline SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * get_m_OnValueChanged_27() const { return ___m_OnValueChanged_27; }
	inline SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 ** get_address_of_m_OnValueChanged_27() { return &___m_OnValueChanged_27; }
	inline void set_m_OnValueChanged_27(SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * value)
	{
		___m_OnValueChanged_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValueChanged_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillImage_28() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillImage_28)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_m_FillImage_28() const { return ___m_FillImage_28; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_m_FillImage_28() { return &___m_FillImage_28; }
	inline void set_m_FillImage_28(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___m_FillImage_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillImage_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillTransform_29() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillTransform_29)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_FillTransform_29() const { return ___m_FillTransform_29; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_FillTransform_29() { return &___m_FillTransform_29; }
	inline void set_m_FillTransform_29(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_FillTransform_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillTransform_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillContainerRect_30() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillContainerRect_30)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_FillContainerRect_30() const { return ___m_FillContainerRect_30; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_FillContainerRect_30() { return &___m_FillContainerRect_30; }
	inline void set_m_FillContainerRect_30(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_FillContainerRect_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillContainerRect_30), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleTransform_31() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_HandleTransform_31)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_HandleTransform_31() const { return ___m_HandleTransform_31; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_HandleTransform_31() { return &___m_HandleTransform_31; }
	inline void set_m_HandleTransform_31(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_HandleTransform_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleTransform_31), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleContainerRect_32() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_HandleContainerRect_32)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_HandleContainerRect_32() const { return ___m_HandleContainerRect_32; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_HandleContainerRect_32() { return &___m_HandleContainerRect_32; }
	inline void set_m_HandleContainerRect_32(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_HandleContainerRect_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleContainerRect_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_Offset_33() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Offset_33)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Offset_33() const { return ___m_Offset_33; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Offset_33() { return &___m_Offset_33; }
	inline void set_m_Offset_33(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Offset_33 = value;
	}

	inline static int32_t get_offset_of_m_Tracker_34() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Tracker_34)); }
	inline DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  get_m_Tracker_34() const { return ___m_Tracker_34; }
	inline DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 * get_address_of_m_Tracker_34() { return &___m_Tracker_34; }
	inline void set_m_Tracker_34(DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  value)
	{
		___m_Tracker_34 = value;
	}

	inline static int32_t get_offset_of_m_DelayedUpdateVisuals_35() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_DelayedUpdateVisuals_35)); }
	inline bool get_m_DelayedUpdateVisuals_35() const { return ___m_DelayedUpdateVisuals_35; }
	inline bool* get_address_of_m_DelayedUpdateVisuals_35() { return &___m_DelayedUpdateVisuals_35; }
	inline void set_m_DelayedUpdateVisuals_35(bool value)
	{
		___m_DelayedUpdateVisuals_35 = value;
	}
};


// UnityEngine.UI.Text
struct  Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * m_Items[1];

public:
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// ChunkHolder[]
struct ChunkHolderU5BU5D_t88B5A732A46BD3B7D6C0C56321912FA3130395E0  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ChunkHolder_t93603EBB9F5C67C25E077B97A7A85AD9BFD9BBE9 * m_Items[1];

public:
	inline ChunkHolder_t93603EBB9F5C67C25E077B97A7A85AD9BFD9BBE9 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ChunkHolder_t93603EBB9F5C67C25E077B97A7A85AD9BFD9BBE9 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ChunkHolder_t93603EBB9F5C67C25E077B97A7A85AD9BFD9BBE9 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ChunkHolder_t93603EBB9F5C67C25E077B97A7A85AD9BFD9BBE9 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ChunkHolder_t93603EBB9F5C67C25E077B97A7A85AD9BFD9BBE9 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ChunkHolder_t93603EBB9F5C67C25E077B97A7A85AD9BFD9BBE9 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Transform[]
struct TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * m_Items[1];

public:
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.MeshFilter[]
struct MeshFilterU5BU5D_tE8AA77783A24784C69A8083B4F3E482D866FD503  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * m_Items[1];

public:
	inline MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.CombineInstance[]
struct CombineInstanceU5BU5D_tCEC5E0C06082119E1FF9C16E274C016F216803BF  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) CombineInstance_t3ECBD54BBDD018CE04D23414CDFE0F78A447B45C  m_Items[1];

public:
	inline CombineInstance_t3ECBD54BBDD018CE04D23414CDFE0F78A447B45C  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CombineInstance_t3ECBD54BBDD018CE04D23414CDFE0F78A447B45C * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CombineInstance_t3ECBD54BBDD018CE04D23414CDFE0F78A447B45C  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline CombineInstance_t3ECBD54BBDD018CE04D23414CDFE0F78A447B45C  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CombineInstance_t3ECBD54BBDD018CE04D23414CDFE0F78A447B45C * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CombineInstance_t3ECBD54BBDD018CE04D23414CDFE0F78A447B45C  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.MeshRenderer[]
struct MeshRendererU5BU5D_t535468079DEF88AD38546DC5D04E9102C401D228  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * m_Items[1];

public:
	inline MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  m_Items[1];

public:
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Material[]
struct MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Material_t8927C00353A72755313F046D0CE85178AE8218EE * m_Items[1];

public:
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.UI.Text[]
struct TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * m_Items[1];

public:
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * m_Items[1];

public:
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m66148860899ECCAE9B323372032BFC1C255393D2_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared (RuntimeObject * ___original0, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponentsInChildren<System.Object>(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Component_GetComponentsInChildren_TisRuntimeObject_m1D678E828943F6A8613DC24926420EDA6EBFBF7E_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, bool ___includeInactive0, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mCA84157864A199574AD0B7F3083F99B54DC1F98C_gshared (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Where_TisRuntimeObject_m51DA29A5CB10D532C42135ADA3270F6E695B9364_gshared (RuntimeObject* ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, const RuntimeMethod* method);
// !!0[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Enumerable_ToArray_TisRuntimeObject_m21E15191FE8BDBAE753CC592A1DB55EA3BCE7B5B_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m99C700668AC6D272188471D2D6B784A2B5636C8E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.CombineInstance>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC0B6BFCEFF3017582F5D5F36A3B5C41DC1DFCC11_gshared (List_1_t6B1E95FA5DF30925360D5903D54D1063F95AFFEF * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.CombineInstance>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m583619246DFE5A4BE61DBA1CA5153C5BE8A82363_gshared (List_1_t6B1E95FA5DF30925360D5903D54D1063F95AFFEF * __this, CombineInstance_t3ECBD54BBDD018CE04D23414CDFE0F78A447B45C  ___item0, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<UnityEngine.CombineInstance>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CombineInstanceU5BU5D_tCEC5E0C06082119E1FF9C16E274C016F216803BF* List_1_ToArray_mFE00BBE0A524D1A0943DEA309FC7CB7877BC2236_gshared (List_1_t6B1E95FA5DF30925360D5903D54D1063F95AFFEF * __this, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* List_1_ToArray_mA737986DE6389E9DD8FA8E3D4E222DE4DA34958D_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.CombineInstance>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m32EAB7C20FE929AB4D52FE42710A40B827F4EE31_gshared_inline (List_1_t6B1E95FA5DF30925360D5903D54D1063F95AFFEF * __this, const RuntimeMethod* method);

// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_clip_mD1F50F7BA6EA3AF25B4922473352C5180CFF7B2B (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void Balance::SetBalance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Balance_SetBalance_m8793EDA196BD63C7F90D14748E7445542C8A7F89 (Balance_t2C96E30A413FF03954FF7EE1D62E73AAA4A48ADF * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986 (String_t* ___key0, const RuntimeMethod* method);
// System.Void Balance::set_balance(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Balance_set_balance_m2BE4AA536C063EDA651566E72E9121EA857F0ED5 (Balance_t2C96E30A413FF03954FF7EE1D62E73AAA4A48ADF * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6 (String_t* ___key0, int32_t ___value1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::SmoothDamp(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_SmoothDamp_m4655944DBD5B44125F8F4B5A15E31DE94CB0F627 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___current0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___target1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___currentVelocity2, float ___smoothTime3, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void CameraFollow::LookRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFollow_LookRotation_m08CD4D931916D0003C0D77362CED16F6AA8D7421 (CameraFollow_tC9B62E254DA1376073E7B793597F9D6CD2A82DF8 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_LookRotation_m1B0BEBEBCC384324A6771B9EAC89761F73E1D6BF (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forward0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Slerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Slerp_m6D2BD18286254E28D2288B51962EC71F85C7B5C8 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___a0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___b1, float ___t2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6 (const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Chunk>::Add(!0)
inline void List_1_Add_mC998C3F80F9B9E5605956025867EB1C57E391105 (List_1_t7A626F883F5F76159AA059998344989D9386C55C * __this, Chunk_t9B72CD748941C5A60C8A8C73024F32445F793EC2 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7A626F883F5F76159AA059998344989D9386C55C *, Chunk_t9B72CD748941C5A60C8A8C73024F32445F793EC2 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<Chunk>::get_Count()
inline int32_t List_1_get_Count_m8410A846B60687AFEBC23E8230D3138A97BA947F_inline (List_1_t7A626F883F5F76159AA059998344989D9386C55C * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t7A626F883F5F76159AA059998344989D9386C55C *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.List`1<Chunk>::get_Item(System.Int32)
inline Chunk_t9B72CD748941C5A60C8A8C73024F32445F793EC2 * List_1_get_Item_m0A488362BBE7887970BB6FED1614EC1E1792F19D_inline (List_1_t7A626F883F5F76159AA059998344989D9386C55C * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Chunk_t9B72CD748941C5A60C8A8C73024F32445F793EC2 * (*) (List_1_t7A626F883F5F76159AA059998344989D9386C55C *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Void ChunkCreator::SpawnChunk()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChunkCreator_SpawnChunk_m10348C6B8B3752C128CD7013DD850412907F0A71 (ChunkCreator_tE0280F95F7F316AA5D7907CF17F3ADD314C81074 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Chunk>::Clear()
inline void List_1_Clear_m026DA3DB85DFB0C649219929F5592253C71EF71C (List_1_t7A626F883F5F76159AA059998344989D9386C55C * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7A626F883F5F76159AA059998344989D9386C55C *, const RuntimeMethod*))List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared)(__this, method);
}
// System.Void ChunkHolder::DeactivateChunks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChunkHolder_DeactivateChunks_m6CD09A55C8B1F8CD93B0B261482600936892E820 (ChunkHolder_t93603EBB9F5C67C25E077B97A7A85AD9BFD9BBE9 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.GameObject ChunkHolder::GetChunk()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ChunkHolder_GetChunk_m57EC494479F68A3F01A1E845819473033AEDCFA6 (ChunkHolder_t93603EBB9F5C67C25E077B97A7A85AD9BFD9BBE9 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<Chunk>()
inline Chunk_t9B72CD748941C5A60C8A8C73024F32445F793EC2 * GameObject_GetComponent_TisChunk_t9B72CD748941C5A60C8A8C73024F32445F793EC2_mD6507016FFD45D30783B8EB825C0373D1C7099D2 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Chunk_t9B72CD748941C5A60C8A8C73024F32445F793EC2 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<Health>()
inline Health_tB86D9293C9CF1E5B8E4C7271395F56DD4C67AE96 * Component_GetComponent_TisHealth_tB86D9293C9CF1E5B8E4C7271395F56DD4C67AE96_mBE180BF7DF7D587AD18D31151AEAB9937D497D4B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Health_tB86D9293C9CF1E5B8E4C7271395F56DD4C67AE96 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void Health::Heal(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Health_Heal_mEB16314F9C9C09E62B8BAFBFAB5A8CAF35F6284D (Health_tB86D9293C9CF1E5B8E4C7271395F56DD4C67AE96 * __this, int32_t ___hp0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<Movement>()
inline Movement_t81B548083980F3B23F17AC9CA1C906E46F4B594C * Component_GetComponent_TisMovement_t81B548083980F3B23F17AC9CA1C906E46F4B594C_m9D1BFBFF8E499B921BAAE1AE985D894E46DEBA54 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Movement_t81B548083980F3B23F17AC9CA1C906E46F4B594C * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void Movement::SetDefaultSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Movement_SetDefaultSpeed_mB03C767CE4451F70F21DED662C56B73C8C65A368 (Movement_t81B548083980F3B23F17AC9CA1C906E46F4B594C * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Chunk>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m2548438FB818F2F6A96859D1762D06A9CE8DC100 (List_1_t7A626F883F5F76159AA059998344989D9386C55C * __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7A626F883F5F76159AA059998344989D9386C55C *, int32_t, const RuntimeMethod*))List_1_RemoveAt_m66148860899ECCAE9B323372032BFC1C255393D2_gshared)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<Chunk>::.ctor()
inline void List_1__ctor_m5EEEE92C9EB645D4CEA676AB09D14DBEA8A5E22C (List_1_t7A626F883F5F76159AA059998344989D9386C55C * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7A626F883F5F76159AA059998344989D9386C55C *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared)(___original0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(!0)
inline void List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3 (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count()
inline int32_t List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// UnityEngine.GameObject UnityEngine.GameObject::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<Player>()
inline Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * Component_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m1BED3A96709F9A68D06117FAAE2AE1456F74CE7B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void Player::CoinsAdd(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_CoinsAdd_m3AE34B09B86678195739748EF25E523ED98286D6 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, int32_t ___amount0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * GameObject_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mA1779277BB07CE3D2CB8E340CEA85C40C6B52354 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.BoxCollider>()
inline BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * GameObject_GetComponent_TisBoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5_m106D19D2AB9862E4B35BBBCF1A510C4A16C928FF (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.Rigidbody::Sleep()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_Sleep_m60350AEF3E52D57FBE448CADBC06BA98DAEA2115 (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Collision::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Collision_get_gameObject_m5682F872FD28419AA36F0651CE8B19825A21859D (Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<Player>()
inline Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * GameObject_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m82212DD756C5F3A2B4844722FD1EE504E9AAD906 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<Health>()
inline Health_tB86D9293C9CF1E5B8E4C7271395F56DD4C67AE96 * GameObject_GetComponent_TisHealth_tB86D9293C9CF1E5B8E4C7271395F56DD4C67AE96_m51AE0CFCE2B84137462CD38079641E797E862570 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Health_tB86D9293C9CF1E5B8E4C7271395F56DD4C67AE96 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void Health::TakeDamage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Health_TakeDamage_m402507DD6ECA75FCA7761EE37906226BA103EAE4 (Health_tB86D9293C9CF1E5B8E4C7271395F56DD4C67AE96 * __this, int32_t ___damage0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Collision::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Collision_get_transform_m1026DF994801C6DBB9F3F5E325107FE278517C10 (Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator DamageZone::Collision()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DamageZone_Collision_m2B80546401396D4E1F84E815F3415ED4F52BB06B (DamageZone_t7E17CB7C4777F0F7319F4122AE04A70C274632D9 * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void DamageZone/<Collision>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCollisionU3Ed__8__ctor_m38A51A1F4BD4B9E0BA74E273E8EEE2A9954042B0 (U3CCollisionU3Ed__8_tA42703A19ABC4B010180FE96850C09DD884090FC * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::set_useGravity(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_useGravity_m1057292FB3199E87664F40B8BCBA7A7E64D1A096 (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::set_isKinematic(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_isKinematic_mCF74D680205544826F2DE2CAB929C9F25409A311 (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, bool ___value0, const RuntimeMethod* method);
// System.Single Movement::get_speed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Movement_get_speed_m95212CCB37C694CEDE8B33EEEFFBB5B0E5091139 (Movement_t81B548083980F3B23F17AC9CA1C906E46F4B594C * __this, const RuntimeMethod* method);
// System.Void Movement::set_speed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Movement_set_speed_m49A30ECCEF7CF0A1380D3F171E24BFDA99C39AFE (Movement_t81B548083980F3B23F17AC9CA1C906E46F4B594C * __this, float ___value0, const RuntimeMethod* method);
// System.Collections.IEnumerator FPS::FPSShow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FPS_FPSShow_mE873E05C84B0DDB7FE7BDA2B684A8D1A022A8E89 (FPS_t2BF93E8D6D0DE5740268969C725821F2730E9D88 * __this, const RuntimeMethod* method);
// System.Void FPS/<FPSShow>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFPSShowU3Ed__1__ctor_m9890260FC1415BCACA3627C72E19417C743A0569 (U3CFPSShowU3Ed__1_t96B8D881F827C451C455FB3E4D52DA18284ADA6A * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.DateTime System.DateTime::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  DateTime_get_Now_mCAC695993D6E2C57B900C83BEF3F8B18BC4EBC2C (const RuntimeMethod* method);
// System.Int64 System.DateTime::get_Ticks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t DateTime_get_Ticks_m175EDB41A50DB06872CC48CAB603FEBD1DFF46A9 (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Random::InitState(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Random_InitState_m9030E6387803E8EBAD0A5B0150254A89F8286A9C (int32_t ___seed0, const RuntimeMethod* method);
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2 (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method);
// System.Collections.IEnumerator HCTraffic::SpawnInterval(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HCTraffic_SpawnInterval_mCA8DD7062BD3753DF1E0EE4BBFA32F7ED4782722 (HCTraffic_t1CEB8C258DECA919DFD60C350B3D04680E06CC02 * __this, float ___rTime0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mACDBD7A1F25B33D006A60F67EF901B33DD3D52E9 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void HCTraffic/<SpawnInterval>d__15::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnIntervalU3Ed__15__ctor_mE3025269BEEFF457E7D3072A9FE18A27B21291D9 (U3CSpawnIntervalU3Ed__15_tFF276102F52D81BEBF574FB151E15CBCAC9EC109 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_green()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_green_mFF9BD42534D385A0717B1EAD083ADF08712984B9 (const RuntimeMethod* method);
// System.Void UnityEngine.Gizmos::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_set_color_m937ACC6288C81BAFFC3449FAA03BB4F680F4E74F (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Gizmos::DrawWireSphere(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_DrawWireSphere_m96C425145BBD85CF0192F9DDB3D1A8C69429B78B (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___center0, float ___radius1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::TransformVector(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_TransformVector_m7C5F87858E82A686A233D1866443ACAEA296AA2B (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___vector0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Gizmos::DrawLine(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_DrawLine_m91F1AA0205C7D53D2AA8E2F1D7B338E601A30823 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___from0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___to1, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_yellow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_yellow_m9FD4BDABA7E40E136BE57EE7872CEA6B1B2FA1D1 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::TransformDirection(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_TransformDirection_m6B5E3F0A7C6323159DEC6D9BC035FB53ADD96E91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___direction0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Boolean HCVehicle::FastDistance(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HCVehicle_FastDistance_m68BBB1189C7310A7B8C70C3E41DE56556EE74468 (HCVehicle_tD4C626176997767010D3E92648CED7AA2AFADAE1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___Self0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___Target1, float ___Radius2, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Int32 Health::get_health()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Health_get_health_m7F1A2A772A4A398875F61EAF3185D998EC5BDD5F (Health_tB86D9293C9CF1E5B8E4C7271395F56DD4C67AE96 * __this, const RuntimeMethod* method);
// System.Void Health::GameOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Health_GameOver_m7D2560AE37EB019D46F4A9BAA0C7EDF5C2892A34 (Health_tB86D9293C9CF1E5B8E4C7271395F56DD4C67AE96 * __this, const RuntimeMethod* method);
// System.Void Session::SetValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Session_SetValues_m100CEFD9B77BEA576ED2115993EAA9606A155234 (Session_tBF465A2B862D5E44002D0BBEE7F68FB6B64129BC * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Health::set_health(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Health_set_health_m30356675F36B5B9947AFD09F92C93EAEBF479795 (Health_tB86D9293C9CF1E5B8E4C7271395F56DD4C67AE96 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void CameraFollow::set_yDist(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFollow_set_yDist_m234BE56CC6A3D5D0AD583F808D0DEBD081356175 (CameraFollow_tC9B62E254DA1376073E7B793597F9D6CD2A82DF8 * __this, float ___value0, const RuntimeMethod* method);
// System.Int32 Balance::get_balance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Balance_get_balance_m18EED9A58F10FB6D0D7A5EBD9C7CF73FE72205FA (Balance_t2C96E30A413FF03954FF7EE1D62E73AAA4A48ADF * __this, const RuntimeMethod* method);
// System.Int32 Session::get_coinsAmount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Session_get_coinsAmount_m896CD9CB9700AC90EBA159B9438B935690D6C4B6 (Session_tBF465A2B862D5E44002D0BBEE7F68FB6B64129BC * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5 (int32_t ___sceneBuildIndex0, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void MeshCombiner::CheckDeactivateCombinedChildren()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshCombiner_CheckDeactivateCombinedChildren_m56D06FE355DBD6F3B8F6E1AE52F6EC27AB2D1F2A (MeshCombiner_t2CD8003020EE4332F6A85F814B7876EE79DE1C05 * __this, const RuntimeMethod* method);
// System.Void MeshCombiner::CheckDestroyCombinedChildren()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshCombiner_CheckDestroyCombinedChildren_m46493720DE2C2A63BA7D99EA23F549A4B42749AE (MeshCombiner_t2CD8003020EE4332F6A85F814B7876EE79DE1C05 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Transform::GetSiblingIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_GetSiblingIndex_mEF9DF6406920F8EBCFBC87C6D0630FE3E9E3C1EE (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___value0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB (const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void MeshCombiner::CombineMeshesWithSingleMaterial(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshCombiner_CombineMeshesWithSingleMaterial_mD7927B466258A14116C575B9DC084DB968C6782F (MeshCombiner_t2CD8003020EE4332F6A85F814B7876EE79DE1C05 * __this, bool ___showCreatedMeshInfo0, const RuntimeMethod* method);
// System.Void MeshCombiner::CombineMeshesWithMutliMaterial(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshCombiner_CombineMeshesWithMutliMaterial_m550862E2A444C10861A9290BEC2FC8BEF39B9E4B (MeshCombiner_t2CD8003020EE4332F6A85F814B7876EE79DE1C05 * __this, bool ___showCreatedMeshInfo0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::SetSiblingIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetSiblingIndex_mC69C3B37E6C731AA2A0B9BD787CF47AA5B8001FC (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void MeshCombiner/<>c__DisplayClass33_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass33_0__ctor_m4FF5AAE6916D1387510E64676EAB39A53DC18014 (U3CU3Ec__DisplayClass33_0_t625D1FF1495408366D10B041997D39A1E07A4B4C * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.MeshFilter>(System.Boolean)
inline MeshFilterU5BU5D_tE8AA77783A24784C69A8083B4F3E482D866FD503* Component_GetComponentsInChildren_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_mC14A87BD002F3F04000161028A31535C5C929ACE (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, bool ___includeInactive0, const RuntimeMethod* method)
{
	return ((  MeshFilterU5BU5D_tE8AA77783A24784C69A8083B4F3E482D866FD503* (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, bool, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m1D678E828943F6A8613DC24926420EDA6EBFBF7E_gshared)(__this, ___includeInactive0, method);
}
// System.Void System.Func`2<UnityEngine.MeshFilter,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mEE5387FCFA1D33E7B064E9E3B5F754599986D229 (Func_2_tDA13BFE7A65FB2551A825A13C2B5B061461BA351 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tDA13BFE7A65FB2551A825A13C2B5B061461BA351 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mCA84157864A199574AD0B7F3083F99B54DC1F98C_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<UnityEngine.MeshFilter>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
inline RuntimeObject* Enumerable_Where_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m0AFE42607F680EDF565C25BBE7837AE2FB9D64DC (RuntimeObject* ___source0, Func_2_tDA13BFE7A65FB2551A825A13C2B5B061461BA351 * ___predicate1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tDA13BFE7A65FB2551A825A13C2B5B061461BA351 *, const RuntimeMethod*))Enumerable_Where_TisRuntimeObject_m51DA29A5CB10D532C42135ADA3270F6E695B9364_gshared)(___source0, ___predicate1, method);
}
// !!0[] System.Linq.Enumerable::ToArray<UnityEngine.MeshFilter>(System.Collections.Generic.IEnumerable`1<!!0>)
inline MeshFilterU5BU5D_tE8AA77783A24784C69A8083B4F3E482D866FD503* Enumerable_ToArray_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m95B8BE04A1B29F6743BD22D1B7AD02A91BD1D7CB (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  MeshFilterU5BU5D_tE8AA77783A24784C69A8083B4F3E482D866FD503* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_m21E15191FE8BDBAE753CC592A1DB55EA3BCE7B5B_gshared)(___source0, method);
}
// System.Void MeshCombiner/<>c__DisplayClass33_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass33_1__ctor_mF255176B1E0ED28C4A103DB0A66071354CA13A93 (U3CU3Ec__DisplayClass33_1_t47917A8CA5B35A825FA0802DA1F60C2FB0051AE3 * __this, const RuntimeMethod* method);
// UnityEngine.MeshFilter[] MeshCombiner::GetMeshFiltersToCombine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MeshFilterU5BU5D_tE8AA77783A24784C69A8083B4F3E482D866FD503* MeshCombiner_GetMeshFiltersToCombine_mD28F858198DA4E57619450465DA794177BB7DE72 (MeshCombiner_t2CD8003020EE4332F6A85F814B7876EE79DE1C05 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.CombineInstance::set_subMeshIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CombineInstance_set_subMeshIndex_m9453076541D3A566A4E711E714F69F945379F750 (CombineInstance_t3ECBD54BBDD018CE04D23414CDFE0F78A447B45C * __this, int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.Mesh UnityEngine.MeshFilter::get_sharedMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * MeshFilter_get_sharedMesh_mDCB12AB93E6E5F477F55A14990A7AB5F1B06F19E (MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.CombineInstance::set_mesh(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CombineInstance_set_mesh_m4188D448CFD58C46FC3824D791572D07905FC824 (CombineInstance_t3ECBD54BBDD018CE04D23414CDFE0F78A447B45C * __this, Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___value0, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_localToWorldMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  Transform_get_localToWorldMatrix_m6B810B0F20BA5DE48009461A4D662DD8BFF6A3CC (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.CombineInstance::set_transform(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CombineInstance_set_transform_mF1C28A1BC0733CD0A10481215C4FCB418C7CDA1D (CombineInstance_t3ECBD54BBDD018CE04D23414CDFE0F78A447B45C * __this, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___value0, const RuntimeMethod* method);
// UnityEngine.Mesh UnityEngine.CombineInstance::get_mesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * CombineInstance_get_mesh_mB92C30E87A4B25AEA12DEBFA3EDEC8D3B115E6F4 (CombineInstance_t3ECBD54BBDD018CE04D23414CDFE0F78A447B45C * __this, const RuntimeMethod* method);
// UnityEngine.Vector3[] UnityEngine.Mesh::get_vertices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* Mesh_get_vertices_mB7A79698792B3CBA0E7E6EACDA6C031E496FB595 (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.MeshRenderer>(System.Boolean)
inline MeshRendererU5BU5D_t535468079DEF88AD38546DC5D04E9102C401D228* Component_GetComponentsInChildren_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m65A516E0B5EAC734DFF622A5E548CB87FEC256E7 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, bool ___includeInactive0, const RuntimeMethod* method)
{
	return ((  MeshRendererU5BU5D_t535468079DEF88AD38546DC5D04E9102C401D228* (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, bool, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m1D678E828943F6A8613DC24926420EDA6EBFBF7E_gshared)(__this, ___includeInactive0, method);
}
// System.Void UnityEngine.Renderer::set_sharedMaterials(UnityEngine.Material[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_sharedMaterials_m9838EC09412E988925C4670E8E355E5EEFE35A25 (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* ___value0, const RuntimeMethod* method);
// UnityEngine.Material UnityEngine.Renderer::get_sharedMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Renderer::set_sharedMaterial(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_sharedMaterial_m1E66766F93E95F692C3C9C2C09AFD795B156678B (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh__ctor_mA3D8570373462201AD7B8C9586A7F9412E49C2F6 (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::set_indexFormat(UnityEngine.Rendering.IndexFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_indexFormat_m7B5C838359D779E58CC0672E02F19E7584AB6F59 (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::CombineMeshes(UnityEngine.CombineInstance[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_CombineMeshes_mEBDCCDE0CB1DCE6DC91D1FC698F2C9A44DB4E72B (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, CombineInstanceU5BU5D_tCEC5E0C06082119E1FF9C16E274C016F216803BF* ___combine0, const RuntimeMethod* method);
// System.Void MeshCombiner::GenerateUV(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshCombiner_GenerateUV_m651D43E54555179FAFE11E9D9EDEE0BCFF9CF374 (MeshCombiner_t2CD8003020EE4332F6A85F814B7876EE79DE1C05 * __this, Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___combinedMesh0, const RuntimeMethod* method);
// System.Void UnityEngine.MeshFilter::set_sharedMesh(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshFilter_set_sharedMesh_mC96D5F9AE4BC1D186221F568A4C3CE23572EC958 (MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * __this, Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___value0, const RuntimeMethod* method);
// System.Void MeshCombiner::DeactivateCombinedGameObjects(UnityEngine.MeshFilter[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshCombiner_DeactivateCombinedGameObjects_mC700A980273A4FE6FEA14999E1D0599956DC09BC (MeshCombiner_t2CD8003020EE4332F6A85F814B7876EE79DE1C05 * __this, MeshFilterU5BU5D_tE8AA77783A24784C69A8083B4F3E482D866FD503* ___meshFilters0, const RuntimeMethod* method);
// System.String System.Int64::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int64_ToString_m8AAA883F340993DCDF339C208F3416C3BA82589F (int64_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9 (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___values0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * Component_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m87EEABB28FFB9E9553015DD36B7C6F7C45A7F537 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::.ctor()
inline void List_1__ctor_m497DA7006D664307F20A0546E5B717AA4B5E8A86 (List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// UnityEngine.Material[] UnityEngine.Renderer::get_sharedMaterials()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* Renderer_get_sharedMaterials_m9B2D432CA8AD8CEC4348E61789CC1BB0C3A00AFD (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Material>::Contains(!0)
inline bool List_1_Contains_m631A61127CAE4A180CC066347B119BB013A955EC (List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * __this, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 *, Material_t8927C00353A72755313F046D0CE85178AE8218EE *, const RuntimeMethod*))List_1_Contains_m99C700668AC6D272188471D2D6B784A2B5636C8E_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::Add(!0)
inline void List_1_Add_m93A08EA489A09A73780119772DE17BA06864EB10 (List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * __this, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 *, Material_t8927C00353A72755313F046D0CE85178AE8218EE *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.CombineInstance>::.ctor()
inline void List_1__ctor_mC0B6BFCEFF3017582F5D5F36A3B5C41DC1DFCC11 (List_1_t6B1E95FA5DF30925360D5903D54D1063F95AFFEF * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6B1E95FA5DF30925360D5903D54D1063F95AFFEF *, const RuntimeMethod*))List_1__ctor_mC0B6BFCEFF3017582F5D5F36A3B5C41DC1DFCC11_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.Material>::get_Item(System.Int32)
inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * List_1_get_Item_m13B9C8BE116476A73890AFB00F5596C13FC3FFAF_inline (List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Material_t8927C00353A72755313F046D0CE85178AE8218EE * (*) (List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.CombineInstance>::Add(!0)
inline void List_1_Add_m583619246DFE5A4BE61DBA1CA5153C5BE8A82363 (List_1_t6B1E95FA5DF30925360D5903D54D1063F95AFFEF * __this, CombineInstance_t3ECBD54BBDD018CE04D23414CDFE0F78A447B45C  ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6B1E95FA5DF30925360D5903D54D1063F95AFFEF *, CombineInstance_t3ECBD54BBDD018CE04D23414CDFE0F78A447B45C , const RuntimeMethod*))List_1_Add_m583619246DFE5A4BE61DBA1CA5153C5BE8A82363_gshared)(__this, ___item0, method);
}
// !0[] System.Collections.Generic.List`1<UnityEngine.CombineInstance>::ToArray()
inline CombineInstanceU5BU5D_tCEC5E0C06082119E1FF9C16E274C016F216803BF* List_1_ToArray_mFE00BBE0A524D1A0943DEA309FC7CB7877BC2236 (List_1_t6B1E95FA5DF30925360D5903D54D1063F95AFFEF * __this, const RuntimeMethod* method)
{
	return ((  CombineInstanceU5BU5D_tCEC5E0C06082119E1FF9C16E274C016F216803BF* (*) (List_1_t6B1E95FA5DF30925360D5903D54D1063F95AFFEF *, const RuntimeMethod*))List_1_ToArray_mFE00BBE0A524D1A0943DEA309FC7CB7877BC2236_gshared)(__this, method);
}
// System.Void UnityEngine.Mesh::CombineMeshes(UnityEngine.CombineInstance[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_CombineMeshes_mBA93AA41ABD692D92BAA81794312C9DBDAC1445D (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, CombineInstanceU5BU5D_tCEC5E0C06082119E1FF9C16E274C016F216803BF* ___combine0, bool ___mergeSubMeshes1, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  Matrix4x4_get_identity_mC91289718DDD3DDBE0A10551BDA59A446414A596 (const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Material>::get_Count()
inline int32_t List_1_get_Count_m2D5331F0E51DEDFD0BC68D4AE665FD93010CA0BC_inline (List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// !0[] System.Collections.Generic.List`1<UnityEngine.Material>::ToArray()
inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* List_1_ToArray_m186505F66F97198D8539D9673736392642EE45CC (List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * __this, const RuntimeMethod* method)
{
	return ((  MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* (*) (List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 *, const RuntimeMethod*))List_1_ToArray_mA737986DE6389E9DD8FA8E3D4E222DE4DA34958D_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.CombineInstance>::get_Count()
inline int32_t List_1_get_Count_m32EAB7C20FE929AB4D52FE42710A40B827F4EE31_inline (List_1_t6B1E95FA5DF30925360D5903D54D1063F95AFFEF * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t6B1E95FA5DF30925360D5903D54D1063F95AFFEF *, const RuntimeMethod*))List_1_get_Count_m32EAB7C20FE929AB4D52FE42710A40B827F4EE31_gshared_inline)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * GameObject_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m4E244CD0EBBF9E0A3A73AF14F6EC434CA82E6F4B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_enabled_mFFBA418C428C1B2B151C77B879DD10C393D9D95B (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_mCCED69F4D4C9A4FA3AC30A142CF3D7F085F7C422 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C (const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E (const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::ClampMagnitude(UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_ClampMagnitude_m4FFD90D646E17E41F799FC78FF652A2D75AD5074 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___vector0, float ___maxLength1, const RuntimeMethod* method);
// System.Void Movement::CheckX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Movement_CheckX_m49C39923E77B98C35BEE5323F9EB203E50FF1B5C (Movement_t81B548083980F3B23F17AC9CA1C906E46F4B594C * __this, const RuntimeMethod* method);
// System.Void Movement::CheckY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Movement_CheckY_m78C5A6F0BD611A17EE89A75191420B3A304CCD76 (Movement_t81B548083980F3B23F17AC9CA1C906E46F4B594C * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Rotate(System.Single,System.Single,System.Single,UnityEngine.Space)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_mE77655C011C18F49CAD740CED7940EF1C7000357 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, float ___xAngle0, float ___yAngle1, float ___zAngle2, int32_t ___relativeTo3, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_eulerAngles_mCF1E10C36ED1F03804A1D10A9BAB272E0EA8766F (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87 (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_eulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_eulerAngles_mFDCBC6282E4B1196AA26BF01008B2AAA2DD2969E (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.String UnityEngine.GameObject::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void Session::set_coinsAmount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Session_set_coinsAmount_m75C21B4A87259E67FDCAD7B590A7C5772BDC6A52 (Session_tBF465A2B862D5E44002D0BBEE7F68FB6B64129BC * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void ChunkCreator::RestartGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChunkCreator_RestartGame_m21C884DA2203AC985CB04DF796D5529CA6DE4837 (ChunkCreator_tE0280F95F7F316AA5D7907CF17F3ADD314C81074 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<DifficultySystem>()
inline DifficultySystem_t890C85560517296BDCC85431D950A36A8E5FA6E7 * Component_GetComponent_TisDifficultySystem_t890C85560517296BDCC85431D950A36A8E5FA6E7_m35D9B704CBFCB2BA65B5C4B4CBF24541BA2F9300 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  DifficultySystem_t890C85560517296BDCC85431D950A36A8E5FA6E7 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void Session::ScoreCounter(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Session_ScoreCounter_mB0B23124FDAAF96FA539D4743C266712E350DF6A (Session_tBF465A2B862D5E44002D0BBEE7F68FB6B64129BC * __this, int32_t ____currentScore0, const RuntimeMethod* method);
// System.Void DifficultySystem::DifficultyUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DifficultySystem_DifficultyUpdate_m222CEB81EA70FDA0A7F556906BB8E96A9D1C44D0 (DifficultySystem_t890C85560517296BDCC85431D950A36A8E5FA6E7 * __this, const RuntimeMethod* method);
// System.Int32 System.Convert::ToInt32(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_mAFAE7DA97BACA9CEC03D40A2D322093B122B02FE (float ___value0, const RuntimeMethod* method);
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010 (float* __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButton_m27BF2DDBF38A38787B83A13D3E6F0F88F7C834C1 (int32_t ___button0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void DamageZone::SetGravity(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DamageZone_SetGravity_m035E9A0A636F9BD3FBA925077A8E0F388C8C7D46 (DamageZone_t7E17CB7C4777F0F7319F4122AE04A70C274632D9 * __this, bool ___state0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3,UnityEngine.ForceMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForce_m78B9D94F505E19F3C63461362AD6DE7EA0836700 (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___force0, int32_t ___mode1, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Void DamageZone::SetNativePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DamageZone_SetNativePosition_m6CEE4F559DC7AFD31848F226100679DAD5F6714E (DamageZone_t7E17CB7C4777F0F7319F4122AE04A70C274632D9 * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Text>()
inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Random::get_insideUnitSphere()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Random_get_insideUnitSphere_m43E5AE1F6A6CFA892BAE6E3ED71BEBFCE308CE90 (const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_localRotation_mA6472AE7509D762965275D79B645A14A9CCF5BE5 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<HCVehicle>()
inline HCVehicle_tD4C626176997767010D3E92648CED7AA2AFADAE1 * GameObject_GetComponent_TisHCVehicle_tD4C626176997767010D3E92648CED7AA2AFADAE1_m861D98AECF4FCD810F00C20CDC7FD51A9A20986C (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  HCVehicle_tD4C626176997767010D3E92648CED7AA2AFADAE1 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___exists0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<HCTraffic>()
inline HCTraffic_t1CEB8C258DECA919DFD60C350B3D04680E06CC02 * GameObject_GetComponent_TisHCTraffic_t1CEB8C258DECA919DFD60C350B3D04680E06CC02_m2053BBCD431FAC27EB3DD76342D368A8CA9D49DF (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  HCTraffic_t1CEB8C258DECA919DFD60C350B3D04680E06CC02 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void MeshCombiner/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m92943B6FDBCF5BB35117AF45865D1E4BAFFBDA9F (U3CU3Ec_tC607834D420DED2B2B095D41BAB8005F418C3722 * __this, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AudioController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioController_Start_m3F40FF5C596B593D9356258116798B8D2EF2CA18 (AudioController_tA9F9625D78D7B82E16202C1EBD62C8CA84CE7B5E * __this, const RuntimeMethod* method)
{
	{
		// _randomTrack = Random.Range(0, _audioClips.Length);
		AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* L_0 = __this->get__audioClips_5();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, ((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))), /*hidden argument*/NULL);
		__this->set__randomTrack_6(L_1);
		// _audioSource.clip = _audioClips[_randomTrack];
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_2 = __this->get__audioSource_4();
		AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* L_3 = __this->get__audioClips_5();
		int32_t L_4 = __this->get__randomTrack_6();
		NullCheck(L_3);
		int32_t L_5 = L_4;
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_2);
		AudioSource_set_clip_mD1F50F7BA6EA3AF25B4922473352C5180CFF7B2B(L_2, L_6, /*hidden argument*/NULL);
		// _audioSource.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_7 = __this->get__audioSource_4();
		NullCheck(L_7);
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AudioController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioController__ctor_mFBC6DD9163DE0AC6DB9CD48A5D56326117FCDDEA (AudioController_tA9F9625D78D7B82E16202C1EBD62C8CA84CE7B5E * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 Balance::get_balance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Balance_get_balance_m18EED9A58F10FB6D0D7A5EBD9C7CF73FE72205FA (Balance_t2C96E30A413FF03954FF7EE1D62E73AAA4A48ADF * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// get { return _balance; }
		int32_t L_0 = __this->get__balance_4();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return _balance; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void Balance::set_balance(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Balance_set_balance_m2BE4AA536C063EDA651566E72E9121EA857F0ED5 (Balance_t2C96E30A413FF03954FF7EE1D62E73AAA4A48ADF * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set { _balance = value; SetBalance(); }
		int32_t L_0 = ___value0;
		__this->set__balance_4(L_0);
		// set { _balance = value; SetBalance(); }
		Balance_SetBalance_m8793EDA196BD63C7F90D14748E7445542C8A7F89(__this, /*hidden argument*/NULL);
		// set { _balance = value; SetBalance(); }
		return;
	}
}
// System.Void Balance::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Balance_Start_m5369D2FAF2A5D89388431EFCB56CC1AA8FE66404 (Balance_t2C96E30A413FF03954FF7EE1D62E73AAA4A48ADF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral33475665902203BC82B0D5F5AE97A7CC3F47EE21);
		s_Il2CppMethodInitialized = true;
	}
	{
		// balance = PlayerPrefs.GetInt("balance");
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteral33475665902203BC82B0D5F5AE97A7CC3F47EE21, /*hidden argument*/NULL);
		Balance_set_balance_m2BE4AA536C063EDA651566E72E9121EA857F0ED5(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Balance::SetBalance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Balance_SetBalance_m8793EDA196BD63C7F90D14748E7445542C8A7F89 (Balance_t2C96E30A413FF03954FF7EE1D62E73AAA4A48ADF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral33475665902203BC82B0D5F5AE97A7CC3F47EE21);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetInt("balance", _balance);
		int32_t L_0 = __this->get__balance_4();
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteral33475665902203BC82B0D5F5AE97A7CC3F47EE21, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Balance::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Balance__ctor_m8D70F28F6C340B30FDEBBDC6DEE30AD3D2D69892 (Balance_t2C96E30A413FF03954FF7EE1D62E73AAA4A48ADF * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single CameraFollow::get_yDist()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CameraFollow_get_yDist_m68AE50BAD673AE5D3B982EB9B961B959735A0649 (CameraFollow_tC9B62E254DA1376073E7B793597F9D6CD2A82DF8 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// get { return _yDist; }
		float L_0 = __this->get__yDist_6();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return _yDist; }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void CameraFollow::set_yDist(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFollow_set_yDist_m234BE56CC6A3D5D0AD583F808D0DEBD081356175 (CameraFollow_tC9B62E254DA1376073E7B793597F9D6CD2A82DF8 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { _yDist = value;}
		float L_0 = ___value0;
		__this->set__yDist_6(L_0);
		// set { _yDist = value;}
		return;
	}
}
// System.Void CameraFollow::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFollow_Update_m9762CC5B7A2D28B7B8116BA8DE2342AFB654AB08 (CameraFollow_tC9B62E254DA1376073E7B793597F9D6CD2A82DF8 * __this, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 cameraPos = new Vector3(_player.position.x, _player.position.y + _yDist, _player.position.z - _zDist);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get__player_4();
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		float L_2 = L_1.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = __this->get__player_4();
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		float L_5 = L_4.get_y_3();
		float L_6 = __this->get__yDist_6();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7 = __this->get__player_4();
		NullCheck(L_7);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_7, /*hidden argument*/NULL);
		float L_9 = L_8.get_z_4();
		float L_10 = __this->get__zDist_7();
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), L_2, ((float)il2cpp_codegen_add((float)L_5, (float)L_6)), ((float)il2cpp_codegen_subtract((float)L_9, (float)L_10)), /*hidden argument*/NULL);
		// transform.position = Vector3.SmoothDamp(transform.position, cameraPos, ref velocity, _smoothTime);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_12, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_15 = __this->get_address_of_velocity_11();
		float L_16 = __this->get__smoothTime_10();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Vector3_SmoothDamp_m4655944DBD5B44125F8F4B5A15E31DE94CB0F627(L_13, L_14, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_15, L_16, /*hidden argument*/NULL);
		NullCheck(L_11);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_11, L_17, /*hidden argument*/NULL);
		// LookRotation();
		CameraFollow_LookRotation_m08CD4D931916D0003C0D77362CED16F6AA8D7421(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CameraFollow::LookRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFollow_LookRotation_m08CD4D931916D0003C0D77362CED16F6AA8D7421 (CameraFollow_tC9B62E254DA1376073E7B793597F9D6CD2A82DF8 * __this, const RuntimeMethod* method)
{
	{
		// dir = _player.position - transform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get__player_4();
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_2, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_1, L_3, /*hidden argument*/NULL);
		__this->set_dir_8(L_4);
		// rot = Quaternion.LookRotation(dir);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = __this->get_dir_8();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_6;
		L_6 = Quaternion_LookRotation_m1B0BEBEBCC384324A6771B9EAC89761F73E1D6BF(L_5, /*hidden argument*/NULL);
		__this->set_rot_9(L_6);
		// transform.rotation = Quaternion.Slerp(transform.rotation, rot, 3.5f * Time.deltaTime);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_9;
		L_9 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_8, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_10 = __this->get_rot_9();
		float L_11;
		L_11 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_12;
		L_12 = Quaternion_Slerp_m6D2BD18286254E28D2288B51962EC71F85C7B5C8(L_9, L_10, ((float)il2cpp_codegen_multiply((float)(3.5f), (float)L_11)), /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_7, L_12, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CameraFollow::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFollow__ctor_m29F88CCFD2ED12A7BCC75A9BBA892CEF179C83DE (CameraFollow_tC9B62E254DA1376073E7B793597F9D6CD2A82DF8 * __this, const RuntimeMethod* method)
{
	{
		// [SerializeField] private float _yDist = 3f;
		__this->set__yDist_6((3.0f));
		// [SerializeField] private float _zDist = 12f;
		__this->set__zDist_7((12.0f));
		// private float _smoothTime = 0.2f;
		__this->set__smoothTime_10((0.200000003f));
		// private Vector3 velocity = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		__this->set_velocity_11(L_0);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Chunk::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Chunk__ctor_mB8B305AD544A743861B147D94F3C3C8A7779EB6B (Chunk_t9B72CD748941C5A60C8A8C73024F32445F793EC2 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ChunkCreator::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChunkCreator_Start_m52A19471EEA1B59C5D1EDB8CE927FE11949978AB (ChunkCreator_tE0280F95F7F316AA5D7907CF17F3ADD314C81074 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mC998C3F80F9B9E5605956025867EB1C57E391105_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _spawnedChunks.Add(_firstChunk);
		List_1_t7A626F883F5F76159AA059998344989D9386C55C * L_0 = __this->get__spawnedChunks_13();
		Chunk_t9B72CD748941C5A60C8A8C73024F32445F793EC2 * L_1 = __this->get__firstChunk_6();
		NullCheck(L_0);
		List_1_Add_mC998C3F80F9B9E5605956025867EB1C57E391105(L_0, L_1, /*hidden argument*/List_1_Add_mC998C3F80F9B9E5605956025867EB1C57E391105_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void ChunkCreator::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChunkCreator_Update_m0489C5B7AA3B2D95D931DC1513FFC99715299F9A (ChunkCreator_tE0280F95F7F316AA5D7907CF17F3ADD314C81074 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m8410A846B60687AFEBC23E8230D3138A97BA947F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m0A488362BBE7887970BB6FED1614EC1E1792F19D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (_playerTransform.position.z > _spawnedChunks[_spawnedChunks.Count - 1].end.position.z - 150)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get__playerTransform_4();
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		float L_2 = L_1.get_z_4();
		List_1_t7A626F883F5F76159AA059998344989D9386C55C * L_3 = __this->get__spawnedChunks_13();
		List_1_t7A626F883F5F76159AA059998344989D9386C55C * L_4 = __this->get__spawnedChunks_13();
		NullCheck(L_4);
		int32_t L_5;
		L_5 = List_1_get_Count_m8410A846B60687AFEBC23E8230D3138A97BA947F_inline(L_4, /*hidden argument*/List_1_get_Count_m8410A846B60687AFEBC23E8230D3138A97BA947F_RuntimeMethod_var);
		NullCheck(L_3);
		Chunk_t9B72CD748941C5A60C8A8C73024F32445F793EC2 * L_6;
		L_6 = List_1_get_Item_m0A488362BBE7887970BB6FED1614EC1E1792F19D_inline(L_3, ((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)1)), /*hidden argument*/List_1_get_Item_m0A488362BBE7887970BB6FED1614EC1E1792F19D_RuntimeMethod_var);
		NullCheck(L_6);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7 = L_6->get_end_5();
		NullCheck(L_7);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_7, /*hidden argument*/NULL);
		float L_9 = L_8.get_z_4();
		V_0 = (bool)((((float)L_2) > ((float)((float)il2cpp_codegen_subtract((float)L_9, (float)(150.0f)))))? 1 : 0);
		bool L_10 = V_0;
		if (!L_10)
		{
			goto IL_004d;
		}
	}
	{
		// SpawnChunk();
		ChunkCreator_SpawnChunk_m10348C6B8B3752C128CD7013DD850412907F0A71(__this, /*hidden argument*/NULL);
	}

IL_004d:
	{
		// }
		return;
	}
}
// System.Void ChunkCreator::RestartGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChunkCreator_RestartGame_m21C884DA2203AC985CB04DF796D5529CA6DE4837 (ChunkCreator_tE0280F95F7F316AA5D7907CF17F3ADD314C81074 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisHealth_tB86D9293C9CF1E5B8E4C7271395F56DD4C67AE96_mBE180BF7DF7D587AD18D31151AEAB9937D497D4B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMovement_t81B548083980F3B23F17AC9CA1C906E46F4B594C_m9D1BFBFF8E499B921BAAE1AE985D894E46DEBA54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisChunk_t9B72CD748941C5A60C8A8C73024F32445F793EC2_mD6507016FFD45D30783B8EB825C0373D1C7099D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mC998C3F80F9B9E5605956025867EB1C57E391105_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m026DA3DB85DFB0C649219929F5592253C71EF71C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		// _spawnedChunks.Clear();
		List_1_t7A626F883F5F76159AA059998344989D9386C55C * L_0 = __this->get__spawnedChunks_13();
		NullCheck(L_0);
		List_1_Clear_m026DA3DB85DFB0C649219929F5592253C71EF71C(L_0, /*hidden argument*/List_1_Clear_m026DA3DB85DFB0C649219929F5592253C71EF71C_RuntimeMethod_var);
		// for (int i = 0; i < _chunkHolders.Length; i++)
		V_1 = 0;
		goto IL_0025;
	}

IL_0011:
	{
		// _chunkHolders[i].DeactivateChunks();
		ChunkHolderU5BU5D_t88B5A732A46BD3B7D6C0C56321912FA3130395E0* L_1 = __this->get__chunkHolders_7();
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		ChunkHolder_t93603EBB9F5C67C25E077B97A7A85AD9BFD9BBE9 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		ChunkHolder_DeactivateChunks_m6CD09A55C8B1F8CD93B0B261482600936892E820(L_4, /*hidden argument*/NULL);
		// for (int i = 0; i < _chunkHolders.Length; i++)
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_0025:
	{
		// for (int i = 0; i < _chunkHolders.Length; i++)
		int32_t L_6 = V_1;
		ChunkHolderU5BU5D_t88B5A732A46BD3B7D6C0C56321912FA3130395E0* L_7 = __this->get__chunkHolders_7();
		NullCheck(L_7);
		V_2 = (bool)((((int32_t)L_6) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length)))))? 1 : 0);
		bool L_8 = V_2;
		if (L_8)
		{
			goto IL_0011;
		}
	}
	{
		// _firstChunk.gameObject.SetActive(false);
		Chunk_t9B72CD748941C5A60C8A8C73024F32445F793EC2 * L_9 = __this->get__firstChunk_6();
		NullCheck(L_9);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10;
		L_10 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_10, (bool)0, /*hidden argument*/NULL);
		// GameObject newChunk = _chunkHolders[Random.Range(0, _chunkHolders.Length)].GetChunk();
		ChunkHolderU5BU5D_t88B5A732A46BD3B7D6C0C56321912FA3130395E0* L_11 = __this->get__chunkHolders_7();
		ChunkHolderU5BU5D_t88B5A732A46BD3B7D6C0C56321912FA3130395E0* L_12 = __this->get__chunkHolders_7();
		NullCheck(L_12);
		int32_t L_13;
		L_13 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, ((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length))), /*hidden argument*/NULL);
		NullCheck(L_11);
		int32_t L_14 = L_13;
		ChunkHolder_t93603EBB9F5C67C25E077B97A7A85AD9BFD9BBE9 * L_15 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_15);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16;
		L_16 = ChunkHolder_GetChunk_m57EC494479F68A3F01A1E845819473033AEDCFA6(L_15, /*hidden argument*/NULL);
		V_0 = L_16;
		// _spawnedChunks.Add(newChunk.GetComponent<Chunk>());
		List_1_t7A626F883F5F76159AA059998344989D9386C55C * L_17 = __this->get__spawnedChunks_13();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18 = V_0;
		NullCheck(L_18);
		Chunk_t9B72CD748941C5A60C8A8C73024F32445F793EC2 * L_19;
		L_19 = GameObject_GetComponent_TisChunk_t9B72CD748941C5A60C8A8C73024F32445F793EC2_mD6507016FFD45D30783B8EB825C0373D1C7099D2(L_18, /*hidden argument*/GameObject_GetComponent_TisChunk_t9B72CD748941C5A60C8A8C73024F32445F793EC2_mD6507016FFD45D30783B8EB825C0373D1C7099D2_RuntimeMethod_var);
		NullCheck(L_17);
		List_1_Add_mC998C3F80F9B9E5605956025867EB1C57E391105(L_17, L_19, /*hidden argument*/List_1_Add_mC998C3F80F9B9E5605956025867EB1C57E391105_RuntimeMethod_var);
		// newChunk.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20 = V_0;
		NullCheck(L_20);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_20, (bool)1, /*hidden argument*/NULL);
		// newChunk.transform.position = _nativeChunkPosition;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21 = V_0;
		NullCheck(L_21);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22;
		L_22 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_21, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23 = __this->get__nativeChunkPosition_10();
		NullCheck(L_22);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_22, L_23, /*hidden argument*/NULL);
		// _playerTransform.position = _nativeCarPosition;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_24 = __this->get__playerTransform_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25 = __this->get__nativeCarPosition_9();
		NullCheck(L_24);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_24, L_25, /*hidden argument*/NULL);
		// _cameraTransform.position = _nativeCameraPosition;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_26 = __this->get__cameraTransform_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27 = __this->get__nativeCameraPosition_11();
		NullCheck(L_26);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_26, L_27, /*hidden argument*/NULL);
		// _playerTransform.GetComponent<Health>().Heal(100);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_28 = __this->get__playerTransform_4();
		NullCheck(L_28);
		Health_tB86D9293C9CF1E5B8E4C7271395F56DD4C67AE96 * L_29;
		L_29 = Component_GetComponent_TisHealth_tB86D9293C9CF1E5B8E4C7271395F56DD4C67AE96_mBE180BF7DF7D587AD18D31151AEAB9937D497D4B(L_28, /*hidden argument*/Component_GetComponent_TisHealth_tB86D9293C9CF1E5B8E4C7271395F56DD4C67AE96_mBE180BF7DF7D587AD18D31151AEAB9937D497D4B_RuntimeMethod_var);
		NullCheck(L_29);
		Health_Heal_mEB16314F9C9C09E62B8BAFBFAB5A8CAF35F6284D(L_29, ((int32_t)100), /*hidden argument*/NULL);
		// _playerTransform.GetComponent<Movement>().SetDefaultSpeed();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_30 = __this->get__playerTransform_4();
		NullCheck(L_30);
		Movement_t81B548083980F3B23F17AC9CA1C906E46F4B594C * L_31;
		L_31 = Component_GetComponent_TisMovement_t81B548083980F3B23F17AC9CA1C906E46F4B594C_m9D1BFBFF8E499B921BAAE1AE985D894E46DEBA54(L_30, /*hidden argument*/Component_GetComponent_TisMovement_t81B548083980F3B23F17AC9CA1C906E46F4B594C_m9D1BFBFF8E499B921BAAE1AE985D894E46DEBA54_RuntimeMethod_var);
		NullCheck(L_31);
		Movement_SetDefaultSpeed_mB03C767CE4451F70F21DED662C56B73C8C65A368(L_31, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ChunkCreator::SpawnChunk()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChunkCreator_SpawnChunk_m10348C6B8B3752C128CD7013DD850412907F0A71 (ChunkCreator_tE0280F95F7F316AA5D7907CF17F3ADD314C81074 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisChunk_t9B72CD748941C5A60C8A8C73024F32445F793EC2_mD6507016FFD45D30783B8EB825C0373D1C7099D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mC998C3F80F9B9E5605956025867EB1C57E391105_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m2548438FB818F2F6A96859D1762D06A9CE8DC100_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m8410A846B60687AFEBC23E8230D3138A97BA947F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m0A488362BBE7887970BB6FED1614EC1E1792F19D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_0 = NULL;
	Chunk_t9B72CD748941C5A60C8A8C73024F32445F793EC2 * V_1 = NULL;
	bool V_2 = false;
	{
		// GameObject newChunk = _chunkHolders[Random.Range(0, _chunkHolders.Length)].GetChunk();
		ChunkHolderU5BU5D_t88B5A732A46BD3B7D6C0C56321912FA3130395E0* L_0 = __this->get__chunkHolders_7();
		ChunkHolderU5BU5D_t88B5A732A46BD3B7D6C0C56321912FA3130395E0* L_1 = __this->get__chunkHolders_7();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, ((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))), /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_3 = L_2;
		ChunkHolder_t93603EBB9F5C67C25E077B97A7A85AD9BFD9BBE9 * L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = ChunkHolder_GetChunk_m57EC494479F68A3F01A1E845819473033AEDCFA6(L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		// Chunk currentChunk = newChunk.GetComponent<Chunk>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = V_0;
		NullCheck(L_6);
		Chunk_t9B72CD748941C5A60C8A8C73024F32445F793EC2 * L_7;
		L_7 = GameObject_GetComponent_TisChunk_t9B72CD748941C5A60C8A8C73024F32445F793EC2_mD6507016FFD45D30783B8EB825C0373D1C7099D2(L_6, /*hidden argument*/GameObject_GetComponent_TisChunk_t9B72CD748941C5A60C8A8C73024F32445F793EC2_mD6507016FFD45D30783B8EB825C0373D1C7099D2_RuntimeMethod_var);
		V_1 = L_7;
		// newChunk.transform.position = Vector3.zero;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = V_0;
		NullCheck(L_8);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_8, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_9, L_10, /*hidden argument*/NULL);
		// newChunk.transform.position = _spawnedChunks[_spawnedChunks.Count - 1].end.position - currentChunk.begin.position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = V_0;
		NullCheck(L_11);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_11, /*hidden argument*/NULL);
		List_1_t7A626F883F5F76159AA059998344989D9386C55C * L_13 = __this->get__spawnedChunks_13();
		List_1_t7A626F883F5F76159AA059998344989D9386C55C * L_14 = __this->get__spawnedChunks_13();
		NullCheck(L_14);
		int32_t L_15;
		L_15 = List_1_get_Count_m8410A846B60687AFEBC23E8230D3138A97BA947F_inline(L_14, /*hidden argument*/List_1_get_Count_m8410A846B60687AFEBC23E8230D3138A97BA947F_RuntimeMethod_var);
		NullCheck(L_13);
		Chunk_t9B72CD748941C5A60C8A8C73024F32445F793EC2 * L_16;
		L_16 = List_1_get_Item_m0A488362BBE7887970BB6FED1614EC1E1792F19D_inline(L_13, ((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)1)), /*hidden argument*/List_1_get_Item_m0A488362BBE7887970BB6FED1614EC1E1792F19D_RuntimeMethod_var);
		NullCheck(L_16);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17 = L_16->get_end_5();
		NullCheck(L_17);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_17, /*hidden argument*/NULL);
		Chunk_t9B72CD748941C5A60C8A8C73024F32445F793EC2 * L_19 = V_1;
		NullCheck(L_19);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20 = L_19->get_begin_4();
		NullCheck(L_20);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		L_21 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_20, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
		L_22 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_18, L_21, /*hidden argument*/NULL);
		NullCheck(L_12);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_12, L_22, /*hidden argument*/NULL);
		// newChunk.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23 = V_0;
		NullCheck(L_23);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_23, (bool)1, /*hidden argument*/NULL);
		// _spawnedChunks.Add(currentChunk);
		List_1_t7A626F883F5F76159AA059998344989D9386C55C * L_24 = __this->get__spawnedChunks_13();
		Chunk_t9B72CD748941C5A60C8A8C73024F32445F793EC2 * L_25 = V_1;
		NullCheck(L_24);
		List_1_Add_mC998C3F80F9B9E5605956025867EB1C57E391105(L_24, L_25, /*hidden argument*/List_1_Add_mC998C3F80F9B9E5605956025867EB1C57E391105_RuntimeMethod_var);
		// if (_spawnedChunks.Count > _maxCount)
		List_1_t7A626F883F5F76159AA059998344989D9386C55C * L_26 = __this->get__spawnedChunks_13();
		NullCheck(L_26);
		int32_t L_27;
		L_27 = List_1_get_Count_m8410A846B60687AFEBC23E8230D3138A97BA947F_inline(L_26, /*hidden argument*/List_1_get_Count_m8410A846B60687AFEBC23E8230D3138A97BA947F_RuntimeMethod_var);
		int32_t L_28 = __this->get__maxCount_12();
		V_2 = (bool)((((int32_t)L_27) > ((int32_t)L_28))? 1 : 0);
		bool L_29 = V_2;
		if (!L_29)
		{
			goto IL_00c5;
		}
	}
	{
		// _spawnedChunks[0].gameObject.SetActive(false);
		List_1_t7A626F883F5F76159AA059998344989D9386C55C * L_30 = __this->get__spawnedChunks_13();
		NullCheck(L_30);
		Chunk_t9B72CD748941C5A60C8A8C73024F32445F793EC2 * L_31;
		L_31 = List_1_get_Item_m0A488362BBE7887970BB6FED1614EC1E1792F19D_inline(L_30, 0, /*hidden argument*/List_1_get_Item_m0A488362BBE7887970BB6FED1614EC1E1792F19D_RuntimeMethod_var);
		NullCheck(L_31);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_32;
		L_32 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_31, /*hidden argument*/NULL);
		NullCheck(L_32);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_32, (bool)0, /*hidden argument*/NULL);
		// _spawnedChunks.RemoveAt(0);
		List_1_t7A626F883F5F76159AA059998344989D9386C55C * L_33 = __this->get__spawnedChunks_13();
		NullCheck(L_33);
		List_1_RemoveAt_m2548438FB818F2F6A96859D1762D06A9CE8DC100(L_33, 0, /*hidden argument*/List_1_RemoveAt_m2548438FB818F2F6A96859D1762D06A9CE8DC100_RuntimeMethod_var);
	}

IL_00c5:
	{
		// }
		return;
	}
}
// System.Void ChunkCreator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChunkCreator__ctor_m56BFC78ABAC899027B9DBF7B9A93EB56FE73AA0B (ChunkCreator_tE0280F95F7F316AA5D7907CF17F3ADD314C81074 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m5EEEE92C9EB645D4CEA676AB09D14DBEA8A5E22C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t7A626F883F5F76159AA059998344989D9386C55C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Vector3 _nativeCarPosition = new Vector3(16f, 18.9f, 10f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_0), (16.0f), (18.8999996f), (10.0f), /*hidden argument*/NULL);
		__this->set__nativeCarPosition_9(L_0);
		// private Vector3 _nativeChunkPosition = new Vector3(15.4f, 0f, 21.9f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_1), (15.3999996f), (0.0f), (21.8999996f), /*hidden argument*/NULL);
		__this->set__nativeChunkPosition_10(L_1);
		// private Vector3 _nativeCameraPosition = new Vector3(16f, 23.73f, 10f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_2), (16.0f), (23.7299995f), (10.0f), /*hidden argument*/NULL);
		__this->set__nativeCameraPosition_11(L_2);
		// private int _maxCount = 5;
		__this->set__maxCount_12(5);
		// public List<Chunk> _spawnedChunks = new List<Chunk>();
		List_1_t7A626F883F5F76159AA059998344989D9386C55C * L_3 = (List_1_t7A626F883F5F76159AA059998344989D9386C55C *)il2cpp_codegen_object_new(List_1_t7A626F883F5F76159AA059998344989D9386C55C_il2cpp_TypeInfo_var);
		List_1__ctor_m5EEEE92C9EB645D4CEA676AB09D14DBEA8A5E22C(L_3, /*hidden argument*/List_1__ctor_m5EEEE92C9EB645D4CEA676AB09D14DBEA8A5E22C_RuntimeMethod_var);
		__this->set__spawnedChunks_13(L_3);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ChunkHolder::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChunkHolder_Start_mAFD3BAFC92BBF3B3F4BCF221E1C78ADAD43CCA13 (ChunkHolder_t93603EBB9F5C67C25E077B97A7A85AD9BFD9BBE9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_1 = NULL;
	bool V_2 = false;
	{
		// for(int i = 0; i < _chunksAmount; i++)
		V_0 = 0;
		goto IL_003d;
	}

IL_0005:
	{
		// GameObject chunkCopy = Instantiate(_chunkGameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get__chunkGameObject_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_0, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		V_1 = L_1;
		// chunkCopy.transform.position = Vector3.zero;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = V_1;
		NullCheck(L_2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_2, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_3, L_4, /*hidden argument*/NULL);
		// chunkCopy.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = V_1;
		NullCheck(L_5);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_5, (bool)0, /*hidden argument*/NULL);
		// _allCopyes.Add(chunkCopy);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_6 = __this->get__allCopyes_6();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = V_1;
		NullCheck(L_6);
		List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3(L_6, L_7, /*hidden argument*/List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
		// for(int i = 0; i < _chunksAmount; i++)
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_003d:
	{
		// for(int i = 0; i < _chunksAmount; i++)
		int32_t L_9 = V_0;
		int32_t L_10 = __this->get__chunksAmount_5();
		V_2 = (bool)((((int32_t)L_9) < ((int32_t)L_10))? 1 : 0);
		bool L_11 = V_2;
		if (L_11)
		{
			goto IL_0005;
		}
	}
	{
		// }
		return;
	}
}
// UnityEngine.GameObject ChunkHolder::GetChunk()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ChunkHolder_GetChunk_m57EC494479F68A3F01A1E845819473033AEDCFA6 (ChunkHolder_t93603EBB9F5C67C25E077B97A7A85AD9BFD9BBE9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_2 = NULL;
	bool V_3 = false;
	{
		// for(int i = 0; i < _allCopyes.Count; i++)
		V_0 = 0;
		goto IL_0033;
	}

IL_0005:
	{
		// if(_allCopyes[i].activeSelf == false)
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_0 = __this->get__allCopyes_6();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_0, L_1, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		NullCheck(L_2);
		bool L_3;
		L_3 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_2, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_002e;
		}
	}
	{
		// return _allCopyes[i];
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_5 = __this->get__allCopyes_6();
		int32_t L_6 = V_0;
		NullCheck(L_5);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_5, L_6, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		V_2 = L_7;
		goto IL_0054;
	}

IL_002e:
	{
		// for(int i = 0; i < _allCopyes.Count; i++)
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0033:
	{
		// for(int i = 0; i < _allCopyes.Count; i++)
		int32_t L_9 = V_0;
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_10 = __this->get__allCopyes_6();
		NullCheck(L_10);
		int32_t L_11;
		L_11 = List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline(L_10, /*hidden argument*/List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		V_3 = (bool)((((int32_t)L_9) < ((int32_t)L_11))? 1 : 0);
		bool L_12 = V_3;
		if (L_12)
		{
			goto IL_0005;
		}
	}
	{
		// return _allCopyes[0];
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_13 = __this->get__allCopyes_6();
		NullCheck(L_13);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14;
		L_14 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_13, 0, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		V_2 = L_14;
		goto IL_0054;
	}

IL_0054:
	{
		// }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = V_2;
		return L_15;
	}
}
// System.Void ChunkHolder::DeactivateChunks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChunkHolder_DeactivateChunks_m6CD09A55C8B1F8CD93B0B261482600936892E820 (ChunkHolder_t93603EBB9F5C67C25E077B97A7A85AD9BFD9BBE9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		// for(int i = 0; i < _allCopyes.Count; i++)
		V_0 = 0;
		goto IL_0023;
	}

IL_0005:
	{
		// _allCopyes[i].gameObject.SetActive(false);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_0 = __this->get__allCopyes_6();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_0, L_1, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		NullCheck(L_2);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_3, (bool)0, /*hidden argument*/NULL);
		// for(int i = 0; i < _allCopyes.Count; i++)
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
	}

IL_0023:
	{
		// for(int i = 0; i < _allCopyes.Count; i++)
		int32_t L_5 = V_0;
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_6 = __this->get__allCopyes_6();
		NullCheck(L_6);
		int32_t L_7;
		L_7 = List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline(L_6, /*hidden argument*/List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_5) < ((int32_t)L_7))? 1 : 0);
		bool L_8 = V_1;
		if (L_8)
		{
			goto IL_0005;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ChunkHolder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChunkHolder__ctor_m9A0139814418777BE33E3C88445AE958EBE7FBCC (ChunkHolder_t93603EBB9F5C67C25E077B97A7A85AD9BFD9BBE9 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Coin::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Coin_OnTriggerEnter_mEA9A278082B5DDE0204F3BD58089D40170EB6867 (Coin_t327139A024DB28F40ED5C48479FA8AB572E86550 * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m1BED3A96709F9A68D06117FAAE2AE1456F74CE7B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (other.GetComponent<Player>() != null)
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_0 = ___other0;
		NullCheck(L_0);
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_1;
		L_1 = Component_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m1BED3A96709F9A68D06117FAAE2AE1456F74CE7B(L_0, /*hidden argument*/Component_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m1BED3A96709F9A68D06117FAAE2AE1456F74CE7B_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0032;
		}
	}
	{
		// gameObject.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_4, (bool)0, /*hidden argument*/NULL);
		// other.GetComponent<Player>().CoinsAdd(_coinValue);
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_5 = ___other0;
		NullCheck(L_5);
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_6;
		L_6 = Component_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m1BED3A96709F9A68D06117FAAE2AE1456F74CE7B(L_5, /*hidden argument*/Component_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m1BED3A96709F9A68D06117FAAE2AE1456F74CE7B_RuntimeMethod_var);
		int32_t L_7 = __this->get__coinValue_4();
		NullCheck(L_6);
		Player_CoinsAdd_m3AE34B09B86678195739748EF25E523ED98286D6(L_6, L_7, /*hidden argument*/NULL);
	}

IL_0032:
	{
		// }
		return;
	}
}
// System.Void Coin::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Coin__ctor_mF977D2CE7F9F781D0E5B1226BD2757CC523DB637 (Coin_t327139A024DB28F40ED5C48479FA8AB572E86550 * __this, const RuntimeMethod* method)
{
	{
		// [SerializeField] private int _coinValue = 5;
		__this->set__coinValue_4(5);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CoinsCreator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoinsCreator__ctor_m455B3AEB2C9047DBD8D14B4F9485F360DA46D144 (CoinsCreator_t1BC3124D0C17A37853ED12A89D2FAA146CF42942 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DamageZone::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DamageZone_Start_m82F972D72B678A200672E4417B134F93D9A4AD55 (DamageZone_t7E17CB7C4777F0F7319F4122AE04A70C274632D9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisBoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5_m106D19D2AB9862E4B35BBBCF1A510C4A16C928FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mA1779277BB07CE3D2CB8E340CEA85C40C6B52354_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _startRot = transform.rotation;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_1;
		L_1 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_0, /*hidden argument*/NULL);
		__this->set__startRot_5(L_1);
		// _rigidBody = gameObject.GetComponent<Rigidbody>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_3;
		L_3 = GameObject_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mA1779277BB07CE3D2CB8E340CEA85C40C6B52354(L_2, /*hidden argument*/GameObject_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mA1779277BB07CE3D2CB8E340CEA85C40C6B52354_RuntimeMethod_var);
		__this->set__rigidBody_8(L_3);
		// _boxCollider = gameObject.GetComponent<BoxCollider>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * L_5;
		L_5 = GameObject_GetComponent_TisBoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5_m106D19D2AB9862E4B35BBBCF1A510C4A16C928FF(L_4, /*hidden argument*/GameObject_GetComponent_TisBoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5_m106D19D2AB9862E4B35BBBCF1A510C4A16C928FF_RuntimeMethod_var);
		__this->set__boxCollider_9(L_5);
		// _rigidBody.Sleep();
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_6 = __this->get__rigidBody_8();
		NullCheck(L_6);
		Rigidbody_Sleep_m60350AEF3E52D57FBE448CADBC06BA98DAEA2115(L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DamageZone::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DamageZone_OnCollisionEnter_mC4A9C55857FDB2E3B84A4CBA5991C089E72C2001 (DamageZone_t7E17CB7C4777F0F7319F4122AE04A70C274632D9 * __this, Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisHealth_tB86D9293C9CF1E5B8E4C7271395F56DD4C67AE96_m51AE0CFCE2B84137462CD38079641E797E862570_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m82212DD756C5F3A2B4844722FD1EE504E9AAD906_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (collision.gameObject.GetComponent<Player>() != null)
		Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * L_0 = ___collision0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Collision_get_gameObject_m5682F872FD28419AA36F0651CE8B19825A21859D(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_2;
		L_2 = GameObject_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m82212DD756C5F3A2B4844722FD1EE504E9AAD906(L_1, /*hidden argument*/GameObject_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m82212DD756C5F3A2B4844722FD1EE504E9AAD906_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_2, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_3;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0071;
		}
	}
	{
		// _startPos = transform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_5, /*hidden argument*/NULL);
		__this->set__startPos_4(L_6);
		// collision.gameObject.GetComponent<Health>().TakeDamage(5);
		Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * L_7 = ___collision0;
		NullCheck(L_7);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = Collision_get_gameObject_m5682F872FD28419AA36F0651CE8B19825A21859D(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		Health_tB86D9293C9CF1E5B8E4C7271395F56DD4C67AE96 * L_9;
		L_9 = GameObject_GetComponent_TisHealth_tB86D9293C9CF1E5B8E4C7271395F56DD4C67AE96_m51AE0CFCE2B84137462CD38079641E797E862570(L_8, /*hidden argument*/GameObject_GetComponent_TisHealth_tB86D9293C9CF1E5B8E4C7271395F56DD4C67AE96_m51AE0CFCE2B84137462CD38079641E797E862570_RuntimeMethod_var);
		NullCheck(L_9);
		Health_TakeDamage_m402507DD6ECA75FCA7761EE37906226BA103EAE4(L_9, 5, /*hidden argument*/NULL);
		// _direction = (transform.position - collision.transform.position).normalized;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_10, /*hidden argument*/NULL);
		Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * L_12 = ___collision0;
		NullCheck(L_12);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = Collision_get_transform_m1026DF994801C6DBB9F3F5E325107FE278517C10(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_13, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_11, L_14, /*hidden argument*/NULL);
		V_1 = L_15;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_1), /*hidden argument*/NULL);
		__this->set__direction_7(L_16);
		// StartCoroutine(Collision());
		RuntimeObject* L_17;
		L_17 = DamageZone_Collision_m2B80546401396D4E1F84E815F3415ED4F52BB06B(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_18;
		L_18 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_17, /*hidden argument*/NULL);
	}

IL_0071:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator DamageZone::Collision()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DamageZone_Collision_m2B80546401396D4E1F84E815F3415ED4F52BB06B (DamageZone_t7E17CB7C4777F0F7319F4122AE04A70C274632D9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCollisionU3Ed__8_tA42703A19ABC4B010180FE96850C09DD884090FC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCollisionU3Ed__8_tA42703A19ABC4B010180FE96850C09DD884090FC * L_0 = (U3CCollisionU3Ed__8_tA42703A19ABC4B010180FE96850C09DD884090FC *)il2cpp_codegen_object_new(U3CCollisionU3Ed__8_tA42703A19ABC4B010180FE96850C09DD884090FC_il2cpp_TypeInfo_var);
		U3CCollisionU3Ed__8__ctor_m38A51A1F4BD4B9E0BA74E273E8EEE2A9954042B0(L_0, 0, /*hidden argument*/NULL);
		U3CCollisionU3Ed__8_tA42703A19ABC4B010180FE96850C09DD884090FC * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void DamageZone::SetNativePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DamageZone_SetNativePosition_m6CEE4F559DC7AFD31848F226100679DAD5F6714E (DamageZone_t7E17CB7C4777F0F7319F4122AE04A70C274632D9 * __this, const RuntimeMethod* method)
{
	{
		// gameObject.transform.position = _startPos;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = __this->get__startPos_4();
		NullCheck(L_1);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_1, L_2, /*hidden argument*/NULL);
		// gameObject.transform.rotation = _startRot;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_3, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_5 = __this->get__startRot_5();
		NullCheck(L_4);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_4, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DamageZone::SetGravity(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DamageZone_SetGravity_m035E9A0A636F9BD3FBA925077A8E0F388C8C7D46 (DamageZone_t7E17CB7C4777F0F7319F4122AE04A70C274632D9 * __this, bool ___state0, const RuntimeMethod* method)
{
	{
		// _rigidBody.useGravity = state;
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_0 = __this->get__rigidBody_8();
		bool L_1 = ___state0;
		NullCheck(L_0);
		Rigidbody_set_useGravity_m1057292FB3199E87664F40B8BCBA7A7E64D1A096(L_0, L_1, /*hidden argument*/NULL);
		// _rigidBody.isKinematic = !state;
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_2 = __this->get__rigidBody_8();
		bool L_3 = ___state0;
		NullCheck(L_2);
		Rigidbody_set_isKinematic_mCF74D680205544826F2DE2CAB929C9F25409A311(L_2, (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DamageZone::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DamageZone__ctor_m19404F2FEE3DE6DAEDAA680A5390EDCDDF14DDE2 (DamageZone_t7E17CB7C4777F0F7319F4122AE04A70C274632D9 * __this, const RuntimeMethod* method)
{
	{
		// private float _speed = 30f;
		__this->set__speed_6((30.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DeadZone::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeadZone_OnTriggerEnter_m1A43C94274D79D4F49C28F60973DC85071979F44 (DeadZone_tD1E10D680CDC9E8D0C44EDD7C880F4AD1EDA8CAD * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisHealth_tB86D9293C9CF1E5B8E4C7271395F56DD4C67AE96_mBE180BF7DF7D587AD18D31151AEAB9937D497D4B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m1BED3A96709F9A68D06117FAAE2AE1456F74CE7B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if(other.GetComponent<Player>() != null)
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_0 = ___other0;
		NullCheck(L_0);
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_1;
		L_1 = Component_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m1BED3A96709F9A68D06117FAAE2AE1456F74CE7B(L_0, /*hidden argument*/Component_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m1BED3A96709F9A68D06117FAAE2AE1456F74CE7B_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		// other.GetComponent<Health>().TakeDamage(100);
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_4 = ___other0;
		NullCheck(L_4);
		Health_tB86D9293C9CF1E5B8E4C7271395F56DD4C67AE96 * L_5;
		L_5 = Component_GetComponent_TisHealth_tB86D9293C9CF1E5B8E4C7271395F56DD4C67AE96_mBE180BF7DF7D587AD18D31151AEAB9937D497D4B(L_4, /*hidden argument*/Component_GetComponent_TisHealth_tB86D9293C9CF1E5B8E4C7271395F56DD4C67AE96_mBE180BF7DF7D587AD18D31151AEAB9937D497D4B_RuntimeMethod_var);
		NullCheck(L_5);
		Health_TakeDamage_m402507DD6ECA75FCA7761EE37906226BA103EAE4(L_5, ((int32_t)100), /*hidden argument*/NULL);
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.Void DeadZone::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeadZone__ctor_m2F20EAD4EBDD577F68B5710E4C82248C3625D140 (DeadZone_tD1E10D680CDC9E8D0C44EDD7C880F4AD1EDA8CAD * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DifficultySystem::DifficultyUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DifficultySystem_DifficultyUpdate_m222CEB81EA70FDA0A7F556906BB8E96A9D1C44D0 (DifficultySystem_t890C85560517296BDCC85431D950A36A8E5FA6E7 * __this, const RuntimeMethod* method)
{
	{
		// _movement.speed += 0.1f;
		Movement_t81B548083980F3B23F17AC9CA1C906E46F4B594C * L_0 = __this->get__movement_4();
		Movement_t81B548083980F3B23F17AC9CA1C906E46F4B594C * L_1 = L_0;
		NullCheck(L_1);
		float L_2;
		L_2 = Movement_get_speed_m95212CCB37C694CEDE8B33EEEFFBB5B0E5091139(L_1, /*hidden argument*/NULL);
		NullCheck(L_1);
		Movement_set_speed_m49A30ECCEF7CF0A1380D3F171E24BFDA99C39AFE(L_1, ((float)il2cpp_codegen_add((float)L_2, (float)(0.100000001f))), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DifficultySystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DifficultySystem__ctor_mECEA3E69A347E45E62633BE585309721A72632BB (DifficultySystem_t890C85560517296BDCC85431D950A36A8E5FA6E7 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FPS::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FPS_Start_m12C2B035DC741040C11DBD82D3AF15A9E2D929AE (FPS_t2BF93E8D6D0DE5740268969C725821F2730E9D88 * __this, const RuntimeMethod* method)
{
	{
		// StartCoroutine(FPSShow());
		RuntimeObject* L_0;
		L_0 = FPS_FPSShow_mE873E05C84B0DDB7FE7BDA2B684A8D1A022A8E89(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_1;
		L_1 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator FPS::FPSShow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FPS_FPSShow_mE873E05C84B0DDB7FE7BDA2B684A8D1A022A8E89 (FPS_t2BF93E8D6D0DE5740268969C725821F2730E9D88 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CFPSShowU3Ed__1_t96B8D881F827C451C455FB3E4D52DA18284ADA6A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CFPSShowU3Ed__1_t96B8D881F827C451C455FB3E4D52DA18284ADA6A * L_0 = (U3CFPSShowU3Ed__1_t96B8D881F827C451C455FB3E4D52DA18284ADA6A *)il2cpp_codegen_object_new(U3CFPSShowU3Ed__1_t96B8D881F827C451C455FB3E4D52DA18284ADA6A_il2cpp_TypeInfo_var);
		U3CFPSShowU3Ed__1__ctor_m9890260FC1415BCACA3627C72E19417C743A0569(L_0, 0, /*hidden argument*/NULL);
		U3CFPSShowU3Ed__1_t96B8D881F827C451C455FB3E4D52DA18284ADA6A * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void FPS::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FPS__ctor_mA34ADE1A160A89BFE82D0EA52A0A53A8AD8652C6 (FPS_t2BF93E8D6D0DE5740268969C725821F2730E9D88 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void HCTraffic::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HCTraffic_Awake_m55B25DC28D0C5E56B530F46393027F377C404908 (HCTraffic_t1CEB8C258DECA919DFD60C350B3D04680E06CC02 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47892CCD861138A3AD23D6B3FD2BCC63203ADC1E);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		// if (transform.childCount != 0)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05(L_0, /*hidden argument*/NULL);
		V_0 = (bool)((!(((uint32_t)L_1) <= ((uint32_t)0)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		// SpawnPoints = new Transform[transform.childCount];
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05(L_3, /*hidden argument*/NULL);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_5 = (TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D*)(TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D*)SZArrayNew(TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D_il2cpp_TypeInfo_var, (uint32_t)L_4);
		__this->set_SpawnPoints_12(L_5);
		goto IL_0042;
	}

IL_002d:
	{
		// Debug.Log(" <color=yellow> No spawn points! </color>");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral47892CCD861138A3AD23D6B3FD2BCC63203ADC1E, /*hidden argument*/NULL);
		// locked = true;
		__this->set_locked_13((bool)1);
		// return;
		goto IL_0072;
	}

IL_0042:
	{
		// for (int k = 0; k < transform.childCount; k++)
		V_1 = 0;
		goto IL_0060;
	}

IL_0046:
	{
		// SpawnPoints[k] = transform.GetChild(k);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_6 = __this->get_SpawnPoints_12();
		int32_t L_7 = V_1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		int32_t L_9 = V_1;
		NullCheck(L_8);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_8, L_9, /*hidden argument*/NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_10);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)L_10);
		// for (int k = 0; k < transform.childCount; k++)
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_0060:
	{
		// for (int k = 0; k < transform.childCount; k++)
		int32_t L_12 = V_1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		int32_t L_14;
		L_14 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05(L_13, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)L_12) < ((int32_t)L_14))? 1 : 0);
		bool L_15 = V_2;
		if (L_15)
		{
			goto IL_0046;
		}
	}

IL_0072:
	{
		// }
		return;
	}
}
// System.Void HCTraffic::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HCTraffic_Start_m62088982439F08B6326299DD280ABFD30EBC2353 (HCTraffic_t1CEB8C258DECA919DFD60C350B3D04680E06CC02 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36C60883FA5366BBEAB95DC47357F7013A19859A);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	{
		// UnityEngine.Random.InitState((int)System.DateTime.Now.Ticks * 1000);
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0;
		L_0 = DateTime_get_Now_mCAC695993D6E2C57B900C83BEF3F8B18BC4EBC2C(/*hidden argument*/NULL);
		V_0 = L_0;
		int64_t L_1;
		L_1 = DateTime_get_Ticks_m175EDB41A50DB06872CC48CAB603FEBD1DFF46A9((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&V_0), /*hidden argument*/NULL);
		Random_InitState_m9030E6387803E8EBAD0A5B0150254A89F8286A9C(((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((int32_t)L_1)), (int32_t)((int32_t)1000))), /*hidden argument*/NULL);
		// StartCoroutine(SpawnInterval(Random.Range(MinSpawnInterval, MaxSpawnInterval)));
		float L_2 = __this->get_MinSpawnInterval_5();
		float L_3 = __this->get_MaxSpawnInterval_6();
		float L_4;
		L_4 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(L_2, L_3, /*hidden argument*/NULL);
		RuntimeObject* L_5;
		L_5 = HCTraffic_SpawnInterval_mCA8DD7062BD3753DF1E0EE4BBFA32F7ED4782722(__this, L_4, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_6;
		L_6 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_5, /*hidden argument*/NULL);
		// VehicleContainer = new GameObject { };
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mACDBD7A1F25B33D006A60F67EF901B33DD3D52E9(L_7, /*hidden argument*/NULL);
		__this->set_VehicleContainer_15(L_7);
		// VehicleContainer.name = "VehicleContainer";
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = __this->get_VehicleContainer_15();
		NullCheck(L_8);
		Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781(L_8, _stringLiteral36C60883FA5366BBEAB95DC47357F7013A19859A, /*hidden argument*/NULL);
		// if (!locked)
		bool L_9 = __this->get_locked_13();
		V_1 = (bool)((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_1;
		if (!L_10)
		{
			goto IL_00a9;
		}
	}
	{
		// CarSpeedVariations = new float[SpawnPoints.Length];
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_11 = __this->get_SpawnPoints_12();
		NullCheck(L_11);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_12 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))));
		__this->set_CarSpeedVariations_14(L_12);
		// for(int k0 = 0; k0 < CarSpeedVariations.Length; k0++)
		V_2 = 0;
		goto IL_0099;
	}

IL_007a:
	{
		// CarSpeedVariations[k0] = Random.Range(CarLineSpeedVarMin, CarLineSpeedVarMax);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_13 = __this->get_CarSpeedVariations_14();
		int32_t L_14 = V_2;
		float L_15 = __this->get_CarLineSpeedVarMin_9();
		float L_16 = __this->get_CarLineSpeedVarMax_10();
		float L_17;
		L_17 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(L_15, L_16, /*hidden argument*/NULL);
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (float)L_17);
		// for(int k0 = 0; k0 < CarSpeedVariations.Length; k0++)
		int32_t L_18 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_0099:
	{
		// for(int k0 = 0; k0 < CarSpeedVariations.Length; k0++)
		int32_t L_19 = V_2;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_20 = __this->get_CarSpeedVariations_14();
		NullCheck(L_20);
		V_3 = (bool)((((int32_t)L_19) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))))? 1 : 0);
		bool L_21 = V_3;
		if (L_21)
		{
			goto IL_007a;
		}
	}
	{
	}

IL_00a9:
	{
		// }
		return;
	}
}
// System.Void HCTraffic::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HCTraffic_Update_m978C174F9449B4CBC484FFBA735C857A4DB1998E (HCTraffic_t1CEB8C258DECA919DFD60C350B3D04680E06CC02 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator HCTraffic::SpawnInterval(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HCTraffic_SpawnInterval_mCA8DD7062BD3753DF1E0EE4BBFA32F7ED4782722 (HCTraffic_t1CEB8C258DECA919DFD60C350B3D04680E06CC02 * __this, float ___rTime0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSpawnIntervalU3Ed__15_tFF276102F52D81BEBF574FB151E15CBCAC9EC109_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSpawnIntervalU3Ed__15_tFF276102F52D81BEBF574FB151E15CBCAC9EC109 * L_0 = (U3CSpawnIntervalU3Ed__15_tFF276102F52D81BEBF574FB151E15CBCAC9EC109 *)il2cpp_codegen_object_new(U3CSpawnIntervalU3Ed__15_tFF276102F52D81BEBF574FB151E15CBCAC9EC109_il2cpp_TypeInfo_var);
		U3CSpawnIntervalU3Ed__15__ctor_mE3025269BEEFF457E7D3072A9FE18A27B21291D9(L_0, 0, /*hidden argument*/NULL);
		U3CSpawnIntervalU3Ed__15_tFF276102F52D81BEBF574FB151E15CBCAC9EC109 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_3(__this);
		U3CSpawnIntervalU3Ed__15_tFF276102F52D81BEBF574FB151E15CBCAC9EC109 * L_2 = L_1;
		float L_3 = ___rTime0;
		NullCheck(L_2);
		L_2->set_rTime_2(L_3);
		return L_2;
	}
}
// System.Void HCTraffic::OnDrawGizmos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HCTraffic_OnDrawGizmos_mF9106D4D72847C4A9E227206D3AAA5803E2F9930 (HCTraffic_t1CEB8C258DECA919DFD60C350B3D04680E06CC02 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	{
		// for (int k0 = 0; k0 < transform.childCount; k0++)
		V_0 = 0;
		goto IL_00e6;
	}

IL_0008:
	{
		// Vector3 Pos = transform.GetChild(k0).transform.localPosition;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		int32_t L_1 = V_0;
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_0, L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		// Gizmos.color = Color.green;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_5;
		L_5 = Color_get_green_mFF9BD42534D385A0717B1EAD083ADF08712984B9(/*hidden argument*/NULL);
		Gizmos_set_color_m937ACC6288C81BAFFC3449FAA03BB4F680F4E74F(L_5, /*hidden argument*/NULL);
		// Gizmos.DrawWireSphere(Pos, MaxStartScatter);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = V_1;
		float L_7 = __this->get_MaxStartScatter_7();
		Gizmos_DrawWireSphere_m96C425145BBD85CF0192F9DDB3D1A8C69429B78B(L_6, L_7, /*hidden argument*/NULL);
		// Gizmos.DrawLine(transform.GetChild(k0).position, transform.GetChild(k0).position + transform.GetChild(k0).transform.TransformVector(Vector3.forward) * 300);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		int32_t L_9 = V_0;
		NullCheck(L_8);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_8, L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_10, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		int32_t L_13 = V_0;
		NullCheck(L_12);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_12, L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_14, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		int32_t L_17 = V_0;
		NullCheck(L_16);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18;
		L_18 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_16, L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19;
		L_19 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_18, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		L_20 = Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90(/*hidden argument*/NULL);
		NullCheck(L_19);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		L_21 = Transform_TransformVector_m7C5F87858E82A686A233D1866443ACAEA296AA2B(L_19, L_20, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
		L_22 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_21, (300.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		L_23 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_15, L_22, /*hidden argument*/NULL);
		Gizmos_DrawLine_m91F1AA0205C7D53D2AA8E2F1D7B338E601A30823(L_11, L_23, /*hidden argument*/NULL);
		// Gizmos.color = Color.yellow;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_24;
		L_24 = Color_get_yellow_m9FD4BDABA7E40E136BE57EE7872CEA6B1B2FA1D1(/*hidden argument*/NULL);
		Gizmos_set_color_m937ACC6288C81BAFFC3449FAA03BB4F680F4E74F(L_24, /*hidden argument*/NULL);
		// for (int k1 = 0; k1 < 10; k1++)
		V_2 = 0;
		goto IL_00d8;
	}

IL_0099:
	{
		// Gizmos.DrawWireSphere(Pos += transform.GetChild(k0).transform.TransformVector(Vector3.forward) * 30, MaxStartScatter);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25 = V_1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_26;
		L_26 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		int32_t L_27 = V_0;
		NullCheck(L_26);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_28;
		L_28 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_26, L_27, /*hidden argument*/NULL);
		NullCheck(L_28);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_29;
		L_29 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_28, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30;
		L_30 = Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90(/*hidden argument*/NULL);
		NullCheck(L_29);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31;
		L_31 = Transform_TransformVector_m7C5F87858E82A686A233D1866443ACAEA296AA2B(L_29, L_30, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32;
		L_32 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_31, (30.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33;
		L_33 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_25, L_32, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34 = L_33;
		V_1 = L_34;
		float L_35 = __this->get_MaxStartScatter_7();
		Gizmos_DrawWireSphere_m96C425145BBD85CF0192F9DDB3D1A8C69429B78B(L_34, L_35, /*hidden argument*/NULL);
		// for (int k1 = 0; k1 < 10; k1++)
		int32_t L_36 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)1));
	}

IL_00d8:
	{
		// for (int k1 = 0; k1 < 10; k1++)
		int32_t L_37 = V_2;
		V_3 = (bool)((((int32_t)L_37) < ((int32_t)((int32_t)10)))? 1 : 0);
		bool L_38 = V_3;
		if (L_38)
		{
			goto IL_0099;
		}
	}
	{
		// for (int k0 = 0; k0 < transform.childCount; k0++)
		int32_t L_39 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)1));
	}

IL_00e6:
	{
		// for (int k0 = 0; k0 < transform.childCount; k0++)
		int32_t L_40 = V_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_41;
		L_41 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_41);
		int32_t L_42;
		L_42 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05(L_41, /*hidden argument*/NULL);
		V_4 = (bool)((((int32_t)L_40) < ((int32_t)L_42))? 1 : 0);
		bool L_43 = V_4;
		if (L_43)
		{
			goto IL_0008;
		}
	}
	{
		// }
		return;
	}
}
// System.Void HCTraffic::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HCTraffic__ctor_mCAD179D8A9A64BB3953E2D9CF3CAFA02AEF961A1 (HCTraffic_t1CEB8C258DECA919DFD60C350B3D04680E06CC02 * __this, const RuntimeMethod* method)
{
	{
		// public int MaxVehicleCount = 50;
		__this->set_MaxVehicleCount_4(((int32_t)50));
		// public float MinSpawnInterval = 0.3f;
		__this->set_MinSpawnInterval_5((0.300000012f));
		// public float MaxSpawnInterval = 1.3f;
		__this->set_MaxSpawnInterval_6((1.29999995f));
		// public float MaxStartScatter = 3.0f;
		__this->set_MaxStartScatter_7((3.0f));
		// public float CarLineSpeedVarMin = -5f;
		__this->set_CarLineSpeedVarMin_9((-5.0f));
		// public float CarLineSpeedVarMax = 15f;
		__this->set_CarLineSpeedVarMax_10((15.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void HCVehicle::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HCVehicle_Start_m759E86B0F3FD12B502FEFB72839C54861DAB518A (HCVehicle_tD4C626176997767010D3E92648CED7AA2AFADAE1 * __this, const RuntimeMethod* method)
{
	{
		// StartPosition = transform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		__this->set_StartPosition_7(L_1);
		// }
		return;
	}
}
// System.Void HCVehicle::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HCVehicle_Update_m5E7A0E87E5D692C90155B46628DD078294DB2A2A (HCVehicle_tD4C626176997767010D3E92648CED7AA2AFADAE1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// transform.localPosition += transform.TransformDirection(Vector3.forward) * CarSpeed * Time.deltaTime;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = L_0;
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_1, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90(/*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_TransformDirection_m6B5E3F0A7C6323159DEC6D9BC035FB53ADD96E91(L_3, L_4, /*hidden argument*/NULL);
		float L_6 = __this->get_CarSpeed_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_5, L_6, /*hidden argument*/NULL);
		float L_8;
		L_8 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_7, L_8, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_2, L_9, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_1, L_10, /*hidden argument*/NULL);
		// if (FastDistance(transform.position, StartPosition, CarLife))
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_11, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = __this->get_StartPosition_7();
		float L_14 = __this->get_CarLife_5();
		bool L_15;
		L_15 = HCVehicle_FastDistance_m68BBB1189C7310A7B8C70C3E41DE56556EE74468(__this, L_12, L_13, L_14, /*hidden argument*/NULL);
		V_0 = L_15;
		bool L_16 = V_0;
		if (!L_16)
		{
			goto IL_007f;
		}
	}
	{
		// _HCTrafficLinked.VehicleCount--;
		HCTraffic_t1CEB8C258DECA919DFD60C350B3D04680E06CC02 * L_17 = __this->get__HCTrafficLinked_6();
		HCTraffic_t1CEB8C258DECA919DFD60C350B3D04680E06CC02 * L_18 = L_17;
		NullCheck(L_18);
		int32_t L_19 = L_18->get_VehicleCount_11();
		NullCheck(L_18);
		L_18->set_VehicleCount_11(((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)1)));
		// Destroy(this.gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20;
		L_20 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_20, /*hidden argument*/NULL);
	}

IL_007f:
	{
		// }
		return;
	}
}
// System.Boolean HCVehicle::FastDistance(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HCVehicle_FastDistance_m68BBB1189C7310A7B8C70C3E41DE56556EE74468 (HCVehicle_tD4C626176997767010D3E92648CED7AA2AFADAE1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___Self0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___Target1, float ___Radius2, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	{
		// bool Xpass = false;
		V_0 = (bool)0;
		// bool Zpass = false;
		V_1 = (bool)0;
		// if ((Self.x >= 0 & Target.x >= 0) | (Self.x < 0 & Target.x < 0))
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___Self0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___Target1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___Self0;
		float L_5 = L_4.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___Target1;
		float L_7 = L_6.get_x_2();
		V_2 = (bool)((int32_t)((int32_t)((int32_t)((int32_t)((((int32_t)((!(((float)L_1) >= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0)&(int32_t)((((int32_t)((!(((float)L_3) >= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0)))|(int32_t)((int32_t)((int32_t)((((float)L_5) < ((float)(0.0f)))? 1 : 0)&(int32_t)((((float)L_7) < ((float)(0.0f)))? 1 : 0)))));
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_006f;
		}
	}
	{
		// if (Mathf.Abs(Mathf.Abs(Self.x) - Mathf.Abs(Target.x)) > Radius) Xpass = true;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = ___Self0;
		float L_10 = L_9.get_x_2();
		float L_11;
		L_11 = fabsf(L_10);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = ___Target1;
		float L_13 = L_12.get_x_2();
		float L_14;
		L_14 = fabsf(L_13);
		float L_15;
		L_15 = fabsf(((float)il2cpp_codegen_subtract((float)L_11, (float)L_14)));
		float L_16 = ___Radius2;
		V_3 = (bool)((((float)L_15) > ((float)L_16))? 1 : 0);
		bool L_17 = V_3;
		if (!L_17)
		{
			goto IL_006c;
		}
	}
	{
		// if (Mathf.Abs(Mathf.Abs(Self.x) - Mathf.Abs(Target.x)) > Radius) Xpass = true;
		V_0 = (bool)1;
	}

IL_006c:
	{
		goto IL_0093;
	}

IL_006f:
	{
		// if (Mathf.Abs(Self.x) + Mathf.Abs(Target.x) > Radius) Xpass = true;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = ___Self0;
		float L_19 = L_18.get_x_2();
		float L_20;
		L_20 = fabsf(L_19);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21 = ___Target1;
		float L_22 = L_21.get_x_2();
		float L_23;
		L_23 = fabsf(L_22);
		float L_24 = ___Radius2;
		V_4 = (bool)((((float)((float)il2cpp_codegen_add((float)L_20, (float)L_23))) > ((float)L_24))? 1 : 0);
		bool L_25 = V_4;
		if (!L_25)
		{
			goto IL_0092;
		}
	}
	{
		// if (Mathf.Abs(Self.x) + Mathf.Abs(Target.x) > Radius) Xpass = true;
		V_0 = (bool)1;
	}

IL_0092:
	{
	}

IL_0093:
	{
		// if ((Self.z >= 0 & Target.z >= 0) | (Self.z < 0 & Target.z < 0))
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26 = ___Self0;
		float L_27 = L_26.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28 = ___Target1;
		float L_29 = L_28.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30 = ___Self0;
		float L_31 = L_30.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32 = ___Target1;
		float L_33 = L_32.get_z_4();
		V_5 = (bool)((int32_t)((int32_t)((int32_t)((int32_t)((((int32_t)((!(((float)L_27) >= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0)&(int32_t)((((int32_t)((!(((float)L_29) >= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0)))|(int32_t)((int32_t)((int32_t)((((float)L_31) < ((float)(0.0f)))? 1 : 0)&(int32_t)((((float)L_33) < ((float)(0.0f)))? 1 : 0)))));
		bool L_34 = V_5;
		if (!L_34)
		{
			goto IL_0101;
		}
	}
	{
		// if (Mathf.Abs(Mathf.Abs(Self.z) - Mathf.Abs(Target.z)) > Radius) Zpass = true;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35 = ___Self0;
		float L_36 = L_35.get_z_4();
		float L_37;
		L_37 = fabsf(L_36);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38 = ___Target1;
		float L_39 = L_38.get_z_4();
		float L_40;
		L_40 = fabsf(L_39);
		float L_41;
		L_41 = fabsf(((float)il2cpp_codegen_subtract((float)L_37, (float)L_40)));
		float L_42 = ___Radius2;
		V_6 = (bool)((((float)L_41) > ((float)L_42))? 1 : 0);
		bool L_43 = V_6;
		if (!L_43)
		{
			goto IL_00fe;
		}
	}
	{
		// if (Mathf.Abs(Mathf.Abs(Self.z) - Mathf.Abs(Target.z)) > Radius) Zpass = true;
		V_1 = (bool)1;
	}

IL_00fe:
	{
		goto IL_0125;
	}

IL_0101:
	{
		// if (Mathf.Abs(Self.z) + Mathf.Abs(Target.z) > Radius) Zpass = true;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_44 = ___Self0;
		float L_45 = L_44.get_z_4();
		float L_46;
		L_46 = fabsf(L_45);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_47 = ___Target1;
		float L_48 = L_47.get_z_4();
		float L_49;
		L_49 = fabsf(L_48);
		float L_50 = ___Radius2;
		V_7 = (bool)((((float)((float)il2cpp_codegen_add((float)L_46, (float)L_49))) > ((float)L_50))? 1 : 0);
		bool L_51 = V_7;
		if (!L_51)
		{
			goto IL_0124;
		}
	}
	{
		// if (Mathf.Abs(Self.z) + Mathf.Abs(Target.z) > Radius) Zpass = true;
		V_1 = (bool)1;
	}

IL_0124:
	{
	}

IL_0125:
	{
		// if (Xpass | Zpass) return true;
		bool L_52 = V_0;
		bool L_53 = V_1;
		V_8 = (bool)((int32_t)((int32_t)L_52|(int32_t)L_53));
		bool L_54 = V_8;
		if (!L_54)
		{
			goto IL_0133;
		}
	}
	{
		// if (Xpass | Zpass) return true;
		V_9 = (bool)1;
		goto IL_0138;
	}

IL_0133:
	{
		// else return false;
		V_9 = (bool)0;
		goto IL_0138;
	}

IL_0138:
	{
		// }
		bool L_55 = V_9;
		return L_55;
	}
}
// System.Void HCVehicle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HCVehicle__ctor_m853CFD2F1B5A25C3A937757E904C903AEB3CA6BE (HCVehicle_tD4C626176997767010D3E92648CED7AA2AFADAE1 * __this, const RuntimeMethod* method)
{
	{
		// public float CarSpeed = 5;
		__this->set_CarSpeed_4((5.0f));
		// public float CarLife = 900;
		__this->set_CarLife_5((900.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 Health::get_health()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Health_get_health_m7F1A2A772A4A398875F61EAF3185D998EC5BDD5F (Health_tB86D9293C9CF1E5B8E4C7271395F56DD4C67AE96 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// get { return _health; }
		int32_t L_0 = __this->get__health_6();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return _health; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void Health::set_health(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Health_set_health_m30356675F36B5B9947AFD09F92C93EAEBF479795 (Health_tB86D9293C9CF1E5B8E4C7271395F56DD4C67AE96 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set { _health = value; }
		int32_t L_0 = ___value0;
		__this->set__health_6(L_0);
		// set { _health = value; }
		return;
	}
}
// System.Void Health::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Health_Start_m67B788A33501A2CF22C3231FD3FCCD6D1D63A77F (Health_tB86D9293C9CF1E5B8E4C7271395F56DD4C67AE96 * __this, const RuntimeMethod* method)
{
	{
		// _healthSlider.value = health;
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_0 = __this->get__healthSlider_5();
		int32_t L_1;
		L_1 = Health_get_health_m7F1A2A772A4A398875F61EAF3185D998EC5BDD5F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_0, ((float)((float)L_1)));
		// }
		return;
	}
}
// System.Void Health::TakeDamage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Health_TakeDamage_m402507DD6ECA75FCA7761EE37906226BA103EAE4 (Health_tB86D9293C9CF1E5B8E4C7271395F56DD4C67AE96 * __this, int32_t ___damage0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// _health -= damage;
		int32_t L_0 = __this->get__health_6();
		int32_t L_1 = ___damage0;
		__this->set__health_6(((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1)));
		// _healthSlider.value -= damage;
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_2 = __this->get__healthSlider_5();
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_3 = L_2;
		NullCheck(L_3);
		float L_4;
		L_4 = VirtFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_3);
		int32_t L_5 = ___damage0;
		NullCheck(L_3);
		VirtActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_3, ((float)il2cpp_codegen_subtract((float)L_4, (float)((float)((float)L_5)))));
		// if(_health <= 0)
		int32_t L_6 = __this->get__health_6();
		V_0 = (bool)((((int32_t)((((int32_t)L_6) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_003d;
		}
	}
	{
		// GameOver();
		Health_GameOver_m7D2560AE37EB019D46F4A9BAA0C7EDF5C2892A34(__this, /*hidden argument*/NULL);
	}

IL_003d:
	{
		// }
		return;
	}
}
// System.Void Health::GameOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Health_GameOver_m7D2560AE37EB019D46F4A9BAA0C7EDF5C2892A34 (Health_tB86D9293C9CF1E5B8E4C7271395F56DD4C67AE96 * __this, const RuntimeMethod* method)
{
	{
		// _currentSession.SetValues();
		Session_tBF465A2B862D5E44002D0BBEE7F68FB6B64129BC * L_0 = __this->get__currentSession_8();
		NullCheck(L_0);
		Session_SetValues_m100CEFD9B77BEA576ED2115993EAA9606A155234(L_0, /*hidden argument*/NULL);
		// _gameOverPanel.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get__gameOverPanel_4();
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)1, /*hidden argument*/NULL);
		// _playersMovement.enabled = false;
		Movement_t81B548083980F3B23F17AC9CA1C906E46F4B594C * L_2 = __this->get__playersMovement_7();
		NullCheck(L_2);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_2, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Health::Heal(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Health_Heal_mEB16314F9C9C09E62B8BAFBFAB5A8CAF35F6284D (Health_tB86D9293C9CF1E5B8E4C7271395F56DD4C67AE96 * __this, int32_t ___hp0, const RuntimeMethod* method)
{
	{
		// health = hp;
		int32_t L_0 = ___hp0;
		Health_set_health_m30356675F36B5B9947AFD09F92C93EAEBF479795(__this, L_0, /*hidden argument*/NULL);
		// _healthSlider.value = health;
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_1 = __this->get__healthSlider_5();
		int32_t L_2;
		L_2 = Health_get_health_m7F1A2A772A4A398875F61EAF3185D998EC5BDD5F(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		VirtActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_1, ((float)((float)L_2)));
		// _playersMovement.enabled = true;
		Movement_t81B548083980F3B23F17AC9CA1C906E46F4B594C * L_3 = __this->get__playersMovement_7();
		NullCheck(L_3);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_3, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Health::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Health__ctor_mD50C73D87211EAE260B38B2936F01722E31B9416 (Health_tB86D9293C9CF1E5B8E4C7271395F56DD4C67AE96 * __this, const RuntimeMethod* method)
{
	{
		// [SerializeField] private int _health = 100;
		__this->set__health_6(((int32_t)100));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void HeighLimit::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeighLimit_OnTriggerEnter_m200C7BA241DCF8F09FE7C0CB737A16D7E0C6BFA8 (HeighLimit_t9C5A911EC2D9A78566683C9D7C7B658B30D90AB4 * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m1BED3A96709F9A68D06117FAAE2AE1456F74CE7B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if(other.GetComponent<Player>() != null)
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_0 = ___other0;
		NullCheck(L_0);
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_1;
		L_1 = Component_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m1BED3A96709F9A68D06117FAAE2AE1456F74CE7B(L_0, /*hidden argument*/Component_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m1BED3A96709F9A68D06117FAAE2AE1456F74CE7B_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_005a;
		}
	}
	{
		// other.transform.position = new Vector3(other.transform.position.x, other.transform.position.y - 10f, other.transform.position.z);
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_4 = ___other0;
		NullCheck(L_4);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_4, /*hidden argument*/NULL);
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_6 = ___other0;
		NullCheck(L_6);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_7, /*hidden argument*/NULL);
		float L_9 = L_8.get_x_2();
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_10 = ___other0;
		NullCheck(L_10);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_11, /*hidden argument*/NULL);
		float L_13 = L_12.get_y_3();
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_14 = ___other0;
		NullCheck(L_14);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15;
		L_15 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_15, /*hidden argument*/NULL);
		float L_17 = L_16.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_18), L_9, ((float)il2cpp_codegen_subtract((float)L_13, (float)(10.0f))), L_17, /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_5, L_18, /*hidden argument*/NULL);
	}

IL_005a:
	{
		// }
		return;
	}
}
// System.Void HeighLimit::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeighLimit__ctor_m1D6420EDB0B0D7FCCB5BE1539D2E595A3DED4CE7 (HeighLimit_t9C5A911EC2D9A78566683C9D7C7B658B30D90AB4 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LowZone::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowZone_OnTriggerEnter_m2C22514BD88EDCA504E02873D7128CDAA5972344 (LowZone_t01FB485ABD40AB26E05D1531AB4E9010B2A1844B * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m1BED3A96709F9A68D06117FAAE2AE1456F74CE7B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (other.GetComponent<Player>() != null)
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_0 = ___other0;
		NullCheck(L_0);
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_1;
		L_1 = Component_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m1BED3A96709F9A68D06117FAAE2AE1456F74CE7B(L_0, /*hidden argument*/Component_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m1BED3A96709F9A68D06117FAAE2AE1456F74CE7B_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		// _cameraFollow.yDist = 1f;
		CameraFollow_tC9B62E254DA1376073E7B793597F9D6CD2A82DF8 * L_4 = __this->get__cameraFollow_4();
		NullCheck(L_4);
		CameraFollow_set_yDist_m234BE56CC6A3D5D0AD583F808D0DEBD081356175(L_4, (1.0f), /*hidden argument*/NULL);
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Void LowZone::OnTriggerExit(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowZone_OnTriggerExit_m8CAB1BF48614D85B70344F707DBAE31D01F4735D (LowZone_t01FB485ABD40AB26E05D1531AB4E9010B2A1844B * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m1BED3A96709F9A68D06117FAAE2AE1456F74CE7B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (other.GetComponent<Player>() != null)
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_0 = ___other0;
		NullCheck(L_0);
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_1;
		L_1 = Component_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m1BED3A96709F9A68D06117FAAE2AE1456F74CE7B(L_0, /*hidden argument*/Component_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m1BED3A96709F9A68D06117FAAE2AE1456F74CE7B_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		// _cameraFollow.yDist = 3f;
		CameraFollow_tC9B62E254DA1376073E7B793597F9D6CD2A82DF8 * L_4 = __this->get__cameraFollow_4();
		NullCheck(L_4);
		CameraFollow_set_yDist_m234BE56CC6A3D5D0AD583F808D0DEBD081356175(L_4, (3.0f), /*hidden argument*/NULL);
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Void LowZone::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowZone__ctor_m20B9008DDF2CA1E80C75B91986F08B84B5808CB8 (LowZone_t01FB485ABD40AB26E05D1531AB4E9010B2A1844B * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Menu::GoToMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_GoToMenu_m3A54002529C0BCFA5F6B6AF4628F1B4E35364A64 (Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _totalBalance.balance += _session.coinsAmount;
		Balance_t2C96E30A413FF03954FF7EE1D62E73AAA4A48ADF * L_0 = __this->get__totalBalance_4();
		Balance_t2C96E30A413FF03954FF7EE1D62E73AAA4A48ADF * L_1 = L_0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Balance_get_balance_m18EED9A58F10FB6D0D7A5EBD9C7CF73FE72205FA(L_1, /*hidden argument*/NULL);
		Session_tBF465A2B862D5E44002D0BBEE7F68FB6B64129BC * L_3 = __this->get__session_5();
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Session_get_coinsAmount_m896CD9CB9700AC90EBA159B9438B935690D6C4B6(L_3, /*hidden argument*/NULL);
		NullCheck(L_1);
		Balance_set_balance_m2BE4AA536C063EDA651566E72E9121EA857F0ED5(L_1, ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)L_4)), /*hidden argument*/NULL);
		// SceneManager.LoadScene(0);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Menu::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu__ctor_m7EE9043A2E9DD126B6F69DD8AE3BC9CBDF6E2134 (Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MenuController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuController_Start_m3789429129D401EB094B5BFC35FFFBF1ACCF1482 (MenuController_t588D7E4A49E600642B37B1A23E9A1C0DBDF0CEC4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B06C52112CA55E3DB716F4A77D7B31D8F31DE4F);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// _balanceTxt.text = "Balance: " + _totalBalance.balance.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get__balanceTxt_5();
		Balance_t2C96E30A413FF03954FF7EE1D62E73AAA4A48ADF * L_1 = __this->get__totalBalance_4();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Balance_get_balance_m18EED9A58F10FB6D0D7A5EBD9C7CF73FE72205FA(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3;
		L_3 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral5B06C52112CA55E3DB716F4A77D7B31D8F31DE4F, L_3, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_4);
		// }
		return;
	}
}
// System.Void MenuController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuController__ctor_m59357650A99D124D2EB1B4AD34FD6EB2B5F6E182 (MenuController_t588D7E4A49E600642B37B1A23E9A1C0DBDF0CEC4 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean MeshCombiner::get_CreateMultiMaterialMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MeshCombiner_get_CreateMultiMaterialMesh_mEDB45502D254A42398F37EBC47819BAB014FED36 (MeshCombiner_t2CD8003020EE4332F6A85F814B7876EE79DE1C05 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// public bool CreateMultiMaterialMesh { get { return createMultiMaterialMesh; } set { createMultiMaterialMesh = value; } }
		bool L_0 = __this->get_createMultiMaterialMesh_5();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public bool CreateMultiMaterialMesh { get { return createMultiMaterialMesh; } set { createMultiMaterialMesh = value; } }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void MeshCombiner::set_CreateMultiMaterialMesh(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshCombiner_set_CreateMultiMaterialMesh_mE76A3CEC1E7B10346FDF630163FB206BDC5B0DD7 (MeshCombiner_t2CD8003020EE4332F6A85F814B7876EE79DE1C05 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool CreateMultiMaterialMesh { get { return createMultiMaterialMesh; } set { createMultiMaterialMesh = value; } }
		bool L_0 = ___value0;
		__this->set_createMultiMaterialMesh_5(L_0);
		// public bool CreateMultiMaterialMesh { get { return createMultiMaterialMesh; } set { createMultiMaterialMesh = value; } }
		return;
	}
}
// System.Boolean MeshCombiner::get_CombineInactiveChildren()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MeshCombiner_get_CombineInactiveChildren_m17EFE50D9EAA3647640A0A435705CD9A5B5885EE (MeshCombiner_t2CD8003020EE4332F6A85F814B7876EE79DE1C05 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// public bool CombineInactiveChildren { get { return combineInactiveChildren; } set { combineInactiveChildren = value; } }
		bool L_0 = __this->get_combineInactiveChildren_6();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public bool CombineInactiveChildren { get { return combineInactiveChildren; } set { combineInactiveChildren = value; } }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void MeshCombiner::set_CombineInactiveChildren(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshCombiner_set_CombineInactiveChildren_m70EF4464B62076B045B39A397DCEF400E25D314D (MeshCombiner_t2CD8003020EE4332F6A85F814B7876EE79DE1C05 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool CombineInactiveChildren { get { return combineInactiveChildren; } set { combineInactiveChildren = value; } }
		bool L_0 = ___value0;
		__this->set_combineInactiveChildren_6(L_0);
		// public bool CombineInactiveChildren { get { return combineInactiveChildren; } set { combineInactiveChildren = value; } }
		return;
	}
}
// System.Boolean MeshCombiner::get_DeactivateCombinedChildren()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MeshCombiner_get_DeactivateCombinedChildren_mD696FAE201247221959180FF3832649F493D23FB (MeshCombiner_t2CD8003020EE4332F6A85F814B7876EE79DE1C05 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// get { return deactivateCombinedChildren; }
		bool L_0 = __this->get_deactivateCombinedChildren_7();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return deactivateCombinedChildren; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void MeshCombiner::set_DeactivateCombinedChildren(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshCombiner_set_DeactivateCombinedChildren_m18348793B426B6292F94C1E55E14C3DE43EC66F6 (MeshCombiner_t2CD8003020EE4332F6A85F814B7876EE79DE1C05 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// deactivateCombinedChildren = value;
		bool L_0 = ___value0;
		__this->set_deactivateCombinedChildren_7(L_0);
		// CheckDeactivateCombinedChildren();
		MeshCombiner_CheckDeactivateCombinedChildren_m56D06FE355DBD6F3B8F6E1AE52F6EC27AB2D1F2A(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean MeshCombiner::get_DeactivateCombinedChildrenMeshRenderers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MeshCombiner_get_DeactivateCombinedChildrenMeshRenderers_mFA56E16EA0EA45A272E0625E201A6CDED344361D (MeshCombiner_t2CD8003020EE4332F6A85F814B7876EE79DE1C05 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// get { return deactivateCombinedChildrenMeshRenderers; }
		bool L_0 = __this->get_deactivateCombinedChildrenMeshRenderers_8();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return deactivateCombinedChildrenMeshRenderers; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void MeshCombiner::set_DeactivateCombinedChildrenMeshRenderers(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshCombiner_set_DeactivateCombinedChildrenMeshRenderers_m36996592333EB91A0561538D735062ADAEAA5C5C (MeshCombiner_t2CD8003020EE4332F6A85F814B7876EE79DE1C05 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// deactivateCombinedChildrenMeshRenderers = value;
		bool L_0 = ___value0;
		__this->set_deactivateCombinedChildrenMeshRenderers_8(L_0);
		// CheckDeactivateCombinedChildren();
		MeshCombiner_CheckDeactivateCombinedChildren_m56D06FE355DBD6F3B8F6E1AE52F6EC27AB2D1F2A(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean MeshCombiner::get_GenerateUVMap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MeshCombiner_get_GenerateUVMap_m980DF912B63C57989480AE61EC107F2957B6988E (MeshCombiner_t2CD8003020EE4332F6A85F814B7876EE79DE1C05 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// public bool GenerateUVMap { get { return generateUVMap; } set { generateUVMap = value; } }
		bool L_0 = __this->get_generateUVMap_9();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public bool GenerateUVMap { get { return generateUVMap; } set { generateUVMap = value; } }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void MeshCombiner::set_GenerateUVMap(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshCombiner_set_GenerateUVMap_m9865F21650EB815DC6DAD98A91598C5A2951CEFD (MeshCombiner_t2CD8003020EE4332F6A85F814B7876EE79DE1C05 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool GenerateUVMap { get { return generateUVMap; } set { generateUVMap = value; } }
		bool L_0 = ___value0;
		__this->set_generateUVMap_9(L_0);
		// public bool GenerateUVMap { get { return generateUVMap; } set { generateUVMap = value; } }
		return;
	}
}
// System.Boolean MeshCombiner::get_DestroyCombinedChildren()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MeshCombiner_get_DestroyCombinedChildren_m8C24F88E8D69D8042FE918CF63D82E64E2483F23 (MeshCombiner_t2CD8003020EE4332F6A85F814B7876EE79DE1C05 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// get { return destroyCombinedChildren; }
		bool L_0 = __this->get_destroyCombinedChildren_10();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return destroyCombinedChildren; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void MeshCombiner::set_DestroyCombinedChildren(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshCombiner_set_DestroyCombinedChildren_mDC0F4586EBB8F4DFB1F2692FE180B6BD8ED9839E (MeshCombiner_t2CD8003020EE4332F6A85F814B7876EE79DE1C05 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// destroyCombinedChildren = value;
		bool L_0 = ___value0;
		__this->set_destroyCombinedChildren_10(L_0);
		// CheckDestroyCombinedChildren();
		MeshCombiner_CheckDestroyCombinedChildren_m46493720DE2C2A63BA7D99EA23F549A4B42749AE(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.String MeshCombiner::get_FolderPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MeshCombiner_get_FolderPath_mA2285CF62DCD93966B153C053B963443BF0AED1C (MeshCombiner_t2CD8003020EE4332F6A85F814B7876EE79DE1C05 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		// public string FolderPath { get { return folderPath; } set { folderPath = value; } }
		String_t* L_0 = __this->get_folderPath_11();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public string FolderPath { get { return folderPath; } set { folderPath = value; } }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void MeshCombiner::set_FolderPath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshCombiner_set_FolderPath_mB92D54973076F15F39E34A7A2F4D2447B2FB2B3E (MeshCombiner_t2CD8003020EE4332F6A85F814B7876EE79DE1C05 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string FolderPath { get { return folderPath; } set { folderPath = value; } }
		String_t* L_0 = ___value0;
		__this->set_folderPath_11(L_0);
		// public string FolderPath { get { return folderPath; } set { folderPath = value; } }
		return;
	}
}
// System.Void MeshCombiner::CheckDeactivateCombinedChildren()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshCombiner_CheckDeactivateCombinedChildren_m56D06FE355DBD6F3B8F6E1AE52F6EC27AB2D1F2A (MeshCombiner_t2CD8003020EE4332F6A85F814B7876EE79DE1C05 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// if(deactivateCombinedChildren || deactivateCombinedChildrenMeshRenderers)
		bool L_0 = __this->get_deactivateCombinedChildren_7();
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		bool L_1 = __this->get_deactivateCombinedChildrenMeshRenderers_8();
		G_B3_0 = ((int32_t)(L_1));
		goto IL_0012;
	}

IL_0011:
	{
		G_B3_0 = 1;
	}

IL_0012:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		// destroyCombinedChildren = false;
		__this->set_destroyCombinedChildren_10((bool)0);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void MeshCombiner::CheckDestroyCombinedChildren()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshCombiner_CheckDestroyCombinedChildren_m46493720DE2C2A63BA7D99EA23F549A4B42749AE (MeshCombiner_t2CD8003020EE4332F6A85F814B7876EE79DE1C05 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// if(destroyCombinedChildren)
		bool L_0 = __this->get_destroyCombinedChildren_10();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		// deactivateCombinedChildren = false;
		__this->set_deactivateCombinedChildren_7((bool)0);
		// deactivateCombinedChildrenMeshRenderers = false;
		__this->set_deactivateCombinedChildrenMeshRenderers_8((bool)0);
	}

IL_001b:
	{
		// }
		return;
	}
}
// System.Void MeshCombiner::CombineMeshes(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshCombiner_CombineMeshes_mABB61494B5B5A9C007919B88413C4C9132E62989 (MeshCombiner_t2CD8003020EE4332F6A85F814B7876EE79DE1C05 * __this, bool ___showCreatedMeshInfo0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_2 = NULL;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_5;
	memset((&V_5), 0, sizeof(V_5));
	bool V_6 = false;
	{
		// Vector3 oldScaleAsChild = transform.localScale;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// int positionInParentHierarchy = transform.GetSiblingIndex();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Transform_GetSiblingIndex_mEF9DF6406920F8EBCFBC87C6D0630FE3E9E3C1EE(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		// Transform parent = transform.parent;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		// transform.parent = null;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_6, (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)NULL, /*hidden argument*/NULL);
		// Quaternion oldRotation = transform.rotation;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_8;
		L_8 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_7, /*hidden argument*/NULL);
		V_3 = L_8;
		// Vector3 oldPosition = transform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_9, /*hidden argument*/NULL);
		V_4 = L_10;
		// Vector3 oldScale = transform.localScale;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_11, /*hidden argument*/NULL);
		V_5 = L_12;
		// transform.rotation = Quaternion.identity;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_14;
		L_14 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		NullCheck(L_13);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_13, L_14, /*hidden argument*/NULL);
		// transform.position = Vector3.zero;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15;
		L_15 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		NullCheck(L_15);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_15, L_16, /*hidden argument*/NULL);
		// transform.localScale = Vector3.one;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17;
		L_17 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB(/*hidden argument*/NULL);
		NullCheck(L_17);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_17, L_18, /*hidden argument*/NULL);
		// if(!createMultiMaterialMesh)
		bool L_19 = __this->get_createMultiMaterialMesh_5();
		V_6 = (bool)((((int32_t)L_19) == ((int32_t)0))? 1 : 0);
		bool L_20 = V_6;
		if (!L_20)
		{
			goto IL_00a6;
		}
	}
	{
		// CombineMeshesWithSingleMaterial(showCreatedMeshInfo);
		bool L_21 = ___showCreatedMeshInfo0;
		MeshCombiner_CombineMeshesWithSingleMaterial_mD7927B466258A14116C575B9DC084DB968C6782F(__this, L_21, /*hidden argument*/NULL);
		goto IL_00b0;
	}

IL_00a6:
	{
		// CombineMeshesWithMutliMaterial(showCreatedMeshInfo);
		bool L_22 = ___showCreatedMeshInfo0;
		MeshCombiner_CombineMeshesWithMutliMaterial_m550862E2A444C10861A9290BEC2FC8BEF39B9E4B(__this, L_22, /*hidden argument*/NULL);
	}

IL_00b0:
	{
		// transform.rotation = oldRotation;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_23;
		L_23 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_24 = V_3;
		NullCheck(L_23);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_23, L_24, /*hidden argument*/NULL);
		// transform.position = oldPosition;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_25;
		L_25 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26 = V_4;
		NullCheck(L_25);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_25, L_26, /*hidden argument*/NULL);
		// transform.localScale = oldScale;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_27;
		L_27 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28 = V_5;
		NullCheck(L_27);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_27, L_28, /*hidden argument*/NULL);
		// transform.parent = parent;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_29;
		L_29 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_30 = V_2;
		NullCheck(L_29);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_29, L_30, /*hidden argument*/NULL);
		// transform.SetSiblingIndex(positionInParentHierarchy);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_31;
		L_31 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		int32_t L_32 = V_1;
		NullCheck(L_31);
		Transform_SetSiblingIndex_mC69C3B37E6C731AA2A0B9BD787CF47AA5B8001FC(L_31, L_32, /*hidden argument*/NULL);
		// transform.localScale = oldScaleAsChild;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_33;
		L_33 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34 = V_0;
		NullCheck(L_33);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_33, L_34, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.MeshFilter[] MeshCombiner::GetMeshFiltersToCombine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MeshFilterU5BU5D_tE8AA77783A24784C69A8083B4F3E482D866FD503* MeshCombiner_GetMeshFiltersToCombine_mD28F858198DA4E57619450465DA794177BB7DE72 (MeshCombiner_t2CD8003020EE4332F6A85F814B7876EE79DE1C05 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_mC14A87BD002F3F04000161028A31535C5C929ACE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m95B8BE04A1B29F6743BD22D1B7AD02A91BD1D7CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m0AFE42607F680EDF565C25BBE7837AE2FB9D64DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_mEE5387FCFA1D33E7B064E9E3B5F754599986D229_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tDA13BFE7A65FB2551A825A13C2B5B061461BA351_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CGetMeshFiltersToCombineU3Eb__33_1_m9330A19419806D557A51C004767734F45BB225F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass33_0_U3CGetMeshFiltersToCombineU3Eb__0_m257ED5A742B494F6E5C12C847B723D84583EF17D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass33_0_t625D1FF1495408366D10B041997D39A1E07A4B4C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass33_1_U3CGetMeshFiltersToCombineU3Eb__2_m499A70231221E766848D5EB60BB711481249796A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass33_1_t47917A8CA5B35A825FA0802DA1F60C2FB0051AE3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tC607834D420DED2B2B095D41BAB8005F418C3722_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass33_0_t625D1FF1495408366D10B041997D39A1E07A4B4C * V_0 = NULL;
	U3CU3Ec__DisplayClass33_1_t47917A8CA5B35A825FA0802DA1F60C2FB0051AE3 * V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	MeshFilterU5BU5D_tE8AA77783A24784C69A8083B4F3E482D866FD503* V_4 = NULL;
	Func_2_tDA13BFE7A65FB2551A825A13C2B5B061461BA351 * G_B2_0 = NULL;
	MeshFilterU5BU5D_tE8AA77783A24784C69A8083B4F3E482D866FD503* G_B2_1 = NULL;
	MeshCombiner_t2CD8003020EE4332F6A85F814B7876EE79DE1C05 * G_B2_2 = NULL;
	Func_2_tDA13BFE7A65FB2551A825A13C2B5B061461BA351 * G_B1_0 = NULL;
	MeshFilterU5BU5D_tE8AA77783A24784C69A8083B4F3E482D866FD503* G_B1_1 = NULL;
	MeshCombiner_t2CD8003020EE4332F6A85F814B7876EE79DE1C05 * G_B1_2 = NULL;
	{
		U3CU3Ec__DisplayClass33_0_t625D1FF1495408366D10B041997D39A1E07A4B4C * L_0 = (U3CU3Ec__DisplayClass33_0_t625D1FF1495408366D10B041997D39A1E07A4B4C *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass33_0_t625D1FF1495408366D10B041997D39A1E07A4B4C_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass33_0__ctor_m4FF5AAE6916D1387510E64676EAB39A53DC18014(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass33_0_t625D1FF1495408366D10B041997D39A1E07A4B4C * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_1(__this);
		// MeshFilter[] meshFilters = GetComponentsInChildren<MeshFilter>(combineInactiveChildren);
		U3CU3Ec__DisplayClass33_0_t625D1FF1495408366D10B041997D39A1E07A4B4C * L_2 = V_0;
		bool L_3 = __this->get_combineInactiveChildren_6();
		MeshFilterU5BU5D_tE8AA77783A24784C69A8083B4F3E482D866FD503* L_4;
		L_4 = Component_GetComponentsInChildren_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_mC14A87BD002F3F04000161028A31535C5C929ACE(__this, L_3, /*hidden argument*/Component_GetComponentsInChildren_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_mC14A87BD002F3F04000161028A31535C5C929ACE_RuntimeMethod_var);
		NullCheck(L_2);
		L_2->set_meshFilters_0(L_4);
		// meshFiltersToSkip = meshFiltersToSkip.Where((meshFilter) => meshFilter != meshFilters[0]).ToArray();
		MeshFilterU5BU5D_tE8AA77783A24784C69A8083B4F3E482D866FD503* L_5 = __this->get_meshFiltersToSkip_12();
		U3CU3Ec__DisplayClass33_0_t625D1FF1495408366D10B041997D39A1E07A4B4C * L_6 = V_0;
		Func_2_tDA13BFE7A65FB2551A825A13C2B5B061461BA351 * L_7 = (Func_2_tDA13BFE7A65FB2551A825A13C2B5B061461BA351 *)il2cpp_codegen_object_new(Func_2_tDA13BFE7A65FB2551A825A13C2B5B061461BA351_il2cpp_TypeInfo_var);
		Func_2__ctor_mEE5387FCFA1D33E7B064E9E3B5F754599986D229(L_7, L_6, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass33_0_U3CGetMeshFiltersToCombineU3Eb__0_m257ED5A742B494F6E5C12C847B723D84583EF17D_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mEE5387FCFA1D33E7B064E9E3B5F754599986D229_RuntimeMethod_var);
		RuntimeObject* L_8;
		L_8 = Enumerable_Where_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m0AFE42607F680EDF565C25BBE7837AE2FB9D64DC((RuntimeObject*)(RuntimeObject*)L_5, L_7, /*hidden argument*/Enumerable_Where_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m0AFE42607F680EDF565C25BBE7837AE2FB9D64DC_RuntimeMethod_var);
		MeshFilterU5BU5D_tE8AA77783A24784C69A8083B4F3E482D866FD503* L_9;
		L_9 = Enumerable_ToArray_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m95B8BE04A1B29F6743BD22D1B7AD02A91BD1D7CB(L_8, /*hidden argument*/Enumerable_ToArray_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m95B8BE04A1B29F6743BD22D1B7AD02A91BD1D7CB_RuntimeMethod_var);
		__this->set_meshFiltersToSkip_12(L_9);
		// meshFiltersToSkip = meshFiltersToSkip.Where((meshFilter) => meshFilter != null).ToArray();
		MeshFilterU5BU5D_tE8AA77783A24784C69A8083B4F3E482D866FD503* L_10 = __this->get_meshFiltersToSkip_12();
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tC607834D420DED2B2B095D41BAB8005F418C3722_il2cpp_TypeInfo_var);
		Func_2_tDA13BFE7A65FB2551A825A13C2B5B061461BA351 * L_11 = ((U3CU3Ec_tC607834D420DED2B2B095D41BAB8005F418C3722_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC607834D420DED2B2B095D41BAB8005F418C3722_il2cpp_TypeInfo_var))->get_U3CU3E9__33_1_1();
		Func_2_tDA13BFE7A65FB2551A825A13C2B5B061461BA351 * L_12 = L_11;
		G_B1_0 = L_12;
		G_B1_1 = L_10;
		G_B1_2 = __this;
		if (L_12)
		{
			G_B2_0 = L_12;
			G_B2_1 = L_10;
			G_B2_2 = __this;
			goto IL_0068;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tC607834D420DED2B2B095D41BAB8005F418C3722_il2cpp_TypeInfo_var);
		U3CU3Ec_tC607834D420DED2B2B095D41BAB8005F418C3722 * L_13 = ((U3CU3Ec_tC607834D420DED2B2B095D41BAB8005F418C3722_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC607834D420DED2B2B095D41BAB8005F418C3722_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_2_tDA13BFE7A65FB2551A825A13C2B5B061461BA351 * L_14 = (Func_2_tDA13BFE7A65FB2551A825A13C2B5B061461BA351 *)il2cpp_codegen_object_new(Func_2_tDA13BFE7A65FB2551A825A13C2B5B061461BA351_il2cpp_TypeInfo_var);
		Func_2__ctor_mEE5387FCFA1D33E7B064E9E3B5F754599986D229(L_14, L_13, (intptr_t)((intptr_t)U3CU3Ec_U3CGetMeshFiltersToCombineU3Eb__33_1_m9330A19419806D557A51C004767734F45BB225F7_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mEE5387FCFA1D33E7B064E9E3B5F754599986D229_RuntimeMethod_var);
		Func_2_tDA13BFE7A65FB2551A825A13C2B5B061461BA351 * L_15 = L_14;
		((U3CU3Ec_tC607834D420DED2B2B095D41BAB8005F418C3722_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC607834D420DED2B2B095D41BAB8005F418C3722_il2cpp_TypeInfo_var))->set_U3CU3E9__33_1_1(L_15);
		G_B2_0 = L_15;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_0068:
	{
		RuntimeObject* L_16;
		L_16 = Enumerable_Where_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m0AFE42607F680EDF565C25BBE7837AE2FB9D64DC((RuntimeObject*)(RuntimeObject*)G_B2_1, G_B2_0, /*hidden argument*/Enumerable_Where_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m0AFE42607F680EDF565C25BBE7837AE2FB9D64DC_RuntimeMethod_var);
		MeshFilterU5BU5D_tE8AA77783A24784C69A8083B4F3E482D866FD503* L_17;
		L_17 = Enumerable_ToArray_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m95B8BE04A1B29F6743BD22D1B7AD02A91BD1D7CB(L_16, /*hidden argument*/Enumerable_ToArray_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m95B8BE04A1B29F6743BD22D1B7AD02A91BD1D7CB_RuntimeMethod_var);
		NullCheck(G_B2_2);
		G_B2_2->set_meshFiltersToSkip_12(L_17);
		U3CU3Ec__DisplayClass33_1_t47917A8CA5B35A825FA0802DA1F60C2FB0051AE3 * L_18 = (U3CU3Ec__DisplayClass33_1_t47917A8CA5B35A825FA0802DA1F60C2FB0051AE3 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass33_1_t47917A8CA5B35A825FA0802DA1F60C2FB0051AE3_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass33_1__ctor_mF255176B1E0ED28C4A103DB0A66071354CA13A93(L_18, /*hidden argument*/NULL);
		V_1 = L_18;
		U3CU3Ec__DisplayClass33_1_t47917A8CA5B35A825FA0802DA1F60C2FB0051AE3 * L_19 = V_1;
		U3CU3Ec__DisplayClass33_0_t625D1FF1495408366D10B041997D39A1E07A4B4C * L_20 = V_0;
		NullCheck(L_19);
		L_19->set_CSU24U3CU3E8__locals1_1(L_20);
		// for(int i = 0; i < meshFiltersToSkip.Length; i++)
		U3CU3Ec__DisplayClass33_1_t47917A8CA5B35A825FA0802DA1F60C2FB0051AE3 * L_21 = V_1;
		NullCheck(L_21);
		L_21->set_i_0(0);
		goto IL_00cb;
	}

IL_008d:
	{
		// meshFilters = meshFilters.Where((meshFilter) => meshFilter != meshFiltersToSkip[i]).ToArray();
		U3CU3Ec__DisplayClass33_1_t47917A8CA5B35A825FA0802DA1F60C2FB0051AE3 * L_22 = V_1;
		NullCheck(L_22);
		U3CU3Ec__DisplayClass33_0_t625D1FF1495408366D10B041997D39A1E07A4B4C * L_23 = L_22->get_CSU24U3CU3E8__locals1_1();
		U3CU3Ec__DisplayClass33_1_t47917A8CA5B35A825FA0802DA1F60C2FB0051AE3 * L_24 = V_1;
		NullCheck(L_24);
		U3CU3Ec__DisplayClass33_0_t625D1FF1495408366D10B041997D39A1E07A4B4C * L_25 = L_24->get_CSU24U3CU3E8__locals1_1();
		NullCheck(L_25);
		MeshFilterU5BU5D_tE8AA77783A24784C69A8083B4F3E482D866FD503* L_26 = L_25->get_meshFilters_0();
		U3CU3Ec__DisplayClass33_1_t47917A8CA5B35A825FA0802DA1F60C2FB0051AE3 * L_27 = V_1;
		Func_2_tDA13BFE7A65FB2551A825A13C2B5B061461BA351 * L_28 = (Func_2_tDA13BFE7A65FB2551A825A13C2B5B061461BA351 *)il2cpp_codegen_object_new(Func_2_tDA13BFE7A65FB2551A825A13C2B5B061461BA351_il2cpp_TypeInfo_var);
		Func_2__ctor_mEE5387FCFA1D33E7B064E9E3B5F754599986D229(L_28, L_27, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass33_1_U3CGetMeshFiltersToCombineU3Eb__2_m499A70231221E766848D5EB60BB711481249796A_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mEE5387FCFA1D33E7B064E9E3B5F754599986D229_RuntimeMethod_var);
		RuntimeObject* L_29;
		L_29 = Enumerable_Where_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m0AFE42607F680EDF565C25BBE7837AE2FB9D64DC((RuntimeObject*)(RuntimeObject*)L_26, L_28, /*hidden argument*/Enumerable_Where_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m0AFE42607F680EDF565C25BBE7837AE2FB9D64DC_RuntimeMethod_var);
		MeshFilterU5BU5D_tE8AA77783A24784C69A8083B4F3E482D866FD503* L_30;
		L_30 = Enumerable_ToArray_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m95B8BE04A1B29F6743BD22D1B7AD02A91BD1D7CB(L_29, /*hidden argument*/Enumerable_ToArray_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m95B8BE04A1B29F6743BD22D1B7AD02A91BD1D7CB_RuntimeMethod_var);
		NullCheck(L_23);
		L_23->set_meshFilters_0(L_30);
		// for(int i = 0; i < meshFiltersToSkip.Length; i++)
		U3CU3Ec__DisplayClass33_1_t47917A8CA5B35A825FA0802DA1F60C2FB0051AE3 * L_31 = V_1;
		NullCheck(L_31);
		int32_t L_32 = L_31->get_i_0();
		V_2 = L_32;
		U3CU3Ec__DisplayClass33_1_t47917A8CA5B35A825FA0802DA1F60C2FB0051AE3 * L_33 = V_1;
		int32_t L_34 = V_2;
		NullCheck(L_33);
		L_33->set_i_0(((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)1)));
	}

IL_00cb:
	{
		// for(int i = 0; i < meshFiltersToSkip.Length; i++)
		U3CU3Ec__DisplayClass33_1_t47917A8CA5B35A825FA0802DA1F60C2FB0051AE3 * L_35 = V_1;
		NullCheck(L_35);
		int32_t L_36 = L_35->get_i_0();
		MeshFilterU5BU5D_tE8AA77783A24784C69A8083B4F3E482D866FD503* L_37 = __this->get_meshFiltersToSkip_12();
		NullCheck(L_37);
		V_3 = (bool)((((int32_t)L_36) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_37)->max_length)))))? 1 : 0);
		bool L_38 = V_3;
		if (L_38)
		{
			goto IL_008d;
		}
	}
	{
		// return meshFilters;
		U3CU3Ec__DisplayClass33_0_t625D1FF1495408366D10B041997D39A1E07A4B4C * L_39 = V_0;
		NullCheck(L_39);
		MeshFilterU5BU5D_tE8AA77783A24784C69A8083B4F3E482D866FD503* L_40 = L_39->get_meshFilters_0();
		V_4 = L_40;
		goto IL_00e9;
	}

IL_00e9:
	{
		// }
		MeshFilterU5BU5D_tE8AA77783A24784C69A8083B4F3E482D866FD503* L_41 = V_4;
		return L_41;
	}
}
// System.Void MeshCombiner::CombineMeshesWithSingleMaterial(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshCombiner_CombineMeshesWithSingleMaterial_mD7927B466258A14116C575B9DC084DB968C6782F (MeshCombiner_t2CD8003020EE4332F6A85F814B7876EE79DE1C05 * __this, bool ___showCreatedMeshInfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CombineInstanceU5BU5D_tCEC5E0C06082119E1FF9C16E274C016F216803BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m65A516E0B5EAC734DFF622A5E548CB87FEC256E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0795559209156A8AA4E423EC306783E185F571B8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral082ADBD2B65B27F6C56EA11FD6E0EA36380647D6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5C4039D91DE2DE4E28AD026E5CF58DA69383E0E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC1D776C5F458EEF55767EB604CF9D00C7AFC1528);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE6D56CAE0EB074009242B47D6FDE88003022E6E0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFAA8B192E9D503722EA506BCBF50B02369C3C4DC);
		s_Il2CppMethodInitialized = true;
	}
	MeshFilterU5BU5D_tE8AA77783A24784C69A8083B4F3E482D866FD503* V_0 = NULL;
	CombineInstanceU5BU5D_tCEC5E0C06082119E1FF9C16E274C016F216803BF* V_1 = NULL;
	int64_t V_2 = 0;
	MeshRendererU5BU5D_t535468079DEF88AD38546DC5D04E9102C401D228* V_3 = NULL;
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	int32_t V_11 = 0;
	{
		// MeshFilter[] meshFilters = GetMeshFiltersToCombine();
		MeshFilterU5BU5D_tE8AA77783A24784C69A8083B4F3E482D866FD503* L_0;
		L_0 = MeshCombiner_GetMeshFiltersToCombine_mD28F858198DA4E57619450465DA794177BB7DE72(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		// CombineInstance[] combineInstances = new CombineInstance[meshFilters.Length-1];
		MeshFilterU5BU5D_tE8AA77783A24784C69A8083B4F3E482D866FD503* L_1 = V_0;
		NullCheck(L_1);
		CombineInstanceU5BU5D_tCEC5E0C06082119E1FF9C16E274C016F216803BF* L_2 = (CombineInstanceU5BU5D_tCEC5E0C06082119E1FF9C16E274C016F216803BF*)(CombineInstanceU5BU5D_tCEC5E0C06082119E1FF9C16E274C016F216803BF*)SZArrayNew(CombineInstanceU5BU5D_tCEC5E0C06082119E1FF9C16E274C016F216803BF_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))), (int32_t)1)));
		V_1 = L_2;
		// long verticesLength = 0;
		V_2 = ((int64_t)((int64_t)0));
		// for(int i = 0; i < meshFilters.Length-1; i++) 
		V_5 = 0;
		goto IL_0081;
	}

IL_001b:
	{
		// combineInstances[i].subMeshIndex = 0;
		CombineInstanceU5BU5D_tCEC5E0C06082119E1FF9C16E274C016F216803BF* L_3 = V_1;
		int32_t L_4 = V_5;
		NullCheck(L_3);
		CombineInstance_set_subMeshIndex_m9453076541D3A566A4E711E714F69F945379F750((CombineInstance_t3ECBD54BBDD018CE04D23414CDFE0F78A447B45C *)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4))), 0, /*hidden argument*/NULL);
		// combineInstances[i].mesh = meshFilters[i+1].sharedMesh;
		CombineInstanceU5BU5D_tCEC5E0C06082119E1FF9C16E274C016F216803BF* L_5 = V_1;
		int32_t L_6 = V_5;
		NullCheck(L_5);
		MeshFilterU5BU5D_tE8AA77783A24784C69A8083B4F3E482D866FD503* L_7 = V_0;
		int32_t L_8 = V_5;
		NullCheck(L_7);
		int32_t L_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
		MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_10);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_11;
		L_11 = MeshFilter_get_sharedMesh_mDCB12AB93E6E5F477F55A14990A7AB5F1B06F19E(L_10, /*hidden argument*/NULL);
		CombineInstance_set_mesh_m4188D448CFD58C46FC3824D791572D07905FC824((CombineInstance_t3ECBD54BBDD018CE04D23414CDFE0F78A447B45C *)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6))), L_11, /*hidden argument*/NULL);
		// combineInstances[i].transform = meshFilters[i+1].transform.localToWorldMatrix;
		CombineInstanceU5BU5D_tCEC5E0C06082119E1FF9C16E274C016F216803BF* L_12 = V_1;
		int32_t L_13 = V_5;
		NullCheck(L_12);
		MeshFilterU5BU5D_tE8AA77783A24784C69A8083B4F3E482D866FD503* L_14 = V_0;
		int32_t L_15 = V_5;
		NullCheck(L_14);
		int32_t L_16 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
		MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_17);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18;
		L_18 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_19;
		L_19 = Transform_get_localToWorldMatrix_m6B810B0F20BA5DE48009461A4D662DD8BFF6A3CC(L_18, /*hidden argument*/NULL);
		CombineInstance_set_transform_mF1C28A1BC0733CD0A10481215C4FCB418C7CDA1D((CombineInstance_t3ECBD54BBDD018CE04D23414CDFE0F78A447B45C *)((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13))), L_19, /*hidden argument*/NULL);
		// verticesLength += combineInstances[i].mesh.vertices.Length;
		int64_t L_20 = V_2;
		CombineInstanceU5BU5D_tCEC5E0C06082119E1FF9C16E274C016F216803BF* L_21 = V_1;
		int32_t L_22 = V_5;
		NullCheck(L_21);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_23;
		L_23 = CombineInstance_get_mesh_mB92C30E87A4B25AEA12DEBFA3EDEC8D3B115E6F4((CombineInstance_t3ECBD54BBDD018CE04D23414CDFE0F78A447B45C *)((L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_22))), /*hidden argument*/NULL);
		NullCheck(L_23);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_24;
		L_24 = Mesh_get_vertices_mB7A79698792B3CBA0E7E6EACDA6C031E496FB595(L_23, /*hidden argument*/NULL);
		NullCheck(L_24);
		V_2 = ((int64_t)il2cpp_codegen_add((int64_t)L_20, (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)(((RuntimeArray*)L_24)->max_length)))))));
		// for(int i = 0; i < meshFilters.Length-1; i++) 
		int32_t L_25 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
	}

IL_0081:
	{
		// for(int i = 0; i < meshFilters.Length-1; i++) 
		int32_t L_26 = V_5;
		MeshFilterU5BU5D_tE8AA77783A24784C69A8083B4F3E482D866FD503* L_27 = V_0;
		NullCheck(L_27);
		V_6 = (bool)((((int32_t)L_26) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_27)->max_length))), (int32_t)1))))? 1 : 0);
		bool L_28 = V_6;
		if (L_28)
		{
			goto IL_001b;
		}
	}
	{
		// MeshRenderer[] meshRenderers = GetComponentsInChildren<MeshRenderer>(combineInactiveChildren);
		bool L_29 = __this->get_combineInactiveChildren_6();
		MeshRendererU5BU5D_t535468079DEF88AD38546DC5D04E9102C401D228* L_30;
		L_30 = Component_GetComponentsInChildren_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m65A516E0B5EAC734DFF622A5E548CB87FEC256E7(__this, L_29, /*hidden argument*/Component_GetComponentsInChildren_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m65A516E0B5EAC734DFF622A5E548CB87FEC256E7_RuntimeMethod_var);
		V_3 = L_30;
		// if(meshRenderers.Length >= 2)
		MeshRendererU5BU5D_t535468079DEF88AD38546DC5D04E9102C401D228* L_31 = V_3;
		NullCheck(L_31);
		V_7 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_31)->max_length)))) < ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_32 = V_7;
		if (!L_32)
		{
			goto IL_00d0;
		}
	}
	{
		// meshRenderers[0].sharedMaterials = new Material[1];
		MeshRendererU5BU5D_t535468079DEF88AD38546DC5D04E9102C401D228* L_33 = V_3;
		NullCheck(L_33);
		int32_t L_34 = 0;
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_35 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* L_36 = (MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492*)(MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492*)SZArrayNew(MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492_il2cpp_TypeInfo_var, (uint32_t)1);
		NullCheck(L_35);
		Renderer_set_sharedMaterials_m9838EC09412E988925C4670E8E355E5EEFE35A25(L_35, L_36, /*hidden argument*/NULL);
		// meshRenderers[0].sharedMaterial = meshRenderers[1].sharedMaterial;
		MeshRendererU5BU5D_t535468079DEF88AD38546DC5D04E9102C401D228* L_37 = V_3;
		NullCheck(L_37);
		int32_t L_38 = 0;
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_39 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		MeshRendererU5BU5D_t535468079DEF88AD38546DC5D04E9102C401D228* L_40 = V_3;
		NullCheck(L_40);
		int32_t L_41 = 1;
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_42 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		NullCheck(L_42);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_43;
		L_43 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_42, /*hidden argument*/NULL);
		NullCheck(L_39);
		Renderer_set_sharedMaterial_m1E66766F93E95F692C3C9C2C09AFD795B156678B(L_39, L_43, /*hidden argument*/NULL);
		goto IL_00e1;
	}

IL_00d0:
	{
		// meshRenderers[0].sharedMaterials = new Material[0]; 
		MeshRendererU5BU5D_t535468079DEF88AD38546DC5D04E9102C401D228* L_44 = V_3;
		NullCheck(L_44);
		int32_t L_45 = 0;
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_46 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* L_47 = (MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492*)(MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492*)SZArrayNew(MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck(L_46);
		Renderer_set_sharedMaterials_m9838EC09412E988925C4670E8E355E5EEFE35A25(L_46, L_47, /*hidden argument*/NULL);
	}

IL_00e1:
	{
		// Mesh combinedMesh = new Mesh();
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_48 = (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)il2cpp_codegen_object_new(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_il2cpp_TypeInfo_var);
		Mesh__ctor_mA3D8570373462201AD7B8C9586A7F9412E49C2F6(L_48, /*hidden argument*/NULL);
		V_4 = L_48;
		// combinedMesh.name = name;
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_49 = V_4;
		String_t* L_50;
		L_50 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(__this, /*hidden argument*/NULL);
		NullCheck(L_49);
		Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781(L_49, L_50, /*hidden argument*/NULL);
		// if(verticesLength > Mesh16BitBufferVertexLimit)
		int64_t L_51 = V_2;
		V_8 = (bool)((((int64_t)L_51) > ((int64_t)((int64_t)((int64_t)((int32_t)65535)))))? 1 : 0);
		bool L_52 = V_8;
		if (!L_52)
		{
			goto IL_0110;
		}
	}
	{
		// combinedMesh.indexFormat = UnityEngine.Rendering.IndexFormat.UInt32; 
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_53 = V_4;
		NullCheck(L_53);
		Mesh_set_indexFormat_m7B5C838359D779E58CC0672E02F19E7584AB6F59(L_53, 1, /*hidden argument*/NULL);
	}

IL_0110:
	{
		// combinedMesh.CombineMeshes(combineInstances);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_54 = V_4;
		CombineInstanceU5BU5D_tCEC5E0C06082119E1FF9C16E274C016F216803BF* L_55 = V_1;
		NullCheck(L_54);
		Mesh_CombineMeshes_mEBDCCDE0CB1DCE6DC91D1FC698F2C9A44DB4E72B(L_54, L_55, /*hidden argument*/NULL);
		// GenerateUV(combinedMesh);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_56 = V_4;
		MeshCombiner_GenerateUV_m651D43E54555179FAFE11E9D9EDEE0BCFF9CF374(__this, L_56, /*hidden argument*/NULL);
		// meshFilters[0].sharedMesh = combinedMesh;
		MeshFilterU5BU5D_tE8AA77783A24784C69A8083B4F3E482D866FD503* L_57 = V_0;
		NullCheck(L_57);
		int32_t L_58 = 0;
		MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * L_59 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_60 = V_4;
		NullCheck(L_59);
		MeshFilter_set_sharedMesh_mC96D5F9AE4BC1D186221F568A4C3CE23572EC958(L_59, L_60, /*hidden argument*/NULL);
		// DeactivateCombinedGameObjects(meshFilters);
		MeshFilterU5BU5D_tE8AA77783A24784C69A8083B4F3E482D866FD503* L_61 = V_0;
		MeshCombiner_DeactivateCombinedGameObjects_mC700A980273A4FE6FEA14999E1D0599956DC09BC(__this, L_61, /*hidden argument*/NULL);
		// if(showCreatedMeshInfo)
		bool L_62 = ___showCreatedMeshInfo0;
		V_9 = L_62;
		bool L_63 = V_9;
		if (!L_63)
		{
			goto IL_01ff;
		}
	}
	{
		// if(verticesLength <= Mesh16BitBufferVertexLimit)
		int64_t L_64 = V_2;
		V_10 = (bool)((((int32_t)((((int64_t)L_64) > ((int64_t)((int64_t)((int64_t)((int32_t)65535)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_65 = V_10;
		if (!L_65)
		{
			goto IL_01a9;
		}
	}
	{
		// Debug.Log("<color=#00cc00><b>Mesh \""+name+"\" was created from "+combineInstances.Length+" children meshes and has "+verticesLength
		//     +" vertices.</b></color>");
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_66 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)7);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_67 = L_66;
		NullCheck(L_67);
		ArrayElementTypeCheck (L_67, _stringLiteralC1D776C5F458EEF55767EB604CF9D00C7AFC1528);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralC1D776C5F458EEF55767EB604CF9D00C7AFC1528);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_68 = L_67;
		String_t* L_69;
		L_69 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(__this, /*hidden argument*/NULL);
		NullCheck(L_68);
		ArrayElementTypeCheck (L_68, L_69);
		(L_68)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_69);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_70 = L_68;
		NullCheck(L_70);
		ArrayElementTypeCheck (L_70, _stringLiteral082ADBD2B65B27F6C56EA11FD6E0EA36380647D6);
		(L_70)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral082ADBD2B65B27F6C56EA11FD6E0EA36380647D6);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_71 = L_70;
		CombineInstanceU5BU5D_tCEC5E0C06082119E1FF9C16E274C016F216803BF* L_72 = V_1;
		NullCheck(L_72);
		V_11 = ((int32_t)((int32_t)(((RuntimeArray*)L_72)->max_length)));
		String_t* L_73;
		L_73 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_11), /*hidden argument*/NULL);
		NullCheck(L_71);
		ArrayElementTypeCheck (L_71, L_73);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_73);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_74 = L_71;
		NullCheck(L_74);
		ArrayElementTypeCheck (L_74, _stringLiteralFAA8B192E9D503722EA506BCBF50B02369C3C4DC);
		(L_74)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralFAA8B192E9D503722EA506BCBF50B02369C3C4DC);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_75 = L_74;
		String_t* L_76;
		L_76 = Int64_ToString_m8AAA883F340993DCDF339C208F3416C3BA82589F((int64_t*)(&V_2), /*hidden argument*/NULL);
		NullCheck(L_75);
		ArrayElementTypeCheck (L_75, L_76);
		(L_75)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_76);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_77 = L_75;
		NullCheck(L_77);
		ArrayElementTypeCheck (L_77, _stringLiteralE6D56CAE0EB074009242B47D6FDE88003022E6E0);
		(L_77)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteralE6D56CAE0EB074009242B47D6FDE88003022E6E0);
		String_t* L_78;
		L_78 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_77, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_78, /*hidden argument*/NULL);
		goto IL_01fe;
	}

IL_01a9:
	{
		// Debug.Log("<color=#ff3300><b>Mesh \""+name+"\" was created from "+combineInstances.Length+" children meshes and has "+verticesLength
		//     +" vertices. Some old devices, like Android with Mali-400 GPU, do not support over 65535 vertices.</b></color>");
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_79 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)7);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_80 = L_79;
		NullCheck(L_80);
		ArrayElementTypeCheck (L_80, _stringLiteralB5C4039D91DE2DE4E28AD026E5CF58DA69383E0E);
		(L_80)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralB5C4039D91DE2DE4E28AD026E5CF58DA69383E0E);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_81 = L_80;
		String_t* L_82;
		L_82 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(__this, /*hidden argument*/NULL);
		NullCheck(L_81);
		ArrayElementTypeCheck (L_81, L_82);
		(L_81)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_82);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_83 = L_81;
		NullCheck(L_83);
		ArrayElementTypeCheck (L_83, _stringLiteral082ADBD2B65B27F6C56EA11FD6E0EA36380647D6);
		(L_83)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral082ADBD2B65B27F6C56EA11FD6E0EA36380647D6);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_84 = L_83;
		CombineInstanceU5BU5D_tCEC5E0C06082119E1FF9C16E274C016F216803BF* L_85 = V_1;
		NullCheck(L_85);
		V_11 = ((int32_t)((int32_t)(((RuntimeArray*)L_85)->max_length)));
		String_t* L_86;
		L_86 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_11), /*hidden argument*/NULL);
		NullCheck(L_84);
		ArrayElementTypeCheck (L_84, L_86);
		(L_84)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_86);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_87 = L_84;
		NullCheck(L_87);
		ArrayElementTypeCheck (L_87, _stringLiteralFAA8B192E9D503722EA506BCBF50B02369C3C4DC);
		(L_87)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralFAA8B192E9D503722EA506BCBF50B02369C3C4DC);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_88 = L_87;
		String_t* L_89;
		L_89 = Int64_ToString_m8AAA883F340993DCDF339C208F3416C3BA82589F((int64_t*)(&V_2), /*hidden argument*/NULL);
		NullCheck(L_88);
		ArrayElementTypeCheck (L_88, L_89);
		(L_88)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_89);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_90 = L_88;
		NullCheck(L_90);
		ArrayElementTypeCheck (L_90, _stringLiteral0795559209156A8AA4E423EC306783E185F571B8);
		(L_90)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral0795559209156A8AA4E423EC306783E185F571B8);
		String_t* L_91;
		L_91 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_90, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_91, /*hidden argument*/NULL);
	}

IL_01fe:
	{
	}

IL_01ff:
	{
		// }
		return;
	}
}
// System.Void MeshCombiner::CombineMeshesWithMutliMaterial(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshCombiner_CombineMeshesWithMutliMaterial_m550862E2A444C10861A9290BEC2FC8BEF39B9E4B (MeshCombiner_t2CD8003020EE4332F6A85F814B7876EE79DE1C05 * __this, bool ___showCreatedMeshInfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m87EEABB28FFB9E9553015DD36B7C6F7C45A7F537_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m583619246DFE5A4BE61DBA1CA5153C5BE8A82363_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m93A08EA489A09A73780119772DE17BA06864EB10_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m631A61127CAE4A180CC066347B119BB013A955EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m186505F66F97198D8539D9673736392642EE45CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mFE00BBE0A524D1A0943DEA309FC7CB7877BC2236_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m497DA7006D664307F20A0546E5B717AA4B5E8A86_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC0B6BFCEFF3017582F5D5F36A3B5C41DC1DFCC11_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m2D5331F0E51DEDFD0BC68D4AE665FD93010CA0BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m32EAB7C20FE929AB4D52FE42710A40B827F4EE31_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m13B9C8BE116476A73890AFB00F5596C13FC3FFAF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6B1E95FA5DF30925360D5903D54D1063F95AFFEF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshRendererU5BU5D_t535468079DEF88AD38546DC5D04E9102C401D228_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0795559209156A8AA4E423EC306783E185F571B8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral082ADBD2B65B27F6C56EA11FD6E0EA36380647D6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5C4039D91DE2DE4E28AD026E5CF58DA69383E0E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB841E4F49ECE3D852FBDF3ADC5C8DFD24C7B9BD7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC1D776C5F458EEF55767EB604CF9D00C7AFC1528);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE6D56CAE0EB074009242B47D6FDE88003022E6E0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFAA8B192E9D503722EA506BCBF50B02369C3C4DC);
		s_Il2CppMethodInitialized = true;
	}
	MeshFilterU5BU5D_tE8AA77783A24784C69A8083B4F3E482D866FD503* V_0 = NULL;
	MeshRendererU5BU5D_t535468079DEF88AD38546DC5D04E9102C401D228* V_1 = NULL;
	List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * V_2 = NULL;
	List_1_t6B1E95FA5DF30925360D5903D54D1063F95AFFEF * V_3 = NULL;
	int64_t V_4 = 0;
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * V_5 = NULL;
	int32_t V_6 = 0;
	bool V_7 = false;
	MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* V_8 = NULL;
	int32_t V_9 = 0;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	List_1_t6B1E95FA5DF30925360D5903D54D1063F95AFFEF * V_14 = NULL;
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * V_15 = NULL;
	CombineInstance_t3ECBD54BBDD018CE04D23414CDFE0F78A447B45C  V_16;
	memset((&V_16), 0, sizeof(V_16));
	int32_t V_17 = 0;
	bool V_18 = false;
	MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* V_19 = NULL;
	int32_t V_20 = 0;
	bool V_21 = false;
	CombineInstance_t3ECBD54BBDD018CE04D23414CDFE0F78A447B45C  V_22;
	memset((&V_22), 0, sizeof(V_22));
	bool V_23 = false;
	bool V_24 = false;
	bool V_25 = false;
	bool V_26 = false;
	bool V_27 = false;
	bool V_28 = false;
	bool V_29 = false;
	int32_t V_30 = 0;
	{
		// MeshFilter[] meshFilters = GetMeshFiltersToCombine();
		MeshFilterU5BU5D_tE8AA77783A24784C69A8083B4F3E482D866FD503* L_0;
		L_0 = MeshCombiner_GetMeshFiltersToCombine_mD28F858198DA4E57619450465DA794177BB7DE72(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		// MeshRenderer[] meshRenderers = new MeshRenderer[meshFilters.Length];
		MeshFilterU5BU5D_tE8AA77783A24784C69A8083B4F3E482D866FD503* L_1 = V_0;
		NullCheck(L_1);
		MeshRendererU5BU5D_t535468079DEF88AD38546DC5D04E9102C401D228* L_2 = (MeshRendererU5BU5D_t535468079DEF88AD38546DC5D04E9102C401D228*)(MeshRendererU5BU5D_t535468079DEF88AD38546DC5D04E9102C401D228*)SZArrayNew(MeshRendererU5BU5D_t535468079DEF88AD38546DC5D04E9102C401D228_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))));
		V_1 = L_2;
		// meshRenderers[0] = GetComponent<MeshRenderer>(); 
		MeshRendererU5BU5D_t535468079DEF88AD38546DC5D04E9102C401D228* L_3 = V_1;
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_4;
		L_4 = Component_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m87EEABB28FFB9E9553015DD36B7C6F7C45A7F537(__this, /*hidden argument*/Component_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m87EEABB28FFB9E9553015DD36B7C6F7C45A7F537_RuntimeMethod_var);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B *)L_4);
		// List<Material> uniqueMaterialsList = new List<Material>();
		List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * L_5 = (List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 *)il2cpp_codegen_object_new(List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4_il2cpp_TypeInfo_var);
		List_1__ctor_m497DA7006D664307F20A0546E5B717AA4B5E8A86(L_5, /*hidden argument*/List_1__ctor_m497DA7006D664307F20A0546E5B717AA4B5E8A86_RuntimeMethod_var);
		V_2 = L_5;
		// for(int i = 0; i < meshFilters.Length-1; i++)
		V_6 = 0;
		goto IL_009c;
	}

IL_0025:
	{
		// meshRenderers[i+1] = meshFilters[i+1].GetComponent<MeshRenderer>();
		MeshRendererU5BU5D_t535468079DEF88AD38546DC5D04E9102C401D228* L_6 = V_1;
		int32_t L_7 = V_6;
		MeshFilterU5BU5D_tE8AA77783A24784C69A8083B4F3E482D866FD503* L_8 = V_0;
		int32_t L_9 = V_6;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
		MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_11);
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_12;
		L_12 = Component_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m87EEABB28FFB9E9553015DD36B7C6F7C45A7F537(L_11, /*hidden argument*/Component_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m87EEABB28FFB9E9553015DD36B7C6F7C45A7F537_RuntimeMethod_var);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_12);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1))), (MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B *)L_12);
		// if(meshRenderers[i+1] != null)
		MeshRendererU5BU5D_t535468079DEF88AD38546DC5D04E9102C401D228* L_13 = V_1;
		int32_t L_14 = V_6;
		NullCheck(L_13);
		int32_t L_15 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_17;
		L_17 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_16, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_7 = L_17;
		bool L_18 = V_7;
		if (!L_18)
		{
			goto IL_0095;
		}
	}
	{
		// Material[] materials = meshRenderers[i+1].sharedMaterials; 
		MeshRendererU5BU5D_t535468079DEF88AD38546DC5D04E9102C401D228* L_19 = V_1;
		int32_t L_20 = V_6;
		NullCheck(L_19);
		int32_t L_21 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_22);
		MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* L_23;
		L_23 = Renderer_get_sharedMaterials_m9B2D432CA8AD8CEC4348E61789CC1BB0C3A00AFD(L_22, /*hidden argument*/NULL);
		V_8 = L_23;
		// for(int j = 0; j < materials.Length; j++)
		V_9 = 0;
		goto IL_0086;
	}

IL_005c:
	{
		// if(!uniqueMaterialsList.Contains(materials[j])) 
		List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * L_24 = V_2;
		MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* L_25 = V_8;
		int32_t L_26 = V_9;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		NullCheck(L_24);
		bool L_29;
		L_29 = List_1_Contains_m631A61127CAE4A180CC066347B119BB013A955EC(L_24, L_28, /*hidden argument*/List_1_Contains_m631A61127CAE4A180CC066347B119BB013A955EC_RuntimeMethod_var);
		V_10 = (bool)((((int32_t)L_29) == ((int32_t)0))? 1 : 0);
		bool L_30 = V_10;
		if (!L_30)
		{
			goto IL_007f;
		}
	}
	{
		// uniqueMaterialsList.Add(materials[j]);
		List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * L_31 = V_2;
		MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* L_32 = V_8;
		int32_t L_33 = V_9;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		NullCheck(L_31);
		List_1_Add_m93A08EA489A09A73780119772DE17BA06864EB10(L_31, L_35, /*hidden argument*/List_1_Add_m93A08EA489A09A73780119772DE17BA06864EB10_RuntimeMethod_var);
	}

IL_007f:
	{
		// for(int j = 0; j < materials.Length; j++)
		int32_t L_36 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)1));
	}

IL_0086:
	{
		// for(int j = 0; j < materials.Length; j++)
		int32_t L_37 = V_9;
		MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* L_38 = V_8;
		NullCheck(L_38);
		V_11 = (bool)((((int32_t)L_37) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_38)->max_length)))))? 1 : 0);
		bool L_39 = V_11;
		if (L_39)
		{
			goto IL_005c;
		}
	}
	{
	}

IL_0095:
	{
		// for(int i = 0; i < meshFilters.Length-1; i++)
		int32_t L_40 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_40, (int32_t)1));
	}

IL_009c:
	{
		// for(int i = 0; i < meshFilters.Length-1; i++)
		int32_t L_41 = V_6;
		MeshFilterU5BU5D_tE8AA77783A24784C69A8083B4F3E482D866FD503* L_42 = V_0;
		NullCheck(L_42);
		V_12 = (bool)((((int32_t)L_41) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length))), (int32_t)1))))? 1 : 0);
		bool L_43 = V_12;
		if (L_43)
		{
			goto IL_0025;
		}
	}
	{
		// List<CombineInstance> finalMeshCombineInstancesList = new List<CombineInstance>();
		List_1_t6B1E95FA5DF30925360D5903D54D1063F95AFFEF * L_44 = (List_1_t6B1E95FA5DF30925360D5903D54D1063F95AFFEF *)il2cpp_codegen_object_new(List_1_t6B1E95FA5DF30925360D5903D54D1063F95AFFEF_il2cpp_TypeInfo_var);
		List_1__ctor_mC0B6BFCEFF3017582F5D5F36A3B5C41DC1DFCC11(L_44, /*hidden argument*/List_1__ctor_mC0B6BFCEFF3017582F5D5F36A3B5C41DC1DFCC11_RuntimeMethod_var);
		V_3 = L_44;
		// long verticesLength = 0;
		V_4 = ((int64_t)((int64_t)0));
		// for(int i = 0; i < uniqueMaterialsList.Count; i++) 
		V_13 = 0;
		goto IL_020b;
	}

IL_00c0:
	{
		// List<CombineInstance> submeshCombineInstancesList = new List<CombineInstance>();
		List_1_t6B1E95FA5DF30925360D5903D54D1063F95AFFEF * L_45 = (List_1_t6B1E95FA5DF30925360D5903D54D1063F95AFFEF *)il2cpp_codegen_object_new(List_1_t6B1E95FA5DF30925360D5903D54D1063F95AFFEF_il2cpp_TypeInfo_var);
		List_1__ctor_mC0B6BFCEFF3017582F5D5F36A3B5C41DC1DFCC11(L_45, /*hidden argument*/List_1__ctor_mC0B6BFCEFF3017582F5D5F36A3B5C41DC1DFCC11_RuntimeMethod_var);
		V_14 = L_45;
		// for(int j = 0; j < meshFilters.Length-1; j++) 
		V_17 = 0;
		goto IL_018f;
	}

IL_00d0:
	{
		// if(meshRenderers[j+1] != null)
		MeshRendererU5BU5D_t535468079DEF88AD38546DC5D04E9102C401D228* L_46 = V_1;
		int32_t L_47 = V_17;
		NullCheck(L_46);
		int32_t L_48 = ((int32_t)il2cpp_codegen_add((int32_t)L_47, (int32_t)1));
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_49 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_50;
		L_50 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_49, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_18 = L_50;
		bool L_51 = V_18;
		if (!L_51)
		{
			goto IL_0188;
		}
	}
	{
		// Material[] submeshMaterials = meshRenderers[j+1].sharedMaterials; 
		MeshRendererU5BU5D_t535468079DEF88AD38546DC5D04E9102C401D228* L_52 = V_1;
		int32_t L_53 = V_17;
		NullCheck(L_52);
		int32_t L_54 = ((int32_t)il2cpp_codegen_add((int32_t)L_53, (int32_t)1));
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_55 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		NullCheck(L_55);
		MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* L_56;
		L_56 = Renderer_get_sharedMaterials_m9B2D432CA8AD8CEC4348E61789CC1BB0C3A00AFD(L_55, /*hidden argument*/NULL);
		V_19 = L_56;
		// for(int k = 0; k < submeshMaterials.Length; k++)
		V_20 = 0;
		goto IL_0176;
	}

IL_00f9:
	{
		// if(uniqueMaterialsList[i] == submeshMaterials[k])
		List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * L_57 = V_2;
		int32_t L_58 = V_13;
		NullCheck(L_57);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_59;
		L_59 = List_1_get_Item_m13B9C8BE116476A73890AFB00F5596C13FC3FFAF_inline(L_57, L_58, /*hidden argument*/List_1_get_Item_m13B9C8BE116476A73890AFB00F5596C13FC3FFAF_RuntimeMethod_var);
		MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* L_60 = V_19;
		int32_t L_61 = V_20;
		NullCheck(L_60);
		int32_t L_62 = L_61;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_63 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_64;
		L_64 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_59, L_63, /*hidden argument*/NULL);
		V_21 = L_64;
		bool L_65 = V_21;
		if (!L_65)
		{
			goto IL_016f;
		}
	}
	{
		// CombineInstance combineInstance = new CombineInstance();
		il2cpp_codegen_initobj((&V_22), sizeof(CombineInstance_t3ECBD54BBDD018CE04D23414CDFE0F78A447B45C ));
		// combineInstance.subMeshIndex = k; 
		int32_t L_66 = V_20;
		CombineInstance_set_subMeshIndex_m9453076541D3A566A4E711E714F69F945379F750((CombineInstance_t3ECBD54BBDD018CE04D23414CDFE0F78A447B45C *)(&V_22), L_66, /*hidden argument*/NULL);
		// combineInstance.mesh = meshFilters[j+1].sharedMesh;
		MeshFilterU5BU5D_tE8AA77783A24784C69A8083B4F3E482D866FD503* L_67 = V_0;
		int32_t L_68 = V_17;
		NullCheck(L_67);
		int32_t L_69 = ((int32_t)il2cpp_codegen_add((int32_t)L_68, (int32_t)1));
		MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * L_70 = (L_67)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		NullCheck(L_70);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_71;
		L_71 = MeshFilter_get_sharedMesh_mDCB12AB93E6E5F477F55A14990A7AB5F1B06F19E(L_70, /*hidden argument*/NULL);
		CombineInstance_set_mesh_m4188D448CFD58C46FC3824D791572D07905FC824((CombineInstance_t3ECBD54BBDD018CE04D23414CDFE0F78A447B45C *)(&V_22), L_71, /*hidden argument*/NULL);
		// combineInstance.transform = meshFilters[j+1].transform.localToWorldMatrix;
		MeshFilterU5BU5D_tE8AA77783A24784C69A8083B4F3E482D866FD503* L_72 = V_0;
		int32_t L_73 = V_17;
		NullCheck(L_72);
		int32_t L_74 = ((int32_t)il2cpp_codegen_add((int32_t)L_73, (int32_t)1));
		MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * L_75 = (L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		NullCheck(L_75);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_76;
		L_76 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_75, /*hidden argument*/NULL);
		NullCheck(L_76);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_77;
		L_77 = Transform_get_localToWorldMatrix_m6B810B0F20BA5DE48009461A4D662DD8BFF6A3CC(L_76, /*hidden argument*/NULL);
		CombineInstance_set_transform_mF1C28A1BC0733CD0A10481215C4FCB418C7CDA1D((CombineInstance_t3ECBD54BBDD018CE04D23414CDFE0F78A447B45C *)(&V_22), L_77, /*hidden argument*/NULL);
		// submeshCombineInstancesList.Add(combineInstance);
		List_1_t6B1E95FA5DF30925360D5903D54D1063F95AFFEF * L_78 = V_14;
		CombineInstance_t3ECBD54BBDD018CE04D23414CDFE0F78A447B45C  L_79 = V_22;
		NullCheck(L_78);
		List_1_Add_m583619246DFE5A4BE61DBA1CA5153C5BE8A82363(L_78, L_79, /*hidden argument*/List_1_Add_m583619246DFE5A4BE61DBA1CA5153C5BE8A82363_RuntimeMethod_var);
		// verticesLength += combineInstance.mesh.vertices.Length;
		int64_t L_80 = V_4;
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_81;
		L_81 = CombineInstance_get_mesh_mB92C30E87A4B25AEA12DEBFA3EDEC8D3B115E6F4((CombineInstance_t3ECBD54BBDD018CE04D23414CDFE0F78A447B45C *)(&V_22), /*hidden argument*/NULL);
		NullCheck(L_81);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_82;
		L_82 = Mesh_get_vertices_mB7A79698792B3CBA0E7E6EACDA6C031E496FB595(L_81, /*hidden argument*/NULL);
		NullCheck(L_82);
		V_4 = ((int64_t)il2cpp_codegen_add((int64_t)L_80, (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)(((RuntimeArray*)L_82)->max_length)))))));
	}

IL_016f:
	{
		// for(int k = 0; k < submeshMaterials.Length; k++)
		int32_t L_83 = V_20;
		V_20 = ((int32_t)il2cpp_codegen_add((int32_t)L_83, (int32_t)1));
	}

IL_0176:
	{
		// for(int k = 0; k < submeshMaterials.Length; k++)
		int32_t L_84 = V_20;
		MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* L_85 = V_19;
		NullCheck(L_85);
		V_23 = (bool)((((int32_t)L_84) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_85)->max_length)))))? 1 : 0);
		bool L_86 = V_23;
		if (L_86)
		{
			goto IL_00f9;
		}
	}
	{
	}

IL_0188:
	{
		// for(int j = 0; j < meshFilters.Length-1; j++) 
		int32_t L_87 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add((int32_t)L_87, (int32_t)1));
	}

IL_018f:
	{
		// for(int j = 0; j < meshFilters.Length-1; j++) 
		int32_t L_88 = V_17;
		MeshFilterU5BU5D_tE8AA77783A24784C69A8083B4F3E482D866FD503* L_89 = V_0;
		NullCheck(L_89);
		V_24 = (bool)((((int32_t)L_88) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_89)->max_length))), (int32_t)1))))? 1 : 0);
		bool L_90 = V_24;
		if (L_90)
		{
			goto IL_00d0;
		}
	}
	{
		// Mesh submesh = new Mesh();
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_91 = (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)il2cpp_codegen_object_new(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_il2cpp_TypeInfo_var);
		Mesh__ctor_mA3D8570373462201AD7B8C9586A7F9412E49C2F6(L_91, /*hidden argument*/NULL);
		V_15 = L_91;
		// if(verticesLength > Mesh16BitBufferVertexLimit)
		int64_t L_92 = V_4;
		V_25 = (bool)((((int64_t)L_92) > ((int64_t)((int64_t)((int64_t)((int32_t)65535)))))? 1 : 0);
		bool L_93 = V_25;
		if (!L_93)
		{
			goto IL_01c3;
		}
	}
	{
		// submesh.indexFormat = UnityEngine.Rendering.IndexFormat.UInt32; 
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_94 = V_15;
		NullCheck(L_94);
		Mesh_set_indexFormat_m7B5C838359D779E58CC0672E02F19E7584AB6F59(L_94, 1, /*hidden argument*/NULL);
	}

IL_01c3:
	{
		// submesh.CombineMeshes(submeshCombineInstancesList.ToArray(), true);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_95 = V_15;
		List_1_t6B1E95FA5DF30925360D5903D54D1063F95AFFEF * L_96 = V_14;
		NullCheck(L_96);
		CombineInstanceU5BU5D_tCEC5E0C06082119E1FF9C16E274C016F216803BF* L_97;
		L_97 = List_1_ToArray_mFE00BBE0A524D1A0943DEA309FC7CB7877BC2236(L_96, /*hidden argument*/List_1_ToArray_mFE00BBE0A524D1A0943DEA309FC7CB7877BC2236_RuntimeMethod_var);
		NullCheck(L_95);
		Mesh_CombineMeshes_mBA93AA41ABD692D92BAA81794312C9DBDAC1445D(L_95, L_97, (bool)1, /*hidden argument*/NULL);
		// CombineInstance finalCombineInstance = new CombineInstance();
		il2cpp_codegen_initobj((&V_16), sizeof(CombineInstance_t3ECBD54BBDD018CE04D23414CDFE0F78A447B45C ));
		// finalCombineInstance.subMeshIndex = 0;
		CombineInstance_set_subMeshIndex_m9453076541D3A566A4E711E714F69F945379F750((CombineInstance_t3ECBD54BBDD018CE04D23414CDFE0F78A447B45C *)(&V_16), 0, /*hidden argument*/NULL);
		// finalCombineInstance.mesh = submesh;
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_98 = V_15;
		CombineInstance_set_mesh_m4188D448CFD58C46FC3824D791572D07905FC824((CombineInstance_t3ECBD54BBDD018CE04D23414CDFE0F78A447B45C *)(&V_16), L_98, /*hidden argument*/NULL);
		// finalCombineInstance.transform = Matrix4x4.identity;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_99;
		L_99 = Matrix4x4_get_identity_mC91289718DDD3DDBE0A10551BDA59A446414A596(/*hidden argument*/NULL);
		CombineInstance_set_transform_mF1C28A1BC0733CD0A10481215C4FCB418C7CDA1D((CombineInstance_t3ECBD54BBDD018CE04D23414CDFE0F78A447B45C *)(&V_16), L_99, /*hidden argument*/NULL);
		// finalMeshCombineInstancesList.Add(finalCombineInstance);
		List_1_t6B1E95FA5DF30925360D5903D54D1063F95AFFEF * L_100 = V_3;
		CombineInstance_t3ECBD54BBDD018CE04D23414CDFE0F78A447B45C  L_101 = V_16;
		NullCheck(L_100);
		List_1_Add_m583619246DFE5A4BE61DBA1CA5153C5BE8A82363(L_100, L_101, /*hidden argument*/List_1_Add_m583619246DFE5A4BE61DBA1CA5153C5BE8A82363_RuntimeMethod_var);
		// for(int i = 0; i < uniqueMaterialsList.Count; i++) 
		int32_t L_102 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add((int32_t)L_102, (int32_t)1));
	}

IL_020b:
	{
		// for(int i = 0; i < uniqueMaterialsList.Count; i++) 
		int32_t L_103 = V_13;
		List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * L_104 = V_2;
		NullCheck(L_104);
		int32_t L_105;
		L_105 = List_1_get_Count_m2D5331F0E51DEDFD0BC68D4AE665FD93010CA0BC_inline(L_104, /*hidden argument*/List_1_get_Count_m2D5331F0E51DEDFD0BC68D4AE665FD93010CA0BC_RuntimeMethod_var);
		V_26 = (bool)((((int32_t)L_103) < ((int32_t)L_105))? 1 : 0);
		bool L_106 = V_26;
		if (L_106)
		{
			goto IL_00c0;
		}
	}
	{
		// meshRenderers[0].sharedMaterials = uniqueMaterialsList.ToArray();
		MeshRendererU5BU5D_t535468079DEF88AD38546DC5D04E9102C401D228* L_107 = V_1;
		NullCheck(L_107);
		int32_t L_108 = 0;
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_109 = (L_107)->GetAt(static_cast<il2cpp_array_size_t>(L_108));
		List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * L_110 = V_2;
		NullCheck(L_110);
		MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* L_111;
		L_111 = List_1_ToArray_m186505F66F97198D8539D9673736392642EE45CC(L_110, /*hidden argument*/List_1_ToArray_m186505F66F97198D8539D9673736392642EE45CC_RuntimeMethod_var);
		NullCheck(L_109);
		Renderer_set_sharedMaterials_m9838EC09412E988925C4670E8E355E5EEFE35A25(L_109, L_111, /*hidden argument*/NULL);
		// Mesh combinedMesh = new Mesh();
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_112 = (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)il2cpp_codegen_object_new(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_il2cpp_TypeInfo_var);
		Mesh__ctor_mA3D8570373462201AD7B8C9586A7F9412E49C2F6(L_112, /*hidden argument*/NULL);
		V_5 = L_112;
		// combinedMesh.name = name;
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_113 = V_5;
		String_t* L_114;
		L_114 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(__this, /*hidden argument*/NULL);
		NullCheck(L_113);
		Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781(L_113, L_114, /*hidden argument*/NULL);
		// if(verticesLength > Mesh16BitBufferVertexLimit)
		int64_t L_115 = V_4;
		V_27 = (bool)((((int64_t)L_115) > ((int64_t)((int64_t)((int64_t)((int32_t)65535)))))? 1 : 0);
		bool L_116 = V_27;
		if (!L_116)
		{
			goto IL_025d;
		}
	}
	{
		// combinedMesh.indexFormat = UnityEngine.Rendering.IndexFormat.UInt32; 
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_117 = V_5;
		NullCheck(L_117);
		Mesh_set_indexFormat_m7B5C838359D779E58CC0672E02F19E7584AB6F59(L_117, 1, /*hidden argument*/NULL);
	}

IL_025d:
	{
		// combinedMesh.CombineMeshes(finalMeshCombineInstancesList.ToArray(), false);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_118 = V_5;
		List_1_t6B1E95FA5DF30925360D5903D54D1063F95AFFEF * L_119 = V_3;
		NullCheck(L_119);
		CombineInstanceU5BU5D_tCEC5E0C06082119E1FF9C16E274C016F216803BF* L_120;
		L_120 = List_1_ToArray_mFE00BBE0A524D1A0943DEA309FC7CB7877BC2236(L_119, /*hidden argument*/List_1_ToArray_mFE00BBE0A524D1A0943DEA309FC7CB7877BC2236_RuntimeMethod_var);
		NullCheck(L_118);
		Mesh_CombineMeshes_mBA93AA41ABD692D92BAA81794312C9DBDAC1445D(L_118, L_120, (bool)0, /*hidden argument*/NULL);
		// GenerateUV(combinedMesh);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_121 = V_5;
		MeshCombiner_GenerateUV_m651D43E54555179FAFE11E9D9EDEE0BCFF9CF374(__this, L_121, /*hidden argument*/NULL);
		// meshFilters[0].sharedMesh = combinedMesh;
		MeshFilterU5BU5D_tE8AA77783A24784C69A8083B4F3E482D866FD503* L_122 = V_0;
		NullCheck(L_122);
		int32_t L_123 = 0;
		MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * L_124 = (L_122)->GetAt(static_cast<il2cpp_array_size_t>(L_123));
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_125 = V_5;
		NullCheck(L_124);
		MeshFilter_set_sharedMesh_mC96D5F9AE4BC1D186221F568A4C3CE23572EC958(L_124, L_125, /*hidden argument*/NULL);
		// DeactivateCombinedGameObjects(meshFilters);
		MeshFilterU5BU5D_tE8AA77783A24784C69A8083B4F3E482D866FD503* L_126 = V_0;
		MeshCombiner_DeactivateCombinedGameObjects_mC700A980273A4FE6FEA14999E1D0599956DC09BC(__this, L_126, /*hidden argument*/NULL);
		// if(showCreatedMeshInfo)
		bool L_127 = ___showCreatedMeshInfo0;
		V_28 = L_127;
		bool L_128 = V_28;
		if (!L_128)
		{
			goto IL_038d;
		}
	}
	{
		// if(verticesLength <= Mesh16BitBufferVertexLimit)
		int64_t L_129 = V_4;
		V_29 = (bool)((((int32_t)((((int64_t)L_129) > ((int64_t)((int64_t)((int64_t)((int32_t)65535)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_130 = V_29;
		if (!L_130)
		{
			goto IL_031a;
		}
	}
	{
		// Debug.Log("<color=#00cc00><b>Mesh \""+name+"\" was created from "+(meshFilters.Length-1)+" children meshes and has "
		//     +finalMeshCombineInstancesList.Count+" submeshes, and "+verticesLength+" vertices.</b></color>");
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_131 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_132 = L_131;
		NullCheck(L_132);
		ArrayElementTypeCheck (L_132, _stringLiteralC1D776C5F458EEF55767EB604CF9D00C7AFC1528);
		(L_132)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralC1D776C5F458EEF55767EB604CF9D00C7AFC1528);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_133 = L_132;
		String_t* L_134;
		L_134 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(__this, /*hidden argument*/NULL);
		NullCheck(L_133);
		ArrayElementTypeCheck (L_133, L_134);
		(L_133)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_134);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_135 = L_133;
		NullCheck(L_135);
		ArrayElementTypeCheck (L_135, _stringLiteral082ADBD2B65B27F6C56EA11FD6E0EA36380647D6);
		(L_135)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral082ADBD2B65B27F6C56EA11FD6E0EA36380647D6);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_136 = L_135;
		MeshFilterU5BU5D_tE8AA77783A24784C69A8083B4F3E482D866FD503* L_137 = V_0;
		NullCheck(L_137);
		V_30 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_137)->max_length))), (int32_t)1));
		String_t* L_138;
		L_138 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_30), /*hidden argument*/NULL);
		NullCheck(L_136);
		ArrayElementTypeCheck (L_136, L_138);
		(L_136)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_138);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_139 = L_136;
		NullCheck(L_139);
		ArrayElementTypeCheck (L_139, _stringLiteralFAA8B192E9D503722EA506BCBF50B02369C3C4DC);
		(L_139)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralFAA8B192E9D503722EA506BCBF50B02369C3C4DC);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_140 = L_139;
		List_1_t6B1E95FA5DF30925360D5903D54D1063F95AFFEF * L_141 = V_3;
		NullCheck(L_141);
		int32_t L_142;
		L_142 = List_1_get_Count_m32EAB7C20FE929AB4D52FE42710A40B827F4EE31_inline(L_141, /*hidden argument*/List_1_get_Count_m32EAB7C20FE929AB4D52FE42710A40B827F4EE31_RuntimeMethod_var);
		V_30 = L_142;
		String_t* L_143;
		L_143 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_30), /*hidden argument*/NULL);
		NullCheck(L_140);
		ArrayElementTypeCheck (L_140, L_143);
		(L_140)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_143);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_144 = L_140;
		NullCheck(L_144);
		ArrayElementTypeCheck (L_144, _stringLiteralB841E4F49ECE3D852FBDF3ADC5C8DFD24C7B9BD7);
		(L_144)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteralB841E4F49ECE3D852FBDF3ADC5C8DFD24C7B9BD7);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_145 = L_144;
		String_t* L_146;
		L_146 = Int64_ToString_m8AAA883F340993DCDF339C208F3416C3BA82589F((int64_t*)(&V_4), /*hidden argument*/NULL);
		NullCheck(L_145);
		ArrayElementTypeCheck (L_145, L_146);
		(L_145)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)L_146);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_147 = L_145;
		NullCheck(L_147);
		ArrayElementTypeCheck (L_147, _stringLiteralE6D56CAE0EB074009242B47D6FDE88003022E6E0);
		(L_147)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteralE6D56CAE0EB074009242B47D6FDE88003022E6E0);
		String_t* L_148;
		L_148 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_147, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_148, /*hidden argument*/NULL);
		goto IL_038c;
	}

IL_031a:
	{
		// Debug.Log("<color=#ff3300><b>Mesh \""+name+"\" was created from "+(meshFilters.Length-1)+" children meshes and has "
		//     +finalMeshCombineInstancesList.Count+" submeshes, and "+verticesLength
		//     +" vertices. Some old devices, like Android with Mali-400 GPU, do not support over 65535 vertices.</b></color>");
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_149 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_150 = L_149;
		NullCheck(L_150);
		ArrayElementTypeCheck (L_150, _stringLiteralB5C4039D91DE2DE4E28AD026E5CF58DA69383E0E);
		(L_150)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralB5C4039D91DE2DE4E28AD026E5CF58DA69383E0E);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_151 = L_150;
		String_t* L_152;
		L_152 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(__this, /*hidden argument*/NULL);
		NullCheck(L_151);
		ArrayElementTypeCheck (L_151, L_152);
		(L_151)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_152);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_153 = L_151;
		NullCheck(L_153);
		ArrayElementTypeCheck (L_153, _stringLiteral082ADBD2B65B27F6C56EA11FD6E0EA36380647D6);
		(L_153)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral082ADBD2B65B27F6C56EA11FD6E0EA36380647D6);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_154 = L_153;
		MeshFilterU5BU5D_tE8AA77783A24784C69A8083B4F3E482D866FD503* L_155 = V_0;
		NullCheck(L_155);
		V_30 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_155)->max_length))), (int32_t)1));
		String_t* L_156;
		L_156 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_30), /*hidden argument*/NULL);
		NullCheck(L_154);
		ArrayElementTypeCheck (L_154, L_156);
		(L_154)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_156);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_157 = L_154;
		NullCheck(L_157);
		ArrayElementTypeCheck (L_157, _stringLiteralFAA8B192E9D503722EA506BCBF50B02369C3C4DC);
		(L_157)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralFAA8B192E9D503722EA506BCBF50B02369C3C4DC);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_158 = L_157;
		List_1_t6B1E95FA5DF30925360D5903D54D1063F95AFFEF * L_159 = V_3;
		NullCheck(L_159);
		int32_t L_160;
		L_160 = List_1_get_Count_m32EAB7C20FE929AB4D52FE42710A40B827F4EE31_inline(L_159, /*hidden argument*/List_1_get_Count_m32EAB7C20FE929AB4D52FE42710A40B827F4EE31_RuntimeMethod_var);
		V_30 = L_160;
		String_t* L_161;
		L_161 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_30), /*hidden argument*/NULL);
		NullCheck(L_158);
		ArrayElementTypeCheck (L_158, L_161);
		(L_158)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_161);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_162 = L_158;
		NullCheck(L_162);
		ArrayElementTypeCheck (L_162, _stringLiteralB841E4F49ECE3D852FBDF3ADC5C8DFD24C7B9BD7);
		(L_162)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteralB841E4F49ECE3D852FBDF3ADC5C8DFD24C7B9BD7);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_163 = L_162;
		String_t* L_164;
		L_164 = Int64_ToString_m8AAA883F340993DCDF339C208F3416C3BA82589F((int64_t*)(&V_4), /*hidden argument*/NULL);
		NullCheck(L_163);
		ArrayElementTypeCheck (L_163, L_164);
		(L_163)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)L_164);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_165 = L_163;
		NullCheck(L_165);
		ArrayElementTypeCheck (L_165, _stringLiteral0795559209156A8AA4E423EC306783E185F571B8);
		(L_165)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteral0795559209156A8AA4E423EC306783E185F571B8);
		String_t* L_166;
		L_166 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_165, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_166, /*hidden argument*/NULL);
	}

IL_038c:
	{
	}

IL_038d:
	{
		// }
		return;
	}
}
// System.Void MeshCombiner::DeactivateCombinedGameObjects(UnityEngine.MeshFilter[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshCombiner_DeactivateCombinedGameObjects_mC700A980273A4FE6FEA14999E1D0599956DC09BC (MeshCombiner_t2CD8003020EE4332F6A85F814B7876EE79DE1C05 * __this, MeshFilterU5BU5D_tE8AA77783A24784C69A8083B4F3E482D866FD503* ___meshFilters0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m4E244CD0EBBF9E0A3A73AF14F6EC434CA82E6F4B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	{
		// for(int i = 0; i < meshFilters.Length-1; i++) 
		V_0 = 0;
		goto IL_0081;
	}

IL_0005:
	{
		// if(!destroyCombinedChildren)
		bool L_0 = __this->get_destroyCombinedChildren_10();
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_006a;
		}
	}
	{
		// if(deactivateCombinedChildren)
		bool L_2 = __this->get_deactivateCombinedChildren_7();
		V_2 = L_2;
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		// meshFilters[i+1].gameObject.SetActive(false);
		MeshFilterU5BU5D_tE8AA77783A24784C69A8083B4F3E482D866FD503* L_4 = ___meshFilters0;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
		MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_7);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_8, (bool)0, /*hidden argument*/NULL);
	}

IL_0031:
	{
		// if(deactivateCombinedChildrenMeshRenderers)
		bool L_9 = __this->get_deactivateCombinedChildrenMeshRenderers_8();
		V_3 = L_9;
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_0067;
		}
	}
	{
		// MeshRenderer meshRenderer = meshFilters[i+1].gameObject.GetComponent<MeshRenderer>();
		MeshFilterU5BU5D_tE8AA77783A24784C69A8083B4F3E482D866FD503* L_11 = ___meshFilters0;
		int32_t L_12 = V_0;
		NullCheck(L_11);
		int32_t L_13 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
		MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_14);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15;
		L_15 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_16;
		L_16 = GameObject_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m4E244CD0EBBF9E0A3A73AF14F6EC434CA82E6F4B(L_15, /*hidden argument*/GameObject_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m4E244CD0EBBF9E0A3A73AF14F6EC434CA82E6F4B_RuntimeMethod_var);
		V_4 = L_16;
		// if(meshRenderer != null)
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_17 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_17, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_5 = L_18;
		bool L_19 = V_5;
		if (!L_19)
		{
			goto IL_0066;
		}
	}
	{
		// meshRenderer.enabled = false;
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_20 = V_4;
		NullCheck(L_20);
		Renderer_set_enabled_mFFBA418C428C1B2B151C77B879DD10C393D9D95B(L_20, (bool)0, /*hidden argument*/NULL);
	}

IL_0066:
	{
	}

IL_0067:
	{
		goto IL_007c;
	}

IL_006a:
	{
		// DestroyImmediate(meshFilters[i+1].gameObject);
		MeshFilterU5BU5D_tE8AA77783A24784C69A8083B4F3E482D866FD503* L_21 = ___meshFilters0;
		int32_t L_22 = V_0;
		NullCheck(L_21);
		int32_t L_23 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
		MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		NullCheck(L_24);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_25;
		L_25 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_24, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_mCCED69F4D4C9A4FA3AC30A142CF3D7F085F7C422(L_25, /*hidden argument*/NULL);
	}

IL_007c:
	{
		// for(int i = 0; i < meshFilters.Length-1; i++) 
		int32_t L_26 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
	}

IL_0081:
	{
		// for(int i = 0; i < meshFilters.Length-1; i++) 
		int32_t L_27 = V_0;
		MeshFilterU5BU5D_tE8AA77783A24784C69A8083B4F3E482D866FD503* L_28 = ___meshFilters0;
		NullCheck(L_28);
		V_6 = (bool)((((int32_t)L_27) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_28)->max_length))), (int32_t)1))))? 1 : 0);
		bool L_29 = V_6;
		if (L_29)
		{
			goto IL_0005;
		}
	}
	{
		// }
		return;
	}
}
// System.Void MeshCombiner::GenerateUV(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshCombiner_GenerateUV_m651D43E54555179FAFE11E9D9EDEE0BCFF9CF374 (MeshCombiner_t2CD8003020EE4332F6A85F814B7876EE79DE1C05 * __this, Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___combinedMesh0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void MeshCombiner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshCombiner__ctor_mB13129257E7B635A0B644F987594B21ACE6F4BB1 (MeshCombiner_t2CD8003020EE4332F6A85F814B7876EE79DE1C05 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshFilterU5BU5D_tE8AA77783A24784C69A8083B4F3E482D866FD503_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral69AF8E51CA8BB988590A57E2EF12E2390A322CE4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private bool createMultiMaterialMesh = false, combineInactiveChildren = false, deactivateCombinedChildren = true,
		__this->set_createMultiMaterialMesh_5((bool)0);
		// private bool createMultiMaterialMesh = false, combineInactiveChildren = false, deactivateCombinedChildren = true,
		__this->set_combineInactiveChildren_6((bool)0);
		// private bool createMultiMaterialMesh = false, combineInactiveChildren = false, deactivateCombinedChildren = true,
		__this->set_deactivateCombinedChildren_7((bool)1);
		// deactivateCombinedChildrenMeshRenderers = false, generateUVMap = false, destroyCombinedChildren = false;
		__this->set_deactivateCombinedChildrenMeshRenderers_8((bool)0);
		// deactivateCombinedChildrenMeshRenderers = false, generateUVMap = false, destroyCombinedChildren = false;
		__this->set_generateUVMap_9((bool)0);
		// deactivateCombinedChildrenMeshRenderers = false, generateUVMap = false, destroyCombinedChildren = false;
		__this->set_destroyCombinedChildren_10((bool)0);
		// private string folderPath = "Prefabs/CombinedMeshes";
		__this->set_folderPath_11(_stringLiteral69AF8E51CA8BB988590A57E2EF12E2390A322CE4);
		// private MeshFilter[] meshFiltersToSkip = new MeshFilter[0];
		MeshFilterU5BU5D_tE8AA77783A24784C69A8083B4F3E482D866FD503* L_0 = (MeshFilterU5BU5D_tE8AA77783A24784C69A8083B4F3E482D866FD503*)(MeshFilterU5BU5D_tE8AA77783A24784C69A8083B4F3E482D866FD503*)SZArrayNew(MeshFilterU5BU5D_tE8AA77783A24784C69A8083B4F3E482D866FD503_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->set_meshFiltersToSkip_12(L_0);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single Movement::get_speed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Movement_get_speed_m95212CCB37C694CEDE8B33EEEFFBB5B0E5091139 (Movement_t81B548083980F3B23F17AC9CA1C906E46F4B594C * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// get { return _speed; }
		float L_0 = __this->get__speed_4();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return _speed; }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void Movement::set_speed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Movement_set_speed_m49A30ECCEF7CF0A1380D3F171E24BFDA99C39AFE (Movement_t81B548083980F3B23F17AC9CA1C906E46F4B594C * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { _speed = value; }
		float L_0 = ___value0;
		__this->set__speed_4(L_0);
		// set { _speed = value; }
		return;
	}
}
// System.Void Movement::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Movement_Start_m5FA5146A031A9B13FE98F9CCD6027EB1DBA2DF4F (Movement_t81B548083980F3B23F17AC9CA1C906E46F4B594C * __this, const RuntimeMethod* method)
{
	{
		// _rigidBody.Sleep();
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_0 = __this->get__rigidBody_6();
		NullCheck(L_0);
		Rigidbody_Sleep_m60350AEF3E52D57FBE448CADBC06BA98DAEA2115(L_0, /*hidden argument*/NULL);
		// _speed = 20f;
		__this->set__speed_4((20.0f));
		// _screenCenter.x = Screen.width * .5f;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_1 = __this->get_address_of__screenCenter_11();
		int32_t L_2;
		L_2 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		L_1->set_x_0(((float)il2cpp_codegen_multiply((float)((float)((float)L_2)), (float)(0.5f))));
		// _screenCenter.y = Screen.height * .5f;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_3 = __this->get_address_of__screenCenter_11();
		int32_t L_4;
		L_4 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		L_3->set_y_1(((float)il2cpp_codegen_multiply((float)((float)((float)L_4)), (float)(0.5f))));
		// }
		return;
	}
}
// System.Void Movement::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Movement_Update_m0880BACB69D5C89071A82EAB9BC17F76151B7DF1 (Movement_t81B548083980F3B23F17AC9CA1C906E46F4B594C * __this, const RuntimeMethod* method)
{
	{
		// _lookInput.x = Input.mousePosition.x;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_0 = __this->get_address_of__lookInput_10();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		float L_2 = L_1.get_x_2();
		L_0->set_x_0(L_2);
		// _lookInput.y = Input.mousePosition.y;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_3 = __this->get_address_of__lookInput_10();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		float L_5 = L_4.get_y_3();
		L_3->set_y_1(L_5);
		// _mouseDistance.x = (_lookInput.x - _screenCenter.x) / _screenCenter.x;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_6 = __this->get_address_of__mouseDistance_12();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_7 = __this->get_address_of__lookInput_10();
		float L_8 = L_7->get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_9 = __this->get_address_of__screenCenter_11();
		float L_10 = L_9->get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_11 = __this->get_address_of__screenCenter_11();
		float L_12 = L_11->get_x_0();
		L_6->set_x_0(((float)((float)((float)il2cpp_codegen_subtract((float)L_8, (float)L_10))/(float)L_12)));
		// _mouseDistance.y = (_lookInput.y - _screenCenter.y) / _screenCenter.y;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_13 = __this->get_address_of__mouseDistance_12();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_14 = __this->get_address_of__lookInput_10();
		float L_15 = L_14->get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_16 = __this->get_address_of__screenCenter_11();
		float L_17 = L_16->get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_18 = __this->get_address_of__screenCenter_11();
		float L_19 = L_18->get_y_1();
		L_13->set_y_1(((float)((float)((float)il2cpp_codegen_subtract((float)L_15, (float)L_17))/(float)L_19)));
		// _mouseDistance = Vector2.ClampMagnitude(_mouseDistance, 1f);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_20 = __this->get__mouseDistance_12();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_21;
		L_21 = Vector2_ClampMagnitude_m4FFD90D646E17E41F799FC78FF652A2D75AD5074(L_20, (1.0f), /*hidden argument*/NULL);
		__this->set__mouseDistance_12(L_21);
		// CheckX();
		Movement_CheckX_m49C39923E77B98C35BEE5323F9EB203E50FF1B5C(__this, /*hidden argument*/NULL);
		// CheckY();
		Movement_CheckY_m78C5A6F0BD611A17EE89A75191420B3A304CCD76(__this, /*hidden argument*/NULL);
		// _carTransform.position += -transform.forward * _speed * Time.deltaTime;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22 = __this->get__carTransform_5();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_23 = L_22;
		NullCheck(L_23);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
		L_24 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_23, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_25;
		L_25 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_25);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26;
		L_26 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_25, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27;
		L_27 = Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline(L_26, /*hidden argument*/NULL);
		float L_28 = __this->get__speed_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29;
		L_29 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_27, L_28, /*hidden argument*/NULL);
		float L_30;
		L_30 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31;
		L_31 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_29, L_30, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32;
		L_32 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_24, L_31, /*hidden argument*/NULL);
		NullCheck(L_23);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_23, L_32, /*hidden argument*/NULL);
		// _carTransform.Rotate(_mouseDistance.y * _lookRateSpeed * Time.deltaTime, _mouseDistance.x * _lookRateSpeed * Time.deltaTime, 0f, Space.Self);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_33 = __this->get__carTransform_5();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_34 = __this->get_address_of__mouseDistance_12();
		float L_35 = L_34->get_y_1();
		float L_36 = __this->get__lookRateSpeed_9();
		float L_37;
		L_37 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_38 = __this->get_address_of__mouseDistance_12();
		float L_39 = L_38->get_x_0();
		float L_40 = __this->get__lookRateSpeed_9();
		float L_41;
		L_41 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		NullCheck(L_33);
		Transform_Rotate_mE77655C011C18F49CAD740CED7940EF1C7000357(L_33, ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_35, (float)L_36)), (float)L_37)), ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_39, (float)L_40)), (float)L_41)), (0.0f), 1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Movement::CheckY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Movement_CheckY_m78C5A6F0BD611A17EE89A75191420B3A304CCD76 (Movement_t81B548083980F3B23F17AC9CA1C906E46F4B594C * __this, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 Angle = _carTransform.eulerAngles;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get__carTransform_5();
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_eulerAngles_mCF1E10C36ED1F03804A1D10A9BAB272E0EA8766F(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// Angle.y = Mathf.Clamp(Angle.y, _LimitY.x, _LimitY.y);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = V_0;
		float L_3 = L_2.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_4 = __this->get_address_of__LimitY_8();
		float L_5 = L_4->get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_6 = __this->get_address_of__LimitY_8();
		float L_7 = L_6->get_y_1();
		float L_8;
		L_8 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(L_3, L_5, L_7, /*hidden argument*/NULL);
		(&V_0)->set_y_3(L_8);
		// _carTransform.eulerAngles = new Vector3(_carTransform.eulerAngles.x, Angle.y, 0f);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9 = __this->get__carTransform_5();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10 = __this->get__carTransform_5();
		NullCheck(L_10);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Transform_get_eulerAngles_mCF1E10C36ED1F03804A1D10A9BAB272E0EA8766F(L_10, /*hidden argument*/NULL);
		float L_12 = L_11.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		float L_14 = L_13.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_15), L_12, L_14, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_set_eulerAngles_mFDCBC6282E4B1196AA26BF01008B2AAA2DD2969E(L_9, L_15, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Movement::CheckX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Movement_CheckX_m49C39923E77B98C35BEE5323F9EB203E50FF1B5C (Movement_t81B548083980F3B23F17AC9CA1C906E46F4B594C * __this, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	{
		// Vector3 Angle = _carTransform.eulerAngles;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get__carTransform_5();
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_eulerAngles_mCF1E10C36ED1F03804A1D10A9BAB272E0EA8766F(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_001f;
	}

IL_000f:
	{
		// Angle.x -= 360f;
		float* L_2 = (&V_0)->get_address_of_x_2();
		float* L_3 = L_2;
		float L_4 = *((float*)L_3);
		*((float*)L_3) = (float)((float)il2cpp_codegen_subtract((float)L_4, (float)(360.0f)));
	}

IL_001f:
	{
		// while (Angle.x > 180f)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = V_0;
		float L_6 = L_5.get_x_2();
		V_1 = (bool)((((float)L_6) > ((float)(180.0f)))? 1 : 0);
		bool L_7 = V_1;
		if (L_7)
		{
			goto IL_000f;
		}
	}
	{
		goto IL_0042;
	}

IL_0032:
	{
		// Angle.x += 360f;
		float* L_8 = (&V_0)->get_address_of_x_2();
		float* L_9 = L_8;
		float L_10 = *((float*)L_9);
		*((float*)L_9) = (float)((float)il2cpp_codegen_add((float)L_10, (float)(360.0f)));
	}

IL_0042:
	{
		// while (Angle.x < -180f)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = V_0;
		float L_12 = L_11.get_x_2();
		V_2 = (bool)((((float)L_12) < ((float)(-180.0f)))? 1 : 0);
		bool L_13 = V_2;
		if (L_13)
		{
			goto IL_0032;
		}
	}
	{
		// Angle.x = Mathf.Clamp(Angle.x, _LimitX.x, _LimitX.y);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14 = V_0;
		float L_15 = L_14.get_x_2();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_16 = __this->get_address_of__LimitX_7();
		float L_17 = L_16->get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_18 = __this->get_address_of__LimitX_7();
		float L_19 = L_18->get_y_1();
		float L_20;
		L_20 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(L_15, L_17, L_19, /*hidden argument*/NULL);
		(&V_0)->set_x_2(L_20);
		// _carTransform.eulerAngles = new Vector3(Angle.x, _carTransform.eulerAngles.y, 0f);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21 = __this->get__carTransform_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22 = V_0;
		float L_23 = L_22.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_24 = __this->get__carTransform_5();
		NullCheck(L_24);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25;
		L_25 = Transform_get_eulerAngles_mCF1E10C36ED1F03804A1D10A9BAB272E0EA8766F(L_24, /*hidden argument*/NULL);
		float L_26 = L_25.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27;
		memset((&L_27), 0, sizeof(L_27));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_27), L_23, L_26, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_21);
		Transform_set_eulerAngles_mFDCBC6282E4B1196AA26BF01008B2AAA2DD2969E(L_21, L_27, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Movement::SetDefaultSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Movement_SetDefaultSpeed_mB03C767CE4451F70F21DED662C56B73C8C65A368 (Movement_t81B548083980F3B23F17AC9CA1C906E46F4B594C * __this, const RuntimeMethod* method)
{
	{
		// speed = 20f;
		Movement_set_speed_m49A30ECCEF7CF0A1380D3F171E24BFDA99C39AFE(__this, (20.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Movement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Movement__ctor_mEA4800F5BE98787C0ACA8CDF85918B56DE62A2AB (Movement_t81B548083980F3B23F17AC9CA1C906E46F4B594C * __this, const RuntimeMethod* method)
{
	{
		// [SerializeField] private float _speed = 20f;
		__this->set__speed_4((20.0f));
		// [SerializeField] private Vector2 _LimitX = new Vector2(-40, 40);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_0), (-40.0f), (40.0f), /*hidden argument*/NULL);
		__this->set__LimitX_7(L_0);
		// [SerializeField] private Vector2 _LimitY = new Vector2(160, 200);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_1), (160.0f), (200.0f), /*hidden argument*/NULL);
		__this->set__LimitY_8(L_1);
		// private float _lookRateSpeed = 120f;
		__this->set__lookRateSpeed_9((120.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ObjCollision::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjCollision_OnCollisionEnter_m83610F54CE0A1AC14470EA333D22144F5DD950F4 (ObjCollision_t6D595F964DA9124367E2EFD26AAA71F60077BDE0 * __this, Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * ___col0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mA1779277BB07CE3D2CB8E340CEA85C40C6B52354_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if(col.gameObject.tag == playerTag)
		Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * L_0 = ___col0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Collision_get_gameObject_m5682F872FD28419AA36F0651CE8B19825A21859D(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		String_t* L_3 = __this->get_playerTag_4();
		bool L_4;
		L_4 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_002f;
		}
	}
	{
		// gameObject.GetComponent<Rigidbody>().useGravity = true;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_7;
		L_7 = GameObject_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mA1779277BB07CE3D2CB8E340CEA85C40C6B52354(L_6, /*hidden argument*/GameObject_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mA1779277BB07CE3D2CB8E340CEA85C40C6B52354_RuntimeMethod_var);
		NullCheck(L_7);
		Rigidbody_set_useGravity_m1057292FB3199E87664F40B8BCBA7A7E64D1A096(L_7, (bool)1, /*hidden argument*/NULL);
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Void ObjCollision::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjCollision__ctor_mB994C8536F1205744BB6247105D13533C583B552 (ObjCollision_t6D595F964DA9124367E2EFD26AAA71F60077BDE0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string playerTag = "Player";
		__this->set_playerTag_4(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Player::get_isDead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Player_get_isDead_mCEEC47D715729C1568D972FD3BAE2F82EFAF0A58 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// get { return _isDead;}
		bool L_0 = __this->get__isDead_6();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return _isDead;}
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Player::set_isDead(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_set_isDead_mF5FEB3D43214BF0C6DABD6DB4230A7A3636E0322 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { _isDead = value; }
		bool L_0 = ___value0;
		__this->set__isDead_6(L_0);
		// set { _isDead = value; }
		return;
	}
}
// System.Void Player::CoinsAdd(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_CoinsAdd_m3AE34B09B86678195739748EF25E523ED98286D6 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, int32_t ___amount0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// _currentSession.coinsAmount += amount;
		Session_tBF465A2B862D5E44002D0BBEE7F68FB6B64129BC * L_0 = __this->get__currentSession_4();
		Session_tBF465A2B862D5E44002D0BBEE7F68FB6B64129BC * L_1 = L_0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Session_get_coinsAmount_m896CD9CB9700AC90EBA159B9438B935690D6C4B6(L_1, /*hidden argument*/NULL);
		int32_t L_3 = ___amount0;
		NullCheck(L_1);
		Session_set_coinsAmount_m75C21B4A87259E67FDCAD7B590A7C5772BDC6A52(L_1, ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)L_3)), /*hidden argument*/NULL);
		// _coinsCountText.text = _currentSession.coinsAmount + "x";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_4 = __this->get__coinsCountText_5();
		Session_tBF465A2B862D5E44002D0BBEE7F68FB6B64129BC * L_5 = __this->get__currentSession_4();
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Session_get_coinsAmount_m896CD9CB9700AC90EBA159B9438B935690D6C4B6(L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		String_t* L_7;
		L_7 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_8;
		L_8 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_7, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, /*hidden argument*/NULL);
		NullCheck(L_4);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, L_8);
		// }
		return;
	}
}
// System.Void Player::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player__ctor_mDE8EB5B351975D4E7E24DE341B8B49B8A29CC2B7 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	{
		// private bool _isDead = false;
		__this->set__isDead_6((bool)0);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void RestartGame::Restart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RestartGame_Restart_m751793D9A97DAA2C2A3D38F82475A6AD3F8A8E39 (RestartGame_t4871D9CCA018BBE024190E8DA63A0E07CFA7C286 * __this, const RuntimeMethod* method)
{
	{
		// _chunkCreator.RestartGame();
		ChunkCreator_tE0280F95F7F316AA5D7907CF17F3ADD314C81074 * L_0 = __this->get__chunkCreator_5();
		NullCheck(L_0);
		ChunkCreator_RestartGame_m21C884DA2203AC985CB04DF796D5529CA6DE4837(L_0, /*hidden argument*/NULL);
		// _gameOverPanel.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get__gameOverPanel_4();
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void RestartGame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RestartGame__ctor_m6894EFCB591A2FD675E99E43194C2652EFDA3ECC (RestartGame_t4871D9CCA018BBE024190E8DA63A0E07CFA7C286 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Session::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Session_Start_mED6AF5A0A508D0ECE244C9733040E1198F8D15B2 (Session_tBF465A2B862D5E44002D0BBEE7F68FB6B64129BC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisDifficultySystem_t890C85560517296BDCC85431D950A36A8E5FA6E7_m35D9B704CBFCB2BA65B5C4B4CBF24541BA2F9300_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _difficultySystem = transform.GetComponent<DifficultySystem>();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		DifficultySystem_t890C85560517296BDCC85431D950A36A8E5FA6E7 * L_1;
		L_1 = Component_GetComponent_TisDifficultySystem_t890C85560517296BDCC85431D950A36A8E5FA6E7_m35D9B704CBFCB2BA65B5C4B4CBF24541BA2F9300(L_0, /*hidden argument*/Component_GetComponent_TisDifficultySystem_t890C85560517296BDCC85431D950A36A8E5FA6E7_m35D9B704CBFCB2BA65B5C4B4CBF24541BA2F9300_RuntimeMethod_var);
		__this->set__difficultySystem_8(L_1);
		// _oldZPosition = _player.transform.position.z;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2 = __this->get__player_4();
		NullCheck(L_2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		float L_5 = L_4.get_z_4();
		__this->set__oldZPosition_9(L_5);
		// }
		return;
	}
}
// System.Int32 Session::get_coinsAmount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Session_get_coinsAmount_m896CD9CB9700AC90EBA159B9438B935690D6C4B6 (Session_tBF465A2B862D5E44002D0BBEE7F68FB6B64129BC * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// get { return _sessionCoinsAmount; }
		int32_t L_0 = __this->get__sessionCoinsAmount_10();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return _sessionCoinsAmount; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void Session::set_coinsAmount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Session_set_coinsAmount_m75C21B4A87259E67FDCAD7B590A7C5772BDC6A52 (Session_tBF465A2B862D5E44002D0BBEE7F68FB6B64129BC * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set { _sessionCoinsAmount = value; }
		int32_t L_0 = ___value0;
		__this->set__sessionCoinsAmount_10(L_0);
		// set { _sessionCoinsAmount = value; }
		return;
	}
}
// System.Void Session::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Session_Update_mC8FC671D2437E816946D867E8DC717EFFDA77280 (Session_tBF465A2B862D5E44002D0BBEE7F68FB6B64129BC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		// if (_player.transform.position.z - _oldZPosition >= 10f)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get__player_4();
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		float L_3 = L_2.get_z_4();
		float L_4 = __this->get__oldZPosition_9();
		V_0 = (bool)((((int32_t)((!(((float)((float)il2cpp_codegen_subtract((float)L_3, (float)L_4))) >= ((float)(10.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_00a7;
		}
	}
	{
		// ScoreCounter(1);
		Session_ScoreCounter_mB0B23124FDAAF96FA539D4743C266712E350DF6A(__this, 1, /*hidden argument*/NULL);
		// _sessionRange = _player.transform.position.z;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6 = __this->get__player_4();
		NullCheck(L_6);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_7, /*hidden argument*/NULL);
		float L_9 = L_8.get_z_4();
		__this->set__sessionRange_11(L_9);
		// _difficultySystem.DifficultyUpdate();
		DifficultySystem_t890C85560517296BDCC85431D950A36A8E5FA6E7 * L_10 = __this->get__difficultySystem_8();
		NullCheck(L_10);
		DifficultySystem_DifficultyUpdate_m222CEB81EA70FDA0A7F556906BB8E96A9D1C44D0(L_10, /*hidden argument*/NULL);
		// _oldZPosition = _player.transform.position.z;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11 = __this->get__player_4();
		NullCheck(L_11);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_12, /*hidden argument*/NULL);
		float L_14 = L_13.get_z_4();
		__this->set__oldZPosition_9(L_14);
		// _rangeText[0].text = Convert.ToInt32(_player.transform.position.z).ToString();
		TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* L_15 = __this->get__rangeText_6();
		NullCheck(L_15);
		int32_t L_16 = 0;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18 = __this->get__player_4();
		NullCheck(L_18);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19;
		L_19 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_18, /*hidden argument*/NULL);
		NullCheck(L_19);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		L_20 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_19, /*hidden argument*/NULL);
		float L_21 = L_20.get_z_4();
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		int32_t L_22;
		L_22 = Convert_ToInt32_mAFAE7DA97BACA9CEC03D40A2D322093B122B02FE(L_21, /*hidden argument*/NULL);
		V_1 = L_22;
		String_t* L_23;
		L_23 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_1), /*hidden argument*/NULL);
		NullCheck(L_17);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_17, L_23);
	}

IL_00a7:
	{
		// }
		return;
	}
}
// System.Void Session::SetCoins()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Session_SetCoins_mF5A8BE05C9336ECD8C06A1770AD8D1F7A2D377A5 (Session_tBF465A2B862D5E44002D0BBEE7F68FB6B64129BC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral33475665902203BC82B0D5F5AE97A7CC3F47EE21);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int currentBalance = PlayerPrefs.GetInt("balance");
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteral33475665902203BC82B0D5F5AE97A7CC3F47EE21, /*hidden argument*/NULL);
		V_0 = L_0;
		// PlayerPrefs.SetInt("balance", _sessionCoinsAmount + currentBalance);
		int32_t L_1 = __this->get__sessionCoinsAmount_10();
		int32_t L_2 = V_0;
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteral33475665902203BC82B0D5F5AE97A7CC3F47EE21, ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)L_2)), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Session::SetValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Session_SetValues_m100CEFD9B77BEA576ED2115993EAA9606A155234 (Session_tBF465A2B862D5E44002D0BBEE7F68FB6B64129BC * __this, const RuntimeMethod* method)
{
	{
		// _coinsText.text = _sessionCoinsAmount.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get__coinsText_5();
		int32_t* L_1 = __this->get_address_of__sessionCoinsAmount_10();
		String_t* L_2;
		L_2 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_2);
		// _rangeText[1].text = _sessionRange.ToString();
		TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* L_3 = __this->get__rangeText_6();
		NullCheck(L_3);
		int32_t L_4 = 1;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		float* L_6 = __this->get_address_of__sessionRange_11();
		String_t* L_7;
		L_7 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, L_7);
		// }
		return;
	}
}
// System.Void Session::ScoreCounter(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Session_ScoreCounter_mB0B23124FDAAF96FA539D4743C266712E350DF6A (Session_tBF465A2B862D5E44002D0BBEE7F68FB6B64129BC * __this, int32_t ____currentScore0, const RuntimeMethod* method)
{
	{
		// _sessionScore += _currentScore;
		int32_t L_0 = __this->get__sessionScore_12();
		int32_t L_1 = ____currentScore0;
		__this->set__sessionScore_12(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1)));
		// _scoreText.text = _sessionScore.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_2 = __this->get__scoreText_7();
		int32_t* L_3 = __this->get_address_of__sessionScore_12();
		String_t* L_4;
		L_4 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_4);
		// }
		return;
	}
}
// System.Void Session::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Session__ctor_m377B700A4803EE5DA675957981E37D1039AEB670 (Session_tBF465A2B862D5E44002D0BBEE7F68FB6B64129BC * __this, const RuntimeMethod* method)
{
	{
		// private float _oldZPosition = 0f;
		__this->set__oldZPosition_9((0.0f));
		// private int _sessionCoinsAmount = 0;
		__this->set__sessionCoinsAmount_10(0);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SpawnPoint::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnPoint__ctor_m5A0EE1AE5C5886E3EAB22116C74D10952EA35D68 (SpawnPoint_t77028DEDD80A0DA2C96B701D023CFD026514EB9B * __this, const RuntimeMethod* method)
{
	{
		// public bool isEmpty = true;
		__this->set_isEmpty_4((bool)1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void StartGameButton::StartGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartGameButton_StartGame_m3D253D3B2E2263A0049D9F8B109F144D873E83C7 (StartGameButton_t6F140D4EF1936A8550D13A33B125F4F68B27BDDB * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void StartGameButton::OnMouseDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartGameButton_OnMouseDown_m5FA890E6FA5AE63AF5486DEA84A4E95FB9CE324B (StartGameButton_t6F140D4EF1936A8550D13A33B125F4F68B27BDDB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (Input.GetMouseButton(0))
		bool L_0;
		L_0 = Input_GetMouseButton_m27BF2DDBF38A38787B83A13D3E6F0F88F7C834C1(0, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// SceneManager.LoadScene(1);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(1, /*hidden argument*/NULL);
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Void StartGameButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartGameButton__ctor_m8A7D2F218CF57D67BFF4D2324CFAFBA19A4DC8D6 (StartGameButton_t6F140D4EF1936A8550D13A33B125F4F68B27BDDB * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DamageZone/<Collision>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCollisionU3Ed__8__ctor_m38A51A1F4BD4B9E0BA74E273E8EEE2A9954042B0 (U3CCollisionU3Ed__8_tA42703A19ABC4B010180FE96850C09DD884090FC * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void DamageZone/<Collision>d__8::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCollisionU3Ed__8_System_IDisposable_Dispose_m2B38298A370D2A6412F7170EF9AE0051A690BD1C (U3CCollisionU3Ed__8_tA42703A19ABC4B010180FE96850C09DD884090FC * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean DamageZone/<Collision>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCollisionU3Ed__8_MoveNext_m15DB35308103E2C8AA1D26B2726DF0D850A4E33B (U3CCollisionU3Ed__8_tA42703A19ABC4B010180FE96850C09DD884090FC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_0073;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->set_U3CU3E1__state_0((-1));
		// SetGravity(true);
		DamageZone_t7E17CB7C4777F0F7319F4122AE04A70C274632D9 * L_3 = __this->get_U3CU3E4__this_2();
		NullCheck(L_3);
		DamageZone_SetGravity_m035E9A0A636F9BD3FBA925077A8E0F388C8C7D46(L_3, (bool)1, /*hidden argument*/NULL);
		// _rigidBody.AddForce(_direction * _speed, ForceMode.Impulse);
		DamageZone_t7E17CB7C4777F0F7319F4122AE04A70C274632D9 * L_4 = __this->get_U3CU3E4__this_2();
		NullCheck(L_4);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_5 = L_4->get__rigidBody_8();
		DamageZone_t7E17CB7C4777F0F7319F4122AE04A70C274632D9 * L_6 = __this->get_U3CU3E4__this_2();
		NullCheck(L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = L_6->get__direction_7();
		DamageZone_t7E17CB7C4777F0F7319F4122AE04A70C274632D9 * L_8 = __this->get_U3CU3E4__this_2();
		NullCheck(L_8);
		float L_9 = L_8->get__speed_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_7, L_9, /*hidden argument*/NULL);
		NullCheck(L_5);
		Rigidbody_AddForce_m78B9D94F505E19F3C63461362AD6DE7EA0836700(L_5, L_10, 1, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(1f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_11 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_11, (1.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_11);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0073:
	{
		__this->set_U3CU3E1__state_0((-1));
		// SetGravity(false);
		DamageZone_t7E17CB7C4777F0F7319F4122AE04A70C274632D9 * L_12 = __this->get_U3CU3E4__this_2();
		NullCheck(L_12);
		DamageZone_SetGravity_m035E9A0A636F9BD3FBA925077A8E0F388C8C7D46(L_12, (bool)0, /*hidden argument*/NULL);
		// SetNativePosition();
		DamageZone_t7E17CB7C4777F0F7319F4122AE04A70C274632D9 * L_13 = __this->get_U3CU3E4__this_2();
		NullCheck(L_13);
		DamageZone_SetNativePosition_m6CEE4F559DC7AFD31848F226100679DAD5F6714E(L_13, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object DamageZone/<Collision>d__8::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CCollisionU3Ed__8_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mAF75998ABB60B202ACAEBA9DACCE3B79E96F2884 (U3CCollisionU3Ed__8_tA42703A19ABC4B010180FE96850C09DD884090FC * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void DamageZone/<Collision>d__8::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCollisionU3Ed__8_System_Collections_IEnumerator_Reset_m508F8D21EA6F9F392DBA5BEA71162C21053EA1A9 (U3CCollisionU3Ed__8_tA42703A19ABC4B010180FE96850C09DD884090FC * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCollisionU3Ed__8_System_Collections_IEnumerator_Reset_m508F8D21EA6F9F392DBA5BEA71162C21053EA1A9_RuntimeMethod_var)));
	}
}
// System.Object DamageZone/<Collision>d__8::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CCollisionU3Ed__8_System_Collections_IEnumerator_get_Current_mEEDD7C58A0F7E602083924D8D3C9AB6F4110880A (U3CCollisionU3Ed__8_tA42703A19ABC4B010180FE96850C09DD884090FC * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FPS/<FPSShow>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFPSShowU3Ed__1__ctor_m9890260FC1415BCACA3627C72E19417C743A0569 (U3CFPSShowU3Ed__1_t96B8D881F827C451C455FB3E4D52DA18284ADA6A * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void FPS/<FPSShow>d__1::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFPSShowU3Ed__1_System_IDisposable_Dispose_mD6B2140DB54AD79FC7D9554431143E6295795E1F (U3CFPSShowU3Ed__1_t96B8D881F827C451C455FB3E4D52DA18284ADA6A * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean FPS/<FPSShow>d__1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CFPSShowU3Ed__1_MoveNext_m46B7C35F6DBBC86E0F621727AC15301DEDC357D6 (U3CFPSShowU3Ed__1_t96B8D881F827C451C455FB3E4D52DA18284ADA6A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB0BB5D4FA59FF963FDE2494755AB4182D0F8AA2);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_0073;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->set_U3CU3E1__state_0((-1));
		goto IL_007b;
	}

IL_0022:
	{
		// float fps = 1.0f / Time.deltaTime;
		float L_3;
		L_3 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_U3CfpsU3E5__1_3(((float)((float)(1.0f)/(float)L_3)));
		// GetComponent<Text>().text = "FPS: " + fps;
		FPS_t2BF93E8D6D0DE5740268969C725821F2730E9D88 * L_4 = __this->get_U3CU3E4__this_2();
		NullCheck(L_4);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_5;
		L_5 = Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137(L_4, /*hidden argument*/Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		float* L_6 = __this->get_address_of_U3CfpsU3E5__1_3();
		String_t* L_7;
		L_7 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)L_6, /*hidden argument*/NULL);
		String_t* L_8;
		L_8 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralEB0BB5D4FA59FF963FDE2494755AB4182D0F8AA2, L_7, /*hidden argument*/NULL);
		NullCheck(L_5);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, L_8);
		// yield return new WaitForSeconds(1);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_9 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_9, (1.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_9);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0073:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_007b:
	{
		// while (true)
		V_1 = (bool)1;
		goto IL_0022;
	}
}
// System.Object FPS/<FPSShow>d__1::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CFPSShowU3Ed__1_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mAA1307FE98BF21BCD95958B2BD7196153DCC310D (U3CFPSShowU3Ed__1_t96B8D881F827C451C455FB3E4D52DA18284ADA6A * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void FPS/<FPSShow>d__1::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFPSShowU3Ed__1_System_Collections_IEnumerator_Reset_m3D5EC969C5006655148E0A6C056D1A68EBB921A5 (U3CFPSShowU3Ed__1_t96B8D881F827C451C455FB3E4D52DA18284ADA6A * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CFPSShowU3Ed__1_System_Collections_IEnumerator_Reset_m3D5EC969C5006655148E0A6C056D1A68EBB921A5_RuntimeMethod_var)));
	}
}
// System.Object FPS/<FPSShow>d__1::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CFPSShowU3Ed__1_System_Collections_IEnumerator_get_Current_m7FF47DDD25044F0AC24F0FFEF3754BE5333E37D2 (U3CFPSShowU3Ed__1_t96B8D881F827C451C455FB3E4D52DA18284ADA6A * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void HCTraffic/<SpawnInterval>d__15::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnIntervalU3Ed__15__ctor_mE3025269BEEFF457E7D3072A9FE18A27B21291D9 (U3CSpawnIntervalU3Ed__15_tFF276102F52D81BEBF574FB151E15CBCAC9EC109 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void HCTraffic/<SpawnInterval>d__15::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnIntervalU3Ed__15_System_IDisposable_Dispose_m9972C4BF9FFA6E8883A16DC4EC62FDD9F65381EF (U3CSpawnIntervalU3Ed__15_tFF276102F52D81BEBF574FB151E15CBCAC9EC109 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean HCTraffic/<SpawnInterval>d__15::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSpawnIntervalU3Ed__15_MoveNext_mF6CC5A0B598282A9B0F07B82FA3C07AAE8E06519 (U3CSpawnIntervalU3Ed__15_tFF276102F52D81BEBF574FB151E15CBCAC9EC109 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisHCTraffic_t1CEB8C258DECA919DFD60C350B3D04680E06CC02_m2053BBCD431FAC27EB3DD76342D368A8CA9D49DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisHCVehicle_tD4C626176997767010D3E92648CED7AA2AFADAE1_m861D98AECF4FCD810F00C20CDC7FD51A9A20986C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFEBAFD123827314D891E242058D1A1D88D39E29E);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	bool V_5 = false;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_003a;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(rTime);
		float L_3 = __this->get_rTime_2();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_4 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_4, L_3, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_003a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (!locked)
		HCTraffic_t1CEB8C258DECA919DFD60C350B3D04680E06CC02 * L_5 = __this->get_U3CU3E4__this_3();
		NullCheck(L_5);
		bool L_6 = L_5->get_locked_13();
		V_1 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_025b;
		}
	}
	{
		// if (VehicleCount < MaxVehicleCount)
		HCTraffic_t1CEB8C258DECA919DFD60C350B3D04680E06CC02 * L_8 = __this->get_U3CU3E4__this_3();
		NullCheck(L_8);
		int32_t L_9 = L_8->get_VehicleCount_11();
		HCTraffic_t1CEB8C258DECA919DFD60C350B3D04680E06CC02 * L_10 = __this->get_U3CU3E4__this_3();
		NullCheck(L_10);
		int32_t L_11 = L_10->get_MaxVehicleCount_4();
		V_2 = (bool)((((int32_t)L_9) < ((int32_t)L_11))? 1 : 0);
		bool L_12 = V_2;
		if (!L_12)
		{
			goto IL_0228;
		}
	}
	{
		// for (int k0 = 0; k0 < SpawnPoints.Length; k0++)
		__this->set_U3Ck0U3E5__1_4(0);
		goto IL_0209;
	}

IL_0083:
	{
		// GameObject obj = Instantiate(Vehicle[Random.Range(0, Vehicle.Length)]);
		HCTraffic_t1CEB8C258DECA919DFD60C350B3D04680E06CC02 * L_13 = __this->get_U3CU3E4__this_3();
		NullCheck(L_13);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_14 = L_13->get_Vehicle_8();
		HCTraffic_t1CEB8C258DECA919DFD60C350B3D04680E06CC02 * L_15 = __this->get_U3CU3E4__this_3();
		NullCheck(L_15);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_16 = L_15->get_Vehicle_8();
		NullCheck(L_16);
		int32_t L_17;
		L_17 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, ((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length))), /*hidden argument*/NULL);
		NullCheck(L_14);
		int32_t L_18 = L_17;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20;
		L_20 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_19, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		__this->set_U3CobjU3E5__2_5(L_20);
		// obj.transform.position = SpawnPoints[k0].position + Random.insideUnitSphere * MaxStartScatter;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21 = __this->get_U3CobjU3E5__2_5();
		NullCheck(L_21);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22;
		L_22 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_21, /*hidden argument*/NULL);
		HCTraffic_t1CEB8C258DECA919DFD60C350B3D04680E06CC02 * L_23 = __this->get_U3CU3E4__this_3();
		NullCheck(L_23);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_24 = L_23->get_SpawnPoints_12();
		int32_t L_25 = __this->get_U3Ck0U3E5__1_4();
		NullCheck(L_24);
		int32_t L_26 = L_25;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		NullCheck(L_27);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28;
		L_28 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_27, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29;
		L_29 = Random_get_insideUnitSphere_m43E5AE1F6A6CFA892BAE6E3ED71BEBFCE308CE90(/*hidden argument*/NULL);
		HCTraffic_t1CEB8C258DECA919DFD60C350B3D04680E06CC02 * L_30 = __this->get_U3CU3E4__this_3();
		NullCheck(L_30);
		float L_31 = L_30->get_MaxStartScatter_7();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32;
		L_32 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_29, L_31, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33;
		L_33 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_28, L_32, /*hidden argument*/NULL);
		NullCheck(L_22);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_22, L_33, /*hidden argument*/NULL);
		// obj.transform.localRotation = SpawnPoints[k0].localRotation;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_34 = __this->get_U3CobjU3E5__2_5();
		NullCheck(L_34);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_35;
		L_35 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_34, /*hidden argument*/NULL);
		HCTraffic_t1CEB8C258DECA919DFD60C350B3D04680E06CC02 * L_36 = __this->get_U3CU3E4__this_3();
		NullCheck(L_36);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_37 = L_36->get_SpawnPoints_12();
		int32_t L_38 = __this->get_U3Ck0U3E5__1_4();
		NullCheck(L_37);
		int32_t L_39 = L_38;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		NullCheck(L_40);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_41;
		L_41 = Transform_get_localRotation_mA6472AE7509D762965275D79B645A14A9CCF5BE5(L_40, /*hidden argument*/NULL);
		NullCheck(L_35);
		Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C(L_35, L_41, /*hidden argument*/NULL);
		// if (obj.transform.gameObject.GetComponent<HCVehicle>())
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_42 = __this->get_U3CobjU3E5__2_5();
		NullCheck(L_42);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_43;
		L_43 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_42, /*hidden argument*/NULL);
		NullCheck(L_43);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_44;
		L_44 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_43, /*hidden argument*/NULL);
		NullCheck(L_44);
		HCVehicle_tD4C626176997767010D3E92648CED7AA2AFADAE1 * L_45;
		L_45 = GameObject_GetComponent_TisHCVehicle_tD4C626176997767010D3E92648CED7AA2AFADAE1_m861D98AECF4FCD810F00C20CDC7FD51A9A20986C(L_44, /*hidden argument*/GameObject_GetComponent_TisHCVehicle_tD4C626176997767010D3E92648CED7AA2AFADAE1_m861D98AECF4FCD810F00C20CDC7FD51A9A20986C_RuntimeMethod_var);
		bool L_46;
		L_46 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_45, /*hidden argument*/NULL);
		V_3 = L_46;
		bool L_47 = V_3;
		if (!L_47)
		{
			goto IL_019c;
		}
	}
	{
		// obj.transform.gameObject.GetComponent<HCVehicle>()._HCTrafficLinked = transform.gameObject.GetComponent<HCTraffic>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_48 = __this->get_U3CobjU3E5__2_5();
		NullCheck(L_48);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_49;
		L_49 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_48, /*hidden argument*/NULL);
		NullCheck(L_49);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_50;
		L_50 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_49, /*hidden argument*/NULL);
		NullCheck(L_50);
		HCVehicle_tD4C626176997767010D3E92648CED7AA2AFADAE1 * L_51;
		L_51 = GameObject_GetComponent_TisHCVehicle_tD4C626176997767010D3E92648CED7AA2AFADAE1_m861D98AECF4FCD810F00C20CDC7FD51A9A20986C(L_50, /*hidden argument*/GameObject_GetComponent_TisHCVehicle_tD4C626176997767010D3E92648CED7AA2AFADAE1_m861D98AECF4FCD810F00C20CDC7FD51A9A20986C_RuntimeMethod_var);
		HCTraffic_t1CEB8C258DECA919DFD60C350B3D04680E06CC02 * L_52 = __this->get_U3CU3E4__this_3();
		NullCheck(L_52);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_53;
		L_53 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_52, /*hidden argument*/NULL);
		NullCheck(L_53);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_54;
		L_54 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_53, /*hidden argument*/NULL);
		NullCheck(L_54);
		HCTraffic_t1CEB8C258DECA919DFD60C350B3D04680E06CC02 * L_55;
		L_55 = GameObject_GetComponent_TisHCTraffic_t1CEB8C258DECA919DFD60C350B3D04680E06CC02_m2053BBCD431FAC27EB3DD76342D368A8CA9D49DF(L_54, /*hidden argument*/GameObject_GetComponent_TisHCTraffic_t1CEB8C258DECA919DFD60C350B3D04680E06CC02_m2053BBCD431FAC27EB3DD76342D368A8CA9D49DF_RuntimeMethod_var);
		NullCheck(L_51);
		L_51->set__HCTrafficLinked_6(L_55);
		// obj.transform.gameObject.GetComponent<HCVehicle>().CarSpeed += CarSpeedVariations[k0];
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_56 = __this->get_U3CobjU3E5__2_5();
		NullCheck(L_56);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_57;
		L_57 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_56, /*hidden argument*/NULL);
		NullCheck(L_57);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_58;
		L_58 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_57, /*hidden argument*/NULL);
		NullCheck(L_58);
		HCVehicle_tD4C626176997767010D3E92648CED7AA2AFADAE1 * L_59;
		L_59 = GameObject_GetComponent_TisHCVehicle_tD4C626176997767010D3E92648CED7AA2AFADAE1_m861D98AECF4FCD810F00C20CDC7FD51A9A20986C(L_58, /*hidden argument*/GameObject_GetComponent_TisHCVehicle_tD4C626176997767010D3E92648CED7AA2AFADAE1_m861D98AECF4FCD810F00C20CDC7FD51A9A20986C_RuntimeMethod_var);
		HCVehicle_tD4C626176997767010D3E92648CED7AA2AFADAE1 * L_60 = L_59;
		NullCheck(L_60);
		float L_61 = L_60->get_CarSpeed_4();
		HCTraffic_t1CEB8C258DECA919DFD60C350B3D04680E06CC02 * L_62 = __this->get_U3CU3E4__this_3();
		NullCheck(L_62);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_63 = L_62->get_CarSpeedVariations_14();
		int32_t L_64 = __this->get_U3Ck0U3E5__1_4();
		NullCheck(L_63);
		int32_t L_65 = L_64;
		float L_66 = (L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_65));
		NullCheck(L_60);
		L_60->set_CarSpeed_4(((float)il2cpp_codegen_add((float)L_61, (float)L_66)));
		goto IL_01b6;
	}

IL_019c:
	{
		// Debug.Log(" <color=yellow> Wrong vehicle! 'HCVehicle' script is required </color>");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralFEBAFD123827314D891E242058D1A1D88D39E29E, /*hidden argument*/NULL);
		// locked = true;
		HCTraffic_t1CEB8C258DECA919DFD60C350B3D04680E06CC02 * L_67 = __this->get_U3CU3E4__this_3();
		NullCheck(L_67);
		L_67->set_locked_13((bool)1);
		// break;
		goto IL_0227;
	}

IL_01b6:
	{
		// obj.transform.parent = VehicleContainer.transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_68 = __this->get_U3CobjU3E5__2_5();
		NullCheck(L_68);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_69;
		L_69 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_68, /*hidden argument*/NULL);
		HCTraffic_t1CEB8C258DECA919DFD60C350B3D04680E06CC02 * L_70 = __this->get_U3CU3E4__this_3();
		NullCheck(L_70);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_71 = L_70->get_VehicleContainer_15();
		NullCheck(L_71);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_72;
		L_72 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_71, /*hidden argument*/NULL);
		NullCheck(L_69);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_69, L_72, /*hidden argument*/NULL);
		// VehicleCount++;
		HCTraffic_t1CEB8C258DECA919DFD60C350B3D04680E06CC02 * L_73 = __this->get_U3CU3E4__this_3();
		HCTraffic_t1CEB8C258DECA919DFD60C350B3D04680E06CC02 * L_74 = __this->get_U3CU3E4__this_3();
		NullCheck(L_74);
		int32_t L_75 = L_74->get_VehicleCount_11();
		NullCheck(L_73);
		L_73->set_VehicleCount_11(((int32_t)il2cpp_codegen_add((int32_t)L_75, (int32_t)1)));
		__this->set_U3CobjU3E5__2_5((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)NULL);
		// for (int k0 = 0; k0 < SpawnPoints.Length; k0++)
		int32_t L_76 = __this->get_U3Ck0U3E5__1_4();
		V_4 = L_76;
		int32_t L_77 = V_4;
		__this->set_U3Ck0U3E5__1_4(((int32_t)il2cpp_codegen_add((int32_t)L_77, (int32_t)1)));
	}

IL_0209:
	{
		// for (int k0 = 0; k0 < SpawnPoints.Length; k0++)
		int32_t L_78 = __this->get_U3Ck0U3E5__1_4();
		HCTraffic_t1CEB8C258DECA919DFD60C350B3D04680E06CC02 * L_79 = __this->get_U3CU3E4__this_3();
		NullCheck(L_79);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_80 = L_79->get_SpawnPoints_12();
		NullCheck(L_80);
		V_5 = (bool)((((int32_t)L_78) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_80)->max_length)))))? 1 : 0);
		bool L_81 = V_5;
		if (L_81)
		{
			goto IL_0083;
		}
	}

IL_0227:
	{
	}

IL_0228:
	{
		// StartCoroutine(SpawnInterval(Random.Range(MinSpawnInterval, MaxSpawnInterval)));
		HCTraffic_t1CEB8C258DECA919DFD60C350B3D04680E06CC02 * L_82 = __this->get_U3CU3E4__this_3();
		HCTraffic_t1CEB8C258DECA919DFD60C350B3D04680E06CC02 * L_83 = __this->get_U3CU3E4__this_3();
		HCTraffic_t1CEB8C258DECA919DFD60C350B3D04680E06CC02 * L_84 = __this->get_U3CU3E4__this_3();
		NullCheck(L_84);
		float L_85 = L_84->get_MinSpawnInterval_5();
		HCTraffic_t1CEB8C258DECA919DFD60C350B3D04680E06CC02 * L_86 = __this->get_U3CU3E4__this_3();
		NullCheck(L_86);
		float L_87 = L_86->get_MaxSpawnInterval_6();
		float L_88;
		L_88 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(L_85, L_87, /*hidden argument*/NULL);
		NullCheck(L_83);
		RuntimeObject* L_89;
		L_89 = HCTraffic_SpawnInterval_mCA8DD7062BD3753DF1E0EE4BBFA32F7ED4782722(L_83, L_88, /*hidden argument*/NULL);
		NullCheck(L_82);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_90;
		L_90 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(L_82, L_89, /*hidden argument*/NULL);
	}

IL_025b:
	{
		// }
		return (bool)0;
	}
}
// System.Object HCTraffic/<SpawnInterval>d__15::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSpawnIntervalU3Ed__15_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m2FAEA7BC24C53767CF1B91AC40DB9C208F26EEAE (U3CSpawnIntervalU3Ed__15_tFF276102F52D81BEBF574FB151E15CBCAC9EC109 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void HCTraffic/<SpawnInterval>d__15::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnIntervalU3Ed__15_System_Collections_IEnumerator_Reset_m5484963831F860BD947C482F5C103D3F1CD78383 (U3CSpawnIntervalU3Ed__15_tFF276102F52D81BEBF574FB151E15CBCAC9EC109 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSpawnIntervalU3Ed__15_System_Collections_IEnumerator_Reset_m5484963831F860BD947C482F5C103D3F1CD78383_RuntimeMethod_var)));
	}
}
// System.Object HCTraffic/<SpawnInterval>d__15::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSpawnIntervalU3Ed__15_System_Collections_IEnumerator_get_Current_m16B9F4482468C8C6FEF239396671ECEEF7672A88 (U3CSpawnIntervalU3Ed__15_tFF276102F52D81BEBF574FB151E15CBCAC9EC109 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MeshCombiner/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mA064A116AE9D5AFF5D3180F3DDA35EE843E6D06F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tC607834D420DED2B2B095D41BAB8005F418C3722_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tC607834D420DED2B2B095D41BAB8005F418C3722 * L_0 = (U3CU3Ec_tC607834D420DED2B2B095D41BAB8005F418C3722 *)il2cpp_codegen_object_new(U3CU3Ec_tC607834D420DED2B2B095D41BAB8005F418C3722_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m92943B6FDBCF5BB35117AF45865D1E4BAFFBDA9F(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tC607834D420DED2B2B095D41BAB8005F418C3722_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC607834D420DED2B2B095D41BAB8005F418C3722_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void MeshCombiner/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m92943B6FDBCF5BB35117AF45865D1E4BAFFBDA9F (U3CU3Ec_tC607834D420DED2B2B095D41BAB8005F418C3722 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean MeshCombiner/<>c::<GetMeshFiltersToCombine>b__33_1(UnityEngine.MeshFilter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CGetMeshFiltersToCombineU3Eb__33_1_m9330A19419806D557A51C004767734F45BB225F7 (U3CU3Ec_tC607834D420DED2B2B095D41BAB8005F418C3722 * __this, MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * ___meshFilter0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// meshFiltersToSkip = meshFiltersToSkip.Where((meshFilter) => meshFilter != null).ToArray();
		MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * L_0 = ___meshFilter0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MeshCombiner/<>c__DisplayClass33_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass33_0__ctor_m4FF5AAE6916D1387510E64676EAB39A53DC18014 (U3CU3Ec__DisplayClass33_0_t625D1FF1495408366D10B041997D39A1E07A4B4C * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean MeshCombiner/<>c__DisplayClass33_0::<GetMeshFiltersToCombine>b__0(UnityEngine.MeshFilter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass33_0_U3CGetMeshFiltersToCombineU3Eb__0_m257ED5A742B494F6E5C12C847B723D84583EF17D (U3CU3Ec__DisplayClass33_0_t625D1FF1495408366D10B041997D39A1E07A4B4C * __this, MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * ___meshFilter0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// meshFiltersToSkip = meshFiltersToSkip.Where((meshFilter) => meshFilter != meshFilters[0]).ToArray();
		MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * L_0 = ___meshFilter0;
		MeshFilterU5BU5D_tE8AA77783A24784C69A8083B4F3E482D866FD503* L_1 = __this->get_meshFilters_0();
		NullCheck(L_1);
		int32_t L_2 = 0;
		MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MeshCombiner/<>c__DisplayClass33_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass33_1__ctor_mF255176B1E0ED28C4A103DB0A66071354CA13A93 (U3CU3Ec__DisplayClass33_1_t47917A8CA5B35A825FA0802DA1F60C2FB0051AE3 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean MeshCombiner/<>c__DisplayClass33_1::<GetMeshFiltersToCombine>b__2(UnityEngine.MeshFilter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass33_1_U3CGetMeshFiltersToCombineU3Eb__2_m499A70231221E766848D5EB60BB711481249796A (U3CU3Ec__DisplayClass33_1_t47917A8CA5B35A825FA0802DA1F60C2FB0051AE3 * __this, MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * ___meshFilter0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// meshFilters = meshFilters.Where((meshFilter) => meshFilter != meshFiltersToSkip[i]).ToArray();
		MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * L_0 = ___meshFilter0;
		U3CU3Ec__DisplayClass33_0_t625D1FF1495408366D10B041997D39A1E07A4B4C * L_1 = __this->get_CSU24U3CU3E8__locals1_1();
		NullCheck(L_1);
		MeshCombiner_t2CD8003020EE4332F6A85F814B7876EE79DE1C05 * L_2 = L_1->get_U3CU3E4__this_1();
		NullCheck(L_2);
		MeshFilterU5BU5D_tE8AA77783A24784C69A8083B4F3E482D866FD503* L_3 = L_2->get_meshFiltersToSkip_12();
		int32_t L_4 = __this->get_i_0();
		NullCheck(L_3);
		int32_t L_5 = L_4;
		MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), ((float)il2cpp_codegen_subtract((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), ((float)il2cpp_codegen_add((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___a0;
		float L_3 = L_2.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_6), ((-L_1)), ((-L_3)), ((-L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m32EAB7C20FE929AB4D52FE42710A40B827F4EE31_gshared_inline (List_1_t6B1E95FA5DF30925360D5903D54D1063F95AFFEF * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
