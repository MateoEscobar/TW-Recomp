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

// Function: sub_0023D660
// Address: 0x23d660 - 0x23d790
void sub_0023D660_0x23d660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023D660_0x23d660");
#endif

    switch (ctx->pc) {
        case 0x23d690u: goto label_23d690;
        case 0x23d6c4u: goto label_23d6c4;
        case 0x23d738u: goto label_23d738;
        default: break;
    }

    ctx->pc = 0x23d660u;

    // 0x23d660: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23d660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23d664: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x23d664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x23d668: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x23d668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x23d66c: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x23d66cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x23d670: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23d670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x23d674: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23d674u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d678: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23d678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23d67c: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x23d67cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
    // 0x23d680: 0x86040092  lh          $a0, 0x92($s0)
    ctx->pc = 0x23d680u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
    // 0x23d684: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x23d684u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x23d688: 0xc04808c  jal         func_120230
    ctx->pc = 0x23D688u;
    SET_GPR_U32(ctx, 31, 0x23D690u);
    ctx->pc = 0x23D68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D688u;
    // 0x23d68c: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120230u, 0x23D688u, 0x23D690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D690u;
label_23d690:
    // 0x23d690: 0x8e25b734  lw          $a1, -0x48CC($s1)
    ctx->pc = 0x23d690u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294948660)));
    // 0x23d694: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x23d694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x23d698: 0xe6000334  swc1        $f0, 0x334($s0)
    ctx->pc = 0x23d698u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 820), bits); }
    // 0x23d69c: 0x8c44cd4c  lw          $a0, -0x32B4($v0)
    ctx->pc = 0x23d69cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50CD4Cu));
    // 0x23d6a0: 0x0  nop
    ctx->pc = 0x23d6a0u;
    // NOP
    // 0x23d6a4: 0x0  nop
    ctx->pc = 0x23d6a4u;
    // NOP
    // 0x23d6a8: 0x46000004  c1          0x4
    ctx->pc = 0x23d6a8u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x23d6ac: 0x8ca30048  lw          $v1, 0x48($a1)
    ctx->pc = 0x23d6acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x23d6b0: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x23d6b0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x23d6b4: 0xe6000334  swc1        $f0, 0x334($s0)
    ctx->pc = 0x23d6b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 820), bits); }
    // 0x23d6b8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x23d6b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d6bc: 0xc06290c  jal         func_18A430
    ctx->pc = 0x23D6BCu;
    SET_GPR_U32(ctx, 31, 0x23D6C4u);
    ctx->pc = 0x23D6C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D6BCu;
    // 0x23d6c0: 0xae0302a0  sw          $v1, 0x2A0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 672), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A430u, 0x23D6BCu, 0x23D6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D6C4u;
label_23d6c4:
    // 0x23d6c4: 0x8e0200d8  lw          $v0, 0xD8($s0)
    ctx->pc = 0x23d6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x23d6c8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x23D6C8u;
    {
        const bool branch_taken_0x23d6c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D6C8u;
        // 0x23d6cc: 0x8e23b734  lw          $v1, -0x48CC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294948660)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d6c8) {
            ctx->pc = 0x23D704u;
            goto label_23d704;
        }
    }
    ctx->pc = 0x23D6D0u;
    // 0x23d6d0: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x23d6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x23d6d4: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x23d6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x23d6d8: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x23d6d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x23d6dc: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x23d6dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x23d6e0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x23d6e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x23d6e4: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x23d6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x23d6e8: 0xc6010334  lwc1        $f1, 0x334($s0)
    ctx->pc = 0x23d6e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 820)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23d6ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23d6ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23d6f0: 0x0  nop
    ctx->pc = 0x23d6f0u;
    // NOP
    // 0x23d6f4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x23d6f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x23d6f8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x23d6f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x23d6fc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x23D6FCu;
    {
        const bool branch_taken_0x23d6fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D6FCu;
        // 0x23d700: 0x46000840  add.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d6fc) {
            ctx->pc = 0x23D708u;
            goto label_23d708;
        }
    }
    ctx->pc = 0x23D704u;
