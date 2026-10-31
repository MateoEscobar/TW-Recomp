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

// Function: sub_003FEE68
// Address: 0x3fee68 - 0x3ff150
void sub_003FEE68_0x3fee68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003FEE68_0x3fee68");
#endif

    switch (ctx->pc) {
        case 0x3fee68u: goto label_3fee68;
        case 0x3fee6cu: goto label_3fee6c;
        case 0x3fee70u: goto label_3fee70;
        case 0x3fee74u: goto label_3fee74;
        case 0x3fee78u: goto label_3fee78;
        case 0x3fee7cu: goto label_3fee7c;
        case 0x3fee80u: goto label_3fee80;
        case 0x3fee84u: goto label_3fee84;
        case 0x3fee88u: goto label_3fee88;
        case 0x3fee8cu: goto label_3fee8c;
        case 0x3fee90u: goto label_3fee90;
        case 0x3fee94u: goto label_3fee94;
        case 0x3fee98u: goto label_3fee98;
        case 0x3fee9cu: goto label_3fee9c;
        case 0x3feea0u: goto label_3feea0;
        case 0x3feea4u: goto label_3feea4;
        case 0x3feea8u: goto label_3feea8;
        case 0x3feeacu: goto label_3feeac;
        case 0x3feeb0u: goto label_3feeb0;
        case 0x3feeb4u: goto label_3feeb4;
        case 0x3feeb8u: goto label_3feeb8;
        case 0x3feebcu: goto label_3feebc;
        case 0x3feec0u: goto label_3feec0;
        case 0x3feec4u: goto label_3feec4;
        case 0x3feec8u: goto label_3feec8;
        case 0x3feeccu: goto label_3feecc;
        case 0x3feed0u: goto label_3feed0;
        case 0x3feed4u: goto label_3feed4;
        case 0x3feed8u: goto label_3feed8;
        case 0x3feedcu: goto label_3feedc;
        case 0x3feee0u: goto label_3feee0;
        case 0x3feee4u: goto label_3feee4;
        case 0x3feee8u: goto label_3feee8;
        case 0x3feeecu: goto label_3feeec;
        case 0x3feef0u: goto label_3feef0;
        case 0x3feef4u: goto label_3feef4;
        case 0x3feef8u: goto label_3feef8;
        case 0x3feefcu: goto label_3feefc;
        case 0x3fef00u: goto label_3fef00;
        case 0x3fef04u: goto label_3fef04;
        case 0x3fef08u: goto label_3fef08;
        case 0x3fef0cu: goto label_3fef0c;
        case 0x3fef10u: goto label_3fef10;
        case 0x3fef14u: goto label_3fef14;
        case 0x3fef18u: goto label_3fef18;
        case 0x3fef1cu: goto label_3fef1c;
        case 0x3fef20u: goto label_3fef20;
        case 0x3fef24u: goto label_3fef24;
        case 0x3fef28u: goto label_3fef28;
        case 0x3fef2cu: goto label_3fef2c;
        case 0x3fef30u: goto label_3fef30;
        case 0x3fef34u: goto label_3fef34;
        case 0x3fef38u: goto label_3fef38;
        case 0x3fef3cu: goto label_3fef3c;
        case 0x3fef40u: goto label_3fef40;
        case 0x3fef44u: goto label_3fef44;
        case 0x3fef48u: goto label_3fef48;
        case 0x3fef4cu: goto label_3fef4c;
        case 0x3fef50u: goto label_3fef50;
        case 0x3fef54u: goto label_3fef54;
        case 0x3fef58u: goto label_3fef58;
        case 0x3fef5cu: goto label_3fef5c;
        case 0x3fef60u: goto label_3fef60;
        case 0x3fef64u: goto label_3fef64;
        case 0x3fef68u: goto label_3fef68;
        case 0x3fef6cu: goto label_3fef6c;
        case 0x3fef70u: goto label_3fef70;
        case 0x3fef74u: goto label_3fef74;
        case 0x3fef78u: goto label_3fef78;
        case 0x3fef7cu: goto label_3fef7c;
        case 0x3fef80u: goto label_3fef80;
        case 0x3fef84u: goto label_3fef84;
        case 0x3fef88u: goto label_3fef88;
        case 0x3fef8cu: goto label_3fef8c;
        case 0x3fef90u: goto label_3fef90;
        case 0x3fef94u: goto label_3fef94;
        case 0x3fef98u: goto label_3fef98;
        case 0x3fef9cu: goto label_3fef9c;
        case 0x3fefa0u: goto label_3fefa0;
        case 0x3fefa4u: goto label_3fefa4;
        case 0x3fefa8u: goto label_3fefa8;
        case 0x3fefacu: goto label_3fefac;
        case 0x3fefb0u: goto label_3fefb0;
        case 0x3fefb4u: goto label_3fefb4;
        case 0x3fefb8u: goto label_3fefb8;
        case 0x3fefbcu: goto label_3fefbc;
        case 0x3fefc0u: goto label_3fefc0;
        case 0x3fefc4u: goto label_3fefc4;
        case 0x3fefc8u: goto label_3fefc8;
        case 0x3fefccu: goto label_3fefcc;
        case 0x3fefd0u: goto label_3fefd0;
        case 0x3fefd4u: goto label_3fefd4;
        case 0x3fefd8u: goto label_3fefd8;
        case 0x3fefdcu: goto label_3fefdc;
        case 0x3fefe0u: goto label_3fefe0;
        case 0x3fefe4u: goto label_3fefe4;
        case 0x3fefe8u: goto label_3fefe8;
        case 0x3fefecu: goto label_3fefec;
        case 0x3feff0u: goto label_3feff0;
        case 0x3feff4u: goto label_3feff4;
        case 0x3feff8u: goto label_3feff8;
        case 0x3feffcu: goto label_3feffc;
        case 0x3ff000u: goto label_3ff000;
        case 0x3ff004u: goto label_3ff004;
        case 0x3ff008u: goto label_3ff008;
        case 0x3ff00cu: goto label_3ff00c;
        case 0x3ff010u: goto label_3ff010;
        case 0x3ff014u: goto label_3ff014;
        case 0x3ff018u: goto label_3ff018;
        case 0x3ff01cu: goto label_3ff01c;
        case 0x3ff020u: goto label_3ff020;
        case 0x3ff024u: goto label_3ff024;
        case 0x3ff028u: goto label_3ff028;
        case 0x3ff02cu: goto label_3ff02c;
        case 0x3ff030u: goto label_3ff030;
        case 0x3ff034u: goto label_3ff034;
        case 0x3ff038u: goto label_3ff038;
        case 0x3ff03cu: goto label_3ff03c;
        case 0x3ff040u: goto label_3ff040;
        case 0x3ff044u: goto label_3ff044;
        case 0x3ff048u: goto label_3ff048;
        case 0x3ff04cu: goto label_3ff04c;
        case 0x3ff050u: goto label_3ff050;
        case 0x3ff054u: goto label_3ff054;
        case 0x3ff058u: goto label_3ff058;
        case 0x3ff05cu: goto label_3ff05c;
        case 0x3ff060u: goto label_3ff060;
        case 0x3ff064u: goto label_3ff064;
        case 0x3ff068u: goto label_3ff068;
        case 0x3ff06cu: goto label_3ff06c;
        case 0x3ff070u: goto label_3ff070;
        case 0x3ff074u: goto label_3ff074;
        case 0x3ff078u: goto label_3ff078;
        case 0x3ff07cu: goto label_3ff07c;
        case 0x3ff080u: goto label_3ff080;
        case 0x3ff084u: goto label_3ff084;
        case 0x3ff088u: goto label_3ff088;
        case 0x3ff08cu: goto label_3ff08c;
        case 0x3ff090u: goto label_3ff090;
        case 0x3ff094u: goto label_3ff094;
        case 0x3ff098u: goto label_3ff098;
        case 0x3ff09cu: goto label_3ff09c;
        case 0x3ff0a0u: goto label_3ff0a0;
        case 0x3ff0a4u: goto label_3ff0a4;
        case 0x3ff0a8u: goto label_3ff0a8;
        case 0x3ff0acu: goto label_3ff0ac;
        case 0x3ff0b0u: goto label_3ff0b0;
        case 0x3ff0b4u: goto label_3ff0b4;
        case 0x3ff0b8u: goto label_3ff0b8;
        case 0x3ff0bcu: goto label_3ff0bc;
        case 0x3ff0c0u: goto label_3ff0c0;
        case 0x3ff0c4u: goto label_3ff0c4;
        case 0x3ff0c8u: goto label_3ff0c8;
        case 0x3ff0ccu: goto label_3ff0cc;
        case 0x3ff0d0u: goto label_3ff0d0;
        case 0x3ff0d4u: goto label_3ff0d4;
        case 0x3ff0d8u: goto label_3ff0d8;
        case 0x3ff0dcu: goto label_3ff0dc;
        case 0x3ff0e0u: goto label_3ff0e0;
        case 0x3ff0e4u: goto label_3ff0e4;
        case 0x3ff0e8u: goto label_3ff0e8;
        case 0x3ff0ecu: goto label_3ff0ec;
        case 0x3ff0f0u: goto label_3ff0f0;
        case 0x3ff0f4u: goto label_3ff0f4;
        case 0x3ff0f8u: goto label_3ff0f8;
        case 0x3ff0fcu: goto label_3ff0fc;
        case 0x3ff100u: goto label_3ff100;
        case 0x3ff104u: goto label_3ff104;
        case 0x3ff108u: goto label_3ff108;
        case 0x3ff10cu: goto label_3ff10c;
        case 0x3ff110u: goto label_3ff110;
        case 0x3ff114u: goto label_3ff114;
        case 0x3ff118u: goto label_3ff118;
        case 0x3ff11cu: goto label_3ff11c;
        case 0x3ff120u: goto label_3ff120;
        case 0x3ff124u: goto label_3ff124;
        case 0x3ff128u: goto label_3ff128;
        case 0x3ff12cu: goto label_3ff12c;
        case 0x3ff130u: goto label_3ff130;
        case 0x3ff134u: goto label_3ff134;
        case 0x3ff138u: goto label_3ff138;
        case 0x3ff13cu: goto label_3ff13c;
        case 0x3ff140u: goto label_3ff140;
        case 0x3ff144u: goto label_3ff144;
        case 0x3ff148u: goto label_3ff148;
        case 0x3ff14cu: goto label_3ff14c;
        default: break;
    }

    ctx->pc = 0x3fee68u;

