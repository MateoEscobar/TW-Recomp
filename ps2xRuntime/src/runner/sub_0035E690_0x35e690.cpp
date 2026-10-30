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

// Function: sub_0035E690
// Address: 0x35e690 - 0x35e6f0
void sub_0035E690_0x35e690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035E690_0x35e690");
#endif

    switch (ctx->pc) {
        case 0x35e6b0u: goto label_35e6b0;
        case 0x35e6b8u: goto label_35e6b8;
        case 0x35e6ccu: goto label_35e6cc;
        case 0x35e6d8u: goto label_35e6d8;
        default: break;
    }

    ctx->pc = 0x35e690u;

    // 0x35e690: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x35e690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x35e694: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35e694u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35e698: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x35e698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x35e69c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35e69cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e6a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35e6a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x35e6a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35e6a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35e6a8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35E6A8u;
    SET_GPR_U32(ctx, 31, 0x35E6B0u);
    ctx->pc = 0x35E6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E6A8u;
    // 0x35e6ac: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35E6A8u, 0x35E6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E6B0u;
label_35e6b0:
    // 0x35e6b0: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x35E6B0u;
    SET_GPR_U32(ctx, 31, 0x35E6B8u);
    ctx->pc = 0x35E6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E6B0u;
    // 0x35e6b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x35E6B0u, 0x35E6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E6B8u;
label_35e6b8:
    // 0x35e6b8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x35e6b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e6bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35e6bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e6c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35e6c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e6c4: 0xc102488  jal         func_409220
    ctx->pc = 0x35E6C4u;
    SET_GPR_U32(ctx, 31, 0x35E6CCu);
    ctx->pc = 0x35E6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E6C4u;
    // 0x35e6c8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x35E6C4u, 0x35E6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E6CCu;
label_35e6cc:
    // 0x35e6cc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x35e6ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e6d0: 0xc107672  jal         func_41D9C8
    ctx->pc = 0x35E6D0u;
    SET_GPR_U32(ctx, 31, 0x35E6D8u);
    ctx->pc = 0x35E6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E6D0u;
    // 0x35e6d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D9C8u, 0x35E6D0u, 0x35E6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E6D8u;
label_35e6d8:
    // 0x35e6d8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x35e6d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35e6dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35e6dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e6e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35e6e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35e6e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35e6e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35e6e8: 0x3e00008  jr          $ra
    ctx->pc = 0x35E6E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35E6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E6E8u;
        // 0x35e6ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35E6E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35E6F0u;
}
