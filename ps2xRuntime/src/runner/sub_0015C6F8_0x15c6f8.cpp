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

// Function: sub_0015C6F8
// Address: 0x15c6f8 - 0x15c780
void sub_0015C6F8_0x15c6f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015C6F8_0x15c6f8");
#endif

    switch (ctx->pc) {
        case 0x15c710u: goto label_15c710;
        case 0x15c720u: goto label_15c720;
        case 0x15c738u: goto label_15c738;
        case 0x15c750u: goto label_15c750;
        case 0x15c764u: goto label_15c764;
        default: break;
    }

    ctx->pc = 0x15c6f8u;

    // 0x15c6f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x15c6f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15c6fc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x15c6fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x15c700: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x15c700u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c704: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15c704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15c708: 0xc05651a  jal         func_159468
    ctx->pc = 0x15C708u;
    SET_GPR_U32(ctx, 31, 0x15C710u);
    ctx->pc = 0x15C70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C708u;
    // 0x15c70c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x159468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159468u, 0x15C708u, 0x15C710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C710u;
label_15c710:
    // 0x15c710: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15c710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x15c714: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15c714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15c718: 0xc0517d8  jal         func_145F60
    ctx->pc = 0x15C718u;
    SET_GPR_U32(ctx, 31, 0x15C720u);
    ctx->pc = 0x15C71Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C718u;
    // 0x15c71c: 0x8c44b734  lw          $a0, -0x48CC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145F60u, 0x15C718u, 0x15C720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C720u;
label_15c720:
    // 0x15c720: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x15c720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x15c724: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x15C724u;
    {
        const bool branch_taken_0x15c724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C724u;
        // 0x15c728: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c724) {
            ctx->pc = 0x15C764u;
            goto label_15c764;
        }
    }
    ctx->pc = 0x15C72Cu;
    // 0x15c72c: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x15c72cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    // 0x15c730: 0xc107c38  jal         func_41F0E0
    ctx->pc = 0x15C730u;
    SET_GPR_U32(ctx, 31, 0x15C738u);
    ctx->pc = 0x15C734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C730u;
    // 0x15c734: 0x248414d4  addiu       $a0, $a0, 0x14D4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5332));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41F0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41F0E0u, 0x15C730u, 0x15C738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C738u;
label_15c738:
    // 0x15c738: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x15c738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x15c73c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x15c73cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15c740: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x15C740u;
    {
        const bool branch_taken_0x15c740 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x15C744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C740u;
        // 0x15c744: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c740) {
            ctx->pc = 0x15C768u;
            goto label_15c768;
        }
    }
    ctx->pc = 0x15C748u;
    // 0x15c748: 0xc0571a0  jal         func_15C680
    ctx->pc = 0x15C748u;
    SET_GPR_U32(ctx, 31, 0x15C750u);
    ctx->pc = 0x15C74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C748u;
    // 0x15c74c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C680u, 0x15C748u, 0x15C750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C750u;
label_15c750:
    // 0x15c750: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15c750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15c754: 0x50430006  beql        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x15C754u;
    {
        const bool branch_taken_0x15c754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x15c754) {
            ctx->pc = 0x15C758u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15C754u;
            // 0x15c758: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15C770u;
            goto label_15c770;
        }
    }
    ctx->pc = 0x15C75Cu;
    // 0x15c75c: 0xc05712c  jal         func_15C4B0
    ctx->pc = 0x15C75Cu;
    SET_GPR_U32(ctx, 31, 0x15C764u);
    ctx->pc = 0x15C760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C75Cu;
    // 0x15c760: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C4B0u, 0x15C75Cu, 0x15C764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C764u;
label_15c764:
    // 0x15c764: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15c764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15c768:
    // 0x15c768: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x15c768u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x15c76c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x15c76cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_15c770:
    // 0x15c770: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15c770u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15c774: 0x3e00008  jr          $ra
    ctx->pc = 0x15C774u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15C778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C774u;
        // 0x15c778: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C774u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15C77Cu;
    // 0x15c77c: 0x0  nop
    ctx->pc = 0x15c77cu;
    // NOP
    ctx->pc = 0x15c780u;
}
