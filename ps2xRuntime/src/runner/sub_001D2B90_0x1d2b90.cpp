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

// Function: sub_001D2B90
// Address: 0x1d2b90 - 0x1d2d68
void sub_001D2B90_0x1d2b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D2B90_0x1d2b90");
#endif

    switch (ctx->pc) {
        case 0x1d2bc0u: goto label_1d2bc0;
        case 0x1d2bd0u: goto label_1d2bd0;
        case 0x1d2be0u: goto label_1d2be0;
        case 0x1d2c34u: goto label_1d2c34;
        case 0x1d2c4cu: goto label_1d2c4c;
        case 0x1d2c58u: goto label_1d2c58;
        case 0x1d2c88u: goto label_1d2c88;
        case 0x1d2c90u: goto label_1d2c90;
        case 0x1d2c98u: goto label_1d2c98;
        case 0x1d2ca0u: goto label_1d2ca0;
        case 0x1d2ce0u: goto label_1d2ce0;
        case 0x1d2d20u: goto label_1d2d20;
        case 0x1d2d34u: goto label_1d2d34;
        case 0x1d2d44u: goto label_1d2d44;
        default: break;
    }

    ctx->pc = 0x1d2b90u;

    // 0x1d2b90: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1d2b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1d2b94: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1d2b94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1d2b98: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1d2b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1d2b9c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1d2b9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2ba0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1d2ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1d2ba4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d2ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d2ba8: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x1d2ba8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1d2bac: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x1d2bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1d2bb0: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1D2BB0u;
    {
        const bool branch_taken_0x1d2bb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2BB0u;
        // 0x1d2bb4: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2bb0) {
            ctx->pc = 0x1D2BF8u;
            goto label_1d2bf8;
        }
    }
    ctx->pc = 0x1D2BB8u;
    // 0x1d2bb8: 0xc074736  jal         func_1D1CD8
    ctx->pc = 0x1D2BB8u;
    SET_GPR_U32(ctx, 31, 0x1D2BC0u);
    ctx->pc = 0x1D1CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1CD8u, 0x1D2BB8u, 0x1D2BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2BC0u;
label_1d2bc0:
    // 0x1d2bc0: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1D2BC0u;
    {
        const bool branch_taken_0x1d2bc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d2bc0) {
            ctx->pc = 0x1D2BC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D2BC0u;
            // 0x1d2bc4: 0x8e420010  lw          $v0, 0x10($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D2BF0u;
            goto label_1d2bf0;
        }
    }
    ctx->pc = 0x1D2BC8u;
    // 0x1d2bc8: 0xc073b4e  jal         func_1CED38
    ctx->pc = 0x1D2BC8u;
    SET_GPR_U32(ctx, 31, 0x1D2BD0u);
    ctx->pc = 0x1D2BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2BC8u;
    // 0x1d2bcc: 0x26440430  addiu       $a0, $s2, 0x430 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CED38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CED38u, 0x1D2BC8u, 0x1D2BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2BD0u;
label_1d2bd0:
    // 0x1d2bd0: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D2BD0u;
    {
        const bool branch_taken_0x1d2bd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d2bd0) {
            ctx->pc = 0x1D2BD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D2BD0u;
            // 0x1d2bd4: 0x8e420010  lw          $v0, 0x10($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D2BF0u;
            goto label_1d2bf0;
        }
    }
    ctx->pc = 0x1D2BD8u;
    // 0x1d2bd8: 0xc075106  jal         func_1D4418
    ctx->pc = 0x1D2BD8u;
    SET_GPR_U32(ctx, 31, 0x1D2BE0u);
    ctx->pc = 0x1D2BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2BD8u;
    // 0x1d2bdc: 0x26440360  addiu       $a0, $s2, 0x360 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4418u, 0x1D2BD8u, 0x1D2BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2BE0u;
label_1d2be0:
    // 0x1d2be0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D2BE0u;
    {
        const bool branch_taken_0x1d2be0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2BE0u;
        // 0x1d2be4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2be0) {
            ctx->pc = 0x1D2BECu;
            goto label_1d2bec;
        }
    }
    ctx->pc = 0x1D2BE8u;
    // 0x1d2be8: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x1d2be8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
label_1d2bec:
    // 0x1d2bec: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x1d2becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_1d2bf0:
    // 0x1d2bf0: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x1D2BF0u;
    {
        const bool branch_taken_0x1d2bf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2BF0u;
        // 0x1d2bf4: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2bf0) {
            ctx->pc = 0x1D2D20u;
            goto label_1d2d20;
        }
    }
    ctx->pc = 0x1D2BF8u;
