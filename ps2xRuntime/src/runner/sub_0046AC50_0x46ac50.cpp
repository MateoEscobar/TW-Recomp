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

// Function: sub_0046AC50
// Address: 0x46ac50 - 0x46aea0
void sub_0046AC50_0x46ac50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046AC50_0x46ac50");
#endif

    switch (ctx->pc) {
        case 0x46ac50u: goto label_46ac50;
        case 0x46ac54u: goto label_46ac54;
        case 0x46ac58u: goto label_46ac58;
        case 0x46ac5cu: goto label_46ac5c;
        case 0x46ac60u: goto label_46ac60;
        case 0x46ac64u: goto label_46ac64;
        case 0x46ac68u: goto label_46ac68;
        case 0x46ac6cu: goto label_46ac6c;
        case 0x46ac70u: goto label_46ac70;
        case 0x46ac74u: goto label_46ac74;
        case 0x46ac78u: goto label_46ac78;
        case 0x46ac7cu: goto label_46ac7c;
        case 0x46ac80u: goto label_46ac80;
        case 0x46ac84u: goto label_46ac84;
        case 0x46ac88u: goto label_46ac88;
        case 0x46ac8cu: goto label_46ac8c;
        case 0x46ac90u: goto label_46ac90;
        case 0x46ac94u: goto label_46ac94;
        case 0x46ac98u: goto label_46ac98;
        case 0x46ac9cu: goto label_46ac9c;
        case 0x46aca0u: goto label_46aca0;
        case 0x46aca4u: goto label_46aca4;
        case 0x46aca8u: goto label_46aca8;
        case 0x46acacu: goto label_46acac;
        case 0x46acb0u: goto label_46acb0;
        case 0x46acb4u: goto label_46acb4;
        case 0x46acb8u: goto label_46acb8;
        case 0x46acbcu: goto label_46acbc;
        case 0x46acc0u: goto label_46acc0;
        case 0x46acc4u: goto label_46acc4;
        case 0x46acc8u: goto label_46acc8;
        case 0x46acccu: goto label_46accc;
        case 0x46acd0u: goto label_46acd0;
        case 0x46acd4u: goto label_46acd4;
        case 0x46acd8u: goto label_46acd8;
        case 0x46acdcu: goto label_46acdc;
        case 0x46ace0u: goto label_46ace0;
        case 0x46ace4u: goto label_46ace4;
        case 0x46ace8u: goto label_46ace8;
        case 0x46acecu: goto label_46acec;
        case 0x46acf0u: goto label_46acf0;
        case 0x46acf4u: goto label_46acf4;
        case 0x46acf8u: goto label_46acf8;
        case 0x46acfcu: goto label_46acfc;
        case 0x46ad00u: goto label_46ad00;
        case 0x46ad04u: goto label_46ad04;
        case 0x46ad08u: goto label_46ad08;
        case 0x46ad0cu: goto label_46ad0c;
        case 0x46ad10u: goto label_46ad10;
        case 0x46ad14u: goto label_46ad14;
        case 0x46ad18u: goto label_46ad18;
        case 0x46ad1cu: goto label_46ad1c;
        case 0x46ad20u: goto label_46ad20;
        case 0x46ad24u: goto label_46ad24;
        case 0x46ad28u: goto label_46ad28;
        case 0x46ad2cu: goto label_46ad2c;
        case 0x46ad30u: goto label_46ad30;
        case 0x46ad34u: goto label_46ad34;
        case 0x46ad38u: goto label_46ad38;
        case 0x46ad3cu: goto label_46ad3c;
        case 0x46ad40u: goto label_46ad40;
        case 0x46ad44u: goto label_46ad44;
        case 0x46ad48u: goto label_46ad48;
        case 0x46ad4cu: goto label_46ad4c;
        case 0x46ad50u: goto label_46ad50;
        case 0x46ad54u: goto label_46ad54;
        case 0x46ad58u: goto label_46ad58;
        case 0x46ad5cu: goto label_46ad5c;
        case 0x46ad60u: goto label_46ad60;
        case 0x46ad64u: goto label_46ad64;
        case 0x46ad68u: goto label_46ad68;
        case 0x46ad6cu: goto label_46ad6c;
        case 0x46ad70u: goto label_46ad70;
        case 0x46ad74u: goto label_46ad74;
        case 0x46ad78u: goto label_46ad78;
        case 0x46ad7cu: goto label_46ad7c;
        case 0x46ad80u: goto label_46ad80;
        case 0x46ad84u: goto label_46ad84;
        case 0x46ad88u: goto label_46ad88;
        case 0x46ad8cu: goto label_46ad8c;
        case 0x46ad90u: goto label_46ad90;
        case 0x46ad94u: goto label_46ad94;
        case 0x46ad98u: goto label_46ad98;
        case 0x46ad9cu: goto label_46ad9c;
        case 0x46ada0u: goto label_46ada0;
        case 0x46ada4u: goto label_46ada4;
        case 0x46ada8u: goto label_46ada8;
        case 0x46adacu: goto label_46adac;
        case 0x46adb0u: goto label_46adb0;
        case 0x46adb4u: goto label_46adb4;
        case 0x46adb8u: goto label_46adb8;
        case 0x46adbcu: goto label_46adbc;
        case 0x46adc0u: goto label_46adc0;
        case 0x46adc4u: goto label_46adc4;
        case 0x46adc8u: goto label_46adc8;
        case 0x46adccu: goto label_46adcc;
        case 0x46add0u: goto label_46add0;
        case 0x46add4u: goto label_46add4;
        case 0x46add8u: goto label_46add8;
        case 0x46addcu: goto label_46addc;
        case 0x46ade0u: goto label_46ade0;
        case 0x46ade4u: goto label_46ade4;
        case 0x46ade8u: goto label_46ade8;
        case 0x46adecu: goto label_46adec;
        case 0x46adf0u: goto label_46adf0;
        case 0x46adf4u: goto label_46adf4;
        case 0x46adf8u: goto label_46adf8;
        case 0x46adfcu: goto label_46adfc;
        case 0x46ae00u: goto label_46ae00;
        case 0x46ae04u: goto label_46ae04;
        case 0x46ae08u: goto label_46ae08;
        case 0x46ae0cu: goto label_46ae0c;
        case 0x46ae10u: goto label_46ae10;
        case 0x46ae14u: goto label_46ae14;
        case 0x46ae18u: goto label_46ae18;
        case 0x46ae1cu: goto label_46ae1c;
        case 0x46ae20u: goto label_46ae20;
        case 0x46ae24u: goto label_46ae24;
        case 0x46ae28u: goto label_46ae28;
        case 0x46ae2cu: goto label_46ae2c;
        case 0x46ae30u: goto label_46ae30;
        case 0x46ae34u: goto label_46ae34;
        case 0x46ae38u: goto label_46ae38;
        case 0x46ae3cu: goto label_46ae3c;
        case 0x46ae40u: goto label_46ae40;
        case 0x46ae44u: goto label_46ae44;
        case 0x46ae48u: goto label_46ae48;
        case 0x46ae4cu: goto label_46ae4c;
        case 0x46ae50u: goto label_46ae50;
        case 0x46ae54u: goto label_46ae54;
        case 0x46ae58u: goto label_46ae58;
        case 0x46ae5cu: goto label_46ae5c;
        case 0x46ae60u: goto label_46ae60;
        case 0x46ae64u: goto label_46ae64;
        case 0x46ae68u: goto label_46ae68;
        case 0x46ae6cu: goto label_46ae6c;
        case 0x46ae70u: goto label_46ae70;
        case 0x46ae74u: goto label_46ae74;
        case 0x46ae78u: goto label_46ae78;
        case 0x46ae7cu: goto label_46ae7c;
        case 0x46ae80u: goto label_46ae80;
        case 0x46ae84u: goto label_46ae84;
        case 0x46ae88u: goto label_46ae88;
        case 0x46ae8cu: goto label_46ae8c;
        case 0x46ae90u: goto label_46ae90;
        case 0x46ae94u: goto label_46ae94;
        case 0x46ae98u: goto label_46ae98;
        case 0x46ae9cu: goto label_46ae9c;
        default: break;
    }

    ctx->pc = 0x46ac50u;

