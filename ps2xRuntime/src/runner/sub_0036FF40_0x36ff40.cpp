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

// Function: sub_0036FF40
// Address: 0x36ff40 - 0x36ffb8
void sub_0036FF40_0x36ff40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036FF40_0x36ff40");
#endif

    switch (ctx->pc) {
        case 0x36ff60u: goto label_36ff60;
        case 0x36ff70u: goto label_36ff70;
        case 0x36ff84u: goto label_36ff84;
        case 0x36ff8cu: goto label_36ff8c;
        case 0x36ff94u: goto label_36ff94;
        case 0x36ffa4u: goto label_36ffa4;
        default: break;
    }

    ctx->pc = 0x36ff40u;

    // 0x36ff40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36ff40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x36ff44: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36ff44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36ff48: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x36ff48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x36ff4c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x36ff4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36ff50: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36ff50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ff54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36ff54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36ff58: 0xc10311e  jal         func_40C478
    ctx->pc = 0x36FF58u;
    SET_GPR_U32(ctx, 31, 0x36FF60u);
    ctx->pc = 0x36FF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36FF58u;
    // 0x36ff5c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C478u, 0x36FF58u, 0x36FF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FF60u;
label_36ff60:
    // 0x36ff60: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x36FF60u;
    {
        const bool branch_taken_0x36ff60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36FF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FF60u;
        // 0x36ff64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ff60) {
            ctx->pc = 0x36FF9Cu;
            goto label_36ff9c;
        }
    }
    ctx->pc = 0x36FF68u;
    // 0x36ff68: 0xc10314e  jal         func_40C538
    ctx->pc = 0x36FF68u;
    SET_GPR_U32(ctx, 31, 0x36FF70u);
    ctx->pc = 0x36FF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36FF68u;
    // 0x36ff6c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C538u, 0x36FF68u, 0x36FF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FF70u;
label_36ff70:
    // 0x36ff70: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x36FF70u;
    {
        const bool branch_taken_0x36ff70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36FF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FF70u;
        // 0x36ff74: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ff70) {
            ctx->pc = 0x36FF9Cu;
            goto label_36ff9c;
        }
    }
    ctx->pc = 0x36FF78u;
    // 0x36ff78: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36ff78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ff7c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36FF7Cu;
    SET_GPR_U32(ctx, 31, 0x36FF84u);
    ctx->pc = 0x36FF80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36FF7Cu;
    // 0x36ff80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36FF7Cu, 0x36FF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FF84u;
label_36ff84:
    // 0x36ff84: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36FF84u;
    SET_GPR_U32(ctx, 31, 0x36FF8Cu);
    ctx->pc = 0x36FF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36FF84u;
    // 0x36ff88: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36FF84u, 0x36FF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FF8Cu;
label_36ff8c:
    // 0x36ff8c: 0xc06d75e  jal         func_1B5D78
    ctx->pc = 0x36FF8Cu;
    SET_GPR_U32(ctx, 31, 0x36FF94u);
    ctx->pc = 0x36FF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36FF8Cu;
    // 0x36ff90: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5D78u, 0x36FF8Cu, 0x36FF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FF94u;
label_36ff94:
    // 0x36ff94: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x36FF94u;
    {
        const bool branch_taken_0x36ff94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36FF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FF94u;
        // 0x36ff98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ff94) {
            ctx->pc = 0x36FFA4u;
            goto label_36ffa4;
        }
    }
    ctx->pc = 0x36FF9Cu;
label_36ff9c:
    // 0x36ff9c: 0xc0dbfb2  jal         func_36FEC8
    ctx->pc = 0x36FF9Cu;
    SET_GPR_U32(ctx, 31, 0x36FFA4u);
    ctx->pc = 0x36FFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36FF9Cu;
    // 0x36ffa0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36FEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36FEC8u, 0x36FF9Cu, 0x36FFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FFA4u;
label_36ffa4:
    // 0x36ffa4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x36ffa4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36ffa8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36ffa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36ffac: 0x3e00008  jr          $ra
    ctx->pc = 0x36FFACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36FFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FFACu;
        // 0x36ffb0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36FFACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36FFB4u;
    // 0x36ffb4: 0x0  nop
    ctx->pc = 0x36ffb4u;
    // NOP
    ctx->pc = 0x36ffb8u;
}
