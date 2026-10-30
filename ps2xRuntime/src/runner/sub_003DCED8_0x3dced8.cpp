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

// Function: sub_003DCED8
// Address: 0x3dced8 - 0x3dd060
void sub_003DCED8_0x3dced8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DCED8_0x3dced8");
#endif

    switch (ctx->pc) {
        case 0x3dced8u: goto label_3dced8;
        case 0x3dcedcu: goto label_3dcedc;
        case 0x3dcee0u: goto label_3dcee0;
        case 0x3dcee4u: goto label_3dcee4;
        case 0x3dcee8u: goto label_3dcee8;
        case 0x3dceecu: goto label_3dceec;
        case 0x3dcef0u: goto label_3dcef0;
        case 0x3dcef4u: goto label_3dcef4;
        case 0x3dcef8u: goto label_3dcef8;
        case 0x3dcefcu: goto label_3dcefc;
        case 0x3dcf00u: goto label_3dcf00;
        case 0x3dcf04u: goto label_3dcf04;
        case 0x3dcf08u: goto label_3dcf08;
        case 0x3dcf0cu: goto label_3dcf0c;
        case 0x3dcf10u: goto label_3dcf10;
        case 0x3dcf14u: goto label_3dcf14;
        case 0x3dcf18u: goto label_3dcf18;
        case 0x3dcf1cu: goto label_3dcf1c;
        case 0x3dcf20u: goto label_3dcf20;
        case 0x3dcf24u: goto label_3dcf24;
        case 0x3dcf28u: goto label_3dcf28;
        case 0x3dcf2cu: goto label_3dcf2c;
        case 0x3dcf30u: goto label_3dcf30;
        case 0x3dcf34u: goto label_3dcf34;
        case 0x3dcf38u: goto label_3dcf38;
        case 0x3dcf3cu: goto label_3dcf3c;
        case 0x3dcf40u: goto label_3dcf40;
        case 0x3dcf44u: goto label_3dcf44;
        case 0x3dcf48u: goto label_3dcf48;
        case 0x3dcf4cu: goto label_3dcf4c;
        case 0x3dcf50u: goto label_3dcf50;
        case 0x3dcf54u: goto label_3dcf54;
        case 0x3dcf58u: goto label_3dcf58;
        case 0x3dcf5cu: goto label_3dcf5c;
        case 0x3dcf60u: goto label_3dcf60;
        case 0x3dcf64u: goto label_3dcf64;
        case 0x3dcf68u: goto label_3dcf68;
        case 0x3dcf6cu: goto label_3dcf6c;
        case 0x3dcf70u: goto label_3dcf70;
        case 0x3dcf74u: goto label_3dcf74;
        case 0x3dcf78u: goto label_3dcf78;
        case 0x3dcf7cu: goto label_3dcf7c;
        case 0x3dcf80u: goto label_3dcf80;
        case 0x3dcf84u: goto label_3dcf84;
        case 0x3dcf88u: goto label_3dcf88;
        case 0x3dcf8cu: goto label_3dcf8c;
        case 0x3dcf90u: goto label_3dcf90;
        case 0x3dcf94u: goto label_3dcf94;
        case 0x3dcf98u: goto label_3dcf98;
        case 0x3dcf9cu: goto label_3dcf9c;
        case 0x3dcfa0u: goto label_3dcfa0;
        case 0x3dcfa4u: goto label_3dcfa4;
        case 0x3dcfa8u: goto label_3dcfa8;
        case 0x3dcfacu: goto label_3dcfac;
        case 0x3dcfb0u: goto label_3dcfb0;
        case 0x3dcfb4u: goto label_3dcfb4;
        case 0x3dcfb8u: goto label_3dcfb8;
        case 0x3dcfbcu: goto label_3dcfbc;
        case 0x3dcfc0u: goto label_3dcfc0;
        case 0x3dcfc4u: goto label_3dcfc4;
        case 0x3dcfc8u: goto label_3dcfc8;
        case 0x3dcfccu: goto label_3dcfcc;
        case 0x3dcfd0u: goto label_3dcfd0;
        case 0x3dcfd4u: goto label_3dcfd4;
        case 0x3dcfd8u: goto label_3dcfd8;
        case 0x3dcfdcu: goto label_3dcfdc;
        case 0x3dcfe0u: goto label_3dcfe0;
        case 0x3dcfe4u: goto label_3dcfe4;
        case 0x3dcfe8u: goto label_3dcfe8;
        case 0x3dcfecu: goto label_3dcfec;
        case 0x3dcff0u: goto label_3dcff0;
        case 0x3dcff4u: goto label_3dcff4;
        case 0x3dcff8u: goto label_3dcff8;
        case 0x3dcffcu: goto label_3dcffc;
        case 0x3dd000u: goto label_3dd000;
        case 0x3dd004u: goto label_3dd004;
        case 0x3dd008u: goto label_3dd008;
        case 0x3dd00cu: goto label_3dd00c;
        case 0x3dd010u: goto label_3dd010;
        case 0x3dd014u: goto label_3dd014;
        case 0x3dd018u: goto label_3dd018;
        case 0x3dd01cu: goto label_3dd01c;
        case 0x3dd020u: goto label_3dd020;
        case 0x3dd024u: goto label_3dd024;
        case 0x3dd028u: goto label_3dd028;
        case 0x3dd02cu: goto label_3dd02c;
        case 0x3dd030u: goto label_3dd030;
        case 0x3dd034u: goto label_3dd034;
        case 0x3dd038u: goto label_3dd038;
        case 0x3dd03cu: goto label_3dd03c;
        case 0x3dd040u: goto label_3dd040;
        case 0x3dd044u: goto label_3dd044;
        case 0x3dd048u: goto label_3dd048;
        case 0x3dd04cu: goto label_3dd04c;
        case 0x3dd050u: goto label_3dd050;
        case 0x3dd054u: goto label_3dd054;
        case 0x3dd058u: goto label_3dd058;
        case 0x3dd05cu: goto label_3dd05c;
        default: break;
    }

    ctx->pc = 0x3dced8u;