label_46ac50:
    // 0x46ac50: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x46ac50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_46ac54:
    // 0x46ac54: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x46ac54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
label_46ac58:
    // 0x46ac58: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x46ac58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_46ac5c:
    // 0x46ac5c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x46ac5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_46ac60:
    // 0x46ac60: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x46ac60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_46ac64:
    // 0x46ac64: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x46ac64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_46ac68:
    // 0x46ac68: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x46ac68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_46ac6c:
    // 0x46ac6c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x46ac6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_46ac70:
    // 0x46ac70: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x46ac70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_46ac74:
    // 0x46ac74: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x46ac74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_46ac78:
    // 0x46ac78: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_46ac7c:
    if (ctx->pc == 0x46AC7Cu) {
        ctx->pc = 0x46AC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46AC78u;
        // 0x46ac7c: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46AC80u;
        goto label_46ac80;
    }
    ctx->pc = 0x46AC78u;
    {
        const bool branch_taken_0x46ac78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x46AC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46AC78u;
        // 0x46ac7c: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46ac78) {
            ctx->pc = 0x46AC88u;
            goto label_46ac88;
        }
    }
    ctx->pc = 0x46AC80u;
label_46ac80:
    // 0x46ac80: 0x10000008  b           . + 4 + (0x8 << 2)
