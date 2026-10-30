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

// Function: sub_003DBB48
// Address: 0x3dbb48 - 0x3dbce8
void sub_003DBB48_0x3dbb48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DBB48_0x3dbb48");
#endif

    switch (ctx->pc) {
        case 0x3dbb48u: goto label_3dbb48;
        case 0x3dbb4cu: goto label_3dbb4c;
        case 0x3dbb50u: goto label_3dbb50;
        case 0x3dbb54u: goto label_3dbb54;
        case 0x3dbb58u: goto label_3dbb58;
        case 0x3dbb5cu: goto label_3dbb5c;
        case 0x3dbb60u: goto label_3dbb60;
        case 0x3dbb64u: goto label_3dbb64;
        case 0x3dbb68u: goto label_3dbb68;
        case 0x3dbb6cu: goto label_3dbb6c;
        case 0x3dbb70u: goto label_3dbb70;
        case 0x3dbb74u: goto label_3dbb74;
        case 0x3dbb78u: goto label_3dbb78;
        case 0x3dbb7cu: goto label_3dbb7c;
        case 0x3dbb80u: goto label_3dbb80;
        case 0x3dbb84u: goto label_3dbb84;
        case 0x3dbb88u: goto label_3dbb88;
        case 0x3dbb8cu: goto label_3dbb8c;
        case 0x3dbb90u: goto label_3dbb90;
        case 0x3dbb94u: goto label_3dbb94;
        case 0x3dbb98u: goto label_3dbb98;
        case 0x3dbb9cu: goto label_3dbb9c;
        case 0x3dbba0u: goto label_3dbba0;
        case 0x3dbba4u: goto label_3dbba4;
        case 0x3dbba8u: goto label_3dbba8;
        case 0x3dbbacu: goto label_3dbbac;
        case 0x3dbbb0u: goto label_3dbbb0;
        case 0x3dbbb4u: goto label_3dbbb4;
        case 0x3dbbb8u: goto label_3dbbb8;
        case 0x3dbbbcu: goto label_3dbbbc;
        case 0x3dbbc0u: goto label_3dbbc0;
        case 0x3dbbc4u: goto label_3dbbc4;
        case 0x3dbbc8u: goto label_3dbbc8;
        case 0x3dbbccu: goto label_3dbbcc;
        case 0x3dbbd0u: goto label_3dbbd0;
        case 0x3dbbd4u: goto label_3dbbd4;
        case 0x3dbbd8u: goto label_3dbbd8;
        case 0x3dbbdcu: goto label_3dbbdc;
        case 0x3dbbe0u: goto label_3dbbe0;
        case 0x3dbbe4u: goto label_3dbbe4;
        case 0x3dbbe8u: goto label_3dbbe8;
        case 0x3dbbecu: goto label_3dbbec;
        case 0x3dbbf0u: goto label_3dbbf0;
        case 0x3dbbf4u: goto label_3dbbf4;
        case 0x3dbbf8u: goto label_3dbbf8;
        case 0x3dbbfcu: goto label_3dbbfc;
        case 0x3dbc00u: goto label_3dbc00;
        case 0x3dbc04u: goto label_3dbc04;
        case 0x3dbc08u: goto label_3dbc08;
        case 0x3dbc0cu: goto label_3dbc0c;
        case 0x3dbc10u: goto label_3dbc10;
        case 0x3dbc14u: goto label_3dbc14;
        case 0x3dbc18u: goto label_3dbc18;
        case 0x3dbc1cu: goto label_3dbc1c;
        case 0x3dbc20u: goto label_3dbc20;
        case 0x3dbc24u: goto label_3dbc24;
        case 0x3dbc28u: goto label_3dbc28;
        case 0x3dbc2cu: goto label_3dbc2c;
        case 0x3dbc30u: goto label_3dbc30;
        case 0x3dbc34u: goto label_3dbc34;
        case 0x3dbc38u: goto label_3dbc38;
        case 0x3dbc3cu: goto label_3dbc3c;
        case 0x3dbc40u: goto label_3dbc40;
        case 0x3dbc44u: goto label_3dbc44;
        case 0x3dbc48u: goto label_3dbc48;
        case 0x3dbc4cu: goto label_3dbc4c;
        case 0x3dbc50u: goto label_3dbc50;
        case 0x3dbc54u: goto label_3dbc54;
        case 0x3dbc58u: goto label_3dbc58;
        case 0x3dbc5cu: goto label_3dbc5c;
        case 0x3dbc60u: goto label_3dbc60;
        case 0x3dbc64u: goto label_3dbc64;
        case 0x3dbc68u: goto label_3dbc68;
        case 0x3dbc6cu: goto label_3dbc6c;
        case 0x3dbc70u: goto label_3dbc70;
        case 0x3dbc74u: goto label_3dbc74;
        case 0x3dbc78u: goto label_3dbc78;
        case 0x3dbc7cu: goto label_3dbc7c;
        case 0x3dbc80u: goto label_3dbc80;
        case 0x3dbc84u: goto label_3dbc84;
        case 0x3dbc88u: goto label_3dbc88;
        case 0x3dbc8cu: goto label_3dbc8c;
        case 0x3dbc90u: goto label_3dbc90;
        case 0x3dbc94u: goto label_3dbc94;
        case 0x3dbc98u: goto label_3dbc98;
        case 0x3dbc9cu: goto label_3dbc9c;
        case 0x3dbca0u: goto label_3dbca0;
        case 0x3dbca4u: goto label_3dbca4;
        case 0x3dbca8u: goto label_3dbca8;
        case 0x3dbcacu: goto label_3dbcac;
        case 0x3dbcb0u: goto label_3dbcb0;
        case 0x3dbcb4u: goto label_3dbcb4;
        case 0x3dbcb8u: goto label_3dbcb8;
        case 0x3dbcbcu: goto label_3dbcbc;
        case 0x3dbcc0u: goto label_3dbcc0;
        case 0x3dbcc4u: goto label_3dbcc4;
        case 0x3dbcc8u: goto label_3dbcc8;
        case 0x3dbcccu: goto label_3dbccc;
        case 0x3dbcd0u: goto label_3dbcd0;
        case 0x3dbcd4u: goto label_3dbcd4;
        case 0x3dbcd8u: goto label_3dbcd8;
        case 0x3dbcdcu: goto label_3dbcdc;
        case 0x3dbce0u: goto label_3dbce0;
        case 0x3dbce4u: goto label_3dbce4;
        default: break;
    }

    ctx->pc = 0x3dbb48u;

