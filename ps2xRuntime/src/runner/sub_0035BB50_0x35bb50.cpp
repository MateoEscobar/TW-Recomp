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

// Function: sub_0035BB50
// Address: 0x35bb50 - 0x35bbc8
void sub_0035BB50_0x35bb50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035BB50_0x35bb50");
#endif

    switch (ctx->pc) {
        case 0x35bb78u: goto label_35bb78;
        case 0x35bb80u: goto label_35bb80;
        case 0x35bb94u: goto label_35bb94;
        case 0x35bb9cu: goto label_35bb9c;
        case 0x35bba8u: goto label_35bba8;
        default: break;
    }

    ctx->pc = 0x35bb50u;

    // 0x35bb50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x35bb50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x35bb54: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35bb54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35bb58: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x35bb58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x35bb5c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x35bb5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x35bb60: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35bb60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35bb64: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x35bb64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35bb68: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x35bb68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x35bb6c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35bb6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35bb70: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35BB70u;
    SET_GPR_U32(ctx, 31, 0x35BB78u);
    ctx->pc = 0x35BB74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35BB70u;
    // 0x35bb74: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35BB70u, 0x35BB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BB78u;
label_35bb78:
    // 0x35bb78: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35BB78u;
    SET_GPR_U32(ctx, 31, 0x35BB80u);
    ctx->pc = 0x35BB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35BB78u;
    // 0x35bb7c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35BB78u, 0x35BB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BB80u;
label_35bb80:
    // 0x35bb80: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x35bb80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35bb84: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x35bb84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35bb88: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x35bb88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35bb8c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35BB8Cu;
    SET_GPR_U32(ctx, 31, 0x35BB94u);
    ctx->pc = 0x35BB90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35BB8Cu;
    // 0x35bb90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35BB8Cu, 0x35BB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BB94u;
label_35bb94:
    // 0x35bb94: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x35BB94u;
    SET_GPR_U32(ctx, 31, 0x35BB9Cu);
    ctx->pc = 0x35BB98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35BB94u;
    // 0x35bb98: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x35BB94u, 0x35BB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BB9Cu;
label_35bb9c:
    // 0x35bb9c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x35bb9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35bba0: 0xc08de2a  jal         func_2378A8
    ctx->pc = 0x35BBA0u;
    SET_GPR_U32(ctx, 31, 0x35BBA8u);
    ctx->pc = 0x35BBA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35BBA0u;
    // 0x35bba4: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2378A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2378A8u, 0x35BBA0u, 0x35BBA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BBA8u;
label_35bba8:
    // 0x35bba8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x35bba8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35bbac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35bbacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35bbb0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x35bbb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35bbb4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x35bbb4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35bbb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35bbb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35bbbc: 0x3e00008  jr          $ra
    ctx->pc = 0x35BBBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35BBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BBBCu;
        // 0x35bbc0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35BBBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35BBC4u;
    // 0x35bbc4: 0x0  nop
    ctx->pc = 0x35bbc4u;
    // NOP
    ctx->pc = 0x35bbc8u;
}
