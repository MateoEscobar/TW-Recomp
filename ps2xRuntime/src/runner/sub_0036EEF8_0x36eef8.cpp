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

// Function: sub_0036EEF8
// Address: 0x36eef8 - 0x36ef50
void sub_0036EEF8_0x36eef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036EEF8_0x36eef8");
#endif

    switch (ctx->pc) {
        case 0x36ef18u: goto label_36ef18;
        case 0x36ef2cu: goto label_36ef2c;
        case 0x36ef38u: goto label_36ef38;
        default: break;
    }

    ctx->pc = 0x36eef8u;

    // 0x36eef8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x36eef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x36eefc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36eefcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36ef00: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x36ef00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x36ef04: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36ef04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ef08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x36ef08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x36ef0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36ef0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36ef10: 0xc102488  jal         func_409220
    ctx->pc = 0x36EF10u;
    SET_GPR_U32(ctx, 31, 0x36EF18u);
    ctx->pc = 0x36EF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36EF10u;
    // 0x36ef14: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x36EF10u, 0x36EF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EF18u;
label_36ef18:
    // 0x36ef18: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x36ef18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ef1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36ef1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ef20: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36ef20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ef24: 0xc102488  jal         func_409220
    ctx->pc = 0x36EF24u;
    SET_GPR_U32(ctx, 31, 0x36EF2Cu);
    ctx->pc = 0x36EF28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36EF24u;
    // 0x36ef28: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x36EF24u, 0x36EF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EF2Cu;
label_36ef2c:
    // 0x36ef2c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x36ef2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ef30: 0xc0554ac  jal         func_1552B0
    ctx->pc = 0x36EF30u;
    SET_GPR_U32(ctx, 31, 0x36EF38u);
    ctx->pc = 0x36EF34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36EF30u;
    // 0x36ef34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1552B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1552B0u, 0x36EF30u, 0x36EF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EF38u;
label_36ef38:
    // 0x36ef38: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x36ef38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36ef3c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36ef3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ef40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x36ef40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36ef44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36ef44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36ef48: 0x3e00008  jr          $ra
    ctx->pc = 0x36EF48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36EF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EF48u;
        // 0x36ef4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36EF48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36EF50u;
}
