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

// Function: sub_003DDB88
// Address: 0x3ddb88 - 0x3ddc68
void sub_003DDB88_0x3ddb88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DDB88_0x3ddb88");
#endif

    switch (ctx->pc) {
        case 0x3ddb88u: goto label_3ddb88;
        case 0x3ddb8cu: goto label_3ddb8c;
        case 0x3ddb90u: goto label_3ddb90;
        case 0x3ddb94u: goto label_3ddb94;
        case 0x3ddb98u: goto label_3ddb98;
        case 0x3ddb9cu: goto label_3ddb9c;
        case 0x3ddba0u: goto label_3ddba0;
        case 0x3ddba4u: goto label_3ddba4;
        case 0x3ddba8u: goto label_3ddba8;
        case 0x3ddbacu: goto label_3ddbac;
        case 0x3ddbb0u: goto label_3ddbb0;
        case 0x3ddbb4u: goto label_3ddbb4;
        case 0x3ddbb8u: goto label_3ddbb8;
        case 0x3ddbbcu: goto label_3ddbbc;
        case 0x3ddbc0u: goto label_3ddbc0;
        case 0x3ddbc4u: goto label_3ddbc4;
        case 0x3ddbc8u: goto label_3ddbc8;
        case 0x3ddbccu: goto label_3ddbcc;
        case 0x3ddbd0u: goto label_3ddbd0;
        case 0x3ddbd4u: goto label_3ddbd4;
        case 0x3ddbd8u: goto label_3ddbd8;
        case 0x3ddbdcu: goto label_3ddbdc;
        case 0x3ddbe0u: goto label_3ddbe0;
        case 0x3ddbe4u: goto label_3ddbe4;
        case 0x3ddbe8u: goto label_3ddbe8;
        case 0x3ddbecu: goto label_3ddbec;
        case 0x3ddbf0u: goto label_3ddbf0;
        case 0x3ddbf4u: goto label_3ddbf4;
        case 0x3ddbf8u: goto label_3ddbf8;
        case 0x3ddbfcu: goto label_3ddbfc;
        case 0x3ddc00u: goto label_3ddc00;
        case 0x3ddc04u: goto label_3ddc04;
        case 0x3ddc08u: goto label_3ddc08;
        case 0x3ddc0cu: goto label_3ddc0c;
        case 0x3ddc10u: goto label_3ddc10;
        case 0x3ddc14u: goto label_3ddc14;
        case 0x3ddc18u: goto label_3ddc18;
        case 0x3ddc1cu: goto label_3ddc1c;
        case 0x3ddc20u: goto label_3ddc20;
        case 0x3ddc24u: goto label_3ddc24;
        case 0x3ddc28u: goto label_3ddc28;
        case 0x3ddc2cu: goto label_3ddc2c;
        case 0x3ddc30u: goto label_3ddc30;
        case 0x3ddc34u: goto label_3ddc34;
        case 0x3ddc38u: goto label_3ddc38;
        case 0x3ddc3cu: goto label_3ddc3c;
        case 0x3ddc40u: goto label_3ddc40;
        case 0x3ddc44u: goto label_3ddc44;
        case 0x3ddc48u: goto label_3ddc48;
        case 0x3ddc4cu: goto label_3ddc4c;
        case 0x3ddc50u: goto label_3ddc50;
        case 0x3ddc54u: goto label_3ddc54;
        case 0x3ddc58u: goto label_3ddc58;
        case 0x3ddc5cu: goto label_3ddc5c;
        case 0x3ddc60u: goto label_3ddc60;
        case 0x3ddc64u: goto label_3ddc64;
        default: break;
    }

    ctx->pc = 0x3ddb88u;

label_3ddb88:
    // 0x3ddb88: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3ddb88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_3ddb8c:
    // 0x3ddb8c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x3ddb8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_3ddb90:
    // 0x3ddb90: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x3ddb90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_3ddb94:
    // 0x3ddb94: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3ddb94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ddb98:
    // 0x3ddb98: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x3ddb98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_3ddb9c:
    // 0x3ddb9c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3ddb9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3ddba0:
    // 0x3ddba0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3ddba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3ddba4:
    // 0x3ddba4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3ddba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3ddba8:
    // 0x3ddba8: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3ddba8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3ddbac:
    // 0x3ddbac: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3ddbacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3ddbb0:
    // 0x3ddbb0: 0x40f809  jalr        $v0
label_3ddbb4:
    if (ctx->pc == 0x3DDBB4u) {
        ctx->pc = 0x3DDBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDBB0u;
        // 0x3ddbb4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DDBB8u;
        goto label_3ddbb8;
    }
    ctx->pc = 0x3DDBB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3DDBB8u);
        ctx->pc = 0x3DDBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDBB0u;
        // 0x3ddbb4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DDBB0u, 0x3DDBB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3DDBB8u;
label_3ddbb8:
    // 0x3ddbb8: 0xae0000bc  sw          $zero, 0xBC($s0)
    ctx->pc = 0x3ddbb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 0));
label_3ddbbc:
    // 0x3ddbbc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3ddbbcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ddbc0:
    // 0x3ddbc0: 0x240500f0  addiu       $a1, $zero, 0xF0
    ctx->pc = 0x3ddbc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
label_3ddbc4:
    // 0x3ddbc4: 0xc0e858c  jal         func_3A1630
label_3ddbc8:
    if (ctx->pc == 0x3DDBC8u) {
        ctx->pc = 0x3DDBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDBC4u;
        // 0x3ddbc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DDBCCu;
        goto label_3ddbcc;
    }
    ctx->pc = 0x3DDBC4u;
    SET_GPR_U32(ctx, 31, 0x3DDBCCu);
    ctx->pc = 0x3DDBC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DDBC4u;
    // 0x3ddbc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3DDBC4u, 0x3DDBCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DDBCCu;
