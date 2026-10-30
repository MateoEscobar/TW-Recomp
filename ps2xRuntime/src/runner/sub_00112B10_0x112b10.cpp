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

// Function: sub_00112B10
// Address: 0x112b10 - 0x112c48
void sub_00112B10_0x112b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00112B10_0x112b10");
#endif

    switch (ctx->pc) {
        case 0x112b10u: goto label_112b10;
        case 0x112b14u: goto label_112b14;
        case 0x112b18u: goto label_112b18;
        case 0x112b1cu: goto label_112b1c;
        case 0x112b20u: goto label_112b20;
        case 0x112b24u: goto label_112b24;
        case 0x112b28u: goto label_112b28;
        case 0x112b2cu: goto label_112b2c;
        case 0x112b30u: goto label_112b30;
        case 0x112b34u: goto label_112b34;
        case 0x112b38u: goto label_112b38;
        case 0x112b3cu: goto label_112b3c;
        case 0x112b40u: goto label_112b40;
        case 0x112b44u: goto label_112b44;
        case 0x112b48u: goto label_112b48;
        case 0x112b4cu: goto label_112b4c;
        case 0x112b50u: goto label_112b50;
        case 0x112b54u: goto label_112b54;
        case 0x112b58u: goto label_112b58;
        case 0x112b5cu: goto label_112b5c;
        case 0x112b60u: goto label_112b60;
        case 0x112b64u: goto label_112b64;
        case 0x112b68u: goto label_112b68;
        case 0x112b6cu: goto label_112b6c;
        case 0x112b70u: goto label_112b70;
        case 0x112b74u: goto label_112b74;
        case 0x112b78u: goto label_112b78;
        case 0x112b7cu: goto label_112b7c;
        case 0x112b80u: goto label_112b80;
        case 0x112b84u: goto label_112b84;
        case 0x112b88u: goto label_112b88;
        case 0x112b8cu: goto label_112b8c;
        case 0x112b90u: goto label_112b90;
        case 0x112b94u: goto label_112b94;
        case 0x112b98u: goto label_112b98;
        case 0x112b9cu: goto label_112b9c;
        case 0x112ba0u: goto label_112ba0;
        case 0x112ba4u: goto label_112ba4;
        case 0x112ba8u: goto label_112ba8;
        case 0x112bacu: goto label_112bac;
        case 0x112bb0u: goto label_112bb0;
        case 0x112bb4u: goto label_112bb4;
        case 0x112bb8u: goto label_112bb8;
        case 0x112bbcu: goto label_112bbc;
        case 0x112bc0u: goto label_112bc0;
        case 0x112bc4u: goto label_112bc4;
        case 0x112bc8u: goto label_112bc8;
        case 0x112bccu: goto label_112bcc;
        case 0x112bd0u: goto label_112bd0;
        case 0x112bd4u: goto label_112bd4;
        case 0x112bd8u: goto label_112bd8;
        case 0x112bdcu: goto label_112bdc;
        case 0x112be0u: goto label_112be0;
        case 0x112be4u: goto label_112be4;
        case 0x112be8u: goto label_112be8;
        case 0x112becu: goto label_112bec;
        case 0x112bf0u: goto label_112bf0;
        case 0x112bf4u: goto label_112bf4;
        case 0x112bf8u: goto label_112bf8;
        case 0x112bfcu: goto label_112bfc;
        case 0x112c00u: goto label_112c00;
        case 0x112c04u: goto label_112c04;
        case 0x112c08u: goto label_112c08;
        case 0x112c0cu: goto label_112c0c;
        case 0x112c10u: goto label_112c10;
        case 0x112c14u: goto label_112c14;
        case 0x112c18u: goto label_112c18;
        case 0x112c1cu: goto label_112c1c;
        case 0x112c20u: goto label_112c20;
        case 0x112c24u: goto label_112c24;
        case 0x112c28u: goto label_112c28;
        case 0x112c2cu: goto label_112c2c;
        case 0x112c30u: goto label_112c30;
        case 0x112c34u: goto label_112c34;
        case 0x112c38u: goto label_112c38;
        case 0x112c3cu: goto label_112c3c;
        case 0x112c40u: goto label_112c40;
        case 0x112c44u: goto label_112c44;
        default: break;
    }

    ctx->pc = 0x112b10u;

