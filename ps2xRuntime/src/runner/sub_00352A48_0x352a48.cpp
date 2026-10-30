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

// Function: sub_00352A48
// Address: 0x352a48 - 0x352c08
void sub_00352A48_0x352a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00352A48_0x352a48");
#endif

    switch (ctx->pc) {
        case 0x352a48u: goto label_352a48;
        case 0x352a4cu: goto label_352a4c;
        case 0x352a50u: goto label_352a50;
        case 0x352a54u: goto label_352a54;
        case 0x352a58u: goto label_352a58;
        case 0x352a5cu: goto label_352a5c;
        case 0x352a60u: goto label_352a60;
        case 0x352a64u: goto label_352a64;
        case 0x352a68u: goto label_352a68;
        case 0x352a6cu: goto label_352a6c;
        case 0x352a70u: goto label_352a70;
        case 0x352a74u: goto label_352a74;
        case 0x352a78u: goto label_352a78;
        case 0x352a7cu: goto label_352a7c;
        case 0x352a80u: goto label_352a80;
        case 0x352a84u: goto label_352a84;
        case 0x352a88u: goto label_352a88;
        case 0x352a8cu: goto label_352a8c;
        case 0x352a90u: goto label_352a90;
        case 0x352a94u: goto label_352a94;
        case 0x352a98u: goto label_352a98;
        case 0x352a9cu: goto label_352a9c;
        case 0x352aa0u: goto label_352aa0;
        case 0x352aa4u: goto label_352aa4;
        case 0x352aa8u: goto label_352aa8;
        case 0x352aacu: goto label_352aac;
        case 0x352ab0u: goto label_352ab0;
        case 0x352ab4u: goto label_352ab4;
        case 0x352ab8u: goto label_352ab8;
        case 0x352abcu: goto label_352abc;
        case 0x352ac0u: goto label_352ac0;
        case 0x352ac4u: goto label_352ac4;
        case 0x352ac8u: goto label_352ac8;
        case 0x352accu: goto label_352acc;
        case 0x352ad0u: goto label_352ad0;
        case 0x352ad4u: goto label_352ad4;
        case 0x352ad8u: goto label_352ad8;
        case 0x352adcu: goto label_352adc;
        case 0x352ae0u: goto label_352ae0;
        case 0x352ae4u: goto label_352ae4;
        case 0x352ae8u: goto label_352ae8;
        case 0x352aecu: goto label_352aec;
        case 0x352af0u: goto label_352af0;
        case 0x352af4u: goto label_352af4;
        case 0x352af8u: goto label_352af8;
        case 0x352afcu: goto label_352afc;
        case 0x352b00u: goto label_352b00;
        case 0x352b04u: goto label_352b04;
        case 0x352b08u: goto label_352b08;
        case 0x352b0cu: goto label_352b0c;
        case 0x352b10u: goto label_352b10;
        case 0x352b14u: goto label_352b14;
        case 0x352b18u: goto label_352b18;
        case 0x352b1cu: goto label_352b1c;
        case 0x352b20u: goto label_352b20;
        case 0x352b24u: goto label_352b24;
        case 0x352b28u: goto label_352b28;
        case 0x352b2cu: goto label_352b2c;
        case 0x352b30u: goto label_352b30;
        case 0x352b34u: goto label_352b34;
        case 0x352b38u: goto label_352b38;
        case 0x352b3cu: goto label_352b3c;
        case 0x352b40u: goto label_352b40;
        case 0x352b44u: goto label_352b44;
        case 0x352b48u: goto label_352b48;
        case 0x352b4cu: goto label_352b4c;
        case 0x352b50u: goto label_352b50;
        case 0x352b54u: goto label_352b54;
        case 0x352b58u: goto label_352b58;
        case 0x352b5cu: goto label_352b5c;
        case 0x352b60u: goto label_352b60;
        case 0x352b64u: goto label_352b64;
        case 0x352b68u: goto label_352b68;
        case 0x352b6cu: goto label_352b6c;
        case 0x352b70u: goto label_352b70;
        case 0x352b74u: goto label_352b74;
        case 0x352b78u: goto label_352b78;
        case 0x352b7cu: goto label_352b7c;
        case 0x352b80u: goto label_352b80;
        case 0x352b84u: goto label_352b84;
        case 0x352b88u: goto label_352b88;
        case 0x352b8cu: goto label_352b8c;
        case 0x352b90u: goto label_352b90;
        case 0x352b94u: goto label_352b94;
        case 0x352b98u: goto label_352b98;
        case 0x352b9cu: goto label_352b9c;
        case 0x352ba0u: goto label_352ba0;
        case 0x352ba4u: goto label_352ba4;
        case 0x352ba8u: goto label_352ba8;
        case 0x352bacu: goto label_352bac;
        case 0x352bb0u: goto label_352bb0;
        case 0x352bb4u: goto label_352bb4;
        case 0x352bb8u: goto label_352bb8;
        case 0x352bbcu: goto label_352bbc;
        case 0x352bc0u: goto label_352bc0;
        case 0x352bc4u: goto label_352bc4;
        case 0x352bc8u: goto label_352bc8;
        case 0x352bccu: goto label_352bcc;
        case 0x352bd0u: goto label_352bd0;
        case 0x352bd4u: goto label_352bd4;
        case 0x352bd8u: goto label_352bd8;
        case 0x352bdcu: goto label_352bdc;
        case 0x352be0u: goto label_352be0;
        case 0x352be4u: goto label_352be4;
        case 0x352be8u: goto label_352be8;
        case 0x352becu: goto label_352bec;
        case 0x352bf0u: goto label_352bf0;
        case 0x352bf4u: goto label_352bf4;
        case 0x352bf8u: goto label_352bf8;
        case 0x352bfcu: goto label_352bfc;
        case 0x352c00u: goto label_352c00;
        case 0x352c04u: goto label_352c04;
        default: break;
    }

    ctx->pc = 0x352a48u;

