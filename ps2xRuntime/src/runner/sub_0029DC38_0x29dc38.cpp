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

// Function: sub_0029DC38
// Address: 0x29dc38 - 0x29dd38
void sub_0029DC38_0x29dc38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029DC38_0x29dc38");
#endif

    switch (ctx->pc) {
        case 0x29dc38u: goto label_29dc38;
        case 0x29dc3cu: goto label_29dc3c;
        case 0x29dc40u: goto label_29dc40;
        case 0x29dc44u: goto label_29dc44;
        case 0x29dc48u: goto label_29dc48;
        case 0x29dc4cu: goto label_29dc4c;
        case 0x29dc50u: goto label_29dc50;
        case 0x29dc54u: goto label_29dc54;
        case 0x29dc58u: goto label_29dc58;
        case 0x29dc5cu: goto label_29dc5c;
        case 0x29dc60u: goto label_29dc60;
        case 0x29dc64u: goto label_29dc64;
        case 0x29dc68u: goto label_29dc68;
        case 0x29dc6cu: goto label_29dc6c;
        case 0x29dc70u: goto label_29dc70;
        case 0x29dc74u: goto label_29dc74;
        case 0x29dc78u: goto label_29dc78;
        case 0x29dc7cu: goto label_29dc7c;
        case 0x29dc80u: goto label_29dc80;
        case 0x29dc84u: goto label_29dc84;
        case 0x29dc88u: goto label_29dc88;
        case 0x29dc8cu: goto label_29dc8c;
        case 0x29dc90u: goto label_29dc90;
        case 0x29dc94u: goto label_29dc94;
        case 0x29dc98u: goto label_29dc98;
        case 0x29dc9cu: goto label_29dc9c;
        case 0x29dca0u: goto label_29dca0;
        case 0x29dca4u: goto label_29dca4;
        case 0x29dca8u: goto label_29dca8;
        case 0x29dcacu: goto label_29dcac;
        case 0x29dcb0u: goto label_29dcb0;
        case 0x29dcb4u: goto label_29dcb4;
        case 0x29dcb8u: goto label_29dcb8;
        case 0x29dcbcu: goto label_29dcbc;
        case 0x29dcc0u: goto label_29dcc0;
        case 0x29dcc4u: goto label_29dcc4;
        case 0x29dcc8u: goto label_29dcc8;
        case 0x29dcccu: goto label_29dccc;
        case 0x29dcd0u: goto label_29dcd0;
        case 0x29dcd4u: goto label_29dcd4;
        case 0x29dcd8u: goto label_29dcd8;
        case 0x29dcdcu: goto label_29dcdc;
        case 0x29dce0u: goto label_29dce0;
        case 0x29dce4u: goto label_29dce4;
        case 0x29dce8u: goto label_29dce8;
        case 0x29dcecu: goto label_29dcec;
        case 0x29dcf0u: goto label_29dcf0;
        case 0x29dcf4u: goto label_29dcf4;
        case 0x29dcf8u: goto label_29dcf8;
        case 0x29dcfcu: goto label_29dcfc;
        case 0x29dd00u: goto label_29dd00;
        case 0x29dd04u: goto label_29dd04;
        case 0x29dd08u: goto label_29dd08;
        case 0x29dd0cu: goto label_29dd0c;
        case 0x29dd10u: goto label_29dd10;
        case 0x29dd14u: goto label_29dd14;
        case 0x29dd18u: goto label_29dd18;
        case 0x29dd1cu: goto label_29dd1c;
        case 0x29dd20u: goto label_29dd20;
        case 0x29dd24u: goto label_29dd24;
        case 0x29dd28u: goto label_29dd28;
        case 0x29dd2cu: goto label_29dd2c;
        case 0x29dd30u: goto label_29dd30;
        case 0x29dd34u: goto label_29dd34;
        default: break;
    }

    ctx->pc = 0x29dc38u;

label_29dc38:
    // 0x29dc38: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x29dc38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_29dc3c:
    // 0x29dc3c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x29dc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_29dc40:
    // 0x29dc40: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x29dc40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_29dc44:
    // 0x29dc44: 0x244253f0  addiu       $v0, $v0, 0x53F0
    ctx->pc = 0x29dc44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21488));
label_29dc48:
    // 0x29dc48: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x29dc48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_29dc4c:
    // 0x29dc4c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29dc4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29dc50:
    // 0x29dc50: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x29dc50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