label_112b10:
    // 0x112b10: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x112b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_112b14:
    // 0x112b14: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x112b14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_112b18:
    // 0x112b18: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x112b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_112b1c:
    // 0x112b1c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x112b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_112b20:
    // 0x112b20: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x112b20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_112b24:
    // 0x112b24: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x112b24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_112b28:
    // 0x112b28: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x112b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_112b2c:
    // 0x112b2c: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x112b2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_112b30:
    // 0x112b30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x112b30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_112b34:
    // 0x112b34: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x112b34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_112b38:
    // 0x112b38: 0xae2001dc  sw          $zero, 0x1DC($s1)
    ctx->pc = 0x112b38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 476), GPR_U32(ctx, 0));
label_112b3c:
    // 0x112b3c: 0x90620410  lbu         $v0, 0x410($v1)
    ctx->pc = 0x112b3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1040)));
label_112b40:
    // 0x112b40: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_112b44:
    if (ctx->pc == 0x112B44u) {
        ctx->pc = 0x112B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112B40u;
        // 0x112b44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112B48u;
        goto label_112b48;
    }
    ctx->pc = 0x112B40u;
    {
        const bool branch_taken_0x112b40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x112B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112B40u;
        // 0x112b44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112b40) {
            ctx->pc = 0x112B50u;
            goto label_112b50;
        }
    }
    ctx->pc = 0x112B48u;
label_112b48:
    // 0x112b48: 0xae2201d8  sw          $v0, 0x1D8($s1)
    ctx->pc = 0x112b48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 472), GPR_U32(ctx, 2));
label_112b4c:
    // 0x112b4c: 0xae2201dc  sw          $v0, 0x1DC($s1)
    ctx->pc = 0x112b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 476), GPR_U32(ctx, 2));
label_112b50:
    // 0x112b50: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x112b50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_112b54:
    // 0x112b54: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x112b54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_112b58:
    // 0x112b58: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x112b58u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_112b5c:
    // 0x112b5c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x112b5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_112b60:
    // 0x112b60: 0x2ce40002  sltiu       $a0, $a3, 0x2
    ctx->pc = 0x112b60u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_112b64:
    // 0x112b64: 0x7cc20020  sq          $v0, 0x20($a2)
    ctx->pc = 0x112b64u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), GPR_VEC(ctx, 2));
label_112b68:
    // 0x112b68: 0x78a30010  lq          $v1, 0x10($a1)
    ctx->pc = 0x112b68u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 16)));
label_112b6c:
    // 0x112b6c: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x112b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
label_112b70:
    // 0x112b70: 0x7cc30030  sq          $v1, 0x30($a2)
    ctx->pc = 0x112b70u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), GPR_VEC(ctx, 3));
label_112b74:
    // 0x112b74: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
label_112b78:
    if (ctx->pc == 0x112B78u) {
        ctx->pc = 0x112B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112B74u;
        // 0x112b78: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112B7Cu;
        goto label_112b7c;
    }
    ctx->pc = 0x112B74u;
    {
        const bool branch_taken_0x112b74 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x112B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112B74u;
        // 0x112b78: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112b74) {
            ctx->pc = 0x112B58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_112b58;
        }
    }
    ctx->pc = 0x112B7Cu;
label_112b7c:
    // 0x112b7c: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x112b7cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_112b80:
    // 0x112b80: 0x12000028  beqz        $s0, . + 4 + (0x28 << 2)
label_112b84:
    if (ctx->pc == 0x112B84u) {
        ctx->pc = 0x112B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112B80u;
        // 0x112b84: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112B88u;
        goto label_112b88;
    }
    ctx->pc = 0x112B80u;
    {
        const bool branch_taken_0x112b80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x112B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112B80u;
        // 0x112b84: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112b80) {
            ctx->pc = 0x112C24u;
            goto label_112c24;
        }
    }
    ctx->pc = 0x112B88u;
label_112b88:
    // 0x112b88: 0x3c030055  lui         $v1, 0x55
    ctx->pc = 0x112b88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)85 << 16));
label_112b8c:
    // 0x112b8c: 0x905383bb  lbu         $s3, -0x7C45($v0)
    ctx->pc = 0x112b8cu;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294935483)));
label_112b90:
    // 0x112b90: 0x3c140051  lui         $s4, 0x51
    ctx->pc = 0x112b90u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
label_112b94:
    // 0x112b94: 0x907283ba  lbu         $s2, -0x7C46($v1)
    ctx->pc = 0x112b94u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294935482)));
label_112b98:
    // 0x112b98: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x112b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_112b9c:
    // 0x112b9c: 0x0  nop
    ctx->pc = 0x112b9cu;
    // NOP
