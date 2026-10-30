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

// Function: sub_001D1008
// Address: 0x1d1008 - 0x1d1098
void sub_001D1008_0x1d1008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D1008_0x1d1008");
#endif

    switch (ctx->pc) {
        case 0x1d1034u: goto label_1d1034;
        case 0x1d1048u: goto label_1d1048;
        case 0x1d1068u: goto label_1d1068;
        default: break;
    }

    ctx->pc = 0x1d1008u;

    // 0x1d1008: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1d1008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1d100c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1d100cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1d1010: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1d1010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x1d1014: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1d1014u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1018: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1d1018u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d101c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1d101cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1d1020: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1d1020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1d1024: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d1024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1028: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d1028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d102c: 0xc10c3ac  jal         func_430EB0
    ctx->pc = 0x1D102Cu;
    SET_GPR_U32(ctx, 31, 0x1D1034u);
    ctx->pc = 0x1D1030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D102Cu;
    // 0x1d1030: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430EB0u, 0x1D102Cu, 0x1D1034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1034u;
label_1d1034:
    // 0x1d1034: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1D1034u;
    {
        const bool branch_taken_0x1d1034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1034u;
        // 0x1d1038: 0xae4205f8  sw          $v0, 0x5F8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1528), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1034) {
            ctx->pc = 0x1D1078u;
            goto label_1d1078;
        }
    }
    ctx->pc = 0x1D103Cu;
    // 0x1d103c: 0x26510450  addiu       $s1, $s2, 0x450
    ctx->pc = 0x1d103cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 1104));
    // 0x1d1040: 0x2701021  addu        $v0, $s3, $s0
    ctx->pc = 0x1d1040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x1d1044: 0x0  nop
    ctx->pc = 0x1d1044u;
    // NOP
label_1d1048:
    // 0x1d1048: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d1048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d104c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1d104cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d1050: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1d1050u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1054: 0xa3a00001  sb          $zero, 0x1($sp)
    ctx->pc = 0x1d1054u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d1058: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d1058u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d105c: 0xa3a30000  sb          $v1, 0x0($sp)
    ctx->pc = 0x1d105cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1d1060: 0xc073478  jal         func_1CD1E0
    ctx->pc = 0x1D1060u;
    SET_GPR_U32(ctx, 31, 0x1D1068u);
    ctx->pc = 0x1D1064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1060u;
    // 0x1d1064: 0x263100d0  addiu       $s1, $s1, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1E0u, 0x1D1060u, 0x1D1068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1068u;
label_1d1068:
    // 0x1d1068: 0x8e4205f8  lw          $v0, 0x5F8($s2)
    ctx->pc = 0x1d1068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1528)));
    // 0x1d106c: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1d106cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1d1070: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1D1070u;
    {
        const bool branch_taken_0x1d1070 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1070u;
        // 0x1d1074: 0x2701021  addu        $v0, $s3, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1070) {
            ctx->pc = 0x1D1048u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d1048;
        }
    }
    ctx->pc = 0x1D1078u;
label_1d1078:
    // 0x1d1078: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1d1078u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d107c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1d107cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d1080: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1d1080u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d1084: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1d1084u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d1088: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d1088u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d108c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D108Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D1090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D108Cu;
        // 0x1d1090: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D108Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D1094u;
    // 0x1d1094: 0x0  nop
    ctx->pc = 0x1d1094u;
    // NOP
    ctx->pc = 0x1d1098u;
}
