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

// Function: sub_003FCA68
// Address: 0x3fca68 - 0x3fcbe0
void sub_003FCA68_0x3fca68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003FCA68_0x3fca68");
#endif

    switch (ctx->pc) {
        case 0x3fca68u: goto label_3fca68;
        case 0x3fca6cu: goto label_3fca6c;
        case 0x3fca70u: goto label_3fca70;
        case 0x3fca74u: goto label_3fca74;
        case 0x3fca78u: goto label_3fca78;
        case 0x3fca7cu: goto label_3fca7c;
        case 0x3fca80u: goto label_3fca80;
        case 0x3fca84u: goto label_3fca84;
        case 0x3fca88u: goto label_3fca88;
        case 0x3fca8cu: goto label_3fca8c;
        case 0x3fca90u: goto label_3fca90;
        case 0x3fca94u: goto label_3fca94;
        case 0x3fca98u: goto label_3fca98;
        case 0x3fca9cu: goto label_3fca9c;
        case 0x3fcaa0u: goto label_3fcaa0;
        case 0x3fcaa4u: goto label_3fcaa4;
        case 0x3fcaa8u: goto label_3fcaa8;
        case 0x3fcaacu: goto label_3fcaac;
        case 0x3fcab0u: goto label_3fcab0;
        case 0x3fcab4u: goto label_3fcab4;
        case 0x3fcab8u: goto label_3fcab8;
        case 0x3fcabcu: goto label_3fcabc;
        case 0x3fcac0u: goto label_3fcac0;
        case 0x3fcac4u: goto label_3fcac4;
        case 0x3fcac8u: goto label_3fcac8;
        case 0x3fcaccu: goto label_3fcacc;
        case 0x3fcad0u: goto label_3fcad0;
        case 0x3fcad4u: goto label_3fcad4;
        case 0x3fcad8u: goto label_3fcad8;
        case 0x3fcadcu: goto label_3fcadc;
        case 0x3fcae0u: goto label_3fcae0;
        case 0x3fcae4u: goto label_3fcae4;
        case 0x3fcae8u: goto label_3fcae8;
        case 0x3fcaecu: goto label_3fcaec;
        case 0x3fcaf0u: goto label_3fcaf0;
        case 0x3fcaf4u: goto label_3fcaf4;
        case 0x3fcaf8u: goto label_3fcaf8;
        case 0x3fcafcu: goto label_3fcafc;
        case 0x3fcb00u: goto label_3fcb00;
        case 0x3fcb04u: goto label_3fcb04;
        case 0x3fcb08u: goto label_3fcb08;
        case 0x3fcb0cu: goto label_3fcb0c;
        case 0x3fcb10u: goto label_3fcb10;
        case 0x3fcb14u: goto label_3fcb14;
        case 0x3fcb18u: goto label_3fcb18;
        case 0x3fcb1cu: goto label_3fcb1c;
        case 0x3fcb20u: goto label_3fcb20;
        case 0x3fcb24u: goto label_3fcb24;
        case 0x3fcb28u: goto label_3fcb28;
        case 0x3fcb2cu: goto label_3fcb2c;
        case 0x3fcb30u: goto label_3fcb30;
        case 0x3fcb34u: goto label_3fcb34;
        case 0x3fcb38u: goto label_3fcb38;
        case 0x3fcb3cu: goto label_3fcb3c;
        case 0x3fcb40u: goto label_3fcb40;
        case 0x3fcb44u: goto label_3fcb44;
        case 0x3fcb48u: goto label_3fcb48;
        case 0x3fcb4cu: goto label_3fcb4c;
        case 0x3fcb50u: goto label_3fcb50;
        case 0x3fcb54u: goto label_3fcb54;
        case 0x3fcb58u: goto label_3fcb58;
        case 0x3fcb5cu: goto label_3fcb5c;
        case 0x3fcb60u: goto label_3fcb60;
        case 0x3fcb64u: goto label_3fcb64;
        case 0x3fcb68u: goto label_3fcb68;
        case 0x3fcb6cu: goto label_3fcb6c;
        case 0x3fcb70u: goto label_3fcb70;
        case 0x3fcb74u: goto label_3fcb74;
        case 0x3fcb78u: goto label_3fcb78;
        case 0x3fcb7cu: goto label_3fcb7c;
        case 0x3fcb80u: goto label_3fcb80;
        case 0x3fcb84u: goto label_3fcb84;
        case 0x3fcb88u: goto label_3fcb88;
        case 0x3fcb8cu: goto label_3fcb8c;
        case 0x3fcb90u: goto label_3fcb90;
        case 0x3fcb94u: goto label_3fcb94;
        case 0x3fcb98u: goto label_3fcb98;
        case 0x3fcb9cu: goto label_3fcb9c;
        case 0x3fcba0u: goto label_3fcba0;
        case 0x3fcba4u: goto label_3fcba4;
        case 0x3fcba8u: goto label_3fcba8;
        case 0x3fcbacu: goto label_3fcbac;
        case 0x3fcbb0u: goto label_3fcbb0;
        case 0x3fcbb4u: goto label_3fcbb4;
        case 0x3fcbb8u: goto label_3fcbb8;
        case 0x3fcbbcu: goto label_3fcbbc;
        case 0x3fcbc0u: goto label_3fcbc0;
        case 0x3fcbc4u: goto label_3fcbc4;
        case 0x3fcbc8u: goto label_3fcbc8;
        case 0x3fcbccu: goto label_3fcbcc;
        case 0x3fcbd0u: goto label_3fcbd0;
        case 0x3fcbd4u: goto label_3fcbd4;
        case 0x3fcbd8u: goto label_3fcbd8;
        case 0x3fcbdcu: goto label_3fcbdc;
        default: break;
    }

    ctx->pc = 0x3fca68u;

