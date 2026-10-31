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

// Function: sub_00397998
// Address: 0x397998 - 0x3979f8
void sub_00397998_0x397998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00397998_0x397998");
#endif

    switch (ctx->pc) {
        case 0x3979acu: goto label_3979ac;
        case 0x3979bcu: goto label_3979bc;
        case 0x3979d4u: goto label_3979d4;
        case 0x3979e8u: goto label_3979e8;
        default: break;
    }

    ctx->pc = 0x397998u;

    // 0x397998: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x397998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x39799c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x39799cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x3979a0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3979a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3979a4: 0xc0e4060  jal         func_390180
    ctx->pc = 0x3979A4u;
    SET_GPR_U32(ctx, 31, 0x3979ACu);
    ctx->pc = 0x3979A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3979A4u;
    // 0x3979a8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x3979A4u, 0x3979ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3979ACu;
label_3979ac:
    // 0x3979ac: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3979ACu;
    {
        const bool branch_taken_0x3979ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3979B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3979ACu;
        // 0x3979b0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3979ac) {
            ctx->pc = 0x3979ECu;
            goto label_3979ec;
        }
    }
    ctx->pc = 0x3979B4u;
    // 0x3979b4: 0xc0e57ce  jal         func_395F38
    ctx->pc = 0x3979B4u;
    SET_GPR_U32(ctx, 31, 0x3979BCu);
    ctx->pc = 0x3979B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3979B4u;
    // 0x3979b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x3979B4u, 0x3979BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3979BCu;
label_3979bc:
    // 0x3979bc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3979BCu;
    {
        const bool branch_taken_0x3979bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3979C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3979BCu;
        // 0x3979c0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3979bc) {
            ctx->pc = 0x3979ECu;
            goto label_3979ec;
        }
    }
    ctx->pc = 0x3979C4u;
    // 0x3979c4: 0x8c4200f8  lw          $v0, 0xF8($v0)
    ctx->pc = 0x3979c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 248)));
    // 0x3979c8: 0x37a40004  ori         $a0, $sp, 0x4
    ctx->pc = 0x3979c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x3979cc: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x3979CCu;
    SET_GPR_U32(ctx, 31, 0x3979D4u);
    ctx->pc = 0x3979D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3979CCu;
    // 0x3979d0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x3979CCu, 0x3979D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3979D4u;
label_3979d4:
    // 0x3979d4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3979D4u;
    {
        const bool branch_taken_0x3979d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3979D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3979D4u;
        // 0x3979d8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3979d4) {
            ctx->pc = 0x3979E8u;
            goto label_3979e8;
        }
    }
    ctx->pc = 0x3979DCu;
    // 0x3979dc: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x3979dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3979e0: 0xc044096  jal         func_110258
    ctx->pc = 0x3979E0u;
    SET_GPR_U32(ctx, 31, 0x3979E8u);
    ctx->pc = 0x3979E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3979E0u;
    // 0x3979e4: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110258u, 0x3979E0u, 0x3979E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3979E8u;
label_3979e8:
    // 0x3979e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3979e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3979ec:
    // 0x3979ec: 0x3e00008  jr          $ra
    ctx->pc = 0x3979ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3979F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3979ECu;
        // 0x3979f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3979ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3979F4u;
    // 0x3979f4: 0x0  nop
    ctx->pc = 0x3979f4u;
    // NOP
    ctx->pc = 0x3979f8u;
}