label_29dc54:
    // 0x29dc54: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x29dc54u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
label_29dc58:
    // 0x29dc58: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29dc58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_29dc5c:
    // 0x29dc5c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x29dc5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_29dc60:
    // 0x29dc60: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x29dc60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_29dc64:
    // 0x29dc64: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x29dc64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_29dc68:
    // 0x29dc68: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x29dc68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_29dc6c:
    // 0x29dc6c: 0x3403b040  ori         $v1, $zero, 0xB040
    ctx->pc = 0x29dc6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)45120);
label_29dc70:
    // 0x29dc70: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x29dc70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_29dc74:
    // 0x29dc74: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x29dc74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_29dc78:
    // 0x29dc78: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x29dc78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_29dc7c:
    // 0x29dc7c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x29dc7cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29dc80:
    // 0x29dc80: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x29dc80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
label_29dc84:
    // 0x29dc84: 0x203a821  addu        $s5, $s0, $v1
    ctx->pc = 0x29dc84u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_29dc88:
    // 0x29dc88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29dc88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_29dc8c:
    // 0x29dc8c: 0x24564b00  addiu       $s6, $v0, 0x4B00
    ctx->pc = 0x29dc8cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_29dc90:
    // 0x29dc90: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x29dc90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_29dc94:
    // 0x29dc94: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x29dc94u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29dc98:
    // 0x29dc98: 0x92020008  lbu         $v0, 0x8($s0)
    ctx->pc = 0x29dc98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
label_29dc9c:
    // 0x29dc9c: 0x0  nop
    ctx->pc = 0x29dc9cu;
    // NOP
label_29dca0:
    // 0x29dca0: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
label_29dca4:
    if (ctx->pc == 0x29DCA4u) {
        ctx->pc = 0x29DCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DCA0u;
        // 0x29dca4: 0x261002f0  addiu       $s0, $s0, 0x2F0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 752));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DCA8u;
        goto label_29dca8;
    }
    ctx->pc = 0x29DCA0u;
    {
        const bool branch_taken_0x29dca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29dca0) {
            ctx->pc = 0x29DCA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29DCA0u;
            // 0x29dca4: 0x261002f0  addiu       $s0, $s0, 0x2F0 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 752));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29DD00u;
            goto label_29dd00;
        }
    }
    ctx->pc = 0x29DCA8u;
label_29dca8:
    // 0x29dca8: 0x52200007  beql        $s1, $zero, . + 4 + (0x7 << 2)
label_29dcac:
    if (ctx->pc == 0x29DCACu) {
        ctx->pc = 0x29DCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DCA8u;
        // 0x29dcac: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DCB0u;
        goto label_29dcb0;
    }
    ctx->pc = 0x29DCA8u;
    {
        const bool branch_taken_0x29dca8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x29dca8) {
            ctx->pc = 0x29DCACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29DCA8u;
            // 0x29dcac: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29DCC8u;
            goto label_29dcc8;
        }
    }
    ctx->pc = 0x29DCB0u;
label_29dcb0:
    // 0x29dcb0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x29dcb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_29dcb4:
    // 0x29dcb4: 0x220f809  jalr        $s1
label_29dcb8:
    if (ctx->pc == 0x29DCB8u) {
        ctx->pc = 0x29DCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DCB4u;
        // 0x29dcb8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DCBCu;
        goto label_29dcbc;
    }
    ctx->pc = 0x29DCB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 17);
        SET_GPR_U32(ctx, 31, 0x29DCBCu);
        ctx->pc = 0x29DCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DCB4u;
        // 0x29dcb8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29DCB4u, 0x29DCBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29DCBCu;
label_29dcbc:
    // 0x29dcbc: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_29dcc0:
    if (ctx->pc == 0x29DCC0u) {
        ctx->pc = 0x29DCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DCBCu;
        // 0x29dcc0: 0x261002f0  addiu       $s0, $s0, 0x2F0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 752));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DCC4u;
        goto label_29dcc4;
    }
    ctx->pc = 0x29DCBCu;
    {
        const bool branch_taken_0x29dcbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29dcbc) {
            ctx->pc = 0x29DCC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29DCBCu;
            // 0x29dcc0: 0x261002f0  addiu       $s0, $s0, 0x2F0 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 752));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29DD00u;
            goto label_29dd00;
        }
    }
    ctx->pc = 0x29DCC4u;