label_3dced8:
    // 0x3dced8: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x3dced8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_3dcedc:
    // 0x3dcedc: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x3dcedcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_3dcee0:
    // 0x3dcee0: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x3dcee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_3dcee4:
    // 0x3dcee4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3dcee4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3dcee8:
    // 0x3dcee8: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x3dcee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_3dceec:
    // 0x3dceec: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3dceecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3dcef0:
    // 0x3dcef0: 0xe7b500d8  swc1        $f21, 0xD8($sp)
    ctx->pc = 0x3dcef0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_3dcef4:
    // 0x3dcef4: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x3dcef4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_3dcef8:
    // 0x3dcef8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x3dcef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_3dcefc:
    // 0x3dcefc: 0x3c01beb7  lui         $at, 0xBEB7
    ctx->pc = 0x3dcefcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48823 << 16));
label_3dcf00:
    // 0x3dcf00: 0x34213095  ori         $at, $at, 0x3095
    ctx->pc = 0x3dcf00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12437);
label_3dcf04:
    // 0x3dcf04: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x3dcf04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_3dcf08:
    // 0x3dcf08: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3dcf08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3dcf0c:
    // 0x3dcf0c: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3dcf0cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3dcf10:
    // 0x3dcf10: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3dcf10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3dcf14:
    // 0x3dcf14: 0x40f809  jalr        $v0
label_3dcf18:
    if (ctx->pc == 0x3DCF18u) {
        ctx->pc = 0x3DCF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCF14u;
        // 0x3dcf18: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DCF1Cu;
        goto label_3dcf1c;
    }
    ctx->pc = 0x3DCF14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3DCF1Cu);
        ctx->pc = 0x3DCF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCF14u;
        // 0x3dcf18: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DCF14u, 0x3DCF1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3DCF1Cu;