label_46ac84:
    if (ctx->pc == 0x46AC84u) {
        ctx->pc = 0x46AC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46AC80u;
        // 0x46ac84: 0x2412001c  addiu       $s2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46AC88u;
        goto label_46ac88;
    }
    ctx->pc = 0x46AC80u;
    {
        const bool branch_taken_0x46ac80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46AC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46AC80u;
        // 0x46ac84: 0x2412001c  addiu       $s2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46ac80) {
            ctx->pc = 0x46ACA4u;
            goto label_46aca4;
        }
    }
    ctx->pc = 0x46AC88u;
label_46ac88:
    // 0x46ac88: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x46ac88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_46ac8c:
    // 0x46ac8c: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x46ac8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_46ac90:
    // 0x46ac90: 0x30840010  andi        $a0, $a0, 0x10
    ctx->pc = 0x46ac90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
label_46ac94:
    // 0x46ac94: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x46ac94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_46ac98:
    // 0x46ac98: 0x2452001c  addiu       $s2, $v0, 0x1C
    ctx->pc = 0x46ac98u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
label_46ac9c:
    // 0x46ac9c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x46ac9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_46aca0:
    // 0x46aca0: 0x44900b  movn        $s2, $v0, $a0
    ctx->pc = 0x46aca0u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
label_46aca4:
    // 0x46aca4: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x46aca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_46aca8:
    // 0x46aca8: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x46aca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_46acac:
    // 0x46acac: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x46acacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_46acb0:
    // 0x46acb0: 0x10800020  beqz        $a0, . + 4 + (0x20 << 2)
label_46acb4:
    if (ctx->pc == 0x46ACB4u) {
        ctx->pc = 0x46ACB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46ACB0u;
        // 0x46acb4: 0x2428818  mult        $s1, $s2, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x46ACB8u;
        goto label_46acb8;
    }
    ctx->pc = 0x46ACB0u;
    {
        const bool branch_taken_0x46acb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x46ACB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46ACB0u;
        // 0x46acb4: 0x2428818  mult        $s1, $s2, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x46acb0) {
            ctx->pc = 0x46AD34u;
            goto label_46ad34;
        }
    }
    ctx->pc = 0x46ACB8u;
label_46acb8:
    // 0x46acb8: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x46acb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_46acbc:
    // 0x46acbc: 0x3c060003  lui         $a2, 0x3
    ctx->pc = 0x46acbcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
label_46acc0:
    // 0x46acc0: 0x8c62ae28  lw          $v0, -0x51D8($v1)
    ctx->pc = 0x46acc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946344)));
label_46acc4:
    // 0x46acc4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x46acc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_46acc8:
    // 0x46acc8: 0x40f809  jalr        $v0
label_46accc:
    if (ctx->pc == 0x46ACCCu) {
        ctx->pc = 0x46ACCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46ACC8u;
        // 0x46accc: 0x34c6000f  ori         $a2, $a2, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        ctx->pc = 0x46ACD0u;
        goto label_46acd0;
    }
    ctx->pc = 0x46ACC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x46ACD0u);
        ctx->pc = 0x46ACCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46ACC8u;
        // 0x46accc: 0x34c6000f  ori         $a2, $a2, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46ACC8u, 0x46ACD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46ACD0u;
label_46acd0:
    // 0x46acd0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x46acd0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_46acd4:
    // 0x46acd4: 0x10e00022  beqz        $a3, . + 4 + (0x22 << 2)
