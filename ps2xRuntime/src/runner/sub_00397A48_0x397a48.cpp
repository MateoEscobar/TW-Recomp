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

// Function: sub_00397A48
// Address: 0x397a48 - 0x397c58
void sub_00397A48_0x397a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00397A48_0x397a48");
#endif

    switch (ctx->pc) {
        case 0x397a48u: goto label_397a48;
        case 0x397a4cu: goto label_397a4c;
        case 0x397a50u: goto label_397a50;
        case 0x397a54u: goto label_397a54;
        case 0x397a58u: goto label_397a58;
        case 0x397a5cu: goto label_397a5c;
        case 0x397a60u: goto label_397a60;
        case 0x397a64u: goto label_397a64;
        case 0x397a68u: goto label_397a68;
        case 0x397a6cu: goto label_397a6c;
        case 0x397a70u: goto label_397a70;
        case 0x397a74u: goto label_397a74;
        case 0x397a78u: goto label_397a78;
        case 0x397a7cu: goto label_397a7c;
        case 0x397a80u: goto label_397a80;
        case 0x397a84u: goto label_397a84;
        case 0x397a88u: goto label_397a88;
        case 0x397a8cu: goto label_397a8c;
        case 0x397a90u: goto label_397a90;
        case 0x397a94u: goto label_397a94;
        case 0x397a98u: goto label_397a98;
        case 0x397a9cu: goto label_397a9c;
        case 0x397aa0u: goto label_397aa0;
        case 0x397aa4u: goto label_397aa4;
        case 0x397aa8u: goto label_397aa8;
        case 0x397aacu: goto label_397aac;
        case 0x397ab0u: goto label_397ab0;
        case 0x397ab4u: goto label_397ab4;
        case 0x397ab8u: goto label_397ab8;
        case 0x397abcu: goto label_397abc;
        case 0x397ac0u: goto label_397ac0;
        case 0x397ac4u: goto label_397ac4;
        case 0x397ac8u: goto label_397ac8;
        case 0x397accu: goto label_397acc;
        case 0x397ad0u: goto label_397ad0;
        case 0x397ad4u: goto label_397ad4;
        case 0x397ad8u: goto label_397ad8;
        case 0x397adcu: goto label_397adc;
        case 0x397ae0u: goto label_397ae0;
        case 0x397ae4u: goto label_397ae4;
        case 0x397ae8u: goto label_397ae8;
        case 0x397aecu: goto label_397aec;
        case 0x397af0u: goto label_397af0;
        case 0x397af4u: goto label_397af4;
        case 0x397af8u: goto label_397af8;
        case 0x397afcu: goto label_397afc;
        case 0x397b00u: goto label_397b00;
        case 0x397b04u: goto label_397b04;
        case 0x397b08u: goto label_397b08;
        case 0x397b0cu: goto label_397b0c;
        case 0x397b10u: goto label_397b10;
        case 0x397b14u: goto label_397b14;
        case 0x397b18u: goto label_397b18;
        case 0x397b1cu: goto label_397b1c;
        case 0x397b20u: goto label_397b20;
        case 0x397b24u: goto label_397b24;
        case 0x397b28u: goto label_397b28;
        case 0x397b2cu: goto label_397b2c;
        case 0x397b30u: goto label_397b30;
        case 0x397b34u: goto label_397b34;
        case 0x397b38u: goto label_397b38;
        case 0x397b3cu: goto label_397b3c;
        case 0x397b40u: goto label_397b40;
        case 0x397b44u: goto label_397b44;
        case 0x397b48u: goto label_397b48;
        case 0x397b4cu: goto label_397b4c;
        case 0x397b50u: goto label_397b50;
        case 0x397b54u: goto label_397b54;
        case 0x397b58u: goto label_397b58;
        case 0x397b5cu: goto label_397b5c;
        case 0x397b60u: goto label_397b60;
        case 0x397b64u: goto label_397b64;
        case 0x397b68u: goto label_397b68;
        case 0x397b6cu: goto label_397b6c;
        case 0x397b70u: goto label_397b70;
        case 0x397b74u: goto label_397b74;
        case 0x397b78u: goto label_397b78;
        case 0x397b7cu: goto label_397b7c;
        case 0x397b80u: goto label_397b80;
        case 0x397b84u: goto label_397b84;
        case 0x397b88u: goto label_397b88;
        case 0x397b8cu: goto label_397b8c;
        case 0x397b90u: goto label_397b90;
        case 0x397b94u: goto label_397b94;
        case 0x397b98u: goto label_397b98;
        case 0x397b9cu: goto label_397b9c;
        case 0x397ba0u: goto label_397ba0;
        case 0x397ba4u: goto label_397ba4;
        case 0x397ba8u: goto label_397ba8;
        case 0x397bacu: goto label_397bac;
        case 0x397bb0u: goto label_397bb0;
        case 0x397bb4u: goto label_397bb4;
        case 0x397bb8u: goto label_397bb8;
        case 0x397bbcu: goto label_397bbc;
        case 0x397bc0u: goto label_397bc0;
        case 0x397bc4u: goto label_397bc4;
        case 0x397bc8u: goto label_397bc8;
        case 0x397bccu: goto label_397bcc;
        case 0x397bd0u: goto label_397bd0;
        case 0x397bd4u: goto label_397bd4;
        case 0x397bd8u: goto label_397bd8;
        case 0x397bdcu: goto label_397bdc;
        case 0x397be0u: goto label_397be0;
        case 0x397be4u: goto label_397be4;
        case 0x397be8u: goto label_397be8;
        case 0x397becu: goto label_397bec;
        case 0x397bf0u: goto label_397bf0;
        case 0x397bf4u: goto label_397bf4;
        case 0x397bf8u: goto label_397bf8;
        case 0x397bfcu: goto label_397bfc;
        case 0x397c00u: goto label_397c00;
        case 0x397c04u: goto label_397c04;
        case 0x397c08u: goto label_397c08;
        case 0x397c0cu: goto label_397c0c;
        case 0x397c10u: goto label_397c10;
        case 0x397c14u: goto label_397c14;
        case 0x397c18u: goto label_397c18;
        case 0x397c1cu: goto label_397c1c;
        case 0x397c20u: goto label_397c20;
        case 0x397c24u: goto label_397c24;
        case 0x397c28u: goto label_397c28;
        case 0x397c2cu: goto label_397c2c;
        case 0x397c30u: goto label_397c30;
        case 0x397c34u: goto label_397c34;
        case 0x397c38u: goto label_397c38;
        case 0x397c3cu: goto label_397c3c;
        case 0x397c40u: goto label_397c40;
        case 0x397c44u: goto label_397c44;
        case 0x397c48u: goto label_397c48;
        case 0x397c4cu: goto label_397c4c;
        case 0x397c50u: goto label_397c50;
        case 0x397c54u: goto label_397c54;
        default: break;
    }

    ctx->pc = 0x397a48u;

