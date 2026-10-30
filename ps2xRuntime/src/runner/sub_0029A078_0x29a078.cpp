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

// Function: sub_0029A078
// Address: 0x29a078 - 0x29a0b0
void sub_0029A078_0x29a078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029A078_0x29a078");
#endif

    switch (ctx->pc) {
        case 0x29a0a4u: goto label_29a0a4;
        default: break;
    }

    ctx->pc = 0x29a078u;

    // 0x29a078: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29a078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29a07c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29a07cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x29a080: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x29a080u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x29a084: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x29a084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x29a088: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x29A088u;
    {
        const bool branch_taken_0x29a088 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29a088) {
            ctx->pc = 0x29A08Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29A088u;
            // 0x29a08c: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29A098u;
            goto label_29a098;
        }
    }
    ctx->pc = 0x29A090u;
    // 0x29a090: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x29A090u;
    {
        const bool branch_taken_0x29a090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A090u;
        // 0x29a094: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a090) {
            ctx->pc = 0x29A0A4u;
            goto label_29a0a4;
        }
    }
    ctx->pc = 0x29A098u;
label_29a098:
    // 0x29a098: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29a098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a09c: 0xc0e4060  jal         func_390180
    ctx->pc = 0x29A09Cu;
    SET_GPR_U32(ctx, 31, 0x29A0A4u);
    ctx->pc = 0x29A0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A09Cu;
    // 0x29a0a0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x29A09Cu, 0x29A0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A0A4u;
label_29a0a4:
    // 0x29a0a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29a0a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29a0a8: 0x3e00008  jr          $ra
    ctx->pc = 0x29A0A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29A0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A0A8u;
        // 0x29a0ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A0A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29A0B0u;
}
