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

// Function: sub_0016BBF0
// Address: 0x16bbf0 - 0x16bcf0
void sub_0016BBF0_0x16bbf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016BBF0_0x16bbf0");
#endif

    switch (ctx->pc) {
        case 0x16bc30u: goto label_16bc30;
        case 0x16bc58u: goto label_16bc58;
        case 0x16bc60u: goto label_16bc60;
        case 0x16bc68u: goto label_16bc68;
        case 0x16bc78u: goto label_16bc78;
        default: break;
    }

    ctx->pc = 0x16bbf0u;

    // 0x16bbf0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x16bbf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x16bbf4: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x16bbf4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x16bbf8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16bbf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x16bbfc: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x16bbfcu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x16bc00: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x16bc00u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x16bc04: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x16bc04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bc08: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x16bc08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x16bc0c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x16bc0cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x16bc10: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x16bc10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x16bc14: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16bc14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16bc18: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x16bc18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x16bc1c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16bc1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16bc20: 0x10820028  beq         $a0, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x16BC20u;
    {
        const bool branch_taken_0x16bc20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x16BC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BC20u;
        // 0x16bc24: 0xe7b50058  swc1        $f21, 0x58($sp) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bc20) {
            ctx->pc = 0x16BCC4u;
            goto label_16bcc4;
        }
    }
    ctx->pc = 0x16BC28u;
    // 0x16bc28: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x16BC28u;
    SET_GPR_U32(ctx, 31, 0x16BC30u);
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x16BC28u, 0x16BC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BC30u;
label_16bc30:
    // 0x16bc30: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16bc30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bc34: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x16bc34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x16bc38: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x16BC38u;
    {
        const bool branch_taken_0x16bc38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BC38u;
        // 0x16bc3c: 0x24910048  addiu       $s1, $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bc38) {
            ctx->pc = 0x16BCC4u;
            goto label_16bcc4;
        }
    }
    ctx->pc = 0x16BC40u;
    // 0x16bc40: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x16bc40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x16bc44: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x16bc44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x16bc48: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x16bc48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bc4c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x16bc4cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16bc50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16bc50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bc54: 0x0  nop
    ctx->pc = 0x16bc54u;
    // NOP
label_16bc58:
    // 0x16bc58: 0xc137826  jal         func_4DE098
    ctx->pc = 0x16BC58u;
    SET_GPR_U32(ctx, 31, 0x16BC60u);
    ctx->pc = 0x16BC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BC58u;
    // 0x16bc5c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x16BC58u, 0x16BC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BC60u;
label_16bc60:
    // 0x16bc60: 0xc0e409a  jal         func_390268
    ctx->pc = 0x16BC60u;
    SET_GPR_U32(ctx, 31, 0x16BC68u);
    ctx->pc = 0x16BC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BC60u;
    // 0x16bc64: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x16BC60u, 0x16BC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BC68u;
label_16bc68:
    // 0x16bc68: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x16BC68u;
    {
        const bool branch_taken_0x16bc68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16bc68) {
            ctx->pc = 0x16BC6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16BC68u;
            // 0x16bc6c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16BCB8u;
            goto label_16bcb8;
        }
    }
    ctx->pc = 0x16BC70u;
    // 0x16bc70: 0xc087502  jal         func_21D408
    ctx->pc = 0x16BC70u;
    SET_GPR_U32(ctx, 31, 0x16BC78u);
    ctx->pc = 0x16BC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BC70u;
    // 0x16bc74: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x16BC70u, 0x16BC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BC78u;
label_16bc78:
    // 0x16bc78: 0x16530008  bne         $s2, $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x16BC78u;
    {
        const bool branch_taken_0x16bc78 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        if (branch_taken_0x16bc78) {
            ctx->pc = 0x16BC9Cu;
            goto label_16bc9c;
        }
    }
    ctx->pc = 0x16BC80u;
    // 0x16bc80: 0x4615a032  c.eq.s      $f20, $f21
    ctx->pc = 0x16bc80u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16bc84: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x16bc84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x16bc88: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x16bc88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16bc8c: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x16BC8Cu;
    {
        const bool branch_taken_0x16bc8c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16bc8c) {
            ctx->pc = 0x16BC90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16BC8Cu;
            // 0x16bc90: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x16BC94u;
            goto label_16bc94;
        }
    }
    ctx->pc = 0x16BC94u;
label_16bc94:
    // 0x16bc94: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x16BC94u;
    {
        const bool branch_taken_0x16bc94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BC94u;
        // 0x16bc98: 0xe4400138  swc1        $f0, 0x138($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 312), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bc94) {
            ctx->pc = 0x16BCB4u;
            goto label_16bcb4;
        }
    }
    ctx->pc = 0x16BC9Cu;
label_16bc9c:
    // 0x16bc9c: 0x4615a032  c.eq.s      $f20, $f21
    ctx->pc = 0x16bc9cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16bca0: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x16bca0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x16bca4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x16bca4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16bca8: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x16BCA8u;
    {
        const bool branch_taken_0x16bca8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16bca8) {
            ctx->pc = 0x16BCACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16BCA8u;
            // 0x16bcac: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x16BCB0u;
            goto label_16bcb0;
        }
    }
    ctx->pc = 0x16BCB0u;
label_16bcb0:
    // 0x16bcb0: 0xe4400134  swc1        $f0, 0x134($v0)
    ctx->pc = 0x16bcb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 308), bits); }
label_16bcb4:
    // 0x16bcb4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x16bcb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_16bcb8:
    // 0x16bcb8: 0x2e020010  sltiu       $v0, $s0, 0x10
    ctx->pc = 0x16bcb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x16bcbc: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x16BCBCu;
    {
        const bool branch_taken_0x16bcbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16BCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BCBCu;
        // 0x16bcc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bcbc) {
            ctx->pc = 0x16BC58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16bc58;
        }
    }
    ctx->pc = 0x16BCC4u;
label_16bcc4:
    // 0x16bcc4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x16bcc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16bcc8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x16bcc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16bccc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16bcccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16bcd0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x16bcd0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16bcd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16bcd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16bcd8: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x16bcd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x16bcdc: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x16bcdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x16bce0: 0x3e00008  jr          $ra
    ctx->pc = 0x16BCE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16BCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BCE0u;
        // 0x16bce4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16BCE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16BCE8u;
    // 0x16bce8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x16bce8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x16bcec: 0x0  nop
    ctx->pc = 0x16bcecu;
    // NOP
    ctx->pc = 0x16bcf0u;
}
