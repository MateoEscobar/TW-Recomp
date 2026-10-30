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

// Function: sub_0036DC90
// Address: 0x36dc90 - 0x36dd08
void sub_0036DC90_0x36dc90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036DC90_0x36dc90");
#endif

    switch (ctx->pc) {
        case 0x36dcb8u: goto label_36dcb8;
        case 0x36dcc0u: goto label_36dcc0;
        case 0x36dcd4u: goto label_36dcd4;
        case 0x36dcdcu: goto label_36dcdc;
        case 0x36dce8u: goto label_36dce8;
        default: break;
    }

    ctx->pc = 0x36dc90u;

    // 0x36dc90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x36dc90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x36dc94: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36dc94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36dc98: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x36dc98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x36dc9c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x36dc9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x36dca0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36dca0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36dca4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x36dca4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36dca8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x36dca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x36dcac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36dcacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36dcb0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36DCB0u;
    SET_GPR_U32(ctx, 31, 0x36DCB8u);
    ctx->pc = 0x36DCB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36DCB0u;
    // 0x36dcb4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36DCB0u, 0x36DCB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DCB8u;
label_36dcb8:
    // 0x36dcb8: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36DCB8u;
    SET_GPR_U32(ctx, 31, 0x36DCC0u);
    ctx->pc = 0x36DCBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36DCB8u;
    // 0x36dcbc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36DCB8u, 0x36DCC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DCC0u;
label_36dcc0:
    // 0x36dcc0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x36dcc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36dcc4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x36dcc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36dcc8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x36dcc8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36dccc: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36DCCCu;
    SET_GPR_U32(ctx, 31, 0x36DCD4u);
    ctx->pc = 0x36DCD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36DCCCu;
    // 0x36dcd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36DCCCu, 0x36DCD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DCD4u;
label_36dcd4:
    // 0x36dcd4: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x36DCD4u;
    SET_GPR_U32(ctx, 31, 0x36DCDCu);
    ctx->pc = 0x36DCD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36DCD4u;
    // 0x36dcd8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x36DCD4u, 0x36DCDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DCDCu;
label_36dcdc:
    // 0x36dcdc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36dcdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36dce0: 0xc0e58e4  jal         func_396390
    ctx->pc = 0x36DCE0u;
    SET_GPR_U32(ctx, 31, 0x36DCE8u);
    ctx->pc = 0x36DCE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36DCE0u;
    // 0x36dce4: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x396390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x396390u, 0x36DCE0u, 0x36DCE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DCE8u;
label_36dce8:
    // 0x36dce8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x36dce8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36dcec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36dcecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36dcf0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x36dcf0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36dcf4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x36dcf4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36dcf8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36dcf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36dcfc: 0x3e00008  jr          $ra
    ctx->pc = 0x36DCFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36DD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36DCFCu;
        // 0x36dd00: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36DCFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36DD04u;
    // 0x36dd04: 0x0  nop
    ctx->pc = 0x36dd04u;
    // NOP
    ctx->pc = 0x36dd08u;
}
