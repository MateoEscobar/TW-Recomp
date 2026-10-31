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

// Function: sub_0035FA50
// Address: 0x35fa50 - 0x35fac8
void sub_0035FA50_0x35fa50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035FA50_0x35fa50");
#endif

    switch (ctx->pc) {
        case 0x35fa78u: goto label_35fa78;
        case 0x35fa80u: goto label_35fa80;
        case 0x35fa94u: goto label_35fa94;
        case 0x35fa9cu: goto label_35fa9c;
        case 0x35faa8u: goto label_35faa8;
        default: break;
    }

    ctx->pc = 0x35fa50u;

    // 0x35fa50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x35fa50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x35fa54: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35fa54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35fa58: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x35fa58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x35fa5c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x35fa5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x35fa60: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35fa60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35fa64: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x35fa64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35fa68: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x35fa68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x35fa6c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35fa6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35fa70: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35FA70u;
    SET_GPR_U32(ctx, 31, 0x35FA78u);
    ctx->pc = 0x35FA74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FA70u;
    // 0x35fa74: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35FA70u, 0x35FA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FA78u;
label_35fa78:
    // 0x35fa78: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35FA78u;
    SET_GPR_U32(ctx, 31, 0x35FA80u);
    ctx->pc = 0x35FA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FA78u;
    // 0x35fa7c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35FA78u, 0x35FA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FA80u;
label_35fa80:
    // 0x35fa80: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x35fa80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35fa84: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x35fa84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35fa88: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x35fa88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35fa8c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35FA8Cu;
    SET_GPR_U32(ctx, 31, 0x35FA94u);
    ctx->pc = 0x35FA90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FA8Cu;
    // 0x35fa90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35FA8Cu, 0x35FA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FA94u;
label_35fa94:
    // 0x35fa94: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x35FA94u;
    SET_GPR_U32(ctx, 31, 0x35FA9Cu);
    ctx->pc = 0x35FA98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FA94u;
    // 0x35fa98: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x35FA94u, 0x35FA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FA9Cu;
label_35fa9c:
    // 0x35fa9c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x35fa9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35faa0: 0xc0a4a36  jal         func_2928D8
    ctx->pc = 0x35FAA0u;
    SET_GPR_U32(ctx, 31, 0x35FAA8u);
    ctx->pc = 0x35FAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FAA0u;
    // 0x35faa4: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2928D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2928D8u, 0x35FAA0u, 0x35FAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FAA8u;
label_35faa8:
    // 0x35faa8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x35faa8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35faac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35faacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35fab0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x35fab0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35fab4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x35fab4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35fab8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35fab8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35fabc: 0x3e00008  jr          $ra
    ctx->pc = 0x35FABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35FAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FABCu;
        // 0x35fac0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35FABCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35FAC4u;
    // 0x35fac4: 0x0  nop
    ctx->pc = 0x35fac4u;
    // NOP
    ctx->pc = 0x35fac8u;
}
