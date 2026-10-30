#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002BB858
// Address: 0x2bb858 - 0x2bbdc0
void sub_002BB858_0x2bb858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BB858_0x2bb858");
#endif

    switch (ctx->pc) {
        case 0x2bb858u: goto label_2bb858;
        case 0x2bb85cu: goto label_2bb85c;
        case 0x2bb860u: goto label_2bb860;
        case 0x2bb864u: goto label_2bb864;
        case 0x2bb868u: goto label_2bb868;
        case 0x2bb86cu: goto label_2bb86c;
        case 0x2bb870u: goto label_2bb870;
        case 0x2bb874u: goto label_2bb874;
        case 0x2bb878u: goto label_2bb878;
        case 0x2bb87cu: goto label_2bb87c;
        case 0x2bb880u: goto label_2bb880;
        case 0x2bb884u: goto label_2bb884;
        case 0x2bb888u: goto label_2bb888;
        case 0x2bb88cu: goto label_2bb88c;
        case 0x2bb890u: goto label_2bb890;
        case 0x2bb894u: goto label_2bb894;
        case 0x2bb898u: goto label_2bb898;
        case 0x2bb89cu: goto label_2bb89c;
        case 0x2bb8a0u: goto label_2bb8a0;
        case 0x2bb8a4u: goto label_2bb8a4;
        case 0x2bb8a8u: goto label_2bb8a8;
        case 0x2bb8acu: goto label_2bb8ac;
        case 0x2bb8b0u: goto label_2bb8b0;
        case 0x2bb8b4u: goto label_2bb8b4;
        case 0x2bb8b8u: goto label_2bb8b8;
        case 0x2bb8bcu: goto label_2bb8bc;
        case 0x2bb8c0u: goto label_2bb8c0;
        case 0x2bb8c4u: goto label_2bb8c4;
        case 0x2bb8c8u: goto label_2bb8c8;
        case 0x2bb8ccu: goto label_2bb8cc;
        case 0x2bb8d0u: goto label_2bb8d0;
        case 0x2bb8d4u: goto label_2bb8d4;
        case 0x2bb8d8u: goto label_2bb8d8;
        case 0x2bb8dcu: goto label_2bb8dc;
        case 0x2bb8e0u: goto label_2bb8e0;
        case 0x2bb8e4u: goto label_2bb8e4;
        case 0x2bb8e8u: goto label_2bb8e8;
        case 0x2bb8ecu: goto label_2bb8ec;
        case 0x2bb8f0u: goto label_2bb8f0;
        case 0x2bb8f4u: goto label_2bb8f4;
        case 0x2bb8f8u: goto label_2bb8f8;
        case 0x2bb8fcu: goto label_2bb8fc;
        case 0x2bb900u: goto label_2bb900;
        case 0x2bb904u: goto label_2bb904;
        case 0x2bb908u: goto label_2bb908;
        case 0x2bb90cu: goto label_2bb90c;
        case 0x2bb910u: goto label_2bb910;
        case 0x2bb914u: goto label_2bb914;
        case 0x2bb918u: goto label_2bb918;
        case 0x2bb91cu: goto label_2bb91c;
        case 0x2bb920u: goto label_2bb920;
        case 0x2bb924u: goto label_2bb924;
        case 0x2bb928u: goto label_2bb928;
        case 0x2bb92cu: goto label_2bb92c;
        case 0x2bb930u: goto label_2bb930;
        case 0x2bb934u: goto label_2bb934;
        case 0x2bb938u: goto label_2bb938;
        case 0x2bb93cu: goto label_2bb93c;
        case 0x2bb940u: goto label_2bb940;
        case 0x2bb944u: goto label_2bb944;
        case 0x2bb948u: goto label_2bb948;
        case 0x2bb94cu: goto label_2bb94c;
        case 0x2bb950u: goto label_2bb950;
        case 0x2bb954u: goto label_2bb954;
        case 0x2bb958u: goto label_2bb958;
        case 0x2bb95cu: goto label_2bb95c;
        case 0x2bb960u: goto label_2bb960;
        case 0x2bb964u: goto label_2bb964;
        case 0x2bb968u: goto label_2bb968;
        case 0x2bb96cu: goto label_2bb96c;
        case 0x2bb970u: goto label_2bb970;
        case 0x2bb974u: goto label_2bb974;
        case 0x2bb978u: goto label_2bb978;
        case 0x2bb97cu: goto label_2bb97c;
        case 0x2bb980u: goto label_2bb980;
        case 0x2bb984u: goto label_2bb984;
        case 0x2bb988u: goto label_2bb988;
        case 0x2bb98cu: goto label_2bb98c;
        case 0x2bb990u: goto label_2bb990;
        case 0x2bb994u: goto label_2bb994;
        case 0x2bb998u: goto label_2bb998;
        case 0x2bb99cu: goto label_2bb99c;
        case 0x2bb9a0u: goto label_2bb9a0;
        case 0x2bb9a4u: goto label_2bb9a4;
        case 0x2bb9a8u: goto label_2bb9a8;
        case 0x2bb9acu: goto label_2bb9ac;
        case 0x2bb9b0u: goto label_2bb9b0;
        case 0x2bb9b4u: goto label_2bb9b4;
        case 0x2bb9b8u: goto label_2bb9b8;
        case 0x2bb9bcu: goto label_2bb9bc;
        case 0x2bb9c0u: goto label_2bb9c0;
        case 0x2bb9c4u: goto label_2bb9c4;
        case 0x2bb9c8u: goto label_2bb9c8;
        case 0x2bb9ccu: goto label_2bb9cc;
        case 0x2bb9d0u: goto label_2bb9d0;
        case 0x2bb9d4u: goto label_2bb9d4;
        case 0x2bb9d8u: goto label_2bb9d8;
        case 0x2bb9dcu: goto label_2bb9dc;
        case 0x2bb9e0u: goto label_2bb9e0;
        case 0x2bb9e4u: goto label_2bb9e4;
        case 0x2bb9e8u: goto label_2bb9e8;
        case 0x2bb9ecu: goto label_2bb9ec;
        case 0x2bb9f0u: goto label_2bb9f0;
        case 0x2bb9f4u: goto label_2bb9f4;
        case 0x2bb9f8u: goto label_2bb9f8;
        case 0x2bb9fcu: goto label_2bb9fc;
        case 0x2bba00u: goto label_2bba00;
        case 0x2bba04u: goto label_2bba04;
        case 0x2bba08u: goto label_2bba08;
        case 0x2bba0cu: goto label_2bba0c;
        case 0x2bba10u: goto label_2bba10;
        case 0x2bba14u: goto label_2bba14;
        case 0x2bba18u: goto label_2bba18;
        case 0x2bba1cu: goto label_2bba1c;
        case 0x2bba20u: goto label_2bba20;
        case 0x2bba24u: goto label_2bba24;
        case 0x2bba28u: goto label_2bba28;
        case 0x2bba2cu: goto label_2bba2c;
        case 0x2bba30u: goto label_2bba30;
        case 0x2bba34u: goto label_2bba34;
        case 0x2bba38u: goto label_2bba38;
        case 0x2bba3cu: goto label_2bba3c;
        case 0x2bba40u: goto label_2bba40;
        case 0x2bba44u: goto label_2bba44;
        case 0x2bba48u: goto label_2bba48;
        case 0x2bba4cu: goto label_2bba4c;
        case 0x2bba50u: goto label_2bba50;
        case 0x2bba54u: goto label_2bba54;
        case 0x2bba58u: goto label_2bba58;
        case 0x2bba5cu: goto label_2bba5c;
        case 0x2bba60u: goto label_2bba60;
        case 0x2bba64u: goto label_2bba64;
        case 0x2bba68u: goto label_2bba68;
        case 0x2bba6cu: goto label_2bba6c;
        case 0x2bba70u: goto label_2bba70;
        case 0x2bba74u: goto label_2bba74;
        case 0x2bba78u: goto label_2bba78;
        case 0x2bba7cu: goto label_2bba7c;
        case 0x2bba80u: goto label_2bba80;
        case 0x2bba84u: goto label_2bba84;
        case 0x2bba88u: goto label_2bba88;
        case 0x2bba8cu: goto label_2bba8c;
        case 0x2bba90u: goto label_2bba90;
        case 0x2bba94u: goto label_2bba94;
        case 0x2bba98u: goto label_2bba98;
        case 0x2bba9cu: goto label_2bba9c;
        case 0x2bbaa0u: goto label_2bbaa0;
        case 0x2bbaa4u: goto label_2bbaa4;
        case 0x2bbaa8u: goto label_2bbaa8;
        case 0x2bbaacu: goto label_2bbaac;
        case 0x2bbab0u: goto label_2bbab0;
        case 0x2bbab4u: goto label_2bbab4;
        case 0x2bbab8u: goto label_2bbab8;
        case 0x2bbabcu: goto label_2bbabc;
        case 0x2bbac0u: goto label_2bbac0;
        case 0x2bbac4u: goto label_2bbac4;
        case 0x2bbac8u: goto label_2bbac8;
        case 0x2bbaccu: goto label_2bbacc;
        case 0x2bbad0u: goto label_2bbad0;
        case 0x2bbad4u: goto label_2bbad4;
        case 0x2bbad8u: goto label_2bbad8;
        case 0x2bbadcu: goto label_2bbadc;
        case 0x2bbae0u: goto label_2bbae0;
        case 0x2bbae4u: goto label_2bbae4;
        case 0x2bbae8u: goto label_2bbae8;
        case 0x2bbaecu: goto label_2bbaec;
        case 0x2bbaf0u: goto label_2bbaf0;
        case 0x2bbaf4u: goto label_2bbaf4;
        case 0x2bbaf8u: goto label_2bbaf8;
        case 0x2bbafcu: goto label_2bbafc;
        case 0x2bbb00u: goto label_2bbb00;
        case 0x2bbb04u: goto label_2bbb04;
        case 0x2bbb08u: goto label_2bbb08;
        case 0x2bbb0cu: goto label_2bbb0c;
        case 0x2bbb10u: goto label_2bbb10;
        case 0x2bbb14u: goto label_2bbb14;
        case 0x2bbb18u: goto label_2bbb18;
        case 0x2bbb1cu: goto label_2bbb1c;
        case 0x2bbb20u: goto label_2bbb20;
        case 0x2bbb24u: goto label_2bbb24;
        case 0x2bbb28u: goto label_2bbb28;
        case 0x2bbb2cu: goto label_2bbb2c;
        case 0x2bbb30u: goto label_2bbb30;
        case 0x2bbb34u: goto label_2bbb34;
        case 0x2bbb38u: goto label_2bbb38;
        case 0x2bbb3cu: goto label_2bbb3c;
        case 0x2bbb40u: goto label_2bbb40;
        case 0x2bbb44u: goto label_2bbb44;
        case 0x2bbb48u: goto label_2bbb48;
        case 0x2bbb4cu: goto label_2bbb4c;
        case 0x2bbb50u: goto label_2bbb50;
        case 0x2bbb54u: goto label_2bbb54;
        case 0x2bbb58u: goto label_2bbb58;
        case 0x2bbb5cu: goto label_2bbb5c;
        case 0x2bbb60u: goto label_2bbb60;
        case 0x2bbb64u: goto label_2bbb64;
        case 0x2bbb68u: goto label_2bbb68;
        case 0x2bbb6cu: goto label_2bbb6c;
        case 0x2bbb70u: goto label_2bbb70;
        case 0x2bbb74u: goto label_2bbb74;
        case 0x2bbb78u: goto label_2bbb78;
        case 0x2bbb7cu: goto label_2bbb7c;
        case 0x2bbb80u: goto label_2bbb80;
        case 0x2bbb84u: goto label_2bbb84;
        case 0x2bbb88u: goto label_2bbb88;
        case 0x2bbb8cu: goto label_2bbb8c;
        case 0x2bbb90u: goto label_2bbb90;
        case 0x2bbb94u: goto label_2bbb94;
        case 0x2bbb98u: goto label_2bbb98;
        case 0x2bbb9cu: goto label_2bbb9c;
        case 0x2bbba0u: goto label_2bbba0;
        case 0x2bbba4u: goto label_2bbba4;
        case 0x2bbba8u: goto label_2bbba8;
        case 0x2bbbacu: goto label_2bbbac;
        case 0x2bbbb0u: goto label_2bbbb0;
        case 0x2bbbb4u: goto label_2bbbb4;
        case 0x2bbbb8u: goto label_2bbbb8;
        case 0x2bbbbcu: goto label_2bbbbc;
        case 0x2bbbc0u: goto label_2bbbc0;
        case 0x2bbbc4u: goto label_2bbbc4;
        case 0x2bbbc8u: goto label_2bbbc8;
        case 0x2bbbccu: goto label_2bbbcc;
        case 0x2bbbd0u: goto label_2bbbd0;
        case 0x2bbbd4u: goto label_2bbbd4;
        case 0x2bbbd8u: goto label_2bbbd8;
        case 0x2bbbdcu: goto label_2bbbdc;
        case 0x2bbbe0u: goto label_2bbbe0;
        case 0x2bbbe4u: goto label_2bbbe4;
        case 0x2bbbe8u: goto label_2bbbe8;
        case 0x2bbbecu: goto label_2bbbec;
        case 0x2bbbf0u: goto label_2bbbf0;
        case 0x2bbbf4u: goto label_2bbbf4;
        case 0x2bbbf8u: goto label_2bbbf8;
        case 0x2bbbfcu: goto label_2bbbfc;
        case 0x2bbc00u: goto label_2bbc00;
        case 0x2bbc04u: goto label_2bbc04;
        case 0x2bbc08u: goto label_2bbc08;
        case 0x2bbc0cu: goto label_2bbc0c;
        case 0x2bbc10u: goto label_2bbc10;
        case 0x2bbc14u: goto label_2bbc14;
        case 0x2bbc18u: goto label_2bbc18;
        case 0x2bbc1cu: goto label_2bbc1c;
        case 0x2bbc20u: goto label_2bbc20;
        case 0x2bbc24u: goto label_2bbc24;
        case 0x2bbc28u: goto label_2bbc28;
        case 0x2bbc2cu: goto label_2bbc2c;
        case 0x2bbc30u: goto label_2bbc30;
        case 0x2bbc34u: goto label_2bbc34;
        case 0x2bbc38u: goto label_2bbc38;
        case 0x2bbc3cu: goto label_2bbc3c;
        case 0x2bbc40u: goto label_2bbc40;
        case 0x2bbc44u: goto label_2bbc44;
        case 0x2bbc48u: goto label_2bbc48;
        case 0x2bbc4cu: goto label_2bbc4c;
        case 0x2bbc50u: goto label_2bbc50;
        case 0x2bbc54u: goto label_2bbc54;
        case 0x2bbc58u: goto label_2bbc58;
        case 0x2bbc5cu: goto label_2bbc5c;
        case 0x2bbc60u: goto label_2bbc60;
        case 0x2bbc64u: goto label_2bbc64;
        case 0x2bbc68u: goto label_2bbc68;
        case 0x2bbc6cu: goto label_2bbc6c;
        case 0x2bbc70u: goto label_2bbc70;
        case 0x2bbc74u: goto label_2bbc74;
        case 0x2bbc78u: goto label_2bbc78;
        case 0x2bbc7cu: goto label_2bbc7c;
        case 0x2bbc80u: goto label_2bbc80;
        case 0x2bbc84u: goto label_2bbc84;
        case 0x2bbc88u: goto label_2bbc88;
        case 0x2bbc8cu: goto label_2bbc8c;
        case 0x2bbc90u: goto label_2bbc90;
        case 0x2bbc94u: goto label_2bbc94;
        case 0x2bbc98u: goto label_2bbc98;
        case 0x2bbc9cu: goto label_2bbc9c;
        case 0x2bbca0u: goto label_2bbca0;
        case 0x2bbca4u: goto label_2bbca4;
        case 0x2bbca8u: goto label_2bbca8;
        case 0x2bbcacu: goto label_2bbcac;
        case 0x2bbcb0u: goto label_2bbcb0;
        case 0x2bbcb4u: goto label_2bbcb4;
        case 0x2bbcb8u: goto label_2bbcb8;
        case 0x2bbcbcu: goto label_2bbcbc;
        case 0x2bbcc0u: goto label_2bbcc0;
        case 0x2bbcc4u: goto label_2bbcc4;
        case 0x2bbcc8u: goto label_2bbcc8;
        case 0x2bbcccu: goto label_2bbccc;
        case 0x2bbcd0u: goto label_2bbcd0;
        case 0x2bbcd4u: goto label_2bbcd4;
        case 0x2bbcd8u: goto label_2bbcd8;
        case 0x2bbcdcu: goto label_2bbcdc;
        case 0x2bbce0u: goto label_2bbce0;
        case 0x2bbce4u: goto label_2bbce4;
        case 0x2bbce8u: goto label_2bbce8;
        case 0x2bbcecu: goto label_2bbcec;
        case 0x2bbcf0u: goto label_2bbcf0;
        case 0x2bbcf4u: goto label_2bbcf4;
        case 0x2bbcf8u: goto label_2bbcf8;
        case 0x2bbcfcu: goto label_2bbcfc;
        case 0x2bbd00u: goto label_2bbd00;
        case 0x2bbd04u: goto label_2bbd04;
        case 0x2bbd08u: goto label_2bbd08;
        case 0x2bbd0cu: goto label_2bbd0c;
        case 0x2bbd10u: goto label_2bbd10;
        case 0x2bbd14u: goto label_2bbd14;
        case 0x2bbd18u: goto label_2bbd18;
        case 0x2bbd1cu: goto label_2bbd1c;
        case 0x2bbd20u: goto label_2bbd20;
        case 0x2bbd24u: goto label_2bbd24;
        case 0x2bbd28u: goto label_2bbd28;
        case 0x2bbd2cu: goto label_2bbd2c;
        case 0x2bbd30u: goto label_2bbd30;
        case 0x2bbd34u: goto label_2bbd34;
        case 0x2bbd38u: goto label_2bbd38;
        case 0x2bbd3cu: goto label_2bbd3c;
        case 0x2bbd40u: goto label_2bbd40;
        case 0x2bbd44u: goto label_2bbd44;
        case 0x2bbd48u: goto label_2bbd48;
        case 0x2bbd4cu: goto label_2bbd4c;
        case 0x2bbd50u: goto label_2bbd50;
        case 0x2bbd54u: goto label_2bbd54;
        case 0x2bbd58u: goto label_2bbd58;
        case 0x2bbd5cu: goto label_2bbd5c;
        case 0x2bbd60u: goto label_2bbd60;
        case 0x2bbd64u: goto label_2bbd64;
        case 0x2bbd68u: goto label_2bbd68;
        case 0x2bbd6cu: goto label_2bbd6c;
        case 0x2bbd70u: goto label_2bbd70;
        case 0x2bbd74u: goto label_2bbd74;
        case 0x2bbd78u: goto label_2bbd78;
        case 0x2bbd7cu: goto label_2bbd7c;
        case 0x2bbd80u: goto label_2bbd80;
        case 0x2bbd84u: goto label_2bbd84;
        case 0x2bbd88u: goto label_2bbd88;
        case 0x2bbd8cu: goto label_2bbd8c;
        case 0x2bbd90u: goto label_2bbd90;
        case 0x2bbd94u: goto label_2bbd94;
        case 0x2bbd98u: goto label_2bbd98;
        case 0x2bbd9cu: goto label_2bbd9c;
        case 0x2bbda0u: goto label_2bbda0;
        case 0x2bbda4u: goto label_2bbda4;
        case 0x2bbda8u: goto label_2bbda8;
        case 0x2bbdacu: goto label_2bbdac;
        case 0x2bbdb0u: goto label_2bbdb0;
        case 0x2bbdb4u: goto label_2bbdb4;
        case 0x2bbdb8u: goto label_2bbdb8;
        case 0x2bbdbcu: goto label_2bbdbc;
        default: break;
    }

    ctx->pc = 0x2bb858u;

