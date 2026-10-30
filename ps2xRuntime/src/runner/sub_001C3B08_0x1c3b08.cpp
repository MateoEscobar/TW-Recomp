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

// Function: sub_001C3B08
// Address: 0x1c3b08 - 0x1c3d38
void sub_001C3B08_0x1c3b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C3B08_0x1c3b08");
#endif

    switch (ctx->pc) {
        case 0x1c3bbcu: goto label_1c3bbc;
        case 0x1c3bf0u: goto label_1c3bf0;
        case 0x1c3c04u: goto label_1c3c04;
        case 0x1c3c60u: goto label_1c3c60;
        case 0x1c3c70u: goto label_1c3c70;
        case 0x1c3cc4u: goto label_1c3cc4;
        case 0x1c3cd4u: goto label_1c3cd4;
        case 0x1c3d08u: goto label_1c3d08;
        case 0x1c3d18u: goto label_1c3d18;
        case 0x1c3d20u: goto label_1c3d20;
        default: break;
    }

    ctx->pc = 0x1c3b08u;

    // 0x1c3b08: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x1c3b08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x1c3b0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c3b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c3b10: 0x7fb10120  sq          $s1, 0x120($sp)
    ctx->pc = 0x1c3b10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 17));
    // 0x1c3b14: 0xe7b40140  swc1        $f20, 0x140($sp)
    ctx->pc = 0x1c3b14u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x1c3b18: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c3b18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3b1c: 0x7fb00130  sq          $s0, 0x130($sp)
    ctx->pc = 0x1c3b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 16));
    // 0x1c3b20: 0xffbf0110  sd          $ra, 0x110($sp)
    ctx->pc = 0x1c3b20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
    // 0x1c3b24: 0xa3a00000  sb          $zero, 0x0($sp)
    ctx->pc = 0x1c3b24u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c3b28: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c3b28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1c3b2c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1c3b2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1c3b30: 0x8e23042c  lw          $v1, 0x42C($s1)
    ctx->pc = 0x1c3b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1068)));
    // 0x1c3b34: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1C3B34u;
    {
        const bool branch_taken_0x1c3b34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C3B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3B34u;
        // 0x1c3b38: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3b34) {
            ctx->pc = 0x1C3B9Cu;
            goto label_1c3b9c;
        }
    }
    ctx->pc = 0x1C3B3Cu;
    // 0x1c3b3c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C3B3Cu;
    {
        const bool branch_taken_0x1c3b3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3B3Cu;
        // 0x1c3b40: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3b3c) {
            ctx->pc = 0x1C3B54u;
            goto label_1c3b54;
        }
    }
    ctx->pc = 0x1C3B44u;
    // 0x1c3b44: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C3B44u;
    {
        const bool branch_taken_0x1c3b44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3B44u;
        // 0x1c3b48: 0x26240040  addiu       $a0, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3b44) {
            ctx->pc = 0x1C3B64u;
            goto label_1c3b64;
        }
    }
    ctx->pc = 0x1C3B4Cu;
    // 0x1c3b4c: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x1C3B4Cu;
    {
        const bool branch_taken_0x1c3b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3b4c) {
            ctx->pc = 0x1C3BFCu;
            goto label_1c3bfc;
        }
    }
    ctx->pc = 0x1C3B54u;
label_1c3b54:
    // 0x1c3b54: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1C3B54u;
    {
        const bool branch_taken_0x1c3b54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C3B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3B54u;
        // 0x1c3b58: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3b54) {
            ctx->pc = 0x1C3BC4u;
            goto label_1c3bc4;
        }
    }
    ctx->pc = 0x1C3B5Cu;
    // 0x1c3b5c: 0x54620026  bnel        $v1, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1C3B5Cu;
    {
        const bool branch_taken_0x1c3b5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c3b5c) {
            ctx->pc = 0x1C3B60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C3B5Cu;
            // 0x1c3b60: 0xa3a00000  sb          $zero, 0x0($sp) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C3BF8u;
            goto label_1c3bf8;
        }
    }
    ctx->pc = 0x1C3B64u;
label_1c3b64:
    // 0x1c3b64: 0xc6210424  lwc1        $f1, 0x424($s1)
    ctx->pc = 0x1c3b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1060)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c3b68: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c3b68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c3b6c: 0x0  nop
    ctx->pc = 0x1c3b6cu;
    // NOP
    // 0x1c3b70: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1c3b70u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c3b74: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x1c3b74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x1c3b78: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1c3b78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c3b7c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1C3B7Cu;
    {
        const bool branch_taken_0x1c3b7c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C3B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3B7Cu;
        // 0x1c3b80: 0xc6220420  lwc1        $f2, 0x420($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3b7c) {
            ctx->pc = 0x1C3B88u;
            goto label_1c3b88;
        }
    }
    ctx->pc = 0x1C3B84u;
    // 0x1c3b84: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x1c3b84u;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