label_1d2bf8:
    // 0x1d2bf8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d2bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1d2bfc: 0xc440ec90  lwc1        $f0, -0x1370($v0)
    ctx->pc = 0x1d2bfcu;
    { uint32_t bits = FAST_READ32(0x50EC90u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d2c00: 0x26500070  addiu       $s0, $s2, 0x70
    ctx->pc = 0x1d2c00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
    // 0x1d2c04: 0xc461ec94  lwc1        $f1, -0x136C($v1)
    ctx->pc = 0x1d2c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294962324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d2c08: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1d2c08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2c0c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1d2c0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1d2c10: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1d2c10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1d2c14: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1d2c14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d2c18: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1d2c18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1d2c1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d2c1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2c20: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1d2c20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1d2c24: 0x26510170  addiu       $s1, $s2, 0x170
    ctx->pc = 0x1d2c24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 368));
    // 0x1d2c28: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1d2c28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1d2c2c: 0xc068818  jal         func_1A2060
    ctx->pc = 0x1D2C2Cu;
    SET_GPR_U32(ctx, 31, 0x1D2C34u);
    ctx->pc = 0x1D2C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2C2Cu;
    // 0x1d2c30: 0xe7b4000c  swc1        $f20, 0xC($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2060u, 0x1D2C2Cu, 0x1D2C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2C34u;