label_46acd8:
    if (ctx->pc == 0x46ACD8u) {
        ctx->pc = 0x46ACD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46ACD4u;
        // 0x46acd8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46ACDCu;
        goto label_46acdc;
    }
    ctx->pc = 0x46ACD4u;
    {
        const bool branch_taken_0x46acd4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x46ACD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46ACD4u;
        // 0x46acd8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46acd4) {
            ctx->pc = 0x46AD60u;
            goto label_46ad60;
        }
    }
    ctx->pc = 0x46ACDCu;
label_46acdc:
    // 0x46acdc: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x46acdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_46ace0:
    // 0x46ace0: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x46ace0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_46ace4:
    // 0x46ace4: 0x2632018  mult        $a0, $s3, $v1
    ctx->pc = 0x46ace4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_46ace8:
    // 0x46ace8: 0x431818  mult        $v1, $v0, $v1
    ctx->pc = 0x46ace8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_46acec:
    // 0x46acec: 0x2421018  mult        $v0, $s2, $v0
    ctx->pc = 0x46acecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_46acf0:
    // 0x46acf0: 0x432823  subu        $a1, $v0, $v1
    ctx->pc = 0x46acf0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_46acf4:
    // 0x46acf4: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x46acf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_46acf8:
    // 0x46acf8: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x46acf8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_46acfc:
    // 0x46acfc: 0x2446ffff  addiu       $a2, $v0, -0x1
    ctx->pc = 0x46acfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_46ad00:
    // 0x46ad00: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x46ad00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_46ad04:
    // 0x46ad04: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
label_46ad08:
    if (ctx->pc == 0x46AD08u) {
        ctx->pc = 0x46AD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46AD04u;
        // 0x46ad08: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46AD0Cu;
        goto label_46ad0c;
    }
    ctx->pc = 0x46AD04u;
    {
        const bool branch_taken_0x46ad04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x46AD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46AD04u;
        // 0x46ad08: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46ad04) {
            ctx->pc = 0x46AD88u;
            goto label_46ad88;
        }
    }
    ctx->pc = 0x46AD0Cu;
label_46ad0c:
    // 0x46ad0c: 0x0  nop
    ctx->pc = 0x46ad0cu;
    // NOP
label_46ad10:
    // 0x46ad10: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x46ad10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_46ad14:
    // 0x46ad14: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x46ad14u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_46ad18:
    // 0x46ad18: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x46ad18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_46ad1c:
    // 0x46ad1c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x46ad1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_46ad20:
    // 0x46ad20: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x46ad20u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_46ad24:
    // 0x46ad24: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_46ad28:
    if (ctx->pc == 0x46AD28u) {
        ctx->pc = 0x46AD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46AD24u;
        // 0x46ad28: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46AD2Cu;
        goto label_46ad2c;
    }
    ctx->pc = 0x46AD24u;
    {
        const bool branch_taken_0x46ad24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x46AD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46AD24u;
        // 0x46ad28: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46ad24) {
            ctx->pc = 0x46AD10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_46ad10;
        }
    }
    ctx->pc = 0x46AD2Cu;
label_46ad2c:
    // 0x46ad2c: 0x10000017  b           . + 4 + (0x17 << 2)
label_46ad30:
    if (ctx->pc == 0x46AD30u) {
        ctx->pc = 0x46AD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46AD2Cu;
        // 0x46ad30: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46AD34u;
        goto label_46ad34;
    }
    ctx->pc = 0x46AD2Cu;
    {
        const bool branch_taken_0x46ad2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46AD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46AD2Cu;
        // 0x46ad30: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46ad2c) {
            ctx->pc = 0x46AD8Cu;
            goto label_46ad8c;
        }
    }
    ctx->pc = 0x46AD34u;
label_46ad34:
    // 0x46ad34: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x46ad34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_46ad38:
    // 0x46ad38: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x46ad38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_46ad3c:
    // 0x46ad3c: 0x8c62ae20  lw          $v0, -0x51E0($v1)
    ctx->pc = 0x46ad3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946336)));
label_46ad40:
    // 0x46ad40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x46ad40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_46ad44:
    // 0x46ad44: 0x40f809  jalr        $v0