label_3fee68:
    // 0x3fee68: 0x27bdfb80  addiu       $sp, $sp, -0x480
    ctx->pc = 0x3fee68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966144));
label_3fee6c:
    // 0x3fee6c: 0x7fb10460  sq          $s1, 0x460($sp)
    ctx->pc = 0x3fee6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 17));
label_3fee70:
    // 0x3fee70: 0x7fb20450  sq          $s2, 0x450($sp)
    ctx->pc = 0x3fee70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 18));
label_3fee74:
    // 0x3fee74: 0x7fb30440  sq          $s3, 0x440($sp)
    ctx->pc = 0x3fee74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 19));
label_3fee78:
    // 0x3fee78: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3fee78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3fee7c:
    // 0x3fee7c: 0x7fb00470  sq          $s0, 0x470($sp)
    ctx->pc = 0x3fee7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 16));
label_3fee80:
    // 0x3fee80: 0x7fb40430  sq          $s4, 0x430($sp)
    ctx->pc = 0x3fee80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 20));
label_3fee84:
    // 0x3fee84: 0x7fb50420  sq          $s5, 0x420($sp)
    ctx->pc = 0x3fee84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 21));
label_3fee88:
    // 0x3fee88: 0xffbf0410  sd          $ra, 0x410($sp)
    ctx->pc = 0x3fee88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1040), GPR_U64(ctx, 31));