label_2bb858:
    // 0x2bb858: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2bb858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_2bb85c:
    // 0x2bb85c: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x2bb85cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_2bb860:
    // 0x2bb860: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x2bb860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_2bb864:
    // 0x2bb864: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2bb864u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2bb868:
    // 0x2bb868: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x2bb868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_2bb86c:
    // 0x2bb86c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2bb86cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2bb870:
    // 0x2bb870: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x2bb870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_2bb874:
    // 0x2bb874: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2bb874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2bb878:
    // 0x2bb878: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2bb878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2bb87c:
    // 0x2bb87c: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x2bb87cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_2bb880:
    // 0x2bb880: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x2bb880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_2bb884:
    // 0x2bb884: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2bb884u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bb888:
    // 0x2bb888: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x2bb888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2bb88c:
    // 0x2bb88c: 0x8e120000  lw          $s2, 0x0($s0)
    ctx->pc = 0x2bb88cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2bb890:
    // 0x2bb890: 0xc0e409a  jal         func_390268
label_2bb894:
    if (ctx->pc == 0x2BB894u) {
        ctx->pc = 0x2BB894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB890u;
        // 0x2bb894: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB898u;
        goto label_2bb898;
    }
    ctx->pc = 0x2BB890u;
    SET_GPR_U32(ctx, 31, 0x2BB898u);
    ctx->pc = 0x2BB894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB890u;
    // 0x2bb894: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2BB890u, 0x2BB898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB898u;
label_2bb898:
    // 0x2bb898: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bb898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bb89c:
    // 0x2bb89c: 0xc0a34d6  jal         func_28D358
