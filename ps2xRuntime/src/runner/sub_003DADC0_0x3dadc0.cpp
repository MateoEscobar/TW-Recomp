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

// Function: sub_003DADC0
// Address: 0x3dadc0 - 0x3daf30
void sub_003DADC0_0x3dadc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DADC0_0x3dadc0");
#endif

    switch (ctx->pc) {
        case 0x3dadc0u: goto label_3dadc0;
        case 0x3dadc4u: goto label_3dadc4;
        case 0x3dadc8u: goto label_3dadc8;
        case 0x3dadccu: goto label_3dadcc;
        case 0x3dadd0u: goto label_3dadd0;
        case 0x3dadd4u: goto label_3dadd4;
        case 0x3dadd8u: goto label_3dadd8;
        case 0x3daddcu: goto label_3daddc;
        case 0x3dade0u: goto label_3dade0;
        case 0x3dade4u: goto label_3dade4;
        case 0x3dade8u: goto label_3dade8;
        case 0x3dadecu: goto label_3dadec;
        case 0x3dadf0u: goto label_3dadf0;
        case 0x3dadf4u: goto label_3dadf4;
        case 0x3dadf8u: goto label_3dadf8;
        case 0x3dadfcu: goto label_3dadfc;
        case 0x3dae00u: goto label_3dae00;
        case 0x3dae04u: goto label_3dae04;
        case 0x3dae08u: goto label_3dae08;
        case 0x3dae0cu: goto label_3dae0c;
        case 0x3dae10u: goto label_3dae10;
        case 0x3dae14u: goto label_3dae14;
        case 0x3dae18u: goto label_3dae18;
        case 0x3dae1cu: goto label_3dae1c;
        case 0x3dae20u: goto label_3dae20;
        case 0x3dae24u: goto label_3dae24;
        case 0x3dae28u: goto label_3dae28;
        case 0x3dae2cu: goto label_3dae2c;
        case 0x3dae30u: goto label_3dae30;
        case 0x3dae34u: goto label_3dae34;
        case 0x3dae38u: goto label_3dae38;
        case 0x3dae3cu: goto label_3dae3c;
        case 0x3dae40u: goto label_3dae40;
        case 0x3dae44u: goto label_3dae44;
        case 0x3dae48u: goto label_3dae48;
        case 0x3dae4cu: goto label_3dae4c;
        case 0x3dae50u: goto label_3dae50;
        case 0x3dae54u: goto label_3dae54;
        case 0x3dae58u: goto label_3dae58;
        case 0x3dae5cu: goto label_3dae5c;
        case 0x3dae60u: goto label_3dae60;
        case 0x3dae64u: goto label_3dae64;
        case 0x3dae68u: goto label_3dae68;
        case 0x3dae6cu: goto label_3dae6c;
        case 0x3dae70u: goto label_3dae70;
        case 0x3dae74u: goto label_3dae74;
        case 0x3dae78u: goto label_3dae78;
        case 0x3dae7cu: goto label_3dae7c;
        case 0x3dae80u: goto label_3dae80;
        case 0x3dae84u: goto label_3dae84;
        case 0x3dae88u: goto label_3dae88;
        case 0x3dae8cu: goto label_3dae8c;
        case 0x3dae90u: goto label_3dae90;
        case 0x3dae94u: goto label_3dae94;
        case 0x3dae98u: goto label_3dae98;
        case 0x3dae9cu: goto label_3dae9c;
        case 0x3daea0u: goto label_3daea0;
        case 0x3daea4u: goto label_3daea4;
        case 0x3daea8u: goto label_3daea8;
        case 0x3daeacu: goto label_3daeac;
        case 0x3daeb0u: goto label_3daeb0;
        case 0x3daeb4u: goto label_3daeb4;
        case 0x3daeb8u: goto label_3daeb8;
        case 0x3daebcu: goto label_3daebc;
        case 0x3daec0u: goto label_3daec0;
        case 0x3daec4u: goto label_3daec4;
        case 0x3daec8u: goto label_3daec8;
        case 0x3daeccu: goto label_3daecc;
        case 0x3daed0u: goto label_3daed0;
        case 0x3daed4u: goto label_3daed4;
        case 0x3daed8u: goto label_3daed8;
        case 0x3daedcu: goto label_3daedc;
        case 0x3daee0u: goto label_3daee0;
        case 0x3daee4u: goto label_3daee4;
        case 0x3daee8u: goto label_3daee8;
        case 0x3daeecu: goto label_3daeec;
        case 0x3daef0u: goto label_3daef0;
        case 0x3daef4u: goto label_3daef4;
        case 0x3daef8u: goto label_3daef8;
        case 0x3daefcu: goto label_3daefc;
        case 0x3daf00u: goto label_3daf00;
        case 0x3daf04u: goto label_3daf04;
        case 0x3daf08u: goto label_3daf08;
        case 0x3daf0cu: goto label_3daf0c;
        case 0x3daf10u: goto label_3daf10;
        case 0x3daf14u: goto label_3daf14;
        case 0x3daf18u: goto label_3daf18;
        case 0x3daf1cu: goto label_3daf1c;
        case 0x3daf20u: goto label_3daf20;
        case 0x3daf24u: goto label_3daf24;
        case 0x3daf28u: goto label_3daf28;
        case 0x3daf2cu: goto label_3daf2c;
        default: break;
    }

    ctx->pc = 0x3dadc0u;

