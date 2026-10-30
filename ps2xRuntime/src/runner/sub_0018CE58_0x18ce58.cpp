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

// Function: sub_0018CE58
// Address: 0x18ce58 - 0x18d020
void sub_0018CE58_0x18ce58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018CE58_0x18ce58");
#endif

    switch (ctx->pc) {
        case 0x18ce58u: goto label_18ce58;
        case 0x18ce5cu: goto label_18ce5c;
        case 0x18ce60u: goto label_18ce60;
        case 0x18ce64u: goto label_18ce64;
        case 0x18ce68u: goto label_18ce68;
        case 0x18ce6cu: goto label_18ce6c;
        case 0x18ce70u: goto label_18ce70;
        case 0x18ce74u: goto label_18ce74;
        case 0x18ce78u: goto label_18ce78;
        case 0x18ce7cu: goto label_18ce7c;
        case 0x18ce80u: goto label_18ce80;
        case 0x18ce84u: goto label_18ce84;
        case 0x18ce88u: goto label_18ce88;
        case 0x18ce8cu: goto label_18ce8c;
        case 0x18ce90u: goto label_18ce90;
        case 0x18ce94u: goto label_18ce94;
        case 0x18ce98u: goto label_18ce98;
        case 0x18ce9cu: goto label_18ce9c;
        case 0x18cea0u: goto label_18cea0;
        case 0x18cea4u: goto label_18cea4;
        case 0x18cea8u: goto label_18cea8;
        case 0x18ceacu: goto label_18ceac;
        case 0x18ceb0u: goto label_18ceb0;
        case 0x18ceb4u: goto label_18ceb4;
        case 0x18ceb8u: goto label_18ceb8;
        case 0x18cebcu: goto label_18cebc;
        case 0x18cec0u: goto label_18cec0;
        case 0x18cec4u: goto label_18cec4;
        case 0x18cec8u: goto label_18cec8;
        case 0x18ceccu: goto label_18cecc;
        case 0x18ced0u: goto label_18ced0;
        case 0x18ced4u: goto label_18ced4;
        case 0x18ced8u: goto label_18ced8;
        case 0x18cedcu: goto label_18cedc;
        case 0x18cee0u: goto label_18cee0;
        case 0x18cee4u: goto label_18cee4;
        case 0x18cee8u: goto label_18cee8;
        case 0x18ceecu: goto label_18ceec;
        case 0x18cef0u: goto label_18cef0;
        case 0x18cef4u: goto label_18cef4;
        case 0x18cef8u: goto label_18cef8;
        case 0x18cefcu: goto label_18cefc;
        case 0x18cf00u: goto label_18cf00;
        case 0x18cf04u: goto label_18cf04;
        case 0x18cf08u: goto label_18cf08;
        case 0x18cf0cu: goto label_18cf0c;
        case 0x18cf10u: goto label_18cf10;
        case 0x18cf14u: goto label_18cf14;
        case 0x18cf18u: goto label_18cf18;
        case 0x18cf1cu: goto label_18cf1c;
        case 0x18cf20u: goto label_18cf20;
        case 0x18cf24u: goto label_18cf24;
        case 0x18cf28u: goto label_18cf28;
        case 0x18cf2cu: goto label_18cf2c;
        case 0x18cf30u: goto label_18cf30;
        case 0x18cf34u: goto label_18cf34;
        case 0x18cf38u: goto label_18cf38;
        case 0x18cf3cu: goto label_18cf3c;
        case 0x18cf40u: goto label_18cf40;
        case 0x18cf44u: goto label_18cf44;
        case 0x18cf48u: goto label_18cf48;
        case 0x18cf4cu: goto label_18cf4c;
        case 0x18cf50u: goto label_18cf50;
        case 0x18cf54u: goto label_18cf54;
        case 0x18cf58u: goto label_18cf58;
        case 0x18cf5cu: goto label_18cf5c;
        case 0x18cf60u: goto label_18cf60;
        case 0x18cf64u: goto label_18cf64;
        case 0x18cf68u: goto label_18cf68;
        case 0x18cf6cu: goto label_18cf6c;
        case 0x18cf70u: goto label_18cf70;
        case 0x18cf74u: goto label_18cf74;
        case 0x18cf78u: goto label_18cf78;
        case 0x18cf7cu: goto label_18cf7c;
        case 0x18cf80u: goto label_18cf80;
        case 0x18cf84u: goto label_18cf84;
        case 0x18cf88u: goto label_18cf88;
        case 0x18cf8cu: goto label_18cf8c;
        case 0x18cf90u: goto label_18cf90;
        case 0x18cf94u: goto label_18cf94;
        case 0x18cf98u: goto label_18cf98;
        case 0x18cf9cu: goto label_18cf9c;
        case 0x18cfa0u: goto label_18cfa0;
        case 0x18cfa4u: goto label_18cfa4;
        case 0x18cfa8u: goto label_18cfa8;
        case 0x18cfacu: goto label_18cfac;
        case 0x18cfb0u: goto label_18cfb0;
        case 0x18cfb4u: goto label_18cfb4;
        case 0x18cfb8u: goto label_18cfb8;
        case 0x18cfbcu: goto label_18cfbc;
        case 0x18cfc0u: goto label_18cfc0;
        case 0x18cfc4u: goto label_18cfc4;
        case 0x18cfc8u: goto label_18cfc8;
        case 0x18cfccu: goto label_18cfcc;
        case 0x18cfd0u: goto label_18cfd0;
        case 0x18cfd4u: goto label_18cfd4;
        case 0x18cfd8u: goto label_18cfd8;
        case 0x18cfdcu: goto label_18cfdc;
        case 0x18cfe0u: goto label_18cfe0;
        case 0x18cfe4u: goto label_18cfe4;
        case 0x18cfe8u: goto label_18cfe8;
        case 0x18cfecu: goto label_18cfec;
        case 0x18cff0u: goto label_18cff0;
        case 0x18cff4u: goto label_18cff4;
        case 0x18cff8u: goto label_18cff8;
        case 0x18cffcu: goto label_18cffc;
        case 0x18d000u: goto label_18d000;
        case 0x18d004u: goto label_18d004;
        case 0x18d008u: goto label_18d008;
        case 0x18d00cu: goto label_18d00c;
        case 0x18d010u: goto label_18d010;
        case 0x18d014u: goto label_18d014;
        case 0x18d018u: goto label_18d018;
        case 0x18d01cu: goto label_18d01c;
        default: break;
    }

    ctx->pc = 0x18ce58u;