label_3fee8c:
    // 0x3fee8c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3fee8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3fee90:
    // 0x3fee90: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3fee90u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3fee94:
    // 0x3fee94: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3fee94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3fee98:
    // 0x3fee98: 0x40f809  jalr        $v0
label_3fee9c:
    if (ctx->pc == 0x3FEE9Cu) {
        ctx->pc = 0x3FEE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FEE98u;
        // 0x3fee9c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FEEA0u;
        goto label_3feea0;
    }
    ctx->pc = 0x3FEE98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3FEEA0u);
        ctx->pc = 0x3FEE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FEE98u;
        // 0x3fee9c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FEE98u, 0x3FEEA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3FEEA0u;
label_3feea0:
    // 0x3feea0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3feea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3feea4:
    // 0x3feea4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3feea4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3feea8:
    // 0x3feea8: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x3feea8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_3feeac:
    // 0x3feeac: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x3feeacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_3feeb0:
    // 0x3feeb0: 0x40f809  jalr        $v0
label_3feeb4:
    if (ctx->pc == 0x3FEEB4u) {
        ctx->pc = 0x3FEEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FEEB0u;
        // 0x3feeb4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FEEB8u;
        goto label_3feeb8;
    }
    ctx->pc = 0x3FEEB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3FEEB8u);
        ctx->pc = 0x3FEEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FEEB0u;
        // 0x3feeb4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FEEB0u, 0x3FEEB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3FEEB8u;
label_3feeb8:
    // 0x3feeb8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3feeb8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3feebc:
    // 0x3feebc: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x3feebcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
label_3feec0:
    // 0x3feec0: 0x2621024  and         $v0, $s3, $v0
    ctx->pc = 0x3feec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
label_3feec4:
    // 0x3feec4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_3feec8:
    if (ctx->pc == 0x3FEEC8u) {
        ctx->pc = 0x3FEEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FEEC4u;
        // 0x3feec8: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FEECCu;
        goto label_3feecc;
    }
    ctx->pc = 0x3FEEC4u;
    {
        const bool branch_taken_0x3feec4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FEEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FEEC4u;
        // 0x3feec8: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3feec4) {
            ctx->pc = 0x3FEED0u;
            goto label_3feed0;
        }
    }
    ctx->pc = 0x3FEECCu;
label_3feecc:
    // 0x3feecc: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x3feeccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
label_3feed0:
    // 0x3feed0: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x3feed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
label_3feed4:
    // 0x3feed4: 0x2621024  and         $v0, $s3, $v0
    ctx->pc = 0x3feed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
label_3feed8:
    // 0x3feed8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_3feedc:
    if (ctx->pc == 0x3FEEDCu) {
        ctx->pc = 0x3FEEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FEED8u;
        // 0x3feedc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FEEE0u;
        goto label_3feee0;
    }
    ctx->pc = 0x3FEED8u;
    {
        const bool branch_taken_0x3feed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FEEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FEED8u;
        // 0x3feedc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3feed8) {
            ctx->pc = 0x3FEEE4u;
            goto label_3feee4;
        }
    }
    ctx->pc = 0x3FEEE0u;
label_3feee0:
    // 0x3feee0: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x3feee0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
label_3feee4:
    // 0x3feee4: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x3feee4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_3feee8:
    // 0x3feee8: 0xc0e858c  jal         func_3A1630
label_3feeec:
    if (ctx->pc == 0x3FEEECu) {
        ctx->pc = 0x3FEEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FEEE8u;
        // 0x3feeec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FEEF0u;
        goto label_3feef0;
    }
    ctx->pc = 0x3FEEE8u;
    SET_GPR_U32(ctx, 31, 0x3FEEF0u);
    ctx->pc = 0x3FEEECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FEEE8u;
    // 0x3feeec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3FEEE8u, 0x3FEEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FEEF0u;
label_3feef0:
    // 0x3feef0: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x3feef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_3feef4:
    // 0x3feef4: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x3feef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_3feef8:
    // 0x3feef8: 0x14620021  bne         $v1, $v0, . + 4 + (0x21 << 2)
