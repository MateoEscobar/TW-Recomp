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

// Function: sub_00186FF0
// Address: 0x186ff0 - 0x187098
void sub_00186FF0_0x186ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00186FF0_0x186ff0");
#endif

    switch (ctx->pc) {
        case 0x186ff0u: goto label_186ff0;
        case 0x186ff4u: goto label_186ff4;
        case 0x186ff8u: goto label_186ff8;
        case 0x186ffcu: goto label_186ffc;
        case 0x187000u: goto label_187000;
        case 0x187004u: goto label_187004;
        case 0x187008u: goto label_187008;
        case 0x18700cu: goto label_18700c;
        case 0x187010u: goto label_187010;
        case 0x187014u: goto label_187014;
        case 0x187018u: goto label_187018;
        case 0x18701cu: goto label_18701c;
        case 0x187020u: goto label_187020;
        case 0x187024u: goto label_187024;
        case 0x187028u: goto label_187028;
        case 0x18702cu: goto label_18702c;
        case 0x187030u: goto label_187030;
        case 0x187034u: goto label_187034;
        case 0x187038u: goto label_187038;
        case 0x18703cu: goto label_18703c;
        case 0x187040u: goto label_187040;
        case 0x187044u: goto label_187044;
        case 0x187048u: goto label_187048;
        case 0x18704cu: goto label_18704c;
        case 0x187050u: goto label_187050;
        case 0x187054u: goto label_187054;
        case 0x187058u: goto label_187058;
        case 0x18705cu: goto label_18705c;
        case 0x187060u: goto label_187060;
        case 0x187064u: goto label_187064;
        case 0x187068u: goto label_187068;
        case 0x18706cu: goto label_18706c;
        case 0x187070u: goto label_187070;
        case 0x187074u: goto label_187074;
        case 0x187078u: goto label_187078;
        case 0x18707cu: goto label_18707c;
        case 0x187080u: goto label_187080;
        case 0x187084u: goto label_187084;
        case 0x187088u: goto label_187088;
        case 0x18708cu: goto label_18708c;
        case 0x187090u: goto label_187090;
        case 0x187094u: goto label_187094;
        default: break;
    }

    ctx->pc = 0x186ff0u;

label_186ff0:
    // 0x186ff0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x186ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_186ff4:
    // 0x186ff4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x186ff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_186ff8:
    // 0x186ff8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x186ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_186ffc:
    // 0x186ffc: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x186ffcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_187000:
    // 0x187000: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x187000u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_187004:
    // 0x187004: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x187004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_187008:
    // 0x187008: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x187008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_18700c:
    // 0x18700c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x18700cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_187010:
    // 0x187010: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x187010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_187014:
    // 0x187014: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x187014u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_187018:
    // 0x187018: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x187018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_18701c:
    // 0x18701c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x18701cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_187020:
    // 0x187020: 0x8e4727e4  lw          $a3, 0x27E4($s2)
    ctx->pc = 0x187020u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10212)));
label_187024:
    // 0x187024: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x187024u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_187028:
    // 0x187028: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x187028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_18702c:
    // 0x18702c: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x18702cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_187030:
    // 0x187030: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x187030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_187034:
    // 0x187034: 0x60f809  jalr        $v1
label_187038:
    if (ctx->pc == 0x187038u) {
        ctx->pc = 0x187038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187034u;
        // 0x187038: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18703Cu;
        goto label_18703c;
    }
    ctx->pc = 0x187034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x18703Cu);
        ctx->pc = 0x187038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187034u;
        // 0x187038: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187034u, 0x18703Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18703Cu;
label_18703c:
    // 0x18703c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x18703cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_187040:
    // 0x187040: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x187040u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_187044:
    // 0x187044: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x187044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_187048:
    // 0x187048: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x187048u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18704c:
    // 0x18704c: 0xc061c26  jal         func_187098
label_187050:
    if (ctx->pc == 0x187050u) {
        ctx->pc = 0x187050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18704Cu;
        // 0x187050: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187054u;
        goto label_187054;
    }
    ctx->pc = 0x18704Cu;
    SET_GPR_U32(ctx, 31, 0x187054u);
    ctx->pc = 0x187050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18704Cu;
    // 0x187050: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187098u, 0x18704Cu, 0x187054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187054u;
label_187054:
    // 0x187054: 0x8e4627e4  lw          $a2, 0x27E4($s2)
    ctx->pc = 0x187054u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10212)));
label_187058:
    // 0x187058: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x187058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_18705c:
    // 0x18705c: 0x8c45b9b8  lw          $a1, -0x4648($v0)
    ctx->pc = 0x18705cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949304)));
label_187060:
    // 0x187060: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x187060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_187064:
    // 0x187064: 0x846400c0  lh          $a0, 0xC0($v1)
    ctx->pc = 0x187064u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 192)));
label_187068:
    // 0x187068: 0x8c6200c4  lw          $v0, 0xC4($v1)
    ctx->pc = 0x187068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
label_18706c:
    // 0x18706c: 0x40f809  jalr        $v0
label_187070:
    if (ctx->pc == 0x187070u) {
        ctx->pc = 0x187070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18706Cu;
        // 0x187070: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187074u;
        goto label_187074;
    }
    ctx->pc = 0x18706Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x187074u);
        ctx->pc = 0x187070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18706Cu;
        // 0x187070: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18706Cu, 0x187074u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x187074u;
label_187074:
    // 0x187074: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x187074u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_187078:
    // 0x187078: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x187078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18707c:
    // 0x18707c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x18707cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_187080:
    // 0x187080: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x187080u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_187084:
    // 0x187084: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x187084u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_187088:
    // 0x187088: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x187088u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_18708c:
    // 0x18708c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18708cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_187090:
    // 0x187090: 0x3e00008  jr          $ra
label_187094:
    if (ctx->pc == 0x187094u) {
        ctx->pc = 0x187094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187090u;
        // 0x187094: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187098u;
        goto label_fallthrough_0x187090;
    }
    ctx->pc = 0x187090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187090u;
        // 0x187094: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187090u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x187090:
    ctx->pc = 0x187098u;
}
