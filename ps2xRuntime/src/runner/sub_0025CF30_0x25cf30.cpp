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

// Function: sub_0025CF30
// Address: 0x25cf30 - 0x25d020
void sub_0025CF30_0x25cf30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025CF30_0x25cf30");
#endif

    switch (ctx->pc) {
        case 0x25cf30u: goto label_25cf30;
        case 0x25cf34u: goto label_25cf34;
        case 0x25cf38u: goto label_25cf38;
        case 0x25cf3cu: goto label_25cf3c;
        case 0x25cf40u: goto label_25cf40;
        case 0x25cf44u: goto label_25cf44;
        case 0x25cf48u: goto label_25cf48;
        case 0x25cf4cu: goto label_25cf4c;
        case 0x25cf50u: goto label_25cf50;
        case 0x25cf54u: goto label_25cf54;
        case 0x25cf58u: goto label_25cf58;
        case 0x25cf5cu: goto label_25cf5c;
        case 0x25cf60u: goto label_25cf60;
        case 0x25cf64u: goto label_25cf64;
        case 0x25cf68u: goto label_25cf68;
        case 0x25cf6cu: goto label_25cf6c;
        case 0x25cf70u: goto label_25cf70;
        case 0x25cf74u: goto label_25cf74;
        case 0x25cf78u: goto label_25cf78;
        case 0x25cf7cu: goto label_25cf7c;
        case 0x25cf80u: goto label_25cf80;
        case 0x25cf84u: goto label_25cf84;
        case 0x25cf88u: goto label_25cf88;
        case 0x25cf8cu: goto label_25cf8c;
        case 0x25cf90u: goto label_25cf90;
        case 0x25cf94u: goto label_25cf94;
        case 0x25cf98u: goto label_25cf98;
        case 0x25cf9cu: goto label_25cf9c;
        case 0x25cfa0u: goto label_25cfa0;
        case 0x25cfa4u: goto label_25cfa4;
        case 0x25cfa8u: goto label_25cfa8;
        case 0x25cfacu: goto label_25cfac;
        case 0x25cfb0u: goto label_25cfb0;
        case 0x25cfb4u: goto label_25cfb4;
        case 0x25cfb8u: goto label_25cfb8;
        case 0x25cfbcu: goto label_25cfbc;
        case 0x25cfc0u: goto label_25cfc0;
        case 0x25cfc4u: goto label_25cfc4;
        case 0x25cfc8u: goto label_25cfc8;
        case 0x25cfccu: goto label_25cfcc;
        case 0x25cfd0u: goto label_25cfd0;
        case 0x25cfd4u: goto label_25cfd4;
        case 0x25cfd8u: goto label_25cfd8;
        case 0x25cfdcu: goto label_25cfdc;
        case 0x25cfe0u: goto label_25cfe0;
        case 0x25cfe4u: goto label_25cfe4;
        case 0x25cfe8u: goto label_25cfe8;
        case 0x25cfecu: goto label_25cfec;
        case 0x25cff0u: goto label_25cff0;
        case 0x25cff4u: goto label_25cff4;
        case 0x25cff8u: goto label_25cff8;
        case 0x25cffcu: goto label_25cffc;
        case 0x25d000u: goto label_25d000;
        case 0x25d004u: goto label_25d004;
        case 0x25d008u: goto label_25d008;
        case 0x25d00cu: goto label_25d00c;
        case 0x25d010u: goto label_25d010;
        case 0x25d014u: goto label_25d014;
        case 0x25d018u: goto label_25d018;
        case 0x25d01cu: goto label_25d01c;
        default: break;
    }

    ctx->pc = 0x25cf30u;

label_25cf30:
    // 0x25cf30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x25cf30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_25cf34:
    // 0x25cf34: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x25cf34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_25cf38:
    // 0x25cf38: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x25cf38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_25cf3c:
    // 0x25cf3c: 0x3c100056  lui         $s0, 0x56
    ctx->pc = 0x25cf3cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
label_25cf40:
    // 0x25cf40: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x25cf40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_25cf44:
    // 0x25cf44: 0x2610d9f0  addiu       $s0, $s0, -0x2610
    ctx->pc = 0x25cf44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294957552));
label_25cf48:
    // 0x25cf48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25cf48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_25cf4c:
    // 0x25cf4c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x25cf4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_25cf50:
    // 0x25cf50: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x25cf50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_25cf54:
    // 0x25cf54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25cf54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25cf58:
    // 0x25cf58: 0xc041532  jal         func_1054C8