label_3dbb48:
    // 0x3dbb48: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x3dbb48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_3dbb4c:
    // 0x3dbb4c: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x3dbb4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_3dbb50:
    // 0x3dbb50: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x3dbb50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_3dbb54:
    // 0x3dbb54: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3dbb54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3dbb58:
    // 0x3dbb58: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x3dbb58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_3dbb5c:
    // 0x3dbb5c: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x3dbb5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_3dbb60:
    // 0x3dbb60: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x3dbb60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3dbb64:
    // 0x3dbb64: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x3dbb64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_3dbb68:
    // 0x3dbb68: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3dbb68u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3dbb6c:
    // 0x3dbb6c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3dbb6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_3dbb70:
    // 0x3dbb70: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3dbb70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3dbb74:
    // 0x3dbb74: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3dbb74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3dbb78:
    // 0x3dbb78: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3dbb78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3dbb7c:
    // 0x3dbb7c: 0x40f809  jalr        $v0
label_3dbb80:
    if (ctx->pc == 0x3DBB80u) {
        ctx->pc = 0x3DBB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBB7Cu;
        // 0x3dbb80: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DBB84u;
        goto label_3dbb84;
    }
    ctx->pc = 0x3DBB7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3DBB84u);
        ctx->pc = 0x3DBB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBB7Cu;
        // 0x3dbb80: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DBB7Cu, 0x3DBB84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3DBB84u;