label_1d2c34:
    // 0x1d2c34: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d2c34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1d2c38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d2c38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2c3c: 0xc44cec98  lwc1        $f12, -0x1368($v0)
    ctx->pc = 0x1d2c3cu;
    { uint32_t bits = FAST_READ32(0x50EC98u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d2c40: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d2c40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d2c44: 0xc068848  jal         func_1A2120
    ctx->pc = 0x1D2C44u;
    SET_GPR_U32(ctx, 31, 0x1D2C4Cu);
    ctx->pc = 0x1D2C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2C44u;
    // 0x1d2c48: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2120u, 0x1D2C44u, 0x1D2C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2C4Cu;
label_1d2c4c:
    // 0x1d2c4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d2c4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2c50: 0xc06887a  jal         func_1A21E8
    ctx->pc = 0x1D2C50u;
    SET_GPR_U32(ctx, 31, 0x1D2C58u);
    ctx->pc = 0x1D2C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2C50u;
    // 0x1d2c54: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A21E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A21E8u, 0x1D2C50u, 0x1D2C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2C58u;
label_1d2c58:
    // 0x1d2c58: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d2c58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1d2c5c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1d2c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x1d2c60: 0xc440ec9c  lwc1        $f0, -0x1364($v0)
    ctx->pc = 0x1d2c60u;
    { uint32_t bits = FAST_READ32(0x50EC9Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d2c64: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1d2c64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2c68: 0xc461eca0  lwc1        $f1, -0x1360($v1)
    ctx->pc = 0x1d2c68u;
    { uint32_t bits = FAST_READ32(0x50ECA0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d2c6c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1d2c6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d2c70: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1d2c70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1d2c74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d2c74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2c78: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1d2c78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1d2c7c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1d2c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1d2c80: 0xc06e4dc  jal         func_1B9370
    ctx->pc = 0x1D2C80u;
    SET_GPR_U32(ctx, 31, 0x1D2C88u);
    ctx->pc = 0x1D2C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2C80u;
    // 0x1d2c84: 0xe7b4000c  swc1        $f20, 0xC($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9370u, 0x1D2C80u, 0x1D2C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2C88u;
label_1d2c88:
    // 0x1d2c88: 0xc06e552  jal         func_1B9548
    ctx->pc = 0x1D2C88u;
    SET_GPR_U32(ctx, 31, 0x1D2C90u);
    ctx->pc = 0x1D2C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2C88u;
    // 0x1d2c8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9548u, 0x1D2C88u, 0x1D2C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2C90u;
label_1d2c90:
    // 0x1d2c90: 0xc0753c8  jal         func_1D4F20
    ctx->pc = 0x1D2C90u;
    SET_GPR_U32(ctx, 31, 0x1D2C98u);
    ctx->pc = 0x1D2C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2C90u;
    // 0x1d2c94: 0x26440360  addiu       $a0, $s2, 0x360 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4F20u, 0x1D2C90u, 0x1D2C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2C98u;
label_1d2c98:
    // 0x1d2c98: 0xc073b50  jal         func_1CED40
    ctx->pc = 0x1D2C98u;
    SET_GPR_U32(ctx, 31, 0x1D2CA0u);
    ctx->pc = 0x1D2C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2C98u;
    // 0x1d2c9c: 0x26440430  addiu       $a0, $s2, 0x430 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CED40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CED40u, 0x1D2C98u, 0x1D2CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2CA0u;
label_1d2ca0:
    // 0x1d2ca0: 0x8e420cb0  lw          $v0, 0xCB0($s2)
    ctx->pc = 0x1d2ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3248)));
    // 0x1d2ca4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1D2CA4u;
    {
        const bool branch_taken_0x1d2ca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2CA4u;
        // 0x1d2ca8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2ca4) {
            ctx->pc = 0x1D2D20u;
            goto label_1d2d20;
        }
    }
    ctx->pc = 0x1D2CACu;
    // 0x1d2cac: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1d2cacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x1d2cb0: 0xc440ecb0  lwc1        $f0, -0x1350($v0)
    ctx->pc = 0x1d2cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294962352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d2cb4: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x1d2cb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1d2cb8: 0xc461ecb4  lwc1        $f1, -0x134C($v1)
    ctx->pc = 0x1d2cb8u;
    { uint32_t bits = FAST_READ32(0x50ECB4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d2cbc: 0x265107e0  addiu       $s1, $s2, 0x7E0
    ctx->pc = 0x1d2cbcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 2016));
    // 0x1d2cc0: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1d2cc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1d2cc4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d2cc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2cc8: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x1d2cc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1d2ccc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d2cccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2cd0: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x1d2cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x1d2cd4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1d2cd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d2cd8: 0xc075a58  jal         func_1D6960
    ctx->pc = 0x1D2CD8u;
    SET_GPR_U32(ctx, 31, 0x1D2CE0u);
    ctx->pc = 0x1D2CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2CD8u;
    // 0x1d2cdc: 0xe614000c  swc1        $f20, 0xC($s0) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6960u, 0x1D2CD8u, 0x1D2CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2CE0u;
label_1d2ce0:
    // 0x1d2ce0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d2ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1d2ce4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1d2ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x1d2ce8: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x1d2ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d2cec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d2cecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2cf0: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x1d2cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d2cf4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d2cf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2cf8: 0xc442ecb8  lwc1        $f2, -0x1348($v0)
    ctx->pc = 0x1d2cf8u;
    { uint32_t bits = FAST_READ32(0x50ECB8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d2cfc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1d2cfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d2d00: 0xc463ecbc  lwc1        $f3, -0x1344($v1)
    ctx->pc = 0x1d2d00u;
    { uint32_t bits = FAST_READ32(0x50ECBCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1d2d04: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1d2d04u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1d2d08: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x1d2d08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x1d2d0c: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1d2d0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1d2d10: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x1d2d10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1d2d14: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x1d2d14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1d2d18: 0xc075a60  jal         func_1D6980
    ctx->pc = 0x1D2D18u;
    SET_GPR_U32(ctx, 31, 0x1D2D20u);
    ctx->pc = 0x1D2D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2D18u;
    // 0x1d2d1c: 0xe614000c  swc1        $f20, 0xC($s0) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6980u, 0x1D2D18u, 0x1D2D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2D20u;
label_1d2d20:
    // 0x1d2d20: 0x8e420060  lw          $v0, 0x60($s2)
    ctx->pc = 0x1d2d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x1d2d24: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D2D24u;
    {
        const bool branch_taken_0x1d2d24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2D24u;
        // 0x1d2d28: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2d24) {
            ctx->pc = 0x1D2D4Cu;
            goto label_1d2d4c;
        }
    }
    ctx->pc = 0x1D2D2Cu;
    // 0x1d2d2c: 0xc074742  jal         func_1D1D08
    ctx->pc = 0x1D2D2Cu;
    SET_GPR_U32(ctx, 31, 0x1D2D34u);
    ctx->pc = 0x1D2D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2D2Cu;
    // 0x1d2d30: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1D08u, 0x1D2D2Cu, 0x1D2D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2D34u;
label_1d2d34:
    // 0x1d2d34: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D2D34u;
    {
        const bool branch_taken_0x1d2d34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2D34u;
        // 0x1d2d38: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2d34) {
            ctx->pc = 0x1D2D4Cu;
            goto label_1d2d4c;
        }
    }
    ctx->pc = 0x1D2D3Cu;
    // 0x1d2d3c: 0xc055502  jal         func_155408
    ctx->pc = 0x1D2D3Cu;
    SET_GPR_U32(ctx, 31, 0x1D2D44u);
    ctx->pc = 0x155408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155408u, 0x1D2D3Cu, 0x1D2D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2D44u;
label_1d2d44:
    // 0x1d2d44: 0xae400060  sw          $zero, 0x60($s2)
    ctx->pc = 0x1d2d44u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 0));
    // 0x1d2d48: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1d2d48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1d2d4c:
    // 0x1d2d4c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1d2d4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d2d50: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1d2d50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d2d54: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d2d54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d2d58: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x1d2d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1d2d5c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D2D5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D2D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2D5Cu;
        // 0x1d2d60: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D2D5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D2D64u;
    // 0x1d2d64: 0x0  nop
    ctx->pc = 0x1d2d64u;
    // NOP
    ctx->pc = 0x1d2d68u;
}