label_2bb8a0:
    if (ctx->pc == 0x2BB8A0u) {
        ctx->pc = 0x2BB8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB89Cu;
        // 0x2bb8a0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB8A4u;
        goto label_2bb8a4;
    }
    ctx->pc = 0x2BB89Cu;
    SET_GPR_U32(ctx, 31, 0x2BB8A4u);
    ctx->pc = 0x2BB8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB89Cu;
    // 0x2bb8a0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D358u, 0x2BB89Cu, 0x2BB8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB8A4u;
label_2bb8a4:
    // 0x2bb8a4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2bb8a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bb8a8:
    // 0x2bb8a8: 0x56600003  bnel        $s3, $zero, . + 4 + (0x3 << 2)
label_2bb8ac:
    if (ctx->pc == 0x2BB8ACu) {
        ctx->pc = 0x2BB8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB8A8u;
        // 0x2bb8ac: 0x92300016  lbu         $s0, 0x16($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 22)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB8B0u;
        goto label_2bb8b0;
    }
    ctx->pc = 0x2BB8A8u;
    {
        const bool branch_taken_0x2bb8a8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bb8a8) {
            ctx->pc = 0x2BB8ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BB8A8u;
            // 0x2bb8ac: 0x92300016  lbu         $s0, 0x16($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 22)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BB8B8u;
            goto label_2bb8b8;
        }
    }
    ctx->pc = 0x2BB8B0u;
label_2bb8b0:
    // 0x2bb8b0: 0x10000139  b           . + 4 + (0x139 << 2)
label_2bb8b4:
    if (ctx->pc == 0x2BB8B4u) {
        ctx->pc = 0x2BB8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB8B0u;
        // 0x2bb8b4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB8B8u;
        goto label_2bb8b8;
    }
    ctx->pc = 0x2BB8B0u;
    {
        const bool branch_taken_0x2bb8b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB8B0u;
        // 0x2bb8b4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb8b0) {
            ctx->pc = 0x2BBD98u;
            goto label_2bbd98;
        }
    }
    ctx->pc = 0x2BB8B8u;
label_2bb8b8:
    // 0x2bb8b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2bb8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bb8bc:
    // 0x2bb8bc: 0x5602000e  bnel        $s0, $v0, . + 4 + (0xE << 2)
label_2bb8c0:
    if (ctx->pc == 0x2BB8C0u) {
        ctx->pc = 0x2BB8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB8BCu;
        // 0x2bb8c0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB8C4u;
        goto label_2bb8c4;
    }
    ctx->pc = 0x2BB8BCu;
    {
        const bool branch_taken_0x2bb8bc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2bb8bc) {
            ctx->pc = 0x2BB8C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BB8BCu;
            // 0x2bb8c0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BB8F8u;
            goto label_2bb8f8;
        }
    }
    ctx->pc = 0x2BB8C4u;
label_2bb8c4:
    // 0x2bb8c4: 0xc0e409a  jal         func_390268
label_2bb8c8:
    if (ctx->pc == 0x2BB8C8u) {
        ctx->pc = 0x2BB8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB8C4u;
        // 0x2bb8c8: 0x266400c4  addiu       $a0, $s3, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 196));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB8CCu;
        goto label_2bb8cc;
    }
    ctx->pc = 0x2BB8C4u;
    SET_GPR_U32(ctx, 31, 0x2BB8CCu);
    ctx->pc = 0x2BB8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB8C4u;
    // 0x2bb8c8: 0x266400c4  addiu       $a0, $s3, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2BB8C4u, 0x2BB8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB8CCu;
label_2bb8cc:
    // 0x2bb8cc: 0x10520132  beq         $v0, $s2, . + 4 + (0x132 << 2)
label_2bb8d0:
    if (ctx->pc == 0x2BB8D0u) {
        ctx->pc = 0x2BB8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB8CCu;
        // 0x2bb8d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB8D4u;
        goto label_2bb8d4;
    }
    ctx->pc = 0x2BB8CCu;
    {
        const bool branch_taken_0x2bb8cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x2BB8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB8CCu;
        // 0x2bb8d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb8cc) {
            ctx->pc = 0x2BBD98u;
            goto label_2bbd98;
        }
    }
    ctx->pc = 0x2BB8D4u;
label_2bb8d4:
    // 0x2bb8d4: 0xc087502  jal         func_21D408
label_2bb8d8:
    if (ctx->pc == 0x2BB8D8u) {
        ctx->pc = 0x2BB8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB8D4u;
        // 0x2bb8d8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB8DCu;
        goto label_2bb8dc;
    }
    ctx->pc = 0x2BB8D4u;
    SET_GPR_U32(ctx, 31, 0x2BB8DCu);
    ctx->pc = 0x2BB8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB8D4u;
    // 0x2bb8d8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2BB8D4u, 0x2BB8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB8DCu;
label_2bb8dc:
    // 0x2bb8dc: 0xa050011f  sb          $s0, 0x11F($v0)
    ctx->pc = 0x2bb8dcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 287), (uint8_t)GPR_U32(ctx, 16));
label_2bb8e0:
    // 0x2bb8e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bb8e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2bb8e4:
    // 0x2bb8e4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2bb8e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2bb8e8:
    // 0x2bb8e8: 0xc0aed9a  jal         func_2BB668
label_2bb8ec:
    if (ctx->pc == 0x2BB8ECu) {
        ctx->pc = 0x2BB8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB8E8u;
        // 0x2bb8ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB8F0u;
        goto label_2bb8f0;
    }
    ctx->pc = 0x2BB8E8u;
    SET_GPR_U32(ctx, 31, 0x2BB8F0u);
    ctx->pc = 0x2BB8ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB8E8u;
    // 0x2bb8ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BB668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB668u, 0x2BB8E8u, 0x2BB8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB8F0u;
label_2bb8f0:
    // 0x2bb8f0: 0xa2200016  sb          $zero, 0x16($s1)
    ctx->pc = 0x2bb8f0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 22), (uint8_t)GPR_U32(ctx, 0));
label_2bb8f4:
    // 0x2bb8f4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2bb8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bb8f8:
    // 0x2bb8f8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2bb8f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2bb8fc:
    // 0x2bb8fc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2bb8fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bb900:
    // 0x2bb900: 0xc0a33f8  jal         func_28CFE0
label_2bb904:
    if (ctx->pc == 0x2BB904u) {
        ctx->pc = 0x2BB904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB900u;
        // 0x2bb904: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB908u;
        goto label_2bb908;
    }
    ctx->pc = 0x2BB900u;
    SET_GPR_U32(ctx, 31, 0x2BB908u);
    ctx->pc = 0x2BB904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB900u;
    // 0x2bb904: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CFE0u, 0x2BB900u, 0x2BB908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB908u;
label_2bb908:
    // 0x2bb908: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2bb908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bb90c:
    // 0x2bb90c: 0xc0e409a  jal         func_390268
label_2bb910:
    if (ctx->pc == 0x2BB910u) {
        ctx->pc = 0x2BB910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB90Cu;
        // 0x2bb910: 0x24840124  addiu       $a0, $a0, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB914u;
        goto label_2bb914;
    }
    ctx->pc = 0x2BB90Cu;
    SET_GPR_U32(ctx, 31, 0x2BB914u);
    ctx->pc = 0x2BB910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB90Cu;
    // 0x2bb910: 0x24840124  addiu       $a0, $a0, 0x124 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2BB90Cu, 0x2BB914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB914u;
label_2bb914:
    // 0x2bb914: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2bb914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bb918:
    // 0x2bb918: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2bb918u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bb91c:
    // 0x2bb91c: 0x8082002e  lb          $v0, 0x2E($a0)
    ctx->pc = 0x2bb91cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 46)));
label_2bb920:
    // 0x2bb920: 0x1c40011d  bgtz        $v0, . + 4 + (0x11D << 2)
label_2bb924:
    if (ctx->pc == 0x2BB924u) {
        ctx->pc = 0x2BB924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB920u;
        // 0x2bb924: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB928u;
        goto label_2bb928;
    }
    ctx->pc = 0x2BB920u;
    {
        const bool branch_taken_0x2bb920 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2BB924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB920u;
        // 0x2bb924: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb920) {
            ctx->pc = 0x2BBD98u;
            goto label_2bbd98;
        }
    }
    ctx->pc = 0x2BB928u;
label_2bb928:
    // 0x2bb928: 0xc0a3398  jal         func_28CE60
label_2bb92c:
    if (ctx->pc == 0x2BB92Cu) {
        ctx->pc = 0x2BB92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB928u;
        // 0x2bb92c: 0x8225001a  lb          $a1, 0x1A($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 26)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB930u;
        goto label_2bb930;
    }
    ctx->pc = 0x2BB928u;
    SET_GPR_U32(ctx, 31, 0x2BB930u);
    ctx->pc = 0x2BB92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB928u;
    // 0x2bb92c: 0x8225001a  lb          $a1, 0x1A($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 26)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CE60u, 0x2BB928u, 0x2BB930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB930u;
label_2bb930:
    // 0x2bb930: 0x1280010a  beqz        $s4, . + 4 + (0x10A << 2)
label_2bb934:
    if (ctx->pc == 0x2BB934u) {
        ctx->pc = 0x2BB934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB930u;
        // 0x2bb934: 0x26420090  addiu       $v0, $s2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB938u;
        goto label_2bb938;
    }
    ctx->pc = 0x2BB930u;
    {
        const bool branch_taken_0x2bb930 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB930u;
        // 0x2bb934: 0x26420090  addiu       $v0, $s2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb930) {
            ctx->pc = 0x2BBD5Cu;
            goto label_2bbd5c;
        }
    }
    ctx->pc = 0x2BB938u;
label_2bb938:
    // 0x2bb938: 0x3c050071  lui         $a1, 0x71
    ctx->pc = 0x2bb938u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)113 << 16));
label_2bb93c:
    // 0x2bb93c: 0x84430002  lh          $v1, 0x2($v0)
    ctx->pc = 0x2bb93cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_2bb940:
    // 0x2bb940: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2bb940u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2bb944:
    // 0x2bb944: 0x24a54b00  addiu       $a1, $a1, 0x4B00
    ctx->pc = 0x2bb944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19200));
label_2bb948:
    // 0x2bb948: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2bb948u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bb94c:
    // 0x2bb94c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2bb94cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2bb950:
    // 0x2bb950: 0x268400c4  addiu       $a0, $s4, 0xC4
    ctx->pc = 0x2bb950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 196));
label_2bb954:
    // 0x2bb954: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2bb954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2bb958:
    // 0x2bb958: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2bb958u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2bb95c:
    // 0x2bb95c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x2bb95cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_2bb960:
    // 0x2bb960: 0x86830092  lh          $v1, 0x92($s4)
    ctx->pc = 0x2bb960u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 146)));
label_2bb964:
    // 0x2bb964: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2bb964u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2bb968:
    // 0x2bb968: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2bb968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2bb96c:
    // 0x2bb96c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2bb96cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2bb970:
    // 0x2bb970: 0xc0e409a  jal         func_390268