label_18ce58:
    // 0x18ce58: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x18ce58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_18ce5c:
    // 0x18ce5c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x18ce5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_18ce60:
    // 0x18ce60: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x18ce60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_18ce64:
    // 0x18ce64: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x18ce64u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_18ce68:
    // 0x18ce68: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18ce68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18ce6c:
    // 0x18ce6c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18ce6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_18ce70:
    // 0x18ce70: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x18ce70u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_18ce74:
    // 0x18ce74: 0x8c45b8b8  lw          $a1, -0x4748($v0)
    ctx->pc = 0x18ce74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_18ce78:
    // 0x18ce78: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x18ce78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_18ce7c:
    // 0x18ce7c: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x18ce7cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_18ce80:
    // 0x18ce80: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x18ce80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_18ce84:
    // 0x18ce84: 0x40f809  jalr        $v0
label_18ce88:
    if (ctx->pc == 0x18CE88u) {
        ctx->pc = 0x18CE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CE84u;
        // 0x18ce88: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CE8Cu;
        goto label_18ce8c;
    }
    ctx->pc = 0x18CE84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18CE8Cu);
        ctx->pc = 0x18CE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CE84u;
        // 0x18ce88: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18CE84u, 0x18CE8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18CE8Cu;
label_18ce8c:
    // 0x18ce8c: 0x8e0301e4  lw          $v1, 0x1E4($s0)
    ctx->pc = 0x18ce8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 484)));
label_18ce90:
    // 0x18ce90: 0x8e0401e0  lw          $a0, 0x1E0($s0)
    ctx->pc = 0x18ce90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 480)));
label_18ce94:
    // 0x18ce94: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18ce94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_18ce98:
    // 0x18ce98: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x18ce98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_18ce9c:
    // 0x18ce9c: 0x5440005c  bnel        $v0, $zero, . + 4 + (0x5C << 2)
