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

// Function: sub_001A1C80
// Address: 0x1a1c80 - 0x1a1db8
void sub_001A1C80_0x1a1c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A1C80_0x1a1c80");
#endif

    switch (ctx->pc) {
        case 0x1a1c80u: goto label_1a1c80;
        case 0x1a1c84u: goto label_1a1c84;
        case 0x1a1c88u: goto label_1a1c88;
        case 0x1a1c8cu: goto label_1a1c8c;
        case 0x1a1c90u: goto label_1a1c90;
        case 0x1a1c94u: goto label_1a1c94;
        case 0x1a1c98u: goto label_1a1c98;
        case 0x1a1c9cu: goto label_1a1c9c;
        case 0x1a1ca0u: goto label_1a1ca0;
        case 0x1a1ca4u: goto label_1a1ca4;
        case 0x1a1ca8u: goto label_1a1ca8;
        case 0x1a1cacu: goto label_1a1cac;
        case 0x1a1cb0u: goto label_1a1cb0;
        case 0x1a1cb4u: goto label_1a1cb4;
        case 0x1a1cb8u: goto label_1a1cb8;
        case 0x1a1cbcu: goto label_1a1cbc;
        case 0x1a1cc0u: goto label_1a1cc0;
        case 0x1a1cc4u: goto label_1a1cc4;
        case 0x1a1cc8u: goto label_1a1cc8;
        case 0x1a1cccu: goto label_1a1ccc;
        case 0x1a1cd0u: goto label_1a1cd0;
        case 0x1a1cd4u: goto label_1a1cd4;
        case 0x1a1cd8u: goto label_1a1cd8;
        case 0x1a1cdcu: goto label_1a1cdc;
        case 0x1a1ce0u: goto label_1a1ce0;
        case 0x1a1ce4u: goto label_1a1ce4;
        case 0x1a1ce8u: goto label_1a1ce8;
        case 0x1a1cecu: goto label_1a1cec;
        case 0x1a1cf0u: goto label_1a1cf0;
        case 0x1a1cf4u: goto label_1a1cf4;
        case 0x1a1cf8u: goto label_1a1cf8;
        case 0x1a1cfcu: goto label_1a1cfc;
        case 0x1a1d00u: goto label_1a1d00;
        case 0x1a1d04u: goto label_1a1d04;
        case 0x1a1d08u: goto label_1a1d08;
        case 0x1a1d0cu: goto label_1a1d0c;
        case 0x1a1d10u: goto label_1a1d10;
        case 0x1a1d14u: goto label_1a1d14;
        case 0x1a1d18u: goto label_1a1d18;
        case 0x1a1d1cu: goto label_1a1d1c;
        case 0x1a1d20u: goto label_1a1d20;
        case 0x1a1d24u: goto label_1a1d24;
        case 0x1a1d28u: goto label_1a1d28;
        case 0x1a1d2cu: goto label_1a1d2c;
        case 0x1a1d30u: goto label_1a1d30;
        case 0x1a1d34u: goto label_1a1d34;
        case 0x1a1d38u: goto label_1a1d38;
        case 0x1a1d3cu: goto label_1a1d3c;
        case 0x1a1d40u: goto label_1a1d40;
        case 0x1a1d44u: goto label_1a1d44;
        case 0x1a1d48u: goto label_1a1d48;
        case 0x1a1d4cu: goto label_1a1d4c;
        case 0x1a1d50u: goto label_1a1d50;
        case 0x1a1d54u: goto label_1a1d54;
        case 0x1a1d58u: goto label_1a1d58;
        case 0x1a1d5cu: goto label_1a1d5c;
        case 0x1a1d60u: goto label_1a1d60;
        case 0x1a1d64u: goto label_1a1d64;
        case 0x1a1d68u: goto label_1a1d68;
        case 0x1a1d6cu: goto label_1a1d6c;
        case 0x1a1d70u: goto label_1a1d70;
        case 0x1a1d74u: goto label_1a1d74;
        case 0x1a1d78u: goto label_1a1d78;
        case 0x1a1d7cu: goto label_1a1d7c;
        case 0x1a1d80u: goto label_1a1d80;
        case 0x1a1d84u: goto label_1a1d84;
        case 0x1a1d88u: goto label_1a1d88;
        case 0x1a1d8cu: goto label_1a1d8c;
        case 0x1a1d90u: goto label_1a1d90;
        case 0x1a1d94u: goto label_1a1d94;
        case 0x1a1d98u: goto label_1a1d98;
        case 0x1a1d9cu: goto label_1a1d9c;
        case 0x1a1da0u: goto label_1a1da0;
        case 0x1a1da4u: goto label_1a1da4;
        case 0x1a1da8u: goto label_1a1da8;
        case 0x1a1dacu: goto label_1a1dac;
        case 0x1a1db0u: goto label_1a1db0;
        case 0x1a1db4u: goto label_1a1db4;
        default: break;
    }

    ctx->pc = 0x1a1c80u;