label_2bb974:
    if (ctx->pc == 0x2BB974u) {
        ctx->pc = 0x2BB974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB970u;
        // 0x2bb974: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB978u;
        goto label_2bb978;
    }
    ctx->pc = 0x2BB970u;
    SET_GPR_U32(ctx, 31, 0x2BB978u);
    ctx->pc = 0x2BB974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB970u;
    // 0x2bb974: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2BB970u, 0x2BB978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB978u;
label_2bb978:
    // 0x2bb978: 0x10520064  beq         $v0, $s2, . + 4 + (0x64 << 2)
label_2bb97c:
    if (ctx->pc == 0x2BB97Cu) {
        ctx->pc = 0x2BB97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB978u;
        // 0x2bb97c: 0x3c030400  lui         $v1, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB980u;
        goto label_2bb980;
    }
    ctx->pc = 0x2BB978u;
    {
        const bool branch_taken_0x2bb978 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x2BB97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB978u;
        // 0x2bb97c: 0x3c030400  lui         $v1, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb978) {
            ctx->pc = 0x2BBB0Cu;
            goto label_2bbb0c;
        }
    }
    ctx->pc = 0x2BB980u;
label_2bb980:
    // 0x2bb980: 0xde4200e0  ld          $v0, 0xE0($s2)
    ctx->pc = 0x2bb980u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 224)));
label_2bb984:
    // 0x2bb984: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2bb984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2bb988:
    // 0x2bb988: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2bb988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2bb98c:
    // 0x2bb98c: 0xc088d00  jal         func_223400
label_2bb990:
    if (ctx->pc == 0x2BB990u) {
        ctx->pc = 0x2BB990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB98Cu;
        // 0x2bb990: 0xfe4200e0  sd          $v0, 0xE0($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 224), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB994u;
        goto label_2bb994;
    }
    ctx->pc = 0x2BB98Cu;
    SET_GPR_U32(ctx, 31, 0x2BB994u);
    ctx->pc = 0x2BB990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB98Cu;
    // 0x2bb990: 0xfe4200e0  sd          $v0, 0xE0($s2) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 18), 224), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223400u, 0x2BB98Cu, 0x2BB994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB994u;
label_2bb994:
    // 0x2bb994: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2bb994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2bb998:
    // 0x2bb998: 0xc0cdb38  jal         func_336CE0
label_2bb99c:
    if (ctx->pc == 0x2BB99Cu) {
        ctx->pc = 0x2BB99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB998u;
        // 0x2bb99c: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB9A0u;
        goto label_2bb9a0;
    }
    ctx->pc = 0x2BB998u;
    SET_GPR_U32(ctx, 31, 0x2BB9A0u);
    ctx->pc = 0x2BB99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB998u;
    // 0x2bb99c: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2BB998u, 0x2BB9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB9A0u;
label_2bb9a0:
    // 0x2bb9a0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2bb9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bb9a4:
    // 0x2bb9a4: 0x3c013f8c  lui         $at, 0x3F8C
    ctx->pc = 0x2bb9a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16268 << 16));
label_2bb9a8:
    // 0x2bb9a8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2bb9a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2bb9ac:
    // 0x2bb9ac: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2bb9acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2bb9b0:
    // 0x2bb9b0: 0xc4410140  lwc1        $f1, 0x140($v0)
    ctx->pc = 0x2bb9b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2bb9b4:
    // 0x2bb9b4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2bb9b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_2bb9b8:
    // 0x2bb9b8: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2bb9b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_2bb9bc:
    // 0x2bb9bc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2bb9bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2bb9c0:
    // 0x2bb9c0: 0x0  nop
    ctx->pc = 0x2bb9c0u;
    // NOP
label_2bb9c4:
    // 0x2bb9c4: 0x45010008  bc1t        . + 4 + (0x8 << 2)
label_2bb9c8:
    if (ctx->pc == 0x2BB9C8u) {
        ctx->pc = 0x2BB9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB9C4u;
        // 0x2bb9c8: 0xafb00034  sw          $s0, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB9CCu;
        goto label_2bb9cc;
    }
    ctx->pc = 0x2BB9C4u;
    {
        const bool branch_taken_0x2bb9c4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BB9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB9C4u;
        // 0x2bb9c8: 0xafb00034  sw          $s0, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb9c4) {
            ctx->pc = 0x2BB9E8u;
            goto label_2bb9e8;
        }
    }
    ctx->pc = 0x2BB9CCu;
label_2bb9cc:
    // 0x2bb9cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2bb9ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2bb9d0:
    // 0x2bb9d0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2bb9d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2bb9d4:
    // 0x2bb9d4: 0x27a60034  addiu       $a2, $sp, 0x34
    ctx->pc = 0x2bb9d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
label_2bb9d8:
    // 0x2bb9d8: 0xc0888a2  jal         func_222288
label_2bb9dc:
    if (ctx->pc == 0x2BB9DCu) {
        ctx->pc = 0x2BB9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB9D8u;
        // 0x2bb9dc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB9E0u;
        goto label_2bb9e0;
    }
    ctx->pc = 0x2BB9D8u;
    SET_GPR_U32(ctx, 31, 0x2BB9E0u);
    ctx->pc = 0x2BB9DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB9D8u;
    // 0x2bb9dc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222288u, 0x2BB9D8u, 0x2BB9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB9E0u;
label_2bb9e0:
    // 0x2bb9e0: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
label_2bb9e4:
    if (ctx->pc == 0x2BB9E4u) {
        ctx->pc = 0x2BB9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB9E0u;
        // 0x2bb9e4: 0x8fa30034  lw          $v1, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB9E8u;
        goto label_2bb9e8;
    }
    ctx->pc = 0x2BB9E0u;
    {
        const bool branch_taken_0x2bb9e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BB9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB9E0u;
        // 0x2bb9e4: 0x8fa30034  lw          $v1, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb9e0) {
            ctx->pc = 0x2BBA50u;
            goto label_2bba50;
        }
    }
    ctx->pc = 0x2BB9E8u;
label_2bb9e8:
    // 0x2bb9e8: 0x9225001a  lbu         $a1, 0x1A($s1)
    ctx->pc = 0x2bb9e8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 26)));
label_2bb9ec:
    // 0x2bb9ec: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2bb9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bb9f0:
    // 0x2bb9f0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2bb9f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2bb9f4:
    // 0x2bb9f4: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x2bb9f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
label_2bb9f8:
    // 0x2bb9f8: 0xc0a3398  jal         func_28CE60
label_2bb9fc:
    if (ctx->pc == 0x2BB9FCu) {
        ctx->pc = 0x2BB9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB9F8u;
        // 0x2bb9fc: 0x52e03  sra         $a1, $a1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBA00u;
        goto label_2bba00;
    }
    ctx->pc = 0x2BB9F8u;
    SET_GPR_U32(ctx, 31, 0x2BBA00u);
    ctx->pc = 0x2BB9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB9F8u;
    // 0x2bb9fc: 0x52e03  sra         $a1, $a1, 24 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CE60u, 0x2BB9F8u, 0x2BBA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBA00u;
label_2bba00:
    // 0x2bba00: 0xc0a4e54  jal         func_293950
label_2bba04:
    if (ctx->pc == 0x2BBA04u) {
        ctx->pc = 0x2BBA08u;
        goto label_2bba08;
    }
    ctx->pc = 0x2BBA00u;
    SET_GPR_U32(ctx, 31, 0x2BBA08u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2BBA00u, 0x2BBA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBA08u;
label_2bba08:
    // 0x2bba08: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bba08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bba0c:
    // 0x2bba0c: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
label_2bba10:
    if (ctx->pc == 0x2BBA10u) {
        ctx->pc = 0x2BBA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBA0Cu;
        // 0x2bba10: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBA14u;
        goto label_2bba14;
    }
    ctx->pc = 0x2BBA0Cu;
    {
        const bool branch_taken_0x2bba0c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bba0c) {
            ctx->pc = 0x2BBA10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BBA0Cu;
            // 0x2bba10: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BBA40u;
            goto label_2bba40;
        }
    }
    ctx->pc = 0x2BBA14u;
label_2bba14:
    // 0x2bba14: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2bba14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2bba18:
    // 0x2bba18: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2bba18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2bba1c:
    // 0x2bba1c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2bba1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2bba20:
    // 0x2bba20: 0x40f809  jalr        $v0
label_2bba24:
    if (ctx->pc == 0x2BBA24u) {
        ctx->pc = 0x2BBA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBA20u;
        // 0x2bba24: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBA28u;
        goto label_2bba28;
    }
    ctx->pc = 0x2BBA20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2BBA28u);
        ctx->pc = 0x2BBA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBA20u;
        // 0x2bba24: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BBA20u, 0x2BBA28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BBA28u;
label_2bba28:
    // 0x2bba28: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2bba28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bba2c:
    // 0x2bba2c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2bba2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bba30:
    // 0x2bba30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bba30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bba34:
    // 0x2bba34: 0xc0abd6c  jal         func_2AF5B0
label_2bba38:
    if (ctx->pc == 0x2BBA38u) {
        ctx->pc = 0x2BBA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBA34u;
        // 0x2bba38: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBA3Cu;
        goto label_2bba3c;
    }
    ctx->pc = 0x2BBA34u;
    SET_GPR_U32(ctx, 31, 0x2BBA3Cu);
    ctx->pc = 0x2BBA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBA34u;
    // 0x2bba38: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF5B0u, 0x2BBA34u, 0x2BBA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBA3Cu;
label_2bba3c:
    // 0x2bba3c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2bba3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bba40:
    // 0x2bba40: 0xc0a35d6  jal         func_28D758
label_2bba44:
    if (ctx->pc == 0x2BBA44u) {
        ctx->pc = 0x2BBA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBA40u;
        // 0x2bba44: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBA48u;
        goto label_2bba48;
    }
    ctx->pc = 0x2BBA40u;
    SET_GPR_U32(ctx, 31, 0x2BBA48u);
    ctx->pc = 0x2BBA44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBA40u;
    // 0x2bba44: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2BBA40u, 0x2BBA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBA48u;
label_2bba48:
    // 0x2bba48: 0x100000d3  b           . + 4 + (0xD3 << 2)
label_2bba4c:
    if (ctx->pc == 0x2BBA4Cu) {
        ctx->pc = 0x2BBA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBA48u;
        // 0x2bba4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBA50u;
        goto label_2bba50;
    }
    ctx->pc = 0x2BBA48u;
    {
        const bool branch_taken_0x2bba48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BBA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBA48u;
        // 0x2bba4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bba48) {
            ctx->pc = 0x2BBD98u;
            goto label_2bbd98;
        }
    }
    ctx->pc = 0x2BBA50u;
