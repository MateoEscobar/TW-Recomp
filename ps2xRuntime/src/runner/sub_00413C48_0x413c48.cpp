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

// Function: sub_00413C48
// Address: 0x413c48 - 0x413d90
void sub_00413C48_0x413c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00413C48_0x413c48");
#endif

    switch (ctx->pc) {
        case 0x413c80u: goto label_413c80;
        case 0x413c8cu: goto label_413c8c;
        case 0x413ca0u: goto label_413ca0;
        case 0x413cd4u: goto label_413cd4;
        case 0x413ce4u: goto label_413ce4;
        case 0x413cf0u: goto label_413cf0;
        case 0x413d00u: goto label_413d00;
        case 0x413d28u: goto label_413d28;
        case 0x413d3cu: goto label_413d3c;
        default: break;
    }

    ctx->pc = 0x413c48u;

    // 0x413c48: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x413c48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x413c4c: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x413c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x413c50: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x413c50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x413c54: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x413c54u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x413c58: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x413c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x413c5c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x413c5cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x413c60: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x413c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x413c64: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x413c64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x413c68: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x413c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x413c6c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x413c6cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x413c70: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x413c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x413c74: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x413c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x413c78: 0xc0cdfc2  jal         func_337F08
    ctx->pc = 0x413C78u;
    SET_GPR_U32(ctx, 31, 0x413C80u);
    ctx->pc = 0x413C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x413C78u;
    // 0x413c7c: 0xe7b400a0  swc1        $f20, 0xA0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x337F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337F08u, 0x413C78u, 0x413C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x413C80u;
label_413c80:
    // 0x413c80: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x413c80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x413c84: 0xc0cdfde  jal         func_337F78
    ctx->pc = 0x413C84u;
    SET_GPR_U32(ctx, 31, 0x413C8Cu);
    ctx->pc = 0x413C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x413C84u;
    // 0x413c88: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337F78u, 0x413C84u, 0x413C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x413C8Cu;
label_413c8c:
    // 0x413c8c: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x413c8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x413c90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x413c90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x413c94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x413c94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x413c98: 0xc10c1fa  jal         func_4307E8
    ctx->pc = 0x413C98u;
    SET_GPR_U32(ctx, 31, 0x413CA0u);
    ctx->pc = 0x413C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x413C98u;
    // 0x413c9c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x413C98u, 0x413CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x413CA0u;
label_413ca0:
    // 0x413ca0: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x413ca0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x413ca4: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x413ca4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x413ca8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x413ca8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x413cac: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x413cacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x413cb0: 0x3c013ff3  lui         $at, 0x3FF3
    ctx->pc = 0x413cb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16371 << 16));
    // 0x413cb4: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x413cb4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x413cb8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x413cb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x413cbc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x413cbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x413cc0: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x413cc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x413cc4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x413cc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x413cc8: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x413cc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x413ccc: 0xc136afa  jal         func_4DABE8
    ctx->pc = 0x413CCCu;
    SET_GPR_U32(ctx, 31, 0x413CD4u);
    ctx->pc = 0x413CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x413CCCu;
    // 0x413cd0: 0xe7a10020  swc1        $f1, 0x20($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x413CCCu, 0x413CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x413CD4u;
label_413cd4:
    // 0x413cd4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x413cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x413cd8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x413cd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x413cdc: 0xc136b18  jal         func_4DAC60
    ctx->pc = 0x413CDCu;
    SET_GPR_U32(ctx, 31, 0x413CE4u);
    ctx->pc = 0x413CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x413CDCu;
    // 0x413ce0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x413CDCu, 0x413CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x413CE4u;
label_413ce4:
    // 0x413ce4: 0x266400c0  addiu       $a0, $s3, 0xC0
    ctx->pc = 0x413ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 192));
    // 0x413ce8: 0xc0ce036  jal         func_3380D8
    ctx->pc = 0x413CE8u;
    SET_GPR_U32(ctx, 31, 0x413CF0u);
    ctx->pc = 0x413CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x413CE8u;
    // 0x413cec: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3380D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3380D8u, 0x413CE8u, 0x413CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x413CF0u;