label_112ba0:
    // 0x112ba0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_112ba4:
    if (ctx->pc == 0x112BA4u) {
        ctx->pc = 0x112BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112BA0u;
        // 0x112ba4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112BA8u;
        goto label_112ba8;
    }
    ctx->pc = 0x112BA0u;
    {
        const bool branch_taken_0x112ba0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x112BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112BA0u;
        // 0x112ba4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112ba0) {
            ctx->pc = 0x112BC0u;
            goto label_112bc0;
        }
    }
    ctx->pc = 0x112BA8u;
label_112ba8:
    // 0x112ba8: 0xc046cd4  jal         func_11B350
label_112bac:
    if (ctx->pc == 0x112BACu) {
        ctx->pc = 0x112BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112BA8u;
        // 0x112bac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112BB0u;
        goto label_112bb0;
    }
    ctx->pc = 0x112BA8u;
    SET_GPR_U32(ctx, 31, 0x112BB0u);
    ctx->pc = 0x112BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112BA8u;
    // 0x112bac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B350u, 0x112BA8u, 0x112BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112BB0u;
label_112bb0:
    // 0x112bb0: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
label_112bb4:
    if (ctx->pc == 0x112BB4u) {
        ctx->pc = 0x112BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112BB0u;
        // 0x112bb4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112BB8u;
        goto label_112bb8;
    }
    ctx->pc = 0x112BB0u;
    {
        const bool branch_taken_0x112bb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x112BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112BB0u;
        // 0x112bb4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112bb0) {
            ctx->pc = 0x112C04u;
            goto label_112c04;
        }
    }
    ctx->pc = 0x112BB8u;
label_112bb8:
    // 0x112bb8: 0x10000015  b           . + 4 + (0x15 << 2)
label_112bbc:
    if (ctx->pc == 0x112BBCu) {
        ctx->pc = 0x112BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112BB8u;
        // 0x112bbc: 0x8e10000c  lw          $s0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112BC0u;
        goto label_112bc0;
    }
    ctx->pc = 0x112BB8u;
    {
        const bool branch_taken_0x112bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112BB8u;
        // 0x112bbc: 0x8e10000c  lw          $s0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112bb8) {
            ctx->pc = 0x112C10u;
            goto label_112c10;
        }
    }
    ctx->pc = 0x112BC0u;
label_112bc0:
    // 0x112bc0: 0xc044a6e  jal         func_1129B8
label_112bc4:
    if (ctx->pc == 0x112BC4u) {
        ctx->pc = 0x112BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112BC0u;
        // 0x112bc4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112BC8u;
        goto label_112bc8;
    }
    ctx->pc = 0x112BC0u;
    SET_GPR_U32(ctx, 31, 0x112BC8u);
    ctx->pc = 0x112BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112BC0u;
    // 0x112bc4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1129B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1129B8u, 0x112BC0u, 0x112BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112BC8u;
label_112bc8:
    // 0x112bc8: 0x92020094  lbu         $v0, 0x94($s0)
    ctx->pc = 0x112bc8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 148)));
label_112bcc:
    // 0x112bcc: 0x1053000c  beq         $v0, $s3, . + 4 + (0xC << 2)
label_112bd0:
    if (ctx->pc == 0x112BD0u) {
        ctx->pc = 0x112BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112BCCu;
        // 0x112bd0: 0x8e86bce4  lw          $a2, -0x431C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294950116)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112BD4u;
        goto label_112bd4;
    }
    ctx->pc = 0x112BCCu;
    {
        const bool branch_taken_0x112bcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x112BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112BCCu;
        // 0x112bd0: 0x8e86bce4  lw          $a2, -0x431C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294950116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112bcc) {
            ctx->pc = 0x112C00u;
            goto label_112c00;
        }
    }
    ctx->pc = 0x112BD4u;
label_112bd4:
    // 0x112bd4: 0x8e05003c  lw          $a1, 0x3C($s0)
    ctx->pc = 0x112bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_112bd8:
    // 0x112bd8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x112bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_112bdc:
    // 0x112bdc: 0x84640108  lh          $a0, 0x108($v1)
    ctx->pc = 0x112bdcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 264)));
label_112be0:
    // 0x112be0: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x112be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_112be4:
    // 0x112be4: 0x40f809  jalr        $v0
label_112be8:
    if (ctx->pc == 0x112BE8u) {
        ctx->pc = 0x112BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112BE4u;
        // 0x112be8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112BECu;
        goto label_112bec;
    }
    ctx->pc = 0x112BE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x112BECu);
        ctx->pc = 0x112BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112BE4u;
        // 0x112be8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x112BE4u, 0x112BECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x112BECu;