label_46ad48:
    if (ctx->pc == 0x46AD48u) {
        ctx->pc = 0x46AD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46AD44u;
        // 0x46ad48: 0x34a5000f  ori         $a1, $a1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        ctx->pc = 0x46AD4Cu;
        goto label_46ad4c;
    }
    ctx->pc = 0x46AD44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x46AD4Cu);
        ctx->pc = 0x46AD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46AD44u;
        // 0x46ad48: 0x34a5000f  ori         $a1, $a1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46AD44u, 0x46AD4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46AD4Cu;
label_46ad4c:
    // 0x46ad4c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x46ad4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_46ad50:
    // 0x46ad50: 0x54e0000e  bnel        $a3, $zero, . + 4 + (0xE << 2)
label_46ad54:
    if (ctx->pc == 0x46AD54u) {
        ctx->pc = 0x46AD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46AD50u;
        // 0x46ad54: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46AD58u;
        goto label_46ad58;
    }
    ctx->pc = 0x46AD50u;
    {
        const bool branch_taken_0x46ad50 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x46ad50) {
            ctx->pc = 0x46AD54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46AD50u;
            // 0x46ad54: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46AD8Cu;
            goto label_46ad8c;
        }
    }
    ctx->pc = 0x46AD58u;
label_46ad58:
    // 0x46ad58: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x46ad58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_46ad5c:
    // 0x46ad5c: 0x0  nop
    ctx->pc = 0x46ad5cu;
    // NOP
label_46ad60:
    // 0x46ad60: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x46ad60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_46ad64:
    // 0x46ad64: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x46ad64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_46ad68:
    // 0x46ad68: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x46ad68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_46ad6c:
    // 0x46ad6c: 0xc11eff2  jal         func_47BFC8
label_46ad70:
    if (ctx->pc == 0x46AD70u) {
        ctx->pc = 0x46AD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46AD6Cu;
        // 0x46ad70: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x46AD74u;
        goto label_46ad74;
    }
    ctx->pc = 0x46AD6Cu;
    SET_GPR_U32(ctx, 31, 0x46AD74u);
    ctx->pc = 0x46AD70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46AD6Cu;
    // 0x46ad70: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x46AD6Cu, 0x46AD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46AD74u;
label_46ad74:
    // 0x46ad74: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x46ad74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_46ad78:
    // 0x46ad78: 0xc11f024  jal         func_47C090
label_46ad7c:
    if (ctx->pc == 0x46AD7Cu) {
        ctx->pc = 0x46AD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46AD78u;
        // 0x46ad7c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46AD80u;
        goto label_46ad80;
    }
    ctx->pc = 0x46AD78u;
    SET_GPR_U32(ctx, 31, 0x46AD80u);
    ctx->pc = 0x46AD7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46AD78u;
    // 0x46ad7c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x46AD78u, 0x46AD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46AD80u;
label_46ad80:
    // 0x46ad80: 0x1000003d  b           . + 4 + (0x3D << 2)
label_46ad84:
    if (ctx->pc == 0x46AD84u) {
        ctx->pc = 0x46AD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46AD80u;
        // 0x46ad84: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46AD88u;
        goto label_46ad88;
    }
    ctx->pc = 0x46AD80u;
    {
        const bool branch_taken_0x46ad80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46AD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46AD80u;
        // 0x46ad84: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46ad80) {
            ctx->pc = 0x46AE78u;
            goto label_46ae78;
        }
    }
    ctx->pc = 0x46AD88u;
label_46ad88:
    // 0x46ad88: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x46ad88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_46ad8c:
    // 0x46ad8c: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x46ad8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_46ad90:
    // 0x46ad90: 0xe00013  mtlo        $a3
    ctx->pc = 0x46ad90u;
    ctx->lo = GPR_U64(ctx, 7);
label_46ad94:
    // 0x46ad94: 0xae07005c  sw          $a3, 0x5C($s0)
    ctx->pc = 0x46ad94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 7));
label_46ad98:
    // 0x46ad98: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x46ad98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_46ad9c:
    // 0x46ad9c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x46ad9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46ada0:
    // 0x46ada0: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x46ada0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
label_46ada4:
    // 0x46ada4: 0x1840001f  blez        $v0, . + 4 + (0x1F << 2)