label_352a48:
    // 0x352a48: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x352a48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_352a4c:
    // 0x352a4c: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x352a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_352a50:
    // 0x352a50: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x352a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_352a54:
    // 0x352a54: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x352a54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_352a58:
    // 0x352a58: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x352a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_352a5c:
    // 0x352a5c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x352a5cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_352a60:
    // 0x352a60: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x352a60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_352a64:
    // 0x352a64: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x352a64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_352a68:
    // 0x352a68: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x352a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_352a6c:
    // 0x352a6c: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x352a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
label_352a70:
    // 0x352a70: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x352a70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
label_352a74:
    // 0x352a74: 0x12400059  beqz        $s2, . + 4 + (0x59 << 2)
label_352a78:
    if (ctx->pc == 0x352A78u) {
        ctx->pc = 0x352A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352A74u;
        // 0x352a78: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x352A7Cu;
        goto label_352a7c;
    }
    ctx->pc = 0x352A74u;
    {
        const bool branch_taken_0x352a74 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x352A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352A74u;
        // 0x352a78: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352a74) {
            ctx->pc = 0x352BDCu;
            goto label_352bdc;
        }
    }
    ctx->pc = 0x352A7Cu;
label_352a7c:
    // 0x352a7c: 0x86430030  lh          $v1, 0x30($s2)
    ctx->pc = 0x352a7cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 48)));
label_352a80:
    // 0x352a80: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x352a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_352a84:
    // 0x352a84: 0x10620055  beq         $v1, $v0, . + 4 + (0x55 << 2)
label_352a88:
    if (ctx->pc == 0x352A88u) {
        ctx->pc = 0x352A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352A84u;
        // 0x352a88: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x352A8Cu;
        goto label_352a8c;
    }
    ctx->pc = 0x352A84u;
    {
        const bool branch_taken_0x352a84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x352A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352A84u;
        // 0x352a88: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352a84) {
            ctx->pc = 0x352BDCu;
            goto label_352bdc;
        }
    }
    ctx->pc = 0x352A8Cu;
label_352a8c:
    // 0x352a8c: 0x39880  sll         $s3, $v1, 2
    ctx->pc = 0x352a8cu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_352a90:
    // 0x352a90: 0x26430014  addiu       $v1, $s2, 0x14
    ctx->pc = 0x352a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
