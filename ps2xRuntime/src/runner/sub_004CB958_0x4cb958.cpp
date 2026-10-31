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

// Function: sub_004CB958
// Address: 0x4cb958 - 0x4cbe58
void sub_004CB958_0x4cb958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CB958_0x4cb958");
#endif

    switch (ctx->pc) {
        case 0x4cb958u: goto label_4cb958;
        case 0x4cb95cu: goto label_4cb95c;
        case 0x4cb960u: goto label_4cb960;
        case 0x4cb964u: goto label_4cb964;
        case 0x4cb968u: goto label_4cb968;
        case 0x4cb96cu: goto label_4cb96c;
        case 0x4cb970u: goto label_4cb970;
        case 0x4cb974u: goto label_4cb974;
        case 0x4cb978u: goto label_4cb978;
        case 0x4cb97cu: goto label_4cb97c;
        case 0x4cb980u: goto label_4cb980;
        case 0x4cb984u: goto label_4cb984;
        case 0x4cb988u: goto label_4cb988;
        case 0x4cb98cu: goto label_4cb98c;
        case 0x4cb990u: goto label_4cb990;
        case 0x4cb994u: goto label_4cb994;
        case 0x4cb998u: goto label_4cb998;
        case 0x4cb99cu: goto label_4cb99c;
        case 0x4cb9a0u: goto label_4cb9a0;
        case 0x4cb9a4u: goto label_4cb9a4;
        case 0x4cb9a8u: goto label_4cb9a8;
        case 0x4cb9acu: goto label_4cb9ac;
        case 0x4cb9b0u: goto label_4cb9b0;
        case 0x4cb9b4u: goto label_4cb9b4;
        case 0x4cb9b8u: goto label_4cb9b8;
        case 0x4cb9bcu: goto label_4cb9bc;
        case 0x4cb9c0u: goto label_4cb9c0;
        case 0x4cb9c4u: goto label_4cb9c4;
        case 0x4cb9c8u: goto label_4cb9c8;
        case 0x4cb9ccu: goto label_4cb9cc;
        case 0x4cb9d0u: goto label_4cb9d0;
        case 0x4cb9d4u: goto label_4cb9d4;
        case 0x4cb9d8u: goto label_4cb9d8;
        case 0x4cb9dcu: goto label_4cb9dc;
        case 0x4cb9e0u: goto label_4cb9e0;
        case 0x4cb9e4u: goto label_4cb9e4;
        case 0x4cb9e8u: goto label_4cb9e8;
        case 0x4cb9ecu: goto label_4cb9ec;
        case 0x4cb9f0u: goto label_4cb9f0;
        case 0x4cb9f4u: goto label_4cb9f4;
        case 0x4cb9f8u: goto label_4cb9f8;
        case 0x4cb9fcu: goto label_4cb9fc;
        case 0x4cba00u: goto label_4cba00;
        case 0x4cba04u: goto label_4cba04;
        case 0x4cba08u: goto label_4cba08;
        case 0x4cba0cu: goto label_4cba0c;
        case 0x4cba10u: goto label_4cba10;
        case 0x4cba14u: goto label_4cba14;
        case 0x4cba18u: goto label_4cba18;
        case 0x4cba1cu: goto label_4cba1c;
        case 0x4cba20u: goto label_4cba20;
        case 0x4cba24u: goto label_4cba24;
        case 0x4cba28u: goto label_4cba28;
        case 0x4cba2cu: goto label_4cba2c;
        case 0x4cba30u: goto label_4cba30;
        case 0x4cba34u: goto label_4cba34;
        case 0x4cba38u: goto label_4cba38;
        case 0x4cba3cu: goto label_4cba3c;
        case 0x4cba40u: goto label_4cba40;
        case 0x4cba44u: goto label_4cba44;
        case 0x4cba48u: goto label_4cba48;
        case 0x4cba4cu: goto label_4cba4c;
        case 0x4cba50u: goto label_4cba50;
        case 0x4cba54u: goto label_4cba54;
        case 0x4cba58u: goto label_4cba58;
        case 0x4cba5cu: goto label_4cba5c;
        case 0x4cba60u: goto label_4cba60;
        case 0x4cba64u: goto label_4cba64;
        case 0x4cba68u: goto label_4cba68;
        case 0x4cba6cu: goto label_4cba6c;
        case 0x4cba70u: goto label_4cba70;
        case 0x4cba74u: goto label_4cba74;
        case 0x4cba78u: goto label_4cba78;
        case 0x4cba7cu: goto label_4cba7c;
        case 0x4cba80u: goto label_4cba80;
        case 0x4cba84u: goto label_4cba84;
        case 0x4cba88u: goto label_4cba88;
        case 0x4cba8cu: goto label_4cba8c;
        case 0x4cba90u: goto label_4cba90;
        case 0x4cba94u: goto label_4cba94;
        case 0x4cba98u: goto label_4cba98;
        case 0x4cba9cu: goto label_4cba9c;
        case 0x4cbaa0u: goto label_4cbaa0;
        case 0x4cbaa4u: goto label_4cbaa4;
        case 0x4cbaa8u: goto label_4cbaa8;
        case 0x4cbaacu: goto label_4cbaac;
        case 0x4cbab0u: goto label_4cbab0;
        case 0x4cbab4u: goto label_4cbab4;
        case 0x4cbab8u: goto label_4cbab8;
        case 0x4cbabcu: goto label_4cbabc;
        case 0x4cbac0u: goto label_4cbac0;
        case 0x4cbac4u: goto label_4cbac4;
        case 0x4cbac8u: goto label_4cbac8;
        case 0x4cbaccu: goto label_4cbacc;
        case 0x4cbad0u: goto label_4cbad0;
        case 0x4cbad4u: goto label_4cbad4;
        case 0x4cbad8u: goto label_4cbad8;
        case 0x4cbadcu: goto label_4cbadc;
        case 0x4cbae0u: goto label_4cbae0;
        case 0x4cbae4u: goto label_4cbae4;
        case 0x4cbae8u: goto label_4cbae8;
        case 0x4cbaecu: goto label_4cbaec;
        case 0x4cbaf0u: goto label_4cbaf0;
        case 0x4cbaf4u: goto label_4cbaf4;
        case 0x4cbaf8u: goto label_4cbaf8;
        case 0x4cbafcu: goto label_4cbafc;
        case 0x4cbb00u: goto label_4cbb00;
        case 0x4cbb04u: goto label_4cbb04;
        case 0x4cbb08u: goto label_4cbb08;
        case 0x4cbb0cu: goto label_4cbb0c;
        case 0x4cbb10u: goto label_4cbb10;
        case 0x4cbb14u: goto label_4cbb14;
        case 0x4cbb18u: goto label_4cbb18;
        case 0x4cbb1cu: goto label_4cbb1c;
        case 0x4cbb20u: goto label_4cbb20;
        case 0x4cbb24u: goto label_4cbb24;
        case 0x4cbb28u: goto label_4cbb28;
        case 0x4cbb2cu: goto label_4cbb2c;
        case 0x4cbb30u: goto label_4cbb30;
        case 0x4cbb34u: goto label_4cbb34;
        case 0x4cbb38u: goto label_4cbb38;
        case 0x4cbb3cu: goto label_4cbb3c;
        case 0x4cbb40u: goto label_4cbb40;
        case 0x4cbb44u: goto label_4cbb44;
        case 0x4cbb48u: goto label_4cbb48;
        case 0x4cbb4cu: goto label_4cbb4c;
        case 0x4cbb50u: goto label_4cbb50;
        case 0x4cbb54u: goto label_4cbb54;
        case 0x4cbb58u: goto label_4cbb58;
        case 0x4cbb5cu: goto label_4cbb5c;
        case 0x4cbb60u: goto label_4cbb60;
        case 0x4cbb64u: goto label_4cbb64;
        case 0x4cbb68u: goto label_4cbb68;
        case 0x4cbb6cu: goto label_4cbb6c;
        case 0x4cbb70u: goto label_4cbb70;
        case 0x4cbb74u: goto label_4cbb74;
        case 0x4cbb78u: goto label_4cbb78;
        case 0x4cbb7cu: goto label_4cbb7c;
        case 0x4cbb80u: goto label_4cbb80;
        case 0x4cbb84u: goto label_4cbb84;
        case 0x4cbb88u: goto label_4cbb88;
        case 0x4cbb8cu: goto label_4cbb8c;
        case 0x4cbb90u: goto label_4cbb90;
        case 0x4cbb94u: goto label_4cbb94;
        case 0x4cbb98u: goto label_4cbb98;
        case 0x4cbb9cu: goto label_4cbb9c;
        case 0x4cbba0u: goto label_4cbba0;
        case 0x4cbba4u: goto label_4cbba4;
        case 0x4cbba8u: goto label_4cbba8;
        case 0x4cbbacu: goto label_4cbbac;
        case 0x4cbbb0u: goto label_4cbbb0;
        case 0x4cbbb4u: goto label_4cbbb4;
        case 0x4cbbb8u: goto label_4cbbb8;
        case 0x4cbbbcu: goto label_4cbbbc;
        case 0x4cbbc0u: goto label_4cbbc0;
        case 0x4cbbc4u: goto label_4cbbc4;
        case 0x4cbbc8u: goto label_4cbbc8;
        case 0x4cbbccu: goto label_4cbbcc;
        case 0x4cbbd0u: goto label_4cbbd0;
        case 0x4cbbd4u: goto label_4cbbd4;
        case 0x4cbbd8u: goto label_4cbbd8;
        case 0x4cbbdcu: goto label_4cbbdc;
        case 0x4cbbe0u: goto label_4cbbe0;
        case 0x4cbbe4u: goto label_4cbbe4;
        case 0x4cbbe8u: goto label_4cbbe8;
        case 0x4cbbecu: goto label_4cbbec;
        case 0x4cbbf0u: goto label_4cbbf0;
        case 0x4cbbf4u: goto label_4cbbf4;
        case 0x4cbbf8u: goto label_4cbbf8;
        case 0x4cbbfcu: goto label_4cbbfc;
        case 0x4cbc00u: goto label_4cbc00;
        case 0x4cbc04u: goto label_4cbc04;
        case 0x4cbc08u: goto label_4cbc08;
        case 0x4cbc0cu: goto label_4cbc0c;
        case 0x4cbc10u: goto label_4cbc10;
        case 0x4cbc14u: goto label_4cbc14;
        case 0x4cbc18u: goto label_4cbc18;
        case 0x4cbc1cu: goto label_4cbc1c;
        case 0x4cbc20u: goto label_4cbc20;
        case 0x4cbc24u: goto label_4cbc24;
        case 0x4cbc28u: goto label_4cbc28;
        case 0x4cbc2cu: goto label_4cbc2c;
        case 0x4cbc30u: goto label_4cbc30;
        case 0x4cbc34u: goto label_4cbc34;
        case 0x4cbc38u: goto label_4cbc38;
        case 0x4cbc3cu: goto label_4cbc3c;
        case 0x4cbc40u: goto label_4cbc40;
        case 0x4cbc44u: goto label_4cbc44;
        case 0x4cbc48u: goto label_4cbc48;
        case 0x4cbc4cu: goto label_4cbc4c;
        case 0x4cbc50u: goto label_4cbc50;
        case 0x4cbc54u: goto label_4cbc54;
        case 0x4cbc58u: goto label_4cbc58;
        case 0x4cbc5cu: goto label_4cbc5c;
        case 0x4cbc60u: goto label_4cbc60;
        case 0x4cbc64u: goto label_4cbc64;
        case 0x4cbc68u: goto label_4cbc68;
        case 0x4cbc6cu: goto label_4cbc6c;
        case 0x4cbc70u: goto label_4cbc70;
        case 0x4cbc74u: goto label_4cbc74;
        case 0x4cbc78u: goto label_4cbc78;
        case 0x4cbc7cu: goto label_4cbc7c;
        case 0x4cbc80u: goto label_4cbc80;
        case 0x4cbc84u: goto label_4cbc84;
        case 0x4cbc88u: goto label_4cbc88;
        case 0x4cbc8cu: goto label_4cbc8c;
        case 0x4cbc90u: goto label_4cbc90;
        case 0x4cbc94u: goto label_4cbc94;
        case 0x4cbc98u: goto label_4cbc98;
        case 0x4cbc9cu: goto label_4cbc9c;
        case 0x4cbca0u: goto label_4cbca0;
        case 0x4cbca4u: goto label_4cbca4;
        case 0x4cbca8u: goto label_4cbca8;
        case 0x4cbcacu: goto label_4cbcac;
        case 0x4cbcb0u: goto label_4cbcb0;
        case 0x4cbcb4u: goto label_4cbcb4;
        case 0x4cbcb8u: goto label_4cbcb8;
        case 0x4cbcbcu: goto label_4cbcbc;
        case 0x4cbcc0u: goto label_4cbcc0;
        case 0x4cbcc4u: goto label_4cbcc4;
        case 0x4cbcc8u: goto label_4cbcc8;
        case 0x4cbcccu: goto label_4cbccc;
        case 0x4cbcd0u: goto label_4cbcd0;
        case 0x4cbcd4u: goto label_4cbcd4;
        case 0x4cbcd8u: goto label_4cbcd8;
        case 0x4cbcdcu: goto label_4cbcdc;
        case 0x4cbce0u: goto label_4cbce0;
        case 0x4cbce4u: goto label_4cbce4;
        case 0x4cbce8u: goto label_4cbce8;
        case 0x4cbcecu: goto label_4cbcec;
        case 0x4cbcf0u: goto label_4cbcf0;
        case 0x4cbcf4u: goto label_4cbcf4;
        case 0x4cbcf8u: goto label_4cbcf8;
        case 0x4cbcfcu: goto label_4cbcfc;
        case 0x4cbd00u: goto label_4cbd00;
        case 0x4cbd04u: goto label_4cbd04;
        case 0x4cbd08u: goto label_4cbd08;
        case 0x4cbd0cu: goto label_4cbd0c;
        case 0x4cbd10u: goto label_4cbd10;
        case 0x4cbd14u: goto label_4cbd14;
        case 0x4cbd18u: goto label_4cbd18;
        case 0x4cbd1cu: goto label_4cbd1c;
        case 0x4cbd20u: goto label_4cbd20;
        case 0x4cbd24u: goto label_4cbd24;
        case 0x4cbd28u: goto label_4cbd28;
        case 0x4cbd2cu: goto label_4cbd2c;
        case 0x4cbd30u: goto label_4cbd30;
        case 0x4cbd34u: goto label_4cbd34;
        case 0x4cbd38u: goto label_4cbd38;
        case 0x4cbd3cu: goto label_4cbd3c;
        case 0x4cbd40u: goto label_4cbd40;
        case 0x4cbd44u: goto label_4cbd44;
        case 0x4cbd48u: goto label_4cbd48;
        case 0x4cbd4cu: goto label_4cbd4c;
        case 0x4cbd50u: goto label_4cbd50;
        case 0x4cbd54u: goto label_4cbd54;
        case 0x4cbd58u: goto label_4cbd58;
        case 0x4cbd5cu: goto label_4cbd5c;
        case 0x4cbd60u: goto label_4cbd60;
        case 0x4cbd64u: goto label_4cbd64;
        case 0x4cbd68u: goto label_4cbd68;
        case 0x4cbd6cu: goto label_4cbd6c;
        case 0x4cbd70u: goto label_4cbd70;
        case 0x4cbd74u: goto label_4cbd74;
        case 0x4cbd78u: goto label_4cbd78;
        case 0x4cbd7cu: goto label_4cbd7c;
        case 0x4cbd80u: goto label_4cbd80;
        case 0x4cbd84u: goto label_4cbd84;
        case 0x4cbd88u: goto label_4cbd88;
        case 0x4cbd8cu: goto label_4cbd8c;
        case 0x4cbd90u: goto label_4cbd90;
        case 0x4cbd94u: goto label_4cbd94;
        case 0x4cbd98u: goto label_4cbd98;
        case 0x4cbd9cu: goto label_4cbd9c;
        case 0x4cbda0u: goto label_4cbda0;
        case 0x4cbda4u: goto label_4cbda4;
        case 0x4cbda8u: goto label_4cbda8;
        case 0x4cbdacu: goto label_4cbdac;
        case 0x4cbdb0u: goto label_4cbdb0;
        case 0x4cbdb4u: goto label_4cbdb4;
        case 0x4cbdb8u: goto label_4cbdb8;
        case 0x4cbdbcu: goto label_4cbdbc;
        case 0x4cbdc0u: goto label_4cbdc0;
        case 0x4cbdc4u: goto label_4cbdc4;
        case 0x4cbdc8u: goto label_4cbdc8;
        case 0x4cbdccu: goto label_4cbdcc;
        case 0x4cbdd0u: goto label_4cbdd0;
        case 0x4cbdd4u: goto label_4cbdd4;
        case 0x4cbdd8u: goto label_4cbdd8;
        case 0x4cbddcu: goto label_4cbddc;
        case 0x4cbde0u: goto label_4cbde0;
        case 0x4cbde4u: goto label_4cbde4;
        case 0x4cbde8u: goto label_4cbde8;
        case 0x4cbdecu: goto label_4cbdec;
        case 0x4cbdf0u: goto label_4cbdf0;
        case 0x4cbdf4u: goto label_4cbdf4;
        case 0x4cbdf8u: goto label_4cbdf8;
        case 0x4cbdfcu: goto label_4cbdfc;
        case 0x4cbe00u: goto label_4cbe00;
        case 0x4cbe04u: goto label_4cbe04;
        case 0x4cbe08u: goto label_4cbe08;
        case 0x4cbe0cu: goto label_4cbe0c;
        case 0x4cbe10u: goto label_4cbe10;
        case 0x4cbe14u: goto label_4cbe14;
        case 0x4cbe18u: goto label_4cbe18;
        case 0x4cbe1cu: goto label_4cbe1c;
        case 0x4cbe20u: goto label_4cbe20;
        case 0x4cbe24u: goto label_4cbe24;
        case 0x4cbe28u: goto label_4cbe28;
        case 0x4cbe2cu: goto label_4cbe2c;
        case 0x4cbe30u: goto label_4cbe30;
        case 0x4cbe34u: goto label_4cbe34;
        case 0x4cbe38u: goto label_4cbe38;
        case 0x4cbe3cu: goto label_4cbe3c;
        case 0x4cbe40u: goto label_4cbe40;
        case 0x4cbe44u: goto label_4cbe44;
        case 0x4cbe48u: goto label_4cbe48;
        case 0x4cbe4cu: goto label_4cbe4c;
        case 0x4cbe50u: goto label_4cbe50;
        case 0x4cbe54u: goto label_4cbe54;
        default: break;
    }

    ctx->pc = 0x4cb958u;