label_3feefc:
    if (ctx->pc == 0x3FEEFCu) {
        ctx->pc = 0x3FEEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FEEF8u;
        // 0x3feefc: 0x2624001c  addiu       $a0, $s1, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FEF00u;
        goto label_3fef00;
    }
    ctx->pc = 0x3FEEF8u;
    {
        const bool branch_taken_0x3feef8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3FEEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FEEF8u;
        // 0x3feefc: 0x2624001c  addiu       $a0, $s1, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3feef8) {
            ctx->pc = 0x3FEF80u;
            goto label_3fef80;
        }
    }
    ctx->pc = 0x3FEF00u;
label_3fef00:
    // 0x3fef00: 0x2630001c  addiu       $s0, $s1, 0x1C
    ctx->pc = 0x3fef00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
label_3fef04:
    // 0x3fef04: 0xc0e4060  jal         func_390180
label_3fef08:
    if (ctx->pc == 0x3FEF08u) {
        ctx->pc = 0x3FEF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FEF04u;
        // 0x3fef08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FEF0Cu;
        goto label_3fef0c;
    }
    ctx->pc = 0x3FEF04u;
    SET_GPR_U32(ctx, 31, 0x3FEF0Cu);
    ctx->pc = 0x3FEF08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FEF04u;
    // 0x3fef08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x3FEF04u, 0x3FEF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FEF0Cu;
label_3fef0c:
    // 0x3fef0c: 0x10400087  beqz        $v0, . + 4 + (0x87 << 2)
label_3fef10:
    if (ctx->pc == 0x3FEF10u) {
        ctx->pc = 0x3FEF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FEF0Cu;
        // 0x3fef10: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FEF14u;
        goto label_3fef14;
    }
    ctx->pc = 0x3FEF0Cu;
    {
        const bool branch_taken_0x3fef0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FEF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FEF0Cu;
        // 0x3fef10: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fef0c) {
            ctx->pc = 0x3FF12Cu;
            goto label_3ff12c;
        }
    }
    ctx->pc = 0x3FEF14u;
label_3fef14:
    // 0x3fef14: 0xc0e4060  jal         func_390180
label_3fef18:
    if (ctx->pc == 0x3FEF18u) {
        ctx->pc = 0x3FEF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FEF14u;
        // 0x3fef18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FEF1Cu;
        goto label_3fef1c;
    }
    ctx->pc = 0x3FEF14u;
    SET_GPR_U32(ctx, 31, 0x3FEF1Cu);
    ctx->pc = 0x3FEF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FEF14u;
    // 0x3fef18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x3FEF14u, 0x3FEF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FEF1Cu;
label_3fef1c:
    // 0x3fef1c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3fef1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3fef20:
    // 0x3fef20: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3fef20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3fef24:
    // 0x3fef24: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3fef24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3fef28:
    // 0x3fef28: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x3fef28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_3fef2c:
    // 0x3fef2c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3fef2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3fef30:
    // 0x3fef30: 0x0  nop
    ctx->pc = 0x3fef30u;
    // NOP
label_3fef34:
    // 0x3fef34: 0x0  nop
    ctx->pc = 0x3fef34u;
    // NOP
label_3fef38:
    // 0x3fef38: 0x0  nop
    ctx->pc = 0x3fef38u;
    // NOP
label_3fef3c:
    // 0x3fef3c: 0x0  nop
    ctx->pc = 0x3fef3cu;
    // NOP
label_3fef40:
    // 0x3fef40: 0x5443fffb  bnel        $v0, $v1, . + 4 + (-0x5 << 2)
label_3fef44:
    if (ctx->pc == 0x3FEF44u) {
        ctx->pc = 0x3FEF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FEF40u;
        // 0x3fef44: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FEF48u;
        goto label_3fef48;
    }
    ctx->pc = 0x3FEF40u;
    {
        const bool branch_taken_0x3fef40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3fef40) {
            ctx->pc = 0x3FEF44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FEF40u;
            // 0x3fef44: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FEF30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3fef30;
        }
    }
    ctx->pc = 0x3FEF48u;
label_3fef48:
    // 0x3fef48: 0xc138ddc  jal         func_4E3770
label_3fef4c:
    if (ctx->pc == 0x3FEF4Cu) {
        ctx->pc = 0x3FEF50u;
        goto label_3fef50;
    }
    ctx->pc = 0x3FEF48u;
    SET_GPR_U32(ctx, 31, 0x3FEF50u);
    ctx->pc = 0x4E3770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3770u, 0x3FEF48u, 0x3FEF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FEF50u;
label_3fef50:
    // 0x3fef50: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3fef50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3fef54:
    // 0x3fef54: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x3fef54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_3fef58:
    // 0x3fef58: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3fef58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3fef5c:
    // 0x3fef5c: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3fef5cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3fef60:
    // 0x3fef60: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3fef60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3fef64:
    // 0x3fef64: 0x60f809  jalr        $v1
label_3fef68:
    if (ctx->pc == 0x3FEF68u) {
        ctx->pc = 0x3FEF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FEF64u;
        // 0x3fef68: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FEF6Cu;
        goto label_3fef6c;
    }
    ctx->pc = 0x3FEF64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3FEF6Cu);
        ctx->pc = 0x3FEF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FEF64u;
        // 0x3fef68: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FEF64u, 0x3FEF6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3FEF6Cu;
