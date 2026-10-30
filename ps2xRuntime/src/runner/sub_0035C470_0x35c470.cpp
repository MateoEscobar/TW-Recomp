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

// Function: sub_0035C470
// Address: 0x35c470 - 0x35c4d0
void sub_0035C470_0x35c470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035C470_0x35c470");
#endif

    switch (ctx->pc) {
        case 0x35c490u: goto label_35c490;
        case 0x35c498u: goto label_35c498;
        case 0x35c4acu: goto label_35c4ac;
        case 0x35c4b8u: goto label_35c4b8;
        default: break;
    }

    ctx->pc = 0x35c470u;

    // 0x35c470: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x35c470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x35c474: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35c474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35c478: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x35c478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x35c47c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35c47cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c480: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35c480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x35c484: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35c484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35c488: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35C488u;
    SET_GPR_U32(ctx, 31, 0x35C490u);
    ctx->pc = 0x35C48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C488u;
    // 0x35c48c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35C488u, 0x35C490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C490u;
label_35c490:
    // 0x35c490: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35C490u;
    SET_GPR_U32(ctx, 31, 0x35C498u);
    ctx->pc = 0x35C494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C490u;
    // 0x35c494: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35C490u, 0x35C498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C498u;
label_35c498:
    // 0x35c498: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x35c498u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c49c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35c49cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c4a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35c4a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c4a4: 0xc102488  jal         func_409220
    ctx->pc = 0x35C4A4u;
    SET_GPR_U32(ctx, 31, 0x35C4ACu);
    ctx->pc = 0x35C4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C4A4u;
    // 0x35c4a8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x35C4A4u, 0x35C4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C4ACu;
label_35c4ac:
    // 0x35c4ac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x35c4acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c4b0: 0xc08e08c  jal         func_238230
    ctx->pc = 0x35C4B0u;
    SET_GPR_U32(ctx, 31, 0x35C4B8u);
    ctx->pc = 0x35C4B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C4B0u;
    // 0x35c4b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238230u, 0x35C4B0u, 0x35C4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C4B8u;
label_35c4b8:
    // 0x35c4b8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x35c4b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35c4bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35c4bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c4c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35c4c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35c4c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35c4c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35c4c8: 0x3e00008  jr          $ra
    ctx->pc = 0x35C4C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35C4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C4C8u;
        // 0x35c4cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35C4C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35C4D0u;
}