label_112bec:
    // 0x112bec: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_112bf0:
    if (ctx->pc == 0x112BF0u) {
        ctx->pc = 0x112BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112BECu;
        // 0x112bf0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112BF4u;
        goto label_112bf4;
    }
    ctx->pc = 0x112BECu;
    {
        const bool branch_taken_0x112bec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x112BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112BECu;
        // 0x112bf0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112bec) {
            ctx->pc = 0x112C04u;
            goto label_112c04;
        }
    }
    ctx->pc = 0x112BF4u;
label_112bf4:
    // 0x112bf4: 0x92020094  lbu         $v0, 0x94($s0)
    ctx->pc = 0x112bf4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 148)));
label_112bf8:
    // 0x112bf8: 0x54520005  bnel        $v0, $s2, . + 4 + (0x5 << 2)
label_112bfc:
    if (ctx->pc == 0x112BFCu) {
        ctx->pc = 0x112BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112BF8u;
        // 0x112bfc: 0x8e10000c  lw          $s0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112C00u;
        goto label_112c00;
    }
    ctx->pc = 0x112BF8u;
    {
        const bool branch_taken_0x112bf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x112bf8) {
            ctx->pc = 0x112BFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x112BF8u;
            // 0x112bfc: 0x8e10000c  lw          $s0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x112C10u;
            goto label_112c10;
        }
    }
    ctx->pc = 0x112C00u;
label_112c00:
    // 0x112c00: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x112c00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_112c04:
    // 0x112c04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x112c04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_112c08:
    // 0x112c08: 0xc044740  jal         func_111D00
label_112c0c:
    if (ctx->pc == 0x112C0Cu) {
        ctx->pc = 0x112C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112C08u;
        // 0x112c0c: 0x8e10000c  lw          $s0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112C10u;
        goto label_112c10;
    }
    ctx->pc = 0x112C08u;
    SET_GPR_U32(ctx, 31, 0x112C10u);
    ctx->pc = 0x112C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112C08u;
    // 0x112c0c: 0x8e10000c  lw          $s0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111D00u, 0x112C08u, 0x112C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112C10u;
label_112c10:
    // 0x112c10: 0x5600ffe3  bnel        $s0, $zero, . + 4 + (-0x1D << 2)
label_112c14:
    if (ctx->pc == 0x112C14u) {
        ctx->pc = 0x112C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112C10u;
        // 0x112c14: 0x8e02004c  lw          $v0, 0x4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112C18u;
        goto label_112c18;
    }
    ctx->pc = 0x112C10u;
    {
        const bool branch_taken_0x112c10 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x112c10) {
            ctx->pc = 0x112C14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x112C10u;
            // 0x112c14: 0x8e02004c  lw          $v0, 0x4C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x112BA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_112ba0;
        }
    }
    ctx->pc = 0x112C18u;
label_112c18:
    // 0x112c18: 0x8e2201dc  lw          $v0, 0x1DC($s1)
    ctx->pc = 0x112c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 476)));
label_112c1c:
    // 0x112c1c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_112c20:
    if (ctx->pc == 0x112C20u) {
        ctx->pc = 0x112C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112C1Cu;
        // 0x112c20: 0xae2001d8  sw          $zero, 0x1D8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 472), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112C24u;
        goto label_112c24;
    }
    ctx->pc = 0x112C1Cu;
    {
        const bool branch_taken_0x112c1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x112c1c) {
            ctx->pc = 0x112C20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x112C1Cu;
            // 0x112c20: 0xae2001d8  sw          $zero, 0x1D8($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 472), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x112C24u;
            goto label_112c24;
        }
    }
    ctx->pc = 0x112C24u;
label_112c24:
    // 0x112c24: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x112c24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_112c28:
    // 0x112c28: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x112c28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_112c2c:
    // 0x112c2c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x112c2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_112c30:
    // 0x112c30: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x112c30u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_112c34:
    // 0x112c34: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x112c34u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_112c38:
    // 0x112c38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x112c38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_112c3c:
    // 0x112c3c: 0x3e00008  jr          $ra
label_112c40:
    if (ctx->pc == 0x112C40u) {
        ctx->pc = 0x112C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112C3Cu;
        // 0x112c40: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112C44u;
        goto label_112c44;
    }
    ctx->pc = 0x112C3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x112C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112C3Cu;
        // 0x112c40: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x112C3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x112C44u;
label_112c44:
    // 0x112c44: 0x0  nop
    ctx->pc = 0x112c44u;
    // NOP
    ctx->pc = 0x112c48u;
}