label_3fca68:
    // 0x3fca68: 0x27bdfbb0  addiu       $sp, $sp, -0x450
    ctx->pc = 0x3fca68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966192));
label_3fca6c:
    // 0x3fca6c: 0x7fb00440  sq          $s0, 0x440($sp)
    ctx->pc = 0x3fca6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 16));
label_3fca70:
    // 0x3fca70: 0x7fb10430  sq          $s1, 0x430($sp)
    ctx->pc = 0x3fca70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 17));
label_3fca74:
    // 0x3fca74: 0x7fb20420  sq          $s2, 0x420($sp)
    ctx->pc = 0x3fca74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 18));
label_3fca78:
    // 0x3fca78: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3fca78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3fca7c:
    // 0x3fca7c: 0xffbf0410  sd          $ra, 0x410($sp)
    ctx->pc = 0x3fca7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1040), GPR_U64(ctx, 31));
label_3fca80:
    // 0x3fca80: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3fca80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3fca84:
    // 0x3fca84: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3fca84u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3fca88:
    // 0x3fca88: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3fca88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3fca8c:
    // 0x3fca8c: 0x40f809  jalr        $v0
label_3fca90:
    if (ctx->pc == 0x3FCA90u) {
        ctx->pc = 0x3FCA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCA8Cu;
        // 0x3fca90: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FCA94u;
        goto label_3fca94;
    }
    ctx->pc = 0x3FCA8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3FCA94u);
        ctx->pc = 0x3FCA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCA8Cu;
        // 0x3fca90: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FCA8Cu, 0x3FCA94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3FCA94u;
label_3fca94:
    // 0x3fca94: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3fca94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3fca98:
    // 0x3fca98: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3fca98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3fca9c:
    // 0x3fca9c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3fca9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3fcaa0:
    // 0x3fcaa0: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x3fcaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_3fcaa4:
    // 0x3fcaa4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3fcaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3fcaa8:
    // 0x3fcaa8: 0x0  nop
    ctx->pc = 0x3fcaa8u;
    // NOP
label_3fcaac:
    // 0x3fcaac: 0x0  nop
    ctx->pc = 0x3fcaacu;
    // NOP
label_3fcab0:
    // 0x3fcab0: 0x0  nop
    ctx->pc = 0x3fcab0u;
    // NOP
label_3fcab4:
    // 0x3fcab4: 0x0  nop
    ctx->pc = 0x3fcab4u;
    // NOP
label_3fcab8:
    // 0x3fcab8: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
label_3fcabc:
    if (ctx->pc == 0x3FCABCu) {
        ctx->pc = 0x3FCABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCAB8u;
        // 0x3fcabc: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FCAC0u;
        goto label_3fcac0;
    }
    ctx->pc = 0x3FCAB8u;
    {
        const bool branch_taken_0x3fcab8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3FCABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCAB8u;
        // 0x3fcabc: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fcab8) {
            ctx->pc = 0x3FCAA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3fcaa8;
        }
    }
    ctx->pc = 0x3FCAC0u;
label_3fcac0:
    // 0x3fcac0: 0xc138ddc  jal         func_4E3770
