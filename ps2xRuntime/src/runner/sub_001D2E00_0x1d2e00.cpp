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

// Function: sub_001D2E00
// Address: 0x1d2e00 - 0x1d2e80
void sub_001D2E00_0x1d2e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D2E00_0x1d2e00");
#endif

    switch (ctx->pc) {
        case 0x1d2e14u: goto label_1d2e14;
        case 0x1d2e40u: goto label_1d2e40;
        case 0x1d2e48u: goto label_1d2e48;
        case 0x1d2e50u: goto label_1d2e50;
        case 0x1d2e58u: goto label_1d2e58;
        case 0x1d2e60u: goto label_1d2e60;
        case 0x1d2e68u: goto label_1d2e68;
        default: break;
    }

    ctx->pc = 0x1d2e00u;

    // 0x1d2e00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d2e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d2e04: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d2e04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d2e08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d2e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d2e0c: 0xc06a38c  jal         func_1A8E30
    ctx->pc = 0x1D2E0Cu;
    SET_GPR_U32(ctx, 31, 0x1D2E14u);
    ctx->pc = 0x1D2E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2E0Cu;
    // 0x1d2e10: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E30u, 0x1D2E0Cu, 0x1D2E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2E14u;
label_1d2e14:
    // 0x1d2e14: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1d2e14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1d2e18: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d2e18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d2e1c: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1d2e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x1d2e20: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d2e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d2e24: 0x2442b658  addiu       $v0, $v0, -0x49A8
    ctx->pc = 0x1d2e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948440));
    // 0x1d2e28: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x1d2e28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x1d2e2c: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x1d2e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x1d2e30: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x1d2e30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x1d2e34: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x1d2e34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    // 0x1d2e38: 0xc0686fe  jal         func_1A1BF8
    ctx->pc = 0x1D2E38u;
    SET_GPR_U32(ctx, 31, 0x1D2E40u);
    ctx->pc = 0x1D2E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2E38u;
    // 0x1d2e3c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x1D2E38u, 0x1D2E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2E40u;
label_1d2e40:
    // 0x1d2e40: 0xc0686fe  jal         func_1A1BF8
    ctx->pc = 0x1D2E40u;
    SET_GPR_U32(ctx, 31, 0x1D2E48u);
    ctx->pc = 0x1D2E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2E40u;
    // 0x1d2e44: 0x26040180  addiu       $a0, $s0, 0x180 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x1D2E40u, 0x1D2E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2E48u;
label_1d2e48:
    // 0x1d2e48: 0xc0686fe  jal         func_1A1BF8
    ctx->pc = 0x1D2E48u;
    SET_GPR_U32(ctx, 31, 0x1D2E50u);
    ctx->pc = 0x1D2E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2E48u;
    // 0x1d2e4c: 0x26040280  addiu       $a0, $s0, 0x280 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x1D2E48u, 0x1D2E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2E50u;
label_1d2e50:
    // 0x1d2e50: 0xc0733e2  jal         func_1CCF88
    ctx->pc = 0x1D2E50u;
    SET_GPR_U32(ctx, 31, 0x1D2E58u);
    ctx->pc = 0x1D2E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2E50u;
    // 0x1d2e54: 0x26040380  addiu       $a0, $s0, 0x380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCF88u, 0x1D2E50u, 0x1D2E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2E58u;
label_1d2e58:
    // 0x1d2e58: 0xc06e3e6  jal         func_1B8F98
    ctx->pc = 0x1D2E58u;
    SET_GPR_U32(ctx, 31, 0x1D2E60u);
    ctx->pc = 0x1D2E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2E58u;
    // 0x1d2e5c: 0x26040450  addiu       $a0, $s0, 0x450 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8F98u, 0x1D2E58u, 0x1D2E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2E60u;
label_1d2e60:
    // 0x1d2e60: 0xc06e3e6  jal         func_1B8F98
    ctx->pc = 0x1D2E60u;
    SET_GPR_U32(ctx, 31, 0x1D2E68u);
    ctx->pc = 0x1D2E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2E60u;
    // 0x1d2e64: 0x26040640  addiu       $a0, $s0, 0x640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8F98u, 0x1D2E60u, 0x1D2E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2E68u;
label_1d2e68:
    // 0x1d2e68: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1d2e68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2e6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d2e6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d2e70: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d2e70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d2e74: 0x3e00008  jr          $ra
    ctx->pc = 0x1D2E74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D2E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2E74u;
        // 0x1d2e78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D2E74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D2E7Cu;
    // 0x1d2e7c: 0x0  nop
    ctx->pc = 0x1d2e7cu;
    // NOP
    ctx->pc = 0x1d2e80u;
}