label_25cf5c:
    if (ctx->pc == 0x25CF5Cu) {
        ctx->pc = 0x25CF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CF58u;
        // 0x25cf5c: 0x8e3300d8  lw          $s3, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CF60u;
        goto label_25cf60;
    }
    ctx->pc = 0x25CF58u;
    SET_GPR_U32(ctx, 31, 0x25CF60u);
    ctx->pc = 0x25CF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CF58u;
    // 0x25cf5c: 0x8e3300d8  lw          $s3, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x25CF58u, 0x25CF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CF60u;
label_25cf60:
    // 0x25cf60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25cf60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25cf64:
    // 0x25cf64: 0xc041532  jal         func_1054C8
label_25cf68:
    if (ctx->pc == 0x25CF68u) {
        ctx->pc = 0x25CF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CF64u;
        // 0x25cf68: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CF6Cu;
        goto label_25cf6c;
    }
    ctx->pc = 0x25CF64u;
    SET_GPR_U32(ctx, 31, 0x25CF6Cu);
    ctx->pc = 0x25CF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CF64u;
    // 0x25cf68: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x25CF64u, 0x25CF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CF6Cu;
label_25cf6c:
    // 0x25cf6c: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_25cf70:
    if (ctx->pc == 0x25CF70u) {
        ctx->pc = 0x25CF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CF6Cu;
        // 0x25cf70: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CF74u;
        goto label_25cf74;
    }
    ctx->pc = 0x25CF6Cu;
    {
        const bool branch_taken_0x25cf6c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x25CF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CF6Cu;
        // 0x25cf70: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cf6c) {
            ctx->pc = 0x25CF90u;
            goto label_25cf90;
        }
    }
    ctx->pc = 0x25CF74u;
label_25cf74:
    // 0x25cf74: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x25cf74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_25cf78:
    // 0x25cf78: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25cf78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25cf7c:
    // 0x25cf7c: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x25cf7cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_25cf80:
    // 0x25cf80: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x25cf80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25cf84:
    // 0x25cf84: 0x240601b2  addiu       $a2, $zero, 0x1B2
    ctx->pc = 0x25cf84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 434));
label_25cf88:
    // 0x25cf88: 0xc04159e  jal         func_105678
label_25cf8c:
    if (ctx->pc == 0x25CF8Cu) {
        ctx->pc = 0x25CF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CF88u;
        // 0x25cf8c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CF90u;
        goto label_25cf90;
    }
    ctx->pc = 0x25CF88u;
    SET_GPR_U32(ctx, 31, 0x25CF90u);
    ctx->pc = 0x25CF8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CF88u;
    // 0x25cf8c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x25CF88u, 0x25CF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CF90u;
label_25cf90:
    // 0x25cf90: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_25cf94:
    if (ctx->pc == 0x25CF94u) {
        ctx->pc = 0x25CF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CF90u;
        // 0x25cf94: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CF98u;
        goto label_25cf98;
    }
    ctx->pc = 0x25CF90u;
    {
        const bool branch_taken_0x25cf90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x25CF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CF90u;
        // 0x25cf94: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cf90) {
            ctx->pc = 0x25CFB8u;
            goto label_25cfb8;
        }
    }
    ctx->pc = 0x25CF98u;
label_25cf98:
    // 0x25cf98: 0x8e2500d8  lw          $a1, 0xD8($s1)
    ctx->pc = 0x25cf98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_25cf9c:
    // 0x25cf9c: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x25cf9cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_25cfa0:
    // 0x25cfa0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25cfa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25cfa4:
    // 0x25cfa4: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x25cfa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_25cfa8:
    // 0x25cfa8: 0x3421ccce  ori         $at, $at, 0xCCCE
    ctx->pc = 0x25cfa8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52430);
label_25cfac:
    // 0x25cfac: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x25cfacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25cfb0:
    // 0x25cfb0: 0xc041b20  jal         func_106C80
label_25cfb4:
    if (ctx->pc == 0x25CFB4u) {
        ctx->pc = 0x25CFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CFB0u;
        // 0x25cfb4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CFB8u;
        goto label_25cfb8;
    }
    ctx->pc = 0x25CFB0u;
    SET_GPR_U32(ctx, 31, 0x25CFB8u);
    ctx->pc = 0x25CFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CFB0u;
    // 0x25cfb4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x25CFB0u, 0x25CFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CFB8u;
label_25cfb8:
    // 0x25cfb8: 0xc05d484  jal         func_175210
