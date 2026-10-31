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

// Function: sub_0037B538
// Address: 0x37b538 - 0x37b5d8
void sub_0037B538_0x37b538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037B538_0x37b538");
#endif

    switch (ctx->pc) {
        case 0x37b558u: goto label_37b558;
        case 0x37b560u: goto label_37b560;
        case 0x37b578u: goto label_37b578;
        case 0x37b580u: goto label_37b580;
        case 0x37b58cu: goto label_37b58c;
        case 0x37b598u: goto label_37b598;
        case 0x37b5b0u: goto label_37b5b0;
        case 0x37b5bcu: goto label_37b5bc;
        default: break;
    }

    ctx->pc = 0x37b538u;

    // 0x37b538: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x37b538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x37b53c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37b53cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37b540: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x37b540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x37b544: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x37b544u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b548: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x37b548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x37b54c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37b54cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37b550: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37B550u;
    SET_GPR_U32(ctx, 31, 0x37B558u);
    ctx->pc = 0x37B554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B550u;
    // 0x37b554: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37B550u, 0x37B558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B558u;
label_37b558:
    // 0x37b558: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x37B558u;
    SET_GPR_U32(ctx, 31, 0x37B560u);
    ctx->pc = 0x37B55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B558u;
    // 0x37b55c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x37B558u, 0x37B560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B560u;
label_37b560:
    // 0x37b560: 0x3406ffc0  ori         $a2, $zero, 0xFFC0
    ctx->pc = 0x37b560u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x37b564: 0x633bc  dsll32      $a2, $a2, 14
    ctx->pc = 0x37b564u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 14));
    // 0x37b568: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x37b568u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b56c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x37b56cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37b570: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37B570u;
    SET_GPR_U32(ctx, 31, 0x37B578u);
    ctx->pc = 0x37B574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B570u;
    // 0x37b574: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37B570u, 0x37B578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B578u;
label_37b578:
    // 0x37b578: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x37B578u;
    SET_GPR_U32(ctx, 31, 0x37B580u);
    ctx->pc = 0x37B57Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B578u;
    // 0x37b57c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x37B578u, 0x37B580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B580u;
label_37b580:
    // 0x37b580: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37b580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b584: 0xc107bf4  jal         func_41EFD0
    ctx->pc = 0x37B584u;
    SET_GPR_U32(ctx, 31, 0x37B58Cu);
    ctx->pc = 0x37B588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B584u;
    // 0x37b588: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41EFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41EFD0u, 0x37B584u, 0x37B58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B58Cu;
label_37b58c:
    // 0x37b58c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x37b58cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b590: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x37B590u;
    SET_GPR_U32(ctx, 31, 0x37B598u);
    ctx->pc = 0x37B594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B590u;
    // 0x37b594: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x37B590u, 0x37B598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B598u;
label_37b598:
    // 0x37b598: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x37B598u;
    {
        const bool branch_taken_0x37b598 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x37B59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B598u;
        // 0x37b59c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b598) {
            ctx->pc = 0x37B5B4u;
            goto label_37b5b4;
        }
    }
    ctx->pc = 0x37B5A0u;
    // 0x37b5a0: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x37b5a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x37b5a4: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x37b5a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x37b5a8: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x37B5A8u;
    SET_GPR_U32(ctx, 31, 0x37B5B0u);
    ctx->pc = 0x37B5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B5A8u;
    // 0x37b5ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x37B5A8u, 0x37B5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B5B0u;
label_37b5b0:
    // 0x37b5b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37b5b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_37b5b4:
    // 0x37b5b4: 0xc10253a  jal         func_4094E8
    ctx->pc = 0x37B5B4u;
    SET_GPR_U32(ctx, 31, 0x37B5BCu);
    ctx->pc = 0x37B5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B5B4u;
    // 0x37b5b8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4094E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4094E8u, 0x37B5B4u, 0x37B5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B5BCu;
label_37b5bc:
    // 0x37b5bc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x37b5bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37b5c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x37b5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37b5c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x37b5c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37b5c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37b5c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37b5cc: 0x3e00008  jr          $ra
    ctx->pc = 0x37B5CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37B5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B5CCu;
        // 0x37b5d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37B5CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37B5D4u;
    // 0x37b5d4: 0x0  nop
    ctx->pc = 0x37b5d4u;
    // NOP
    ctx->pc = 0x37b5d8u;
}