label_4cb958:
    // 0x4cb958: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4cb958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4cb95c:
    // 0x4cb95c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4cb95cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_4cb960:
    // 0x4cb960: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4cb960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_4cb964:
    // 0x4cb964: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4cb964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_4cb968:
    // 0x4cb968: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4cb968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_4cb96c:
    // 0x4cb96c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4cb96cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_4cb970:
    // 0x4cb970: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4cb970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_4cb974:
    // 0x4cb974: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4cb974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_4cb978:
    // 0x4cb978: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x4cb978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
label_4cb97c:
    // 0x4cb97c: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x4cb97cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
label_4cb980:
    // 0x4cb980: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x4cb980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
label_4cb984:
    // 0x4cb984: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x4cb984u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
label_4cb988:
    // 0x4cb988: 0x8c623964  lw          $v0, 0x3964($v1)
    ctx->pc = 0x4cb988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 14692)));
label_4cb98c:
    // 0x4cb98c: 0x14400125  bnez        $v0, . + 4 + (0x125 << 2)
label_4cb990:
    if (ctx->pc == 0x4CB990u) {
        ctx->pc = 0x4CB990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CB98Cu;
        // 0x4cb990: 0x60f02d  daddu       $fp, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CB994u;
        goto label_4cb994;
    }
    ctx->pc = 0x4CB98Cu;
    {
        const bool branch_taken_0x4cb98c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4CB990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CB98Cu;
        // 0x4cb990: 0x60f02d  daddu       $fp, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cb98c) {
            ctx->pc = 0x4CBE24u;
            goto label_4cbe24;
        }
    }
    ctx->pc = 0x4CB994u;
