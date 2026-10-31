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

// Function: sub_00182D08
// Address: 0x182d08 - 0x182d60
void sub_00182D08_0x182d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00182D08_0x182d08");
#endif

    switch (ctx->pc) {
        case 0x182d2cu: goto label_182d2c;
        case 0x182d40u: goto label_182d40;
        default: break;
    }

    ctx->pc = 0x182d08u;

    // 0x182d08: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x182d08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x182d0c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x182d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x182d10: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x182d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x182d14: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x182d14u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x182d18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x182d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x182d1c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x182d1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182d20: 0x8e04cd4c  lw          $a0, -0x32B4($s0)
    ctx->pc = 0x182d20u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50CD4Cu));
    // 0x182d24: 0xc060794  jal         func_181E50
    ctx->pc = 0x182D24u;
    SET_GPR_U32(ctx, 31, 0x182D2Cu);
    ctx->pc = 0x182D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182D24u;
    // 0x182d28: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181E50u, 0x182D24u, 0x182D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182D2Cu;
label_182d2c:
    // 0x182d2c: 0x8e04cd4c  lw          $a0, -0x32B4($s0)
    ctx->pc = 0x182d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954316)));
    // 0x182d30: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x182d30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182d34: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x182d34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x182d38: 0xc060838  jal         func_1820E0
    ctx->pc = 0x182D38u;
    SET_GPR_U32(ctx, 31, 0x182D40u);
    ctx->pc = 0x182D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182D38u;
    // 0x182d3c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1820E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1820E0u, 0x182D38u, 0x182D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182D40u;
label_182d40:
    // 0x182d40: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x182d40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x182d44: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x182d44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x182d48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x182d48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x182d4c: 0x3e00008  jr          $ra
    ctx->pc = 0x182D4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182D4Cu;
        // 0x182d50: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x182D4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x182D54u;
    // 0x182d54: 0x0  nop
    ctx->pc = 0x182d54u;
    // NOP
    // 0x182d58: 0xac850030  sw          $a1, 0x30($a0)
    ctx->pc = 0x182d58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 5));
    // 0x182d5c: 0x0  nop
    ctx->pc = 0x182d5cu;
    // NOP
    ctx->pc = 0x182d60u;
}