label_352a94:
    // 0x352a94: 0x2a880  sll         $s5, $v0, 2
    ctx->pc = 0x352a94u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_352a98:
    // 0x352a98: 0x73b821  addu        $s7, $v1, $s3
    ctx->pc = 0x352a98u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_352a9c:
    // 0x352a9c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x352a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_352aa0:
    // 0x352aa0: 0x8e43002c  lw          $v1, 0x2C($s2)
    ctx->pc = 0x352aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_352aa4:
    // 0x352aa4: 0x2a21004  sllv        $v0, $v0, $s5
    ctx->pc = 0x352aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 21) & 0x1F));
label_352aa8:
    // 0x352aa8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x352aa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_352aac:
    // 0x352aac: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_352ab0:
    if (ctx->pc == 0x352AB0u) {
        ctx->pc = 0x352AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352AACu;
        // 0x352ab0: 0x8ef60000  lw          $s6, 0x0($s7) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x352AB4u;
        goto label_352ab4;
    }
    ctx->pc = 0x352AACu;
    {
        const bool branch_taken_0x352aac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x352AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352AACu;
        // 0x352ab0: 0x8ef60000  lw          $s6, 0x0($s7) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352aac) {
            ctx->pc = 0x352ACCu;
            goto label_352acc;
        }
    }
    ctx->pc = 0x352AB4u;
label_352ab4:
    // 0x352ab4: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x352ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_352ab8:
    // 0x352ab8: 0x2a21004  sllv        $v0, $v0, $s5
    ctx->pc = 0x352ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 21) & 0x1F));
label_352abc:
    // 0x352abc: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x352abcu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_352ac0:
    // 0x352ac0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x352ac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_352ac4:
    // 0x352ac4: 0x10000045  b           . + 4 + (0x45 << 2)
label_352ac8:
    if (ctx->pc == 0x352AC8u) {
        ctx->pc = 0x352AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352AC4u;
        // 0x352ac8: 0xae42002c  sw          $v0, 0x2C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x352ACCu;
        goto label_352acc;
    }
    ctx->pc = 0x352AC4u;
    {
        const bool branch_taken_0x352ac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x352AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352AC4u;
        // 0x352ac8: 0xae42002c  sw          $v0, 0x2C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352ac4) {
            ctx->pc = 0x352BDCu;
            goto label_352bdc;
        }
    }
    ctx->pc = 0x352ACCu;
label_352acc:
    // 0x352acc: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x352accu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_352ad0:
    // 0x352ad0: 0x2531021  addu        $v0, $s2, $s3
    ctx->pc = 0x352ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
label_352ad4:
    // 0x352ad4: 0xac54001c  sw          $s4, 0x1C($v0)
    ctx->pc = 0x352ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 20));
label_352ad8:
    // 0x352ad8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x352ad8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_352adc:
    // 0x352adc: 0x8e2627e4  lw          $a2, 0x27E4($s1)
    ctx->pc = 0x352adcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10212)));
label_352ae0:
    // 0x352ae0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x352ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_352ae4:
    // 0x352ae4: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x352ae4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_352ae8:
    // 0x352ae8: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x352ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_352aec:
    // 0x352aec: 0x60f809  jalr        $v1
label_352af0:
    if (ctx->pc == 0x352AF0u) {
        ctx->pc = 0x352AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352AECu;
        // 0x352af0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x352AF4u;
        goto label_352af4;
    }
    ctx->pc = 0x352AECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x352AF4u);
        ctx->pc = 0x352AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352AECu;
        // 0x352af0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x352AECu, 0x352AF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x352AF4u;
label_352af4:
    // 0x352af4: 0x8e2727e4  lw          $a3, 0x27E4($s1)
    ctx->pc = 0x352af4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10212)));
label_352af8:
    // 0x352af8: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x352af8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_352afc:
    // 0x352afc: 0x8ec60004  lw          $a2, 0x4($s6)
    ctx->pc = 0x352afcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_352b00:
    // 0x352b00: 0x3c080058  lui         $t0, 0x58
    ctx->pc = 0x352b00u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)88 << 16));
label_352b04:
    // 0x352b04: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x352b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_352b08:
    // 0x352b08: 0x3c0a0058  lui         $t2, 0x58
    ctx->pc = 0x352b08u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)88 << 16));
label_352b0c:
    // 0x352b0c: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x352b0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
label_352b10:
    // 0x352b10: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x352b10u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_352b14:
    // 0x352b14: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x352b14u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_352b18:
    // 0x352b18: 0x24a589f8  addiu       $a1, $a1, -0x7608
    ctx->pc = 0x352b18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937080));
