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

// Function: sub_00134D28
// Address: 0x134d28 - 0x134d78
void sub_00134D28_0x134d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00134D28_0x134d28");
#endif

    switch (ctx->pc) {
        case 0x134d40u: goto label_134d40;
        case 0x134d50u: goto label_134d50;
        case 0x134d64u: goto label_134d64;
        default: break;
    }

    ctx->pc = 0x134d28u;

    // 0x134d28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x134d28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x134d2c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x134d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x134d30: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x134d30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134d34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x134d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x134d38: 0xc0e4060  jal         func_390180
    ctx->pc = 0x134D38u;
    SET_GPR_U32(ctx, 31, 0x134D40u);
    ctx->pc = 0x134D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134D38u;
    // 0x134d3c: 0x260401e0  addiu       $a0, $s0, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x134D38u, 0x134D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134D40u;
label_134d40:
    // 0x134d40: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x134D40u;
    {
        const bool branch_taken_0x134d40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x134D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134D40u;
        // 0x134d44: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134d40) {
            ctx->pc = 0x134D50u;
            goto label_134d50;
        }
    }
    ctx->pc = 0x134D48u;
    // 0x134d48: 0xc04d35e  jal         func_134D78
    ctx->pc = 0x134D48u;
    SET_GPR_U32(ctx, 31, 0x134D50u);
    ctx->pc = 0x134D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134D48u;
    // 0x134d4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x134D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134D78u, 0x134D48u, 0x134D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134D50u;
label_134d50:
    // 0x134d50: 0x3c013c88  lui         $at, 0x3C88
    ctx->pc = 0x134d50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15496 << 16));
    // 0x134d54: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x134d54u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
    // 0x134d58: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x134d58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x134d5c: 0xc04828c  jal         func_120A30
    ctx->pc = 0x134D5Cu;
    SET_GPR_U32(ctx, 31, 0x134D64u);
    ctx->pc = 0x134D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134D5Cu;
    // 0x134d60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120A30u, 0x134D5Cu, 0x134D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134D64u;
label_134d64:
    // 0x134d64: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x134d64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x134d68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x134d68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x134d6c: 0x3e00008  jr          $ra
    ctx->pc = 0x134D6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x134D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134D6Cu;
        // 0x134d70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x134D6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x134D74u;
    // 0x134d74: 0x0  nop
    ctx->pc = 0x134d74u;
    // NOP
    ctx->pc = 0x134d78u;
}
