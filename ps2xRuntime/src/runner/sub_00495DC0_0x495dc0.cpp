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

// Function: sub_00495DC0
// Address: 0x495dc0 - 0x496400
void sub_00495DC0_0x495dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00495DC0_0x495dc0");
#endif

    switch (ctx->pc) {
        case 0x495e48u: goto label_495e48;
        case 0x495e6cu: goto label_495e6c;
        case 0x495e98u: goto label_495e98;
        case 0x495ea0u: goto label_495ea0;
        case 0x4961b0u: goto label_4961b0;
        case 0x4961d4u: goto label_4961d4;
        case 0x49638cu: goto label_49638c;
        default: break;
    }

    ctx->pc = 0x495dc0u;

    // 0x495dc0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x495dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x495dc4: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x495dc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x495dc8: 0x3c100071  lui         $s0, 0x71
    ctx->pc = 0x495dc8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)113 << 16));
    // 0x495dcc: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x495dccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x495dd0: 0xe7b500c8  swc1        $f21, 0xC8($sp)
    ctx->pc = 0x495dd0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x495dd4: 0xc60c0050  lwc1        $f12, 0x50($s0)
    ctx->pc = 0x495dd4u;
    { uint32_t bits = FAST_READ32(0x710050u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x495dd8: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x495dd8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x495ddc: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x495ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x495de0: 0x200b82d  daddu       $s7, $s0, $zero
    ctx->pc = 0x495de0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x495de4: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x495de4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x495de8: 0x26100050  addiu       $s0, $s0, 0x50
    ctx->pc = 0x495de8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x495dec: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x495decu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x495df0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x495df0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x495df4: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x495df4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x495df8: 0x200b02d  daddu       $s6, $s0, $zero
    ctx->pc = 0x495df8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x495dfc: 0xe7b600d0  swc1        $f22, 0xD0($sp)
    ctx->pc = 0x495dfcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x495e00: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x495e00u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x495e04: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x495e04u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x495e08: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x495e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x495e0c: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x495e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x495e10: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x495e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x495e14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x495e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x495e18: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x495e18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x495e1c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x495e1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x495e20: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x495e20u;
    { uint32_t bits = FAST_READ32(0x710068u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x495e24: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x495e24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x495e28: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x495e28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x495e2c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x495e2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x495e30: 0x46156302  mul.s       $f12, $f12, $f21
    ctx->pc = 0x495e30u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[21]);
    // 0x495e34: 0x3c013880  lui         $at, 0x3880
    ctx->pc = 0x495e34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14464 << 16));
    // 0x495e38: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x495e38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x495e3c: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x495e3cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[12], ctx->f[0]); }
    // 0x495e40: 0xc10b1c6  jal         func_42C718
    ctx->pc = 0x495E40u;
    SET_GPR_U32(ctx, 31, 0x495E48u);
    ctx->pc = 0x495E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x495E40u;
    // 0x495e44: 0x46146300  add.s       $f12, $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C718u, 0x495E40u, 0x495E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x495E48u;
label_495e48:
    // 0x495e48: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x495e48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x495e4c: 0xc60c0004  lwc1        $f12, 0x4($s0)
    ctx->pc = 0x495e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x495e50: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x495e50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x495e54: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x495e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x495e58: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x495e58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x495e5c: 0x46156302  mul.s       $f12, $f12, $f21
    ctx->pc = 0x495e5cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[21]);
    // 0x495e60: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x495e60u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[12], ctx->f[0]); }
    // 0x495e64: 0xc10b1c6  jal         func_42C718
    ctx->pc = 0x495E64u;
    SET_GPR_U32(ctx, 31, 0x495E6Cu);
    ctx->pc = 0x495E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x495E64u;
    // 0x495e68: 0x46146300  add.s       $f12, $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C718u, 0x495E64u, 0x495E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x495E6Cu;