label_3dadc0:
    // 0x3dadc0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3dadc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_3dadc4:
    // 0x3dadc4: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x3dadc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_3dadc8:
    // 0x3dadc8: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x3dadc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_3dadcc:
    // 0x3dadcc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3dadccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3dadd0:
    // 0x3dadd0: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x3dadd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_3dadd4:
    // 0x3dadd4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3dadd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3dadd8:
    // 0x3dadd8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3dadd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_3daddc:
    // 0x3daddc: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x3daddcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_3dade0:
    // 0x3dade0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3dade0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3dade4:
    // 0x3dade4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3dade4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3dade8:
    // 0x3dade8: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3dade8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3dadec:
    // 0x3dadec: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3dadecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3dadf0:
    // 0x3dadf0: 0x40f809  jalr        $v0
label_3dadf4:
    if (ctx->pc == 0x3DADF4u) {
        ctx->pc = 0x3DADF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DADF0u;
        // 0x3dadf4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DADF8u;
        goto label_3dadf8;
    }
    ctx->pc = 0x3DADF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3DADF8u);
        ctx->pc = 0x3DADF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DADF0u;
        // 0x3dadf4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DADF0u, 0x3DADF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3DADF8u;
label_3dadf8:
    // 0x3dadf8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3dadf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3dadfc:
    // 0x3dadfc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3dadfcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3dae00:
    // 0x3dae00: 0xc0e858c  jal         func_3A1630
label_3dae04:
    if (ctx->pc == 0x3DAE04u) {
        ctx->pc = 0x3DAE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAE00u;
        // 0x3dae04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DAE08u;
        goto label_3dae08;
    }
    ctx->pc = 0x3DAE00u;
    SET_GPR_U32(ctx, 31, 0x3DAE08u);
    ctx->pc = 0x3DAE04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DAE00u;
    // 0x3dae04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3DAE00u, 0x3DAE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DAE08u;
label_3dae08:
    // 0x3dae08: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x3dae08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
label_3dae0c:
    // 0x3dae0c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x3dae0cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_3dae10:
    // 0x3dae10: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3dae10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3dae14:
    // 0x3dae14: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3dae14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3dae18:
    // 0x3dae18: 0x344288ff  ori         $v0, $v0, 0x88FF
    ctx->pc = 0x3dae18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35071);
label_3dae1c:
    // 0x3dae1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3dae1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3dae20:
    // 0x3dae20: 0xe62000bc  swc1        $f0, 0xBC($s1)
    ctx->pc = 0x3dae20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 188), bits); }
label_3dae24:
    // 0x3dae24: 0xc0ea146  jal         func_3A8518
label_3dae28:
    if (ctx->pc == 0x3DAE28u) {
        ctx->pc = 0x3DAE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAE24u;
        // 0x3dae28: 0xae2200b0  sw          $v0, 0xB0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DAE2Cu;
        goto label_3dae2c;
    }
    ctx->pc = 0x3DAE24u;
    SET_GPR_U32(ctx, 31, 0x3DAE2Cu);
    ctx->pc = 0x3DAE28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DAE24u;
    // 0x3dae28: 0xae2200b0  sw          $v0, 0xB0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3DAE24u, 0x3DAE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DAE2Cu;
label_3dae2c:
    // 0x3dae2c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3dae2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3dae30:
    // 0x3dae30: 0xc0ea13a  jal         func_3A84E8
