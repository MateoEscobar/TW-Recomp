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

// Function: sub_00359380
// Address: 0x359380 - 0x3593e0
void sub_00359380_0x359380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00359380_0x359380");
#endif

    switch (ctx->pc) {
        case 0x3593a0u: goto label_3593a0;
        case 0x3593a8u: goto label_3593a8;
        case 0x3593bcu: goto label_3593bc;
        case 0x3593c8u: goto label_3593c8;
        default: break;
    }

    ctx->pc = 0x359380u;

    // 0x359380: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x359380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x359384: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x359384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x359388: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x359388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x35938c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35938cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359390: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x359390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x359394: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x359394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x359398: 0xc102472  jal         func_4091C8
    ctx->pc = 0x359398u;
    SET_GPR_U32(ctx, 31, 0x3593A0u);
    ctx->pc = 0x35939Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359398u;
    // 0x35939c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x359398u, 0x3593A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3593A0u;
label_3593a0:
    // 0x3593a0: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3593A0u;
    SET_GPR_U32(ctx, 31, 0x3593A8u);
    ctx->pc = 0x3593A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3593A0u;
    // 0x3593a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3593A0u, 0x3593A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3593A8u;
label_3593a8:
    // 0x3593a8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3593a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3593ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3593acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3593b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3593b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3593b4: 0xc1024c6  jal         func_409318
    ctx->pc = 0x3593B4u;
    SET_GPR_U32(ctx, 31, 0x3593BCu);
    ctx->pc = 0x3593B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3593B4u;
    // 0x3593b8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x3593B4u, 0x3593BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3593BCu;
label_3593bc:
    // 0x3593bc: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x3593bcu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3593c0: 0xc08d480  jal         func_235200
    ctx->pc = 0x3593C0u;
    SET_GPR_U32(ctx, 31, 0x3593C8u);
    ctx->pc = 0x3593C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3593C0u;
    // 0x3593c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235200u, 0x3593C0u, 0x3593C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3593C8u;
label_3593c8:
    // 0x3593c8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3593c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3593cc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3593ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3593d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3593d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3593d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3593d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3593d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3593D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3593DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3593D8u;
        // 0x3593dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3593D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3593E0u;
}