label_3fcac4:
    if (ctx->pc == 0x3FCAC4u) {
        ctx->pc = 0x3FCAC8u;
        goto label_3fcac8;
    }
    ctx->pc = 0x3FCAC0u;
    SET_GPR_U32(ctx, 31, 0x3FCAC8u);
    ctx->pc = 0x4E3770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3770u, 0x3FCAC0u, 0x3FCAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FCAC8u;
label_3fcac8:
    // 0x3fcac8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3fcac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3fcacc:
    // 0x3fcacc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3fcaccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3fcad0:
    // 0x3fcad0: 0x1462001e  bne         $v1, $v0, . + 4 + (0x1E << 2)
label_3fcad4:
    if (ctx->pc == 0x3FCAD4u) {
        ctx->pc = 0x3FCAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCAD0u;
        // 0x3fcad4: 0x3a0902d  daddu       $s2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FCAD8u;
        goto label_3fcad8;
    }
    ctx->pc = 0x3FCAD0u;
    {
        const bool branch_taken_0x3fcad0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3FCAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCAD0u;
        // 0x3fcad4: 0x3a0902d  daddu       $s2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fcad0) {
            ctx->pc = 0x3FCB4Cu;
            goto label_3fcb4c;
        }
    }
    ctx->pc = 0x3FCAD8u;
label_3fcad8:
    // 0x3fcad8: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x3fcad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3fcadc:
    // 0x3fcadc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3fcadcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3fcae0:
    // 0x3fcae0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3fcae0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3fcae4:
    // 0x3fcae4: 0x0  nop
    ctx->pc = 0x3fcae4u;
    // NOP
label_3fcae8:
    // 0x3fcae8: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x3fcae8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3fcaec:
    // 0x3fcaec: 0x0  nop
    ctx->pc = 0x3fcaecu;
    // NOP
label_3fcaf0:
    // 0x3fcaf0: 0x45000017  bc1f        . + 4 + (0x17 << 2)
label_3fcaf4:
    if (ctx->pc == 0x3FCAF4u) {
        ctx->pc = 0x3FCAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCAF0u;
        // 0x3fcaf4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FCAF8u;
        goto label_3fcaf8;
    }
    ctx->pc = 0x3FCAF0u;
    {
        const bool branch_taken_0x3fcaf0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3FCAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCAF0u;
        // 0x3fcaf4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fcaf0) {
            ctx->pc = 0x3FCB50u;
            goto label_3fcb50;
        }
    }
    ctx->pc = 0x3FCAF8u;
label_3fcaf8:
    // 0x3fcaf8: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x3fcaf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3fcafc:
    // 0x3fcafc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3fcafcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_3fcb00:
    // 0x3fcb00: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x3fcb00u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3fcb04:
    // 0x3fcb04: 0x0  nop
    ctx->pc = 0x3fcb04u;
    // NOP
label_3fcb08:
    // 0x3fcb08: 0x4500000c  bc1f        . + 4 + (0xC << 2)
label_3fcb0c:
    if (ctx->pc == 0x3FCB0Cu) {
        ctx->pc = 0x3FCB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCB08u;
        // 0x3fcb0c: 0xe6000010  swc1        $f0, 0x10($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FCB10u;
        goto label_3fcb10;
    }
    ctx->pc = 0x3FCB08u;
    {
        const bool branch_taken_0x3fcb08 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3FCB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCB08u;
        // 0x3fcb0c: 0xe6000010  swc1        $f0, 0x10($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fcb08) {
            ctx->pc = 0x3FCB3Cu;
            goto label_3fcb3c;
        }
    }
    ctx->pc = 0x3FCB10u;
label_3fcb10:
    // 0x3fcb10: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3fcb10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3fcb14:
    // 0x3fcb14: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3fcb14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3fcb18:
    // 0x3fcb18: 0xc0ea16a  jal         func_3A85A8
label_3fcb1c:
    if (ctx->pc == 0x3FCB1Cu) {
        ctx->pc = 0x3FCB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCB18u;
        // 0x3fcb1c: 0xe6020010  swc1        $f2, 0x10($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FCB20u;
        goto label_3fcb20;
    }
    ctx->pc = 0x3FCB18u;
    SET_GPR_U32(ctx, 31, 0x3FCB20u);
    ctx->pc = 0x3FCB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FCB18u;
    // 0x3fcb1c: 0xe6020010  swc1        $f2, 0x10($s0) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85A8u, 0x3FCB18u, 0x3FCB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FCB20u;