label_1c3b88:
    // 0x1c3b88: 0x0  nop
    ctx->pc = 0x1c3b88u;
    // NOP
    // 0x1c3b8c: 0x0  nop
    ctx->pc = 0x1c3b8cu;
    // NOP
    // 0x1c3b90: 0x460c1503  div.s       $f20, $f2, $f12
    ctx->pc = 0x1c3b90u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[2], ctx->f[12]); }
    // 0x1c3b94: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1C3B94u;
    {
        const bool branch_taken_0x1c3b94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3B94u;
        // 0x1c3b98: 0x26240040  addiu       $a0, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3b94) {
            ctx->pc = 0x1C3BFCu;
            goto label_1c3bfc;
        }
    }
    ctx->pc = 0x1C3B9Cu;
label_1c3b9c:
    // 0x1c3b9c: 0xc6200420  lwc1        $f0, 0x420($s1)
    ctx->pc = 0x1c3b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c3ba0: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x1c3ba0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
    // 0x1c3ba4: 0x24c650a8  addiu       $a2, $a2, 0x50A8
    ctx->pc = 0x1c3ba4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20648));
    // 0x1c3ba8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c3ba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3bac: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c3bacu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1c3bb0: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x1c3bb0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x1c3bb4: 0xc10ca04  jal         func_432810
    ctx->pc = 0x1C3BB4u;
    SET_GPR_U32(ctx, 31, 0x1C3BBCu);
    ctx->pc = 0x1C3BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3BB4u;
    // 0x1c3bb8: 0x240500fe  addiu       $a1, $zero, 0xFE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x1C3BB4u, 0x1C3BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3BBCu;
label_1c3bbc:
    // 0x1c3bbc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1C3BBCu;
    {
        const bool branch_taken_0x1c3bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3BBCu;
        // 0x1c3bc0: 0x26240040  addiu       $a0, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3bbc) {
            ctx->pc = 0x1C3BFCu;
            goto label_1c3bfc;
        }
    }
    ctx->pc = 0x1C3BC4u;
label_1c3bc4:
    // 0x1c3bc4: 0xc6200420  lwc1        $f0, 0x420($s1)
    ctx->pc = 0x1c3bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c3bc8: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x1c3bc8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
    // 0x1c3bcc: 0xc6210424  lwc1        $f1, 0x424($s1)
    ctx->pc = 0x1c3bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1060)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c3bd0: 0x24c650b0  addiu       $a2, $a2, 0x50B0
    ctx->pc = 0x1c3bd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20656));
    // 0x1c3bd4: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c3bd4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1c3bd8: 0x44071000  mfc1        $a3, $f2
    ctx->pc = 0x1c3bd8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x1c3bdc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c3bdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3be0: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c3be0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1c3be4: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x1c3be4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1c3be8: 0xc10ca04  jal         func_432810
    ctx->pc = 0x1C3BE8u;
    SET_GPR_U32(ctx, 31, 0x1C3BF0u);
    ctx->pc = 0x1C3BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3BE8u;
    // 0x1c3bec: 0x240500fe  addiu       $a1, $zero, 0xFE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x1C3BE8u, 0x1C3BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3BF0u;
label_1c3bf0:
    // 0x1c3bf0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C3BF0u;
    {
        const bool branch_taken_0x1c3bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3BF0u;
        // 0x1c3bf4: 0x26240040  addiu       $a0, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3bf0) {
            ctx->pc = 0x1C3BFCu;
            goto label_1c3bfc;
        }
    }
    ctx->pc = 0x1C3BF8u;
label_1c3bf8:
    // 0x1c3bf8: 0x26240040  addiu       $a0, $s1, 0x40
    ctx->pc = 0x1c3bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_1c3bfc:
    // 0x1c3bfc: 0xc073478  jal         func_1CD1E0
    ctx->pc = 0x1C3BFCu;
    SET_GPR_U32(ctx, 31, 0x1C3C04u);
    ctx->pc = 0x1C3C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3BFCu;
    // 0x1c3c00: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1E0u, 0x1C3BFCu, 0x1C3C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3C04u;
