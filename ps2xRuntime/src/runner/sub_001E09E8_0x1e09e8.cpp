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

// Function: sub_001E09E8
// Address: 0x1e09e8 - 0x1e0a58
void sub_001E09E8_0x1e09e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E09E8_0x1e09e8");
#endif

    switch (ctx->pc) {
        case 0x1e0a04u: goto label_1e0a04;
        default: break;
    }

    ctx->pc = 0x1e09e8u;

    // 0x1e09e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e09e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e09ec: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1e09ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1e09f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e09f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e09f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e09f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e09f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e09f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e09fc: 0xc06a38c  jal         func_1A8E30
    ctx->pc = 0x1E09FCu;
    SET_GPR_U32(ctx, 31, 0x1E0A04u);
    ctx->pc = 0x1E0A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E09FCu;
    // 0x1e0a00: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E30u, 0x1E09FCu, 0x1E0A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0A04u;
label_1e0a04:
    // 0x1e0a04: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1e0a04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x1e0a08: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e0a08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1e0a0c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e0a0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e0a10: 0x2442c190  addiu       $v0, $v0, -0x3E70
    ctx->pc = 0x1e0a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951312));
    // 0x1e0a14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e0a14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e0a18: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1e0a18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1e0a1c: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x1e0a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1e0a20: 0xae110060  sw          $s1, 0x60($s0)
    ctx->pc = 0x1e0a20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 17));
    // 0x1e0a24: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e0a24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0a28: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x1e0a28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x1e0a2c: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1e0a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1e0a30: 0xa2040080  sb          $a0, 0x80($s0)
    ctx->pc = 0x1e0a30u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 128), (uint8_t)GPR_U32(ctx, 4));
    // 0x1e0a34: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x1e0a34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x1e0a38: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x1e0a38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    // 0x1e0a3c: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x1e0a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x1e0a40: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x1e0a40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
    // 0x1e0a44: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1e0a44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e0a48: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e0a48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e0a4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e0a4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0a50: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0A50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0A50u;
        // 0x1e0a54: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0A50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E0A58u;
}
