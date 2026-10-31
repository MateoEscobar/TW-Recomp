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

// Function: sub_001B5A90
// Address: 0x1b5a90 - 0x1b5ae0
void sub_001B5A90_0x1b5a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B5A90_0x1b5a90");
#endif

    switch (ctx->pc) {
        case 0x1b5ad0u: goto label_1b5ad0;
        default: break;
    }

    ctx->pc = 0x1b5a90u;

    // 0x1b5a90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b5a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b5a94: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1b5a94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5a98: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x1b5a98u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5a9c: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x1b5a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x1b5aa0: 0xafa70004  sw          $a3, 0x4($sp)
    ctx->pc = 0x1b5aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 7));
    // 0x1b5aa4: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x1b5aa4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5aa8: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1b5aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1b5aac: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1b5aacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1b5ab0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1b5ab0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1b5ab4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1b5ab4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b5ab8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b5ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b5abc: 0x24840840  addiu       $a0, $a0, 0x840
    ctx->pc = 0x1b5abcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
    // 0x1b5ac0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1b5ac0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5ac4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1b5ac4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5ac8: 0xc06cf74  jal         func_1B3DD0
    ctx->pc = 0x1B5AC8u;
    SET_GPR_U32(ctx, 31, 0x1B5AD0u);
    ctx->pc = 0x1B5ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5AC8u;
    // 0x1b5acc: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3DD0u, 0x1B5AC8u, 0x1B5AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5AD0u;
label_1b5ad0:
    // 0x1b5ad0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b5ad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b5ad4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B5AD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5AD4u;
        // 0x1b5ad8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5AD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B5ADCu;
    // 0x1b5adc: 0x0  nop
    ctx->pc = 0x1b5adcu;
    // NOP
    ctx->pc = 0x1b5ae0u;
}
