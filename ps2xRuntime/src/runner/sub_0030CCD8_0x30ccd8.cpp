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

// Function: sub_0030CCD8
// Address: 0x30ccd8 - 0x30ce10
void sub_0030CCD8_0x30ccd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030CCD8_0x30ccd8");
#endif

    switch (ctx->pc) {
        case 0x30cd58u: goto label_30cd58;
        case 0x30cd78u: goto label_30cd78;
        case 0x30cdc0u: goto label_30cdc0;
        default: break;
    }

    ctx->pc = 0x30ccd8u;

    // 0x30ccd8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x30ccd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x30ccdc: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x30ccdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x30cce0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x30cce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x30cce4: 0x24423260  addiu       $v0, $v0, 0x3260
    ctx->pc = 0x30cce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12896));
    // 0x30cce8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x30cce8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ccec: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x30ccecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x30ccf0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x30ccf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x30ccf4: 0xa5400  sll         $t2, $t2, 16
    ctx->pc = 0x30ccf4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
    // 0x30ccf8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x30ccf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x30ccfc: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x30ccfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x30cd00: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x30cd00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30cd04: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x30cd04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x30cd08: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x30cd08u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30cd0c: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x30cd0cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x30cd10: 0xaac03  sra         $s5, $t2, 16
    ctx->pc = 0x30cd10u;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 10), 16));
    // 0x30cd14: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x30cd14u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x30cd18: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x30cd18u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30cd1c: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x30cd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x30cd20: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x30cd20u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x30cd24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30cd24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30cd28: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x30cd28u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x30cd2c: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x30cd2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x30cd30: 0x3131ffff  andi        $s1, $t1, 0xFFFF
    ctx->pc = 0x30cd30u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x30cd34: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x30cd34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x30cd38: 0x160282d  daddu       $a1, $t3, $zero
    ctx->pc = 0x30cd38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30cd3c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x30cd3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x30cd40: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x30cd40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x30cd44: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x30cd44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x30cd48: 0xa2000018  sb          $zero, 0x18($s0)
    ctx->pc = 0x30cd48u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24), (uint8_t)GPR_U32(ctx, 0));
    // 0x30cd4c: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x30cd4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x30cd50: 0xc0c1a3e  jal         func_3068F8
    ctx->pc = 0x30CD50u;
    SET_GPR_U32(ctx, 31, 0x30CD58u);
    ctx->pc = 0x30CD54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CD50u;
    // 0x30cd54: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3068F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3068F8u, 0x30CD50u, 0x30CD58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CD58u;
label_30cd58:
    // 0x30cd58: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x30cd58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x30cd5c: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x30cd5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x30cd60: 0x24423620  addiu       $v0, $v0, 0x3620
    ctx->pc = 0x30cd60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13856));
    // 0x30cd64: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x30cd64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x30cd68: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x30cd68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x30cd6c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x30cd6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30cd70: 0x26020020  addiu       $v0, $s0, 0x20
    ctx->pc = 0x30cd70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x30cd74: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x30cd74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_30cd78:
    // 0x30cd78: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x30cd78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x30cd7c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x30cd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x30cd80: 0x0  nop
    ctx->pc = 0x30cd80u;
    // NOP
    // 0x30cd84: 0x0  nop
    ctx->pc = 0x30cd84u;
    // NOP
    // 0x30cd88: 0x1465fffb  bne         $v1, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x30CD88u;
    {
        const bool branch_taken_0x30cd88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x30CD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CD88u;
        // 0x30cd8c: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cd88) {
            ctx->pc = 0x30CD78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30cd78;
        }
    }
    ctx->pc = 0x30CD90u;
    // 0x30cd90: 0xe614002c  swc1        $f20, 0x2C($s0)
    ctx->pc = 0x30cd90u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x30cd94: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x30cd94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30cd98: 0xe6150030  swc1        $f21, 0x30($s0)
    ctx->pc = 0x30cd98u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x30cd9c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x30cd9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30cda0: 0xa6110038  sh          $s1, 0x38($s0)
    ctx->pc = 0x30cda0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 56), (uint16_t)GPR_U32(ctx, 17));
    // 0x30cda4: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x30cda4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x30cda8: 0xa615003a  sh          $s5, 0x3A($s0)
    ctx->pc = 0x30cda8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 58), (uint16_t)GPR_U32(ctx, 21));
    // 0x30cdac: 0xa213003c  sb          $s3, 0x3C($s0)
    ctx->pc = 0x30cdacu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 60), (uint8_t)GPR_U32(ctx, 19));
    // 0x30cdb0: 0xa214003d  sb          $s4, 0x3D($s0)
    ctx->pc = 0x30cdb0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 61), (uint8_t)GPR_U32(ctx, 20));
    // 0x30cdb4: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x30cdb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x30cdb8: 0xa200003e  sb          $zero, 0x3E($s0)
    ctx->pc = 0x30cdb8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 62), (uint8_t)GPR_U32(ctx, 0));
    // 0x30cdbc: 0x0  nop
    ctx->pc = 0x30cdbcu;
    // NOP
label_30cdc0:
    // 0x30cdc0: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x30cdc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x30cdc4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x30cdc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x30cdc8: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x30cdc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x30cdcc: 0x2ca20003  sltiu       $v0, $a1, 0x3
    ctx->pc = 0x30cdccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x30cdd0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x30cdd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x30cdd4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x30CDD4u;
    {
        const bool branch_taken_0x30cdd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30CDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CDD4u;
        // 0x30cdd8: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cdd4) {
            ctx->pc = 0x30CDC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30cdc0;
        }
    }
    ctx->pc = 0x30CDDCu;
    // 0x30cddc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x30cddcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30cde0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x30cde0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x30cde4: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x30cde4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x30cde8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x30cde8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30cdec: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x30cdecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30cdf0: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x30cdf0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30cdf4: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x30cdf4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30cdf8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30cdf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30cdfc: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x30cdfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x30ce00: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x30ce00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x30ce04: 0x3e00008  jr          $ra
    ctx->pc = 0x30CE04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30CE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CE04u;
        // 0x30ce08: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30CE04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30CE0Cu;
    // 0x30ce0c: 0x0  nop
    ctx->pc = 0x30ce0cu;
    // NOP
    ctx->pc = 0x30ce10u;
}
