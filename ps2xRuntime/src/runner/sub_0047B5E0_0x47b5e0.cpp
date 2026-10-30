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

// Function: sub_0047B5E0
// Address: 0x47b5e0 - 0x47b660
void sub_0047B5E0_0x47b5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047B5E0_0x47b5e0");
#endif

    switch (ctx->pc) {
        case 0x47b5f0u: goto label_47b5f0;
        case 0x47b614u: goto label_47b614;
        case 0x47b630u: goto label_47b630;
        case 0x47b63cu: goto label_47b63c;
        case 0x47b64cu: goto label_47b64c;
        default: break;
    }

    ctx->pc = 0x47b5e0u;

    // 0x47b5e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x47b5e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x47b5e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x47b5e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x47b5e8: 0xc11851c  jal         func_461470
    ctx->pc = 0x47B5E8u;
    SET_GPR_U32(ctx, 31, 0x47B5F0u);
    ctx->pc = 0x47B5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47B5E8u;
    // 0x47b5ec: 0x24041003  addiu       $a0, $zero, 0x1003 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4099));
    ctx->in_delay_slot = false;
    ctx->pc = 0x461470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x461470u, 0x47B5E8u, 0x47B5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47B5F0u;
label_47b5f0:
    // 0x47b5f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x47b5f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47b5f4: 0x8f838a88  lw          $v1, -0x7578($gp)
    ctx->pc = 0x47b5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937224)));
    // 0x47b5f8: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x47b5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x47b5fc: 0x2442ad18  addiu       $v0, $v0, -0x52E8
    ctx->pc = 0x47b5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
    // 0x47b600: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x47b600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x47b604: 0x1480000f  bnez        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x47B604u;
    {
        const bool branch_taken_0x47b604 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x47B608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47B604u;
        // 0x47b608: 0xac640058  sw          $a0, 0x58($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47b604) {
            ctx->pc = 0x47B644u;
            goto label_47b644;
        }
    }
    ctx->pc = 0x47B60Cu;
    // 0x47b60c: 0xc11cf9c  jal         func_473E70
    ctx->pc = 0x47B60Cu;
    SET_GPR_U32(ctx, 31, 0x47B614u);
    ctx->pc = 0x47B610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47B60Cu;
    // 0x47b610: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x473E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x473E70u, 0x47B60Cu, 0x47B614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47B614u;
label_47b614:
    // 0x47b614: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x47b614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x47b618: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x47b618u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x47b61c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x47b61cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x47b620: 0x24a5eee8  addiu       $a1, $a1, -0x1118
    ctx->pc = 0x47b620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962920));
    // 0x47b624: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x47b624u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x47b628: 0xc11eff2  jal         func_47BFC8
    ctx->pc = 0x47B628u;
    SET_GPR_U32(ctx, 31, 0x47B630u);
    ctx->pc = 0x47B62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47B628u;
    // 0x47b62c: 0x34840006  ori         $a0, $a0, 0x6 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)6);
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x47B628u, 0x47B630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47B630u;
label_47b630:
    // 0x47b630: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x47b630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47b634: 0xc11f024  jal         func_47C090
    ctx->pc = 0x47B634u;
    SET_GPR_U32(ctx, 31, 0x47B63Cu);
    ctx->pc = 0x47B638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47B634u;
    // 0x47b638: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x47B634u, 0x47B63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47B63Cu;
label_47b63c:
    // 0x47b63c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x47B63Cu;
    {
        const bool branch_taken_0x47b63c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47B640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47B63Cu;
        // 0x47b640: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47b63c) {
            ctx->pc = 0x47B650u;
            goto label_47b650;
        }
    }
    ctx->pc = 0x47B644u;
label_47b644:
    // 0x47b644: 0xc11cf9c  jal         func_473E70
    ctx->pc = 0x47B644u;
    SET_GPR_U32(ctx, 31, 0x47B64Cu);
    ctx->pc = 0x473E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x473E70u, 0x47B644u, 0x47B64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47B64Cu;
label_47b64c:
    // 0x47b64c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x47b64cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_47b650:
    // 0x47b650: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x47b650u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47b654: 0x3e00008  jr          $ra
    ctx->pc = 0x47B654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47B658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47B654u;
        // 0x47b658: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47B654u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47B65Cu;
    // 0x47b65c: 0x0  nop
    ctx->pc = 0x47b65cu;
    // NOP
    ctx->pc = 0x47b660u;
}