label_4cb994:
    // 0x4cb994: 0xc110cb0  jal         func_4432C0
label_4cb998:
    if (ctx->pc == 0x4CB998u) {
        ctx->pc = 0x4CB99Cu;
        goto label_4cb99c;
    }
    ctx->pc = 0x4CB994u;
    SET_GPR_U32(ctx, 31, 0x4CB99Cu);
    ctx->pc = 0x4432C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4432C0u, 0x4CB994u, 0x4CB99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CB99Cu;
label_4cb99c:
    // 0x4cb99c: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x4cb99cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4cb9a0:
    // 0x4cb9a0: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x4cb9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_4cb9a4:
    // 0x4cb9a4: 0x8c6246a4  lw          $v0, 0x46A4($v1)
    ctx->pc = 0x4cb9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18084)));
label_4cb9a8:
    // 0x4cb9a8: 0x1440011a  bnez        $v0, . + 4 + (0x11A << 2)
label_4cb9ac:
    if (ctx->pc == 0x4CB9ACu) {
        ctx->pc = 0x4CB9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CB9A8u;
        // 0x4cb9ac: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CB9B0u;
        goto label_4cb9b0;
    }
    ctx->pc = 0x4CB9A8u;
    {
        const bool branch_taken_0x4cb9a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4CB9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CB9A8u;
        // 0x4cb9ac: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cb9a8) {
            ctx->pc = 0x4CBE14u;
            goto label_4cbe14;
        }
    }
    ctx->pc = 0x4CB9B0u;
label_4cb9b0:
    // 0x4cb9b0: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x4cb9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_4cb9b4:
    // 0x4cb9b4: 0x244546b8  addiu       $a1, $v0, 0x46B8
    ctx->pc = 0x4cb9b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 18104));
label_4cb9b8:
    // 0x4cb9b8: 0x246346d8  addiu       $v1, $v1, 0x46D8
    ctx->pc = 0x4cb9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18136));
label_4cb9bc:
    // 0x4cb9bc: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x4cb9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
label_4cb9c0:
    // 0x4cb9c0: 0x10430019  beq         $v0, $v1, . + 4 + (0x19 << 2)
label_4cb9c4:
    if (ctx->pc == 0x4CB9C4u) {
        ctx->pc = 0x4CB9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CB9C0u;
        // 0x4cb9c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CB9C8u;
        goto label_4cb9c8;
    }
    ctx->pc = 0x4CB9C0u;
    {
        const bool branch_taken_0x4cb9c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x4CB9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CB9C0u;
        // 0x4cb9c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cb9c0) {
            ctx->pc = 0x4CBA28u;
            goto label_4cba28;
        }
    }
    ctx->pc = 0x4CB9C8u;
label_4cb9c8:
    // 0x4cb9c8: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x4cb9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_4cb9cc:
    // 0x4cb9cc: 0xac6246a4  sw          $v0, 0x46A4($v1)
    ctx->pc = 0x4cb9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 18084), GPR_U32(ctx, 2));
label_4cb9d0:
    // 0x4cb9d0: 0x3c100071  lui         $s0, 0x71
    ctx->pc = 0x4cb9d0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)113 << 16));
label_4cb9d4:
    // 0x4cb9d4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x4cb9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4cb9d8:
    // 0x4cb9d8: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x4cb9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
label_4cb9dc:
    // 0x4cb9dc: 0xae0247c8  sw          $v0, 0x47C8($s0)
    ctx->pc = 0x4cb9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 18376), GPR_U32(ctx, 2));
label_4cb9e0:
    // 0x4cb9e0: 0x8e0347c8  lw          $v1, 0x47C8($s0)
    ctx->pc = 0x4cb9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18376)));
label_4cb9e4:
    // 0x4cb9e4: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x4cb9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_4cb9e8:
    // 0x4cb9e8: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x4cb9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
label_4cb9ec:
    // 0x4cb9ec: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x4cb9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_4cb9f0:
    // 0x4cb9f0: 0xaca3001c  sw          $v1, 0x1C($a1)
    ctx->pc = 0x4cb9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 3));
label_4cb9f4:
    // 0x4cb9f4: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x4cb9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
label_4cb9f8:
    // 0x4cb9f8: 0xac450018  sw          $a1, 0x18($v0)
    ctx->pc = 0x4cb9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 5));
label_4cb9fc:
    // 0x4cb9fc: 0x12e00003  beqz        $s7, . + 4 + (0x3 << 2)
label_4cba00:
    if (ctx->pc == 0x4CBA00u) {
        ctx->pc = 0x4CBA04u;
        goto label_4cba04;
    }
    ctx->pc = 0x4CB9FCu;
    {
        const bool branch_taken_0x4cb9fc = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cb9fc) {
            ctx->pc = 0x4CBA0Cu;
            goto label_4cba0c;
        }
    }
    ctx->pc = 0x4CBA04u;
label_4cba04:
    // 0x4cba04: 0xc110cc4  jal         func_443310
label_4cba08:
    if (ctx->pc == 0x4CBA08u) {
        ctx->pc = 0x4CBA0Cu;
        goto label_4cba0c;
    }
    ctx->pc = 0x4CBA04u;
    SET_GPR_U32(ctx, 31, 0x4CBA0Cu);
    ctx->pc = 0x443310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443310u, 0x4CBA04u, 0x4CBA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CBA0Cu;
label_4cba0c:
    // 0x4cba0c: 0x8e0247c8  lw          $v0, 0x47C8($s0)
    ctx->pc = 0x4cba0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18376)));
label_4cba10:
    // 0x4cba10: 0xc132e10  jal         func_4CB840
label_4cba14:
    if (ctx->pc == 0x4CBA14u) {
        ctx->pc = 0x4CBA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CBA10u;
        // 0x4cba14: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CBA18u;
        goto label_4cba18;
    }
    ctx->pc = 0x4CBA10u;
    SET_GPR_U32(ctx, 31, 0x4CBA18u);
    ctx->pc = 0x4CBA14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CBA10u;
    // 0x4cba14: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CB840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CB840u, 0x4CBA10u, 0x4CBA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CBA18u;
label_4cba18:
    // 0x4cba18: 0x1040ffda  beqz        $v0, . + 4 + (-0x26 << 2)
label_4cba1c:
    if (ctx->pc == 0x4CBA1Cu) {
        ctx->pc = 0x4CBA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CBA18u;
        // 0x4cba1c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CBA20u;
        goto label_4cba20;
    }
    ctx->pc = 0x4CBA18u;
    {
        const bool branch_taken_0x4cba18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CBA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CBA18u;
        // 0x4cba1c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cba18) {
            ctx->pc = 0x4CB984u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4cb984;
        }
    }
    ctx->pc = 0x4CBA20u;
label_4cba20:
    // 0x4cba20: 0x10000102  b           . + 4 + (0x102 << 2)
label_4cba24:
    if (ctx->pc == 0x4CBA24u) {
        ctx->pc = 0x4CBA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CBA20u;
        // 0x4cba24: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CBA28u;
        goto label_4cba28;
    }
    ctx->pc = 0x4CBA20u;
    {
        const bool branch_taken_0x4cba20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CBA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CBA20u;
        // 0x4cba24: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cba20) {
            ctx->pc = 0x4CBE2Cu;
            goto label_4cbe2c;
        }
    }
    ctx->pc = 0x4CBA28u;
label_4cba28:
    // 0x4cba28: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x4cba28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_4cba2c:
    // 0x4cba2c: 0x8c6247cc  lw          $v0, 0x47CC($v1)
    ctx->pc = 0x4cba2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18380)));
label_4cba30:
    // 0x4cba30: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_4cba34:
    if (ctx->pc == 0x4CBA34u) {
        ctx->pc = 0x4CBA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CBA30u;
        // 0x4cba34: 0x60982d  daddu       $s3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CBA38u;
        goto label_4cba38;
    }
    ctx->pc = 0x4CBA30u;
    {
        const bool branch_taken_0x4cba30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CBA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CBA30u;
        // 0x4cba34: 0x60982d  daddu       $s3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cba30) {
            ctx->pc = 0x4CBA88u;
            goto label_4cba88;
        }
    }
    ctx->pc = 0x4CBA38u;
label_4cba38:
    // 0x4cba38: 0x8e6247cc  lw          $v0, 0x47CC($s3)
    ctx->pc = 0x4cba38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18380)));