label_3dae34:
    if (ctx->pc == 0x3DAE34u) {
        ctx->pc = 0x3DAE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAE30u;
        // 0x3dae34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DAE38u;
        goto label_3dae38;
    }
    ctx->pc = 0x3DAE30u;
    SET_GPR_U32(ctx, 31, 0x3DAE38u);
    ctx->pc = 0x3DAE34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DAE30u;
    // 0x3dae34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84E8u, 0x3DAE30u, 0x3DAE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DAE38u;
label_3dae38:
    // 0x3dae38: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3dae38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3dae3c:
    // 0x3dae3c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3dae3cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3dae40:
    // 0x3dae40: 0xc0ea12a  jal         func_3A84A8
label_3dae44:
    if (ctx->pc == 0x3DAE44u) {
        ctx->pc = 0x3DAE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAE40u;
        // 0x3dae44: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DAE48u;
        goto label_3dae48;
    }
    ctx->pc = 0x3DAE40u;
    SET_GPR_U32(ctx, 31, 0x3DAE48u);
    ctx->pc = 0x3DAE44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DAE40u;
    // 0x3dae44: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3DAE40u, 0x3DAE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DAE48u;
label_3dae48:
    // 0x3dae48: 0x8e260054  lw          $a2, 0x54($s1)
    ctx->pc = 0x3dae48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_3dae4c:
    // 0x3dae4c: 0x3c021020  lui         $v0, 0x1020
    ctx->pc = 0x3dae4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4128 << 16));
label_3dae50:
    // 0x3dae50: 0x7ba70010  lq          $a3, 0x10($sp)
    ctx->pc = 0x3dae50u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3dae54:
    // 0x3dae54: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x3dae54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_3dae58:
    // 0x3dae58: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x3dae58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_3dae5c:
    // 0x3dae5c: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x3dae5cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_3dae60:
    // 0x3dae60: 0x8c64489c  lw          $a0, 0x489C($v1)
    ctx->pc = 0x3dae60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
label_3dae64:
    // 0x3dae64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3dae64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3dae68:
    // 0x3dae68: 0x7fa70000  sq          $a3, 0x0($sp)
    ctx->pc = 0x3dae68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 7));
label_3dae6c:
    // 0x3dae6c: 0xc1073cc  jal         func_41CF30
label_3dae70:
    if (ctx->pc == 0x3DAE70u) {
        ctx->pc = 0x3DAE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAE6Cu;
        // 0x3dae70: 0xae260054  sw          $a2, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DAE74u;
        goto label_3dae74;
    }
    ctx->pc = 0x3DAE6Cu;
    SET_GPR_U32(ctx, 31, 0x3DAE74u);
    ctx->pc = 0x3DAE70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DAE6Cu;
    // 0x3dae70: 0xae260054  sw          $a2, 0x54($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CF30u, 0x3DAE6Cu, 0x3DAE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DAE74u;
label_3dae74:
    // 0x3dae74: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3dae74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3dae78:
    // 0x3dae78: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_3dae7c:
    if (ctx->pc == 0x3DAE7Cu) {
        ctx->pc = 0x3DAE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAE78u;
        // 0x3dae7c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DAE80u;
        goto label_3dae80;
    }
    ctx->pc = 0x3DAE78u;
    {
        const bool branch_taken_0x3dae78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DAE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAE78u;
        // 0x3dae7c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dae78) {
            ctx->pc = 0x3DAE98u;
            goto label_3dae98;
        }
    }
    ctx->pc = 0x3DAE80u;
label_3dae80:
    // 0x3dae80: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x3dae80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_3dae84:
    // 0x3dae84: 0x3c02efff  lui         $v0, 0xEFFF
    ctx->pc = 0x3dae84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61439 << 16));
label_3dae88:
    // 0x3dae88: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3dae88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3dae8c:
    // 0x3dae8c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3dae8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3dae90:
    // 0x3dae90: 0xae230054  sw          $v1, 0x54($s1)
    ctx->pc = 0x3dae90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
label_3dae94:
    // 0x3dae94: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3dae94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3dae98:
    // 0x3dae98: 0x7ba60000  lq          $a2, 0x0($sp)
    ctx->pc = 0x3dae98u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3dae9c:
    // 0x3dae9c: 0x244216c0  addiu       $v0, $v0, 0x16C0
    ctx->pc = 0x3dae9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