label_495e6c:
    // 0x495e6c: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x495e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x495e70: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x495e70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x495e74: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x495e74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x495e78: 0xc60c0004  lwc1        $f12, 0x4($s0)
    ctx->pc = 0x495e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x495e7c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x495e7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x495e80: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x495e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x495e84: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x495e84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x495e88: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x495e88u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x495e8c: 0x46016303  div.s       $f12, $f12, $f1
    ctx->pc = 0x495e8cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[12], ctx->f[1]); }
    // 0x495e90: 0xc10b1c6  jal         func_42C718
    ctx->pc = 0x495E90u;
    SET_GPR_U32(ctx, 31, 0x495E98u);
    ctx->pc = 0x495E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x495E90u;
    // 0x495e94: 0x46146300  add.s       $f12, $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C718u, 0x495E90u, 0x495E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x495E98u;
label_495e98:
    // 0x495e98: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x495e98u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x495e9c: 0x0  nop
    ctx->pc = 0x495e9cu;
    // NOP
label_495ea0:
    // 0x495ea0: 0x16800004  bnez        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x495EA0u;
    {
        const bool branch_taken_0x495ea0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x495EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x495EA0u;
        // 0x495ea4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x495ea0) {
            ctx->pc = 0x495EB4u;
            goto label_495eb4;
        }
    }
    ctx->pc = 0x495EA8u;
    // 0x495ea8: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x495ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x495eac: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x495EACu;
    {
        const bool branch_taken_0x495eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x495EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x495EACu;
        // 0x495eb0: 0x2452fa40  addiu       $s2, $v0, -0x5C0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965824));
        ctx->in_delay_slot = false;
        if (branch_taken_0x495eac) {
            ctx->pc = 0x495EE4u;
            goto label_495ee4;
        }
    }
    ctx->pc = 0x495EB4u;
label_495eb4:
    // 0x495eb4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x495eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x495eb8: 0x16820004  bne         $s4, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x495EB8u;
    {
        const bool branch_taken_0x495eb8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x495EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x495EB8u;
        // 0x495ebc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x495eb8) {
            ctx->pc = 0x495ECCu;
            goto label_495ecc;
        }
    }
    ctx->pc = 0x495EC0u;
    // 0x495ec0: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x495ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x495ec4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x495EC4u;
    {
        const bool branch_taken_0x495ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x495EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x495EC4u;
        // 0x495ec8: 0x2472fb80  addiu       $s2, $v1, -0x480 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x495ec4) {
            ctx->pc = 0x495EE4u;
            goto label_495ee4;
        }
    }
    ctx->pc = 0x495ECCu;
label_495ecc:
    // 0x495ecc: 0x16820004  bne         $s4, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x495ECCu;
    {
        const bool branch_taken_0x495ecc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x495ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x495ECCu;
        // 0x495ed0: 0x3c060071  lui         $a2, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x495ecc) {
            ctx->pc = 0x495EE0u;
            goto label_495ee0;
        }
    }
    ctx->pc = 0x495ED4u;
    // 0x495ed4: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x495ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
    // 0x495ed8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x495ED8u;
    {
        const bool branch_taken_0x495ed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x495EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x495ED8u;
        // 0x495edc: 0x2492fcc0  addiu       $s2, $a0, -0x340 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966464));
        ctx->in_delay_slot = false;
        if (branch_taken_0x495ed8) {
            ctx->pc = 0x495EE4u;
            goto label_495ee4;
        }
    }
    ctx->pc = 0x495EE0u;
label_495ee0:
    // 0x495ee0: 0x24d2fe00  addiu       $s2, $a2, -0x200
    ctx->pc = 0x495ee0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966784));