label_2bba50:
    // 0x2bba50: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x2bba50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_2bba54:
    // 0x2bba54: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_2bba58:
    if (ctx->pc == 0x2BBA58u) {
        ctx->pc = 0x2BBA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBA54u;
        // 0x2bba58: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBA5Cu;
        goto label_2bba5c;
    }
    ctx->pc = 0x2BBA54u;
    {
        const bool branch_taken_0x2bba54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BBA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBA54u;
        // 0x2bba58: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bba54) {
            ctx->pc = 0x2BBA7Cu;
            goto label_2bba7c;
        }
    }
    ctx->pc = 0x2BBA5Cu;
label_2bba5c:
    // 0x2bba5c: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_2bba60:
    if (ctx->pc == 0x2BBA60u) {
        ctx->pc = 0x2BBA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBA5Cu;
        // 0x2bba60: 0x240200bb  addiu       $v0, $zero, 0xBB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 187));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBA64u;
        goto label_2bba64;
    }
    ctx->pc = 0x2BBA5Cu;
    {
        const bool branch_taken_0x2bba5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BBA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBA5Cu;
        // 0x2bba60: 0x240200bb  addiu       $v0, $zero, 0xBB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 187));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bba5c) {
            ctx->pc = 0x2BBA7Cu;
            goto label_2bba7c;
        }
    }
    ctx->pc = 0x2BBA64u;
label_2bba64:
    // 0x2bba64: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2bba68:
    if (ctx->pc == 0x2BBA68u) {
        ctx->pc = 0x2BBA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBA64u;
        // 0x2bba68: 0x2402007a  addiu       $v0, $zero, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBA6Cu;
        goto label_2bba6c;
    }
    ctx->pc = 0x2BBA64u;
    {
        const bool branch_taken_0x2bba64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BBA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBA64u;
        // 0x2bba68: 0x2402007a  addiu       $v0, $zero, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bba64) {
            ctx->pc = 0x2BBA7Cu;
            goto label_2bba7c;
        }
    }
    ctx->pc = 0x2BBA6Cu;
label_2bba6c:
    // 0x2bba6c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_2bba70:
    if (ctx->pc == 0x2BBA70u) {
        ctx->pc = 0x2BBA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBA6Cu;
        // 0x2bba70: 0x2402006b  addiu       $v0, $zero, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBA74u;
        goto label_2bba74;
    }
    ctx->pc = 0x2BBA6Cu;
    {
        const bool branch_taken_0x2bba6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BBA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBA6Cu;
        // 0x2bba70: 0x2402006b  addiu       $v0, $zero, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bba6c) {
            ctx->pc = 0x2BBA7Cu;
            goto label_2bba7c;
        }
    }
    ctx->pc = 0x2BBA74u;
label_2bba74:
    // 0x2bba74: 0x14620017  bne         $v1, $v0, . + 4 + (0x17 << 2)
label_2bba78:
    if (ctx->pc == 0x2BBA78u) {
        ctx->pc = 0x2BBA7Cu;
        goto label_2bba7c;
    }
    ctx->pc = 0x2BBA74u;
    {
        const bool branch_taken_0x2bba74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2bba74) {
            ctx->pc = 0x2BBAD4u;
            goto label_2bbad4;
        }
    }
    ctx->pc = 0x2BBA7Cu;
label_2bba7c:
    // 0x2bba7c: 0xc0a367c  jal         func_28D9F0
label_2bba80:
    if (ctx->pc == 0x2BBA80u) {
        ctx->pc = 0x2BBA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBA7Cu;
        // 0x2bba80: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBA84u;
        goto label_2bba84;
    }
    ctx->pc = 0x2BBA7Cu;
    SET_GPR_U32(ctx, 31, 0x2BBA84u);
    ctx->pc = 0x2BBA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBA7Cu;
    // 0x2bba80: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2BBA7Cu, 0x2BBA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBA84u;
label_2bba84:
    // 0x2bba84: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bba84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bba88:
    // 0x2bba88: 0x120000c3  beqz        $s0, . + 4 + (0xC3 << 2)
label_2bba8c:
    if (ctx->pc == 0x2BBA8Cu) {
        ctx->pc = 0x2BBA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBA88u;
        // 0x2bba8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBA90u;
        goto label_2bba90;
    }
    ctx->pc = 0x2BBA88u;
    {
        const bool branch_taken_0x2bba88 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BBA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBA88u;
        // 0x2bba8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bba88) {
            ctx->pc = 0x2BBD98u;
            goto label_2bbd98;
        }
    }
    ctx->pc = 0x2BBA90u;
label_2bba90:
    // 0x2bba90: 0xc087420  jal         func_21D080
label_2bba94:
    if (ctx->pc == 0x2BBA94u) {
        ctx->pc = 0x2BBA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBA90u;
        // 0x2bba94: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBA98u;
        goto label_2bba98;
    }
    ctx->pc = 0x2BBA90u;
    SET_GPR_U32(ctx, 31, 0x2BBA98u);
    ctx->pc = 0x2BBA94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBA90u;
    // 0x2bba94: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D080u, 0x2BBA90u, 0x2BBA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBA98u;
label_2bba98:
    // 0x2bba98: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2bba98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_2bba9c:
    // 0x2bba9c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2bba9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bbaa0:
    // 0x2bbaa0: 0x8c6abd30  lw          $t2, -0x42D0($v1)
    ctx->pc = 0x2bbaa0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
label_2bbaa4:
    // 0x2bbaa4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bbaa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bbaa8:
    // 0x2bbaa8: 0x3c013f81  lui         $at, 0x3F81
    ctx->pc = 0x2bbaa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16257 << 16));
label_2bbaac:
    // 0x2bbaac: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x2bbaacu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
label_2bbab0:
    // 0x2bbab0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2bbab0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2bbab4:
    // 0x2bbab4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2bbab4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bbab8:
    // 0x2bbab8: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x2bbab8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2bbabc:
    // 0x2bbabc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2bbabcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bbac0:
    // 0x2bbac0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2bbac0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bbac4:
    // 0x2bbac4: 0xc0bee7a  jal         func_2FB9E8
label_2bbac8:
    if (ctx->pc == 0x2BBAC8u) {
        ctx->pc = 0x2BBAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBAC4u;
        // 0x2bbac8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBACCu;
        goto label_2bbacc;
    }
    ctx->pc = 0x2BBAC4u;
    SET_GPR_U32(ctx, 31, 0x2BBACCu);
    ctx->pc = 0x2BBAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBAC4u;
    // 0x2bbac8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2BBAC4u, 0x2BBACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBACCu;
label_2bbacc:
    // 0x2bbacc: 0x100000b2  b           . + 4 + (0xB2 << 2)
label_2bbad0:
    if (ctx->pc == 0x2BBAD0u) {
        ctx->pc = 0x2BBAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBACCu;
        // 0x2bbad0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBAD4u;
        goto label_2bbad4;
    }
    ctx->pc = 0x2BBACCu;
    {
        const bool branch_taken_0x2bbacc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BBAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBACCu;
        // 0x2bbad0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbacc) {
            ctx->pc = 0x2BBD98u;
            goto label_2bbd98;
        }
    }
    ctx->pc = 0x2BBAD4u;
label_2bbad4:
    // 0x2bbad4: 0xc0a4e54  jal         func_293950
label_2bbad8:
    if (ctx->pc == 0x2BBAD8u) {
        ctx->pc = 0x2BBADCu;
        goto label_2bbadc;
    }
    ctx->pc = 0x2BBAD4u;
    SET_GPR_U32(ctx, 31, 0x2BBADCu);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2BBAD4u, 0x2BBADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBADCu;
label_2bbadc:
    // 0x2bbadc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bbadcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bbae0:
    // 0x2bbae0: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_2bbae4:
    if (ctx->pc == 0x2BBAE4u) {
        ctx->pc = 0x2BBAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBAE0u;
        // 0x2bbae4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBAE8u;
        goto label_2bbae8;
    }
    ctx->pc = 0x2BBAE0u;
    {
        const bool branch_taken_0x2bbae0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BBAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBAE0u;
        // 0x2bbae4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbae0) {
            ctx->pc = 0x2BBAF8u;
            goto label_2bbaf8;
        }
    }
    ctx->pc = 0x2BBAE8u;
label_2bbae8:
    // 0x2bbae8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2bbae8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bbaec:
    // 0x2bbaec: 0x240603e8  addiu       $a2, $zero, 0x3E8
    ctx->pc = 0x2bbaecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_2bbaf0:
    // 0x2bbaf0: 0xc0acb08  jal         func_2B2C20
label_2bbaf4:
    if (ctx->pc == 0x2BBAF4u) {
        ctx->pc = 0x2BBAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBAF0u;
        // 0x2bbaf4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBAF8u;
        goto label_2bbaf8;
    }
    ctx->pc = 0x2BBAF0u;
    SET_GPR_U32(ctx, 31, 0x2BBAF8u);
    ctx->pc = 0x2BBAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBAF0u;
    // 0x2bbaf4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2C20u, 0x2BBAF0u, 0x2BBAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBAF8u;
label_2bbaf8:
    // 0x2bbaf8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2bbaf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bbafc:
    // 0x2bbafc: 0xc0a35d6  jal         func_28D758
label_2bbb00:
    if (ctx->pc == 0x2BBB00u) {
        ctx->pc = 0x2BBB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBAFCu;
        // 0x2bbb00: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBB04u;
        goto label_2bbb04;
    }
    ctx->pc = 0x2BBAFCu;
    SET_GPR_U32(ctx, 31, 0x2BBB04u);
    ctx->pc = 0x2BBB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBAFCu;
    // 0x2bbb00: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2BBAFCu, 0x2BBB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBB04u;
label_2bbb04:
    // 0x2bbb04: 0x100000a4  b           . + 4 + (0xA4 << 2)
label_2bbb08:
    if (ctx->pc == 0x2BBB08u) {
        ctx->pc = 0x2BBB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBB04u;
        // 0x2bbb08: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBB0Cu;
        goto label_2bbb0c;
    }
    ctx->pc = 0x2BBB04u;
    {
        const bool branch_taken_0x2bbb04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BBB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBB04u;
        // 0x2bbb08: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbb04) {
            ctx->pc = 0x2BBD98u;
            goto label_2bbd98;
        }
    }
    ctx->pc = 0x2BBB0Cu;
label_2bbb0c:
    // 0x2bbb0c: 0xde4200e0  ld          $v0, 0xE0($s2)
    ctx->pc = 0x2bbb0cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 224)));
label_2bbb10:
    // 0x2bbb10: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2bbb10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2bbb14:
    // 0x2bbb14: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2bbb14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2bbb18:
    // 0x2bbb18: 0xc088d00  jal         func_223400
label_2bbb1c:
    if (ctx->pc == 0x2BBB1Cu) {
        ctx->pc = 0x2BBB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBB18u;
        // 0x2bbb1c: 0xfe4200e0  sd          $v0, 0xE0($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 224), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBB20u;
        goto label_2bbb20;
    }
    ctx->pc = 0x2BBB18u;
    SET_GPR_U32(ctx, 31, 0x2BBB20u);
    ctx->pc = 0x2BBB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBB18u;
    // 0x2bbb1c: 0xfe4200e0  sd          $v0, 0xE0($s2) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 18), 224), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223400u, 0x2BBB18u, 0x2BBB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBB20u;