label_3daea0:
    // 0x3daea0: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3daea0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3daea4:
    // 0x3daea4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3daea4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_3daea8:
    // 0x3daea8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3daea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3daeac:
    // 0x3daeac: 0xae3200c4  sw          $s2, 0xC4($s1)
    ctx->pc = 0x3daeacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 18));
label_3daeb0:
    // 0x3daeb0: 0x2484b8b8  addiu       $a0, $a0, -0x4748
    ctx->pc = 0x3daeb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
label_3daeb4:
    // 0x3daeb4: 0x7e230030  sq          $v1, 0x30($s1)
    ctx->pc = 0x3daeb4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), GPR_VEC(ctx, 3));
label_3daeb8:
    // 0x3daeb8: 0xc0cd4ee  jal         func_3353B8
label_3daebc:
    if (ctx->pc == 0x3DAEBCu) {
        ctx->pc = 0x3DAEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAEB8u;
        // 0x3daebc: 0x7e260010  sq          $a2, 0x10($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DAEC0u;
        goto label_3daec0;
    }
    ctx->pc = 0x3DAEB8u;
    SET_GPR_U32(ctx, 31, 0x3DAEC0u);
    ctx->pc = 0x3DAEBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DAEB8u;
    // 0x3daebc: 0x7e260010  sq          $a2, 0x10($s1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3DAEB8u, 0x3DAEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DAEC0u;
label_3daec0:
    // 0x3daec0: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x3daec0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_3daec4:
    // 0x3daec4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3daec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3daec8:
    // 0x3daec8: 0x34a50036  ori         $a1, $a1, 0x36
    ctx->pc = 0x3daec8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54);
label_3daecc:
    // 0x3daecc: 0xc0e9404  jal         func_3A5010
label_3daed0:
    if (ctx->pc == 0x3DAED0u) {
        ctx->pc = 0x3DAED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAECCu;
        // 0x3daed0: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DAED4u;
        goto label_3daed4;
    }
    ctx->pc = 0x3DAECCu;
    SET_GPR_U32(ctx, 31, 0x3DAED4u);
    ctx->pc = 0x3DAED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DAECCu;
    // 0x3daed0: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5010u, 0x3DAECCu, 0x3DAED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DAED4u;
label_3daed4:
    // 0x3daed4: 0x3c013c88  lui         $at, 0x3C88
    ctx->pc = 0x3daed4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15496 << 16));
label_3daed8:
    // 0x3daed8: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x3daed8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
label_3daedc:
    // 0x3daedc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3daedcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3daee0:
    // 0x3daee0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3daee0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3daee4:
    // 0x3daee4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3daee4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3daee8:
    // 0x3daee8: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x3daee8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_3daeec:
    // 0x3daeec: 0xae600010  sw          $zero, 0x10($s3)
    ctx->pc = 0x3daeecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
label_3daef0:
    // 0x3daef0: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x3daef0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_3daef4:
    // 0x3daef4: 0xe7a1002c  swc1        $f1, 0x2C($sp)
    ctx->pc = 0x3daef4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_3daef8:
    // 0x3daef8: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x3daef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_3daefc:
    // 0x3daefc: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x3daefcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
label_3daf00:
    // 0x3daf00: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x3daf00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3daf04:
    // 0x3daf04: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3daf04u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3daf08:
    // 0x3daf08: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x3daf08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3daf0c:
    // 0x3daf0c: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x3daf0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_3daf10:
    // 0x3daf10: 0x7e620000  sq          $v0, 0x0($s3)
    ctx->pc = 0x3daf10u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 2));
label_3daf14:
    // 0x3daf14: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x3daf14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3daf18:
    // 0x3daf18: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3daf18u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3daf1c:
    // 0x3daf1c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3daf1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3daf20:
    // 0x3daf20: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x3daf20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3daf24:
    // 0x3daf24: 0x3e00008  jr          $ra
label_3daf28:
    if (ctx->pc == 0x3DAF28u) {
        ctx->pc = 0x3DAF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAF24u;
        // 0x3daf28: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DAF2Cu;
        goto label_3daf2c;
    }
    ctx->pc = 0x3DAF24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DAF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAF24u;
        // 0x3daf28: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DAF24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DAF2Cu;
label_3daf2c:
    // 0x3daf2c: 0x0  nop
    ctx->pc = 0x3daf2cu;
    // NOP
    ctx->pc = 0x3daf30u;
}
