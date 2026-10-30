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

// Function: sub_0047B660
// Address: 0x47b660 - 0x47b6e0
void sub_0047B660_0x47b660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047B660_0x47b660");
#endif

    switch (ctx->pc) {
        case 0x47b670u: goto label_47b670;
        case 0x47b694u: goto label_47b694;
        case 0x47b6b0u: goto label_47b6b0;
        case 0x47b6bcu: goto label_47b6bc;
        case 0x47b6ccu: goto label_47b6cc;
        default: break;
    }

    ctx->pc = 0x47b660u;

    // 0x47b660: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x47b660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x47b664: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x47b664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x47b668: 0xc11851c  jal         func_461470
    ctx->pc = 0x47B668u;
    SET_GPR_U32(ctx, 31, 0x47B670u);
    ctx->pc = 0x47B66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47B668u;
    // 0x47b66c: 0x24041002  addiu       $a0, $zero, 0x1002 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4098));
    ctx->in_delay_slot = false;
    ctx->pc = 0x461470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x461470u, 0x47B668u, 0x47B670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47B670u;
label_47b670:
    // 0x47b670: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x47b670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47b674: 0x8f838a88  lw          $v1, -0x7578($gp)
    ctx->pc = 0x47b674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937224)));
    // 0x47b678: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x47b678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x47b67c: 0x2442ad18  addiu       $v0, $v0, -0x52E8
    ctx->pc = 0x47b67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
    // 0x47b680: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x47b680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x47b684: 0x1480000f  bnez        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x47B684u;
    {
        const bool branch_taken_0x47b684 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x47B688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47B684u;
        // 0x47b688: 0xac640054  sw          $a0, 0x54($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47b684) {
            ctx->pc = 0x47B6C4u;
            goto label_47b6c4;
        }
    }
    ctx->pc = 0x47B68Cu;
    // 0x47b68c: 0xc11cfa8  jal         func_473EA0
    ctx->pc = 0x47B68Cu;
    SET_GPR_U32(ctx, 31, 0x47B694u);
    ctx->pc = 0x47B690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47B68Cu;
    // 0x47b690: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x473EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x473EA0u, 0x47B68Cu, 0x47B694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47B694u;
label_47b694:
    // 0x47b694: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x47b694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x47b698: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x47b698u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x47b69c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x47b69cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x47b6a0: 0x24a5ef00  addiu       $a1, $a1, -0x1100
    ctx->pc = 0x47b6a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962944));
    // 0x47b6a4: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x47b6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x47b6a8: 0xc11eff2  jal         func_47BFC8
    ctx->pc = 0x47B6A8u;
    SET_GPR_U32(ctx, 31, 0x47B6B0u);
    ctx->pc = 0x47B6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47B6A8u;
    // 0x47b6ac: 0x34840006  ori         $a0, $a0, 0x6 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)6);
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x47B6A8u, 0x47B6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47B6B0u;
label_47b6b0:
    // 0x47b6b0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x47b6b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47b6b4: 0xc11f024  jal         func_47C090
    ctx->pc = 0x47B6B4u;
    SET_GPR_U32(ctx, 31, 0x47B6BCu);
    ctx->pc = 0x47B6B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47B6B4u;
    // 0x47b6b8: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x47B6B4u, 0x47B6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47B6BCu;
label_47b6bc:
    // 0x47b6bc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x47B6BCu;
    {
        const bool branch_taken_0x47b6bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47B6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47B6BCu;
        // 0x47b6c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47b6bc) {
            ctx->pc = 0x47B6D0u;
            goto label_47b6d0;
        }
    }
    ctx->pc = 0x47B6C4u;
label_47b6c4:
    // 0x47b6c4: 0xc11cfa8  jal         func_473EA0
    ctx->pc = 0x47B6C4u;
    SET_GPR_U32(ctx, 31, 0x47B6CCu);
    ctx->pc = 0x473EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x473EA0u, 0x47B6C4u, 0x47B6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47B6CCu;
label_47b6cc:
    // 0x47b6cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x47b6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_47b6d0:
    // 0x47b6d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x47b6d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47b6d4: 0x3e00008  jr          $ra
    ctx->pc = 0x47B6D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47B6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47B6D4u;
        // 0x47b6d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47B6D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47B6DCu;
    // 0x47b6dc: 0x0  nop
    ctx->pc = 0x47b6dcu;
    // NOP
    ctx->pc = 0x47b6e0u;
}