label_1c3c04:
    // 0x1c3c04: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c3c04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c3c08: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c3c08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1c3c0c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c3c0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c3c10: 0x46140028  max.s       $f0, $f0, $f20
    ctx->pc = 0x1c3c10u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[20]);
    // 0x1c3c14: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x1c3c14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x1c3c18: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1c3c18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x1c3c1c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1c3c1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c3c20: 0x46010529  min.s       $f20, $f0, $f1
    ctx->pc = 0x1c3c20u;
    ctx->f[20] = std::min(ctx->f[0], ctx->f[1]);
    // 0x1c3c24: 0x46146034  c.lt.s      $f12, $f20
    ctx->pc = 0x1c3c24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c3c28: 0x0  nop
    ctx->pc = 0x1c3c28u;
    // NOP
    // 0x1c3c2c: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x1C3C2Cu;
    {
        const bool branch_taken_0x1c3c2c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C3C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3C2Cu;
        // 0x1c3c30: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3c2c) {
            ctx->pc = 0x1C3C78u;
            goto label_1c3c78;
        }
    }
    ctx->pc = 0x1C3C34u;
    // 0x1c3c34: 0x460ca301  sub.s       $f12, $f20, $f12
    ctx->pc = 0x1c3c34u;
    ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[12]);
    // 0x1c3c38: 0x3c014055  lui         $at, 0x4055
    ctx->pc = 0x1c3c38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16469 << 16));
    // 0x1c3c3c: 0x34215555  ori         $at, $at, 0x5555
    ctx->pc = 0x1c3c3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)21845);
    // 0x1c3c40: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c3c40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c3c44: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x1c3c44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x1c3c48: 0x8c442fb0  lw          $a0, 0x2FB0($v0)
    ctx->pc = 0x1c3c48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12208)));
    // 0x1c3c4c: 0x26300300  addiu       $s0, $s1, 0x300
    ctx->pc = 0x1c3c4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 768));
    // 0x1c3c50: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x1c3c50u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x1c3c54: 0x8c652fb8  lw          $a1, 0x2FB8($v1)
    ctx->pc = 0x1c3c54u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x622FB8u));
    // 0x1c3c58: 0xc05e896  jal         func_17A258
    ctx->pc = 0x1C3C58u;
    SET_GPR_U32(ctx, 31, 0x1C3C60u);
    ctx->pc = 0x1C3C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3C58u;
    // 0x1c3c5c: 0x460c0b01  sub.s       $f12, $f1, $f12 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A258u, 0x1C3C58u, 0x1C3C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3C60u;
label_1c3c60:
    // 0x1c3c60: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x1c3c60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
    // 0x1c3c64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3c64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3c68: 0xc068992  jal         func_1A2648
    ctx->pc = 0x1C3C68u;
    SET_GPR_U32(ctx, 31, 0x1C3C70u);
    ctx->pc = 0x1C3C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3C68u;
    // 0x1c3c6c: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2648u, 0x1C3C68u, 0x1C3C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3C70u;
label_1c3c70:
    // 0x1c3c70: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x1C3C70u;
    {
        const bool branch_taken_0x1c3c70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3c70) {
            ctx->pc = 0x1C3D18u;
            goto label_1c3d18;
        }
    }
    ctx->pc = 0x1C3C78u;
label_1c3c78:
    // 0x1c3c78: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x1c3c78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x1c3c7c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1c3c7cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1c3c80: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1c3c80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c3c84: 0x0  nop
    ctx->pc = 0x1c3c84u;
    // NOP
    // 0x1c3c88: 0x46146034  c.lt.s      $f12, $f20
    ctx->pc = 0x1c3c88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c3c8c: 0x0  nop
    ctx->pc = 0x1c3c8cu;
    // NOP
    // 0x1c3c90: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x1C3C90u;
    {
        const bool branch_taken_0x1c3c90 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C3C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3C90u;
        // 0x1c3c94: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3c90) {
            ctx->pc = 0x1C3CDCu;
            goto label_1c3cdc;
        }
    }
    ctx->pc = 0x1C3C98u;
    // 0x1c3c98: 0x460ca301  sub.s       $f12, $f20, $f12
    ctx->pc = 0x1c3c98u;
    ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[12]);
    // 0x1c3c9c: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x1c3c9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
    // 0x1c3ca0: 0x34210001  ori         $at, $at, 0x1
    ctx->pc = 0x1c3ca0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)1);
    // 0x1c3ca4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c3ca4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c3ca8: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x1c3ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x1c3cac: 0x8c442fb8  lw          $a0, 0x2FB8($v0)
    ctx->pc = 0x1c3cacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12216)));
    // 0x1c3cb0: 0x26300300  addiu       $s0, $s1, 0x300
    ctx->pc = 0x1c3cb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 768));
    // 0x1c3cb4: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x1c3cb4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x1c3cb8: 0x8c652fc0  lw          $a1, 0x2FC0($v1)
    ctx->pc = 0x1c3cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x622FC0u));
    // 0x1c3cbc: 0xc05e896  jal         func_17A258
    ctx->pc = 0x1C3CBCu;
    SET_GPR_U32(ctx, 31, 0x1C3CC4u);
    ctx->pc = 0x1C3CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3CBCu;
    // 0x1c3cc0: 0x460c0b01  sub.s       $f12, $f1, $f12 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A258u, 0x1C3CBCu, 0x1C3CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3CC4u;