label_495ee4:
    // 0x495ee4: 0x26e30050  addiu       $v1, $s7, 0x50
    ctx->pc = 0x495ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 80));
    // 0x495ee8: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x495ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x495eec: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x495eecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x495ef0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x495EF0u;
    {
        const bool branch_taken_0x495ef0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x495EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x495EF0u;
        // 0x495ef4: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x495ef0) {
            ctx->pc = 0x495F00u;
            goto label_495f00;
        }
    }
    ctx->pc = 0x495EF8u;
    // 0x495ef8: 0x14a843  sra         $s5, $s4, 1
    ctx->pc = 0x495ef8u;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 20), 1));
    // 0x495efc: 0x32b50001  andi        $s5, $s5, 0x1
    ctx->pc = 0x495efcu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_495f00:
    // 0x495f00: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x495f00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x495f04: 0x3c087000  lui         $t0, 0x7000
    ctx->pc = 0x495f04u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)28672 << 16));
    // 0x495f08: 0x35080013  ori         $t0, $t0, 0x13
    ctx->pc = 0x495f08u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)19);
    // 0x495f0c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x495f0cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x495f10: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x495f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x495f14: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x495f14u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x495f18: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x495f18u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x495f1c: 0x7c480000  sq          $t0, 0x0($v0)
    ctx->pc = 0x495f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 8));
    // 0x495f20: 0x2409000e  addiu       $t1, $zero, 0xE
    ctx->pc = 0x495f20u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x495f24: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x495f24u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
    // 0x495f28: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x495f28u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x495f2c: 0x35088012  ori         $t0, $t0, 0x8012
    ctx->pc = 0x495f2cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32786);
    // 0x495f30: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x495f30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x495f34: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x495f34u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x495f38: 0x12a00007  beqz        $s5, . + 4 + (0x7 << 2)
    ctx->pc = 0x495F38u;
    {
        const bool branch_taken_0x495f38 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x495F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x495F38u;
        // 0x495f3c: 0x7e480010  sq          $t0, 0x10($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x495f38) {
            ctx->pc = 0x495F58u;
            goto label_495f58;
        }
    }
    ctx->pc = 0x495F40u;
    // 0x495f40: 0xde620360  ld          $v0, 0x360($s3)
    ctx->pc = 0x495f40u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 864)));
    // 0x495f44: 0x8c630018  lw          $v1, 0x18($v1)
    ctx->pc = 0x495f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x495f48: 0x21478  dsll        $v0, $v0, 17
    ctx->pc = 0x495f48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 17);
    // 0x495f4c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x495f4cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x495f50: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x495F50u;
    {
        const bool branch_taken_0x495f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x495F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x495F50u;
        // 0x495f54: 0x8e640360  lw          $a0, 0x360($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 864)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x495f50) {
            ctx->pc = 0x495F6Cu;
            goto label_495f6c;
        }
    }
    ctx->pc = 0x495F58u;