label_4cba3c:
    // 0x4cba3c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4cba3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4cba40:
    // 0x4cba40: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4cba40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4cba44:
    // 0x4cba44: 0x14640021  bne         $v1, $a0, . + 4 + (0x21 << 2)
label_4cba48:
    if (ctx->pc == 0x4CBA48u) {
        ctx->pc = 0x4CBA4Cu;
        goto label_4cba4c;
    }
    ctx->pc = 0x4CBA44u;
    {
        const bool branch_taken_0x4cba44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x4cba44) {
            ctx->pc = 0x4CBACCu;
            goto label_4cbacc;
        }
    }
    ctx->pc = 0x4CBA4Cu;
label_4cba4c:
    // 0x4cba4c: 0x8e7047cc  lw          $s0, 0x47CC($s3)
    ctx->pc = 0x4cba4cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18380)));
label_4cba50:
    // 0x4cba50: 0xae6047cc  sw          $zero, 0x47CC($s3)
    ctx->pc = 0x4cba50u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 18380), GPR_U32(ctx, 0));
label_4cba54:
    // 0x4cba54: 0x52e00004  beql        $s7, $zero, . + 4 + (0x4 << 2)
label_4cba58:
    if (ctx->pc == 0x4CBA58u) {
        ctx->pc = 0x4CBA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CBA54u;
        // 0x4cba58: 0x8e03001c  lw          $v1, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CBA5Cu;
        goto label_4cba5c;
    }
    ctx->pc = 0x4CBA54u;
    {
        const bool branch_taken_0x4cba54 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cba54) {
            ctx->pc = 0x4CBA58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4CBA54u;
            // 0x4cba58: 0x8e03001c  lw          $v1, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4CBA68u;
            goto label_4cba68;
        }
    }
    ctx->pc = 0x4CBA5Cu;
label_4cba5c:
    // 0x4cba5c: 0xc110cc4  jal         func_443310
label_4cba60:
    if (ctx->pc == 0x4CBA60u) {
        ctx->pc = 0x4CBA64u;
        goto label_4cba64;
    }
    ctx->pc = 0x4CBA5Cu;
    SET_GPR_U32(ctx, 31, 0x4CBA64u);
    ctx->pc = 0x443310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443310u, 0x4CBA5Cu, 0x4CBA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CBA64u;
label_4cba64:
    // 0x4cba64: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x4cba64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_4cba68:
    // 0x4cba68: 0x1060ffc6  beqz        $v1, . + 4 + (-0x3A << 2)
label_4cba6c:
    if (ctx->pc == 0x4CBA6Cu) {
        ctx->pc = 0x4CBA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CBA68u;
        // 0x4cba6c: 0x8fc23964  lw          $v0, 0x3964($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 14692)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CBA70u;
        goto label_4cba70;
    }
    ctx->pc = 0x4CBA68u;
    {
        const bool branch_taken_0x4cba68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CBA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CBA68u;
        // 0x4cba6c: 0x8fc23964  lw          $v0, 0x3964($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 14692)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cba68) {
            ctx->pc = 0x4CB984u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4cb984;
        }
    }
    ctx->pc = 0x4CBA70u;
label_4cba70:
    // 0x4cba70: 0x544000ed  bnel        $v0, $zero, . + 4 + (0xED << 2)
label_4cba74:
    if (ctx->pc == 0x4CBA74u) {
        ctx->pc = 0x4CBA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CBA70u;
        // 0x4cba74: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CBA78u;
        goto label_4cba78;
    }
    ctx->pc = 0x4CBA70u;
    {
        const bool branch_taken_0x4cba70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4cba70) {
            ctx->pc = 0x4CBA74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4CBA70u;
            // 0x4cba74: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4CBE28u;
            goto label_4cbe28;
        }
    }
    ctx->pc = 0x4CBA78u;
label_4cba78:
    // 0x4cba78: 0x60f809  jalr        $v1
label_4cba7c:
    if (ctx->pc == 0x4CBA7Cu) {
        ctx->pc = 0x4CBA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CBA78u;
        // 0x4cba7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CBA80u;
        goto label_4cba80;
    }
    ctx->pc = 0x4CBA78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4CBA80u);
        ctx->pc = 0x4CBA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CBA78u;
        // 0x4cba7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4CBA78u, 0x4CBA80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4CBA80u;
label_4cba80:
    // 0x4cba80: 0x1000ffc1  b           . + 4 + (-0x3F << 2)
label_4cba84:
    if (ctx->pc == 0x4CBA84u) {
        ctx->pc = 0x4CBA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CBA80u;
        // 0x4cba84: 0x3c030053  lui         $v1, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CBA88u;
        goto label_4cba88;
    }
    ctx->pc = 0x4CBA80u;
    {
        const bool branch_taken_0x4cba80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CBA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CBA80u;
        // 0x4cba84: 0x3c030053  lui         $v1, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cba80) {
            ctx->pc = 0x4CB988u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4cb988;
        }
    }
    ctx->pc = 0x4CBA88u;
label_4cba88:
    // 0x4cba88: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x4cba88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_4cba8c:
    // 0x4cba8c: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x4cba8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_4cba90:
    // 0x4cba90: 0x244546f8  addiu       $a1, $v0, 0x46F8
    ctx->pc = 0x4cba90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 18168));
label_4cba94:
    // 0x4cba94: 0x24634720  addiu       $v1, $v1, 0x4720
    ctx->pc = 0x4cba94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18208));
label_4cba98:
    // 0x4cba98: 0x8ca20024  lw          $v0, 0x24($a1)
    ctx->pc = 0x4cba98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
label_4cba9c:
    // 0x4cba9c: 0x104300dd  beq         $v0, $v1, . + 4 + (0xDD << 2)
label_4cbaa0:
    if (ctx->pc == 0x4CBAA0u) {
        ctx->pc = 0x4CBAA4u;
        goto label_4cbaa4;
    }
    ctx->pc = 0x4CBA9Cu;
    {
        const bool branch_taken_0x4cba9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x4cba9c) {
            ctx->pc = 0x4CBE14u;
            goto label_4cbe14;
        }
    }
    ctx->pc = 0x4CBAA4u;
label_4cbaa4:
    // 0x4cbaa4: 0x8ca30024  lw          $v1, 0x24($a1)
    ctx->pc = 0x4cbaa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
label_4cbaa8:
    // 0x4cbaa8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x4cbaa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4cbaac:
    // 0x4cbaac: 0xae6347cc  sw          $v1, 0x47CC($s3)
    ctx->pc = 0x4cbaacu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 18380), GPR_U32(ctx, 3));
label_4cbab0:
    // 0x4cbab0: 0x8e6247cc  lw          $v0, 0x47CC($s3)
    ctx->pc = 0x4cbab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18380)));
label_4cbab4:
    // 0x4cbab4: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x4cbab4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_4cbab8:
    // 0x4cbab8: 0x8ca30024  lw          $v1, 0x24($a1)
    ctx->pc = 0x4cbab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
label_4cbabc:
    // 0x4cbabc: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x4cbabcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_4cbac0:
    // 0x4cbac0: 0xaca20024  sw          $v0, 0x24($a1)
    ctx->pc = 0x4cbac0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 2));
label_4cbac4:
    // 0x4cbac4: 0x8ca30024  lw          $v1, 0x24($a1)
    ctx->pc = 0x4cbac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
label_4cbac8:
    // 0x4cbac8: 0xac650020  sw          $a1, 0x20($v1)
    ctx->pc = 0x4cbac8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 5));
label_4cbacc:
    // 0x4cbacc: 0x8e6347cc  lw          $v1, 0x47CC($s3)
    ctx->pc = 0x4cbaccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18380)));
label_4cbad0:
    // 0x4cbad0: 0x3c088100  lui         $t0, 0x8100
    ctx->pc = 0x4cbad0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)33024 << 16));
label_4cbad4:
    // 0x4cbad4: 0x8e6247cc  lw          $v0, 0x47CC($s3)
    ctx->pc = 0x4cbad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18380)));
label_4cbad8:
    // 0x4cbad8: 0x8c670010  lw          $a3, 0x10($v1)
    ctx->pc = 0x4cbad8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_4cbadc:
    // 0x4cbadc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4cbadcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4cbae0:
    // 0x4cbae0: 0x8e6547cc  lw          $a1, 0x47CC($s3)
    ctx->pc = 0x4cbae0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18380)));
label_4cbae4:
    // 0x4cbae4: 0x8e6247cc  lw          $v0, 0x47CC($s3)
    ctx->pc = 0x4cbae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18380)));
label_4cbae8:
    // 0x4cbae8: 0xe49021  addu        $s2, $a3, $a0
    ctx->pc = 0x4cbae8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_4cbaec:
    // 0x4cbaec: 0x8ca6000c  lw          $a2, 0xC($a1)
    ctx->pc = 0x4cbaecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_4cbaf0:
    // 0x4cbaf0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x4cbaf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4cbaf4:
    // 0x4cbaf4: 0x8e6447cc  lw          $a0, 0x47CC($s3)
    ctx->pc = 0x4cbaf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18380)));
label_4cbaf8:
    // 0x4cbaf8: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x4cbaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_4cbafc:
    // 0x4cbafc: 0x48102a  slt         $v0, $v0, $t0
    ctx->pc = 0x4cbafcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_4cbb00:
    // 0x4cbb00: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4cbb04:
    if (ctx->pc == 0x4CBB04u) {
        ctx->pc = 0x4CBB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CBB00u;
        // 0x4cbb04: 0xc38823  subu        $s1, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CBB08u;
        goto label_4cbb08;
    }
    ctx->pc = 0x4CBB00u;
    {
        const bool branch_taken_0x4cbb00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CBB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CBB00u;
        // 0x4cbb04: 0xc38823  subu        $s1, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cbb00) {
            ctx->pc = 0x4CBB1Cu;
            goto label_4cbb1c;
        }
    }
    ctx->pc = 0x4CBB08u;
