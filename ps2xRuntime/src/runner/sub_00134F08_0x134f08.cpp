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

// Function: sub_00134F08
// Address: 0x134f08 - 0x135028
void sub_00134F08_0x134f08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00134F08_0x134f08");
#endif

    switch (ctx->pc) {
        case 0x134f70u: goto label_134f70;
        case 0x134f90u: goto label_134f90;
        case 0x134ff0u: goto label_134ff0;
        default: break;
    }

    ctx->pc = 0x134f08u;

    // 0x134f08: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x134f08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x134f0c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x134f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x134f10: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x134f10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x134f14: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x134f14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134f18: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x134f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x134f1c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x134f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x134f20: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x134f20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x134f24: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x134f24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x134f28: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x134f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x134f2c: 0x8e460218  lw          $a2, 0x218($s2)
    ctx->pc = 0x134f2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 536)));
    // 0x134f30: 0x10c00033  beqz        $a2, . + 4 + (0x33 << 2)
    ctx->pc = 0x134F30u;
    {
        const bool branch_taken_0x134f30 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x134F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134F30u;
        // 0x134f34: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134f30) {
            ctx->pc = 0x135000u;
            goto label_135000;
        }
    }
    ctx->pc = 0x134F38u;
    // 0x134f38: 0x7a440180  lq          $a0, 0x180($s2)
    ctx->pc = 0x134f38u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 18), 384)));
    // 0x134f3c: 0x244216c0  addiu       $v0, $v0, 0x16C0
    ctx->pc = 0x134f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
    // 0x134f40: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x134f40u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134f44: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x134f44u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x134f48: 0x26550180  addiu       $s5, $s2, 0x180
    ctx->pc = 0x134f48u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 384));
    // 0x134f4c: 0x7fa40000  sq          $a0, 0x0($sp)
    ctx->pc = 0x134f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 4));
    // 0x134f50: 0x10c00013  beqz        $a2, . + 4 + (0x13 << 2)
    ctx->pc = 0x134F50u;
    {
        const bool branch_taken_0x134f50 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x134F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134F50u;
        // 0x134f54: 0x7e430180  sq          $v1, 0x180($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 384), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134f50) {
            ctx->pc = 0x134FA0u;
            goto label_134fa0;
        }
    }
    ctx->pc = 0x134F58u;
    // 0x134f58: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x134f58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x134f5c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x134f5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134f60: 0x24544b00  addiu       $s4, $v0, 0x4B00
    ctx->pc = 0x134f60u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x134f64: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x134f64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134f68: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x134f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x134f6c: 0x0  nop
    ctx->pc = 0x134f6cu;
    // NOP
label_134f70:
    // 0x134f70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x134f70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134f74: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x134f74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134f78: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x134f78u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x134f7c: 0x84460092  lh          $a2, 0x92($v0)
    ctx->pc = 0x134f7cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 146)));
    // 0x134f80: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x134f80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x134f84: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x134f84u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x134f88: 0xc136b18  jal         func_4DAC60
    ctx->pc = 0x134F88u;
    SET_GPR_U32(ctx, 31, 0x134F90u);
    ctx->pc = 0x134F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134F88u;
    // 0x134f8c: 0xd43021  addu        $a2, $a2, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x134F88u, 0x134F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134F90u;
label_134f90:
    // 0x134f90: 0x8e420218  lw          $v0, 0x218($s2)
    ctx->pc = 0x134f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 536)));
    // 0x134f94: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x134f94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x134f98: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x134F98u;
    {
        const bool branch_taken_0x134f98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x134f98) {
            ctx->pc = 0x134F9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x134F98u;
            // 0x134f9c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x134F70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_134f70;
        }
    }
    ctx->pc = 0x134FA0u;
label_134fa0:
    // 0x134fa0: 0x8e420218  lw          $v0, 0x218($s2)
    ctx->pc = 0x134fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 536)));
    // 0x134fa4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x134FA4u;
    {
        const bool branch_taken_0x134fa4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x134FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134FA4u;
        // 0x134fa8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134fa4) {
            ctx->pc = 0x134FC0u;
            goto label_134fc0;
        }
    }
    ctx->pc = 0x134FACu;
    // 0x134fac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x134facu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134fb0: 0x0  nop
    ctx->pc = 0x134fb0u;
    // NOP
    // 0x134fb4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x134fb4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x134fb8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x134FB8u;
    {
        const bool branch_taken_0x134fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134fb8) {
            ctx->pc = 0x134FD8u;
            goto label_134fd8;
        }
    }
    ctx->pc = 0x134FC0u;
label_134fc0:
    // 0x134fc0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x134fc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x134fc4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x134fc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x134fc8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x134fc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134fcc: 0x0  nop
    ctx->pc = 0x134fccu;
    // NOP
    // 0x134fd0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x134fd0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x134fd4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x134fd4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_134fd8:
    // 0x134fd8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x134fd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x134fdc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x134fdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x134fe0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x134fe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134fe4: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x134fe4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[12], ctx->f[0]); }
    // 0x134fe8: 0xc136b24  jal         func_4DAC90
    ctx->pc = 0x134FE8u;
    SET_GPR_U32(ctx, 31, 0x134FF0u);
    ctx->pc = 0x134FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134FE8u;
    // 0x134fec: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x134FE8u, 0x134FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134FF0u;
label_134ff0:
    // 0x134ff0: 0xc6400188  lwc1        $f0, 0x188($s2)
    ctx->pc = 0x134ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x134ff4: 0xc64101f8  lwc1        $f1, 0x1F8($s2)
    ctx->pc = 0x134ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x134ff8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x134ff8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x134ffc: 0xe6400188  swc1        $f0, 0x188($s2)
    ctx->pc = 0x134ffcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 392), bits); }
label_135000:
    // 0x135000: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x135000u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x135004: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x135004u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x135008: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x135008u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13500c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x13500cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x135010: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x135010u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x135014: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x135014u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x135018: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x135018u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13501c: 0x3e00008  jr          $ra
    ctx->pc = 0x13501Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x135020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13501Cu;
        // 0x135020: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13501Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x135024u;
    // 0x135024: 0x0  nop
    ctx->pc = 0x135024u;
    // NOP
    ctx->pc = 0x135028u;
}