label_495f58:
    // 0x495f58: 0xde620010  ld          $v0, 0x10($s3)
    ctx->pc = 0x495f58u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x495f5c: 0x8c630018  lw          $v1, 0x18($v1)
    ctx->pc = 0x495f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x495f60: 0x21478  dsll        $v0, $v0, 17
    ctx->pc = 0x495f60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 17);
    // 0x495f64: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x495f64u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x495f68: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x495f68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_495f6c:
    // 0x495f6c: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x495f6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x495f70: 0x31983  sra         $v1, $v1, 6
    ctx->pc = 0x495f70u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 6));
    // 0x495f74: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x495f74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x495f78: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x495f78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x495f7c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x495f7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x495f80: 0x308401ff  andi        $a0, $a0, 0x1FF
    ctx->pc = 0x495f80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)511);
    // 0x495f84: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x495f84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x495f88: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x495f88u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x495f8c: 0x2409004c  addiu       $t1, $zero, 0x4C
    ctx->pc = 0x495f8cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x495f90: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x495f90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x495f94: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x495f94u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x495f98: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x495f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x495f9c: 0x7c480000  sq          $t0, 0x0($v0)
    ctx->pc = 0x495f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 8));
    // 0x495fa0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x495fa0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x495fa4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x495fa4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x495fa8: 0x24090018  addiu       $t1, $zero, 0x18
    ctx->pc = 0x495fa8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x495fac: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x495facu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x495fb0: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x495fb0u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x495fb4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x495fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x495fb8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x495fb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x495fbc: 0x7c480000  sq          $t0, 0x0($v0)
    ctx->pc = 0x495fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 8));
    // 0x495fc0: 0x24090040  addiu       $t1, $zero, 0x40
    ctx->pc = 0x495fc0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x495fc4: 0x3c087fff  lui         $t0, 0x7FFF
    ctx->pc = 0x495fc4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32767 << 16));
    // 0x495fc8: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x495fc8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x495fcc: 0x35087fff  ori         $t0, $t0, 0x7FFF
    ctx->pc = 0x495fccu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32767);
    // 0x495fd0: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x495fd0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x495fd4: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x495fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x495fd8: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x495fd8u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x495fdc: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x495fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x495fe0: 0x7c480000  sq          $t0, 0x0($v0)
    ctx->pc = 0x495fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 8));
    // 0x495fe4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x495fe4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x495fe8: 0x3c080003  lui         $t0, 0x3
    ctx->pc = 0x495fe8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)3 << 16));
    // 0x495fec: 0x24090047  addiu       $t1, $zero, 0x47
    ctx->pc = 0x495fecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x495ff0: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x495ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x495ff4: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x495ff4u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x495ff8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x495ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x495ffc: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x495ffcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x496000: 0x42478  dsll        $a0, $a0, 17
    ctx->pc = 0x496000u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 17);
    // 0x496004: 0x7c480000  sq          $t0, 0x0($v0)
    ctx->pc = 0x496004u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 8));
    // 0x496008: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x496008u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x49600c: 0x2409004e  addiu       $t1, $zero, 0x4E
    ctx->pc = 0x49600cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x496010: 0x102900  sll         $a1, $s0, 4
    ctx->pc = 0x496010u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x496014: 0xde6301e0  ld          $v1, 0x1E0($s3)
    ctx->pc = 0x496014u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 480)));
    // 0x496018: 0xb22821  addu        $a1, $a1, $s2
    ctx->pc = 0x496018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x49601c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x49601cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x496020: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x496020u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x496024: 0x3163a  dsrl        $v0, $v1, 24
    ctx->pc = 0x496024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) >> 24);
    // 0x496028: 0x32860001  andi        $a2, $s4, 0x1
    ctx->pc = 0x496028u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
    // 0x49602c: 0x306301ff  andi        $v1, $v1, 0x1FF
    ctx->pc = 0x49602cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)511);
    // 0x496030: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x496030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x496034: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x496034u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x496038: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x496038u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x49603c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x49603cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x496040: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x496040u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x496044: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x496044u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x496048: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x496048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x49604c: 0x434025  or          $t0, $v0, $v1
    ctx->pc = 0x49604cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x496050: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x496050u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x496054: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x496054u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x496058: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x496058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x49605c: 0x7ca80000  sq          $t0, 0x0($a1)
    ctx->pc = 0x49605cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 8));
    // 0x496060: 0x24090045  addiu       $t1, $zero, 0x45
    ctx->pc = 0x496060u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x496064: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x496064u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x496068: 0x8ec20020  lw          $v0, 0x20($s6)
    ctx->pc = 0x496068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 32)));
    // 0x49606c: 0x102900  sll         $a1, $s0, 4
    ctx->pc = 0x49606cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x496070: 0xb22821  addu        $a1, $a1, $s2
    ctx->pc = 0x496070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x496074: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x496074u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x496078: 0x2c420018  sltiu       $v0, $v0, 0x18
    ctx->pc = 0x496078u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)24) ? 1 : 0);
    // 0x49607c: 0x71224389  pcpyld      $t0, $t1, $v0
    ctx->pc = 0x49607cu;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 2)));
    // 0x496080: 0x7c880000  sq          $t0, 0x0($a0)
    ctx->pc = 0x496080u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 8));
    // 0x496084: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x496084u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x496088: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x496088u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
    // 0x49608c: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x49608cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x496090: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x496090u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x710050u));
    // 0x496094: 0x6442ffff  daddiu      $v0, $v0, -0x1
    ctx->pc = 0x496094u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)4294967295);
    // 0x496098: 0x6463ffff  daddiu      $v1, $v1, -0x1
    ctx->pc = 0x496098u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)4294967295);
    // 0x49609c: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x49609cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x4960a0: 0x31bb8  dsll        $v1, $v1, 14
    ctx->pc = 0x4960a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 14);
    // 0x4960a4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4960a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4960a8: 0x474025  or          $t0, $v0, $a3
    ctx->pc = 0x4960a8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4960ac: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x4960acu;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x4960b0: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x4960B0u;
    {
        const bool branch_taken_0x4960b0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x4960B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4960B0u;
        // 0x4960b4: 0x7ca80000  sq          $t0, 0x0($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4960b0) {
            ctx->pc = 0x4960CCu;
            goto label_4960cc;
        }
    }
    ctx->pc = 0x4960B8u;
    // 0x4960b8: 0x8ee30050  lw          $v1, 0x50($s7)
    ctx->pc = 0x4960b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 80)));
    // 0x4960bc: 0x3405aa80  ori         $a1, $zero, 0xAA80
    ctx->pc = 0x4960bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)43648);
    // 0x4960c0: 0x52d38  dsll        $a1, $a1, 20
    ctx->pc = 0x4960c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 20);
    // 0x4960c4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4960C4u;
    {
        const bool branch_taken_0x4960c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4960C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4960C4u;
        // 0x4960c8: 0xde6401d0  ld          $a0, 0x1D0($s3) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 19), 464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4960c4) {
            ctx->pc = 0x4960DCu;
            goto label_4960dc;
        }
    }
    ctx->pc = 0x4960CCu;
