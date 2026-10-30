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

// Function: sub_001CA180
// Address: 0x1ca180 - 0x1ca210
void sub_001CA180_0x1ca180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CA180_0x1ca180");
#endif

    switch (ctx->pc) {
        case 0x1ca1acu: goto label_1ca1ac;
        case 0x1ca1b4u: goto label_1ca1b4;
        case 0x1ca1bcu: goto label_1ca1bc;
        case 0x1ca1c4u: goto label_1ca1c4;
        case 0x1ca1ccu: goto label_1ca1cc;
        case 0x1ca1d4u: goto label_1ca1d4;
        case 0x1ca1dcu: goto label_1ca1dc;
        case 0x1ca1e4u: goto label_1ca1e4;
        case 0x1ca1ecu: goto label_1ca1ec;
        case 0x1ca1f4u: goto label_1ca1f4;
        case 0x1ca1fcu: goto label_1ca1fc;
        default: break;
    }

    ctx->pc = 0x1ca180u;

    // 0x1ca180: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ca180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ca184: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1ca184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1ca188: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ca188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ca18c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ca18cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca190: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1ca190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1ca194: 0x5040001a  beql        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x1CA194u;
    {
        const bool branch_taken_0x1ca194 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca194) {
            ctx->pc = 0x1CA198u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CA194u;
            // 0x1ca198: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CA200u;
            goto label_1ca200;
        }
    }
    ctx->pc = 0x1CA19Cu;
    // 0x1ca19c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1ca19cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1ca1a0: 0x260409f0  addiu       $a0, $s0, 0x9F0
    ctx->pc = 0x1ca1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2544));
    // 0x1ca1a4: 0xc0687c4  jal         func_1A1F10
    ctx->pc = 0x1CA1A4u;
    SET_GPR_U32(ctx, 31, 0x1CA1ACu);
    ctx->pc = 0x1CA1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA1A4u;
    // 0x1ca1a8: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1F10u, 0x1CA1A4u, 0x1CA1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA1ACu;
label_1ca1ac:
    // 0x1ca1ac: 0xc0687c4  jal         func_1A1F10
    ctx->pc = 0x1CA1ACu;
    SET_GPR_U32(ctx, 31, 0x1CA1B4u);
    ctx->pc = 0x1CA1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA1ACu;
    // 0x1ca1b0: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1F10u, 0x1CA1ACu, 0x1CA1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA1B4u;
label_1ca1b4:
    // 0x1ca1b4: 0xc0687c4  jal         func_1A1F10
    ctx->pc = 0x1CA1B4u;
    SET_GPR_U32(ctx, 31, 0x1CA1BCu);
    ctx->pc = 0x1CA1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA1B4u;
    // 0x1ca1b8: 0x26040150  addiu       $a0, $s0, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1F10u, 0x1CA1B4u, 0x1CA1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA1BCu;
label_1ca1bc:
    // 0x1ca1bc: 0xc0687c4  jal         func_1A1F10
    ctx->pc = 0x1CA1BCu;
    SET_GPR_U32(ctx, 31, 0x1CA1C4u);
    ctx->pc = 0x1CA1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA1BCu;
    // 0x1ca1c0: 0x26040250  addiu       $a0, $s0, 0x250 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1F10u, 0x1CA1BCu, 0x1CA1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA1C4u;
label_1ca1c4:
    // 0x1ca1c4: 0xc0687c4  jal         func_1A1F10
    ctx->pc = 0x1CA1C4u;
    SET_GPR_U32(ctx, 31, 0x1CA1CCu);
    ctx->pc = 0x1CA1C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA1C4u;
    // 0x1ca1c8: 0x26040350  addiu       $a0, $s0, 0x350 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1F10u, 0x1CA1C4u, 0x1CA1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA1CCu;
label_1ca1cc:
    // 0x1ca1cc: 0xc0687c4  jal         func_1A1F10
    ctx->pc = 0x1CA1CCu;
    SET_GPR_U32(ctx, 31, 0x1CA1D4u);
    ctx->pc = 0x1CA1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA1CCu;
    // 0x1ca1d0: 0x26040450  addiu       $a0, $s0, 0x450 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1F10u, 0x1CA1CCu, 0x1CA1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA1D4u;
label_1ca1d4:
    // 0x1ca1d4: 0xc0687c4  jal         func_1A1F10
    ctx->pc = 0x1CA1D4u;
    SET_GPR_U32(ctx, 31, 0x1CA1DCu);
    ctx->pc = 0x1CA1D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA1D4u;
    // 0x1ca1d8: 0x26040550  addiu       $a0, $s0, 0x550 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1F10u, 0x1CA1D4u, 0x1CA1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA1DCu;
label_1ca1dc:
    // 0x1ca1dc: 0xc0687c4  jal         func_1A1F10
    ctx->pc = 0x1CA1DCu;
    SET_GPR_U32(ctx, 31, 0x1CA1E4u);
    ctx->pc = 0x1CA1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA1DCu;
    // 0x1ca1e0: 0x26040650  addiu       $a0, $s0, 0x650 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1F10u, 0x1CA1DCu, 0x1CA1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA1E4u;
label_1ca1e4:
    // 0x1ca1e4: 0xc0687c4  jal         func_1A1F10
    ctx->pc = 0x1CA1E4u;
    SET_GPR_U32(ctx, 31, 0x1CA1ECu);
    ctx->pc = 0x1CA1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA1E4u;
    // 0x1ca1e8: 0x26040750  addiu       $a0, $s0, 0x750 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1872));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1F10u, 0x1CA1E4u, 0x1CA1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA1ECu;
label_1ca1ec:
    // 0x1ca1ec: 0xc073462  jal         func_1CD188
    ctx->pc = 0x1CA1ECu;
    SET_GPR_U32(ctx, 31, 0x1CA1F4u);
    ctx->pc = 0x1CA1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA1ECu;
    // 0x1ca1f0: 0x26040850  addiu       $a0, $s0, 0x850 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD188u, 0x1CA1ECu, 0x1CA1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA1F4u;
label_1ca1f4:
    // 0x1ca1f4: 0xc073462  jal         func_1CD188
    ctx->pc = 0x1CA1F4u;
    SET_GPR_U32(ctx, 31, 0x1CA1FCu);
    ctx->pc = 0x1CA1F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA1F4u;
    // 0x1ca1f8: 0x26040920  addiu       $a0, $s0, 0x920 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD188u, 0x1CA1F4u, 0x1CA1FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA1FCu;
label_1ca1fc:
    // 0x1ca1fc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1ca1fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ca200:
    // 0x1ca200: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ca200u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ca204: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA204u;
        // 0x1ca208: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA204u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CA20Cu;
    // 0x1ca20c: 0x0  nop
    ctx->pc = 0x1ca20cu;
    // NOP
    ctx->pc = 0x1ca210u;
}