label_3dbb84:
    // 0x3dbb84: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3dbb84u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3dbb88:
    // 0x3dbb88: 0x3c013ee6  lui         $at, 0x3EE6
    ctx->pc = 0x3dbb88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16102 << 16));
label_3dbb8c:
    // 0x3dbb8c: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x3dbb8cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_3dbb90:
    // 0x3dbb90: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3dbb90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3dbb94:
    // 0x3dbb94: 0x3c022005  lui         $v0, 0x2005
    ctx->pc = 0x3dbb94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8197 << 16));
label_3dbb98:
    // 0x3dbb98: 0xae720054  sw          $s2, 0x54($s3)
    ctx->pc = 0x3dbb98u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 18));
label_3dbb9c:
    // 0x3dbb9c: 0x34420500  ori         $v0, $v0, 0x500
    ctx->pc = 0x3dbb9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1280);
label_3dbba0:
    // 0x3dbba0: 0xe66000bc  swc1        $f0, 0xBC($s3)
    ctx->pc = 0x3dbba0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 188), bits); }
label_3dbba4:
    // 0x3dbba4: 0x240500b4  addiu       $a1, $zero, 0xB4
    ctx->pc = 0x3dbba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
label_3dbba8:
    // 0x3dbba8: 0xae6200b0  sw          $v0, 0xB0($s3)
    ctx->pc = 0x3dbba8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 176), GPR_U32(ctx, 2));
label_3dbbac:
    // 0x3dbbac: 0xc0e858c  jal         func_3A1630
label_3dbbb0:
    if (ctx->pc == 0x3DBBB0u) {
        ctx->pc = 0x3DBBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBBACu;
        // 0x3dbbb0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DBBB4u;
        goto label_3dbbb4;
    }
    ctx->pc = 0x3DBBACu;
    SET_GPR_U32(ctx, 31, 0x3DBBB4u);
    ctx->pc = 0x3DBBB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DBBACu;
    // 0x3dbbb0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3DBBACu, 0x3DBBB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DBBB4u;
label_3dbbb4:
    // 0x3dbbb4: 0xc0ea146  jal         func_3A8518
label_3dbbb8:
    if (ctx->pc == 0x3DBBB8u) {
        ctx->pc = 0x3DBBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBBB4u;
        // 0x3dbbb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DBBBCu;
        goto label_3dbbbc;
    }
    ctx->pc = 0x3DBBB4u;
    SET_GPR_U32(ctx, 31, 0x3DBBBCu);
    ctx->pc = 0x3DBBB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DBBB4u;
    // 0x3dbbb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3DBBB4u, 0x3DBBBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DBBBCu;
label_3dbbbc:
    // 0x3dbbbc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3dbbbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3dbbc0:
    // 0x3dbbc0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3dbbc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3dbbc4:
    // 0x3dbbc4: 0xc0ea12a  jal         func_3A84A8
label_3dbbc8:
    if (ctx->pc == 0x3DBBC8u) {
        ctx->pc = 0x3DBBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBBC4u;
        // 0x3dbbc8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DBBCCu;
        goto label_3dbbcc;
    }
    ctx->pc = 0x3DBBC4u;
    SET_GPR_U32(ctx, 31, 0x3DBBCCu);
    ctx->pc = 0x3DBBC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DBBC4u;
    // 0x3dbbc8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3DBBC4u, 0x3DBBCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DBBCCu;
label_3dbbcc:
    // 0x3dbbcc: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3dbbccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3dbbd0:
    // 0x3dbbd0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3dbbd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3dbbd4:
    // 0x3dbbd4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3dbbd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3dbbd8:
    // 0x3dbbd8: 0xc0ea12a  jal         func_3A84A8
