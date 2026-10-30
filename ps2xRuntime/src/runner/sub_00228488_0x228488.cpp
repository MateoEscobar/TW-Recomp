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

// Function: sub_00228488
// Address: 0x228488 - 0x228500
void sub_00228488_0x228488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00228488_0x228488");
#endif

    switch (ctx->pc) {
        case 0x2284a8u: goto label_2284a8;
        case 0x2284b8u: goto label_2284b8;
        case 0x2284c4u: goto label_2284c4;
        case 0x2284d4u: goto label_2284d4;
        default: break;
    }

    ctx->pc = 0x228488u;

    // 0x228488: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x228488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22848c: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x22848cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x228490: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x228490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x228494: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x228494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x228498: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x228498u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22849c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22849cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2284a0: 0xc089998  jal         func_226660
    ctx->pc = 0x2284A0u;
    SET_GPR_U32(ctx, 31, 0x2284A8u);
    ctx->pc = 0x2284A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2284A0u;
    // 0x2284a4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2284A0u, 0x2284A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2284A8u;
label_2284a8:
    // 0x2284a8: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2284A8u;
    {
        const bool branch_taken_0x2284a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2284a8) {
            ctx->pc = 0x2284ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2284A8u;
            // 0x2284ac: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2284E4u;
            goto label_2284e4;
        }
    }
    ctx->pc = 0x2284B0u;
    // 0x2284b0: 0xc0899ae  jal         func_2266B8
    ctx->pc = 0x2284B0u;
    SET_GPR_U32(ctx, 31, 0x2284B8u);
    ctx->pc = 0x2284B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2284B0u;
    // 0x2284b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266B8u, 0x2284B0u, 0x2284B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2284B8u;
label_2284b8:
    // 0x2284b8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2284b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2284bc: 0xc0406f0  jal         func_101BC0
    ctx->pc = 0x2284BCu;
    SET_GPR_U32(ctx, 31, 0x2284C4u);
    ctx->pc = 0x2284C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2284BCu;
    // 0x2284c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101BC0u, 0x2284BCu, 0x2284C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2284C4u;
label_2284c4:
    // 0x2284c4: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2284C4u;
    {
        const bool branch_taken_0x2284c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2284c4) {
            ctx->pc = 0x2284C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2284C4u;
            // 0x2284c8: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2284E4u;
            goto label_2284e4;
        }
    }
    ctx->pc = 0x2284CCu;
    // 0x2284cc: 0xc0899ae  jal         func_2266B8
    ctx->pc = 0x2284CCu;
    SET_GPR_U32(ctx, 31, 0x2284D4u);
    ctx->pc = 0x2284D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2284CCu;
    // 0x2284d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266B8u, 0x2284CCu, 0x2284D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2284D4u;
label_2284d4:
    // 0x2284d4: 0x240300c7  addiu       $v1, $zero, 0xC7
    ctx->pc = 0x2284d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 199));
    // 0x2284d8: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2284D8u;
    {
        const bool branch_taken_0x2284d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2284DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2284D8u;
        // 0x2284dc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2284d8) {
            ctx->pc = 0x2284E8u;
            goto label_2284e8;
        }
    }
    ctx->pc = 0x2284E0u;
    // 0x2284e0: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2284e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2284e4:
    // 0x2284e4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2284e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2284e8:
    // 0x2284e8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2284e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2284ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2284ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2284f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2284f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2284f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2284F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2284F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2284F4u;
        // 0x2284f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2284F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2284FCu;
    // 0x2284fc: 0x0  nop
    ctx->pc = 0x2284fcu;
    // NOP
    ctx->pc = 0x228500u;
}
