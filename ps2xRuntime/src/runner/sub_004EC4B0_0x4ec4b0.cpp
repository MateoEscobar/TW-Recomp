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

// Function: sub_004EC4B0
// Address: 0x4ec4b0 - 0x4ec518
void sub_004EC4B0_0x4ec4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EC4B0_0x4ec4b0");
#endif

    switch (ctx->pc) {
        case 0x4ec4e0u: goto label_4ec4e0;
        case 0x4ec4ecu: goto label_4ec4ec;
        case 0x4ec4f8u: goto label_4ec4f8;
        case 0x4ec504u: goto label_4ec504;
        default: break;
    }

    ctx->pc = 0x4ec4b0u;

    // 0x4ec4b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4ec4b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4ec4b4: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x4ec4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x4ec4b8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4ec4b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x4ec4bc: 0x24429fd0  addiu       $v0, $v0, -0x6030
    ctx->pc = 0x4ec4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942672));
    // 0x4ec4c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4ec4c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4ec4c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4ec4c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ec4c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ec4c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ec4cc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4ec4ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ec4d0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4ec4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4ec4d4: 0x26040300  addiu       $a0, $s0, 0x300
    ctx->pc = 0x4ec4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
    // 0x4ec4d8: 0xc06870c  jal         func_1A1C30
    ctx->pc = 0x4EC4D8u;
    SET_GPR_U32(ctx, 31, 0x4EC4E0u);
    ctx->pc = 0x4EC4DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EC4D8u;
    // 0x4ec4dc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1C30u, 0x4EC4D8u, 0x4EC4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EC4E0u;
label_4ec4e0:
    // 0x4ec4e0: 0x26040110  addiu       $a0, $s0, 0x110
    ctx->pc = 0x4ec4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x4ec4e4: 0xc06e410  jal         func_1B9040
    ctx->pc = 0x4EC4E4u;
    SET_GPR_U32(ctx, 31, 0x4EC4ECu);
    ctx->pc = 0x4EC4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EC4E4u;
    // 0x4ec4e8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9040u, 0x4EC4E4u, 0x4EC4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EC4ECu;
label_4ec4ec:
    // 0x4ec4ec: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x4ec4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x4ec4f0: 0xc0733f0  jal         func_1CCFC0
    ctx->pc = 0x4EC4F0u;
    SET_GPR_U32(ctx, 31, 0x4EC4F8u);
    ctx->pc = 0x4EC4F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EC4F0u;
    // 0x4ec4f4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCFC0u, 0x4EC4F0u, 0x4EC4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EC4F8u;
label_4ec4f8:
    // 0x4ec4f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4ec4f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ec4fc: 0xc06a39e  jal         func_1A8E78
    ctx->pc = 0x4EC4FCu;
    SET_GPR_U32(ctx, 31, 0x4EC504u);
    ctx->pc = 0x4EC500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EC4FCu;
    // 0x4ec500: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E78u, 0x4EC4FCu, 0x4EC504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EC504u;
label_4ec504:
    // 0x4ec504: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4ec504u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4ec508: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4ec508u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ec50c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ec50cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ec510: 0x3e00008  jr          $ra
    ctx->pc = 0x4EC510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EC514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC510u;
        // 0x4ec514: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EC510u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EC518u;
}