label_4960cc:
    // 0x4960cc: 0x8ee30050  lw          $v1, 0x50($s7)
    ctx->pc = 0x4960ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 80)));
    // 0x4960d0: 0x3405aa80  ori         $a1, $zero, 0xAA80
    ctx->pc = 0x4960d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)43648);
    // 0x4960d4: 0x52d38  dsll        $a1, $a1, 20
    ctx->pc = 0x4960d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 20);
    // 0x4960d8: 0xde640060  ld          $a0, 0x60($s3)
    ctx->pc = 0x4960d8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 19), 96)));
label_4960dc:
    // 0x4960dc: 0x31982  srl         $v1, $v1, 6
    ctx->pc = 0x4960dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 6));
    // 0x4960e0: 0x4163a  dsrl        $v0, $a0, 24
    ctx->pc = 0x4960e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) >> 24);
    // 0x4960e4: 0x31b80  sll         $v1, $v1, 14
    ctx->pc = 0x4960e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 14));
    // 0x4960e8: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x4960e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x4960ec: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x4960ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x4960f0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4960f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4960f4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x4960f4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x4960f8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x4960f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x4960fc: 0x308401ff  andi        $a0, $a0, 0x1FF
    ctx->pc = 0x4960fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)511);
    // 0x496100: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x496100u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x496104: 0x21538  dsll        $v0, $v0, 20
    ctx->pc = 0x496104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 20);
    // 0x496108: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x496108u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x49610c: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x49610cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x496110: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x496110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x496114: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x496114u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x496118: 0x444025  or          $t0, $v0, $a0
    ctx->pc = 0x496118u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x49611c: 0x24090006  addiu       $t1, $zero, 0x6
    ctx->pc = 0x49611cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x496120: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x496120u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x496124: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x496124u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x496128: 0xa2140  sll         $a0, $t2, 5
    ctx->pc = 0x496128u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 10), 5));
    // 0x49612c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x49612cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x496130: 0xa1980  sll         $v1, $t2, 6
    ctx->pc = 0x496130u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 6));
    // 0x496134: 0x7c480000  sq          $t0, 0x0($v0)
    ctx->pc = 0x496134u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 8));
    // 0x496138: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x496138u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x49613c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x49613cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x496140: 0x34680001  ori         $t0, $v1, 0x1
    ctx->pc = 0x496140u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x496144: 0x24090014  addiu       $t1, $zero, 0x14
    ctx->pc = 0x496144u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x496148: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x496148u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x49614c: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x49614cu;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x496150: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x496150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x496154: 0x7c480000  sq          $t0, 0x0($v0)
    ctx->pc = 0x496154u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 8));
    // 0x496158: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x496158u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x49615c: 0x24080016  addiu       $t0, $zero, 0x16
    ctx->pc = 0x49615cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x496160: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x496160u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x496164: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x496164u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x496168: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x496168u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x49616c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x49616cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x496170: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x496170u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x496174: 0x7c480000  sq          $t0, 0x0($v0)
    ctx->pc = 0x496174u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 8));
    // 0x496178: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x496178u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x49617c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x49617cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x496180: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x496180u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    // 0x496184: 0x843bc  dsll32      $t0, $t0, 14
    ctx->pc = 0x496184u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 14));
    // 0x496188: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x496188u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49618c: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x49618cu;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x496190: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x496190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x496194: 0x3c013880  lui         $at, 0x3880
    ctx->pc = 0x496194u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14464 << 16));
    // 0x496198: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x496198u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x49619c: 0x6203c  dsll32      $a0, $a2, 0
    ctx->pc = 0x49619cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 0));
    // 0x4961a0: 0x7c680000  sq          $t0, 0x0($v1)
    ctx->pc = 0x4961a0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 8));
    // 0x4961a4: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x4961a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x4961a8: 0xc10ac74  jal         func_42B1D0
    ctx->pc = 0x4961A8u;
    SET_GPR_U32(ctx, 31, 0x4961B0u);
    ctx->pc = 0x4961ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4961A8u;
    // 0x4961ac: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42B1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42B1D0u, 0x4961A8u, 0x4961B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4961B0u;
