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

// Function: sub_00409438
// Address: 0x409438 - 0x4094e8
void sub_00409438_0x409438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00409438_0x409438");
#endif

    switch (ctx->pc) {
        case 0x409460u: goto label_409460;
        case 0x40946cu: goto label_40946c;
        case 0x409478u: goto label_409478;
        case 0x409484u: goto label_409484;
        case 0x409498u: goto label_409498;
        case 0x4094b0u: goto label_4094b0;
        default: break;
    }

    ctx->pc = 0x409438u;

    // 0x409438: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x409438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x40943c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x40943cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x409440: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x409440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x409444: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x409444u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409448: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x409448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x40944c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x40944cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409450: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x409450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x409454: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x409454u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409458: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x409458u;
    SET_GPR_U32(ctx, 31, 0x409460u);
    ctx->pc = 0x40945Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409458u;
    // 0x40945c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x409458u, 0x409460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409460u;
label_409460:
    // 0x409460: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x409460u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409464: 0xc0c8e38  jal         func_3238E0
    ctx->pc = 0x409464u;
    SET_GPR_U32(ctx, 31, 0x40946Cu);
    ctx->pc = 0x409468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409464u;
    // 0x409468: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3238E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3238E0u, 0x409464u, 0x40946Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40946Cu;
label_40946c:
    // 0x40946c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x40946cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409470: 0xc0c8ed4  jal         func_323B50
    ctx->pc = 0x409470u;
    SET_GPR_U32(ctx, 31, 0x409478u);
    ctx->pc = 0x409474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409470u;
    // 0x409474: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323B50u, 0x409470u, 0x409478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409478u;
label_409478:
    // 0x409478: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x409478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40947c: 0xc0c8d2e  jal         func_3234B8
    ctx->pc = 0x40947Cu;
    SET_GPR_U32(ctx, 31, 0x409484u);
    ctx->pc = 0x409480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40947Cu;
    // 0x409480: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3234B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3234B8u, 0x40947Cu, 0x409484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409484u;
label_409484:
    // 0x409484: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x409484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x409488: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x409488u;
    {
        const bool branch_taken_0x409488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x40948Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409488u;
        // 0x40948c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x409488) {
            ctx->pc = 0x4094A0u;
            goto label_4094a0;
        }
    }
    ctx->pc = 0x409490u;
    // 0x409490: 0xc0c8db8  jal         func_3236E0
    ctx->pc = 0x409490u;
    SET_GPR_U32(ctx, 31, 0x409498u);
    ctx->pc = 0x409494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409490u;
    // 0x409494: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3236E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3236E0u, 0x409490u, 0x409498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409498u;
label_409498:
    // 0x409498: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x409498u;
    {
        const bool branch_taken_0x409498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40949Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409498u;
        // 0x40949c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x409498) {
            ctx->pc = 0x4094A4u;
            goto label_4094a4;
        }
    }
    ctx->pc = 0x4094A0u;
label_4094a0:
    // 0x4094a0: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x4094a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4094a4:
    // 0x4094a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4094a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4094a8: 0xc0c8ccc  jal         func_323330
    ctx->pc = 0x4094A8u;
    SET_GPR_U32(ctx, 31, 0x4094B0u);
    ctx->pc = 0x4094ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4094A8u;
    // 0x4094ac: 0x2405fffe  addiu       $a1, $zero, -0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323330u, 0x4094A8u, 0x4094B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4094B0u;
label_4094b0:
    // 0x4094b0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4094b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4094b4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4094b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4094b8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4094b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4094bc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4094bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4094c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4094c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4094c4: 0x3e00008  jr          $ra
    ctx->pc = 0x4094C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4094C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4094C4u;
        // 0x4094c8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4094C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4094CCu;
    // 0x4094cc: 0x0  nop
    ctx->pc = 0x4094ccu;
    // NOP
    // 0x4094d0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x4094d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x4094d4: 0x0  nop
    ctx->pc = 0x4094d4u;
    // NOP
    // 0x4094d8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x4094d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x4094dc: 0x0  nop
    ctx->pc = 0x4094dcu;
    // NOP
    // 0x4094e0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x4094e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x4094e4: 0x0  nop
    ctx->pc = 0x4094e4u;
    // NOP
    ctx->pc = 0x4094e8u;
}
