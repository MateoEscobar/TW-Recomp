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

// Function: sub_0035F278
// Address: 0x35f278 - 0x35f2f0
void sub_0035F278_0x35f278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035F278_0x35f278");
#endif

    switch (ctx->pc) {
        case 0x35f2a0u: goto label_35f2a0;
        case 0x35f2a8u: goto label_35f2a8;
        case 0x35f2bcu: goto label_35f2bc;
        case 0x35f2c4u: goto label_35f2c4;
        case 0x35f2d4u: goto label_35f2d4;
        default: break;
    }

    ctx->pc = 0x35f278u;

    // 0x35f278: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x35f278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x35f27c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35f27cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35f280: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x35f280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x35f284: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x35f284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x35f288: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x35f288u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f28c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x35f28cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f290: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x35f290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x35f294: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35f294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35f298: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35F298u;
    SET_GPR_U32(ctx, 31, 0x35F2A0u);
    ctx->pc = 0x35F29Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F298u;
    // 0x35f29c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35F298u, 0x35F2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F2A0u;
label_35f2a0:
    // 0x35f2a0: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35F2A0u;
    SET_GPR_U32(ctx, 31, 0x35F2A8u);
    ctx->pc = 0x35F2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F2A0u;
    // 0x35f2a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35F2A0u, 0x35F2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F2A8u;
label_35f2a8:
    // 0x35f2a8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x35f2a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f2ac: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x35f2acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f2b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35f2b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f2b4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35F2B4u;
    SET_GPR_U32(ctx, 31, 0x35F2BCu);
    ctx->pc = 0x35F2B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F2B4u;
    // 0x35f2b8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35F2B4u, 0x35F2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F2BCu;
label_35f2bc:
    // 0x35f2bc: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x35F2BCu;
    SET_GPR_U32(ctx, 31, 0x35F2C4u);
    ctx->pc = 0x35F2C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F2BCu;
    // 0x35f2c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x35F2BCu, 0x35F2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F2C4u;
label_35f2c4:
    // 0x35f2c4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x35f2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x35f2c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x35f2c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f2cc: 0xc0a49d6  jal         func_292758
    ctx->pc = 0x35F2CCu;
    SET_GPR_U32(ctx, 31, 0x35F2D4u);
    ctx->pc = 0x35F2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F2CCu;
    // 0x35f2d0: 0x22c03  sra         $a1, $v0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292758u, 0x35F2CCu, 0x35F2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F2D4u;
label_35f2d4:
    // 0x35f2d4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x35f2d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35f2d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35f2d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f2dc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x35f2dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35f2e0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x35f2e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35f2e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35f2e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35f2e8: 0x3e00008  jr          $ra
    ctx->pc = 0x35F2E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35F2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F2E8u;
        // 0x35f2ec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35F2E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35F2F0u;
}
