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

// Function: sub_00378790
// Address: 0x378790 - 0x378808
void sub_00378790_0x378790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00378790_0x378790");
#endif

    switch (ctx->pc) {
        case 0x3787b8u: goto label_3787b8;
        case 0x3787c0u: goto label_3787c0;
        case 0x3787d4u: goto label_3787d4;
        case 0x3787dcu: goto label_3787dc;
        case 0x3787ecu: goto label_3787ec;
        default: break;
    }

    ctx->pc = 0x378790u;

    // 0x378790: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x378790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x378794: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x378794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x378798: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x378798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x37879c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x37879cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3787a0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3787a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3787a4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3787a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3787a8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3787a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x3787ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3787acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3787b0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3787B0u;
    SET_GPR_U32(ctx, 31, 0x3787B8u);
    ctx->pc = 0x3787B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3787B0u;
    // 0x3787b4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3787B0u, 0x3787B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3787B8u;
label_3787b8:
    // 0x3787b8: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3787B8u;
    SET_GPR_U32(ctx, 31, 0x3787C0u);
    ctx->pc = 0x3787BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3787B8u;
    // 0x3787bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3787B8u, 0x3787C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3787C0u;
label_3787c0:
    // 0x3787c0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3787c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3787c4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3787c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3787c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3787c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3787cc: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3787CCu;
    SET_GPR_U32(ctx, 31, 0x3787D4u);
    ctx->pc = 0x3787D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3787CCu;
    // 0x3787d0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3787CCu, 0x3787D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3787D4u;
label_3787d4:
    // 0x3787d4: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x3787D4u;
    SET_GPR_U32(ctx, 31, 0x3787DCu);
    ctx->pc = 0x3787D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3787D4u;
    // 0x3787d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x3787D4u, 0x3787DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3787DCu;
label_3787dc:
    // 0x3787dc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x3787dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x3787e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3787e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3787e4: 0xc0e380c  jal         func_38E030
    ctx->pc = 0x3787E4u;
    SET_GPR_U32(ctx, 31, 0x3787ECu);
    ctx->pc = 0x3787E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3787E4u;
    // 0x3787e8: 0x22c03  sra         $a1, $v0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E030u, 0x3787E4u, 0x3787ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3787ECu;
label_3787ec:
    // 0x3787ec: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3787ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3787f0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3787f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3787f4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3787f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3787f8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3787f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3787fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3787fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x378800: 0x3e00008  jr          $ra
    ctx->pc = 0x378800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x378804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378800u;
        // 0x378804: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x378800u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x378808u;
}
