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

// Function: sub_001102A0
// Address: 0x1102a0 - 0x110318
void sub_001102A0_0x1102a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001102A0_0x1102a0");
#endif

    switch (ctx->pc) {
        case 0x1102c0u: goto label_1102c0;
        case 0x1102d0u: goto label_1102d0;
        case 0x1102dcu: goto label_1102dc;
        case 0x1102ecu: goto label_1102ec;
        default: break;
    }

    ctx->pc = 0x1102a0u;

    // 0x1102a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1102a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1102a4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1102a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1102a8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1102a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1102ac: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1102acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1102b0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1102b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1102b4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1102b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1102b8: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x1102B8u;
    SET_GPR_U32(ctx, 31, 0x1102C0u);
    ctx->pc = 0x1102BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1102B8u;
    // 0x1102bc: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x1102B8u, 0x1102C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1102C0u;
label_1102c0:
    // 0x1102c0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1102C0u;
    {
        const bool branch_taken_0x1102c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1102C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1102C0u;
        // 0x1102c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1102c0) {
            ctx->pc = 0x1102F8u;
            goto label_1102f8;
        }
    }
    ctx->pc = 0x1102C8u;
    // 0x1102c8: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x1102C8u;
    SET_GPR_U32(ctx, 31, 0x1102D0u);
    ctx->pc = 0x1102CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1102C8u;
    // 0x1102cc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x1102C8u, 0x1102D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1102D0u;
label_1102d0:
    // 0x1102d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1102d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1102d4: 0xc043cbc  jal         func_10F2F0
    ctx->pc = 0x1102D4u;
    SET_GPR_U32(ctx, 31, 0x1102DCu);
    ctx->pc = 0x1102D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1102D4u;
    // 0x1102d8: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F2F0u, 0x1102D4u, 0x1102DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1102DCu;
label_1102dc:
    // 0x1102dc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1102DCu;
    {
        const bool branch_taken_0x1102dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1102E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1102DCu;
        // 0x1102e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1102dc) {
            ctx->pc = 0x1102F4u;
            goto label_1102f4;
        }
    }
    ctx->pc = 0x1102E4u;
    // 0x1102e4: 0xc044828  jal         func_1120A0
    ctx->pc = 0x1102E4u;
    SET_GPR_U32(ctx, 31, 0x1102ECu);
    ctx->pc = 0x1102E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1102E4u;
    // 0x1102e8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1120A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1120A0u, 0x1102E4u, 0x1102ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1102ECu;
label_1102ec:
    // 0x1102ec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1102ECu;
    {
        const bool branch_taken_0x1102ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1102F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1102ECu;
        // 0x1102f0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1102ec) {
            ctx->pc = 0x1102FCu;
            goto label_1102fc;
        }
    }
    ctx->pc = 0x1102F4u;
label_1102f4:
    // 0x1102f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1102f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1102f8:
    // 0x1102f8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1102f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1102fc:
    // 0x1102fc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1102fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x110300: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x110300u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x110304: 0x3e00008  jr          $ra
    ctx->pc = 0x110304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110304u;
        // 0x110308: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110304u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11030Cu;
    // 0x11030c: 0x0  nop
    ctx->pc = 0x11030cu;
    // NOP
    // 0x110310: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x110310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x110314: 0x0  nop
    ctx->pc = 0x110314u;
    // NOP
    ctx->pc = 0x110318u;
}