label_1a1c80:
    // 0x1a1c80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a1c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1a1c84:
    // 0x1a1c84: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a1c84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1a1c88:
    // 0x1a1c88: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a1c88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a1c8c:
    // 0x1a1c8c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1a1c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1a1c90:
    // 0x1a1c90: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a1c90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a1c94:
    // 0x1a1c94: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a1c94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a1c98:
    // 0x1a1c98: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a1c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1a1c9c:
    // 0x1a1c9c: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x1a1c9cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_1a1ca0:
    // 0x1a1ca0: 0x260200d0  addiu       $v0, $s0, 0xD0
    ctx->pc = 0x1a1ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
label_1a1ca4:
    // 0x1a1ca4: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x1a1ca4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1a1ca8:
    // 0x1a1ca8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a1ca8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a1cac:
    // 0x1a1cac: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1a1cacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1a1cb0:
    // 0x1a1cb0: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1a1cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_1a1cb4:
    // 0x1a1cb4: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1a1cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_1a1cb8:
    // 0x1a1cb8: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x1a1cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
label_1a1cbc:
    // 0x1a1cbc: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1a1cbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_1a1cc0:
    // 0x1a1cc0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1a1cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_1a1cc4:
    // 0x1a1cc4: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1a1cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_1a1cc8:
    // 0x1a1cc8: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1a1cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_1a1ccc:
    // 0x1a1ccc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a1cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a1cd0:
    // 0x1a1cd0: 0xae0000c4  sw          $zero, 0xC4($s0)
    ctx->pc = 0x1a1cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 0));
label_1a1cd4:
    // 0x1a1cd4: 0xae0000ec  sw          $zero, 0xEC($s0)
    ctx->pc = 0x1a1cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 0));
label_1a1cd8:
    // 0x1a1cd8: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1a1cd8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1a1cdc:
    // 0x1a1cdc: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x1a1cdcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_1a1ce0:
    // 0x1a1ce0: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x1a1ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_1a1ce4:
    // 0x1a1ce4: 0x60f809  jalr        $v1
label_1a1ce8:
    if (ctx->pc == 0x1A1CE8u) {
        ctx->pc = 0x1A1CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1CE4u;
        // 0x1a1ce8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1CECu;
        goto label_1a1cec;
    }
    ctx->pc = 0x1A1CE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A1CECu);
        ctx->pc = 0x1A1CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1CE4u;
        // 0x1a1ce8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1CE4u, 0x1A1CECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A1CECu;
label_1a1cec:
    // 0x1a1cec: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a1cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a1cf0:
    // 0x1a1cf0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a1cf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a1cf4:
    // 0x1a1cf4: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1a1cf4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1a1cf8:
    // 0x1a1cf8: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1a1cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1a1cfc:
    // 0x1a1cfc: 0x60f809  jalr        $v1
label_1a1d00:
    if (ctx->pc == 0x1A1D00u) {
        ctx->pc = 0x1A1D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1CFCu;
        // 0x1a1d00: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1D04u;
        goto label_1a1d04;
    }
    ctx->pc = 0x1A1CFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A1D04u);
        ctx->pc = 0x1A1D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1CFCu;
        // 0x1a1d00: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1CFCu, 0x1A1D04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A1D04u;
label_1a1d04:
    // 0x1a1d04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a1d04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a1d08:
    // 0x1a1d08: 0xc068a44  jal         func_1A2910
label_1a1d0c:
    if (ctx->pc == 0x1A1D0Cu) {
        ctx->pc = 0x1A1D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1D08u;
        // 0x1a1d0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1D10u;
        goto label_1a1d10;
    }
    ctx->pc = 0x1A1D08u;
    SET_GPR_U32(ctx, 31, 0x1A1D10u);
    ctx->pc = 0x1A1D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1D08u;
    // 0x1a1d0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2910u, 0x1A1D08u, 0x1A1D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1D10u;
label_1a1d10:
    // 0x1a1d10: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x1a1d10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a1d14:
    // 0x1a1d14: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x1a1d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1a1d18:
    // 0x1a1d18: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1a1d18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1a1d1c:
    // 0x1a1d1c: 0x84c40020  lh          $a0, 0x20($a2)
    ctx->pc = 0x1a1d1cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 32)));
label_1a1d20:
    // 0x1a1d20: 0xa3a00010  sb          $zero, 0x10($sp)
    ctx->pc = 0x1a1d20u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 0));
label_1a1d24:
    // 0x1a1d24: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x1a1d24u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
label_1a1d28:
    // 0x1a1d28: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1a1d28u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_1a1d2c:
    // 0x1a1d2c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1a1d2cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_1a1d30:
    // 0x1a1d30: 0x8cc20024  lw          $v0, 0x24($a2)
    ctx->pc = 0x1a1d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
label_1a1d34:
    // 0x1a1d34: 0x40f809  jalr        $v0
