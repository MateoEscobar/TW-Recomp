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

// Function: sub_00373648
// Address: 0x373648 - 0x3736a0
void sub_00373648_0x373648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00373648_0x373648");
#endif

    switch (ctx->pc) {
        case 0x373664u: goto label_373664;
        case 0x37366cu: goto label_37366c;
        case 0x373678u: goto label_373678;
        case 0x373680u: goto label_373680;
        case 0x37368cu: goto label_37368c;
        default: break;
    }

    ctx->pc = 0x373648u;

    // 0x373648: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x373648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x37364c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x37364cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373650: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x373650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x373654: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x373654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x373658: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x373658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37365c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37365Cu;
    SET_GPR_U32(ctx, 31, 0x373664u);
    ctx->pc = 0x373660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37365Cu;
    // 0x373660: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37365Cu, 0x373664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373664u;
label_373664:
    // 0x373664: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x373664u;
    SET_GPR_U32(ctx, 31, 0x37366Cu);
    ctx->pc = 0x373668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373664u;
    // 0x373668: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x373664u, 0x37366Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37366Cu;
label_37366c:
    // 0x37366c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x37366cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x373670: 0xc05a92a  jal         func_16A4A8
    ctx->pc = 0x373670u;
    SET_GPR_U32(ctx, 31, 0x373678u);
    ctx->pc = 0x373674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373670u;
    // 0x373674: 0x22403  sra         $a0, $v0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A4A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A4A8u, 0x373670u, 0x373678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373678u;
label_373678:
    // 0x373678: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x373678u;
    SET_GPR_U32(ctx, 31, 0x373680u);
    ctx->pc = 0x37367Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373678u;
    // 0x37367c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x373678u, 0x373680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373680u;
label_373680:
    // 0x373680: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x373680u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373684: 0xc10253a  jal         func_4094E8
    ctx->pc = 0x373684u;
    SET_GPR_U32(ctx, 31, 0x37368Cu);
    ctx->pc = 0x373688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373684u;
    // 0x373688: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4094E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4094E8u, 0x373684u, 0x37368Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37368Cu;
label_37368c:
    // 0x37368c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x37368cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x373690: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x373690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x373694: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x373694u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x373698: 0x3e00008  jr          $ra
    ctx->pc = 0x373698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37369Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373698u;
        // 0x37369c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x373698u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3736A0u;
}
