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

// Function: sub_00482870
// Address: 0x482870 - 0x4828d0
void sub_00482870_0x482870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00482870_0x482870");
#endif

    switch (ctx->pc) {
        case 0x482870u: goto label_482870;
        case 0x482874u: goto label_482874;
        case 0x482878u: goto label_482878;
        case 0x48287cu: goto label_48287c;
        case 0x482880u: goto label_482880;
        case 0x482884u: goto label_482884;
        case 0x482888u: goto label_482888;
        case 0x48288cu: goto label_48288c;
        case 0x482890u: goto label_482890;
        case 0x482894u: goto label_482894;
        case 0x482898u: goto label_482898;
        case 0x48289cu: goto label_48289c;
        case 0x4828a0u: goto label_4828a0;
        case 0x4828a4u: goto label_4828a4;
        case 0x4828a8u: goto label_4828a8;
        case 0x4828acu: goto label_4828ac;
        case 0x4828b0u: goto label_4828b0;
        case 0x4828b4u: goto label_4828b4;
        case 0x4828b8u: goto label_4828b8;
        case 0x4828bcu: goto label_4828bc;
        case 0x4828c0u: goto label_4828c0;
        case 0x4828c4u: goto label_4828c4;
        case 0x4828c8u: goto label_4828c8;
        case 0x4828ccu: goto label_4828cc;
        default: break;
    }

    ctx->pc = 0x482870u;

label_482870:
    // 0x482870: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x482870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_482874:
    // 0x482874: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x482874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_482878:
    // 0x482878: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x482878u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_48287c:
    // 0x48287c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48287cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_482880:
    // 0x482880: 0x3c040053  lui         $a0, 0x53
    ctx->pc = 0x482880u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)83 << 16));
label_482884:
    // 0x482884: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x482884u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_482888:
    // 0x482888: 0xc11ffb4  jal         func_47FED0
label_48288c:
    if (ctx->pc == 0x48288Cu) {
        ctx->pc = 0x48288Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x482888u;
        // 0x48288c: 0x2484ea90  addiu       $a0, $a0, -0x1570 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961808));
        ctx->in_delay_slot = false;
        ctx->pc = 0x482890u;
        goto label_482890;
    }
    ctx->pc = 0x482888u;
    SET_GPR_U32(ctx, 31, 0x482890u);
    ctx->pc = 0x48288Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x482888u;
    // 0x48288c: 0x2484ea90  addiu       $a0, $a0, -0x1570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47FED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47FED0u, 0x482888u, 0x482890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x482890u;
label_482890:
    // 0x482890: 0xc12249a  jal         func_489268
label_482894:
    if (ctx->pc == 0x482894u) {
        ctx->pc = 0x482894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x482890u;
        // 0x482894: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x482898u;
        goto label_482898;
    }
    ctx->pc = 0x482890u;
    SET_GPR_U32(ctx, 31, 0x482898u);
    ctx->pc = 0x482894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x482890u;
    // 0x482894: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x489268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x489268u, 0x482890u, 0x482898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x482898u;
label_482898:
    // 0x482898: 0x8f868958  lw          $a2, -0x76A8($gp)
    ctx->pc = 0x482898u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936920)));
label_48289c:
    // 0x48289c: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x48289cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_4828a0:
    // 0x4828a0: 0x2463ad18  addiu       $v1, $v1, -0x52E8
    ctx->pc = 0x4828a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946072));
label_4828a4:
    // 0x4828a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4828a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4828a8:
    // 0x4828a8: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x4828a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_4828ac:
    // 0x4828ac: 0x8c62011c  lw          $v0, 0x11C($v1)
    ctx->pc = 0x4828acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 284)));
label_4828b0:
    // 0x4828b0: 0x40f809  jalr        $v0
label_4828b4:
    if (ctx->pc == 0x4828B4u) {
        ctx->pc = 0x4828B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4828B0u;
        // 0x4828b4: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4828B8u;
        goto label_4828b8;
    }
    ctx->pc = 0x4828B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4828B8u);
        ctx->pc = 0x4828B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4828B0u;
        // 0x4828b4: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4828B0u, 0x4828B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4828B8u;
label_4828b8:
    // 0x4828b8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4828b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4828bc:
    // 0x4828bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4828bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4828c0:
    // 0x4828c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4828c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4828c4:
    // 0x4828c4: 0x3e00008  jr          $ra
label_4828c8:
    if (ctx->pc == 0x4828C8u) {
        ctx->pc = 0x4828C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4828C4u;
        // 0x4828c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4828CCu;
        goto label_4828cc;
    }
    ctx->pc = 0x4828C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4828C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4828C4u;
        // 0x4828c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4828C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4828CCu;
label_4828cc:
    // 0x4828cc: 0x0  nop
    ctx->pc = 0x4828ccu;
    // NOP
    ctx->pc = 0x4828d0u;
}