label_3dbbdc:
    if (ctx->pc == 0x3DBBDCu) {
        ctx->pc = 0x3DBBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBBD8u;
        // 0x3dbbdc: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DBBE0u;
        goto label_3dbbe0;
    }
    ctx->pc = 0x3DBBD8u;
    SET_GPR_U32(ctx, 31, 0x3DBBE0u);
    ctx->pc = 0x3DBBDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DBBD8u;
    // 0x3dbbdc: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3DBBD8u, 0x3DBBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DBBE0u;
label_3dbbe0:
    // 0x3dbbe0: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3dbbe0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3dbbe4:
    // 0x3dbbe4: 0x3c10006f  lui         $s0, 0x6F
    ctx->pc = 0x3dbbe4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
label_3dbbe8:
    // 0x3dbbe8: 0x2610b8b8  addiu       $s0, $s0, -0x4748
    ctx->pc = 0x3dbbe8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949048));
label_3dbbec:
    // 0x3dbbec: 0xae7100c4  sw          $s1, 0xC4($s3)
    ctx->pc = 0x3dbbecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 196), GPR_U32(ctx, 17));
label_3dbbf0:
    // 0x3dbbf0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3dbbf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3dbbf4:
    // 0x3dbbf4: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x3dbbf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_3dbbf8:
    // 0x3dbbf8: 0xc0cd4ee  jal         func_3353B8
label_3dbbfc:
    if (ctx->pc == 0x3DBBFCu) {
        ctx->pc = 0x3DBBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBBF8u;
        // 0x3dbbfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DBC00u;
        goto label_3dbc00;
    }
    ctx->pc = 0x3DBBF8u;
    SET_GPR_U32(ctx, 31, 0x3DBC00u);
    ctx->pc = 0x3DBBFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DBBF8u;
    // 0x3dbbfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3DBBF8u, 0x3DBC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DBC00u;
label_3dbc00:
    // 0x3dbc00: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x3dbc00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_3dbc04:
    // 0x3dbc04: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3dbc04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3dbc08:
    // 0x3dbc08: 0x34a50002  ori         $a1, $a1, 0x2
    ctx->pc = 0x3dbc08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2);
label_3dbc0c:
    // 0x3dbc0c: 0xc0e9404  jal         func_3A5010
label_3dbc10:
    if (ctx->pc == 0x3DBC10u) {
        ctx->pc = 0x3DBC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBC0Cu;
        // 0x3dbc10: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DBC14u;
        goto label_3dbc14;
    }
    ctx->pc = 0x3DBC0Cu;
    SET_GPR_U32(ctx, 31, 0x3DBC14u);
    ctx->pc = 0x3DBC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DBC0Cu;
    // 0x3dbc10: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5010u, 0x3DBC0Cu, 0x3DBC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DBC14u;
label_3dbc14:
    // 0x3dbc14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3dbc14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3dbc18:
    // 0x3dbc18: 0xc0cd4ee  jal         func_3353B8
label_3dbc1c:
    if (ctx->pc == 0x3DBC1Cu) {
        ctx->pc = 0x3DBC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBC18u;
        // 0x3dbc1c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DBC20u;
        goto label_3dbc20;
    }
    ctx->pc = 0x3DBC18u;
    SET_GPR_U32(ctx, 31, 0x3DBC20u);
    ctx->pc = 0x3DBC1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DBC18u;
    // 0x3dbc1c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3DBC18u, 0x3DBC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DBC20u;
label_3dbc20:
    // 0x3dbc20: 0x54520006  bnel        $v0, $s2, . + 4 + (0x6 << 2)
label_3dbc24:
    if (ctx->pc == 0x3DBC24u) {
        ctx->pc = 0x3DBC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBC20u;
        // 0x3dbc24: 0x8e620054  lw          $v0, 0x54($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DBC28u;
        goto label_3dbc28;
    }
    ctx->pc = 0x3DBC20u;
    {
        const bool branch_taken_0x3dbc20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x3dbc20) {
            ctx->pc = 0x3DBC24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DBC20u;
            // 0x3dbc24: 0x8e620054  lw          $v0, 0x54($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DBC3Cu;
            goto label_3dbc3c;
        }
    }
    ctx->pc = 0x3DBC28u;