label_3dcf1c:
    // 0x3dcf1c: 0x3c013e8f  lui         $at, 0x3E8F
    ctx->pc = 0x3dcf1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16015 << 16));
label_3dcf20:
    // 0x3dcf20: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x3dcf20u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
label_3dcf24:
    // 0x3dcf24: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3dcf24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3dcf28:
    // 0x3dcf28: 0x24030401  addiu       $v1, $zero, 0x401
    ctx->pc = 0x3dcf28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1025));
label_3dcf2c:
    // 0x3dcf2c: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x3dcf2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_3dcf30:
    // 0x3dcf30: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3dcf30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3dcf34:
    // 0x3dcf34: 0xe60000bc  swc1        $f0, 0xBC($s0)
    ctx->pc = 0x3dcf34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 188), bits); }
label_3dcf38:
    // 0x3dcf38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3dcf38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3dcf3c:
    // 0x3dcf3c: 0xc0e858c  jal         func_3A1630
label_3dcf40:
    if (ctx->pc == 0x3DCF40u) {
        ctx->pc = 0x3DCF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCF3Cu;
        // 0x3dcf40: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DCF44u;
        goto label_3dcf44;
    }
    ctx->pc = 0x3DCF3Cu;
    SET_GPR_U32(ctx, 31, 0x3DCF44u);
    ctx->pc = 0x3DCF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DCF3Cu;
    // 0x3dcf40: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3DCF3Cu, 0x3DCF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DCF44u;
label_3dcf44:
    // 0x3dcf44: 0xc0ea14c  jal         func_3A8530
label_3dcf48:
    if (ctx->pc == 0x3DCF48u) {
        ctx->pc = 0x3DCF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCF44u;
        // 0x3dcf48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DCF4Cu;
        goto label_3dcf4c;
    }
    ctx->pc = 0x3DCF44u;
    SET_GPR_U32(ctx, 31, 0x3DCF4Cu);
    ctx->pc = 0x3DCF48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DCF44u;
    // 0x3dcf48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3DCF44u, 0x3DCF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DCF4Cu;
label_3dcf4c:
    // 0x3dcf4c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3dcf4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3dcf50:
    // 0x3dcf50: 0xc0ea12a  jal         func_3A84A8
label_3dcf54:
    if (ctx->pc == 0x3DCF54u) {
        ctx->pc = 0x3DCF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCF50u;
        // 0x3dcf54: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DCF58u;
        goto label_3dcf58;
    }
    ctx->pc = 0x3DCF50u;
    SET_GPR_U32(ctx, 31, 0x3DCF58u);
    ctx->pc = 0x3DCF54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DCF50u;
    // 0x3dcf54: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3DCF50u, 0x3DCF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DCF58u;
label_3dcf58:
    // 0x3dcf58: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3dcf58u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3dcf5c:
    // 0x3dcf5c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3dcf5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3dcf60:
    // 0x3dcf60: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3dcf60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3dcf64:
    // 0x3dcf64: 0xc0ea12a  jal         func_3A84A8
label_3dcf68:
    if (ctx->pc == 0x3DCF68u) {
        ctx->pc = 0x3DCF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCF64u;
        // 0x3dcf68: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DCF6Cu;
        goto label_3dcf6c;
    }
    ctx->pc = 0x3DCF64u;
    SET_GPR_U32(ctx, 31, 0x3DCF6Cu);
    ctx->pc = 0x3DCF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DCF64u;
    // 0x3dcf68: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3DCF64u, 0x3DCF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DCF6Cu;
label_3dcf6c:
    // 0x3dcf6c: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x3dcf6cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3dcf70:
    // 0x3dcf70: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3dcf70u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_3dcf74:
    // 0x3dcf74: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3dcf74u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3dcf78:
    // 0x3dcf78: 0x7e030010  sq          $v1, 0x10($s0)
    ctx->pc = 0x3dcf78u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
