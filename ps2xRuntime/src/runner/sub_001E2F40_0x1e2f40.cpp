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

// Function: sub_001E2F40
// Address: 0x1e2f40 - 0x1e2f98
void sub_001E2F40_0x1e2f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E2F40_0x1e2f40");
#endif

    switch (ctx->pc) {
        case 0x1e2f54u: goto label_1e2f54;
        case 0x1e2f80u: goto label_1e2f80;
        default: break;
    }

    ctx->pc = 0x1e2f40u;

    // 0x1e2f40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e2f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e2f44: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e2f44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1e2f48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e2f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e2f4c: 0xc06a38c  jal         func_1A8E30
    ctx->pc = 0x1E2F4Cu;
    SET_GPR_U32(ctx, 31, 0x1E2F54u);
    ctx->pc = 0x1E2F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2F4Cu;
    // 0x1e2f50: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E30u, 0x1E2F4Cu, 0x1E2F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2F54u;
label_1e2f54:
    // 0x1e2f54: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e2f54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1e2f58: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e2f58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e2f5c: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1e2f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x1e2f60: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e2f60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e2f64: 0x2442c2c8  addiu       $v0, $v0, -0x3D38
    ctx->pc = 0x1e2f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951624));
    // 0x1e2f68: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x1e2f68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x1e2f6c: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x1e2f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x1e2f70: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x1e2f70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x1e2f74: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x1e2f74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    // 0x1e2f78: 0xc06e3e6  jal         func_1B8F98
    ctx->pc = 0x1E2F78u;
    SET_GPR_U32(ctx, 31, 0x1E2F80u);
    ctx->pc = 0x1E2F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2F78u;
    // 0x1e2f7c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8F98u, 0x1E2F78u, 0x1E2F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2F80u;
label_1e2f80:
    // 0x1e2f80: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e2f80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2f84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e2f84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e2f88: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e2f88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e2f8c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E2F8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2F8Cu;
        // 0x1e2f90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2F8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E2F94u;
    // 0x1e2f94: 0x0  nop
    ctx->pc = 0x1e2f94u;
    // NOP
    ctx->pc = 0x1e2f98u;
}