label_3fcb20:
    // 0x3fcb20: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3fcb20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3fcb24:
    // 0x3fcb24: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x3fcb24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_3fcb28:
    // 0x3fcb28: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3fcb28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3fcb2c:
    // 0x3fcb2c: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3fcb2cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3fcb30:
    // 0x3fcb30: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3fcb30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3fcb34:
    // 0x3fcb34: 0x60f809  jalr        $v1
label_3fcb38:
    if (ctx->pc == 0x3FCB38u) {
        ctx->pc = 0x3FCB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCB34u;
        // 0x3fcb38: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FCB3Cu;
        goto label_3fcb3c;
    }
    ctx->pc = 0x3FCB34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3FCB3Cu);
        ctx->pc = 0x3FCB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCB34u;
        // 0x3fcb38: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FCB34u, 0x3FCB3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3FCB3Cu;
label_3fcb3c:
    // 0x3fcb3c: 0xc60c0010  lwc1        $f12, 0x10($s0)
    ctx->pc = 0x3fcb3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3fcb40:
    // 0x3fcb40: 0xc0e9636  jal         func_3A58D8
label_3fcb44:
    if (ctx->pc == 0x3FCB44u) {
        ctx->pc = 0x3FCB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCB40u;
        // 0x3fcb44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FCB48u;
        goto label_3fcb48;
    }
    ctx->pc = 0x3FCB40u;
    SET_GPR_U32(ctx, 31, 0x3FCB48u);
    ctx->pc = 0x3FCB44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FCB40u;
    // 0x3fcb44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A58D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A58D8u, 0x3FCB40u, 0x3FCB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FCB48u;
label_3fcb48:
    // 0x3fcb48: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3fcb48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3fcb4c:
    // 0x3fcb4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3fcb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3fcb50:
    // 0x3fcb50: 0x5462001d  bnel        $v1, $v0, . + 4 + (0x1D << 2)
label_3fcb54:
    if (ctx->pc == 0x3FCB54u) {
        ctx->pc = 0x3FCB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCB50u;
        // 0x3fcb54: 0x7bb00440  lq          $s0, 0x440($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FCB58u;
        goto label_3fcb58;
    }
    ctx->pc = 0x3FCB50u;
    {
        const bool branch_taken_0x3fcb50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3fcb50) {
            ctx->pc = 0x3FCB54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FCB50u;
            // 0x3fcb54: 0x7bb00440  lq          $s0, 0x440($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FCBC8u;
            goto label_3fcbc8;
        }
    }
    ctx->pc = 0x3FCB58u;
label_3fcb58:
    // 0x3fcb58: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x3fcb58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3fcb5c:
    // 0x3fcb5c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x3fcb5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3fcb60:
    // 0x3fcb60: 0x0  nop
    ctx->pc = 0x3fcb60u;
    // NOP
label_3fcb64:
    // 0x3fcb64: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x3fcb64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3fcb68:
    // 0x3fcb68: 0x0  nop
    ctx->pc = 0x3fcb68u;
    // NOP
label_3fcb6c:
    // 0x3fcb6c: 0x45020016  bc1fl       . + 4 + (0x16 << 2)
label_3fcb70:
    if (ctx->pc == 0x3FCB70u) {
        ctx->pc = 0x3FCB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCB6Cu;
        // 0x3fcb70: 0x7bb00440  lq          $s0, 0x440($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FCB74u;
        goto label_3fcb74;
    }
    ctx->pc = 0x3FCB6Cu;
    {
        const bool branch_taken_0x3fcb6c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3fcb6c) {
            ctx->pc = 0x3FCB70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FCB6Cu;
            // 0x3fcb70: 0x7bb00440  lq          $s0, 0x440($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FCBC8u;
            goto label_3fcbc8;
        }
    }
    ctx->pc = 0x3FCB74u;
label_3fcb74:
    // 0x3fcb74: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x3fcb74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3fcb78:
    // 0x3fcb78: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3fcb78u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_3fcb7c:
    // 0x3fcb7c: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x3fcb7cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3fcb80:
    // 0x3fcb80: 0x0  nop
    ctx->pc = 0x3fcb80u;
    // NOP
label_3fcb84:
    // 0x3fcb84: 0x4500000c  bc1f        . + 4 + (0xC << 2)
