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

// Function: sub_003128A0
// Address: 0x3128a0 - 0x3128f8
void sub_003128A0_0x3128a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003128A0_0x3128a0");
#endif

    switch (ctx->pc) {
        case 0x3128b8u: goto label_3128b8;
        case 0x3128d4u: goto label_3128d4;
        case 0x3128e0u: goto label_3128e0;
        default: break;
    }

    ctx->pc = 0x3128a0u;

    // 0x3128a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3128a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3128a4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3128a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3128a8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3128a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3128ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3128acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3128b0: 0xc0c1956  jal         func_306558
    ctx->pc = 0x3128B0u;
    SET_GPR_U32(ctx, 31, 0x3128B8u);
    ctx->pc = 0x3128B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3128B0u;
    // 0x3128b4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306558u, 0x3128B0u, 0x3128B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3128B8u;
label_3128b8:
    // 0x3128b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3128b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3128bc: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3128BCu;
    {
        const bool branch_taken_0x3128bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3128C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3128BCu;
        // 0x3128c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3128bc) {
            ctx->pc = 0x3128D4u;
            goto label_3128d4;
        }
    }
    ctx->pc = 0x3128C4u;
    // 0x3128c4: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x3128c4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x3128c8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3128c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3128cc: 0xc0c4a3e  jal         func_3128F8
    ctx->pc = 0x3128CCu;
    SET_GPR_U32(ctx, 31, 0x3128D4u);
    ctx->pc = 0x3128D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3128CCu;
    // 0x3128d0: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3128F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3128F8u, 0x3128CCu, 0x3128D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3128D4u;
label_3128d4:
    // 0x3128d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3128d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3128d8: 0xc059590  jal         func_165640
    ctx->pc = 0x3128D8u;
    SET_GPR_U32(ctx, 31, 0x3128E0u);
    ctx->pc = 0x3128DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3128D8u;
    // 0x3128dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165640u, 0x3128D8u, 0x3128E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3128E0u;
label_3128e0:
    // 0x3128e0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3128e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3128e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3128e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3128e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3128e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3128ec: 0x3e00008  jr          $ra
    ctx->pc = 0x3128ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3128F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3128ECu;
        // 0x3128f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3128ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3128F4u;
    // 0x3128f4: 0x0  nop
    ctx->pc = 0x3128f4u;
    // NOP
    ctx->pc = 0x3128f8u;
}