label_2bbb20:
    // 0x2bbb20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bbb20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2bbb24:
    // 0x2bbb24: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2bbb24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2bbb28:
    // 0x2bbb28: 0xc0aed9a  jal         func_2BB668
label_2bbb2c:
    if (ctx->pc == 0x2BBB2Cu) {
        ctx->pc = 0x2BBB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBB28u;
        // 0x2bbb2c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBB30u;
        goto label_2bbb30;
    }
    ctx->pc = 0x2BBB28u;
    SET_GPR_U32(ctx, 31, 0x2BBB30u);
    ctx->pc = 0x2BBB2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBB28u;
    // 0x2bbb2c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BB668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB668u, 0x2BBB28u, 0x2BBB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBB30u;
label_2bbb30:
    // 0x2bbb30: 0xc088e70  jal         func_2239C0
label_2bbb34:
    if (ctx->pc == 0x2BBB34u) {
        ctx->pc = 0x2BBB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBB30u;
        // 0x2bbb34: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBB38u;
        goto label_2bbb38;
    }
    ctx->pc = 0x2BBB30u;
    SET_GPR_U32(ctx, 31, 0x2BBB38u);
    ctx->pc = 0x2BBB34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBB30u;
    // 0x2bbb34: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2239C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2239C0u, 0x2BBB30u, 0x2BBB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBB38u;
label_2bbb38:
    // 0x2bbb38: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
label_2bbb3c:
    if (ctx->pc == 0x2BBB3Cu) {
        ctx->pc = 0x2BBB40u;
        goto label_2bbb40;
    }
    ctx->pc = 0x2BBB38u;
    {
        const bool branch_taken_0x2bbb38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bbb38) {
            ctx->pc = 0x2BBBC0u;
            goto label_2bbbc0;
        }
    }
    ctx->pc = 0x2BBB40u;
label_2bbb40:
    // 0x2bbb40: 0xc088e40  jal         func_223900
label_2bbb44:
    if (ctx->pc == 0x2BBB44u) {
        ctx->pc = 0x2BBB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBB40u;
        // 0x2bbb44: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBB48u;
        goto label_2bbb48;
    }
    ctx->pc = 0x2BBB40u;
    SET_GPR_U32(ctx, 31, 0x2BBB48u);
    ctx->pc = 0x2BBB44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBB40u;
    // 0x2bbb44: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223900u, 0x2BBB40u, 0x2BBB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBB48u;
label_2bbb48:
    // 0x2bbb48: 0x1450000f  bne         $v0, $s0, . + 4 + (0xF << 2)
label_2bbb4c:
    if (ctx->pc == 0x2BBB4Cu) {
        ctx->pc = 0x2BBB50u;
        goto label_2bbb50;
    }
    ctx->pc = 0x2BBB48u;
    {
        const bool branch_taken_0x2bbb48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x2bbb48) {
            ctx->pc = 0x2BBB88u;
            goto label_2bbb88;
        }
    }
    ctx->pc = 0x2BBB50u;
label_2bbb50:
    // 0x2bbb50: 0xc0a367c  jal         func_28D9F0
label_2bbb54:
    if (ctx->pc == 0x2BBB54u) {
        ctx->pc = 0x2BBB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBB50u;
        // 0x2bbb54: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBB58u;
        goto label_2bbb58;
    }
    ctx->pc = 0x2BBB50u;
    SET_GPR_U32(ctx, 31, 0x2BBB58u);
    ctx->pc = 0x2BBB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBB50u;
    // 0x2bbb54: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2BBB50u, 0x2BBB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBB58u;
label_2bbb58:
    // 0x2bbb58: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bbb58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bbb5c:
    // 0x2bbb5c: 0x1200008d  beqz        $s0, . + 4 + (0x8D << 2)
label_2bbb60:
    if (ctx->pc == 0x2BBB60u) {
        ctx->pc = 0x2BBB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBB5Cu;
        // 0x2bbb60: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBB64u;
        goto label_2bbb64;
    }
    ctx->pc = 0x2BBB5Cu;
    {
        const bool branch_taken_0x2bbb5c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BBB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBB5Cu;
        // 0x2bbb60: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbb5c) {
            ctx->pc = 0x2BBD94u;
            goto label_2bbd94;
        }
    }
    ctx->pc = 0x2BBB64u;
label_2bbb64:
    // 0x2bbb64: 0xc08c424  jal         func_231090
label_2bbb68:
    if (ctx->pc == 0x2BBB68u) {
        ctx->pc = 0x2BBB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBB64u;
        // 0x2bbb68: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBB6Cu;
        goto label_2bbb6c;
    }
    ctx->pc = 0x2BBB64u;
    SET_GPR_U32(ctx, 31, 0x2BBB6Cu);
    ctx->pc = 0x2BBB68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBB64u;
    // 0x2bbb68: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231090u, 0x2BBB64u, 0x2BBB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBB6Cu;
label_2bbb6c:
    // 0x2bbb6c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2bbb6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bbb70:
    // 0x2bbb70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bbb70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bbb74:
    // 0x2bbb74: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2bbb74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bbb78:
    // 0x2bbb78: 0xc0bebac  jal         func_2FAEB0
label_2bbb7c:
    if (ctx->pc == 0x2BBB7Cu) {
        ctx->pc = 0x2BBB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBB78u;
        // 0x2bbb7c: 0x24070021  addiu       $a3, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBB80u;
        goto label_2bbb80;
    }
    ctx->pc = 0x2BBB78u;
    SET_GPR_U32(ctx, 31, 0x2BBB80u);
    ctx->pc = 0x2BBB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBB78u;
    // 0x2bbb7c: 0x24070021  addiu       $a3, $zero, 0x21 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FAEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAEB0u, 0x2BBB78u, 0x2BBB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBB80u;
label_2bbb80:
    // 0x2bbb80: 0x10000085  b           . + 4 + (0x85 << 2)
label_2bbb84:
    if (ctx->pc == 0x2BBB84u) {
        ctx->pc = 0x2BBB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBB80u;
        // 0x2bbb84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBB88u;
        goto label_2bbb88;
    }
    ctx->pc = 0x2BBB80u;
    {
        const bool branch_taken_0x2bbb80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BBB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBB80u;
        // 0x2bbb84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbb80) {
            ctx->pc = 0x2BBD98u;
            goto label_2bbd98;
        }
    }
    ctx->pc = 0x2BBB88u;
label_2bbb88:
    // 0x2bbb88: 0xc088e68  jal         func_2239A0
label_2bbb8c:
    if (ctx->pc == 0x2BBB8Cu) {
        ctx->pc = 0x2BBB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBB88u;
        // 0x2bbb8c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBB90u;
        goto label_2bbb90;
    }
    ctx->pc = 0x2BBB88u;
    SET_GPR_U32(ctx, 31, 0x2BBB90u);
    ctx->pc = 0x2BBB8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBB88u;
    // 0x2bbb8c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2239A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2239A0u, 0x2BBB88u, 0x2BBB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBB90u;
label_2bbb90:
    // 0x2bbb90: 0x1450000b  bne         $v0, $s0, . + 4 + (0xB << 2)
label_2bbb94:
    if (ctx->pc == 0x2BBB94u) {
        ctx->pc = 0x2BBB98u;
        goto label_2bbb98;
    }
    ctx->pc = 0x2BBB90u;
    {
        const bool branch_taken_0x2bbb90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x2bbb90) {
            ctx->pc = 0x2BBBC0u;
            goto label_2bbbc0;
        }
    }
    ctx->pc = 0x2BBB98u;
label_2bbb98:
    // 0x2bbb98: 0xc0a367c  jal         func_28D9F0
label_2bbb9c:
    if (ctx->pc == 0x2BBB9Cu) {
        ctx->pc = 0x2BBB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBB98u;
        // 0x2bbb9c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBBA0u;
        goto label_2bbba0;
    }
    ctx->pc = 0x2BBB98u;
    SET_GPR_U32(ctx, 31, 0x2BBBA0u);
    ctx->pc = 0x2BBB9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBB98u;
    // 0x2bbb9c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2BBB98u, 0x2BBBA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBBA0u;
label_2bbba0:
    // 0x2bbba0: 0x1040007c  beqz        $v0, . + 4 + (0x7C << 2)
label_2bbba4:
    if (ctx->pc == 0x2BBBA4u) {
        ctx->pc = 0x2BBBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBBA0u;
        // 0x2bbba4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBBA8u;
        goto label_2bbba8;
    }
    ctx->pc = 0x2BBBA0u;
    {
        const bool branch_taken_0x2bbba0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BBBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBBA0u;
        // 0x2bbba4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbba0) {
            ctx->pc = 0x2BBD94u;
            goto label_2bbd94;
        }
    }
    ctx->pc = 0x2BBBA8u;
label_2bbba8:
    // 0x2bbba8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2bbba8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bbbac:
    // 0x2bbbac: 0x24060019  addiu       $a2, $zero, 0x19
    ctx->pc = 0x2bbbacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_2bbbb0:
    // 0x2bbbb0: 0xc0bebac  jal         func_2FAEB0
label_2bbbb4:
    if (ctx->pc == 0x2BBBB4u) {
        ctx->pc = 0x2BBBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBBB0u;
        // 0x2bbbb4: 0x24070021  addiu       $a3, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBBB8u;
        goto label_2bbbb8;
    }
    ctx->pc = 0x2BBBB0u;
    SET_GPR_U32(ctx, 31, 0x2BBBB8u);
    ctx->pc = 0x2BBBB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBBB0u;
    // 0x2bbbb4: 0x24070021  addiu       $a3, $zero, 0x21 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FAEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAEB0u, 0x2BBBB0u, 0x2BBBB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBBB8u;
label_2bbbb8:
    // 0x2bbbb8: 0x10000077  b           . + 4 + (0x77 << 2)
label_2bbbbc:
    if (ctx->pc == 0x2BBBBCu) {
        ctx->pc = 0x2BBBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBBB8u;
        // 0x2bbbbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBBC0u;
        goto label_2bbbc0;
    }
    ctx->pc = 0x2BBBB8u;
    {
        const bool branch_taken_0x2bbbb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BBBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBBB8u;
        // 0x2bbbbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbbb8) {
            ctx->pc = 0x2BBD98u;
            goto label_2bbd98;
        }
    }
    ctx->pc = 0x2BBBC0u;
label_2bbbc0:
    // 0x2bbbc0: 0xc087502  jal         func_21D408