label_25cfbc:
    if (ctx->pc == 0x25CFBCu) {
        ctx->pc = 0x25CFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CFB8u;
        // 0x25cfbc: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CFC0u;
        goto label_25cfc0;
    }
    ctx->pc = 0x25CFB8u;
    SET_GPR_U32(ctx, 31, 0x25CFC0u);
    ctx->pc = 0x25CFBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CFB8u;
    // 0x25cfbc: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x25CFB8u, 0x25CFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CFC0u;
label_25cfc0:
    // 0x25cfc0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x25cfc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_25cfc4:
    // 0x25cfc4: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x25cfc4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_25cfc8:
    // 0x25cfc8: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x25cfc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_25cfcc:
    // 0x25cfcc: 0xa0f809  jalr        $a1
label_25cfd0:
    if (ctx->pc == 0x25CFD0u) {
        ctx->pc = 0x25CFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CFCCu;
        // 0x25cfd0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CFD4u;
        goto label_25cfd4;
    }
    ctx->pc = 0x25CFCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x25CFD4u);
        ctx->pc = 0x25CFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CFCCu;
        // 0x25cfd0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25CFCCu, 0x25CFD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25CFD4u;
label_25cfd4:
    // 0x25cfd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25cfd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25cfd8:
    // 0x25cfd8: 0xc087016  jal         func_21C058
label_25cfdc:
    if (ctx->pc == 0x25CFDCu) {
        ctx->pc = 0x25CFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CFD8u;
        // 0x25cfdc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CFE0u;
        goto label_25cfe0;
    }
    ctx->pc = 0x25CFD8u;
    SET_GPR_U32(ctx, 31, 0x25CFE0u);
    ctx->pc = 0x25CFDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CFD8u;
    // 0x25cfdc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x25CFD8u, 0x25CFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CFE0u;
label_25cfe0:
    // 0x25cfe0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x25cfe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25cfe4:
    // 0x25cfe4: 0xc05d53a  jal         func_1754E8
label_25cfe8:
    if (ctx->pc == 0x25CFE8u) {
        ctx->pc = 0x25CFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CFE4u;
        // 0x25cfe8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CFECu;
        goto label_25cfec;
    }
    ctx->pc = 0x25CFE4u;
    SET_GPR_U32(ctx, 31, 0x25CFECu);
    ctx->pc = 0x25CFE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CFE4u;
    // 0x25cfe8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x25CFE4u, 0x25CFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CFECu;
label_25cfec:
    // 0x25cfec: 0xc0973c4  jal         func_25CF10
label_25cff0:
    if (ctx->pc == 0x25CFF0u) {
        ctx->pc = 0x25CFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CFECu;
        // 0x25cff0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CFF4u;
        goto label_25cff4;
    }
    ctx->pc = 0x25CFECu;
    SET_GPR_U32(ctx, 31, 0x25CFF4u);
    ctx->pc = 0x25CFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CFECu;
    // 0x25cff0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CF10u, 0x25CFECu, 0x25CFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CFF4u;
label_25cff4:
    // 0x25cff4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x25cff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25cff8:
    // 0x25cff8: 0xc05d4f6  jal         func_1753D8
label_25cffc:
    if (ctx->pc == 0x25CFFCu) {
        ctx->pc = 0x25CFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CFF8u;
        // 0x25cffc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D000u;
        goto label_25d000;
    }
    ctx->pc = 0x25CFF8u;
    SET_GPR_U32(ctx, 31, 0x25D000u);
    ctx->pc = 0x25CFFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CFF8u;
    // 0x25cffc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x25CFF8u, 0x25D000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D000u;
label_25d000:
    // 0x25d000: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x25d000u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_25d004:
    // 0x25d004: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x25d004u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_25d008:
    // 0x25d008: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x25d008u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_25d00c:
    // 0x25d00c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x25d00cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_25d010:
    // 0x25d010: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25d010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_25d014:
    // 0x25d014: 0x3e00008  jr          $ra
label_25d018:
    if (ctx->pc == 0x25D018u) {
        ctx->pc = 0x25D018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D014u;
        // 0x25d018: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D01Cu;
        goto label_25d01c;
    }
    ctx->pc = 0x25D014u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25D018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D014u;
        // 0x25d018: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D014u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25D01Cu;
label_25d01c:
    // 0x25d01c: 0x0  nop
    ctx->pc = 0x25d01cu;
    // NOP
    ctx->pc = 0x25d020u;
}