label_4cbb08:
    // 0x4cbb08: 0x8e6247cc  lw          $v0, 0x47CC($s3)
    ctx->pc = 0x4cbb08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18380)));
label_4cbb0c:
    // 0x4cbb0c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x4cbb0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_4cbb10:
    // 0x4cbb10: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x4cbb10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_4cbb14:
    // 0x4cbb14: 0x10000002  b           . + 4 + (0x2 << 2)
label_4cbb18:
    if (ctx->pc == 0x4CBB18u) {
        ctx->pc = 0x4CBB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CBB14u;
        // 0x4cbb18: 0x641823  subu        $v1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CBB1Cu;
        goto label_4cbb1c;
    }
    ctx->pc = 0x4CBB14u;
    {
        const bool branch_taken_0x4cbb14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CBB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CBB14u;
        // 0x4cbb18: 0x641823  subu        $v1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cbb14) {
            ctx->pc = 0x4CBB20u;
            goto label_4cbb20;
        }
    }
    ctx->pc = 0x4CBB1Cu;
label_4cbb1c:
    // 0x4cbb1c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x4cbb1cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4cbb20:
    // 0x4cbb20: 0x8e6247cc  lw          $v0, 0x47CC($s3)
    ctx->pc = 0x4cbb20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18380)));
label_4cbb24:
    // 0x4cbb24: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x4cbb24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
label_4cbb28:
    // 0x4cbb28: 0x8e6547cc  lw          $a1, 0x47CC($s3)
    ctx->pc = 0x4cbb28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18380)));
label_4cbb2c:
    // 0x4cbb2c: 0x4257a  dsrl        $a0, $a0, 21
    ctx->pc = 0x4cbb2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 21);
label_4cbb30:
    // 0x4cbb30: 0x8c470008  lw          $a3, 0x8($v0)
    ctx->pc = 0x4cbb30u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_4cbb34:
    // 0x4cbb34: 0x31ac0  sll         $v1, $v1, 11
    ctx->pc = 0x4cbb34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
label_4cbb38:
    // 0x4cbb38: 0x8ca60004  lw          $a2, 0x4($a1)
    ctx->pc = 0x4cbb38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_4cbb3c:
    // 0x4cbb3c: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x4cbb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_4cbb40:
    // 0x4cbb40: 0x40682d  daddu       $t5, $v0, $zero
    ctx->pc = 0x4cbb40u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4cbb44:
    // 0x4cbb44: 0x8c454804  lw          $a1, 0x4804($v0)
    ctx->pc = 0x4cbb44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18436)));
label_4cbb48:
    // 0x4cbb48: 0xe63821  addu        $a3, $a3, $a2
    ctx->pc = 0x4cbb48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_4cbb4c:
    // 0x4cbb4c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x4cbb4cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4cbb50:
    // 0x4cbb50: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x4cbb50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
label_4cbb54:
    // 0x4cbb54: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x4cbb54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_4cbb58:
    // 0x4cbb58: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x4cbb58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_4cbb5c:
    // 0x4cbb5c: 0x30670fff  andi        $a3, $v1, 0xFFF
    ctx->pc = 0x4cbb5cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
label_4cbb60:
    // 0x4cbb60: 0x82202d  daddu       $a0, $a0, $v0
    ctx->pc = 0x4cbb60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 2));
label_4cbb64:
    // 0x4cbb64: 0x4ad38  dsll        $s5, $a0, 20
    ctx->pc = 0x4cbb64u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 4) << 20);
label_4cbb68:
    // 0x4cbb68: 0x15a83f  dsra32      $s5, $s5, 0
    ctx->pc = 0x4cbb68u;
    SET_GPR_S64(ctx, 21, GPR_S64(ctx, 21) >> (32 + 0));
label_4cbb6c:
    // 0x4cbb6c: 0x10a00054  beqz        $a1, . + 4 + (0x54 << 2)
label_4cbb70:
    if (ctx->pc == 0x4CBB70u) {
        ctx->pc = 0x4CBB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CBB6Cu;
        // 0x4cbb70: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CBB74u;
        goto label_4cbb74;
    }
    ctx->pc = 0x4CBB6Cu;
    {
        const bool branch_taken_0x4cbb6c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CBB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CBB6Cu;
        // 0x4cbb70: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cbb6c) {
            ctx->pc = 0x4CBCC0u;
            goto label_4cbcc0;
        }
    }
    ctx->pc = 0x4CBB74u;
label_4cbb74:
    // 0x4cbb74: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x4cbb74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_4cbb78:
    // 0x4cbb78: 0x3c040053  lui         $a0, 0x53
    ctx->pc = 0x4cbb78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)83 << 16));
label_4cbb7c:
    // 0x4cbb7c: 0x24464888  addiu       $a2, $v0, 0x4888
    ctx->pc = 0x4cbb7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 18568));
label_4cbb80:
    // 0x4cbb80: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x4cbb80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_4cbb84:
    // 0x4cbb84: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x4cbb84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_4cbb88:
    // 0x4cbb88: 0xc0602d  daddu       $t4, $a2, $zero
    ctx->pc = 0x4cbb88u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4cbb8c:
    // 0x4cbb8c: 0x24484808  addiu       $t0, $v0, 0x4808
    ctx->pc = 0x4cbb8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 18440));
label_4cbb90:
    // 0x4cbb90: 0x246b4848  addiu       $t3, $v1, 0x4848
    ctx->pc = 0x4cbb90u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 18504));
label_4cbb94:
    // 0x4cbb94: 0x248a3970  addiu       $t2, $a0, 0x3970
    ctx->pc = 0x4cbb94u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 14704));
label_4cbb98:
    // 0x4cbb98: 0x3c160053  lui         $s6, 0x53
    ctx->pc = 0x4cbb98u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)83 << 16));
label_4cbb9c:
    // 0x4cbb9c: 0x0  nop
    ctx->pc = 0x4cbb9cu;
    // NOP
label_4cbba0:
    // 0x4cbba0: 0x8e6247cc  lw          $v0, 0x47CC($s3)
    ctx->pc = 0x4cbba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18380)));
label_4cbba4:
    // 0x4cbba4: 0x8d440000  lw          $a0, 0x0($t2)
    ctx->pc = 0x4cbba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_4cbba8:
    // 0x4cbba8: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x4cbba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_4cbbac:
    // 0x4cbbac: 0x14830037  bne         $a0, $v1, . + 4 + (0x37 << 2)
label_4cbbb0:
    if (ctx->pc == 0x4CBBB0u) {
        ctx->pc = 0x4CBBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CBBACu;
        // 0x4cbbb0: 0x91080  sll         $v0, $t1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CBBB4u;
        goto label_4cbbb4;
    }
    ctx->pc = 0x4CBBACu;
    {
        const bool branch_taken_0x4cbbac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x4CBBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CBBACu;
        // 0x4cbbb0: 0x91080  sll         $v0, $t1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cbbac) {
            ctx->pc = 0x4CBC8Cu;
            goto label_4cbc8c;
        }
    }
    ctx->pc = 0x4CBBB4u;
label_4cbbb4:
    // 0x4cbbb4: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x4cbbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_4cbbb8:
    // 0x4cbbb8: 0x14550041  bne         $v0, $s5, . + 4 + (0x41 << 2)
label_4cbbbc:
    if (ctx->pc == 0x4CBBBCu) {
        ctx->pc = 0x4CBBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CBBB8u;
        // 0x4cbbbc: 0x280482d  daddu       $t1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CBBC0u;
        goto label_4cbbc0;
    }
    ctx->pc = 0x4CBBB8u;
    {
        const bool branch_taken_0x4cbbb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        ctx->pc = 0x4CBBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CBBB8u;
        // 0x4cbbbc: 0x280482d  daddu       $t1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cbbb8) {
            ctx->pc = 0x4CBCC0u;
            goto label_4cbcc0;
        }
    }
    ctx->pc = 0x4CBBC0u;
label_4cbbc0:
    // 0x4cbbc0: 0x24021000  addiu       $v0, $zero, 0x1000
    ctx->pc = 0x4cbbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
label_4cbbc4:
    // 0x4cbbc4: 0x478023  subu        $s0, $v0, $a3
    ctx->pc = 0x4cbbc4u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_4cbbc8:
    // 0x4cbbc8: 0x211182b  sltu        $v1, $s0, $s1
    ctx->pc = 0x4cbbc8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_4cbbcc:
    // 0x4cbbcc: 0x14600021  bnez        $v1, . + 4 + (0x21 << 2)
label_4cbbd0:
    if (ctx->pc == 0x4CBBD0u) {
        ctx->pc = 0x4CBBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CBBCCu;
        // 0x4cbbd0: 0x8d050000  lw          $a1, 0x0($t0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CBBD4u;
        goto label_4cbbd4;
    }
    ctx->pc = 0x4CBBCCu;
    {
        const bool branch_taken_0x4cbbcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4CBBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CBBCCu;
        // 0x4cbbd0: 0x8d050000  lw          $a1, 0x0($t0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cbbcc) {
            ctx->pc = 0x4CBC54u;
            goto label_4cbc54;
        }
    }
    ctx->pc = 0x4CBBD4u;
label_4cbbd4:
    // 0x4cbbd4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4cbbd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4cbbd8:
    // 0x4cbbd8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4cbbd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4cbbdc:
    // 0x4cbbdc: 0xc133518  jal         func_4CD460