label_397a48:
    // 0x397a48: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x397a48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_397a4c:
    // 0x397a4c: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x397a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_397a50:
    // 0x397a50: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x397a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_397a54:
    // 0x397a54: 0x24425600  addiu       $v0, $v0, 0x5600
    ctx->pc = 0x397a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22016));
label_397a58:
    // 0x397a58: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x397a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_397a5c:
    // 0x397a5c: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x397a5cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_397a60:
    // 0x397a60: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x397a60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_397a64:
    // 0x397a64: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x397a64u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_397a68:
    // 0x397a68: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x397a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_397a6c:
    // 0x397a6c: 0x24030180  addiu       $v1, $zero, 0x180
    ctx->pc = 0x397a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
label_397a70:
    // 0x397a70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x397a70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_397a74:
    // 0x397a74: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x397a74u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_397a78:
    // 0x397a78: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x397a78u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_397a7c:
    // 0x397a7c: 0x3c110058  lui         $s1, 0x58
    ctx->pc = 0x397a7cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)88 << 16));
label_397a80:
    // 0x397a80: 0xae63000c  sw          $v1, 0xC($s3)
    ctx->pc = 0x397a80u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 3));
label_397a84:
    // 0x397a84: 0x26101150  addiu       $s0, $s0, 0x1150
    ctx->pc = 0x397a84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4432));
label_397a88:
    // 0x397a88: 0xae600010  sw          $zero, 0x10($s3)
    ctx->pc = 0x397a88u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
label_397a8c:
    // 0x397a8c: 0x26311158  addiu       $s1, $s1, 0x1158
    ctx->pc = 0x397a8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4440));
label_397a90:
    // 0x397a90: 0x8e4a27e4  lw          $t2, 0x27E4($s2)
    ctx->pc = 0x397a90u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10212)));
label_397a94:
    // 0x397a94: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x397a94u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
label_397a98:
    // 0x397a98: 0x34c6e000  ori         $a2, $a2, 0xE000
    ctx->pc = 0x397a98u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)57344);
