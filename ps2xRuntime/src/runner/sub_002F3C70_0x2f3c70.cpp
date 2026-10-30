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

// Function: sub_002F3C70
// Address: 0x2f3c70 - 0x2f3db0
void sub_002F3C70_0x2f3c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F3C70_0x2f3c70");
#endif

    switch (ctx->pc) {
        case 0x2f3cc8u: goto label_2f3cc8;
        case 0x2f3cd0u: goto label_2f3cd0;
        case 0x2f3cd8u: goto label_2f3cd8;
        case 0x2f3cecu: goto label_2f3cec;
        case 0x2f3cf8u: goto label_2f3cf8;
        case 0x2f3d54u: goto label_2f3d54;
        case 0x2f3d6cu: goto label_2f3d6c;
        case 0x2f3d80u: goto label_2f3d80;
        default: break;
    }

    ctx->pc = 0x2f3c70u;

    // 0x2f3c70: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2f3c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2f3c74: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2f3c74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x2f3c78: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x2f3c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x2f3c7c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x2f3c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x2f3c80: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2f3c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2f3c84: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2f3c84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3c88: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x2f3c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x2f3c8c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2f3c8cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3c90: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x2f3c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x2f3c94: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2f3c94u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3c98: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x2f3c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x2f3c9c: 0x26710010  addiu       $s1, $s3, 0x10
    ctx->pc = 0x2f3c9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x2f3ca0: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x2f3ca0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2f3ca4: 0x24564b00  addiu       $s6, $v0, 0x4B00
    ctx->pc = 0x2f3ca4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x2f3ca8: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x2f3ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x2f3cac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f3cacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2f3cb0: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x2f3cb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
    // 0x2f3cb4: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x2f3cb4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
    // 0x2f3cb8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2f3cb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2f3cbc: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2f3cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2f3cc0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2f3cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f3cc4: 0x24550090  addiu       $s5, $v0, 0x90
    ctx->pc = 0x2f3cc4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
label_2f3cc8:
    // 0x2f3cc8: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2F3CC8u;
    SET_GPR_U32(ctx, 31, 0x2F3CD0u);
    ctx->pc = 0x2F3CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3CC8u;
    // 0x2f3ccc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2F3CC8u, 0x2F3CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3CD0u;
label_2f3cd0:
    // 0x2f3cd0: 0xc105e98  jal         func_417A60
    ctx->pc = 0x2F3CD0u;
    SET_GPR_U32(ctx, 31, 0x2F3CD8u);
    ctx->pc = 0x2F3CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3CD0u;
    // 0x2f3cd4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x417A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417A60u, 0x2F3CD0u, 0x2F3CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3CD8u;
label_2f3cd8:
    // 0x2f3cd8: 0x86b00002  lh          $s0, 0x2($s5)
    ctx->pc = 0x2f3cd8u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 2)));
    // 0x2f3cdc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f3cdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3ce0: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x2f3ce0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x2f3ce4: 0xc10587a  jal         func_4161E8
    ctx->pc = 0x2F3CE4u;
    SET_GPR_U32(ctx, 31, 0x2F3CECu);
    ctx->pc = 0x2F3CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3CE4u;
    // 0x2f3ce8: 0x2168021  addu        $s0, $s0, $s6 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x2F3CE4u, 0x2F3CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3CECu;
label_2f3cec:
    // 0x2f3cec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f3cecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3cf0: 0xc0cdb38  jal         func_336CE0
    ctx->pc = 0x2F3CF0u;
    SET_GPR_U32(ctx, 31, 0x2F3CF8u);
    ctx->pc = 0x2F3CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3CF0u;
    // 0x2f3cf4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2F3CF0u, 0x2F3CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3CF8u;