label_29dcc4:
    // 0x29dcc4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x29dcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_29dcc8:
    // 0x29dcc8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29dcc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_29dccc:
    // 0x29dccc: 0x84450092  lh          $a1, 0x92($v0)
    ctx->pc = 0x29dcccu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 146)));
label_29dcd0:
    // 0x29dcd0: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x29dcd0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_29dcd4:
    // 0x29dcd4: 0xc0cdb38  jal         func_336CE0
label_29dcd8:
    if (ctx->pc == 0x29DCD8u) {
        ctx->pc = 0x29DCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DCD4u;
        // 0x29dcd8: 0xb62821  addu        $a1, $a1, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DCDCu;
        goto label_29dcdc;
    }
    ctx->pc = 0x29DCD4u;
    SET_GPR_U32(ctx, 31, 0x29DCDCu);
    ctx->pc = 0x29DCD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DCD4u;
    // 0x29dcd8: 0xb62821  addu        $a1, $a1, $s6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x29DCD4u, 0x29DCDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DCDCu;
label_29dcdc:
    // 0x29dcdc: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x29dcdcu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_29dce0:
    // 0x29dce0: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x29dce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29dce4:
    // 0x29dce4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29dce4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_29dce8:
    // 0x29dce8: 0x0  nop
    ctx->pc = 0x29dce8u;
    // NOP
label_29dcec:
    // 0x29dcec: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_29dcf0:
    if (ctx->pc == 0x29DCF0u) {
        ctx->pc = 0x29DCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DCECu;
        // 0x29dcf0: 0x261002f0  addiu       $s0, $s0, 0x2F0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 752));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DCF4u;
        goto label_29dcf4;
    }
    ctx->pc = 0x29DCECu;
    {
        const bool branch_taken_0x29dcec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29dcec) {
            ctx->pc = 0x29DCF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29DCECu;
            // 0x29dcf0: 0x261002f0  addiu       $s0, $s0, 0x2F0 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 752));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29DD00u;
            goto label_29dd00;
        }
    }
    ctx->pc = 0x29DCF4u;
label_29dcf4:
    // 0x29dcf4: 0xe6410000  swc1        $f1, 0x0($s2)
    ctx->pc = 0x29dcf4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_29dcf8:
    // 0x29dcf8: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x29dcf8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29dcfc:
    // 0x29dcfc: 0x261002f0  addiu       $s0, $s0, 0x2F0
    ctx->pc = 0x29dcfcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 752));
label_29dd00:
    // 0x29dd00: 0x215102b  sltu        $v0, $s0, $s5
    ctx->pc = 0x29dd00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
label_29dd04:
    // 0x29dd04: 0x5440ffe6  bnel        $v0, $zero, . + 4 + (-0x1A << 2)
label_29dd08:
    if (ctx->pc == 0x29DD08u) {
        ctx->pc = 0x29DD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DD04u;
        // 0x29dd08: 0x92020008  lbu         $v0, 0x8($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DD0Cu;
        goto label_29dd0c;
    }
    ctx->pc = 0x29DD04u;
    {
        const bool branch_taken_0x29dd04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29dd04) {
            ctx->pc = 0x29DD08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29DD04u;
            // 0x29dd08: 0x92020008  lbu         $v0, 0x8($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29DCA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29dca0;
        }
    }
    ctx->pc = 0x29DD0Cu;
label_29dd0c:
    // 0x29dd0c: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x29dd0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_29dd10:
    // 0x29dd10: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x29dd10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_29dd14:
    // 0x29dd14: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x29dd14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_29dd18:
    // 0x29dd18: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x29dd18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_29dd1c:
    // 0x29dd1c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x29dd1cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_29dd20:
    // 0x29dd20: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x29dd20u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_29dd24:
    // 0x29dd24: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x29dd24u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_29dd28:
    // 0x29dd28: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x29dd28u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_29dd2c:
    // 0x29dd2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29dd2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29dd30:
    // 0x29dd30: 0x3e00008  jr          $ra
label_29dd34:
    if (ctx->pc == 0x29DD34u) {
        ctx->pc = 0x29DD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DD30u;
        // 0x29dd34: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DD38u;
        goto label_fallthrough_0x29dd30;
    }
    ctx->pc = 0x29DD30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29DD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DD30u;
        // 0x29dd34: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29DD30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x29dd30:
    ctx->pc = 0x29DD38u;
}
