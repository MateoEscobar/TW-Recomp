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

// Function: sub_0035E418
// Address: 0x35e418 - 0x35e480
void sub_0035E418_0x35e418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035E418_0x35e418");
#endif

    switch (ctx->pc) {
        case 0x35e438u: goto label_35e438;
        case 0x35e450u: goto label_35e450;
        case 0x35e458u: goto label_35e458;
        case 0x35e468u: goto label_35e468;
        default: break;
    }

    ctx->pc = 0x35e418u;

    // 0x35e418: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x35e418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x35e41c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35e41cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35e420: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x35e420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x35e424: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x35e424u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35e428: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35e428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x35e42c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35e42cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35e430: 0xc1024c6  jal         func_409318
    ctx->pc = 0x35E430u;
    SET_GPR_U32(ctx, 31, 0x35E438u);
    ctx->pc = 0x35E434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E430u;
    // 0x35e434: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x35E430u, 0x35E438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E438u;
label_35e438:
    // 0x35e438: 0x3406bff0  ori         $a2, $zero, 0xBFF0
    ctx->pc = 0x35e438u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49136);
    // 0x35e43c: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x35e43cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x35e440: 0x2882b  sltu        $s1, $zero, $v0
    ctx->pc = 0x35e440u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x35e444: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35e444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e448: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35E448u;
    SET_GPR_U32(ctx, 31, 0x35E450u);
    ctx->pc = 0x35E44Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E448u;
    // 0x35e44c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35E448u, 0x35E450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E450u;
label_35e450:
    // 0x35e450: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x35E450u;
    SET_GPR_U32(ctx, 31, 0x35E458u);
    ctx->pc = 0x35E454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E450u;
    // 0x35e454: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x35E450u, 0x35E458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E458u;
label_35e458:
    // 0x35e458: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x35e458u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x35e45c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35e45cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e460: 0xc107638  jal         func_41D8E0
    ctx->pc = 0x35E460u;
    SET_GPR_U32(ctx, 31, 0x35E468u);
    ctx->pc = 0x35E464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E460u;
    // 0x35e464: 0x22c03  sra         $a1, $v0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D8E0u, 0x35E460u, 0x35E468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E468u;
label_35e468:
    // 0x35e468: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x35e468u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35e46c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35e46cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e470: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35e470u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35e474: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35e474u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35e478: 0x3e00008  jr          $ra
    ctx->pc = 0x35E478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35E47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E478u;
        // 0x35e47c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35E478u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35E480u;
}