label_18cea0:
    if (ctx->pc == 0x18CEA0u) {
        ctx->pc = 0x18CEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CE9Cu;
        // 0x18cea0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CEA4u;
        goto label_18cea4;
    }
    ctx->pc = 0x18CE9Cu;
    {
        const bool branch_taken_0x18ce9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18ce9c) {
            ctx->pc = 0x18CEA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18CE9Cu;
            // 0x18cea0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18D010u;
            goto label_18d010;
        }
    }
    ctx->pc = 0x18CEA4u;
label_18cea4:
    // 0x18cea4: 0xc60101d8  lwc1        $f1, 0x1D8($s0)
    ctx->pc = 0x18cea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18cea8:
    // 0x18cea8: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x18cea8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_18ceac:
    // 0x18ceac: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x18ceacu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_18ceb0:
    // 0x18ceb0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18ceb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18ceb4:
    // 0x18ceb4: 0x0  nop
    ctx->pc = 0x18ceb4u;
    // NOP
label_18ceb8:
    // 0x18ceb8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x18ceb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18cebc:
    // 0x18cebc: 0x0  nop
    ctx->pc = 0x18cebcu;
    // NOP
label_18cec0:
    // 0x18cec0: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
label_18cec4:
    if (ctx->pc == 0x18CEC4u) {
        ctx->pc = 0x18CEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CEC0u;
        // 0x18cec4: 0x8e0201c4  lw          $v0, 0x1C4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 452)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CEC8u;
        goto label_18cec8;
    }
    ctx->pc = 0x18CEC0u;
    {
        const bool branch_taken_0x18cec0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18cec0) {
            ctx->pc = 0x18CEC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18CEC0u;
            // 0x18cec4: 0x8e0201c4  lw          $v0, 0x1C4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 452)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18CECCu;
            goto label_18cecc;
        }
    }
    ctx->pc = 0x18CEC8u;
label_18cec8:
    // 0x18cec8: 0x8e0201d0  lw          $v0, 0x1D0($s0)
    ctx->pc = 0x18cec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 464)));
label_18cecc:
    // 0x18cecc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x18ceccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_18ced0:
    // 0x18ced0: 0x8e0301d4  lw          $v1, 0x1D4($s0)
    ctx->pc = 0x18ced0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
label_18ced4:
    // 0x18ced4: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_18ced8:
    if (ctx->pc == 0x18CED8u) {
        ctx->pc = 0x18CED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CED4u;
        // 0x18ced8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CEDCu;
        goto label_18cedc;
    }
    ctx->pc = 0x18CED4u;
    {
        const bool branch_taken_0x18ced4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18CED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CED4u;
        // 0x18ced8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ced4) {
            ctx->pc = 0x18CEFCu;
            goto label_18cefc;
        }
    }
    ctx->pc = 0x18CEDCu;
label_18cedc:
    // 0x18cedc: 0xc60101d8  lwc1        $f1, 0x1D8($s0)
    ctx->pc = 0x18cedcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18cee0:
    // 0x18cee0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x18cee0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18cee4:
    // 0x18cee4: 0x0  nop
    ctx->pc = 0x18cee4u;
    // NOP
label_18cee8:
    // 0x18cee8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x18cee8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18ceec:
    // 0x18ceec: 0x0  nop
    ctx->pc = 0x18ceecu;
    // NOP
label_18cef0:
    // 0x18cef0: 0x45030047  bc1tl       . + 4 + (0x47 << 2)
label_18cef4:
    if (ctx->pc == 0x18CEF4u) {
        ctx->pc = 0x18CEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CEF0u;
        // 0x18cef4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CEF8u;
        goto label_18cef8;
    }
    ctx->pc = 0x18CEF0u;
    {
        const bool branch_taken_0x18cef0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18cef0) {
            ctx->pc = 0x18CEF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18CEF0u;
            // 0x18cef4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18D010u;
            goto label_18d010;
        }
    }
    ctx->pc = 0x18CEF8u;
label_18cef8:
    // 0x18cef8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18cef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18cefc:
    // 0x18cefc: 0x54620013  bnel        $v1, $v0, . + 4 + (0x13 << 2)