label_3fef6c:
    // 0x3fef6c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3fef6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3fef70:
    // 0x3fef70: 0x8c43bd30  lw          $v1, -0x42D0($v0)
    ctx->pc = 0x3fef70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_3fef74:
    // 0x3fef74: 0xae23001c  sw          $v1, 0x1C($s1)
    ctx->pc = 0x3fef74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 3));
label_3fef78:
    // 0x3fef78: 0x1000006c  b           . + 4 + (0x6C << 2)
label_3fef7c:
    if (ctx->pc == 0x3FEF7Cu) {
        ctx->pc = 0x3FEF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FEF78u;
        // 0x3fef7c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FEF80u;
        goto label_3fef80;
    }
    ctx->pc = 0x3FEF78u;
    {
        const bool branch_taken_0x3fef78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FEF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FEF78u;
        // 0x3fef7c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fef78) {
            ctx->pc = 0x3FF12Cu;
            goto label_3ff12c;
        }
    }
    ctx->pc = 0x3FEF80u;
label_3fef80:
    // 0x3fef80: 0xc0e4060  jal         func_390180
label_3fef84:
    if (ctx->pc == 0x3FEF84u) {
        ctx->pc = 0x3FEF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FEF80u;
        // 0x3fef84: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FEF88u;
        goto label_3fef88;
    }
    ctx->pc = 0x3FEF80u;
    SET_GPR_U32(ctx, 31, 0x3FEF88u);
    ctx->pc = 0x3FEF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FEF80u;
    // 0x3fef84: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x3FEF80u, 0x3FEF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FEF88u;
label_3fef88:
    // 0x3fef88: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
label_3fef8c:
    if (ctx->pc == 0x3FEF8Cu) {
        ctx->pc = 0x3FEF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FEF88u;
        // 0x3fef8c: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FEF90u;
        goto label_3fef90;
    }
    ctx->pc = 0x3FEF88u;
    {
        const bool branch_taken_0x3fef88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FEF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FEF88u;
        // 0x3fef8c: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fef88) {
            ctx->pc = 0x3FF084u;
            goto label_3ff084;
        }
    }
    ctx->pc = 0x3FEF90u;
label_3fef90:
    // 0x3fef90: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x3fef90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_3fef94:
    // 0x3fef94: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x3fef94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_3fef98:
    // 0x3fef98: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3fef98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3fef9c:
    // 0x3fef9c: 0x43182b  sltu        $v1, $v0, $v1
    ctx->pc = 0x3fef9cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3fefa0:
    // 0x3fefa0: 0x14600037  bnez        $v1, . + 4 + (0x37 << 2)
label_3fefa4:
    if (ctx->pc == 0x3FEFA4u) {
        ctx->pc = 0x3FEFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FEFA0u;
        // 0x3fefa4: 0xae220020  sw          $v0, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FEFA8u;
        goto label_3fefa8;
    }
    ctx->pc = 0x3FEFA0u;
    {
        const bool branch_taken_0x3fefa0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FEFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FEFA0u;
        // 0x3fefa4: 0xae220020  sw          $v0, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fefa0) {
            ctx->pc = 0x3FF080u;
            goto label_3ff080;
        }
    }
    ctx->pc = 0x3FEFA8u;
label_3fefa8:
    // 0x3fefa8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3fefa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3fefac:
    // 0x3fefac: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x3fefacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_3fefb0:
    // 0x3fefb0: 0x32700004  andi        $s0, $s3, 0x4
    ctx->pc = 0x3fefb0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)4);
label_3fefb4:
    // 0x3fefb4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3fefb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3fefb8:
    // 0x3fefb8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3fefb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3fefbc:
    // 0x3fefbc: 0x0  nop
    ctx->pc = 0x3fefbcu;
    // NOP
label_3fefc0:
    // 0x3fefc0: 0x0  nop
    ctx->pc = 0x3fefc0u;
    // NOP
label_3fefc4:
    // 0x3fefc4: 0x0  nop
    ctx->pc = 0x3fefc4u;
    // NOP
label_3fefc8:
    // 0x3fefc8: 0x0  nop
    ctx->pc = 0x3fefc8u;
    // NOP
label_3fefcc:
    // 0x3fefcc: 0x0  nop
    ctx->pc = 0x3fefccu;
    // NOP
label_3fefd0:
    // 0x3fefd0: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
label_3fefd4:
    if (ctx->pc == 0x3FEFD4u) {
        ctx->pc = 0x3FEFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FEFD0u;
        // 0x3fefd4: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FEFD8u;
        goto label_3fefd8;
    }
    ctx->pc = 0x3FEFD0u;
    {
        const bool branch_taken_0x3fefd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3FEFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FEFD0u;
        // 0x3fefd4: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fefd0) {
            ctx->pc = 0x3FEFC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3fefc0;
        }
    }
    ctx->pc = 0x3FEFD8u;
label_3fefd8:
    // 0x3fefd8: 0xc138ddc  jal         func_4E3770
label_3fefdc:
    if (ctx->pc == 0x3FEFDCu) {
        ctx->pc = 0x3FEFE0u;
        goto label_3fefe0;
    }
    ctx->pc = 0x3FEFD8u;
    SET_GPR_U32(ctx, 31, 0x3FEFE0u);
    ctx->pc = 0x4E3770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3770u, 0x3FEFD8u, 0x3FEFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FEFE0u;