label_2f3cf8:
    // 0x2f3cf8: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2f3cf8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f3cfc: 0x0  nop
    ctx->pc = 0x2f3cfcu;
    // NOP
    // 0x2f3d00: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x2F3D00u;
    {
        const bool branch_taken_0x2f3d00 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f3d00) {
            ctx->pc = 0x2F3D04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F3D00u;
            // 0x2f3d04: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F3D14u;
            goto label_2f3d14;
        }
    }
    ctx->pc = 0x2F3D08u;
    // 0x2f3d08: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2f3d08u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2f3d0c: 0x240a02d  daddu       $s4, $s2, $zero
    ctx->pc = 0x2f3d0cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3d10: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2f3d10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2f3d14:
    // 0x2f3d14: 0x2e420003  sltiu       $v0, $s2, 0x3
    ctx->pc = 0x2f3d14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x2f3d18: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x2F3D18u;
    {
        const bool branch_taken_0x2f3d18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F3D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3D18u;
        // 0x2f3d1c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3d18) {
            ctx->pc = 0x2F3CC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f3cc8;
        }
    }
    ctx->pc = 0x2F3D20u;
    // 0x2f3d20: 0xa2740044  sb          $s4, 0x44($s3)
    ctx->pc = 0x2f3d20u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 68), (uint8_t)GPR_U32(ctx, 20));
    // 0x2f3d24: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2f3d24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2f3d28: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2f3d28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f3d2c: 0x328300ff  andi        $v1, $s4, 0xFF
    ctx->pc = 0x2f3d2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x2f3d30: 0x8c45bd30  lw          $a1, -0x42D0($v0)
    ctx->pc = 0x2f3d30u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x2f3d34: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x2f3d34u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2f3d38: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2f3d38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2f3d3c: 0x83300a  movz        $a2, $a0, $v1
    ctx->pc = 0x2f3d3cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 4));
    // 0x2f3d40: 0xae650028  sw          $a1, 0x28($s3)
    ctx->pc = 0x2f3d40u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 5));
    // 0x2f3d44: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f3d44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3d48: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f3d48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f3d4c: 0xc0bcf98  jal         func_2F3E60
    ctx->pc = 0x2F3D4Cu;
    SET_GPR_U32(ctx, 31, 0x2F3D54u);
    ctx->pc = 0x2F3D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3D4Cu;
    // 0x2f3d50: 0xae660024  sw          $a2, 0x24($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3E60u, 0x2F3D4Cu, 0x2F3D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3D54u;
label_2f3d54:
    // 0x2f3d54: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2f3d54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2f3d58: 0x8082002e  lb          $v0, 0x2E($a0)
    ctx->pc = 0x2f3d58u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 46)));
    // 0x2f3d5c: 0x1c400009  bgtz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F3D5Cu;
    {
        const bool branch_taken_0x2f3d5c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2F3D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3D5Cu;
        // 0x2f3d60: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3d5c) {
            ctx->pc = 0x2F3D84u;
            goto label_2f3d84;
        }
    }
    ctx->pc = 0x2F3D64u;
    // 0x2f3d64: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x2F3D64u;
    SET_GPR_U32(ctx, 31, 0x2F3D6Cu);
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2F3D64u, 0x2F3D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3D6Cu;
label_2f3d6c:
    // 0x2f3d6c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F3D6Cu;
    {
        const bool branch_taken_0x2f3d6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3D6Cu;
        // 0x2f3d70: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3d6c) {
            ctx->pc = 0x2F3D80u;
            goto label_2f3d80;
        }
    }
    ctx->pc = 0x2F3D74u;
    // 0x2f3d74: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x2f3d74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2f3d78: 0xc0bebdc  jal         func_2FAF70
    ctx->pc = 0x2F3D78u;
    SET_GPR_U32(ctx, 31, 0x2F3D80u);
    ctx->pc = 0x2F3D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3D78u;
    // 0x2f3d7c: 0x240607d0  addiu       $a2, $zero, 0x7D0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FAF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAF70u, 0x2F3D78u, 0x2F3D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3D80u;
label_2f3d80:
    // 0x2f3d80: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x2f3d80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2f3d84:
    // 0x2f3d84: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x2f3d84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f3d88: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x2f3d88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f3d8c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2f3d8cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f3d90: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x2f3d90u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f3d94: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x2f3d94u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f3d98: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x2f3d98u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f3d9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f3d9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f3da0: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x2f3da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2f3da4: 0x3e00008  jr          $ra
    ctx->pc = 0x2F3DA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F3DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3DA4u;
        // 0x2f3da8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F3DA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F3DACu;
    // 0x2f3dac: 0x0  nop
    ctx->pc = 0x2f3dacu;
    // NOP
    ctx->pc = 0x2f3db0u;
}
