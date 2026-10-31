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

// Function: sub_001D6DF8
// Address: 0x1d6df8 - 0x1d6e80
void sub_001D6DF8_0x1d6df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D6DF8_0x1d6df8");
#endif

    switch (ctx->pc) {
        case 0x1d6e10u: goto label_1d6e10;
        case 0x1d6e34u: goto label_1d6e34;
        case 0x1d6e44u: goto label_1d6e44;
        case 0x1d6e4cu: goto label_1d6e4c;
        case 0x1d6e54u: goto label_1d6e54;
        case 0x1d6e5cu: goto label_1d6e5c;
        default: break;
    }

    ctx->pc = 0x1d6df8u;

    // 0x1d6df8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d6df8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d6dfc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1d6dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1d6e00: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d6e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d6e04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d6e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d6e08: 0xc0758fc  jal         func_1D63F0
    ctx->pc = 0x1D6E08u;
    SET_GPR_U32(ctx, 31, 0x1D6E10u);
    ctx->pc = 0x1D6E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6E08u;
    // 0x1d6e0c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D63F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D63F0u, 0x1D6E08u, 0x1D6E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6E10u;
label_1d6e10:
    // 0x1d6e10: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1d6e10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x1d6e14: 0x3c110054  lui         $s1, 0x54
    ctx->pc = 0x1d6e14u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)84 << 16));
    // 0x1d6e18: 0x2463bb38  addiu       $v1, $v1, -0x44C8
    ctx->pc = 0x1d6e18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949688));
    // 0x1d6e1c: 0x26020250  addiu       $v0, $s0, 0x250
    ctx->pc = 0x1d6e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 592));
    // 0x1d6e20: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1d6e20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1d6e24: 0x263194a0  addiu       $s1, $s1, -0x6B60
    ctx->pc = 0x1d6e24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294939808));
    // 0x1d6e28: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d6e28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6e2c: 0xc068426  jal         func_1A1098
    ctx->pc = 0x1D6E2Cu;
    SET_GPR_U32(ctx, 31, 0x1D6E34u);
    ctx->pc = 0x1D6E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6E2Cu;
    // 0x1d6e30: 0xac510068  sw          $s1, 0x68($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 104), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1098u, 0x1D6E2Cu, 0x1D6E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6E34u;
label_1d6e34:
    // 0x1d6e34: 0x260202c0  addiu       $v0, $s0, 0x2C0
    ctx->pc = 0x1d6e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
    // 0x1d6e38: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d6e38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6e3c: 0xc068426  jal         func_1A1098
    ctx->pc = 0x1D6E3Cu;
    SET_GPR_U32(ctx, 31, 0x1D6E44u);
    ctx->pc = 0x1D6E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6E3Cu;
    // 0x1d6e40: 0xac510068  sw          $s1, 0x68($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 104), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1098u, 0x1D6E3Cu, 0x1D6E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6E44u;
label_1d6e44:
    // 0x1d6e44: 0xc0686fe  jal         func_1A1BF8
    ctx->pc = 0x1D6E44u;
    SET_GPR_U32(ctx, 31, 0x1D6E4Cu);
    ctx->pc = 0x1D6E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6E44u;
    // 0x1d6e48: 0x26040330  addiu       $a0, $s0, 0x330 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x1D6E44u, 0x1D6E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6E4Cu;
label_1d6e4c:
    // 0x1d6e4c: 0xc0686fe  jal         func_1A1BF8
    ctx->pc = 0x1D6E4Cu;
    SET_GPR_U32(ctx, 31, 0x1D6E54u);
    ctx->pc = 0x1D6E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6E4Cu;
    // 0x1d6e50: 0x26040430  addiu       $a0, $s0, 0x430 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x1D6E4Cu, 0x1D6E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6E54u;
label_1d6e54:
    // 0x1d6e54: 0xc0686fe  jal         func_1A1BF8
    ctx->pc = 0x1D6E54u;
    SET_GPR_U32(ctx, 31, 0x1D6E5Cu);
    ctx->pc = 0x1D6E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6E54u;
    // 0x1d6e58: 0x26040530  addiu       $a0, $s0, 0x530 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x1D6E54u, 0x1D6E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6E5Cu;
label_1d6e5c:
    // 0x1d6e5c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1d6e5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1d6e60: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d6e60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d6e64: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1d6e64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6e68: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d6e68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d6e6c: 0xe6000630  swc1        $f0, 0x630($s0)
    ctx->pc = 0x1d6e6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1584), bits); }
    // 0x1d6e70: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1d6e70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d6e74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d6e74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d6e78: 0x3e00008  jr          $ra
    ctx->pc = 0x1D6E78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D6E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6E78u;
        // 0x1d6e7c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6E78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D6E80u;
}