label_3dcf7c:
    // 0x3dcf7c: 0x7e020020  sq          $v0, 0x20($s0)
    ctx->pc = 0x3dcf7cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 2));
label_3dcf80:
    // 0x3dcf80: 0xc12e310  jal         func_4B8C40
label_3dcf84:
    if (ctx->pc == 0x3DCF84u) {
        ctx->pc = 0x3DCF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCF80u;
        // 0x3dcf84: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DCF88u;
        goto label_3dcf88;
    }
    ctx->pc = 0x3DCF80u;
    SET_GPR_U32(ctx, 31, 0x3DCF88u);
    ctx->pc = 0x3DCF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DCF80u;
    // 0x3dcf84: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x3DCF80u, 0x3DCF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DCF88u;
label_3dcf88:
    // 0x3dcf88: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3dcf88u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3dcf8c:
    // 0x3dcf8c: 0xc12e29c  jal         func_4B8A70
label_3dcf90:
    if (ctx->pc == 0x3DCF90u) {
        ctx->pc = 0x3DCF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCF8Cu;
        // 0x3dcf90: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DCF94u;
        goto label_3dcf94;
    }
    ctx->pc = 0x3DCF8Cu;
    SET_GPR_U32(ctx, 31, 0x3DCF94u);
    ctx->pc = 0x3DCF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DCF8Cu;
    // 0x3dcf90: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x3DCF8Cu, 0x3DCF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DCF94u;
label_3dcf94:
    // 0x3dcf94: 0x7a030020  lq          $v1, 0x20($s0)
    ctx->pc = 0x3dcf94u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 32)));
label_3dcf98:
    // 0x3dcf98: 0xe7b40048  swc1        $f20, 0x48($sp)
    ctx->pc = 0x3dcf98u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_3dcf9c:
    // 0x3dcf9c: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x3dcf9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_3dcfa0:
    // 0x3dcfa0: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x3dcfa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
label_3dcfa4:
    // 0x3dcfa4: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x3dcfa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
label_3dcfa8:
    // 0x3dcfa8: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x3dcfa8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3dcfac:
    // 0x3dcfac: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x3dcfacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_3dcfb0:
    // 0x3dcfb0: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x3dcfb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_3dcfb4:
    // 0x3dcfb4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3dcfb4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3dcfb8:
    // 0x3dcfb8: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3dcfb8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3dcfbc:
    // 0x3dcfbc: 0x4be208ea  vmul.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x3dcfbcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3dcfc0:
    // 0x3dcfc0: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3dcfc0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3dcfc4:
    // 0x3dcfc4: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3dcfc4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3dcfc8:
    // 0x3dcfc8: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3dcfc8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3dcfcc:
    // 0x3dcfcc: 0x4bc209bf  vmulaw.xyz  $ACC, $vf1, $vf2w
    ctx->pc = 0x3dcfccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3dcfd0:
    // 0x3dcfd0: 0x4bc1114b  vmaddw.xyz  $vf5, $vf2, $vf1w
    ctx->pc = 0x3dcfd0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3dcfd4:
    // 0x3dcfd4: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3dcfd4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3dcfd8:
    // 0x3dcfd8: 0x4bc52168  vadd.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x3dcfd8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3dcfdc:
    // 0x3dcfdc: 0x4a231944  vsubx.w     $vf5, $vf3, $vf3x
    ctx->pc = 0x3dcfdcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3dcfe0:
    // 0x3dcfe0: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x3dcfe0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_3dcfe4:
    // 0x3dcfe4: 0x7a030010  lq          $v1, 0x10($s0)
    ctx->pc = 0x3dcfe4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 16)));
label_3dcfe8:
    // 0x3dcfe8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3dcfe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3dcfec:
    // 0x3dcfec: 0x8e070054  lw          $a3, 0x54($s0)
    ctx->pc = 0x3dcfecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_3dcff0:
    // 0x3dcff0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3dcff0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3dcff4:
    // 0x3dcff4: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x3dcff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_3dcff8:
    // 0x3dcff8: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x3dcff8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_3dcffc:
    // 0x3dcffc: 0x7e020020  sq          $v0, 0x20($s0)
    ctx->pc = 0x3dcffcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 2));