label_4cbbe0:
    if (ctx->pc == 0x4CBBE0u) {
        ctx->pc = 0x4CBBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CBBDCu;
        // 0x4cbbe0: 0xa72821  addu        $a1, $a1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CBBE4u;
        goto label_4cbbe4;
    }
    ctx->pc = 0x4CBBDCu;
    SET_GPR_U32(ctx, 31, 0x4CBBE4u);
    ctx->pc = 0x4CBBE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CBBDCu;
    // 0x4cbbe0: 0xa72821  addu        $a1, $a1, $a3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CD460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CD460u, 0x4CBBDCu, 0x4CBBE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CBBE4u;
label_4cbbe4:
    // 0x4cbbe4: 0x8e6347cc  lw          $v1, 0x47CC($s3)
    ctx->pc = 0x4cbbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18380)));
label_4cbbe8:
    // 0x4cbbe8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x4cbbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4cbbec:
    // 0x4cbbec: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x4cbbecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_4cbbf0:
    // 0x4cbbf0: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x4cbbf0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_4cbbf4:
    // 0x4cbbf4: 0x8e7047cc  lw          $s0, 0x47CC($s3)
    ctx->pc = 0x4cbbf4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18380)));
label_4cbbf8:
    // 0x4cbbf8: 0xae6047cc  sw          $zero, 0x47CC($s3)
    ctx->pc = 0x4cbbf8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 18380), GPR_U32(ctx, 0));
label_4cbbfc:
    // 0x4cbbfc: 0x12e00003  beqz        $s7, . + 4 + (0x3 << 2)
label_4cbc00:
    if (ctx->pc == 0x4CBC00u) {
        ctx->pc = 0x4CBC04u;
        goto label_4cbc04;
    }
    ctx->pc = 0x4CBBFCu;
    {
        const bool branch_taken_0x4cbbfc = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cbbfc) {
            ctx->pc = 0x4CBC0Cu;
            goto label_4cbc0c;
        }
    }
    ctx->pc = 0x4CBC04u;
label_4cbc04:
    // 0x4cbc04: 0xc110cc4  jal         func_443310
label_4cbc08:
    if (ctx->pc == 0x4CBC08u) {
        ctx->pc = 0x4CBC0Cu;
        goto label_4cbc0c;
    }
    ctx->pc = 0x4CBC04u;
    SET_GPR_U32(ctx, 31, 0x4CBC0Cu);
    ctx->pc = 0x443310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443310u, 0x4CBC04u, 0x4CBC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CBC0Cu;
label_4cbc0c:
    // 0x4cbc0c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4cbc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4cbc10:
    // 0x4cbc10: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x4cbc10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4cbc14:
    // 0x4cbc14: 0x10620002  beq         $v1, $v0, . + 4 + (0x2 << 2)
label_4cbc18:
    if (ctx->pc == 0x4CBC18u) {
        ctx->pc = 0x4CBC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CBC14u;
        // 0x4cbc18: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CBC1Cu;
        goto label_4cbc1c;
    }
    ctx->pc = 0x4CBC14u;
    {
        const bool branch_taken_0x4cbc14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4CBC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CBC14u;
        // 0x4cbc18: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cbc14) {
            ctx->pc = 0x4CBC20u;
            goto label_4cbc20;
        }
    }
    ctx->pc = 0x4CBC1Cu;
label_4cbc1c:
    // 0x4cbc1c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4cbc1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_4cbc20:
    // 0x4cbc20: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x4cbc20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_4cbc24:
    // 0x4cbc24: 0x1060ff57  beqz        $v1, . + 4 + (-0xA9 << 2)
label_4cbc28:
    if (ctx->pc == 0x4CBC28u) {
        ctx->pc = 0x4CBC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CBC24u;
        // 0x4cbc28: 0x8fc23964  lw          $v0, 0x3964($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 14692)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CBC2Cu;
        goto label_4cbc2c;
    }
    ctx->pc = 0x4CBC24u;
    {
        const bool branch_taken_0x4cbc24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CBC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CBC24u;
        // 0x4cbc28: 0x8fc23964  lw          $v0, 0x3964($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 14692)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cbc24) {
            ctx->pc = 0x4CB984u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4cb984;
        }
    }
    ctx->pc = 0x4CBC2Cu;
label_4cbc2c:
    // 0x4cbc2c: 0x1440007d  bnez        $v0, . + 4 + (0x7D << 2)
label_4cbc30:
    if (ctx->pc == 0x4CBC30u) {
        ctx->pc = 0x4CBC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CBC2Cu;
        // 0x4cbc30: 0x8ec239c8  lw          $v0, 0x39C8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 14792)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CBC34u;
        goto label_4cbc34;
    }
    ctx->pc = 0x4CBC2Cu;
    {
        const bool branch_taken_0x4cbc2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4CBC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CBC2Cu;
        // 0x4cbc30: 0x8ec239c8  lw          $v0, 0x39C8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 14792)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cbc2c) {
            ctx->pc = 0x4CBE24u;
            goto label_4cbe24;
        }
    }
    ctx->pc = 0x4CBC34u;
label_4cbc34:
    // 0x4cbc34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4cbc34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4cbc38:
    // 0x4cbc38: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4cbc38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_4cbc3c:
    // 0x4cbc3c: 0x60f809  jalr        $v1
label_4cbc40:
    if (ctx->pc == 0x4CBC40u) {
        ctx->pc = 0x4CBC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CBC3Cu;
        // 0x4cbc40: 0xaec239c8  sw          $v0, 0x39C8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 14792), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CBC44u;
        goto label_4cbc44;
    }
    ctx->pc = 0x4CBC3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4CBC44u);
        ctx->pc = 0x4CBC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CBC3Cu;
        // 0x4cbc40: 0xaec239c8  sw          $v0, 0x39C8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 14792), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4CBC3Cu, 0x4CBC44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4CBC44u;
label_4cbc44:
    // 0x4cbc44: 0x8ec239c8  lw          $v0, 0x39C8($s6)
    ctx->pc = 0x4cbc44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 14792)));
label_4cbc48:
    // 0x4cbc48: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4cbc48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4cbc4c:
    // 0x4cbc4c: 0x1000ff4d  b           . + 4 + (-0xB3 << 2)
label_4cbc50:
    if (ctx->pc == 0x4CBC50u) {
        ctx->pc = 0x4CBC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CBC4Cu;
        // 0x4cbc50: 0xaec239c8  sw          $v0, 0x39C8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 14792), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CBC54u;
        goto label_4cbc54;
    }
    ctx->pc = 0x4CBC4Cu;
    {
        const bool branch_taken_0x4cbc4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CBC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CBC4Cu;
        // 0x4cbc50: 0xaec239c8  sw          $v0, 0x39C8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 14792), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cbc4c) {
            ctx->pc = 0x4CB984u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4cb984;
        }
    }
    ctx->pc = 0x4CBC54u;
label_4cbc54:
    // 0x4cbc54: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4cbc54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4cbc58:
    // 0x4cbc58: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4cbc58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4cbc5c:
    // 0x4cbc5c: 0x2509021  addu        $s2, $s2, $s0
    ctx->pc = 0x4cbc5cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_4cbc60:
    // 0x4cbc60: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x4cbc60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_4cbc64:
    // 0x4cbc64: 0xc133518  jal         func_4CD460
label_4cbc68:
    if (ctx->pc == 0x4CBC68u) {
        ctx->pc = 0x4CBC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CBC64u;
        // 0x4cbc68: 0x2308823  subu        $s1, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CBC6Cu;
        goto label_4cbc6c;
    }
    ctx->pc = 0x4CBC64u;
    SET_GPR_U32(ctx, 31, 0x4CBC6Cu);
    ctx->pc = 0x4CBC68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CBC64u;
    // 0x4cbc68: 0x2308823  subu        $s1, $s1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CD460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CD460u, 0x4CBC64u, 0x4CBC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CBC6Cu;
label_4cbc6c:
    // 0x4cbc6c: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x4cbc6cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_4cbc70:
    // 0x4cbc70: 0x8e6347cc  lw          $v1, 0x47CC($s3)
    ctx->pc = 0x4cbc70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18380)));
label_4cbc74:
    // 0x4cbc74: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4cbc74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4cbc78:
    // 0x4cbc78: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x4cbc78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4cbc7c:
    // 0x4cbc7c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x4cbc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_4cbc80:
    // 0x4cbc80: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x4cbc80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_4cbc84:
    // 0x4cbc84: 0x1000000e  b           . + 4 + (0xE << 2)
label_4cbc88:
    if (ctx->pc == 0x4CBC88u) {
        ctx->pc = 0x4CBC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CBC84u;
        // 0x4cbc88: 0x280482d  daddu       $t1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CBC8Cu;
        goto label_4cbc8c;
    }
    ctx->pc = 0x4CBC84u;
    {
        const bool branch_taken_0x4cbc84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CBC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CBC84u;
        // 0x4cbc88: 0x280482d  daddu       $t1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cbc84) {
            ctx->pc = 0x4CBCC0u;
            goto label_4cbcc0;
        }
    }
    ctx->pc = 0x4CBC8Cu;
label_4cbc8c:
    // 0x4cbc8c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4cbc8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_4cbc90:
    // 0x4cbc90: 0x4c1021  addu        $v0, $v0, $t4
    ctx->pc = 0x4cbc90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
label_4cbc94:
    // 0x4cbc94: 0x8da44804  lw          $a0, 0x4804($t5)
    ctx->pc = 0x4cbc94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 18436)));
label_4cbc98:
    // 0x4cbc98: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x4cbc98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4cbc9c:
    // 0x4cbc9c: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x4cbc9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_4cbca0:
    // 0x4cbca0: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x4cbca0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_4cbca4:
    // 0x4cbca4: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x4cbca4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