label_3fefe0:
    // 0x3fefe0: 0x3a0a02d  daddu       $s4, $sp, $zero
    ctx->pc = 0x3fefe0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3fefe4:
    // 0x3fefe4: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_3fefe8:
    if (ctx->pc == 0x3FEFE8u) {
        ctx->pc = 0x3FEFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FEFE4u;
        // 0x3fefe8: 0xae200020  sw          $zero, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FEFECu;
        goto label_3fefec;
    }
    ctx->pc = 0x3FEFE4u;
    {
        const bool branch_taken_0x3fefe4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FEFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FEFE4u;
        // 0x3fefe8: 0xae200020  sw          $zero, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fefe4) {
            ctx->pc = 0x3FEFF4u;
            goto label_3feff4;
        }
    }
    ctx->pc = 0x3FEFECu;
label_3fefec:
    // 0x3fefec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3fefecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3feff0:
    // 0x3feff0: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x3feff0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
label_3feff4:
    // 0x3feff4: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x3feff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_3feff8:
    // 0x3feff8: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x3feff8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3feffc:
    // 0x3feffc: 0x14500014  bne         $v0, $s0, . + 4 + (0x14 << 2)
label_3ff000:
    if (ctx->pc == 0x3FF000u) {
        ctx->pc = 0x3FF000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FEFFCu;
        // 0x3ff000: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FF004u;
        goto label_3ff004;
    }
    ctx->pc = 0x3FEFFCu;
    {
        const bool branch_taken_0x3feffc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x3FF000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FEFFCu;
        // 0x3ff000: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3feffc) {
            ctx->pc = 0x3FF050u;
            goto label_3ff050;
        }
    }
    ctx->pc = 0x3FF004u;
label_3ff004:
    // 0x3ff004: 0xc0ea16a  jal         func_3A85A8
label_3ff008:
    if (ctx->pc == 0x3FF008u) {
        ctx->pc = 0x3FF008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF004u;
        // 0x3ff008: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FF00Cu;
        goto label_3ff00c;
    }
    ctx->pc = 0x3FF004u;
    SET_GPR_U32(ctx, 31, 0x3FF00Cu);
    ctx->pc = 0x3FF008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FF004u;
    // 0x3ff008: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85A8u, 0x3FF004u, 0x3FF00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FF00Cu;
label_3ff00c:
    // 0x3ff00c: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x3ff00cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
label_3ff010:
    // 0x3ff010: 0x2621024  and         $v0, $s3, $v0
    ctx->pc = 0x3ff010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
label_3ff014:
    // 0x3ff014: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_3ff018:
    if (ctx->pc == 0x3FF018u) {
        ctx->pc = 0x3FF018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF014u;
        // 0x3ff018: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FF01Cu;
        goto label_3ff01c;
    }
    ctx->pc = 0x3FF014u;
    {
        const bool branch_taken_0x3ff014 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FF018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF014u;
        // 0x3ff018: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff014) {
            ctx->pc = 0x3FF034u;
            goto label_3ff034;
        }
    }
    ctx->pc = 0x3FF01Cu;
label_3ff01c:
    // 0x3ff01c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3ff01cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3ff020:
    // 0x3ff020: 0xc0cd4ee  jal         func_3353B8
label_3ff024:
    if (ctx->pc == 0x3FF024u) {
        ctx->pc = 0x3FF024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF020u;
        // 0x3ff024: 0x2484b8b8  addiu       $a0, $a0, -0x4748 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FF028u;
        goto label_3ff028;
    }
    ctx->pc = 0x3FF020u;
    SET_GPR_U32(ctx, 31, 0x3FF028u);
    ctx->pc = 0x3FF024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FF020u;
    // 0x3ff024: 0x2484b8b8  addiu       $a0, $a0, -0x4748 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3FF020u, 0x3FF028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FF028u;
label_3ff028:
    // 0x3ff028: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x3ff028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_3ff02c:
    // 0x3ff02c: 0x1000000b  b           . + 4 + (0xB << 2)
label_3ff030:
    if (ctx->pc == 0x3FF030u) {
        ctx->pc = 0x3FF030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF02Cu;
        // 0x3ff030: 0xae220024  sw          $v0, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FF034u;
        goto label_3ff034;
    }
    ctx->pc = 0x3FF02Cu;
    {
        const bool branch_taken_0x3ff02c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FF030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF02Cu;
        // 0x3ff030: 0xae220024  sw          $v0, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff02c) {
            ctx->pc = 0x3FF05Cu;
            goto label_3ff05c;
        }
    }
    ctx->pc = 0x3FF034u;
label_3ff034:
    // 0x3ff034: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3ff034u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3ff038:
    // 0x3ff038: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x3ff038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3ff03c:
    // 0x3ff03c: 0xc0cd4ee  jal         func_3353B8
label_3ff040:
    if (ctx->pc == 0x3FF040u) {
        ctx->pc = 0x3FF040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF03Cu;
        // 0x3ff040: 0x2484b8b8  addiu       $a0, $a0, -0x4748 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FF044u;
        goto label_3ff044;
    }
    ctx->pc = 0x3FF03Cu;
    SET_GPR_U32(ctx, 31, 0x3FF044u);
    ctx->pc = 0x3FF040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FF03Cu;
    // 0x3ff040: 0x2484b8b8  addiu       $a0, $a0, -0x4748 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3FF03Cu, 0x3FF044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FF044u;