label_18cf00:
    if (ctx->pc == 0x18CF00u) {
        ctx->pc = 0x18CF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CEFCu;
        // 0x18cf00: 0xc60001dc  lwc1        $f0, 0x1DC($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CF04u;
        goto label_18cf04;
    }
    ctx->pc = 0x18CEFCu;
    {
        const bool branch_taken_0x18cefc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18cefc) {
            ctx->pc = 0x18CF00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18CEFCu;
            // 0x18cf00: 0xc60001dc  lwc1        $f0, 0x1DC($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x18CF4Cu;
            goto label_18cf4c;
        }
    }
    ctx->pc = 0x18CF04u;
label_18cf04:
    // 0x18cf04: 0xc60001d8  lwc1        $f0, 0x1D8($s0)
    ctx->pc = 0x18cf04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18cf08:
    // 0x18cf08: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x18cf08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_18cf0c:
    // 0x18cf0c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18cf0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_18cf10:
    // 0x18cf10: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x18cf10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18cf14:
    // 0x18cf14: 0x0  nop
    ctx->pc = 0x18cf14u;
    // NOP
label_18cf18:
    // 0x18cf18: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x18cf18u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18cf1c:
    // 0x18cf1c: 0x0  nop
    ctx->pc = 0x18cf1cu;
    // NOP
label_18cf20:
    // 0x18cf20: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_18cf24:
    if (ctx->pc == 0x18CF24u) {
        ctx->pc = 0x18CF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CF20u;
        // 0x18cf24: 0xae0201d4  sw          $v0, 0x1D4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 468), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CF28u;
        goto label_18cf28;
    }
    ctx->pc = 0x18CF20u;
    {
        const bool branch_taken_0x18cf20 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18CF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CF20u;
        // 0x18cf24: 0xae0201d4  sw          $v0, 0x1D4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 468), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cf20) {
            ctx->pc = 0x18CF3Cu;
            goto label_18cf3c;
        }
    }
    ctx->pc = 0x18CF28u;
label_18cf28:
    // 0x18cf28: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x18cf28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_18cf2c:
    // 0x18cf2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18cf2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18cf30:
    // 0x18cf30: 0xa3a20003  sb          $v0, 0x3($sp)
    ctx->pc = 0x18cf30u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 2));
label_18cf34:
    // 0x18cf34: 0xc063308  jal         func_18CC20
label_18cf38:
    if (ctx->pc == 0x18CF38u) {
        ctx->pc = 0x18CF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CF34u;
        // 0x18cf38: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CF3Cu;
        goto label_18cf3c;
    }
    ctx->pc = 0x18CF34u;
    SET_GPR_U32(ctx, 31, 0x18CF3Cu);
    ctx->pc = 0x18CF38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CF34u;
    // 0x18cf38: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18CC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CC20u, 0x18CF34u, 0x18CF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CF3Cu;
label_18cf3c:
    // 0x18cf3c: 0xc05651a  jal         func_159468
label_18cf40:
    if (ctx->pc == 0x18CF40u) {
        ctx->pc = 0x18CF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CF3Cu;
        // 0x18cf40: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CF44u;
        goto label_18cf44;
    }
    ctx->pc = 0x18CF3Cu;
    SET_GPR_U32(ctx, 31, 0x18CF44u);
    ctx->pc = 0x18CF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CF3Cu;
    // 0x18cf40: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x159468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159468u, 0x18CF3Cu, 0x18CF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CF44u;
label_18cf44:
    // 0x18cf44: 0x10000032  b           . + 4 + (0x32 << 2)
label_18cf48:
    if (ctx->pc == 0x18CF48u) {
        ctx->pc = 0x18CF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CF44u;
        // 0x18cf48: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CF4Cu;
        goto label_18cf4c;
    }
    ctx->pc = 0x18CF44u;
    {
        const bool branch_taken_0x18cf44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CF44u;
        // 0x18cf48: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cf44) {
            ctx->pc = 0x18D010u;
            goto label_18d010;
        }
    }
    ctx->pc = 0x18CF4Cu;