label_1a1d38:
    if (ctx->pc == 0x1A1D38u) {
        ctx->pc = 0x1A1D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1D34u;
        // 0x1a1d38: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1D3Cu;
        goto label_1a1d3c;
    }
    ctx->pc = 0x1A1D34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A1D3Cu);
        ctx->pc = 0x1A1D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1D34u;
        // 0x1a1d38: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1D34u, 0x1A1D3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A1D3Cu;
label_1a1d3c:
    // 0x1a1d3c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1a1d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a1d40:
    // 0x1a1d40: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1a1d40u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1a1d44:
    // 0x1a1d44: 0x84640090  lh          $a0, 0x90($v1)
    ctx->pc = 0x1a1d44u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 144)));
label_1a1d48:
    // 0x1a1d48: 0x8c620094  lw          $v0, 0x94($v1)
    ctx->pc = 0x1a1d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
label_1a1d4c:
    // 0x1a1d4c: 0x40f809  jalr        $v0
label_1a1d50:
    if (ctx->pc == 0x1A1D50u) {
        ctx->pc = 0x1A1D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1D4Cu;
        // 0x1a1d50: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1D54u;
        goto label_1a1d54;
    }
    ctx->pc = 0x1A1D4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A1D54u);
        ctx->pc = 0x1A1D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1D4Cu;
        // 0x1a1d50: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1D4Cu, 0x1A1D54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A1D54u;
label_1a1d54:
    // 0x1a1d54: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a1d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a1d58:
    // 0x1a1d58: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1a1d58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1a1d5c:
    // 0x1a1d5c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a1d5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a1d60:
    // 0x1a1d60: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1a1d60u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_1a1d64:
    // 0x1a1d64: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1a1d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1a1d68:
    // 0x1a1d68: 0x60f809  jalr        $v1
label_1a1d6c:
    if (ctx->pc == 0x1A1D6Cu) {
        ctx->pc = 0x1A1D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1D68u;
        // 0x1a1d6c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1D70u;
        goto label_1a1d70;
    }
    ctx->pc = 0x1A1D68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A1D70u);
        ctx->pc = 0x1A1D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1D68u;
        // 0x1a1d6c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1D68u, 0x1A1D70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A1D70u;
label_1a1d70:
    // 0x1a1d70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a1d70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a1d74:
    // 0x1a1d74: 0xc068846  jal         func_1A2118
label_1a1d78:
    if (ctx->pc == 0x1A1D78u) {
        ctx->pc = 0x1A1D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1D74u;
        // 0x1a1d78: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1D7Cu;
        goto label_1a1d7c;
    }
    ctx->pc = 0x1A1D74u;
    SET_GPR_U32(ctx, 31, 0x1A1D7Cu);
    ctx->pc = 0x1A1D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1D74u;
    // 0x1a1d78: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2118u, 0x1A1D74u, 0x1A1D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1D7Cu;
label_1a1d7c:
    // 0x1a1d7c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1a1d7cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1a1d80:
    // 0x1a1d80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a1d80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a1d84:
    // 0x1a1d84: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1a1d84u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1a1d88:
    // 0x1a1d88: 0xc068848  jal         func_1A2120
label_1a1d8c:
    if (ctx->pc == 0x1A1D8Cu) {
        ctx->pc = 0x1A1D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1D88u;
        // 0x1a1d8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1D90u;
        goto label_1a1d90;
    }
    ctx->pc = 0x1A1D88u;
    SET_GPR_U32(ctx, 31, 0x1A1D90u);
    ctx->pc = 0x1A1D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1D88u;
    // 0x1a1d8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2120u, 0x1A1D88u, 0x1A1D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1D90u;
label_1a1d90:
    // 0x1a1d90: 0x3c01461c  lui         $at, 0x461C
    ctx->pc = 0x1a1d90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17948 << 16));
label_1a1d94:
    // 0x1a1d94: 0x34214000  ori         $at, $at, 0x4000
    ctx->pc = 0x1a1d94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16384);
label_1a1d98:
    // 0x1a1d98: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a1d98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a1d9c:
    // 0x1a1d9c: 0xae0000fc  sw          $zero, 0xFC($s0)
    ctx->pc = 0x1a1d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 0));
label_1a1da0:
    // 0x1a1da0: 0xe60000e4  swc1        $f0, 0xE4($s0)
    ctx->pc = 0x1a1da0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
label_1a1da4:
    // 0x1a1da4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1a1da4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1a1da8:
    // 0x1a1da8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a1da8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a1dac:
    // 0x1a1dac: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x1a1dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1a1db0:
    // 0x1a1db0: 0x3e00008  jr          $ra
label_1a1db4:
    if (ctx->pc == 0x1A1DB4u) {
        ctx->pc = 0x1A1DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1DB0u;
        // 0x1a1db4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1DB8u;
        goto label_fallthrough_0x1a1db0;
    }
    ctx->pc = 0x1A1DB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1DB0u;
        // 0x1a1db4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1DB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a1db0:
    ctx->pc = 0x1A1DB8u;
}