label_4961b0:
    // 0x4961b0: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x4961b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x4961b4: 0x44110000  mfc1        $s1, $f0
    ctx->pc = 0x4961b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x4961b8: 0x12a00003  beqz        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x4961B8u;
    {
        const bool branch_taken_0x4961b8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x4961BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4961B8u;
        // 0x4961bc: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4961b8) {
            ctx->pc = 0x4961C8u;
            goto label_4961c8;
        }
    }
    ctx->pc = 0x4961C0u;
    // 0x4961c0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4961C0u;
    {
        const bool branch_taken_0x4961c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4961C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4961C0u;
        // 0x4961c4: 0x1e203c  dsll32      $a0, $fp, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 30) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4961c0) {
            ctx->pc = 0x4961CCu;
            goto label_4961cc;
        }
    }
    ctx->pc = 0x4961C8u;
label_4961c8:
    // 0x4961c8: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x4961c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_4961cc:
    // 0x4961cc: 0xc10ac74  jal         func_42B1D0
    ctx->pc = 0x4961CCu;
    SET_GPR_U32(ctx, 31, 0x4961D4u);
    ctx->pc = 0x4961D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4961CCu;
    // 0x4961d0: 0x4203e  dsrl32      $a0, $a0, 0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42B1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42B1D0u, 0x4961CCu, 0x4961D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4961D4u;
label_4961d4:
    // 0x4961d4: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x4961d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x4961d8: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x4961d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x4961dc: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x4961dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
    // 0x4961e0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x4961e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x4961e4: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x4961e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4961e8: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x4961e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4961ec: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x4961ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x4961f0: 0x624025  or          $t0, $v1, $v0
    ctx->pc = 0x4961f0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4961f4: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x4961f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x4961f8: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x4961f8u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x4961fc: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x4961fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x496200: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x496200u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x496204: 0x7c480000  sq          $t0, 0x0($v0)
    ctx->pc = 0x496204u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 8));
    // 0x496208: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x496208u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x49620c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x49620cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x496210: 0x24090005  addiu       $t1, $zero, 0x5
    ctx->pc = 0x496210u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x496214: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x496214u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x496218: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x496218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x49621c: 0x7c680000  sq          $t0, 0x0($v1)
    ctx->pc = 0x49621cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 8));
    // 0x496220: 0x8ee20050  lw          $v0, 0x50($s7)
    ctx->pc = 0x496220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 80)));
    // 0x496224: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x496224u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x496228: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x496228u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x49622c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x49622cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x496230: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x496230u;
    {
        const bool branch_taken_0x496230 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x496234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x496230u;
        // 0x496234: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x496230) {
            ctx->pc = 0x496248u;
            goto label_496248;
        }
    }
    ctx->pc = 0x496238u;
    // 0x496238: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x496238u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x49623c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x49623cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x496240: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x496240u;
    {
        const bool branch_taken_0x496240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x496244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x496240u;
        // 0x496244: 0x46160002  mul.s       $f0, $f0, $f22 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x496240) {
            ctx->pc = 0x496264u;
            goto label_496264;
        }
    }
    ctx->pc = 0x496248u;
label_496248:
    // 0x496248: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x496248u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x49624c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x49624cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x496250: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x496250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x496254: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x496254u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x496258: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x496258u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x49625c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x49625cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x496260: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x496260u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
