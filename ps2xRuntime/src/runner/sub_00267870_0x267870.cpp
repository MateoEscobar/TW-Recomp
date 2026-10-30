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

// Function: sub_00267870
// Address: 0x267870 - 0x2678c8
void sub_00267870_0x267870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00267870_0x267870");
#endif

    switch (ctx->pc) {
        case 0x267870u: goto label_267870;
        case 0x267874u: goto label_267874;
        case 0x267878u: goto label_267878;
        case 0x26787cu: goto label_26787c;
        case 0x267880u: goto label_267880;
        case 0x267884u: goto label_267884;
        case 0x267888u: goto label_267888;
        case 0x26788cu: goto label_26788c;
        case 0x267890u: goto label_267890;
        case 0x267894u: goto label_267894;
        case 0x267898u: goto label_267898;
        case 0x26789cu: goto label_26789c;
        case 0x2678a0u: goto label_2678a0;
        case 0x2678a4u: goto label_2678a4;
        case 0x2678a8u: goto label_2678a8;
        case 0x2678acu: goto label_2678ac;
        case 0x2678b0u: goto label_2678b0;
        case 0x2678b4u: goto label_2678b4;
        case 0x2678b8u: goto label_2678b8;
        case 0x2678bcu: goto label_2678bc;
        case 0x2678c0u: goto label_2678c0;
        case 0x2678c4u: goto label_2678c4;
        default: break;
    }

    ctx->pc = 0x267870u;

label_267870:
    // 0x267870: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x267870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_267874:
    // 0x267874: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x267874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_267878:
    // 0x267878: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x267878u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_26787c:
    // 0x26787c: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
label_267880:
    if (ctx->pc == 0x267880u) {
        ctx->pc = 0x267880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26787Cu;
        // 0x267880: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267884u;
        goto label_267884;
    }
    ctx->pc = 0x26787Cu;
    {
        const bool branch_taken_0x26787c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x267880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26787Cu;
        // 0x267880: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26787c) {
            ctx->pc = 0x2678B8u;
            goto label_2678b8;
        }
    }
    ctx->pc = 0x267884u;
label_267884:
    // 0x267884: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x267884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_267888:
    // 0x267888: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x267888u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_26788c:
    // 0x26788c: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x26788cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_267890:
    // 0x267890: 0x40f809  jalr        $v0
label_267894:
    if (ctx->pc == 0x267894u) {
        ctx->pc = 0x267894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267890u;
        // 0x267894: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267898u;
        goto label_267898;
    }
    ctx->pc = 0x267890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x267898u);
        ctx->pc = 0x267894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267890u;
        // 0x267894: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x267890u, 0x267898u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x267898u;
label_267898:
    // 0x267898: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_26789c:
    if (ctx->pc == 0x26789Cu) {
        ctx->pc = 0x26789Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267898u;
        // 0x26789c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2678A0u;
        goto label_2678a0;
    }
    ctx->pc = 0x267898u;
    {
        const bool branch_taken_0x267898 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x267898) {
            ctx->pc = 0x26789Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x267898u;
            // 0x26789c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2678BCu;
            goto label_2678bc;
        }
    }
    ctx->pc = 0x2678A0u;
label_2678a0:
    // 0x2678a0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2678a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2678a4:
    // 0x2678a4: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x2678a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_2678a8:
    // 0x2678a8: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x2678a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_2678ac:
    // 0x2678ac: 0x40f809  jalr        $v0
label_2678b0:
    if (ctx->pc == 0x2678B0u) {
        ctx->pc = 0x2678B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2678ACu;
        // 0x2678b0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2678B4u;
        goto label_2678b4;
    }
    ctx->pc = 0x2678ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2678B4u);
        ctx->pc = 0x2678B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2678ACu;
        // 0x2678b0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2678ACu, 0x2678B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2678B4u;
label_2678b4:
    // 0x2678b4: 0xa440003c  sh          $zero, 0x3C($v0)
    ctx->pc = 0x2678b4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 60), (uint16_t)GPR_U32(ctx, 0));
label_2678b8:
    // 0x2678b8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2678b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2678bc:
    // 0x2678bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2678bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2678c0:
    // 0x2678c0: 0x3e00008  jr          $ra
label_2678c4:
    if (ctx->pc == 0x2678C4u) {
        ctx->pc = 0x2678C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2678C0u;
        // 0x2678c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2678C8u;
        goto label_fallthrough_0x2678c0;
    }
    ctx->pc = 0x2678C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2678C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2678C0u;
        // 0x2678c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2678C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2678c0:
    ctx->pc = 0x2678C8u;
}