label_46ada8:
    if (ctx->pc == 0x46ADA8u) {
        ctx->pc = 0x46ADA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46ADA4u;
        // 0x46ada8: 0x70430000  madd        $zero, $v0, $v1 (Delay Slot)
        { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x46ADACu;
        goto label_46adac;
    }
    ctx->pc = 0x46ADA4u;
    {
        const bool branch_taken_0x46ada4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x46ADA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46ADA4u;
        // 0x46ada8: 0x70430000  madd        $zero, $v0, $v1 (Delay Slot)
        { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x46ada4) {
            ctx->pc = 0x46AE24u;
            goto label_46ae24;
        }
    }
    ctx->pc = 0x46ADACu;
label_46adac:
    // 0x46adac: 0x3c080100  lui         $t0, 0x100
    ctx->pc = 0x46adacu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)256 << 16));
label_46adb0:
    // 0x46adb0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x46adb0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46adb4:
    // 0x46adb4: 0x0  nop
    ctx->pc = 0x46adb4u;
    // NOP
label_46adb8:
    // 0x46adb8: 0x8e02005c  lw          $v0, 0x5C($s0)
    ctx->pc = 0x46adb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_46adbc:
    // 0x46adbc: 0x472021  addu        $a0, $v0, $a3
    ctx->pc = 0x46adbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_46adc0:
    // 0x46adc0: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x46adc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
label_46adc4:
    // 0x46adc4: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x46adc4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
label_46adc8:
    // 0x46adc8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x46adc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_46adcc:
    // 0x46adcc: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x46adccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
label_46add0:
    // 0x46add0: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
label_46add4:
    if (ctx->pc == 0x46ADD4u) {
        ctx->pc = 0x46ADD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46ADD0u;
        // 0x46add4: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46ADD8u;
        goto label_46add8;
    }
    ctx->pc = 0x46ADD0u;
    {
        const bool branch_taken_0x46add0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x46add0) {
            ctx->pc = 0x46ADD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46ADD0u;
            // 0x46add4: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46AE14u;
            goto label_46ae14;
        }
    }
    ctx->pc = 0x46ADD8u;
label_46add8:
    // 0x46add8: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x46add8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_46addc:
    // 0x46addc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_46ade0:
    if (ctx->pc == 0x46ADE0u) {
        ctx->pc = 0x46ADE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46ADDCu;
        // 0x46ade0: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46ADE4u;
        goto label_46ade4;
    }
    ctx->pc = 0x46ADDCu;
    {
        const bool branch_taken_0x46addc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x46ADE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46ADDCu;
        // 0x46ade0: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46addc) {
            ctx->pc = 0x46AE10u;
            goto label_46ae10;
        }
    }
    ctx->pc = 0x46ADE4u;
label_46ade4:
    // 0x46ade4: 0x1012  mflo        $v0
    ctx->pc = 0x46ade4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_46ade8:
    // 0x46ade8: 0xac820014  sw          $v0, 0x14($a0)
    ctx->pc = 0x46ade8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
label_46adec:
    // 0x46adec: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x46adecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_46adf0:
    // 0x46adf0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x46adf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_46adf4:
    // 0x46adf4: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x46adf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_46adf8:
    // 0x46adf8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_46adfc:
    if (ctx->pc == 0x46ADFCu) {
        ctx->pc = 0x46ADFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46ADF8u;
        // 0x46adfc: 0x70660000  madd        $zero, $v1, $a2 (Delay Slot)
        { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x46AE00u;
        goto label_46ae00;
    }
    ctx->pc = 0x46ADF8u;
    {
        const bool branch_taken_0x46adf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x46ADFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46ADF8u;
        // 0x46adfc: 0x70660000  madd        $zero, $v1, $a2 (Delay Slot)
        { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x46adf8) {
            ctx->pc = 0x46AE10u;
            goto label_46ae10;
        }
    }
    ctx->pc = 0x46AE00u;
label_46ae00:
    // 0x46ae00: 0x1012  mflo        $v0
    ctx->pc = 0x46ae00u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_46ae04:
    // 0x46ae04: 0xac820018  sw          $v0, 0x18($a0)
    ctx->pc = 0x46ae04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
label_46ae08:
    // 0x46ae08: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x46ae08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_46ae0c:
    // 0x46ae0c: 0x70460000  madd        $zero, $v0, $a2
    ctx->pc = 0x46ae0cu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); }
label_46ae10:
    // 0x46ae10: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x46ae10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_46ae14:
    // 0x46ae14: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x46ae14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_46ae18:
    // 0x46ae18: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x46ae18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_46ae1c:
    // 0x46ae1c: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