label_496264:
    // 0x496264: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x496264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x496268: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x496268u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x49626c: 0x12a00006  beqz        $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x49626Cu;
    {
        const bool branch_taken_0x49626c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x496270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49626Cu;
        // 0x496270: 0x21100  sll         $v0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49626c) {
            ctx->pc = 0x496288u;
            goto label_496288;
        }
    }
    ctx->pc = 0x496274u;
    // 0x496274: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x496274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x496278: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x496278u;
    {
        const bool branch_taken_0x496278 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x49627Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x496278u;
        // 0x49627c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x496278) {
            ctx->pc = 0x496298u;
            goto label_496298;
        }
    }
    ctx->pc = 0x496280u;
    // 0x496280: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x496280u;
    {
        const bool branch_taken_0x496280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x496284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x496280u;
        // 0x496284: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x496280) {
            ctx->pc = 0x4962ACu;
            goto label_4962ac;
        }
    }
    ctx->pc = 0x496288u;
label_496288:
    // 0x496288: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x496288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49628c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x49628cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x496290: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x496290u;
    {
        const bool branch_taken_0x496290 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x496294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x496290u;
        // 0x496294: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x496290) {
            ctx->pc = 0x4962A8u;
            goto label_4962a8;
        }
    }
    ctx->pc = 0x496298u;
label_496298:
    // 0x496298: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x496298u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x49629c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x49629cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4962a0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x4962A0u;
    {
        const bool branch_taken_0x4962a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4962A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4962A0u;
        // 0x4962a4: 0x46160002  mul.s       $f0, $f0, $f22 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4962a0) {
            ctx->pc = 0x4962C0u;
            goto label_4962c0;
        }
    }
    ctx->pc = 0x4962A8u;
label_4962a8:
    // 0x4962a8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4962a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_4962ac:
    // 0x4962ac: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4962acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4962b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4962b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4962b4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4962b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4962b8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x4962b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x4962bc: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x4962bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
label_4962c0:
    // 0x4962c0: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x4962c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x4962c4: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x4962c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x4962c8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x4962c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x4962cc: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x4962ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4962d0: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x4962d0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4962d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4962d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4962d8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x4962d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x4962dc: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x4962dcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x4962e0: 0x624025  or          $t0, $v1, $v0
    ctx->pc = 0x4962e0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4962e4: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x4962e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x4962e8: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x4962e8u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x4962ec: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x4962ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x4962f0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x4962f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x4962f4: 0x7c480000  sq          $t0, 0x0($v0)
    ctx->pc = 0x4962f4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 8));
    // 0x4962f8: 0x24090005  addiu       $t1, $zero, 0x5
    ctx->pc = 0x4962f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x4962fc: 0x102900  sll         $a1, $s0, 4
    ctx->pc = 0x4962fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x496300: 0x8ec3001c  lw          $v1, 0x1C($s6)
    ctx->pc = 0x496300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 28)));
    // 0x496304: 0xb22821  addu        $a1, $a1, $s2
    ctx->pc = 0x496304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x496308: 0x8ec20018  lw          $v0, 0x18($s6)
    ctx->pc = 0x496308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 24)));
    // 0x49630c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x49630cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x496310: 0x31d00  sll         $v1, $v1, 20
    ctx->pc = 0x496310u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 20));
    // 0x496314: 0x103100  sll         $a2, $s0, 4
    ctx->pc = 0x496314u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x496318: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x496318u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x49631c: 0xd23021  addu        $a2, $a2, $s2
    ctx->pc = 0x49631cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x496320: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x496320u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x496324: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x496324u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x496328: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x496328u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49632c: 0x103900  sll         $a3, $s0, 4
    ctx->pc = 0x49632cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x496330: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x496330u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x496334: 0xf23821  addu        $a3, $a3, $s2
    ctx->pc = 0x496334u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 18)));
    // 0x496338: 0x7ca80000  sq          $t0, 0x0($a1)
    ctx->pc = 0x496338u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 8));
    // 0x49633c: 0x24090018  addiu       $t1, $zero, 0x18
    ctx->pc = 0x49633cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x496340: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x496340u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x496344: 0xdf888700  ld          $t0, -0x7900($gp)
    ctx->pc = 0x496344u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 28), 4294936320)));
    // 0x496348: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x496348u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x49634c: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x49634cu;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x496350: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x496350u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x496354: 0x7cc80000  sq          $t0, 0x0($a2)
    ctx->pc = 0x496354u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 8));
    // 0x496358: 0x2409004c  addiu       $t1, $zero, 0x4C
    ctx->pc = 0x496358u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x49635c: 0x102900  sll         $a1, $s0, 4
    ctx->pc = 0x49635cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x496360: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x496360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x496364: 0xde680060  ld          $t0, 0x60($s3)
    ctx->pc = 0x496364u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 19), 96)));
    // 0x496368: 0x2452821  addu        $a1, $s2, $a1
    ctx->pc = 0x496368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x49636c: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x49636cu;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x496370: 0x24a5007f  addiu       $a1, $a1, 0x7F
    ctx->pc = 0x496370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 127));
    // 0x496374: 0x7ce80000  sq          $t0, 0x0($a3)
    ctx->pc = 0x496374u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 8));
    // 0x496378: 0x2409004e  addiu       $t1, $zero, 0x4E
    ctx->pc = 0x496378u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x49637c: 0xde680070  ld          $t0, 0x70($s3)
    ctx->pc = 0x49637cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 19), 112)));
    // 0x496380: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x496380u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x496384: 0xc10f644  jal         func_43D910
    ctx->pc = 0x496384u;
    SET_GPR_U32(ctx, 31, 0x49638Cu);
    ctx->pc = 0x496388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x496384u;
    // 0x496388: 0x7c480000  sq          $t0, 0x0($v0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D910u, 0x496384u, 0x49638Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49638Cu;
