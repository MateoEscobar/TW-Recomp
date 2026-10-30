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

// Function: sub_0035F790
// Address: 0x35f790 - 0x35f7f8
void sub_0035F790_0x35f790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035F790_0x35f790");
#endif

    switch (ctx->pc) {
        case 0x35f7b0u: goto label_35f7b0;
        case 0x35f7b8u: goto label_35f7b8;
        case 0x35f7d0u: goto label_35f7d0;
        case 0x35f7dcu: goto label_35f7dc;
        default: break;
    }

    ctx->pc = 0x35f790u;

    // 0x35f790: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x35f790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x35f794: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35f794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35f798: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35f798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x35f79c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35f79cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f7a0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x35f7a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x35f7a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35f7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35f7a8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35F7A8u;
    SET_GPR_U32(ctx, 31, 0x35F7B0u);
    ctx->pc = 0x35F7ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F7A8u;
    // 0x35f7ac: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35F7A8u, 0x35F7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F7B0u;
label_35f7b0:
    // 0x35f7b0: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x35F7B0u;
    SET_GPR_U32(ctx, 31, 0x35F7B8u);
    ctx->pc = 0x35F7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F7B0u;
    // 0x35f7b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x35F7B0u, 0x35F7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F7B8u;
label_35f7b8:
    // 0x35f7b8: 0x28400  sll         $s0, $v0, 16
    ctx->pc = 0x35f7b8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x35f7bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35f7bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f7c0: 0x108403  sra         $s0, $s0, 16
    ctx->pc = 0x35f7c0u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
    // 0x35f7c4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x35f7c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35f7c8: 0xc1024c6  jal         func_409318
    ctx->pc = 0x35F7C8u;
    SET_GPR_U32(ctx, 31, 0x35F7D0u);
    ctx->pc = 0x35F7CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F7C8u;
    // 0x35f7cc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x35F7C8u, 0x35F7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F7D0u;
label_35f7d0:
    // 0x35f7d0: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x35f7d0u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x35f7d4: 0xc05aed6  jal         func_16BB58
    ctx->pc = 0x35F7D4u;
    SET_GPR_U32(ctx, 31, 0x35F7DCu);
    ctx->pc = 0x35F7D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F7D4u;
    // 0x35f7d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16BB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16BB58u, 0x35F7D4u, 0x35F7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F7DCu;
label_35f7dc:
    // 0x35f7dc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x35f7dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35f7e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35f7e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f7e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35f7e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35f7e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35f7e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35f7ec: 0x3e00008  jr          $ra
    ctx->pc = 0x35F7ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35F7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F7ECu;
        // 0x35f7f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35F7ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35F7F4u;
    // 0x35f7f4: 0x0  nop
    ctx->pc = 0x35f7f4u;
    // NOP
    ctx->pc = 0x35f7f8u;
}
