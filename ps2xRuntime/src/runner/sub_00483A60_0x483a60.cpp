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

// Function: sub_00483A60
// Address: 0x483a60 - 0x483b58
void sub_00483A60_0x483a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00483A60_0x483a60");
#endif

    switch (ctx->pc) {
        case 0x483b48u: goto label_483b48;
        default: break;
    }

    ctx->pc = 0x483a60u;

    // 0x483a60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x483a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x483a64: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x483a64u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x483a68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x483a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x483a6c: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x483a6cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x483a70: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x483a70u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x483a74: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x483a74u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x483a78: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x483a78u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x483a7c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x483a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x483a80: 0x24620090  addiu       $v0, $v1, 0x90
    ctx->pc = 0x483a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
    // 0x483a84: 0xac620094  sw          $v0, 0x94($v1)
    ctx->pc = 0x483a84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 148), GPR_U32(ctx, 2));
    // 0x483a88: 0xac620090  sw          $v0, 0x90($v1)
    ctx->pc = 0x483a88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 144), GPR_U32(ctx, 2));
    // 0x483a8c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x483a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x483a90: 0xac65001c  sw          $a1, 0x1C($v1)
    ctx->pc = 0x483a90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 5));
    // 0x483a94: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x483a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x483a98: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x483a98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x483a9c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x483a9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x483aa0: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x483aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    // 0x483aa4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x483aa4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x483aa8: 0x34840003  ori         $a0, $a0, 0x3
    ctx->pc = 0x483aa8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)3);
    // 0x483aac: 0xe4410028  swc1        $f1, 0x28($v0)
    ctx->pc = 0x483aacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x483ab0: 0xe4410014  swc1        $f1, 0x14($v0)
    ctx->pc = 0x483ab0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x483ab4: 0xe4610010  swc1        $f1, 0x10($v1)
    ctx->pc = 0x483ab4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x483ab8: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x483ab8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x483abc: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x483abcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x483ac0: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x483ac0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x483ac4: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x483ac4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x483ac8: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x483ac8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x483acc: 0xe4600028  swc1        $f0, 0x28($v1)
    ctx->pc = 0x483accu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
    // 0x483ad0: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x483ad0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x483ad4: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x483ad4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x483ad8: 0xe4600040  swc1        $f0, 0x40($v1)
    ctx->pc = 0x483ad8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 64), bits); }
    // 0x483adc: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x483adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x483ae0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x483ae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x483ae4: 0xac62001c  sw          $v0, 0x1C($v1)
    ctx->pc = 0x483ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
    // 0x483ae8: 0xac65005c  sw          $a1, 0x5C($v1)
    ctx->pc = 0x483ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 92), GPR_U32(ctx, 5));
    // 0x483aec: 0x24620050  addiu       $v0, $v1, 0x50
    ctx->pc = 0x483aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x483af0: 0xe4410028  swc1        $f1, 0x28($v0)
    ctx->pc = 0x483af0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x483af4: 0xe4410014  swc1        $f1, 0x14($v0)
    ctx->pc = 0x483af4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x483af8: 0xe4610050  swc1        $f1, 0x50($v1)
    ctx->pc = 0x483af8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 80), bits); }
    // 0x483afc: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x483afcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x483b00: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x483b00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x483b04: 0xe4600054  swc1        $f0, 0x54($v1)
    ctx->pc = 0x483b04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 84), bits); }
    // 0x483b08: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x483b08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x483b0c: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x483b0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x483b10: 0xe4600068  swc1        $f0, 0x68($v1)
    ctx->pc = 0x483b10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 104), bits); }
    // 0x483b14: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x483b14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x483b18: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x483b18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x483b1c: 0xe4600080  swc1        $f0, 0x80($v1)
    ctx->pc = 0x483b1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 128), bits); }
    // 0x483b20: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x483b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x483b24: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x483b24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x483b28: 0xac62005c  sw          $v0, 0x5C($v1)
    ctx->pc = 0x483b28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 92), GPR_U32(ctx, 2));
    // 0x483b2c: 0xac600098  sw          $zero, 0x98($v1)
    ctx->pc = 0x483b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 152), GPR_U32(ctx, 0));
    // 0x483b30: 0x3c040053  lui         $a0, 0x53
    ctx->pc = 0x483b30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)83 << 16));
    // 0x483b34: 0x2484ebc0  addiu       $a0, $a0, -0x1440
    ctx->pc = 0x483b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962112));
    // 0x483b38: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x483b38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x483b3c: 0xac60009c  sw          $zero, 0x9C($v1)
    ctx->pc = 0x483b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 156), GPR_U32(ctx, 0));
    // 0x483b40: 0xc11ff8e  jal         func_47FE38
    ctx->pc = 0x483B40u;
    SET_GPR_U32(ctx, 31, 0x483B48u);
    ctx->pc = 0x483B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x483B40u;
    // 0x483b44: 0xac6300a0  sw          $v1, 0xA0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 160), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47FE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47FE38u, 0x483B40u, 0x483B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x483B48u;
label_483b48:
    // 0x483b48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x483b48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x483b4c: 0x3e00008  jr          $ra
    ctx->pc = 0x483B4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x483B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x483B4Cu;
        // 0x483b50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x483B4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x483B54u;
    // 0x483b54: 0x0  nop
    ctx->pc = 0x483b54u;
    // NOP
    ctx->pc = 0x483b58u;
}