label_4cbca8:
    // 0x4cbca8: 0x65182b  sltu        $v1, $v1, $a1
    ctx->pc = 0x4cbca8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_4cbcac:
    // 0x4cbcac: 0x283480b  movn        $t1, $s4, $v1
    ctx->pc = 0x4cbcacu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 20));
label_4cbcb0:
    // 0x4cbcb0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x4cbcb0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_4cbcb4:
    // 0x4cbcb4: 0x284202b  sltu        $a0, $s4, $a0
    ctx->pc = 0x4cbcb4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4cbcb8:
    // 0x4cbcb8: 0x1480ffb9  bnez        $a0, . + 4 + (-0x47 << 2)
label_4cbcbc:
    if (ctx->pc == 0x4CBCBCu) {
        ctx->pc = 0x4CBCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CBCB8u;
        // 0x4cbcbc: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CBCC0u;
        goto label_4cbcc0;
    }
    ctx->pc = 0x4CBCB8u;
    {
        const bool branch_taken_0x4cbcb8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4CBCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CBCB8u;
        // 0x4cbcbc: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cbcb8) {
            ctx->pc = 0x4CBBA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4cbba0;
        }
    }
    ctx->pc = 0x4CBCC0u;
label_4cbcc0:
    // 0x4cbcc0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4cbcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4cbcc4:
    // 0x4cbcc4: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x4cbcc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
label_4cbcc8:
    // 0x4cbcc8: 0x2e231000  sltiu       $v1, $s1, 0x1000
    ctx->pc = 0x4cbcc8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)4096) ? 1 : 0);
label_4cbccc:
    // 0x4cbccc: 0xac8246a4  sw          $v0, 0x46A4($a0)
    ctx->pc = 0x4cbcccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 18084), GPR_U32(ctx, 2));
label_4cbcd0:
    // 0x4cbcd0: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_4cbcd4:
    if (ctx->pc == 0x4CBCD4u) {
        ctx->pc = 0x4CBCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CBCD0u;
        // 0x4cbcd4: 0x3c080053  lui         $t0, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CBCD8u;
        goto label_4cbcd8;
    }
    ctx->pc = 0x4CBCD0u;
    {
        const bool branch_taken_0x4cbcd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4CBCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CBCD0u;
        // 0x4cbcd4: 0x3c080053  lui         $t0, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cbcd0) {
            ctx->pc = 0x4CBCECu;
            goto label_4cbcec;
        }
    }
    ctx->pc = 0x4CBCD8u;
label_4cbcd8:
    // 0x4cbcd8: 0x3242003f  andi        $v0, $s2, 0x3F
    ctx->pc = 0x4cbcd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)63);
label_4cbcdc:
    // 0x4cbcdc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_4cbce0:
    if (ctx->pc == 0x4CBCE0u) {
        ctx->pc = 0x4CBCE4u;
        goto label_4cbce4;
    }
    ctx->pc = 0x4CBCDCu;
    {
        const bool branch_taken_0x4cbcdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4cbcdc) {
            ctx->pc = 0x4CBCECu;
            goto label_4cbcec;
        }
    }
    ctx->pc = 0x4CBCE4u;
label_4cbce4:
    // 0x4cbce4: 0x10e0001a  beqz        $a3, . + 4 + (0x1A << 2)
label_4cbce8:
    if (ctx->pc == 0x4CBCE8u) {
        ctx->pc = 0x4CBCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CBCE4u;
        // 0x4cbce8: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CBCECu;
        goto label_4cbcec;
    }
    ctx->pc = 0x4CBCE4u;
    {
        const bool branch_taken_0x4cbce4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CBCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CBCE4u;
        // 0x4cbce8: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cbce4) {
            ctx->pc = 0x4CBD50u;
            goto label_4cbd50;
        }
    }
    ctx->pc = 0x4CBCECu;
label_4cbcec:
    // 0x4cbcec: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x4cbcecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_4cbcf0:
    // 0x4cbcf0: 0x8d0639b0  lw          $a2, 0x39B0($t0)
    ctx->pc = 0x4cbcf0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 14768)));
label_4cbcf4:
    // 0x4cbcf4: 0x92880  sll         $a1, $t1, 2
    ctx->pc = 0x4cbcf4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_4cbcf8:
    // 0x4cbcf8: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x4cbcf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_4cbcfc:
    // 0x4cbcfc: 0x24424888  addiu       $v0, $v0, 0x4888
    ctx->pc = 0x4cbcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18568));
label_4cbd00:
    // 0x4cbd00: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x4cbd00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_4cbd04:
    // 0x4cbd04: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x4cbd04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_4cbd08:
    // 0x4cbd08: 0x24634848  addiu       $v1, $v1, 0x4848
    ctx->pc = 0x4cbd08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18504));
label_4cbd0c:
    // 0x4cbd0c: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x4cbd0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
label_4cbd10:
    // 0x4cbd10: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x4cbd10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_4cbd14:
    // 0x4cbd14: 0x3c040053  lui         $a0, 0x53
    ctx->pc = 0x4cbd14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)83 << 16));
label_4cbd18:
    // 0x4cbd18: 0xac750000  sw          $s5, 0x0($v1)
    ctx->pc = 0x4cbd18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 21));
label_4cbd1c:
    // 0x4cbd1c: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x4cbd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_4cbd20:
    // 0x4cbd20: 0x8e6347cc  lw          $v1, 0x47CC($s3)
    ctx->pc = 0x4cbd20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18380)));
label_4cbd24:
    // 0x4cbd24: 0x24843970  addiu       $a0, $a0, 0x3970
    ctx->pc = 0x4cbd24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14704));
label_4cbd28:
    // 0x4cbd28: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x4cbd28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_4cbd2c:
    // 0x4cbd2c: 0x24424808  addiu       $v0, $v0, 0x4808
    ctx->pc = 0x4cbd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18440));
label_4cbd30:
    // 0x4cbd30: 0x8c670018  lw          $a3, 0x18($v1)
    ctx->pc = 0x4cbd30u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_4cbd34:
    // 0x4cbd34: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x4cbd34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_4cbd38:
    // 0x4cbd38: 0xad0639b0  sw          $a2, 0x39B0($t0)
    ctx->pc = 0x4cbd38u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 14768), GPR_U32(ctx, 6));
label_4cbd3c:
    // 0x4cbd3c: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x4cbd3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_4cbd40:
    // 0x4cbd40: 0xac870000  sw          $a3, 0x0($a0)
    ctx->pc = 0x4cbd40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 7));
label_4cbd44:
    // 0x4cbd44: 0xac694800  sw          $t1, 0x4800($v1)
    ctx->pc = 0x4cbd44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 18432), GPR_U32(ctx, 9));
label_4cbd48:
    // 0x4cbd48: 0x10000004  b           . + 4 + (0x4 << 2)
label_4cbd4c:
    if (ctx->pc == 0x4CBD4Cu) {
        ctx->pc = 0x4CBD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CBD48u;
        // 0x4cbd4c: 0x8cb00000  lw          $s0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CBD50u;
        goto label_4cbd50;
    }
    ctx->pc = 0x4CBD48u;
    {
        const bool branch_taken_0x4cbd48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CBD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CBD48u;
        // 0x4cbd4c: 0x8cb00000  lw          $s0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cbd48) {
            ctx->pc = 0x4CBD5Cu;
            goto label_4cbd5c;
        }
    }
    ctx->pc = 0x4CBD50u;
label_4cbd50:
    // 0x4cbd50: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4cbd50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4cbd54:
    // 0x4cbd54: 0xac624800  sw          $v0, 0x4800($v1)
    ctx->pc = 0x4cbd54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 18432), GPR_U32(ctx, 2));
label_4cbd58:
    // 0x4cbd58: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x4cbd58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4cbd5c:
    // 0x4cbd5c: 0x12e00003  beqz        $s7, . + 4 + (0x3 << 2)
label_4cbd60:
    if (ctx->pc == 0x4CBD60u) {
        ctx->pc = 0x4CBD64u;
        goto label_4cbd64;
    }
    ctx->pc = 0x4CBD5Cu;
    {
        const bool branch_taken_0x4cbd5c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cbd5c) {
            ctx->pc = 0x4CBD6Cu;
            goto label_4cbd6c;
        }
    }
    ctx->pc = 0x4CBD64u;
label_4cbd64:
    // 0x4cbd64: 0xc110cc4  jal         func_443310
label_4cbd68:
    if (ctx->pc == 0x4CBD68u) {
        ctx->pc = 0x4CBD6Cu;
        goto label_4cbd6c;
    }
    ctx->pc = 0x4CBD64u;
    SET_GPR_U32(ctx, 31, 0x4CBD6Cu);
    ctx->pc = 0x443310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443310u, 0x4CBD64u, 0x4CBD6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CBD6Cu;
label_4cbd6c:
    // 0x4cbd6c: 0x8e6347cc  lw          $v1, 0x47CC($s3)
    ctx->pc = 0x4cbd6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18380)));
label_4cbd70:
    // 0x4cbd70: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x4cbd70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
label_4cbd74:
    // 0x4cbd74: 0x8c8246ac  lw          $v0, 0x46AC($a0)
    ctx->pc = 0x4cbd74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 18092)));
label_4cbd78:
    // 0x4cbd78: 0x3c070071  lui         $a3, 0x71
    ctx->pc = 0x4cbd78u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)113 << 16));
