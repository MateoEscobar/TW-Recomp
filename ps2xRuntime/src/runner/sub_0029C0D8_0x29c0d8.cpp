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

// Function: sub_0029C0D8
// Address: 0x29c0d8 - 0x29c160
void sub_0029C0D8_0x29c0d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029C0D8_0x29c0d8");
#endif

    switch (ctx->pc) {
        case 0x29c104u: goto label_29c104;
        case 0x29c118u: goto label_29c118;
        case 0x29c130u: goto label_29c130;
        case 0x29c13cu: goto label_29c13c;
        default: break;
    }

    ctx->pc = 0x29c0d8u;

    // 0x29c0d8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x29c0d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x29c0dc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x29c0dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x29c0e0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x29c0e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x29c0e4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x29c0e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c0e8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x29c0e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x29c0ec: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x29c0ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c0f0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x29c0f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x29c0f4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x29c0f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c0f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29c0f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29c0fc: 0xc088edc  jal         func_223B70
    ctx->pc = 0x29C0FCu;
    SET_GPR_U32(ctx, 31, 0x29C104u);
    ctx->pc = 0x29C100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C0FCu;
    // 0x29c100: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B70u, 0x29C0FCu, 0x29C104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C104u;
label_29c104:
    // 0x29c104: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x29C104u;
    {
        const bool branch_taken_0x29c104 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29C108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C104u;
        // 0x29c108: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c104) {
            ctx->pc = 0x29C144u;
            goto label_29c144;
        }
    }
    ctx->pc = 0x29C10Cu;
    // 0x29c10c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29c10cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c110: 0xc088a92  jal         func_222A48
    ctx->pc = 0x29C110u;
    SET_GPR_U32(ctx, 31, 0x29C118u);
    ctx->pc = 0x29C114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C110u;
    // 0x29c114: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222A48u, 0x29C110u, 0x29C118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C118u;
label_29c118:
    // 0x29c118: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x29c118u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c11c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29c11cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29c120: 0x16220008  bne         $s1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x29C120u;
    {
        const bool branch_taken_0x29c120 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x29C124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C120u;
        // 0x29c124: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c120) {
            ctx->pc = 0x29C144u;
            goto label_29c144;
        }
    }
    ctx->pc = 0x29C128u;
    // 0x29c128: 0xc087502  jal         func_21D408
    ctx->pc = 0x29C128u;
    SET_GPR_U32(ctx, 31, 0x29C130u);
    ctx->pc = 0x29C12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C128u;
    // 0x29c12c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x29C128u, 0x29C130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C130u;
label_29c130:
    // 0x29c130: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29c130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c134: 0xc0a34d6  jal         func_28D358
    ctx->pc = 0x29C134u;
    SET_GPR_U32(ctx, 31, 0x29C13Cu);
    ctx->pc = 0x29C138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C134u;
    // 0x29c138: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D358u, 0x29C134u, 0x29C13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C13Cu;
label_29c13c:
    // 0x29c13c: 0x222980b  movn        $s3, $s1, $v0
    ctx->pc = 0x29c13cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 17));
    // 0x29c140: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x29c140u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_29c144:
    // 0x29c144: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x29c144u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29c148: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x29c148u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29c14c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x29c14cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29c150: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x29c150u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29c154: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29c154u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29c158: 0x3e00008  jr          $ra
    ctx->pc = 0x29C158u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C158u;
        // 0x29c15c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C158u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29C160u;
}