label_2bbbc4:
    if (ctx->pc == 0x2BBBC4u) {
        ctx->pc = 0x2BBBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBBC0u;
        // 0x2bbbc4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBBC8u;
        goto label_2bbbc8;
    }
    ctx->pc = 0x2BBBC0u;
    SET_GPR_U32(ctx, 31, 0x2BBBC8u);
    ctx->pc = 0x2BBBC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBBC0u;
    // 0x2bbbc4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2BBBC0u, 0x2BBBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBBC8u;
label_2bbbc8:
    // 0x2bbbc8: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x2bbbc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_2bbbcc:
    // 0x2bbbcc: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2bbbccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bbbd0:
    // 0x2bbbd0: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_2bbbd4:
    if (ctx->pc == 0x2BBBD4u) {
        ctx->pc = 0x2BBBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBBD0u;
        // 0x2bbbd4: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBBD8u;
        goto label_2bbbd8;
    }
    ctx->pc = 0x2BBBD0u;
    {
        const bool branch_taken_0x2bbbd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bbbd0) {
            ctx->pc = 0x2BBBD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BBBD0u;
            // 0x2bbbd4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BBBD8u;
            goto label_2bbbd8;
        }
    }
    ctx->pc = 0x2BBBD8u;
label_2bbbd8:
    // 0x2bbbd8: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x2bbbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_2bbbdc:
    // 0x2bbbdc: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2bbbdcu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_2bbbe0:
    // 0x2bbbe0: 0x2010  mfhi        $a0
    ctx->pc = 0x2bbbe0u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_2bbbe4:
    // 0x2bbbe4: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
label_2bbbe8:
    if (ctx->pc == 0x2BBBE8u) {
        ctx->pc = 0x2BBBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBBE4u;
        // 0x2bbbe8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBBECu;
        goto label_2bbbec;
    }
    ctx->pc = 0x2BBBE4u;
    {
        const bool branch_taken_0x2bbbe4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BBBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBBE4u;
        // 0x2bbbe8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbbe4) {
            ctx->pc = 0x2BBC04u;
            goto label_2bbc04;
        }
    }
    ctx->pc = 0x2BBBECu;
label_2bbbec:
    // 0x2bbbec: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2bbbecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2bbbf0:
    // 0x2bbbf0: 0x8c450acc  lw          $a1, 0xACC($v0)
    ctx->pc = 0x2bbbf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2764)));
label_2bbbf4:
    // 0x2bbbf4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2bbbf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2bbbf8:
    // 0x2bbbf8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2bbbf8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bbbfc:
    // 0x2bbbfc: 0xc0992f6  jal         func_264BD8
label_2bbc00:
    if (ctx->pc == 0x2BBC00u) {
        ctx->pc = 0x2BBC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBBFCu;
        // 0x2bbc00: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBC04u;
        goto label_2bbc04;
    }
    ctx->pc = 0x2BBBFCu;
    SET_GPR_U32(ctx, 31, 0x2BBC04u);
    ctx->pc = 0x2BBC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBBFCu;
    // 0x2bbc00: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264BD8u, 0x2BBBFCu, 0x2BBC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBC04u;
label_2bbc04:
    // 0x2bbc04: 0xc08a158  jal         func_228560
label_2bbc08:
    if (ctx->pc == 0x2BBC08u) {
        ctx->pc = 0x2BBC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBC04u;
        // 0x2bbc08: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBC0Cu;
        goto label_2bbc0c;
    }
    ctx->pc = 0x2BBC04u;
    SET_GPR_U32(ctx, 31, 0x2BBC0Cu);
    ctx->pc = 0x2BBC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBC04u;
    // 0x2bbc08: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228560u, 0x2BBC04u, 0x2BBC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBC0Cu;
label_2bbc0c:
    // 0x2bbc0c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2bbc0cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bbc10:
    // 0x2bbc10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2bbc10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bbc14:
    // 0x2bbc14: 0x5462001b  bnel        $v1, $v0, . + 4 + (0x1B << 2)
label_2bbc18:
    if (ctx->pc == 0x2BBC18u) {
        ctx->pc = 0x2BBC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBC14u;
        // 0x2bbc18: 0xa2200017  sb          $zero, 0x17($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 23), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBC1Cu;
        goto label_2bbc1c;
    }
    ctx->pc = 0x2BBC14u;
    {
        const bool branch_taken_0x2bbc14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2bbc14) {
            ctx->pc = 0x2BBC18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BBC14u;
            // 0x2bbc18: 0xa2200017  sb          $zero, 0x17($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 23), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BBC84u;
            goto label_2bbc84;
        }
    }
    ctx->pc = 0x2BBC1Cu;
label_2bbc1c:
    // 0x2bbc1c: 0x92220017  lbu         $v0, 0x17($s1)
    ctx->pc = 0x2bbc1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 23)));
label_2bbc20:
    // 0x2bbc20: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
label_2bbc24:
    if (ctx->pc == 0x2BBC24u) {
        ctx->pc = 0x2BBC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBC20u;
        // 0x2bbc24: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBC28u;
        goto label_2bbc28;
    }
    ctx->pc = 0x2BBC20u;
    {
        const bool branch_taken_0x2bbc20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BBC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBC20u;
        // 0x2bbc24: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbc20) {
            ctx->pc = 0x2BBC84u;
            goto label_2bbc84;
        }
    }
    ctx->pc = 0x2BBC28u;
label_2bbc28:
    // 0x2bbc28: 0x92220018  lbu         $v0, 0x18($s1)
    ctx->pc = 0x2bbc28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 24)));
label_2bbc2c:
    // 0x2bbc2c: 0xa2230017  sb          $v1, 0x17($s1)
    ctx->pc = 0x2bbc2cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 23), (uint8_t)GPR_U32(ctx, 3));
label_2bbc30:
    // 0x2bbc30: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2bbc30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2bbc34:
    // 0x2bbc34: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x2bbc34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2bbc38:
    // 0x2bbc38: 0x83202a  slt         $a0, $a0, $v1
    ctx->pc = 0x2bbc38u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2bbc3c:
    // 0x2bbc3c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2bbc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_2bbc40:
    // 0x2bbc40: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x2bbc40u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
label_2bbc44:
    // 0x2bbc44: 0x304201fc  andi        $v0, $v0, 0x1FC
    ctx->pc = 0x2bbc44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)508);
label_2bbc48:
    // 0x2bbc48: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2bbc48u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2bbc4c:
    // 0x2bbc4c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2bbc4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2bbc50:
    // 0x2bbc50: 0x1485000c  bne         $a0, $a1, . + 4 + (0xC << 2)
label_2bbc54:
    if (ctx->pc == 0x2BBC54u) {
        ctx->pc = 0x2BBC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBC50u;
        // 0x2bbc54: 0xa2230018  sb          $v1, 0x18($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 24), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBC58u;
        goto label_2bbc58;
    }
    ctx->pc = 0x2BBC50u;
    {
        const bool branch_taken_0x2bbc50 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x2BBC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBC50u;
        // 0x2bbc54: 0xa2230018  sb          $v1, 0x18($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 24), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbc50) {
            ctx->pc = 0x2BBC84u;
            goto label_2bbc84;
        }
    }
    ctx->pc = 0x2BBC58u;
label_2bbc58:
    // 0x2bbc58: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2bbc58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2bbc5c:
    // 0x2bbc5c: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x2bbc5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_2bbc60:
    // 0x2bbc60: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2bbc60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2bbc64:
    // 0x2bbc64: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x2bbc64u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2bbc68:
    // 0x2bbc68: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2bbc68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2bbc6c:
    // 0x2bbc6c: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2bbc6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_2bbc70:
    // 0x2bbc70: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2bbc70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bbc74:
    // 0x2bbc74: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2bbc74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bbc78:
    // 0x2bbc78: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2bbc78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bbc7c:
    // 0x2bbc7c: 0xc088178  jal         func_2205E0
label_2bbc80:
    if (ctx->pc == 0x2BBC80u) {
        ctx->pc = 0x2BBC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBC7Cu;
        // 0x2bbc80: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBC84u;
        goto label_2bbc84;
    }
    ctx->pc = 0x2BBC7Cu;
    SET_GPR_U32(ctx, 31, 0x2BBC84u);
    ctx->pc = 0x2BBC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBC7Cu;
    // 0x2bbc80: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2BBC7Cu, 0x2BBC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBC84u;
label_2bbc84:
    // 0x2bbc84: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x2bbc84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
label_2bbc88:
    // 0x2bbc88: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x2bbc88u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
label_2bbc8c:
    // 0x2bbc8c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2bbc8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2bbc90:
    // 0x2bbc90: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2bbc90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2bbc94:
    // 0x2bbc94: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x2bbc94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_2bbc98:
    // 0x2bbc98: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2bbc98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2bbc9c:
    // 0x2bbc9c: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x2bbc9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_2bbca0:
    // 0x2bbca0: 0xc1067b8  jal         func_419EE0
label_2bbca4:
    if (ctx->pc == 0x2BBCA4u) {
        ctx->pc = 0x2BBCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBCA0u;
        // 0x2bbca4: 0x27a60038  addiu       $a2, $sp, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBCA8u;
        goto label_2bbca8;
    }
    ctx->pc = 0x2BBCA0u;
    SET_GPR_U32(ctx, 31, 0x2BBCA8u);
    ctx->pc = 0x2BBCA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBCA0u;
    // 0x2bbca4: 0x27a60038  addiu       $a2, $sp, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419EE0u, 0x2BBCA0u, 0x2BBCA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBCA8u;
label_2bbca8:
    // 0x2bbca8: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
label_2bbcac:
    if (ctx->pc == 0x2BBCACu) {
        ctx->pc = 0x2BBCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBCA8u;
        // 0x2bbcac: 0x26a54b00  addiu       $a1, $s5, 0x4B00 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 19200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBCB0u;
        goto label_2bbcb0;
    }
    ctx->pc = 0x2BBCA8u;
    {
        const bool branch_taken_0x2bbca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BBCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBCA8u;
        // 0x2bbcac: 0x26a54b00  addiu       $a1, $s5, 0x4B00 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 19200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbca8) {
            ctx->pc = 0x2BBD94u;
            goto label_2bbd94;
        }
    }
    ctx->pc = 0x2BBCB0u;
label_2bbcb0:
    // 0x2bbcb0: 0x84430092  lh          $v1, 0x92($v0)
    ctx->pc = 0x2bbcb0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 146)));
label_2bbcb4:
    // 0x2bbcb4: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2bbcb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2bbcb8:
    // 0x2bbcb8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2bbcb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2bbcbc:
    // 0x2bbcbc: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2bbcbcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2bbcc0:
    // 0x2bbcc0: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x2bbcc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_2bbcc4:
    // 0x2bbcc4: 0x86640002  lh          $a0, 0x2($s3)
    ctx->pc = 0x2bbcc4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
label_2bbcc8:
    // 0x2bbcc8: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2bbcc8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2bbccc:
    // 0x2bbccc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2bbcccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_2bbcd0:
    // 0x2bbcd0: 0xc0cd7d2  jal         func_335F48