label_23d704:
    // 0x23d704: 0xc6010334  lwc1        $f1, 0x334($s0)
    ctx->pc = 0x23d704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 820)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_23d708:
    // 0x23d708: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x23d708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x23d70c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x23d70cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x23d710: 0xa2020333  sb          $v0, 0x333($s0)
    ctx->pc = 0x23d710u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 819), (uint8_t)GPR_U32(ctx, 2));
    // 0x23d714: 0x246302f0  addiu       $v1, $v1, 0x2F0
    ctx->pc = 0x23d714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 752));
    // 0x23d718: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x23d718u;
    { uint32_t bits = FAST_READ32(0x510300u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23d71c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x23d71cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23d720: 0x0  nop
    ctx->pc = 0x23d720u;
    // NOP
    // 0x23d724: 0x45010011  bc1t        . + 4 + (0x11 << 2)
    ctx->pc = 0x23D724u;
    {
        const bool branch_taken_0x23d724 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x23D728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D724u;
        // 0x23d728: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d724) {
            ctx->pc = 0x23D76Cu;
            goto label_23d76c;
        }
    }
    ctx->pc = 0x23D72Cu;
    // 0x23d72c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x23d72cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d730: 0x92020333  lbu         $v0, 0x333($s0)
    ctx->pc = 0x23d730u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 819)));
    // 0x23d734: 0x0  nop
    ctx->pc = 0x23d734u;
    // NOP
label_23d738:
    // 0x23d738: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23d738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x23d73c: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x23d73cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x23d740: 0xa2020333  sb          $v0, 0x333($s0)
    ctx->pc = 0x23d740u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 819), (uint8_t)GPR_U32(ctx, 2));
    // 0x23d744: 0x31603  sra         $v0, $v1, 24
    ctx->pc = 0x23d744u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 24));
    // 0x23d748: 0x4400007  bltz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23D748u;
    {
        const bool branch_taken_0x23d748 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x23D74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D748u;
        // 0x23d74c: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d748) {
            ctx->pc = 0x23D768u;
            goto label_23d768;
        }
    }
    ctx->pc = 0x23D750u;
    // 0x23d750: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x23d750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x23d754: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x23d754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23d758: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x23d758u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23d75c: 0x0  nop
    ctx->pc = 0x23d75cu;
    // NOP
    // 0x23d760: 0x4502fff5  bc1fl       . + 4 + (-0xB << 2)
    ctx->pc = 0x23D760u;
    {
        const bool branch_taken_0x23d760 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23d760) {
            ctx->pc = 0x23D764u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D760u;
            // 0x23d764: 0x92020333  lbu         $v0, 0x333($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 819)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D738u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23d738;
        }
    }
    ctx->pc = 0x23D768u;
label_23d768:
    // 0x23d768: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x23d768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_23d76c:
    // 0x23d76c: 0x8c4302d4  lw          $v1, 0x2D4($v0)
    ctx->pc = 0x23d76cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 724)));
    // 0x23d770: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x23D770u;
    {
        const bool branch_taken_0x23d770 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d770) {
            ctx->pc = 0x23D774u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D770u;
            // 0x23d774: 0xa2000333  sb          $zero, 0x333($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 819), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D778u;
            goto label_23d778;
        }
    }
    ctx->pc = 0x23D778u;
label_23d778:
    // 0x23d778: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x23d778u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23d77c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23d77cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23d780: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23d780u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23d784: 0x3e00008  jr          $ra
    ctx->pc = 0x23D784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23D788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D784u;
        // 0x23d788: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23D784u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23D78Cu;
    // 0x23d78c: 0x0  nop
    ctx->pc = 0x23d78cu;
    // NOP
    ctx->pc = 0x23d790u;
}