label_397a9c:
    // 0x397a9c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x397a9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_397aa0:
    // 0x397aa0: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x397aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_397aa4:
    // 0x397aa4: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x397aa4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_397aa8:
    // 0x397aa8: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x397aa8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_397aac:
    // 0x397aac: 0x2409001b  addiu       $t1, $zero, 0x1B
    ctx->pc = 0x397aacu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_397ab0:
    // 0x397ab0: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x397ab0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_397ab4:
    // 0x397ab4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x397ab4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_397ab8:
    // 0x397ab8: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x397ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_397abc:
    // 0x397abc: 0x1442021  addu        $a0, $t2, $a0
    ctx->pc = 0x397abcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
label_397ac0:
    // 0x397ac0: 0x40f809  jalr        $v0
label_397ac4:
    if (ctx->pc == 0x397AC4u) {
        ctx->pc = 0x397AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397AC0u;
        // 0x397ac4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397AC8u;
        goto label_397ac8;
    }
    ctx->pc = 0x397AC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x397AC8u);
        ctx->pc = 0x397AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397AC0u;
        // 0x397ac4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x397AC0u, 0x397AC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x397AC8u;
label_397ac8:
    // 0x397ac8: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x397ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
label_397acc:
    // 0x397acc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x397accu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_397ad0:
    // 0x397ad0: 0x8e4c27e4  lw          $t4, 0x27E4($s2)
    ctx->pc = 0x397ad0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10212)));
label_397ad4:
    // 0x397ad4: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x397ad4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_397ad8:
    // 0x397ad8: 0x8e66000c  lw          $a2, 0xC($s3)
    ctx->pc = 0x397ad8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_397adc:
    // 0x397adc: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x397adcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_397ae0:
    // 0x397ae0: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x397ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_397ae4:
    // 0x397ae4: 0x2409001c  addiu       $t1, $zero, 0x1C
    ctx->pc = 0x397ae4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_397ae8:
    // 0x397ae8: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x397ae8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_397aec:
    // 0x397aec: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x397aecu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_397af0:
    // 0x397af0: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x397af0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_397af4:
    // 0x397af4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x397af4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_397af8:
    // 0x397af8: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x397af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_397afc:
    // 0x397afc: 0x40f809  jalr        $v0
label_397b00:
    if (ctx->pc == 0x397B00u) {
        ctx->pc = 0x397B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397AFCu;
        // 0x397b00: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397B04u;
        goto label_397b04;
    }
    ctx->pc = 0x397AFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x397B04u);
        ctx->pc = 0x397B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397AFCu;
        // 0x397b00: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x397AFCu, 0x397B04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x397B04u;
label_397b04:
    // 0x397b04: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x397b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_397b08:
    // 0x397b08: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x397b08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_397b0c:
    // 0x397b0c: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_397b10:
    if (ctx->pc == 0x397B10u) {
        ctx->pc = 0x397B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397B0Cu;
        // 0x397b10: 0xae620008  sw          $v0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397B14u;
        goto label_397b14;
    }
    ctx->pc = 0x397B0Cu;
    {
        const bool branch_taken_0x397b0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x397B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397B0Cu;
        // 0x397b10: 0xae620008  sw          $v0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397b0c) {
            ctx->pc = 0x397B44u;
            goto label_397b44;
        }
    }
    ctx->pc = 0x397B14u;
label_397b14:
    // 0x397b14: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x397b14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_397b18:
    // 0x397b18: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x397b18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_397b1c:
    // 0x397b1c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x397b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_397b20:
    // 0x397b20: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x397b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_397b24:
    // 0x397b24: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x397b24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_397b28:
    // 0x397b28: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x397b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_397b2c:
    // 0x397b2c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x397b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_397b30:
    // 0x397b30: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x397b30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_397b34:
    // 0x397b34: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x397b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_397b38:
    // 0x397b38: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x397b38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_397b3c:
    // 0x397b3c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_397b40:
    if (ctx->pc == 0x397B40u) {
        ctx->pc = 0x397B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397B3Cu;
        // 0x397b40: 0x24c60140  addiu       $a2, $a2, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397B44u;
        goto label_397b44;
    }
    ctx->pc = 0x397B3Cu;
    {
        const bool branch_taken_0x397b3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x397B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397B3Cu;
        // 0x397b40: 0x24c60140  addiu       $a2, $a2, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397b3c) {
            ctx->pc = 0x397B18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_397b18;
        }
    }
    ctx->pc = 0x397B44u;
label_397b44:
    // 0x397b44: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x397b44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_397b48:
    // 0x397b48: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x397b48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_397b4c:
    // 0x397b4c: 0x244255a0  addiu       $v0, $v0, 0x55A0
    ctx->pc = 0x397b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21920));