label_3dbc28:
    // 0x3dbc28: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x3dbc28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_3dbc2c:
    // 0x3dbc2c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3dbc2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3dbc30:
    // 0x3dbc30: 0xc0e9404  jal         func_3A5010
label_3dbc34:
    if (ctx->pc == 0x3DBC34u) {
        ctx->pc = 0x3DBC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBC30u;
        // 0x3dbc34: 0x34a50005  ori         $a1, $a1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)5);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DBC38u;
        goto label_3dbc38;
    }
    ctx->pc = 0x3DBC30u;
    SET_GPR_U32(ctx, 31, 0x3DBC38u);
    ctx->pc = 0x3DBC34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DBC30u;
    // 0x3dbc34: 0x34a50005  ori         $a1, $a1, 0x5 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)5);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5010u, 0x3DBC30u, 0x3DBC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DBC38u;
label_3dbc38:
    // 0x3dbc38: 0x8e620054  lw          $v0, 0x54($s3)
    ctx->pc = 0x3dbc38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_3dbc3c:
    // 0x3dbc3c: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x3dbc3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3dbc40:
    // 0x3dbc40: 0x7ba60000  lq          $a2, 0x0($sp)
    ctx->pc = 0x3dbc40u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3dbc44:
    // 0x3dbc44: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3dbc44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3dbc48:
    // 0x3dbc48: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x3dbc48u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3dbc4c:
    // 0x3dbc4c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x3dbc4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_3dbc50:
    // 0x3dbc50: 0x7e660010  sq          $a2, 0x10($s3)
    ctx->pc = 0x3dbc50u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 16), GPR_VEC(ctx, 6));
label_3dbc54:
    // 0x3dbc54: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3dbc54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3dbc58:
    // 0x3dbc58: 0xae620054  sw          $v0, 0x54($s3)
    ctx->pc = 0x3dbc58u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 2));
label_3dbc5c:
    // 0x3dbc5c: 0x7e830000  sq          $v1, 0x0($s4)
    ctx->pc = 0x3dbc5cu;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 3));
label_3dbc60:
    // 0x3dbc60: 0xc0e9364  jal         func_3A4D90
label_3dbc64:
    if (ctx->pc == 0x3DBC64u) {
        ctx->pc = 0x3DBC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBC60u;
        // 0x3dbc64: 0x7fa30030  sq          $v1, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DBC68u;
        goto label_3dbc68;
    }
    ctx->pc = 0x3DBC60u;
    SET_GPR_U32(ctx, 31, 0x3DBC68u);
    ctx->pc = 0x3DBC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DBC60u;
    // 0x3dbc64: 0x7fa30030  sq          $v1, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4D90u, 0x3DBC60u, 0x3DBC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DBC68u;
label_3dbc68:
    // 0x3dbc68: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3dbc68u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3dbc6c:
    // 0x3dbc6c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3dbc6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3dbc70:
    // 0x3dbc70: 0x3c013cf5  lui         $at, 0x3CF5
    ctx->pc = 0x3dbc70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15605 << 16));
label_3dbc74:
    // 0x3dbc74: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x3dbc74u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_3dbc78:
    // 0x3dbc78: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3dbc78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3dbc7c:
    // 0x3dbc7c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3dbc7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3dbc80:
    // 0x3dbc80: 0xc136b24  jal         func_4DAC90
label_3dbc84:
    if (ctx->pc == 0x3DBC84u) {
        ctx->pc = 0x3DBC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBC80u;
        // 0x3dbc84: 0x7e620020  sq          $v0, 0x20($s3) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 19), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DBC88u;
        goto label_3dbc88;
    }
    ctx->pc = 0x3DBC80u;
    SET_GPR_U32(ctx, 31, 0x3DBC88u);
    ctx->pc = 0x3DBC84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DBC80u;
    // 0x3dbc84: 0x7e620020  sq          $v0, 0x20($s3) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 19), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3DBC80u, 0x3DBC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DBC88u;
