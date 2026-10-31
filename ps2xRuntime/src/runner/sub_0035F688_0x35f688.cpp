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

// Function: sub_0035F688
// Address: 0x35f688 - 0x35f6f0
void sub_0035F688_0x35f688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035F688_0x35f688");
#endif

    switch (ctx->pc) {
        case 0x35f6a8u: goto label_35f6a8;
        case 0x35f6b0u: goto label_35f6b0;
        case 0x35f6c8u: goto label_35f6c8;
        case 0x35f6d4u: goto label_35f6d4;
        default: break;
    }

    ctx->pc = 0x35f688u;

    // 0x35f688: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x35f688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x35f68c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35f68cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35f690: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35f690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x35f694: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35f694u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f698: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x35f698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x35f69c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35f69cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35f6a0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35F6A0u;
    SET_GPR_U32(ctx, 31, 0x35F6A8u);
    ctx->pc = 0x35F6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F6A0u;
    // 0x35f6a4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35F6A0u, 0x35F6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F6A8u;
label_35f6a8:
    // 0x35f6a8: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x35F6A8u;
    SET_GPR_U32(ctx, 31, 0x35F6B0u);
    ctx->pc = 0x35F6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F6A8u;
    // 0x35f6ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x35F6A8u, 0x35F6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F6B0u;
label_35f6b0:
    // 0x35f6b0: 0x28400  sll         $s0, $v0, 16
    ctx->pc = 0x35f6b0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x35f6b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35f6b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f6b8: 0x108403  sra         $s0, $s0, 16
    ctx->pc = 0x35f6b8u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
    // 0x35f6bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35f6bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f6c0: 0xc1024c6  jal         func_409318
    ctx->pc = 0x35F6C0u;
    SET_GPR_U32(ctx, 31, 0x35F6C8u);
    ctx->pc = 0x35F6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F6C0u;
    // 0x35f6c4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x35F6C0u, 0x35F6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F6C8u;
label_35f6c8:
    // 0x35f6c8: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x35f6c8u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x35f6cc: 0xc05ae60  jal         func_16B980
    ctx->pc = 0x35F6CCu;
    SET_GPR_U32(ctx, 31, 0x35F6D4u);
    ctx->pc = 0x35F6D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F6CCu;
    // 0x35f6d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16B980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B980u, 0x35F6CCu, 0x35F6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F6D4u;
label_35f6d4:
    // 0x35f6d4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x35f6d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35f6d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35f6d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f6dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35f6dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35f6e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35f6e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35f6e4: 0x3e00008  jr          $ra
    ctx->pc = 0x35F6E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35F6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F6E4u;
        // 0x35f6e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35F6E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35F6ECu;
    // 0x35f6ec: 0x0  nop
    ctx->pc = 0x35f6ecu;
    // NOP
    ctx->pc = 0x35f6f0u;
}