label_397b50:
    // 0x397b50: 0xa663001e  sh          $v1, 0x1E($s3)
    ctx->pc = 0x397b50u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 30), (uint16_t)GPR_U32(ctx, 3));
label_397b54:
    // 0x397b54: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x397b54u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_397b58:
    // 0x397b58: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x397b58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_397b5c:
    // 0x397b5c: 0xae600014  sw          $zero, 0x14($s3)
    ctx->pc = 0x397b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 0));
label_397b60:
    // 0x397b60: 0x26710050  addiu       $s1, $s3, 0x50
    ctx->pc = 0x397b60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
label_397b64:
    // 0x397b64: 0xa6600018  sh          $zero, 0x18($s3)
    ctx->pc = 0x397b64u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 24), (uint16_t)GPR_U32(ctx, 0));
label_397b68:
    // 0x397b68: 0x26640020  addiu       $a0, $s3, 0x20
    ctx->pc = 0x397b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_397b6c:
    // 0x397b6c: 0xa660001a  sh          $zero, 0x1A($s3)
    ctx->pc = 0x397b6cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 26), (uint16_t)GPR_U32(ctx, 0));
label_397b70:
    // 0x397b70: 0xa663001c  sh          $v1, 0x1C($s3)
    ctx->pc = 0x397b70u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 28), (uint16_t)GPR_U32(ctx, 3));
label_397b74:
    // 0x397b74: 0x0  nop
    ctx->pc = 0x397b74u;
    // NOP
label_397b78:
    // 0x397b78: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x397b78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_397b7c:
    // 0x397b7c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x397b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_397b80:
    // 0x397b80: 0x2ca20008  sltiu       $v0, $a1, 0x8
    ctx->pc = 0x397b80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_397b84:
    // 0x397b84: 0x0  nop
    ctx->pc = 0x397b84u;
    // NOP
label_397b88:
    // 0x397b88: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_397b8c:
    if (ctx->pc == 0x397B8Cu) {
        ctx->pc = 0x397B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397B88u;
        // 0x397b8c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397B90u;
        goto label_397b90;
    }
    ctx->pc = 0x397B88u;
    {
        const bool branch_taken_0x397b88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x397B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397B88u;
        // 0x397b8c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397b88) {
            ctx->pc = 0x397B78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_397b78;
        }
    }
    ctx->pc = 0x397B90u;
label_397b90:
    // 0x397b90: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x397b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_397b94:
    // 0x397b94: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x397b94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_397b98:
    // 0x397b98: 0xae600040  sw          $zero, 0x40($s3)
    ctx->pc = 0x397b98u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 64), GPR_U32(ctx, 0));
label_397b9c:
    // 0x397b9c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x397b9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_397ba0:
    // 0x397ba0: 0xae600044  sw          $zero, 0x44($s3)
    ctx->pc = 0x397ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 0));
label_397ba4:
    // 0x397ba4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x397ba4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_397ba8:
    // 0x397ba8: 0xa26067e9  sb          $zero, 0x67E9($s3)
    ctx->pc = 0x397ba8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 26601), (uint8_t)GPR_U32(ctx, 0));
label_397bac:
    // 0x397bac: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x397bacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_397bb0:
    // 0x397bb0: 0xae620048  sw          $v0, 0x48($s3)
    ctx->pc = 0x397bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 2));
label_397bb4:
    // 0x397bb4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x397bb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_397bb8:
    // 0x397bb8: 0xc0e60d2  jal         func_398348
label_397bbc:
    if (ctx->pc == 0x397BBCu) {
        ctx->pc = 0x397BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397BB8u;
        // 0x397bbc: 0xa26367e8  sb          $v1, 0x67E8($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 26600), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397BC0u;
        goto label_397bc0;
    }
    ctx->pc = 0x397BB8u;
    SET_GPR_U32(ctx, 31, 0x397BC0u);
    ctx->pc = 0x397BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397BB8u;
    // 0x397bbc: 0xa26367e8  sb          $v1, 0x67E8($s3) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 19), 26600), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398348u, 0x397BB8u, 0x397BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397BC0u;
label_397bc0:
    // 0x397bc0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x397bc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_397bc4:
    // 0x397bc4: 0x0  nop
    ctx->pc = 0x397bc4u;
    // NOP
label_397bc8:
    // 0x397bc8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x397bc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_397bcc:
    // 0x397bcc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x397bccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_397bd0:
    // 0x397bd0: 0xc0e60d2  jal         func_398348
