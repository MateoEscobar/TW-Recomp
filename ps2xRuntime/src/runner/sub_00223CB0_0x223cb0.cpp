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

// Function: sub_00223CB0
// Address: 0x223cb0 - 0x223d38
void sub_00223CB0_0x223cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00223CB0_0x223cb0");
#endif

    switch (ctx->pc) {
        case 0x223cd8u: goto label_223cd8;
        case 0x223ce8u: goto label_223ce8;
        case 0x223cf8u: goto label_223cf8;
        case 0x223d08u: goto label_223d08;
        case 0x223d24u: goto label_223d24;
        default: break;
    }

    ctx->pc = 0x223cb0u;

    // 0x223cb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x223cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x223cb4: 0x3405f373  ori         $a1, $zero, 0xF373
    ctx->pc = 0x223cb4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)62323);
    // 0x223cb8: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x223cb8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x223cbc: 0x34a5c3c1  ori         $a1, $a1, 0xC3C1
    ctx->pc = 0x223cbcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)50113);
    // 0x223cc0: 0x52af8  dsll        $a1, $a1, 11
    ctx->pc = 0x223cc0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 11);
    // 0x223cc4: 0x34a50730  ori         $a1, $a1, 0x730
    ctx->pc = 0x223cc4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1840);
    // 0x223cc8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x223cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x223ccc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x223cccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x223cd0: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x223CD0u;
    SET_GPR_U32(ctx, 31, 0x223CD8u);
    ctx->pc = 0x223CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223CD0u;
    // 0x223cd4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x223CD0u, 0x223CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223CD8u;
label_223cd8:
    // 0x223cd8: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x223CD8u;
    {
        const bool branch_taken_0x223cd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x223CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223CD8u;
        // 0x223cdc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223cd8) {
            ctx->pc = 0x223D24u;
            goto label_223d24;
        }
    }
    ctx->pc = 0x223CE0u;
    // 0x223ce0: 0xc089fe4  jal         func_227F90
    ctx->pc = 0x223CE0u;
    SET_GPR_U32(ctx, 31, 0x223CE8u);
    ctx->pc = 0x223CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223CE0u;
    // 0x223ce4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227F90u, 0x223CE0u, 0x223CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223CE8u;
label_223ce8:
    // 0x223ce8: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x223CE8u;
    {
        const bool branch_taken_0x223ce8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x223CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223CE8u;
        // 0x223cec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223ce8) {
            ctx->pc = 0x223D24u;
            goto label_223d24;
        }
    }
    ctx->pc = 0x223CF0u;
    // 0x223cf0: 0xc089fac  jal         func_227EB0
    ctx->pc = 0x223CF0u;
    SET_GPR_U32(ctx, 31, 0x223CF8u);
    ctx->pc = 0x223CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223CF0u;
    // 0x223cf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227EB0u, 0x223CF0u, 0x223CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223CF8u;
label_223cf8:
    // 0x223cf8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x223CF8u;
    {
        const bool branch_taken_0x223cf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x223CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223CF8u;
        // 0x223cfc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223cf8) {
            ctx->pc = 0x223D24u;
            goto label_223d24;
        }
    }
    ctx->pc = 0x223D00u;
    // 0x223d00: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x223D00u;
    SET_GPR_U32(ctx, 31, 0x223D08u);
    ctx->pc = 0x223D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223D00u;
    // 0x223d04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x223D00u, 0x223D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223D08u;
label_223d08:
    // 0x223d08: 0x9043001e  lbu         $v1, 0x1E($v0)
    ctx->pc = 0x223d08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 30)));
    // 0x223d0c: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x223D0Cu;
    {
        const bool branch_taken_0x223d0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x223D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223D0Cu;
        // 0x223d10: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223d0c) {
            ctx->pc = 0x223D24u;
            goto label_223d24;
        }
    }
    ctx->pc = 0x223D14u;
    // 0x223d14: 0x3c05aeeb  lui         $a1, 0xAEEB
    ctx->pc = 0x223d14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44779 << 16));
    // 0x223d18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x223d18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223d1c: 0xc089998  jal         func_226660
    ctx->pc = 0x223D1Cu;
    SET_GPR_U32(ctx, 31, 0x223D24u);
    ctx->pc = 0x223D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223D1Cu;
    // 0x223d20: 0x34a5f7ff  ori         $a1, $a1, 0xF7FF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)63487);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x223D1Cu, 0x223D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223D24u;
label_223d24:
    // 0x223d24: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x223d24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x223d28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x223d28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x223d2c: 0x3e00008  jr          $ra
    ctx->pc = 0x223D2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x223D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223D2Cu;
        // 0x223d30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x223D2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x223D34u;
    // 0x223d34: 0x0  nop
    ctx->pc = 0x223d34u;
    // NOP
    ctx->pc = 0x223d38u;
}