label_2bbcd4:
    if (ctx->pc == 0x2BBCD4u) {
        ctx->pc = 0x2BBCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBCD0u;
        // 0x2bbcd4: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBCD8u;
        goto label_2bbcd8;
    }
    ctx->pc = 0x2BBCD0u;
    SET_GPR_U32(ctx, 31, 0x2BBCD8u);
    ctx->pc = 0x2BBCD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBCD0u;
    // 0x2bbcd4: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335F48u, 0x2BBCD0u, 0x2BBCD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBCD8u;
label_2bbcd8:
    // 0x2bbcd8: 0xc0cd742  jal         func_335D08
label_2bbcdc:
    if (ctx->pc == 0x2BBCDCu) {
        ctx->pc = 0x2BBCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBCD8u;
        // 0x2bbcdc: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBCE0u;
        goto label_2bbce0;
    }
    ctx->pc = 0x2BBCD8u;
    SET_GPR_U32(ctx, 31, 0x2BBCE0u);
    ctx->pc = 0x2BBCDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBCD8u;
    // 0x2bbcdc: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D08u, 0x2BBCD8u, 0x2BBCE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBCE0u;
label_2bbce0:
    // 0x2bbce0: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x2bbce0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2bbce4:
    // 0x2bbce4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2bbce4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2bbce8:
    // 0x2bbce8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2bbce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2bbcec:
    // 0x2bbcec: 0xc0cd780  jal         func_335E00
label_2bbcf0:
    if (ctx->pc == 0x2BBCF0u) {
        ctx->pc = 0x2BBCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBCECu;
        // 0x2bbcf0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBCF4u;
        goto label_2bbcf4;
    }
    ctx->pc = 0x2BBCECu;
    SET_GPR_U32(ctx, 31, 0x2BBCF4u);
    ctx->pc = 0x2BBCF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBCECu;
    // 0x2bbcf0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335E00u, 0x2BBCECu, 0x2BBCF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBCF4u;
label_2bbcf4:
    // 0x2bbcf4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2bbcf4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2bbcf8:
    // 0x2bbcf8: 0xc0cdd2e  jal         func_3374B8
label_2bbcfc:
    if (ctx->pc == 0x2BBCFCu) {
        ctx->pc = 0x2BBCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBCF8u;
        // 0x2bbcfc: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBD00u;
        goto label_2bbd00;
    }
    ctx->pc = 0x2BBCF8u;
    SET_GPR_U32(ctx, 31, 0x2BBD00u);
    ctx->pc = 0x2BBCFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBCF8u;
    // 0x2bbcfc: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3374B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3374B8u, 0x2BBCF8u, 0x2BBD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBD00u;
label_2bbd00:
    // 0x2bbd00: 0x3c013f49  lui         $at, 0x3F49
    ctx->pc = 0x2bbd00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16201 << 16));
label_2bbd04:
    // 0x2bbd04: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2bbd04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_2bbd08:
    // 0x2bbd08: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2bbd08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2bbd0c:
    // 0x2bbd0c: 0x0  nop
    ctx->pc = 0x2bbd0cu;
    // NOP
label_2bbd10:
    // 0x2bbd10: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2bbd10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2bbd14:
    // 0x2bbd14: 0x0  nop
    ctx->pc = 0x2bbd14u;
    // NOP
label_2bbd18:
    // 0x2bbd18: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
label_2bbd1c:
    if (ctx->pc == 0x2BBD1Cu) {
        ctx->pc = 0x2BBD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBD18u;
        // 0x2bbd1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBD20u;
        goto label_2bbd20;
    }
    ctx->pc = 0x2BBD18u;
    {
        const bool branch_taken_0x2bbd18 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BBD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBD18u;
        // 0x2bbd1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbd18) {
            ctx->pc = 0x2BBD98u;
            goto label_2bbd98;
        }
    }
    ctx->pc = 0x2BBD20u;
label_2bbd20:
    // 0x2bbd20: 0xc0a367c  jal         func_28D9F0
label_2bbd24:
    if (ctx->pc == 0x2BBD24u) {
        ctx->pc = 0x2BBD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBD20u;
        // 0x2bbd24: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBD28u;
        goto label_2bbd28;
    }
    ctx->pc = 0x2BBD20u;
    SET_GPR_U32(ctx, 31, 0x2BBD28u);
    ctx->pc = 0x2BBD24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBD20u;
    // 0x2bbd24: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2BBD20u, 0x2BBD28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBD28u;
label_2bbd28:
    // 0x2bbd28: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bbd28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bbd2c:
    // 0x2bbd2c: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
label_2bbd30:
    if (ctx->pc == 0x2BBD30u) {
        ctx->pc = 0x2BBD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBD2Cu;
        // 0x2bbd30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBD34u;
        goto label_2bbd34;
    }
    ctx->pc = 0x2BBD2Cu;
    {
        const bool branch_taken_0x2bbd2c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BBD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBD2Cu;
        // 0x2bbd30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbd2c) {
            ctx->pc = 0x2BBD98u;
            goto label_2bbd98;
        }
    }
    ctx->pc = 0x2BBD34u;
label_2bbd34:
    // 0x2bbd34: 0xc0884f6  jal         func_2213D8
label_2bbd38:
    if (ctx->pc == 0x2BBD38u) {
        ctx->pc = 0x2BBD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBD34u;
        // 0x2bbd38: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBD3Cu;
        goto label_2bbd3c;
    }
    ctx->pc = 0x2BBD34u;
    SET_GPR_U32(ctx, 31, 0x2BBD3Cu);
    ctx->pc = 0x2BBD38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBD34u;
    // 0x2bbd38: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x2BBD34u, 0x2BBD3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBD3Cu;
label_2bbd3c:
    // 0x2bbd3c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2bbd3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bbd40:
    // 0x2bbd40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bbd40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bbd44:
    // 0x2bbd44: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2bbd44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2bbd48:
    // 0x2bbd48: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2bbd48u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2bbd4c:
    // 0x2bbd4c: 0xc0bf800  jal         func_2FE000
label_2bbd50:
    if (ctx->pc == 0x2BBD50u) {
        ctx->pc = 0x2BBD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBD4Cu;
        // 0x2bbd50: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBD54u;
        goto label_2bbd54;
    }
    ctx->pc = 0x2BBD4Cu;
    SET_GPR_U32(ctx, 31, 0x2BBD54u);
    ctx->pc = 0x2BBD50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBD4Cu;
    // 0x2bbd50: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x2BBD4Cu, 0x2BBD54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBD54u;
label_2bbd54:
    // 0x2bbd54: 0x10000010  b           . + 4 + (0x10 << 2)
label_2bbd58:
    if (ctx->pc == 0x2BBD58u) {
        ctx->pc = 0x2BBD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBD54u;
        // 0x2bbd58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBD5Cu;
        goto label_2bbd5c;
    }
    ctx->pc = 0x2BBD54u;
    {
        const bool branch_taken_0x2bbd54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BBD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBD54u;
        // 0x2bbd58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbd54) {
            ctx->pc = 0x2BBD98u;
            goto label_2bbd98;
        }
    }
    ctx->pc = 0x2BBD5Cu;
label_2bbd5c:
    // 0x2bbd5c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2bbd5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bbd60:
    // 0x2bbd60: 0xc0a367c  jal         func_28D9F0
label_2bbd64:
    if (ctx->pc == 0x2BBD64u) {
        ctx->pc = 0x2BBD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBD60u;
        // 0x2bbd64: 0xc4940140  lwc1        $f20, 0x140($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBD68u;
        goto label_2bbd68;
    }
    ctx->pc = 0x2BBD60u;
    SET_GPR_U32(ctx, 31, 0x2BBD68u);
    ctx->pc = 0x2BBD64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBD60u;
    // 0x2bbd64: 0xc4940140  lwc1        $f20, 0x140($a0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2BBD60u, 0x2BBD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBD68u;
label_2bbd68:
    // 0x2bbd68: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_2bbd6c:
    if (ctx->pc == 0x2BBD6Cu) {
        ctx->pc = 0x2BBD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBD68u;
        // 0x2bbd6c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBD70u;
        goto label_2bbd70;
    }
    ctx->pc = 0x2BBD68u;
    {
        const bool branch_taken_0x2bbd68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BBD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBD68u;
        // 0x2bbd6c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbd68) {
            ctx->pc = 0x2BBD94u;
            goto label_2bbd94;
        }
    }
    ctx->pc = 0x2BBD70u;
label_2bbd70:
    // 0x2bbd70: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bbd70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2bbd74:
    // 0x2bbd74: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2bbd74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2bbd78:
    // 0x2bbd78: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2bbd78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bbd7c:
    // 0x2bbd7c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bbd7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bbd80:
    // 0x2bbd80: 0x460d6340  add.s       $f13, $f12, $f13
    ctx->pc = 0x2bbd80u;
    ctx->f[13] = FPU_ADD_S(ctx->f[12], ctx->f[13]);
label_2bbd84:
    // 0x2bbd84: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2bbd84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2bbd88:
    // 0x2bbd88: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2bbd88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bbd8c:
    // 0x2bbd8c: 0xc0bf3d4  jal         func_2FCF50
label_2bbd90:
    if (ctx->pc == 0x2BBD90u) {
        ctx->pc = 0x2BBD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBD8Cu;
        // 0x2bbd90: 0x240807d0  addiu       $t0, $zero, 0x7D0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBD94u;
        goto label_2bbd94;
    }
    ctx->pc = 0x2BBD8Cu;
    SET_GPR_U32(ctx, 31, 0x2BBD94u);
    ctx->pc = 0x2BBD90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBD8Cu;
    // 0x2bbd90: 0x240807d0  addiu       $t0, $zero, 0x7D0 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FCF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FCF50u, 0x2BBD8Cu, 0x2BBD94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBD94u;
label_2bbd94:
    // 0x2bbd94: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2bbd94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bbd98:
    // 0x2bbd98: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x2bbd98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2bbd9c:
    // 0x2bbd9c: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x2bbd9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2bbda0:
    // 0x2bbda0: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x2bbda0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2bbda4:
    // 0x2bbda4: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x2bbda4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2bbda8:
    // 0x2bbda8: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x2bbda8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2bbdac:
    // 0x2bbdac: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2bbdacu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2bbdb0:
    // 0x2bbdb0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2bbdb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2bbdb4:
    // 0x2bbdb4: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x2bbdb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2bbdb8:
    // 0x2bbdb8: 0x3e00008  jr          $ra
label_2bbdbc:
    if (ctx->pc == 0x2BBDBCu) {
        ctx->pc = 0x2BBDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBDB8u;
        // 0x2bbdbc: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBDC0u;
        goto label_fallthrough_0x2bbdb8;
    }
    ctx->pc = 0x2BBDB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BBDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBDB8u;
        // 0x2bbdbc: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BBDB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2bbdb8:
    ctx->pc = 0x2BBDC0u;
}
