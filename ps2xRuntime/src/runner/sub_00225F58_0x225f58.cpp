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

// Function: sub_00225F58
// Address: 0x225f58 - 0x225fc8
void sub_00225F58_0x225f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225F58_0x225f58");
#endif

    switch (ctx->pc) {
        case 0x225f74u: goto label_225f74;
        case 0x225f98u: goto label_225f98;
        case 0x225fa8u: goto label_225fa8;
        default: break;
    }

    ctx->pc = 0x225f58u;

    // 0x225f58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x225f58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x225f5c: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x225f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x225f60: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x225f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x225f64: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x225f64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x225f68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x225f68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x225f6c: 0xc089998  jal         func_226660
    ctx->pc = 0x225F6Cu;
    SET_GPR_U32(ctx, 31, 0x225F74u);
    ctx->pc = 0x225F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225F6Cu;
    // 0x225f70: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x225F6Cu, 0x225F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225F74u;
label_225f74:
    // 0x225f74: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x225F74u;
    {
        const bool branch_taken_0x225f74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x225F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225F74u;
        // 0x225f78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225f74) {
            ctx->pc = 0x225FB4u;
            goto label_225fb4;
        }
    }
    ctx->pc = 0x225F7Cu;
    // 0x225f7c: 0x3405f7f3  ori         $a1, $zero, 0xF7F3
    ctx->pc = 0x225f7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63475);
    // 0x225f80: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x225f80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x225f84: 0x34a5d3ef  ori         $a1, $a1, 0xD3EF
    ctx->pc = 0x225f84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54255);
    // 0x225f88: 0x52af8  dsll        $a1, $a1, 11
    ctx->pc = 0x225f88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 11);
    // 0x225f8c: 0x34a507f0  ori         $a1, $a1, 0x7F0
    ctx->pc = 0x225f8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2032);
    // 0x225f90: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x225F90u;
    SET_GPR_U32(ctx, 31, 0x225F98u);
    ctx->pc = 0x225F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225F90u;
    // 0x225f94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x225F90u, 0x225F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225F98u;
label_225f98:
    // 0x225f98: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x225F98u;
    {
        const bool branch_taken_0x225f98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x225F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225F98u;
        // 0x225f9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225f98) {
            ctx->pc = 0x225FB4u;
            goto label_225fb4;
        }
    }
    ctx->pc = 0x225FA0u;
    // 0x225fa0: 0xc089bfc  jal         func_226FF0
    ctx->pc = 0x225FA0u;
    SET_GPR_U32(ctx, 31, 0x225FA8u);
    ctx->pc = 0x225FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225FA0u;
    // 0x225fa4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FF0u, 0x225FA0u, 0x225FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225FA8u;
label_225fa8:
    // 0x225fa8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x225FA8u;
    {
        const bool branch_taken_0x225fa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x225FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225FA8u;
        // 0x225fac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225fa8) {
            ctx->pc = 0x225FB4u;
            goto label_225fb4;
        }
    }
    ctx->pc = 0x225FB0u;
    // 0x225fb0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x225fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_225fb4:
    // 0x225fb4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x225fb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x225fb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x225fb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x225fbc: 0x3e00008  jr          $ra
    ctx->pc = 0x225FBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225FBCu;
        // 0x225fc0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225FBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x225FC4u;
    // 0x225fc4: 0x0  nop
    ctx->pc = 0x225fc4u;
    // NOP
    ctx->pc = 0x225fc8u;
}