label_18cf4c:
    // 0x18cf4c: 0xc60101d8  lwc1        $f1, 0x1D8($s0)
    ctx->pc = 0x18cf4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18cf50:
    // 0x18cf50: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x18cf50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_18cf54:
    // 0x18cf54: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18cf54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_18cf58:
    // 0x18cf58: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x18cf58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_18cf5c:
    // 0x18cf5c: 0x44803800  mtc1        $zero, $f7
    ctx->pc = 0x18cf5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_18cf60:
    // 0x18cf60: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x18cf60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
label_18cf64:
    // 0x18cf64: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x18cf64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_18cf68:
    // 0x18cf68: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x18cf68u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_18cf6c:
    // 0x18cf6c: 0x920201c7  lbu         $v0, 0x1C7($s0)
    ctx->pc = 0x18cf6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 455)));
label_18cf70:
    // 0x18cf70: 0x460708e8  max.s       $f3, $f1, $f7
    ctx->pc = 0x18cf70u;
    ctx->f[3] = std::max(ctx->f[1], ctx->f[7]);
label_18cf74:
    // 0x18cf74: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x18cf74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
label_18cf78:
    // 0x18cf78: 0x34218081  ori         $at, $at, 0x8081
    ctx->pc = 0x18cf78u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32897);
label_18cf7c:
    // 0x18cf7c: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x18cf7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_18cf80:
    // 0x18cf80: 0x46061829  min.s       $f0, $f3, $f6
    ctx->pc = 0x18cf80u;
    ctx->f[0] = std::min(ctx->f[3], ctx->f[6]);
label_18cf84:
    // 0x18cf84: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x18cf84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_18cf88:
    // 0x18cf88: 0x0  nop
    ctx->pc = 0x18cf88u;
    // NOP
label_18cf8c:
    // 0x18cf8c: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x18cf8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
label_18cf90:
    // 0x18cf90: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x18cf90u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_18cf94:
    // 0x18cf94: 0xe60001d8  swc1        $f0, 0x1D8($s0)
    ctx->pc = 0x18cf94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 472), bits); }
label_18cf98:
    // 0x18cf98: 0x46003036  c.le.s      $f6, $f0
    ctx->pc = 0x18cf98u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18cf9c:
    // 0x18cf9c: 0x46052102  mul.s       $f4, $f4, $f5
    ctx->pc = 0x18cf9cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
label_18cfa0:
    // 0x18cfa0: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18cfa0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_18cfa4:
    // 0x18cfa4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x18cfa4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_18cfa8:
    // 0x18cfa8: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_18cfac:
    if (ctx->pc == 0x18CFACu) {
        ctx->pc = 0x18CFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CFA8u;
        // 0x18cfac: 0x304300ff  andi        $v1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CFB0u;
        goto label_18cfb0;
    }
    ctx->pc = 0x18CFA8u;
    {
        const bool branch_taken_0x18cfa8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18CFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CFA8u;
        // 0x18cfac: 0x304300ff  andi        $v1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cfa8) {
            ctx->pc = 0x18CFBCu;
            goto label_18cfbc;
        }
    }
    ctx->pc = 0x18CFB0u;
label_18cfb0:
    // 0x18cfb0: 0xe60601d8  swc1        $f6, 0x1D8($s0)
    ctx->pc = 0x18cfb0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 472), bits); }
label_18cfb4:
    // 0x18cfb4: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x18cfb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_18cfb8:
    // 0x18cfb8: 0xae0001d4  sw          $zero, 0x1D4($s0)
    ctx->pc = 0x18cfb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 468), GPR_U32(ctx, 0));
label_18cfbc:
    // 0x18cfbc: 0xc60001d8  lwc1        $f0, 0x1D8($s0)
    ctx->pc = 0x18cfbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18cfc0:
    // 0x18cfc0: 0x46040036  c.le.s      $f0, $f4
    ctx->pc = 0x18cfc0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18cfc4:
    // 0x18cfc4: 0x0  nop
    ctx->pc = 0x18cfc4u;
    // NOP
label_18cfc8:
    // 0x18cfc8: 0x4502000b  bc1fl       . + 4 + (0xB << 2)
