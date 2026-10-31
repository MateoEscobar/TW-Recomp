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

// Function: sub_001D56A0
// Address: 0x1d56a0 - 0x1d5700
void sub_001D56A0_0x1d56a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D56A0_0x1d56a0");
#endif

    switch (ctx->pc) {
        case 0x1d56a0u: goto label_1d56a0;
        case 0x1d56a4u: goto label_1d56a4;
        case 0x1d56a8u: goto label_1d56a8;
        case 0x1d56acu: goto label_1d56ac;
        case 0x1d56b0u: goto label_1d56b0;
        case 0x1d56b4u: goto label_1d56b4;
        case 0x1d56b8u: goto label_1d56b8;
        case 0x1d56bcu: goto label_1d56bc;
        case 0x1d56c0u: goto label_1d56c0;
        case 0x1d56c4u: goto label_1d56c4;
        case 0x1d56c8u: goto label_1d56c8;
        case 0x1d56ccu: goto label_1d56cc;
        case 0x1d56d0u: goto label_1d56d0;
        case 0x1d56d4u: goto label_1d56d4;
        case 0x1d56d8u: goto label_1d56d8;
        case 0x1d56dcu: goto label_1d56dc;
        case 0x1d56e0u: goto label_1d56e0;
        case 0x1d56e4u: goto label_1d56e4;
        case 0x1d56e8u: goto label_1d56e8;
        case 0x1d56ecu: goto label_1d56ec;
        case 0x1d56f0u: goto label_1d56f0;
        case 0x1d56f4u: goto label_1d56f4;
        case 0x1d56f8u: goto label_1d56f8;
        case 0x1d56fcu: goto label_1d56fc;
        default: break;
    }

    ctx->pc = 0x1d56a0u;

label_1d56a0:
    // 0x1d56a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d56a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1d56a4:
    // 0x1d56a4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d56a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1d56a8:
    // 0x1d56a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d56a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1d56ac:
    // 0x1d56ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d56acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d56b0:
    // 0x1d56b0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d56b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d56b4:
    // 0x1d56b4: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x1d56b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_1d56b8:
    // 0x1d56b8: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x1d56b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_1d56bc:
    // 0x1d56bc: 0x40f809  jalr        $v0
label_1d56c0:
    if (ctx->pc == 0x1D56C0u) {
        ctx->pc = 0x1D56C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D56BCu;
        // 0x1d56c0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D56C4u;
        goto label_1d56c4;
    }
    ctx->pc = 0x1D56BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D56C4u);
        ctx->pc = 0x1D56C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D56BCu;
        // 0x1d56c0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D56BCu, 0x1D56C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D56C4u;
label_1d56c4:
    // 0x1d56c4: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_1d56c8:
    if (ctx->pc == 0x1D56C8u) {
        ctx->pc = 0x1D56C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D56C4u;
        // 0x1d56c8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D56CCu;
        goto label_1d56cc;
    }
    ctx->pc = 0x1D56C4u;
    {
        const bool branch_taken_0x1d56c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d56c4) {
            ctx->pc = 0x1D56C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D56C4u;
            // 0x1d56c8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D56F4u;
            goto label_1d56f4;
        }
    }
    ctx->pc = 0x1D56CCu;
label_1d56cc:
    // 0x1d56cc: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x1d56ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_1d56d0:
    // 0x1d56d0: 0xc0734a0  jal         func_1CD280
label_1d56d4:
    if (ctx->pc == 0x1D56D4u) {
        ctx->pc = 0x1D56D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D56D0u;
        // 0x1d56d4: 0x26100120  addiu       $s0, $s0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D56D8u;
        goto label_1d56d8;
    }
    ctx->pc = 0x1D56D0u;
    SET_GPR_U32(ctx, 31, 0x1D56D8u);
    ctx->pc = 0x1D56D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D56D0u;
    // 0x1d56d4: 0x26100120  addiu       $s0, $s0, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD280u, 0x1D56D0u, 0x1D56D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D56D8u;
label_1d56d8:
    // 0x1d56d8: 0xc073460  jal         func_1CD180
label_1d56dc:
    if (ctx->pc == 0x1D56DCu) {
        ctx->pc = 0x1D56DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D56D8u;
        // 0x1d56dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D56E0u;
        goto label_1d56e0;
    }
    ctx->pc = 0x1D56D8u;
    SET_GPR_U32(ctx, 31, 0x1D56E0u);
    ctx->pc = 0x1D56DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D56D8u;
    // 0x1d56dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD180u, 0x1D56D8u, 0x1D56E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D56E0u;
label_1d56e0:
    // 0x1d56e0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_1d56e4:
    if (ctx->pc == 0x1D56E4u) {
        ctx->pc = 0x1D56E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D56E0u;
        // 0x1d56e4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D56E8u;
        goto label_1d56e8;
    }
    ctx->pc = 0x1D56E0u;
    {
        const bool branch_taken_0x1d56e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d56e0) {
            ctx->pc = 0x1D56E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D56E0u;
            // 0x1d56e4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D56F4u;
            goto label_1d56f4;
        }
    }
    ctx->pc = 0x1D56E8u;
label_1d56e8:
    // 0x1d56e8: 0xc0734a0  jal         func_1CD280
label_1d56ec:
    if (ctx->pc == 0x1D56ECu) {
        ctx->pc = 0x1D56ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D56E8u;
        // 0x1d56ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D56F0u;
        goto label_1d56f0;
    }
    ctx->pc = 0x1D56E8u;
    SET_GPR_U32(ctx, 31, 0x1D56F0u);
    ctx->pc = 0x1D56ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D56E8u;
    // 0x1d56ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD280u, 0x1D56E8u, 0x1D56F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D56F0u;
label_1d56f0:
    // 0x1d56f0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d56f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d56f4:
    // 0x1d56f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d56f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d56f8:
    // 0x1d56f8: 0x3e00008  jr          $ra
label_1d56fc:
    if (ctx->pc == 0x1D56FCu) {
        ctx->pc = 0x1D56FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D56F8u;
        // 0x1d56fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5700u;
        goto label_fallthrough_0x1d56f8;
    }
    ctx->pc = 0x1D56F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D56FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D56F8u;
        // 0x1d56fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D56F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1d56f8:
    ctx->pc = 0x1D5700u;
}