label_3dbc88:
    // 0x3dbc88: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x3dbc88u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3dbc8c:
    // 0x3dbc8c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3dbc8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3dbc90:
    // 0x3dbc90: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3dbc90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3dbc94:
    // 0x3dbc94: 0x26650010  addiu       $a1, $s3, 0x10
    ctx->pc = 0x3dbc94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_3dbc98:
    // 0x3dbc98: 0xc136b18  jal         func_4DAC60
label_3dbc9c:
    if (ctx->pc == 0x3DBC9Cu) {
        ctx->pc = 0x3DBC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBC98u;
        // 0x3dbc9c: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DBCA0u;
        goto label_3dbca0;
    }
    ctx->pc = 0x3DBC98u;
    SET_GPR_U32(ctx, 31, 0x3DBCA0u);
    ctx->pc = 0x3DBC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DBC98u;
    // 0x3dbc9c: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3DBC98u, 0x3DBCA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DBCA0u;
label_3dbca0:
    // 0x3dbca0: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x3dbca0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3dbca4:
    // 0x3dbca4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3dbca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3dbca8:
    // 0x3dbca8: 0x240500b4  addiu       $a1, $zero, 0xB4
    ctx->pc = 0x3dbca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
label_3dbcac:
    // 0x3dbcac: 0x7e620010  sq          $v0, 0x10($s3)
    ctx->pc = 0x3dbcacu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 16), GPR_VEC(ctx, 2));
label_3dbcb0:
    // 0x3dbcb0: 0xc0e858c  jal         func_3A1630
label_3dbcb4:
    if (ctx->pc == 0x3DBCB4u) {
        ctx->pc = 0x3DBCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBCB0u;
        // 0x3dbcb4: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DBCB8u;
        goto label_3dbcb8;
    }
    ctx->pc = 0x3DBCB0u;
    SET_GPR_U32(ctx, 31, 0x3DBCB8u);
    ctx->pc = 0x3DBCB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DBCB0u;
    // 0x3dbcb4: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3DBCB0u, 0x3DBCB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DBCB8u;
label_3dbcb8:
    // 0x3dbcb8: 0x3c022005  lui         $v0, 0x2005
    ctx->pc = 0x3dbcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8197 << 16));
label_3dbcbc:
    // 0x3dbcbc: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x3dbcbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3dbcc0:
    // 0x3dbcc0: 0x34420580  ori         $v0, $v0, 0x580
    ctx->pc = 0x3dbcc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1408);
label_3dbcc4:
    // 0x3dbcc4: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x3dbcc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3dbcc8:
    // 0x3dbcc8: 0xae6200b4  sw          $v0, 0xB4($s3)
    ctx->pc = 0x3dbcc8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 180), GPR_U32(ctx, 2));
label_3dbccc:
    // 0x3dbccc: 0xae800010  sw          $zero, 0x10($s4)
    ctx->pc = 0x3dbcccu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 0));
label_3dbcd0:
    // 0x3dbcd0: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x3dbcd0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3dbcd4:
    // 0x3dbcd4: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x3dbcd4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3dbcd8:
    // 0x3dbcd8: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x3dbcd8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3dbcdc:
    // 0x3dbcdc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3dbcdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3dbce0:
    // 0x3dbce0: 0x3e00008  jr          $ra
label_3dbce4:
    if (ctx->pc == 0x3DBCE4u) {
        ctx->pc = 0x3DBCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBCE0u;
        // 0x3dbce4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DBCE8u;
        goto label_fallthrough_0x3dbce0;
    }
    ctx->pc = 0x3DBCE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DBCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBCE0u;
        // 0x3dbce4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DBCE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3dbce0:
    ctx->pc = 0x3DBCE8u;
}