label_1c3cc4:
    // 0x1c3cc4: 0xafa20104  sw          $v0, 0x104($sp)
    ctx->pc = 0x1c3cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 2));
    // 0x1c3cc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3ccc: 0xc068992  jal         func_1A2648
    ctx->pc = 0x1C3CCCu;
    SET_GPR_U32(ctx, 31, 0x1C3CD4u);
    ctx->pc = 0x1C3CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3CCCu;
    // 0x1c3cd0: 0x27a50104  addiu       $a1, $sp, 0x104 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2648u, 0x1C3CCCu, 0x1C3CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3CD4u;
label_1c3cd4:
    // 0x1c3cd4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1C3CD4u;
    {
        const bool branch_taken_0x1c3cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3cd4) {
            ctx->pc = 0x1C3D18u;
            goto label_1c3d18;
        }
    }
    ctx->pc = 0x1C3CDCu;
label_1c3cdc:
    // 0x1c3cdc: 0x3c014055  lui         $at, 0x4055
    ctx->pc = 0x1c3cdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16469 << 16));
    // 0x1c3ce0: 0x34215555  ori         $at, $at, 0x5555
    ctx->pc = 0x1c3ce0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)21845);
    // 0x1c3ce4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1c3ce4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c3ce8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1c3ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x1c3cec: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x1c3cecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x1c3cf0: 0x8c442fc0  lw          $a0, 0x2FC0($v0)
    ctx->pc = 0x1c3cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x622FC0u));
    // 0x1c3cf4: 0x460ca302  mul.s       $f12, $f20, $f12
    ctx->pc = 0x1c3cf4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
    // 0x1c3cf8: 0x8c652fc8  lw          $a1, 0x2FC8($v1)
    ctx->pc = 0x1c3cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x622FC8u));
    // 0x1c3cfc: 0x26300300  addiu       $s0, $s1, 0x300
    ctx->pc = 0x1c3cfcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 768));
    // 0x1c3d00: 0xc05e896  jal         func_17A258
    ctx->pc = 0x1C3D00u;
    SET_GPR_U32(ctx, 31, 0x1C3D08u);
    ctx->pc = 0x1C3D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3D00u;
    // 0x1c3d04: 0x460c0b01  sub.s       $f12, $f1, $f12 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A258u, 0x1C3D00u, 0x1C3D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3D08u;
label_1c3d08:
    // 0x1c3d08: 0xafa20108  sw          $v0, 0x108($sp)
    ctx->pc = 0x1c3d08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 2));
    // 0x1c3d0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3d0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3d10: 0xc068992  jal         func_1A2648
    ctx->pc = 0x1C3D10u;
    SET_GPR_U32(ctx, 31, 0x1C3D18u);
    ctx->pc = 0x1C3D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3D10u;
    // 0x1c3d14: 0x27a50108  addiu       $a1, $sp, 0x108 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2648u, 0x1C3D10u, 0x1C3D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3D18u;
label_1c3d18:
    // 0x1c3d18: 0xc06dbd8  jal         func_1B6F60
    ctx->pc = 0x1C3D18u;
    SET_GPR_U32(ctx, 31, 0x1C3D20u);
    ctx->pc = 0x1C3D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3D18u;
    // 0x1c3d1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6F60u, 0x1C3D18u, 0x1C3D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3D20u;
label_1c3d20:
    // 0x1c3d20: 0x7bb00130  lq          $s0, 0x130($sp)
    ctx->pc = 0x1c3d20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1c3d24: 0x7bb10120  lq          $s1, 0x120($sp)
    ctx->pc = 0x1c3d24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1c3d28: 0xdfbf0110  ld          $ra, 0x110($sp)
    ctx->pc = 0x1c3d28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1c3d2c: 0xc7b40140  lwc1        $f20, 0x140($sp)
    ctx->pc = 0x1c3d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c3d30: 0x3e00008  jr          $ra
    ctx->pc = 0x1C3D30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C3D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3D30u;
        // 0x1c3d34: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C3D30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C3D38u;
}