label_3ddbcc:
    // 0x3ddbcc: 0xc0ea14c  jal         func_3A8530
label_3ddbd0:
    if (ctx->pc == 0x3DDBD0u) {
        ctx->pc = 0x3DDBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDBCCu;
        // 0x3ddbd0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DDBD4u;
        goto label_3ddbd4;
    }
    ctx->pc = 0x3DDBCCu;
    SET_GPR_U32(ctx, 31, 0x3DDBD4u);
    ctx->pc = 0x3DDBD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DDBCCu;
    // 0x3ddbd0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3DDBCCu, 0x3DDBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DDBD4u;
label_3ddbd4:
    // 0x3ddbd4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3ddbd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3ddbd8:
    // 0x3ddbd8: 0xc0ea12a  jal         func_3A84A8
label_3ddbdc:
    if (ctx->pc == 0x3DDBDCu) {
        ctx->pc = 0x3DDBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDBD8u;
        // 0x3ddbdc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DDBE0u;
        goto label_3ddbe0;
    }
    ctx->pc = 0x3DDBD8u;
    SET_GPR_U32(ctx, 31, 0x3DDBE0u);
    ctx->pc = 0x3DDBDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DDBD8u;
    // 0x3ddbdc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3DDBD8u, 0x3DDBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DDBE0u;
label_3ddbe0:
    // 0x3ddbe0: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3ddbe0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3ddbe4:
    // 0x3ddbe4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3ddbe4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ddbe8:
    // 0x3ddbe8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3ddbe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3ddbec:
    // 0x3ddbec: 0xc0ea12a  jal         func_3A84A8
label_3ddbf0:
    if (ctx->pc == 0x3DDBF0u) {
        ctx->pc = 0x3DDBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDBECu;
        // 0x3ddbf0: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DDBF4u;
        goto label_3ddbf4;
    }
    ctx->pc = 0x3DDBECu;
    SET_GPR_U32(ctx, 31, 0x3DDBF4u);
    ctx->pc = 0x3DDBF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DDBECu;
    // 0x3ddbf0: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3DDBECu, 0x3DDBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DDBF4u;
label_3ddbf4:
    // 0x3ddbf4: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3ddbf4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3ddbf8:
    // 0x3ddbf8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x3ddbf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3ddbfc:
    // 0x3ddbfc: 0x3c013f35  lui         $at, 0x3F35
    ctx->pc = 0x3ddbfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16181 << 16));
label_3ddc00:
    // 0x3ddc00: 0x34210481  ori         $at, $at, 0x481
    ctx->pc = 0x3ddc00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)1153);
label_3ddc04:
    // 0x3ddc04: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3ddc04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ddc08:
    // 0x3ddc08: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x3ddc08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_3ddc0c:
    // 0x3ddc0c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x3ddc0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_3ddc10:
    // 0x3ddc10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ddc10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ddc14:
    // 0x3ddc14: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x3ddc14u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
label_3ddc18:
    // 0x3ddc18: 0x34a50006  ori         $a1, $a1, 0x6
    ctx->pc = 0x3ddc18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)6);
label_3ddc1c:
    // 0x3ddc1c: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x3ddc1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_3ddc20:
    // 0x3ddc20: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x3ddc20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_3ddc24:
    // 0x3ddc24: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x3ddc24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_3ddc28:
    // 0x3ddc28: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x3ddc28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_3ddc2c:
    // 0x3ddc2c: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x3ddc2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_3ddc30:
    // 0x3ddc30: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x3ddc30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_3ddc34:
    // 0x3ddc34: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x3ddc34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_3ddc38:
    // 0x3ddc38: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x3ddc38u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3ddc3c:
    // 0x3ddc3c: 0x7e020020  sq          $v0, 0x20($s0)
    ctx->pc = 0x3ddc3cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 2));
label_3ddc40:
    // 0x3ddc40: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3ddc40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3ddc44:
    // 0x3ddc44: 0xae460000  sw          $a2, 0x0($s2)
    ctx->pc = 0x3ddc44u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 6));
label_3ddc48:
    // 0x3ddc48: 0xc0e9404  jal         func_3A5010
label_3ddc4c:
    if (ctx->pc == 0x3DDC4Cu) {
        ctx->pc = 0x3DDC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDC48u;
        // 0x3ddc4c: 0xae0000c4  sw          $zero, 0xC4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DDC50u;
        goto label_3ddc50;
    }
    ctx->pc = 0x3DDC48u;
    SET_GPR_U32(ctx, 31, 0x3DDC50u);
    ctx->pc = 0x3DDC4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DDC48u;
    // 0x3ddc4c: 0xae0000c4  sw          $zero, 0xC4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5010u, 0x3DDC48u, 0x3DDC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DDC50u;
label_3ddc50:
    // 0x3ddc50: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x3ddc50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3ddc54:
    // 0x3ddc54: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x3ddc54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3ddc58:
    // 0x3ddc58: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x3ddc58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3ddc5c:
    // 0x3ddc5c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3ddc5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3ddc60:
    // 0x3ddc60: 0x3e00008  jr          $ra
label_3ddc64:
    if (ctx->pc == 0x3DDC64u) {
        ctx->pc = 0x3DDC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDC60u;
        // 0x3ddc64: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DDC68u;
        goto label_fallthrough_0x3ddc60;
    }
    ctx->pc = 0x3DDC60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DDC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDC60u;
        // 0x3ddc64: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DDC60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3ddc60:
    ctx->pc = 0x3DDC68u;
}