label_4cbd7c:
    // 0x4cbd7c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_4cbd80:
    if (ctx->pc == 0x4CBD80u) {
        ctx->pc = 0x4CBD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CBD7Cu;
        // 0x4cbd80: 0x8c660018  lw          $a2, 0x18($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CBD84u;
        goto label_4cbd84;
    }
    ctx->pc = 0x4CBD7Cu;
    {
        const bool branch_taken_0x4cbd7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4CBD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CBD7Cu;
        // 0x4cbd80: 0x8c660018  lw          $a2, 0x18($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cbd7c) {
            ctx->pc = 0x4CBDA4u;
            goto label_4cbda4;
        }
    }
    ctx->pc = 0x4CBD84u;
label_4cbd84:
    // 0x4cbd84: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x4cbd84u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4cbd88:
    // 0x4cbd88: 0x8c6246ac  lw          $v0, 0x46AC($v1)
    ctx->pc = 0x4cbd88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18092)));
label_4cbd8c:
    // 0x4cbd8c: 0x0  nop
    ctx->pc = 0x4cbd8cu;
    // NOP
label_4cbd90:
    // 0x4cbd90: 0x0  nop
    ctx->pc = 0x4cbd90u;
    // NOP
label_4cbd94:
    // 0x4cbd94: 0x0  nop
    ctx->pc = 0x4cbd94u;
    // NOP
label_4cbd98:
    // 0x4cbd98: 0x0  nop
    ctx->pc = 0x4cbd98u;
    // NOP
label_4cbd9c:
    // 0x4cbd9c: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
label_4cbda0:
    if (ctx->pc == 0x4CBDA0u) {
        ctx->pc = 0x4CBDA4u;
        goto label_4cbda4;
    }
    ctx->pc = 0x4CBD9Cu;
    {
        const bool branch_taken_0x4cbd9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cbd9c) {
            ctx->pc = 0x4CBD88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4cbd88;
        }
    }
    ctx->pc = 0x4CBDA4u;
label_4cbda4:
    // 0x4cbda4: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x4cbda4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_4cbda8:
    // 0x4cbda8: 0x24e34900  addiu       $v1, $a3, 0x4900
    ctx->pc = 0x4cbda8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 18688));
label_4cbdac:
    // 0x4cbdac: 0x8c454a80  lw          $a1, 0x4A80($v0)
    ctx->pc = 0x4cbdacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 19072)));
label_4cbdb0:
    // 0x4cbdb0: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x4cbdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
label_4cbdb4:
    // 0x4cbdb4: 0x8c443968  lw          $a0, 0x3968($v0)
    ctx->pc = 0x4cbdb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14696)));
label_4cbdb8:
    // 0x4cbdb8: 0xac75001c  sw          $s5, 0x1C($v1)
    ctx->pc = 0x4cbdb8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 21));
label_4cbdbc:
    // 0x4cbdbc: 0xac660010  sw          $a2, 0x10($v1)
    ctx->pc = 0x4cbdbcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 6));
label_4cbdc0:
    // 0x4cbdc0: 0xac700014  sw          $s0, 0x14($v1)
    ctx->pc = 0x4cbdc0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 16));
label_4cbdc4:
    // 0x4cbdc4: 0xac650018  sw          $a1, 0x18($v1)
    ctx->pc = 0x4cbdc4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 5));
label_4cbdc8:
    // 0x4cbdc8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_4cbdcc:
    if (ctx->pc == 0x4CBDCCu) {
        ctx->pc = 0x4CBDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CBDC8u;
        // 0x4cbdcc: 0xac60000c  sw          $zero, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CBDD0u;
        goto label_4cbdd0;
    }
    ctx->pc = 0x4CBDC8u;
    {
        const bool branch_taken_0x4cbdc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CBDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CBDC8u;
        // 0x4cbdcc: 0xac60000c  sw          $zero, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cbdc8) {
            ctx->pc = 0x4CBDDCu;
            goto label_4cbddc;
        }
    }
    ctx->pc = 0x4CBDD0u;
label_4cbdd0:
    // 0x4cbdd0: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x4cbdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
label_4cbdd4:
    // 0x4cbdd4: 0x10000003  b           . + 4 + (0x3 << 2)
label_4cbdd8:
    if (ctx->pc == 0x4CBDD8u) {
        ctx->pc = 0x4CBDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CBDD4u;
        // 0x4cbdd8: 0x2443fed8  addiu       $v1, $v0, -0x128 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CBDDCu;
        goto label_4cbddc;
    }
    ctx->pc = 0x4CBDD4u;
    {
        const bool branch_taken_0x4cbdd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CBDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CBDD4u;
        // 0x4cbdd8: 0x2443fed8  addiu       $v1, $v0, -0x128 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cbdd4) {
            ctx->pc = 0x4CBDE4u;
            goto label_4cbde4;
        }
    }
    ctx->pc = 0x4CBDDCu;
label_4cbddc:
    // 0x4cbddc: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x4cbddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
label_4cbde0:
    // 0x4cbde0: 0x2443fe98  addiu       $v1, $v0, -0x168
    ctx->pc = 0x4cbde0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966936));
label_4cbde4:
    // 0x4cbde4: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x4cbde4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_4cbde8:
    // 0x4cbde8: 0x24e54900  addiu       $a1, $a3, 0x4900
    ctx->pc = 0x4cbde8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 18688));
label_4cbdec:
    // 0x4cbdec: 0x8c4446a0  lw          $a0, 0x46A0($v0)
    ctx->pc = 0x4cbdecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18080)));
label_4cbdf0:
    // 0x4cbdf0: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x4cbdf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_4cbdf4:
    // 0x4cbdf4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4cbdf4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4cbdf8:
    // 0x4cbdf8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4cbdf8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4cbdfc:
    // 0x4cbdfc: 0x60f809  jalr        $v1
label_4cbe00:
    if (ctx->pc == 0x4CBE00u) {
        ctx->pc = 0x4CBE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CBDFCu;
        // 0x4cbe00: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CBE04u;
        goto label_4cbe04;
    }
    ctx->pc = 0x4CBDFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4CBE04u);
        ctx->pc = 0x4CBE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CBDFCu;
        // 0x4cbe00: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4CBDFCu, 0x4CBE04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4CBE04u;
label_4cbe04:
    // 0x4cbe04: 0x1040fedf  beqz        $v0, . + 4 + (-0x121 << 2)
label_4cbe08:
    if (ctx->pc == 0x4CBE08u) {
        ctx->pc = 0x4CBE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CBE04u;
        // 0x4cbe08: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CBE0Cu;
        goto label_4cbe0c;
    }
    ctx->pc = 0x4CBE04u;
    {
        const bool branch_taken_0x4cbe04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CBE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CBE04u;
        // 0x4cbe08: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cbe04) {
            ctx->pc = 0x4CB984u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4cb984;
        }
    }
    ctx->pc = 0x4CBE0Cu;
label_4cbe0c:
    // 0x4cbe0c: 0x10000007  b           . + 4 + (0x7 << 2)
label_4cbe10:
    if (ctx->pc == 0x4CBE10u) {
        ctx->pc = 0x4CBE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CBE0Cu;
        // 0x4cbe10: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CBE14u;
        goto label_4cbe14;
    }
    ctx->pc = 0x4CBE0Cu;
    {
        const bool branch_taken_0x4cbe0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CBE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CBE0Cu;
        // 0x4cbe10: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cbe0c) {
            ctx->pc = 0x4CBE2Cu;
            goto label_4cbe2c;
        }
    }
    ctx->pc = 0x4CBE14u;
label_4cbe14:
    // 0x4cbe14: 0x12e00004  beqz        $s7, . + 4 + (0x4 << 2)
label_4cbe18:
    if (ctx->pc == 0x4CBE18u) {
        ctx->pc = 0x4CBE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CBE14u;
        // 0x4cbe18: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CBE1Cu;
        goto label_4cbe1c;
    }
    ctx->pc = 0x4CBE14u;
    {
        const bool branch_taken_0x4cbe14 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CBE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CBE14u;
        // 0x4cbe18: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cbe14) {
            ctx->pc = 0x4CBE28u;
            goto label_4cbe28;
        }
    }
    ctx->pc = 0x4CBE1Cu;
label_4cbe1c:
    // 0x4cbe1c: 0xc110cc4  jal         func_443310
label_4cbe20:
    if (ctx->pc == 0x4CBE20u) {
        ctx->pc = 0x4CBE24u;
        goto label_4cbe24;
    }
    ctx->pc = 0x4CBE1Cu;
    SET_GPR_U32(ctx, 31, 0x4CBE24u);
    ctx->pc = 0x443310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443310u, 0x4CBE1Cu, 0x4CBE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CBE24u;
label_4cbe24:
    // 0x4cbe24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4cbe24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4cbe28:
    // 0x4cbe28: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4cbe28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_4cbe2c:
    // 0x4cbe2c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4cbe2cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4cbe30:
    // 0x4cbe30: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4cbe30u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_4cbe34:
    // 0x4cbe34: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4cbe34u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4cbe38:
    // 0x4cbe38: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4cbe38u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_4cbe3c:
    // 0x4cbe3c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4cbe3cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4cbe40:
    // 0x4cbe40: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4cbe40u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_4cbe44:
    // 0x4cbe44: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x4cbe44u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4cbe48:
    // 0x4cbe48: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x4cbe48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_4cbe4c:
    // 0x4cbe4c: 0x3e00008  jr          $ra
label_4cbe50:
    if (ctx->pc == 0x4CBE50u) {
        ctx->pc = 0x4CBE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CBE4Cu;
        // 0x4cbe50: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CBE54u;
        goto label_4cbe54;
    }
    ctx->pc = 0x4CBE4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CBE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CBE4Cu;
        // 0x4cbe50: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4CBE4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4CBE54u;
label_4cbe54:
    // 0x4cbe54: 0x0  nop
    ctx->pc = 0x4cbe54u;
    // NOP
    ctx->pc = 0x4cbe58u;
}