label_3ff044:
    // 0x3ff044: 0x24420006  addiu       $v0, $v0, 0x6
    ctx->pc = 0x3ff044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
label_3ff048:
    // 0x3ff048: 0x10000004  b           . + 4 + (0x4 << 2)
label_3ff04c:
    if (ctx->pc == 0x3FF04Cu) {
        ctx->pc = 0x3FF04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF048u;
        // 0x3ff04c: 0xae220024  sw          $v0, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FF050u;
        goto label_3ff050;
    }
    ctx->pc = 0x3FF048u;
    {
        const bool branch_taken_0x3ff048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FF04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF048u;
        // 0x3ff04c: 0xae220024  sw          $v0, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff048) {
            ctx->pc = 0x3FF05Cu;
            goto label_3ff05c;
        }
    }
    ctx->pc = 0x3FF050u;
label_3ff050:
    // 0x3ff050: 0xc0ea16a  jal         func_3A85A8
label_3ff054:
    if (ctx->pc == 0x3FF054u) {
        ctx->pc = 0x3FF054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF050u;
        // 0x3ff054: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FF058u;
        goto label_3ff058;
    }
    ctx->pc = 0x3FF050u;
    SET_GPR_U32(ctx, 31, 0x3FF058u);
    ctx->pc = 0x3FF054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FF050u;
    // 0x3ff054: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85A8u, 0x3FF050u, 0x3FF058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FF058u;
label_3ff058:
    // 0x3ff058: 0xae300024  sw          $s0, 0x24($s1)
    ctx->pc = 0x3ff058u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 16));
label_3ff05c:
    // 0x3ff05c: 0xc0e4060  jal         func_390180
label_3ff060:
    if (ctx->pc == 0x3FF060u) {
        ctx->pc = 0x3FF060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF05Cu;
        // 0x3ff060: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FF064u;
        goto label_3ff064;
    }
    ctx->pc = 0x3FF05Cu;
    SET_GPR_U32(ctx, 31, 0x3FF064u);
    ctx->pc = 0x3FF060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FF05Cu;
    // 0x3ff060: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x3FF05Cu, 0x3FF064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FF064u;
label_3ff064:
    // 0x3ff064: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3ff064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3ff068:
    // 0x3ff068: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3ff068u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3ff06c:
    // 0x3ff06c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x3ff06cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3ff070:
    // 0x3ff070: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x3ff070u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_3ff074:
    // 0x3ff074: 0x8c6700cc  lw          $a3, 0xCC($v1)
    ctx->pc = 0x3ff074u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_3ff078:
    // 0x3ff078: 0xe0f809  jalr        $a3
label_3ff07c:
    if (ctx->pc == 0x3FF07Cu) {
        ctx->pc = 0x3FF07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF078u;
        // 0x3ff07c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FF080u;
        goto label_3ff080;
    }
    ctx->pc = 0x3FF078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x3FF080u);
        ctx->pc = 0x3FF07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF078u;
        // 0x3ff07c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FF078u, 0x3FF080u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3FF080u;
label_3ff080:
    // 0x3ff080: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x3ff080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
label_3ff084:
    // 0x3ff084: 0x2621024  and         $v0, $s3, $v0
    ctx->pc = 0x3ff084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
label_3ff088:
    // 0x3ff088: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_3ff08c:
    if (ctx->pc == 0x3FF08Cu) {
        ctx->pc = 0x3FF08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF088u;
        // 0x3ff08c: 0x3c050200  lui         $a1, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)512 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FF090u;
        goto label_3ff090;
    }
    ctx->pc = 0x3FF088u;
    {
        const bool branch_taken_0x3ff088 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FF08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF088u;
        // 0x3ff08c: 0x3c050200  lui         $a1, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)512 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff088) {
            ctx->pc = 0x3FF128u;
            goto label_3ff128;
        }
    }
    ctx->pc = 0x3FF090u;
label_3ff090:
    // 0x3ff090: 0x8e430054  lw          $v1, 0x54($s2)
    ctx->pc = 0x3ff090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_3ff094:
    // 0x3ff094: 0x3c02dfff  lui         $v0, 0xDFFF
    ctx->pc = 0x3ff094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57343 << 16));
label_3ff098:
    // 0x3ff098: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3ff098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3ff09c:
    // 0x3ff09c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3ff09cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3ff0a0:
    // 0x3ff0a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3ff0a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3ff0a4:
    // 0x3ff0a4: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x3ff0a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_3ff0a8:
    // 0x3ff0a8: 0xc0e87c0  jal         func_3A1F00
label_3ff0ac:
    if (ctx->pc == 0x3FF0ACu) {
        ctx->pc = 0x3FF0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF0A8u;
        // 0x3ff0ac: 0xae430054  sw          $v1, 0x54($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FF0B0u;
        goto label_3ff0b0;
    }
    ctx->pc = 0x3FF0A8u;
    SET_GPR_U32(ctx, 31, 0x3FF0B0u);
    ctx->pc = 0x3FF0ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FF0A8u;
    // 0x3ff0ac: 0xae430054  sw          $v1, 0x54($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F00u, 0x3FF0A8u, 0x3FF0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FF0B0u;