label_18cfcc:
    if (ctx->pc == 0x18CFCCu) {
        ctx->pc = 0x18CFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CFC8u;
        // 0x18cfcc: 0xa3a30003  sb          $v1, 0x3($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CFD0u;
        goto label_18cfd0;
    }
    ctx->pc = 0x18CFC8u;
    {
        const bool branch_taken_0x18cfc8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18cfc8) {
            ctx->pc = 0x18CFCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18CFC8u;
            // 0x18cfcc: 0xa3a30003  sb          $v1, 0x3($sp) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18CFF8u;
            goto label_18cff8;
        }
    }
    ctx->pc = 0x18CFD0u;
label_18cfd0:
    // 0x18cfd0: 0xc60001dc  lwc1        $f0, 0x1DC($s0)
    ctx->pc = 0x18cfd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18cfd4:
    // 0x18cfd4: 0x46070034  c.lt.s      $f0, $f7
    ctx->pc = 0x18cfd4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18cfd8:
    // 0x18cfd8: 0x0  nop
    ctx->pc = 0x18cfd8u;
    // NOP
label_18cfdc:
    // 0x18cfdc: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_18cfe0:
    if (ctx->pc == 0x18CFE0u) {
        ctx->pc = 0x18CFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CFDCu;
        // 0x18cfe0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CFE4u;
        goto label_18cfe4;
    }
    ctx->pc = 0x18CFDCu;
    {
        const bool branch_taken_0x18cfdc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18CFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CFDCu;
        // 0x18cfe0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cfdc) {
            ctx->pc = 0x18CFF4u;
            goto label_18cff4;
        }
    }
    ctx->pc = 0x18CFE4u;
label_18cfe4:
    // 0x18cfe4: 0xe60701d8  swc1        $f7, 0x1D8($s0)
    ctx->pc = 0x18cfe4u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 472), bits); }
label_18cfe8:
    // 0x18cfe8: 0xae0001d4  sw          $zero, 0x1D4($s0)
    ctx->pc = 0x18cfe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 468), GPR_U32(ctx, 0));
label_18cfec:
    // 0x18cfec: 0x920301c7  lbu         $v1, 0x1C7($s0)
    ctx->pc = 0x18cfecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 455)));
label_18cff0:
    // 0x18cff0: 0xac400174  sw          $zero, 0x174($v0)
    ctx->pc = 0x18cff0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 372), GPR_U32(ctx, 0));
label_18cff4:
    // 0x18cff4: 0xa3a30003  sb          $v1, 0x3($sp)
    ctx->pc = 0x18cff4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 3));
label_18cff8:
    // 0x18cff8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18cff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18cffc:
    // 0x18cffc: 0xc063308  jal         func_18CC20
label_18d000:
    if (ctx->pc == 0x18D000u) {
        ctx->pc = 0x18D000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CFFCu;
        // 0x18d000: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D004u;
        goto label_18d004;
    }
    ctx->pc = 0x18CFFCu;
    SET_GPR_U32(ctx, 31, 0x18D004u);
    ctx->pc = 0x18D000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CFFCu;
    // 0x18d000: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18CC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CC20u, 0x18CFFCu, 0x18D004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D004u;
label_18d004:
    // 0x18d004: 0xc05651a  jal         func_159468
label_18d008:
    if (ctx->pc == 0x18D008u) {
        ctx->pc = 0x18D008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D004u;
        // 0x18d008: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D00Cu;
        goto label_18d00c;
    }
    ctx->pc = 0x18D004u;
    SET_GPR_U32(ctx, 31, 0x18D00Cu);
    ctx->pc = 0x18D008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D004u;
    // 0x18d008: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x159468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159468u, 0x18D004u, 0x18D00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D00Cu;
label_18d00c:
    // 0x18d00c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x18d00cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_18d010:
    // 0x18d010: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18d010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_18d014:
    // 0x18d014: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x18d014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_18d018:
    // 0x18d018: 0x3e00008  jr          $ra
label_18d01c:
    if (ctx->pc == 0x18D01Cu) {
        ctx->pc = 0x18D01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D018u;
        // 0x18d01c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D020u;
        goto label_fallthrough_0x18d018;
    }
    ctx->pc = 0x18D018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18D01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D018u;
        // 0x18d01c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18D018u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x18d018:
    ctx->pc = 0x18D020u;
}
