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

// Function: sub_001B5D38
// Address: 0x1b5d38 - 0x1b5d78
void sub_001B5D38_0x1b5d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B5D38_0x1b5d38");
#endif

    switch (ctx->pc) {
        case 0x1b5d68u: goto label_1b5d68;
        default: break;
    }

    ctx->pc = 0x1b5d38u;

    // 0x1b5d38: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b5d38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b5d3c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b5d3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b5d40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b5d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b5d44: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1b5d44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1b5d48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b5d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b5d4c: 0xe7ac0000  swc1        $f12, 0x0($sp)
    ctx->pc = 0x1b5d4cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1b5d50: 0x24840840  addiu       $a0, $a0, 0x840
    ctx->pc = 0x1b5d50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
    // 0x1b5d54: 0xe7ad0008  swc1        $f13, 0x8($sp)
    ctx->pc = 0x1b5d54u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1b5d58: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1b5d58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5d5c: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x1b5d5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1b5d60: 0xc06cf4a  jal         func_1B3D28
    ctx->pc = 0x1B5D60u;
    SET_GPR_U32(ctx, 31, 0x1B5D68u);
    ctx->pc = 0x1B5D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5D60u;
    // 0x1b5d64: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3D28u, 0x1B5D60u, 0x1B5D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5D68u;
label_1b5d68:
    // 0x1b5d68: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b5d68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b5d6c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B5D6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5D6Cu;
        // 0x1b5d70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5D6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B5D74u;
    // 0x1b5d74: 0x0  nop
    ctx->pc = 0x1b5d74u;
    // NOP
    ctx->pc = 0x1b5d78u;
}