label_413cf0:
    // 0x413cf0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x413CF0u;
    {
        const bool branch_taken_0x413cf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x413cf0) {
            ctx->pc = 0x413CF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x413CF0u;
            // 0x413cf4: 0xc6600144  lwc1        $f0, 0x144($s3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x413D08u;
            goto label_413d08;
        }
    }
    ctx->pc = 0x413CF8u;
    // 0x413cf8: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x413CF8u;
    {
        const bool branch_taken_0x413cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x413CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413CF8u;
        // 0x413cfc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x413cf8) {
            ctx->pc = 0x413D64u;
            goto label_413d64;
        }
    }
    ctx->pc = 0x413D00u;
label_413d00:
    // 0x413d00: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x413D00u;
    {
        const bool branch_taken_0x413d00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x413D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413D00u;
        // 0x413d04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x413d00) {
            ctx->pc = 0x413D64u;
            goto label_413d64;
        }
    }
    ctx->pc = 0x413D08u;
label_413d08:
    // 0x413d08: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x413d08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x413d0c: 0x8e620140  lw          $v0, 0x140($s3)
    ctx->pc = 0x413d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 320)));
    // 0x413d10: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x413d10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x413d14: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x413D14u;
    {
        const bool branch_taken_0x413d14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x413D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413D14u;
        // 0x413d18: 0x46000502  mul.s       $f20, $f0, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x413d14) {
            ctx->pc = 0x413D60u;
            goto label_413d60;
        }
    }
    ctx->pc = 0x413D1Cu;
    // 0x413d1c: 0x26710010  addiu       $s1, $s3, 0x10
    ctx->pc = 0x413d1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x413d20: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x413d20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x413d24: 0x0  nop
    ctx->pc = 0x413d24u;
    // NOP
label_413d28:
    // 0x413d28: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x413d28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x413d2c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x413d2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x413d30: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x413d30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x413d34: 0xc0cdef6  jal         func_337BD8
    ctx->pc = 0x413D34u;
    SET_GPR_U32(ctx, 31, 0x413D3Cu);
    ctx->pc = 0x413D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x413D34u;
    // 0x413d38: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337BD8u, 0x413D34u, 0x413D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x413D3Cu;
label_413d3c:
    // 0x413d3c: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x413d3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x413d40: 0x0  nop
    ctx->pc = 0x413d40u;
    // NOP
    // 0x413d44: 0x4501ffee  bc1t        . + 4 + (-0x12 << 2)
    ctx->pc = 0x413D44u;
    {
        const bool branch_taken_0x413d44 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x413D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413D44u;
        // 0x413d48: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x413d44) {
            ctx->pc = 0x413D00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_413d00;
        }
    }
    ctx->pc = 0x413D4Cu;
    // 0x413d4c: 0x8e620140  lw          $v0, 0x140($s3)
    ctx->pc = 0x413d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 320)));
    // 0x413d50: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x413d50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x413d54: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x413d54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x413d58: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x413D58u;
    {
        const bool branch_taken_0x413d58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x413D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413D58u;
        // 0x413d5c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x413d58) {
            ctx->pc = 0x413D28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_413d28;
        }
    }
    ctx->pc = 0x413D60u;
label_413d60:
    // 0x413d60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x413d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_413d64:
    // 0x413d64: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x413d64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x413d68: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x413d68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x413d6c: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x413d6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x413d70: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x413d70u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x413d74: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x413d74u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x413d78: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x413d78u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x413d7c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x413d7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x413d80: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x413d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x413d84: 0x3e00008  jr          $ra
    ctx->pc = 0x413D84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x413D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413D84u;
        // 0x413d88: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x413D84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x413D8Cu;
    // 0x413d8c: 0x0  nop
    ctx->pc = 0x413d8cu;
    // NOP
    ctx->pc = 0x413d90u;
}
