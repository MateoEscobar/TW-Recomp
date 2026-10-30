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

// Function: sub_0035F370
// Address: 0x35f370 - 0x35f3e8
void sub_0035F370_0x35f370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035F370_0x35f370");
#endif

    switch (ctx->pc) {
        case 0x35f398u: goto label_35f398;
        case 0x35f3a0u: goto label_35f3a0;
        case 0x35f3b4u: goto label_35f3b4;
        case 0x35f3bcu: goto label_35f3bc;
        case 0x35f3ccu: goto label_35f3cc;
        default: break;
    }

    ctx->pc = 0x35f370u;

    // 0x35f370: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x35f370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x35f374: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35f374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35f378: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x35f378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x35f37c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x35f37cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x35f380: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x35f380u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f384: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x35f384u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f388: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x35f388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x35f38c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35f38cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35f390: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35F390u;
    SET_GPR_U32(ctx, 31, 0x35F398u);
    ctx->pc = 0x35F394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F390u;
    // 0x35f394: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35F390u, 0x35F398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F398u;
label_35f398:
    // 0x35f398: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35F398u;
    SET_GPR_U32(ctx, 31, 0x35F3A0u);
    ctx->pc = 0x35F39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F398u;
    // 0x35f39c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35F398u, 0x35F3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F3A0u;
label_35f3a0:
    // 0x35f3a0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x35f3a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f3a4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x35f3a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f3a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35f3a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f3ac: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35F3ACu;
    SET_GPR_U32(ctx, 31, 0x35F3B4u);
    ctx->pc = 0x35F3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F3ACu;
    // 0x35f3b0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35F3ACu, 0x35F3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F3B4u;
label_35f3b4:
    // 0x35f3b4: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x35F3B4u;
    SET_GPR_U32(ctx, 31, 0x35F3BCu);
    ctx->pc = 0x35F3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F3B4u;
    // 0x35f3b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x35F3B4u, 0x35F3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F3BCu;
label_35f3bc:
    // 0x35f3bc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x35f3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x35f3c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x35f3c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f3c4: 0xc0a49ea  jal         func_2927A8
    ctx->pc = 0x35F3C4u;
    SET_GPR_U32(ctx, 31, 0x35F3CCu);
    ctx->pc = 0x35F3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F3C4u;
    // 0x35f3c8: 0x22c03  sra         $a1, $v0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2927A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2927A8u, 0x35F3C4u, 0x35F3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F3CCu;
label_35f3cc:
    // 0x35f3cc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x35f3ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35f3d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35f3d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f3d4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x35f3d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35f3d8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x35f3d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35f3dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35f3dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35f3e0: 0x3e00008  jr          $ra
    ctx->pc = 0x35F3E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35F3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F3E0u;
        // 0x35f3e4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35F3E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35F3E8u;
}
