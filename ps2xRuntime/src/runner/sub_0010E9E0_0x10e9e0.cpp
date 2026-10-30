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

// Function: sub_0010E9E0
// Address: 0x10e9e0 - 0x10eab0
void sub_0010E9E0_0x10e9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010E9E0_0x10e9e0");
#endif

    switch (ctx->pc) {
        case 0x10ea28u: goto label_10ea28;
        case 0x10ea40u: goto label_10ea40;
        case 0x10ea88u: goto label_10ea88;
        default: break;
    }

    ctx->pc = 0x10e9e0u;

    // 0x10e9e0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x10e9e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x10e9e4: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x10e9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x10e9e8: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x10e9e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x10e9ec: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x10e9ecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e9f0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x10e9f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x10e9f4: 0x2a21018  mult        $v0, $s5, $v0
    ctx->pc = 0x10e9f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x10e9f8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x10e9f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e9fc: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x10e9fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x10ea00: 0x2663002c  addiu       $v1, $s3, 0x2C
    ctx->pc = 0x10ea00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 44));
    // 0x10ea04: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x10ea04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x10ea08: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x10ea08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x10ea0c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x10ea0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ea10: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x10ea10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x10ea14: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x10ea14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ea18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10ea18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10ea1c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x10ea1cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ea20: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x10ea20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10ea24: 0x0  nop
    ctx->pc = 0x10ea24u;
    // NOP
label_10ea28:
    // 0x10ea28: 0x254102b  sltu        $v0, $s2, $s4
    ctx->pc = 0x10ea28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x10ea2c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x10EA2Cu;
    {
        const bool branch_taken_0x10ea2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10ea2c) {
            ctx->pc = 0x10EA30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10EA2Cu;
            // 0x10ea30: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10EA48u;
            goto label_10ea48;
        }
    }
    ctx->pc = 0x10EA34u;
    // 0x10ea34: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x10ea34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x10ea38: 0xc043b64  jal         func_10ED90
    ctx->pc = 0x10EA38u;
    SET_GPR_U32(ctx, 31, 0x10EA40u);
    ctx->pc = 0x10EA3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EA38u;
    // 0x10ea3c: 0x2664000c  addiu       $a0, $s3, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10ED90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10ED90u, 0x10EA38u, 0x10EA40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EA40u;
label_10ea40:
    // 0x10ea40: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x10ea40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x10ea44: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x10ea44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_10ea48:
    // 0x10ea48: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x10ea48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x10ea4c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x10ea4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x10ea50: 0x2e420003  sltiu       $v0, $s2, 0x3
    ctx->pc = 0x10ea50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x10ea54: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x10EA54u;
    {
        const bool branch_taken_0x10ea54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10EA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EA54u;
        // 0x10ea58: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ea54) {
            ctx->pc = 0x10EA28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10ea28;
        }
    }
    ctx->pc = 0x10EA5Cu;
    // 0x10ea5c: 0x2751021  addu        $v0, $s3, $s5
    ctx->pc = 0x10ea5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 21)));
    // 0x10ea60: 0xa0540025  sb          $s4, 0x25($v0)
    ctx->pc = 0x10ea60u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 37), (uint8_t)GPR_U32(ctx, 20));
    // 0x10ea64: 0x8e630020  lw          $v1, 0x20($s3)
    ctx->pc = 0x10ea64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x10ea68: 0x16a30008  bne         $s5, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x10EA68u;
    {
        const bool branch_taken_0x10ea68 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 3));
        ctx->pc = 0x10EA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EA68u;
        // 0x10ea6c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ea68) {
            ctx->pc = 0x10EA8Cu;
            goto label_10ea8c;
        }
    }
    ctx->pc = 0x10EA70u;
    // 0x10ea70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10ea70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10ea74: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x10ea74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x10ea78: 0xa2620024  sb          $v0, 0x24($s3)
    ctx->pc = 0x10ea78u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 36), (uint8_t)GPR_U32(ctx, 2));
    // 0x10ea7c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10ea7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10ea80: 0xc106802  jal         func_41A008
    ctx->pc = 0x10EA80u;
    SET_GPR_U32(ctx, 31, 0x10EA88u);
    ctx->pc = 0x10EA84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EA80u;
    // 0x10ea84: 0x8c64489c  lw          $a0, 0x489C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41A008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41A008u, 0x10EA80u, 0x10EA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EA88u;
label_10ea88:
    // 0x10ea88: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x10ea88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_10ea8c:
    // 0x10ea8c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x10ea8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10ea90: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x10ea90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10ea94: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x10ea94u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10ea98: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x10ea98u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10ea9c: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x10ea9cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10eaa0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10eaa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10eaa4: 0x3e00008  jr          $ra
    ctx->pc = 0x10EAA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10EAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EAA4u;
        // 0x10eaa8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10EAA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10EAACu;
    // 0x10eaac: 0x0  nop
    ctx->pc = 0x10eaacu;
    // NOP
    ctx->pc = 0x10eab0u;
}
