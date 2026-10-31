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

// Function: sub_0036E178
// Address: 0x36e178 - 0x36e1f0
void sub_0036E178_0x36e178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036E178_0x36e178");
#endif

    switch (ctx->pc) {
        case 0x36e1a0u: goto label_36e1a0;
        case 0x36e1a8u: goto label_36e1a8;
        case 0x36e1bcu: goto label_36e1bc;
        case 0x36e1c4u: goto label_36e1c4;
        case 0x36e1d0u: goto label_36e1d0;
        default: break;
    }

    ctx->pc = 0x36e178u;

    // 0x36e178: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x36e178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x36e17c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36e17cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36e180: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x36e180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x36e184: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x36e184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x36e188: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36e188u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e18c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x36e18cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e190: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x36e190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x36e194: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36e194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36e198: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36E198u;
    SET_GPR_U32(ctx, 31, 0x36E1A0u);
    ctx->pc = 0x36E19Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E198u;
    // 0x36e19c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36E198u, 0x36E1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E1A0u;
label_36e1a0:
    // 0x36e1a0: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36E1A0u;
    SET_GPR_U32(ctx, 31, 0x36E1A8u);
    ctx->pc = 0x36E1A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E1A0u;
    // 0x36e1a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36E1A0u, 0x36E1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E1A8u;
label_36e1a8:
    // 0x36e1a8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x36e1a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e1ac: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x36e1acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36e1b0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x36e1b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e1b4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36E1B4u;
    SET_GPR_U32(ctx, 31, 0x36E1BCu);
    ctx->pc = 0x36E1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E1B4u;
    // 0x36e1b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36E1B4u, 0x36E1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E1BCu;
label_36e1bc:
    // 0x36e1bc: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x36E1BCu;
    SET_GPR_U32(ctx, 31, 0x36E1C4u);
    ctx->pc = 0x36E1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E1BCu;
    // 0x36e1c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x36E1BCu, 0x36E1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E1C4u;
label_36e1c4:
    // 0x36e1c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36e1c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e1c8: 0xc104df6  jal         func_4137D8
    ctx->pc = 0x36E1C8u;
    SET_GPR_U32(ctx, 31, 0x36E1D0u);
    ctx->pc = 0x36E1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E1C8u;
    // 0x36e1cc: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4137D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4137D8u, 0x36E1C8u, 0x36E1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E1D0u;
label_36e1d0:
    // 0x36e1d0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x36e1d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36e1d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36e1d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e1d8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x36e1d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36e1dc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x36e1dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36e1e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36e1e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36e1e4: 0x3e00008  jr          $ra
    ctx->pc = 0x36E1E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36E1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E1E4u;
        // 0x36e1e8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E1E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36E1ECu;
    // 0x36e1ec: 0x0  nop
    ctx->pc = 0x36e1ecu;
    // NOP
    ctx->pc = 0x36e1f0u;
}
