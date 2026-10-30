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

// Function: sub_004BF380
// Address: 0x4bf380 - 0x4bf400
void sub_004BF380_0x4bf380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004BF380_0x4bf380");
#endif

    switch (ctx->pc) {
        case 0x4bf3acu: goto label_4bf3ac;
        case 0x4bf3bcu: goto label_4bf3bc;
        case 0x4bf3ccu: goto label_4bf3cc;
        case 0x4bf3e4u: goto label_4bf3e4;
        default: break;
    }

    ctx->pc = 0x4bf380u;

    // 0x4bf380: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x4bf380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x4bf384: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4bf384u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4bf388: 0x8c4341f8  lw          $v1, 0x41F8($v0)
    ctx->pc = 0x4bf388u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7141F8u));
    // 0x4bf38c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4bf38cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x4bf390: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4bf390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4bf394: 0xc38021  addu        $s0, $a2, $v1
    ctx->pc = 0x4bf394u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x4bf398: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4bf398u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bf39c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4bf39cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4bf3a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4bf3a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bf3a4: 0xc11ef62  jal         func_47BD88
    ctx->pc = 0x4BF3A4u;
    SET_GPR_U32(ctx, 31, 0x4BF3ACu);
    ctx->pc = 0x4BF3A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BF3A4u;
    // 0x4bf3a8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BD88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BD88u, 0x4BF3A4u, 0x4BF3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BF3ACu;
label_4bf3ac:
    // 0x4bf3ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4bf3acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bf3b0: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x4bf3b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x4bf3b4: 0xc11ef62  jal         func_47BD88
    ctx->pc = 0x4BF3B4u;
    SET_GPR_U32(ctx, 31, 0x4BF3BCu);
    ctx->pc = 0x4BF3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BF3B4u;
    // 0x4bf3b8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BD88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BD88u, 0x4BF3B4u, 0x4BF3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BF3BCu;
label_4bf3bc:
    // 0x4bf3bc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x4bf3bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4bf3c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4bf3c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bf3c4: 0xc11ef62  jal         func_47BD88
    ctx->pc = 0x4BF3C4u;
    SET_GPR_U32(ctx, 31, 0x4BF3CCu);
    ctx->pc = 0x4BF3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BF3C4u;
    // 0x4bf3c8: 0x26050008  addiu       $a1, $s0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BD88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BD88u, 0x4BF3C4u, 0x4BF3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BF3CCu;
label_4bf3cc:
    // 0x4bf3cc: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x4bf3ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x4bf3d0: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x4BF3D0u;
    {
        const bool branch_taken_0x4bf3d0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BF3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BF3D0u;
        // 0x4bf3d4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bf3d0) {
            ctx->pc = 0x4BF3E8u;
            goto label_4bf3e8;
        }
    }
    ctx->pc = 0x4BF3D8u;
    // 0x4bf3d8: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x4bf3d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x4bf3dc: 0xc11fbba  jal         func_47EEE8
    ctx->pc = 0x4BF3DCu;
    SET_GPR_U32(ctx, 31, 0x4BF3E4u);
    ctx->pc = 0x4BF3E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BF3DCu;
    // 0x4bf3e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47EEE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47EEE8u, 0x4BF3DCu, 0x4BF3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BF3E4u;
label_4bf3e4:
    // 0x4bf3e4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4bf3e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4bf3e8:
    // 0x4bf3e8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4bf3e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4bf3ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4bf3ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4bf3f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4bf3f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4bf3f4: 0x3e00008  jr          $ra
    ctx->pc = 0x4BF3F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BF3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BF3F4u;
        // 0x4bf3f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4BF3F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4BF3FCu;
    // 0x4bf3fc: 0x0  nop
    ctx->pc = 0x4bf3fcu;
    // NOP
    ctx->pc = 0x4bf400u;
}
