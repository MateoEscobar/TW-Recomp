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

// Function: sub_0035CA38
// Address: 0x35ca38 - 0x35cab0
void sub_0035CA38_0x35ca38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035CA38_0x35ca38");
#endif

    switch (ctx->pc) {
        case 0x35ca60u: goto label_35ca60;
        case 0x35ca68u: goto label_35ca68;
        case 0x35ca7cu: goto label_35ca7c;
        case 0x35ca84u: goto label_35ca84;
        case 0x35ca90u: goto label_35ca90;
        default: break;
    }

    ctx->pc = 0x35ca38u;

    // 0x35ca38: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x35ca38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x35ca3c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35ca3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35ca40: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x35ca40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x35ca44: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x35ca44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x35ca48: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35ca48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ca4c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x35ca4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ca50: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x35ca50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x35ca54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35ca54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35ca58: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35CA58u;
    SET_GPR_U32(ctx, 31, 0x35CA60u);
    ctx->pc = 0x35CA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35CA58u;
    // 0x35ca5c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35CA58u, 0x35CA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CA60u;
label_35ca60:
    // 0x35ca60: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35CA60u;
    SET_GPR_U32(ctx, 31, 0x35CA68u);
    ctx->pc = 0x35CA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35CA60u;
    // 0x35ca64: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35CA60u, 0x35CA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CA68u;
label_35ca68:
    // 0x35ca68: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x35ca68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ca6c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x35ca6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35ca70: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x35ca70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ca74: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35CA74u;
    SET_GPR_U32(ctx, 31, 0x35CA7Cu);
    ctx->pc = 0x35CA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35CA74u;
    // 0x35ca78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35CA74u, 0x35CA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CA7Cu;
label_35ca7c:
    // 0x35ca7c: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x35CA7Cu;
    SET_GPR_U32(ctx, 31, 0x35CA84u);
    ctx->pc = 0x35CA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35CA7Cu;
    // 0x35ca80: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x35CA7Cu, 0x35CA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CA84u;
label_35ca84:
    // 0x35ca84: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x35ca84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ca88: 0xc08e336  jal         func_238CD8
    ctx->pc = 0x35CA88u;
    SET_GPR_U32(ctx, 31, 0x35CA90u);
    ctx->pc = 0x35CA8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35CA88u;
    // 0x35ca8c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x238CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238CD8u, 0x35CA88u, 0x35CA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CA90u;
label_35ca90:
    // 0x35ca90: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x35ca90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35ca94: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35ca94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ca98: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x35ca98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35ca9c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x35ca9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35caa0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35caa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35caa4: 0x3e00008  jr          $ra
    ctx->pc = 0x35CAA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35CAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35CAA4u;
        // 0x35caa8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35CAA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35CAACu;
    // 0x35caac: 0x0  nop
    ctx->pc = 0x35caacu;
    // NOP
    ctx->pc = 0x35cab0u;
}