label_46ae20:
    if (ctx->pc == 0x46AE20u) {
        ctx->pc = 0x46AE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46AE1Cu;
        // 0x46ae20: 0x24e7001c  addiu       $a3, $a3, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46AE24u;
        goto label_46ae24;
    }
    ctx->pc = 0x46AE1Cu;
    {
        const bool branch_taken_0x46ae1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x46AE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46AE1Cu;
        // 0x46ae20: 0x24e7001c  addiu       $a3, $a3, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46ae1c) {
            ctx->pc = 0x46ADB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_46adb8;
        }
    }
    ctx->pc = 0x46AE24u;
label_46ae24:
    // 0x46ae24: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x46ae24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_46ae28:
    // 0x46ae28: 0x532823  subu        $a1, $v0, $s3
    ctx->pc = 0x46ae28u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_46ae2c:
    // 0x46ae2c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x46ae2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_46ae30:
    // 0x46ae30: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_46ae34:
    if (ctx->pc == 0x46AE34u) {
        ctx->pc = 0x46AE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46AE30u;
        // 0x46ae34: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46AE38u;
        goto label_46ae38;
    }
    ctx->pc = 0x46AE30u;
    {
        const bool branch_taken_0x46ae30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x46AE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46AE30u;
        // 0x46ae34: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46ae30) {
            ctx->pc = 0x46AE70u;
            goto label_46ae70;
        }
    }
    ctx->pc = 0x46AE38u;
label_46ae38:
    // 0x46ae38: 0xa22018  mult        $a0, $a1, $v0
    ctx->pc = 0x46ae38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_46ae3c:
    // 0x46ae3c: 0x0  nop
    ctx->pc = 0x46ae3cu;
    // NOP
label_46ae40:
    // 0x46ae40: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x46ae40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_46ae44:
    // 0x46ae44: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x46ae44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_46ae48:
    // 0x46ae48: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x46ae48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_46ae4c:
    // 0x46ae4c: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x46ae4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
label_46ae50:
    // 0x46ae50: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x46ae50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_46ae54:
    // 0x46ae54: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x46ae54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
label_46ae58:
    // 0x46ae58: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x46ae58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
label_46ae5c:
    // 0x46ae5c: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x46ae5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
label_46ae60:
    // 0x46ae60: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x46ae60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_46ae64:
    // 0x46ae64: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x46ae64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_46ae68:
    // 0x46ae68: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_46ae6c:
    if (ctx->pc == 0x46AE6Cu) {
        ctx->pc = 0x46AE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46AE68u;
        // 0x46ae6c: 0x2484001c  addiu       $a0, $a0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46AE70u;
        goto label_46ae70;
    }
    ctx->pc = 0x46AE68u;
    {
        const bool branch_taken_0x46ae68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x46AE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46AE68u;
        // 0x46ae6c: 0x2484001c  addiu       $a0, $a0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46ae68) {
            ctx->pc = 0x46AE40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_46ae40;
        }
    }
    ctx->pc = 0x46AE70u;
label_46ae70:
    // 0x46ae70: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x46ae70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_46ae74:
    // 0x46ae74: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x46ae74u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_46ae78:
    // 0x46ae78: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x46ae78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_46ae7c:
    // 0x46ae7c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x46ae7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_46ae80:
    // 0x46ae80: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x46ae80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_46ae84:
    // 0x46ae84: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x46ae84u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_46ae88:
    // 0x46ae88: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x46ae88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_46ae8c:
    // 0x46ae8c: 0x3e00008  jr          $ra
label_46ae90:
    if (ctx->pc == 0x46AE90u) {
        ctx->pc = 0x46AE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46AE8Cu;
        // 0x46ae90: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46AE94u;
        goto label_46ae94;
    }
    ctx->pc = 0x46AE8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46AE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46AE8Cu;
        // 0x46ae90: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46AE8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46AE94u;
label_46ae94:
    // 0x46ae94: 0x0  nop
    ctx->pc = 0x46ae94u;
    // NOP
label_46ae98:
    // 0x46ae98: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x46ae98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_46ae9c:
    // 0x46ae9c: 0x0  nop
    ctx->pc = 0x46ae9cu;
    // NOP
    ctx->pc = 0x46aea0u;
}