label_3dd000:
    // 0x3dd000: 0x3c040004  lui         $a0, 0x4
    ctx->pc = 0x3dd000u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4 << 16));
label_3dd004:
    // 0x3dd004: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3dd004u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3dd008:
    // 0x3dd008: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3dd008u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3dd00c:
    // 0x3dd00c: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x3dd00cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_3dd010:
    // 0x3dd010: 0xc0e93a2  jal         func_3A4E88
label_3dd014:
    if (ctx->pc == 0x3DD014u) {
        ctx->pc = 0x3DD014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD010u;
        // 0x3dd014: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD018u;
        goto label_3dd018;
    }
    ctx->pc = 0x3DD010u;
    SET_GPR_U32(ctx, 31, 0x3DD018u);
    ctx->pc = 0x3DD014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DD010u;
    // 0x3dd014: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4E88u, 0x3DD010u, 0x3DD018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DD018u;
label_3dd018:
    // 0x3dd018: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3dd018u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3dd01c:
    // 0x3dd01c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3dd01cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3dd020:
    // 0x3dd020: 0xae0200c4  sw          $v0, 0xC4($s0)
    ctx->pc = 0x3dd020u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 2));
label_3dd024:
    // 0x3dd024: 0xc0cd4ee  jal         func_3353B8
label_3dd028:
    if (ctx->pc == 0x3DD028u) {
        ctx->pc = 0x3DD028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD024u;
        // 0x3dd028: 0x2484b8b8  addiu       $a0, $a0, -0x4748 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD02Cu;
        goto label_3dd02c;
    }
    ctx->pc = 0x3DD024u;
    SET_GPR_U32(ctx, 31, 0x3DD02Cu);
    ctx->pc = 0x3DD028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DD024u;
    // 0x3dd028: 0x2484b8b8  addiu       $a0, $a0, -0x4748 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3DD024u, 0x3DD02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DD02Cu;
label_3dd02c:
    // 0x3dd02c: 0x3c050007  lui         $a1, 0x7
    ctx->pc = 0x3dd02cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)7 << 16));
label_3dd030:
    // 0x3dd030: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3dd030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3dd034:
    // 0x3dd034: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x3dd034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_3dd038:
    // 0x3dd038: 0xc0e9404  jal         func_3A5010
label_3dd03c:
    if (ctx->pc == 0x3DD03Cu) {
        ctx->pc = 0x3DD03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD038u;
        // 0x3dd03c: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD040u;
        goto label_3dd040;
    }
    ctx->pc = 0x3DD038u;
    SET_GPR_U32(ctx, 31, 0x3DD040u);
    ctx->pc = 0x3DD03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DD038u;
    // 0x3dd03c: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5010u, 0x3DD038u, 0x3DD040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DD040u;
label_3dd040:
    // 0x3dd040: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x3dd040u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_3dd044:
    // 0x3dd044: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x3dd044u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3dd048:
    // 0x3dd048: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x3dd048u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3dd04c:
    // 0x3dd04c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x3dd04cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_3dd050:
    // 0x3dd050: 0xc7b500d8  lwc1        $f21, 0xD8($sp)
    ctx->pc = 0x3dd050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3dd054:
    // 0x3dd054: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x3dd054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3dd058:
    // 0x3dd058: 0x3e00008  jr          $ra
label_3dd05c:
    if (ctx->pc == 0x3DD05Cu) {
        ctx->pc = 0x3DD05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD058u;
        // 0x3dd05c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD060u;
        goto label_fallthrough_0x3dd058;
    }
    ctx->pc = 0x3DD058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DD05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD058u;
        // 0x3dd05c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DD058u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3dd058:
    ctx->pc = 0x3DD060u;
}
