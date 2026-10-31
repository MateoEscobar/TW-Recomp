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

// Function: sub_002926A8
// Address: 0x2926a8 - 0x292708
void sub_002926A8_0x2926a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002926A8_0x2926a8");
#endif

    switch (ctx->pc) {
        case 0x2926bcu: goto label_2926bc;
        case 0x2926c4u: goto label_2926c4;
        case 0x2926d4u: goto label_2926d4;
        case 0x2926fcu: goto label_2926fc;
        default: break;
    }

    ctx->pc = 0x2926a8u;

    // 0x2926a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2926a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2926ac: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2926acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2926b0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2926b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2926b4: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2926B4u;
    SET_GPR_U32(ctx, 31, 0x2926BCu);
    ctx->pc = 0x2926B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2926B4u;
    // 0x2926b8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2926B4u, 0x2926BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2926BCu;
label_2926bc:
    // 0x2926bc: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2926BCu;
    SET_GPR_U32(ctx, 31, 0x2926C4u);
    ctx->pc = 0x2926C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2926BCu;
    // 0x2926c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2926BCu, 0x2926C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2926C4u;
label_2926c4:
    // 0x2926c4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2926C4u;
    {
        const bool branch_taken_0x2926c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2926C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2926C4u;
        // 0x2926c8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2926c4) {
            ctx->pc = 0x292700u;
            goto label_292700;
        }
    }
    ctx->pc = 0x2926CCu;
    // 0x2926cc: 0xc087502  jal         func_21D408
    ctx->pc = 0x2926CCu;
    SET_GPR_U32(ctx, 31, 0x2926D4u);
    ctx->pc = 0x2926D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2926CCu;
    // 0x2926d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2926CCu, 0x2926D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2926D4u;
label_2926d4:
    // 0x2926d4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2926d4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2926d8: 0x8062002c  lb          $v0, 0x2C($v1)
    ctx->pc = 0x2926d8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x2926dc: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2926DCu;
    {
        const bool branch_taken_0x2926dc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2926E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2926DCu;
        // 0x2926e0: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2926dc) {
            ctx->pc = 0x2926F0u;
            goto label_2926f0;
        }
    }
    ctx->pc = 0x2926E4u;
    // 0x2926e4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2926e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2926e8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2926E8u;
    {
        const bool branch_taken_0x2926e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2926ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2926E8u;
        // 0x2926ec: 0x8c440040  lw          $a0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2926e8) {
            ctx->pc = 0x2926F4u;
            goto label_2926f4;
        }
    }
    ctx->pc = 0x2926F0u;
label_2926f0:
    // 0x2926f0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2926f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2926f4:
    // 0x2926f4: 0xc0a7bb6  jal         func_29EED8
    ctx->pc = 0x2926F4u;
    SET_GPR_U32(ctx, 31, 0x2926FCu);
    ctx->pc = 0x29EED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29EED8u, 0x2926F4u, 0x2926FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2926FCu;
label_2926fc:
    // 0x2926fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2926fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_292700:
    // 0x292700: 0x3e00008  jr          $ra
    ctx->pc = 0x292700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x292704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292700u;
        // 0x292704: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x292700u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x292708u;
}