label_3ff0b0:
    // 0x3ff0b0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3ff0b0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_3ff0b4:
    // 0x3ff0b4: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3ff0b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3ff0b8:
    // 0x3ff0b8: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x3ff0b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3ff0bc:
    // 0x3ff0bc: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3ff0bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3ff0c0:
    // 0x3ff0c0: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3ff0c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3ff0c4:
    // 0x3ff0c4: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x3ff0c4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
label_3ff0c8:
    // 0x3ff0c8: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x3ff0c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_3ff0cc:
    // 0x3ff0cc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3ff0ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3ff0d0:
    // 0x3ff0d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3ff0d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ff0d4:
    // 0x3ff0d4: 0x0  nop
    ctx->pc = 0x3ff0d4u;
    // NOP
label_3ff0d8:
    // 0x3ff0d8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3ff0d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3ff0dc:
    // 0x3ff0dc: 0x0  nop
    ctx->pc = 0x3ff0dcu;
    // NOP
label_3ff0e0:
    // 0x3ff0e0: 0x45000010  bc1f        . + 4 + (0x10 << 2)
label_3ff0e4:
    if (ctx->pc == 0x3FF0E4u) {
        ctx->pc = 0x3FF0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF0E0u;
        // 0x3ff0e4: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FF0E8u;
        goto label_3ff0e8;
    }
    ctx->pc = 0x3FF0E0u;
    {
        const bool branch_taken_0x3ff0e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3FF0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF0E0u;
        // 0x3ff0e4: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff0e0) {
            ctx->pc = 0x3FF124u;
            goto label_3ff124;
        }
    }
    ctx->pc = 0x3FF0E8u;
label_3ff0e8:
    // 0x3ff0e8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3ff0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3ff0ec:
    // 0x3ff0ec: 0x261016c0  addiu       $s0, $s0, 0x16C0
    ctx->pc = 0x3ff0ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5824));
label_3ff0f0:
    // 0x3ff0f0: 0x84640070  lh          $a0, 0x70($v1)
    ctx->pc = 0x3ff0f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_3ff0f4:
    // 0x3ff0f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3ff0f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ff0f8:
    // 0x3ff0f8: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x3ff0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_3ff0fc:
    // 0x3ff0fc: 0x40f809  jalr        $v0
label_3ff100:
    if (ctx->pc == 0x3FF100u) {
        ctx->pc = 0x3FF100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF0FCu;
        // 0x3ff100: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FF104u;
        goto label_3ff104;
    }
    ctx->pc = 0x3FF0FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3FF104u);
        ctx->pc = 0x3FF100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF0FCu;
        // 0x3ff100: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FF0FCu, 0x3FF104u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3FF104u;
label_3ff104:
    // 0x3ff104: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3ff104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3ff108:
    // 0x3ff108: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3ff108u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ff10c:
    // 0x3ff10c: 0x84640078  lh          $a0, 0x78($v1)
    ctx->pc = 0x3ff10cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 120)));
label_3ff110:
    // 0x3ff110: 0x8c66007c  lw          $a2, 0x7C($v1)
    ctx->pc = 0x3ff110u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
label_3ff114:
    // 0x3ff114: 0xc0f809  jalr        $a2
label_3ff118:
    if (ctx->pc == 0x3FF118u) {
        ctx->pc = 0x3FF118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF114u;
        // 0x3ff118: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FF11Cu;
        goto label_3ff11c;
    }
    ctx->pc = 0x3FF114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x3FF11Cu);
        ctx->pc = 0x3FF118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF114u;
        // 0x3ff118: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FF114u, 0x3FF11Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3FF11Cu;
label_3ff11c:
    // 0x3ff11c: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x3ff11cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_3ff120:
    // 0x3ff120: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x3ff120u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
label_3ff124:
    // 0x3ff124: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x3ff124u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_3ff128:
    // 0x3ff128: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3ff128u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ff12c:
    // 0x3ff12c: 0x7bb00470  lq          $s0, 0x470($sp)
    ctx->pc = 0x3ff12cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
label_3ff130:
    // 0x3ff130: 0x7bb10460  lq          $s1, 0x460($sp)
    ctx->pc = 0x3ff130u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
label_3ff134:
    // 0x3ff134: 0x7bb20450  lq          $s2, 0x450($sp)
    ctx->pc = 0x3ff134u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
label_3ff138:
    // 0x3ff138: 0x7bb30440  lq          $s3, 0x440($sp)
    ctx->pc = 0x3ff138u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
label_3ff13c:
    // 0x3ff13c: 0x7bb40430  lq          $s4, 0x430($sp)
    ctx->pc = 0x3ff13cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
label_3ff140:
    // 0x3ff140: 0x7bb50420  lq          $s5, 0x420($sp)
    ctx->pc = 0x3ff140u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 1056)));
label_3ff144:
    // 0x3ff144: 0xdfbf0410  ld          $ra, 0x410($sp)
    ctx->pc = 0x3ff144u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1040)));
label_3ff148:
    // 0x3ff148: 0x3e00008  jr          $ra
label_3ff14c:
    if (ctx->pc == 0x3FF14Cu) {
        ctx->pc = 0x3FF14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF148u;
        // 0x3ff14c: 0x27bd0480  addiu       $sp, $sp, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FF150u;
        goto label_fallthrough_0x3ff148;
    }
    ctx->pc = 0x3FF148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FF14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF148u;
        // 0x3ff14c: 0x27bd0480  addiu       $sp, $sp, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FF148u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3ff148:
    ctx->pc = 0x3FF150u;
}