label_352b1c:
    // 0x352b1c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x352b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_352b20:
    // 0x352b20: 0x254a8a10  addiu       $t2, $t2, -0x75F0
    ctx->pc = 0x352b20u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294937104));
label_352b24:
    // 0x352b24: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x352b24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_352b28:
    // 0x352b28: 0x250889d0  addiu       $t0, $t0, -0x7630
    ctx->pc = 0x352b28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294937040));
label_352b2c:
    // 0x352b2c: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x352b2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_352b30:
    // 0x352b30: 0x40f809  jalr        $v0
label_352b34:
    if (ctx->pc == 0x352B34u) {
        ctx->pc = 0x352B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352B30u;
        // 0x352b34: 0x24090243  addiu       $t1, $zero, 0x243 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 579));
        ctx->in_delay_slot = false;
        ctx->pc = 0x352B38u;
        goto label_352b38;
    }
    ctx->pc = 0x352B30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x352B38u);
        ctx->pc = 0x352B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352B30u;
        // 0x352b34: 0x24090243  addiu       $t1, $zero, 0x243 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 579));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x352B30u, 0x352B38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x352B38u;
label_352b38:
    // 0x352b38: 0x2650000c  addiu       $s0, $s2, 0xC
    ctx->pc = 0x352b38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
label_352b3c:
    // 0x352b3c: 0x8e2627e4  lw          $a2, 0x27E4($s1)
    ctx->pc = 0x352b3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10212)));
label_352b40:
    // 0x352b40: 0x2138021  addu        $s0, $s0, $s3
    ctx->pc = 0x352b40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
label_352b44:
    // 0x352b44: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x352b44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_352b48:
    // 0x352b48: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x352b48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_352b4c:
    // 0x352b4c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x352b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_352b50:
    // 0x352b50: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x352b50u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_352b54:
    // 0x352b54: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x352b54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_352b58:
    // 0x352b58: 0x60f809  jalr        $v1
label_352b5c:
    if (ctx->pc == 0x352B5Cu) {
        ctx->pc = 0x352B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352B58u;
        // 0x352b5c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x352B60u;
        goto label_352b60;
    }
    ctx->pc = 0x352B58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x352B60u);
        ctx->pc = 0x352B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352B58u;
        // 0x352b5c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x352B58u, 0x352B60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x352B60u;
label_352b60:
    // 0x352b60: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x352b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_352b64:
    // 0x352b64: 0x8e43002c  lw          $v1, 0x2C($s2)
    ctx->pc = 0x352b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_352b68:
    // 0x352b68: 0x2a21004  sllv        $v0, $v0, $s5
    ctx->pc = 0x352b68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 21) & 0x1F));
label_352b6c:
    // 0x352b6c: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x352b6cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_352b70:
    // 0x352b70: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x352b70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_352b74:
    // 0x352b74: 0xae43002c  sw          $v1, 0x2C($s2)
    ctx->pc = 0x352b74u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 3));
label_352b78:
    // 0x352b78: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x352b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_352b7c:
    // 0x352b7c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_352b80:
    if (ctx->pc == 0x352B80u) {
        ctx->pc = 0x352B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352B7Cu;
        // 0x352b80: 0x3c060058  lui         $a2, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x352B84u;
        goto label_352b84;
    }
    ctx->pc = 0x352B7Cu;
    {
        const bool branch_taken_0x352b7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x352B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352B7Cu;
        // 0x352b80: 0x3c060058  lui         $a2, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352b7c) {
            ctx->pc = 0x352BD8u;
            goto label_352bd8;
        }
    }
    ctx->pc = 0x352B84u;
label_352b84:
    // 0x352b84: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x352b84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_352b88:
    // 0x352b88: 0x24050026  addiu       $a1, $zero, 0x26
    ctx->pc = 0x352b88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
label_352b8c:
    // 0x352b8c: 0x26c70008  addiu       $a3, $s6, 0x8
    ctx->pc = 0x352b8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
label_352b90:
    // 0x352b90: 0xc10ca04  jal         func_432810
