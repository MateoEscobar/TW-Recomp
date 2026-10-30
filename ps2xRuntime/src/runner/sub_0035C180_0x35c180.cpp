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

// Function: sub_0035C180
// Address: 0x35c180 - 0x35c200
void sub_0035C180_0x35c180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035C180_0x35c180");
#endif

    switch (ctx->pc) {
        case 0x35c1a8u: goto label_35c1a8;
        case 0x35c1b0u: goto label_35c1b0;
        case 0x35c1c4u: goto label_35c1c4;
        case 0x35c1ccu: goto label_35c1cc;
        case 0x35c1d8u: goto label_35c1d8;
        case 0x35c1e4u: goto label_35c1e4;
        default: break;
    }

    ctx->pc = 0x35c180u;

    // 0x35c180: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x35c180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x35c184: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35c184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35c188: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x35c188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x35c18c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x35c18cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x35c190: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35c190u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c194: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x35c194u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c198: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x35c198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x35c19c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35c19cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35c1a0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35C1A0u;
    SET_GPR_U32(ctx, 31, 0x35C1A8u);
    ctx->pc = 0x35C1A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C1A0u;
    // 0x35c1a4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35C1A0u, 0x35C1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C1A8u;
label_35c1a8:
    // 0x35c1a8: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35C1A8u;
    SET_GPR_U32(ctx, 31, 0x35C1B0u);
    ctx->pc = 0x35C1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C1A8u;
    // 0x35c1ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35C1A8u, 0x35C1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C1B0u;
label_35c1b0:
    // 0x35c1b0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x35c1b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c1b4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x35c1b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c1b8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x35c1b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35c1bc: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35C1BCu;
    SET_GPR_U32(ctx, 31, 0x35C1C4u);
    ctx->pc = 0x35C1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C1BCu;
    // 0x35c1c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35C1BCu, 0x35C1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C1C4u;
label_35c1c4:
    // 0x35c1c4: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35C1C4u;
    SET_GPR_U32(ctx, 31, 0x35C1CCu);
    ctx->pc = 0x35C1C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C1C4u;
    // 0x35c1c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35C1C4u, 0x35C1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C1CCu;
label_35c1cc:
    // 0x35c1cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x35c1ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c1d0: 0xc08e0a2  jal         func_238288
    ctx->pc = 0x35C1D0u;
    SET_GPR_U32(ctx, 31, 0x35C1D8u);
    ctx->pc = 0x35C1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C1D0u;
    // 0x35c1d4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238288u, 0x35C1D0u, 0x35C1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C1D8u;
label_35c1d8:
    // 0x35c1d8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x35c1d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c1dc: 0xc102562  jal         func_409588
    ctx->pc = 0x35C1DCu;
    SET_GPR_U32(ctx, 31, 0x35C1E4u);
    ctx->pc = 0x35C1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C1DCu;
    // 0x35c1e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409588u, 0x35C1DCu, 0x35C1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C1E4u;
label_35c1e4:
    // 0x35c1e4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x35c1e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35c1e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35c1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35c1ec: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x35c1ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35c1f0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x35c1f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35c1f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35c1f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35c1f8: 0x3e00008  jr          $ra
    ctx->pc = 0x35C1F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35C1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C1F8u;
        // 0x35c1fc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35C1F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35C200u;
}
