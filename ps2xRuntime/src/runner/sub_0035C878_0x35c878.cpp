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

// Function: sub_0035C878
// Address: 0x35c878 - 0x35c8f0
void sub_0035C878_0x35c878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035C878_0x35c878");
#endif

    switch (ctx->pc) {
        case 0x35c89cu: goto label_35c89c;
        case 0x35c8b0u: goto label_35c8b0;
        case 0x35c8c4u: goto label_35c8c4;
        case 0x35c8d4u: goto label_35c8d4;
        default: break;
    }

    ctx->pc = 0x35c878u;

    // 0x35c878: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x35c878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x35c87c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35c87cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35c880: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x35c880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x35c884: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35c884u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c888: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x35c888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x35c88c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x35c88cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x35c890: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35c890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35c894: 0xc102488  jal         func_409220
    ctx->pc = 0x35C894u;
    SET_GPR_U32(ctx, 31, 0x35C89Cu);
    ctx->pc = 0x35C898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C894u;
    // 0x35c898: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x35C894u, 0x35C89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C89Cu;
label_35c89c:
    // 0x35c89c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x35c89cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c8a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35c8a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c8a4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x35c8a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35c8a8: 0xc102488  jal         func_409220
    ctx->pc = 0x35C8A8u;
    SET_GPR_U32(ctx, 31, 0x35C8B0u);
    ctx->pc = 0x35C8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C8A8u;
    // 0x35c8ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x35C8A8u, 0x35C8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C8B0u;
label_35c8b0:
    // 0x35c8b0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x35c8b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c8b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35c8b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c8b8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x35c8b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x35c8bc: 0xc102488  jal         func_409220
    ctx->pc = 0x35C8BCu;
    SET_GPR_U32(ctx, 31, 0x35C8C4u);
    ctx->pc = 0x35C8C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C8BCu;
    // 0x35c8c0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x35C8BCu, 0x35C8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C8C4u;
label_35c8c4:
    // 0x35c8c4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x35c8c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c8c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x35c8c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c8cc: 0xc08d17e  jal         func_2345F8
    ctx->pc = 0x35C8CCu;
    SET_GPR_U32(ctx, 31, 0x35C8D4u);
    ctx->pc = 0x35C8D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C8CCu;
    // 0x35c8d0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2345F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2345F8u, 0x35C8CCu, 0x35C8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C8D4u;
label_35c8d4:
    // 0x35c8d4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x35c8d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35c8d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35c8d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c8dc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x35c8dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35c8e0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x35c8e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35c8e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35c8e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35c8e8: 0x3e00008  jr          $ra
    ctx->pc = 0x35C8E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35C8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C8E8u;
        // 0x35c8ec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35C8E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35C8F0u;
}