label_3fcb88:
    if (ctx->pc == 0x3FCB88u) {
        ctx->pc = 0x3FCB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCB84u;
        // 0x3fcb88: 0xe6000010  swc1        $f0, 0x10($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FCB8Cu;
        goto label_3fcb8c;
    }
    ctx->pc = 0x3FCB84u;
    {
        const bool branch_taken_0x3fcb84 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3FCB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCB84u;
        // 0x3fcb88: 0xe6000010  swc1        $f0, 0x10($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fcb84) {
            ctx->pc = 0x3FCBB8u;
            goto label_3fcbb8;
        }
    }
    ctx->pc = 0x3FCB8Cu;
label_3fcb8c:
    // 0x3fcb8c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3fcb8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3fcb90:
    // 0x3fcb90: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3fcb90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3fcb94:
    // 0x3fcb94: 0xc0ea16a  jal         func_3A85A8
label_3fcb98:
    if (ctx->pc == 0x3FCB98u) {
        ctx->pc = 0x3FCB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCB94u;
        // 0x3fcb98: 0xe6020010  swc1        $f2, 0x10($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FCB9Cu;
        goto label_3fcb9c;
    }
    ctx->pc = 0x3FCB94u;
    SET_GPR_U32(ctx, 31, 0x3FCB9Cu);
    ctx->pc = 0x3FCB98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FCB94u;
    // 0x3fcb98: 0xe6020010  swc1        $f2, 0x10($s0) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85A8u, 0x3FCB94u, 0x3FCB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FCB9Cu;
label_3fcb9c:
    // 0x3fcb9c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3fcb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3fcba0:
    // 0x3fcba0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3fcba0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3fcba4:
    // 0x3fcba4: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x3fcba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_3fcba8:
    // 0x3fcba8: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3fcba8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3fcbac:
    // 0x3fcbac: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3fcbacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3fcbb0:
    // 0x3fcbb0: 0x60f809  jalr        $v1
label_3fcbb4:
    if (ctx->pc == 0x3FCBB4u) {
        ctx->pc = 0x3FCBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCBB0u;
        // 0x3fcbb4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FCBB8u;
        goto label_3fcbb8;
    }
    ctx->pc = 0x3FCBB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3FCBB8u);
        ctx->pc = 0x3FCBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCBB0u;
        // 0x3fcbb4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FCBB0u, 0x3FCBB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3FCBB8u;
label_3fcbb8:
    // 0x3fcbb8: 0xc60c0010  lwc1        $f12, 0x10($s0)
    ctx->pc = 0x3fcbb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3fcbbc:
    // 0x3fcbbc: 0xc0e9636  jal         func_3A58D8
label_3fcbc0:
    if (ctx->pc == 0x3FCBC0u) {
        ctx->pc = 0x3FCBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCBBCu;
        // 0x3fcbc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FCBC4u;
        goto label_3fcbc4;
    }
    ctx->pc = 0x3FCBBCu;
    SET_GPR_U32(ctx, 31, 0x3FCBC4u);
    ctx->pc = 0x3FCBC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FCBBCu;
    // 0x3fcbc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A58D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A58D8u, 0x3FCBBCu, 0x3FCBC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FCBC4u;
label_3fcbc4:
    // 0x3fcbc4: 0x7bb00440  lq          $s0, 0x440($sp)
    ctx->pc = 0x3fcbc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
label_3fcbc8:
    // 0x3fcbc8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3fcbc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3fcbcc:
    // 0x3fcbcc: 0x7bb10430  lq          $s1, 0x430($sp)
    ctx->pc = 0x3fcbccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
label_3fcbd0:
    // 0x3fcbd0: 0x7bb20420  lq          $s2, 0x420($sp)
    ctx->pc = 0x3fcbd0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1056)));
label_3fcbd4:
    // 0x3fcbd4: 0xdfbf0410  ld          $ra, 0x410($sp)
    ctx->pc = 0x3fcbd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1040)));
label_3fcbd8:
    // 0x3fcbd8: 0x3e00008  jr          $ra
label_3fcbdc:
    if (ctx->pc == 0x3FCBDCu) {
        ctx->pc = 0x3FCBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCBD8u;
        // 0x3fcbdc: 0x27bd0450  addiu       $sp, $sp, 0x450 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FCBE0u;
        goto label_fallthrough_0x3fcbd8;
    }
    ctx->pc = 0x3FCBD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FCBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCBD8u;
        // 0x3fcbdc: 0x27bd0450  addiu       $sp, $sp, 0x450 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FCBD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3fcbd8:
    ctx->pc = 0x3FCBE0u;
}
