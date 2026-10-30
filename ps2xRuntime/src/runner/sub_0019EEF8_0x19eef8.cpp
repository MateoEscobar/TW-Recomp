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

// Function: sub_0019EEF8
// Address: 0x19eef8 - 0x19ef38
void sub_0019EEF8_0x19eef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019EEF8_0x19eef8");
#endif

    switch (ctx->pc) {
        case 0x19ef10u: goto label_19ef10;
        default: break;
    }

    ctx->pc = 0x19eef8u;

    // 0x19eef8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19eef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19eefc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x19eefcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x19ef00: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19ef00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ef04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19ef04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19ef08: 0xc0e1938  jal         func_3864E0
    ctx->pc = 0x19EF08u;
    SET_GPR_U32(ctx, 31, 0x19EF10u);
    ctx->pc = 0x19EF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EF08u;
    // 0x19ef0c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3864E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3864E0u, 0x19EF08u, 0x19EF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EF10u;
label_19ef10:
    // 0x19ef10: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x19ef10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x19ef14: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x19ef14u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x19ef18: 0x24630660  addiu       $v1, $v1, 0x660
    ctx->pc = 0x19ef18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1632));
    // 0x19ef1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19ef1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19ef20: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x19ef20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x19ef24: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x19ef24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x19ef28: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x19ef28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19ef2c: 0x3e00008  jr          $ra
    ctx->pc = 0x19EF2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19EF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EF2Cu;
        // 0x19ef30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19EF2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19EF34u;
    // 0x19ef34: 0x0  nop
    ctx->pc = 0x19ef34u;
    // NOP
    ctx->pc = 0x19ef38u;
}