label_49638c:
    // 0x49638c: 0x2e820004  sltiu       $v0, $s4, 0x4
    ctx->pc = 0x49638cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x496390: 0x1440fec3  bnez        $v0, . + 4 + (-0x13D << 2)
    ctx->pc = 0x496390u;
    {
        const bool branch_taken_0x496390 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x496394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x496390u;
        // 0x496394: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x496390) {
            ctx->pc = 0x495EA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_495ea0;
        }
    }
    ctx->pc = 0x496398u;
    // 0x496398: 0x3c060071  lui         $a2, 0x71
    ctx->pc = 0x496398u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)113 << 16));
    // 0x49639c: 0x2443fa40  addiu       $v1, $v0, -0x5C0
    ctx->pc = 0x49639cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965824));
    // 0x4963a0: 0x24c4fb80  addiu       $a0, $a2, -0x480
    ctx->pc = 0x4963a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966144));
    // 0x4963a4: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x4963a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x4963a8: 0x3c060071  lui         $a2, 0x71
    ctx->pc = 0x4963a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)113 << 16));
    // 0x4963ac: 0x2445fcc0  addiu       $a1, $v0, -0x340
    ctx->pc = 0x4963acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966464));
    // 0x4963b0: 0xae6303c0  sw          $v1, 0x3C0($s3)
    ctx->pc = 0x4963b0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 960), GPR_U32(ctx, 3));
    // 0x4963b4: 0x24c2fe00  addiu       $v0, $a2, -0x200
    ctx->pc = 0x4963b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966784));
    // 0x4963b8: 0xae6403c4  sw          $a0, 0x3C4($s3)
    ctx->pc = 0x4963b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 964), GPR_U32(ctx, 4));
    // 0x4963bc: 0xae6203cc  sw          $v0, 0x3CC($s3)
    ctx->pc = 0x4963bcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 972), GPR_U32(ctx, 2));
    // 0x4963c0: 0xae6503c8  sw          $a1, 0x3C8($s3)
    ctx->pc = 0x4963c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 968), GPR_U32(ctx, 5));
    // 0x4963c4: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x4963c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x4963c8: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x4963c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x4963cc: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x4963ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x4963d0: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x4963d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x4963d4: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x4963d4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4963d8: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x4963d8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4963dc: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x4963dcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4963e0: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x4963e0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4963e4: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x4963e4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4963e8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4963e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4963ec: 0xc7b600d0  lwc1        $f22, 0xD0($sp)
    ctx->pc = 0x4963ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x4963f0: 0xc7b500c8  lwc1        $f21, 0xC8($sp)
    ctx->pc = 0x4963f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x4963f4: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x4963f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x4963f8: 0x3e00008  jr          $ra
    ctx->pc = 0x4963F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4963FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4963F8u;
        // 0x4963fc: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4963F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x496400u;
}
