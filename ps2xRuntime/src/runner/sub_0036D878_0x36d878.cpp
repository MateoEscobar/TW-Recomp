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

// Function: sub_0036D878
// Address: 0x36d878 - 0x36d908
void sub_0036D878_0x36d878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036D878_0x36d878");
#endif

    switch (ctx->pc) {
        case 0x36d8a0u: goto label_36d8a0;
        case 0x36d8a8u: goto label_36d8a8;
        case 0x36d8bcu: goto label_36d8bc;
        case 0x36d8c4u: goto label_36d8c4;
        case 0x36d8d8u: goto label_36d8d8;
        case 0x36d8e8u: goto label_36d8e8;
        default: break;
    }

    ctx->pc = 0x36d878u;

    // 0x36d878: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x36d878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x36d87c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36d87cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36d880: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x36d880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x36d884: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x36d884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x36d888: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36d888u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d88c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x36d88cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d890: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x36d890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x36d894: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36d894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36d898: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36D898u;
    SET_GPR_U32(ctx, 31, 0x36D8A0u);
    ctx->pc = 0x36D89Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D898u;
    // 0x36d89c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36D898u, 0x36D8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D8A0u;
label_36d8a0:
    // 0x36d8a0: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36D8A0u;
    SET_GPR_U32(ctx, 31, 0x36D8A8u);
    ctx->pc = 0x36D8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D8A0u;
    // 0x36d8a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36D8A0u, 0x36D8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D8A8u;
label_36d8a8:
    // 0x36d8a8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x36d8a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d8ac: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x36d8acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d8b0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x36d8b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36d8b4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36D8B4u;
    SET_GPR_U32(ctx, 31, 0x36D8BCu);
    ctx->pc = 0x36D8B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D8B4u;
    // 0x36d8b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36D8B4u, 0x36D8BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D8BCu;
label_36d8bc:
    // 0x36d8bc: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36D8BCu;
    SET_GPR_U32(ctx, 31, 0x36D8C4u);
    ctx->pc = 0x36D8C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D8BCu;
    // 0x36d8c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36D8BCu, 0x36D8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D8C4u;
label_36d8c4:
    // 0x36d8c4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x36d8c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d8c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36d8c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d8cc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x36d8ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x36d8d0: 0xc102488  jal         func_409220
    ctx->pc = 0x36D8D0u;
    SET_GPR_U32(ctx, 31, 0x36D8D8u);
    ctx->pc = 0x36D8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D8D0u;
    // 0x36d8d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x36D8D0u, 0x36D8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D8D8u;
label_36d8d8:
    // 0x36d8d8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x36d8d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d8dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36d8dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d8e0: 0xc0515a6  jal         func_145698
    ctx->pc = 0x36D8E0u;
    SET_GPR_U32(ctx, 31, 0x36D8E8u);
    ctx->pc = 0x36D8E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D8E0u;
    // 0x36d8e4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145698u, 0x36D8E0u, 0x36D8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D8E8u;
label_36d8e8:
    // 0x36d8e8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x36d8e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36d8ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36d8ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d8f0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x36d8f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36d8f4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x36d8f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36d8f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36d8f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36d8fc: 0x3e00008  jr          $ra
    ctx->pc = 0x36D8FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36D900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D8FCu;
        // 0x36d900: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36D8FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36D904u;
    // 0x36d904: 0x0  nop
    ctx->pc = 0x36d904u;
    // NOP
    ctx->pc = 0x36d908u;
}