label_397bd4:
    if (ctx->pc == 0x397BD4u) {
        ctx->pc = 0x397BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397BD0u;
        // 0x397bd4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397BD8u;
        goto label_397bd8;
    }
    ctx->pc = 0x397BD0u;
    SET_GPR_U32(ctx, 31, 0x397BD8u);
    ctx->pc = 0x397BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397BD0u;
    // 0x397bd4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398348u, 0x397BD0u, 0x397BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397BD8u;
label_397bd8:
    // 0x397bd8: 0x2e0200ff  sltiu       $v0, $s0, 0xFF
    ctx->pc = 0x397bd8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)255) ? 1 : 0);
label_397bdc:
    // 0x397bdc: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
label_397be0:
    if (ctx->pc == 0x397BE0u) {
        ctx->pc = 0x397BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397BDCu;
        // 0x397be0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397BE4u;
        goto label_397be4;
    }
    ctx->pc = 0x397BDCu;
    {
        const bool branch_taken_0x397bdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x397bdc) {
            ctx->pc = 0x397BE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x397BDCu;
            // 0x397be0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397BC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_397bc8;
        }
    }
    ctx->pc = 0x397BE4u;
label_397be4:
    // 0x397be4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x397be4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_397be8:
    // 0x397be8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x397be8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_397bec:
    // 0x397bec: 0xc10c1fa  jal         func_4307E8
label_397bf0:
    if (ctx->pc == 0x397BF0u) {
        ctx->pc = 0x397BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397BECu;
        // 0x397bf0: 0x24066798  addiu       $a2, $zero, 0x6798 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 26520));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397BF4u;
        goto label_397bf4;
    }
    ctx->pc = 0x397BECu;
    SET_GPR_U32(ctx, 31, 0x397BF4u);
    ctx->pc = 0x397BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397BECu;
    // 0x397bf0: 0x24066798  addiu       $a2, $zero, 0x6798 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 26520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x397BECu, 0x397BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397BF4u;
label_397bf4:
    // 0x397bf4: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x397bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_397bf8:
    // 0x397bf8: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x397bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_397bfc:
    // 0x397bfc: 0x24455780  addiu       $a1, $v0, 0x5780
    ctx->pc = 0x397bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 22400));
label_397c00:
    // 0x397c00: 0x246356f0  addiu       $v1, $v1, 0x56F0
    ctx->pc = 0x397c00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22256));
label_397c04:
    // 0x397c04: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x397c04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_397c08:
    // 0x397c08: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x397c08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_397c0c:
    // 0x397c0c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x397c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_397c10:
    // 0x397c10: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x397c10u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_397c14:
    // 0x397c14: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x397c14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_397c18:
    // 0x397c18: 0x2c820023  sltiu       $v0, $a0, 0x23
    ctx->pc = 0x397c18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)35) ? 1 : 0);
label_397c1c:
    // 0x397c1c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_397c20:
    if (ctx->pc == 0x397C20u) {
        ctx->pc = 0x397C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397C1Cu;
        // 0x397c20: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397C24u;
        goto label_397c24;
    }
    ctx->pc = 0x397C1Cu;
    {
        const bool branch_taken_0x397c1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x397C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397C1Cu;
        // 0x397c20: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397c1c) {
            ctx->pc = 0x397C08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_397c08;
        }
    }
    ctx->pc = 0x397C24u;
label_397c24:
    // 0x397c24: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x397c24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_397c28:
    // 0x397c28: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x397c28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_397c2c:
    // 0x397c2c: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x397c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_397c30:
    // 0x397c30: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x397c30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_397c34:
    // 0x397c34: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x397c34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_397c38:
    // 0x397c38: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x397c38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_397c3c:
    // 0x397c3c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x397c3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_397c40:
    // 0x397c40: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x397c40u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_397c44:
    // 0x397c44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x397c44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_397c48:
    // 0x397c48: 0xac832c20  sw          $v1, 0x2C20($a0)
    ctx->pc = 0x397c48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 11296), GPR_U32(ctx, 3));
label_397c4c:
    // 0x397c4c: 0xaca32c1c  sw          $v1, 0x2C1C($a1)
    ctx->pc = 0x397c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 11292), GPR_U32(ctx, 3));
label_397c50:
    // 0x397c50: 0x3e00008  jr          $ra
label_397c54:
    if (ctx->pc == 0x397C54u) {
        ctx->pc = 0x397C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397C50u;
        // 0x397c54: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397C58u;
        goto label_fallthrough_0x397c50;
    }
    ctx->pc = 0x397C50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x397C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397C50u;
        // 0x397c54: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x397C50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x397c50:
    ctx->pc = 0x397C58u;
}