label_352b94:
    if (ctx->pc == 0x352B94u) {
        ctx->pc = 0x352B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352B90u;
        // 0x352b94: 0x24c68a08  addiu       $a2, $a2, -0x75F8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294937096));
        ctx->in_delay_slot = false;
        ctx->pc = 0x352B98u;
        goto label_352b98;
    }
    ctx->pc = 0x352B90u;
    SET_GPR_U32(ctx, 31, 0x352B98u);
    ctx->pc = 0x352B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x352B90u;
    // 0x352b94: 0x24c68a08  addiu       $a2, $a2, -0x75F8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294937096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x352B90u, 0x352B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352B98u;
label_352b98:
    // 0x352b98: 0x8e43002c  lw          $v1, 0x2C($s2)
    ctx->pc = 0x352b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_352b9c:
    // 0x352b9c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x352b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_352ba0:
    // 0x352ba0: 0x2a21004  sllv        $v0, $v0, $s5
    ctx->pc = 0x352ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 21) & 0x1F));
label_352ba4:
    // 0x352ba4: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x352ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_352ba8:
    // 0x352ba8: 0x8ca45340  lw          $a0, 0x5340($a1)
    ctx->pc = 0x352ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 21312)));
label_352bac:
    // 0x352bac: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x352bacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_352bb0:
    // 0x352bb0: 0xae43002c  sw          $v1, 0x2C($s2)
    ctx->pc = 0x352bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 3));
label_352bb4:
    // 0x352bb4: 0x3c070035  lui         $a3, 0x35
    ctx->pc = 0x352bb4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)53 << 16));
label_352bb8:
    // 0x352bb8: 0x24e72788  addiu       $a3, $a3, 0x2788
    ctx->pc = 0x352bb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 10120));
label_352bbc:
    // 0x352bbc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x352bbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_352bc0:
    // 0x352bc0: 0x8ec60004  lw          $a2, 0x4($s6)
    ctx->pc = 0x352bc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_352bc4:
    // 0x352bc4: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x352bc4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_352bc8:
    // 0x352bc8: 0xc055354  jal         func_154D50
label_352bcc:
    if (ctx->pc == 0x352BCCu) {
        ctx->pc = 0x352BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352BC8u;
        // 0x352bcc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x352BD0u;
        goto label_352bd0;
    }
    ctx->pc = 0x352BC8u;
    SET_GPR_U32(ctx, 31, 0x352BD0u);
    ctx->pc = 0x352BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x352BC8u;
    // 0x352bcc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154D50u, 0x352BC8u, 0x352BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352BD0u;
label_352bd0:
    // 0x352bd0: 0x10000002  b           . + 4 + (0x2 << 2)
label_352bd4:
    if (ctx->pc == 0x352BD4u) {
        ctx->pc = 0x352BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352BD0u;
        // 0x352bd4: 0xae420028  sw          $v0, 0x28($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x352BD8u;
        goto label_352bd8;
    }
    ctx->pc = 0x352BD0u;
    {
        const bool branch_taken_0x352bd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x352BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352BD0u;
        // 0x352bd4: 0xae420028  sw          $v0, 0x28($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352bd0) {
            ctx->pc = 0x352BDCu;
            goto label_352bdc;
        }
    }
    ctx->pc = 0x352BD8u;
label_352bd8:
    // 0x352bd8: 0xaee00000  sw          $zero, 0x0($s7)
    ctx->pc = 0x352bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 0));
label_352bdc:
    // 0x352bdc: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x352bdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_352be0:
    // 0x352be0: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x352be0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_352be4:
    // 0x352be4: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x352be4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_352be8:
    // 0x352be8: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x352be8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_352bec:
    // 0x352bec: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x352becu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_352bf0:
    // 0x352bf0: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x352bf0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_352bf4:
    // 0x352bf4: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x352bf4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_352bf8:
    // 0x352bf8: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x352bf8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_352bfc:
    // 0x352bfc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x352bfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_352c00:
    // 0x352c00: 0x3e00008  jr          $ra
label_352c04:
    if (ctx->pc == 0x352C04u) {
        ctx->pc = 0x352C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352C00u;
        // 0x352c04: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x352C08u;
        goto label_fallthrough_0x352c00;
    }
    ctx->pc = 0x352C00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x352C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352C00u;
        // 0x352c04: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x352C00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x352c00:
    ctx->pc = 0x352C08u;
}
