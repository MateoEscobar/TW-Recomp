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

// Function: sub_00468B00
// Address: 0x468b00 - 0x468da8
void sub_00468B00_0x468b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00468B00_0x468b00");
#endif

    switch (ctx->pc) {
        case 0x468b00u: goto label_468b00;
        case 0x468b04u: goto label_468b04;
        case 0x468b08u: goto label_468b08;
        case 0x468b0cu: goto label_468b0c;
        case 0x468b10u: goto label_468b10;
        case 0x468b14u: goto label_468b14;
        case 0x468b18u: goto label_468b18;
        case 0x468b1cu: goto label_468b1c;
        case 0x468b20u: goto label_468b20;
        case 0x468b24u: goto label_468b24;
        case 0x468b28u: goto label_468b28;
        case 0x468b2cu: goto label_468b2c;
        case 0x468b30u: goto label_468b30;
        case 0x468b34u: goto label_468b34;
        case 0x468b38u: goto label_468b38;
        case 0x468b3cu: goto label_468b3c;
        case 0x468b40u: goto label_468b40;
        case 0x468b44u: goto label_468b44;
        case 0x468b48u: goto label_468b48;
        case 0x468b4cu: goto label_468b4c;
        case 0x468b50u: goto label_468b50;
        case 0x468b54u: goto label_468b54;
        case 0x468b58u: goto label_468b58;
        case 0x468b5cu: goto label_468b5c;
        case 0x468b60u: goto label_468b60;
        case 0x468b64u: goto label_468b64;
        case 0x468b68u: goto label_468b68;
        case 0x468b6cu: goto label_468b6c;
        case 0x468b70u: goto label_468b70;
        case 0x468b74u: goto label_468b74;
        case 0x468b78u: goto label_468b78;
        case 0x468b7cu: goto label_468b7c;
        case 0x468b80u: goto label_468b80;
        case 0x468b84u: goto label_468b84;
        case 0x468b88u: goto label_468b88;
        case 0x468b8cu: goto label_468b8c;
        case 0x468b90u: goto label_468b90;
        case 0x468b94u: goto label_468b94;
        case 0x468b98u: goto label_468b98;
        case 0x468b9cu: goto label_468b9c;
        case 0x468ba0u: goto label_468ba0;
        case 0x468ba4u: goto label_468ba4;
        case 0x468ba8u: goto label_468ba8;
        case 0x468bacu: goto label_468bac;
        case 0x468bb0u: goto label_468bb0;
        case 0x468bb4u: goto label_468bb4;
        case 0x468bb8u: goto label_468bb8;
        case 0x468bbcu: goto label_468bbc;
        case 0x468bc0u: goto label_468bc0;
        case 0x468bc4u: goto label_468bc4;
        case 0x468bc8u: goto label_468bc8;
        case 0x468bccu: goto label_468bcc;
        case 0x468bd0u: goto label_468bd0;
        case 0x468bd4u: goto label_468bd4;
        case 0x468bd8u: goto label_468bd8;
        case 0x468bdcu: goto label_468bdc;
        case 0x468be0u: goto label_468be0;
        case 0x468be4u: goto label_468be4;
        case 0x468be8u: goto label_468be8;
        case 0x468becu: goto label_468bec;
        case 0x468bf0u: goto label_468bf0;
        case 0x468bf4u: goto label_468bf4;
        case 0x468bf8u: goto label_468bf8;
        case 0x468bfcu: goto label_468bfc;
        case 0x468c00u: goto label_468c00;
        case 0x468c04u: goto label_468c04;
        case 0x468c08u: goto label_468c08;
        case 0x468c0cu: goto label_468c0c;
        case 0x468c10u: goto label_468c10;
        case 0x468c14u: goto label_468c14;
        case 0x468c18u: goto label_468c18;
        case 0x468c1cu: goto label_468c1c;
        case 0x468c20u: goto label_468c20;
        case 0x468c24u: goto label_468c24;
        case 0x468c28u: goto label_468c28;
        case 0x468c2cu: goto label_468c2c;
        case 0x468c30u: goto label_468c30;
        case 0x468c34u: goto label_468c34;
        case 0x468c38u: goto label_468c38;
        case 0x468c3cu: goto label_468c3c;
        case 0x468c40u: goto label_468c40;
        case 0x468c44u: goto label_468c44;
        case 0x468c48u: goto label_468c48;
        case 0x468c4cu: goto label_468c4c;
        case 0x468c50u: goto label_468c50;
        case 0x468c54u: goto label_468c54;
        case 0x468c58u: goto label_468c58;
        case 0x468c5cu: goto label_468c5c;
        case 0x468c60u: goto label_468c60;
        case 0x468c64u: goto label_468c64;
        case 0x468c68u: goto label_468c68;
        case 0x468c6cu: goto label_468c6c;
        case 0x468c70u: goto label_468c70;
        case 0x468c74u: goto label_468c74;
        case 0x468c78u: goto label_468c78;
        case 0x468c7cu: goto label_468c7c;
        case 0x468c80u: goto label_468c80;
        case 0x468c84u: goto label_468c84;
        case 0x468c88u: goto label_468c88;
        case 0x468c8cu: goto label_468c8c;
        case 0x468c90u: goto label_468c90;
        case 0x468c94u: goto label_468c94;
        case 0x468c98u: goto label_468c98;
        case 0x468c9cu: goto label_468c9c;
        case 0x468ca0u: goto label_468ca0;
        case 0x468ca4u: goto label_468ca4;
        case 0x468ca8u: goto label_468ca8;
        case 0x468cacu: goto label_468cac;
        case 0x468cb0u: goto label_468cb0;
        case 0x468cb4u: goto label_468cb4;
        case 0x468cb8u: goto label_468cb8;
        case 0x468cbcu: goto label_468cbc;
        case 0x468cc0u: goto label_468cc0;
        case 0x468cc4u: goto label_468cc4;
        case 0x468cc8u: goto label_468cc8;
        case 0x468cccu: goto label_468ccc;
        case 0x468cd0u: goto label_468cd0;
        case 0x468cd4u: goto label_468cd4;
        case 0x468cd8u: goto label_468cd8;
        case 0x468cdcu: goto label_468cdc;
        case 0x468ce0u: goto label_468ce0;
        case 0x468ce4u: goto label_468ce4;
        case 0x468ce8u: goto label_468ce8;
        case 0x468cecu: goto label_468cec;
        case 0x468cf0u: goto label_468cf0;
        case 0x468cf4u: goto label_468cf4;
        case 0x468cf8u: goto label_468cf8;
        case 0x468cfcu: goto label_468cfc;
        case 0x468d00u: goto label_468d00;
        case 0x468d04u: goto label_468d04;
        case 0x468d08u: goto label_468d08;
        case 0x468d0cu: goto label_468d0c;
        case 0x468d10u: goto label_468d10;
        case 0x468d14u: goto label_468d14;
        case 0x468d18u: goto label_468d18;
        case 0x468d1cu: goto label_468d1c;
        case 0x468d20u: goto label_468d20;
        case 0x468d24u: goto label_468d24;
        case 0x468d28u: goto label_468d28;
        case 0x468d2cu: goto label_468d2c;
        case 0x468d30u: goto label_468d30;
        case 0x468d34u: goto label_468d34;
        case 0x468d38u: goto label_468d38;
        case 0x468d3cu: goto label_468d3c;
        case 0x468d40u: goto label_468d40;
        case 0x468d44u: goto label_468d44;
        case 0x468d48u: goto label_468d48;
        case 0x468d4cu: goto label_468d4c;
        case 0x468d50u: goto label_468d50;
        case 0x468d54u: goto label_468d54;
        case 0x468d58u: goto label_468d58;
        case 0x468d5cu: goto label_468d5c;
        case 0x468d60u: goto label_468d60;
        case 0x468d64u: goto label_468d64;
        case 0x468d68u: goto label_468d68;
        case 0x468d6cu: goto label_468d6c;
        case 0x468d70u: goto label_468d70;
        case 0x468d74u: goto label_468d74;
        case 0x468d78u: goto label_468d78;
        case 0x468d7cu: goto label_468d7c;
        case 0x468d80u: goto label_468d80;
        case 0x468d84u: goto label_468d84;
        case 0x468d88u: goto label_468d88;
        case 0x468d8cu: goto label_468d8c;
        case 0x468d90u: goto label_468d90;
        case 0x468d94u: goto label_468d94;
        case 0x468d98u: goto label_468d98;
        case 0x468d9cu: goto label_468d9c;
        case 0x468da0u: goto label_468da0;
        case 0x468da4u: goto label_468da4;
        default: break;
    }

    ctx->pc = 0x468b00u;

label_468b00:
    // 0x468b00: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x468b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_468b04:
    // 0x468b04: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x468b04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_468b08:
    // 0x468b08: 0x27a70014  addiu       $a3, $sp, 0x14
    ctx->pc = 0x468b08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
label_468b0c:
    // 0x468b0c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x468b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_468b10:
    // 0x468b10: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x468b10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_468b14:
    // 0x468b14: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x468b14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_468b18:
    // 0x468b18: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x468b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_468b1c:
    // 0x468b1c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x468b1cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_468b20:
    // 0x468b20: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x468b20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_468b24:
    // 0x468b24: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x468b24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_468b28:
    // 0x468b28: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x468b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_468b2c:
    // 0x468b2c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x468b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_468b30:
    // 0x468b30: 0xc11eeae  jal         func_47BAB8
label_468b34:
    if (ctx->pc == 0x468B34u) {
        ctx->pc = 0x468B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468B30u;
        // 0x468b34: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x468B38u;
        goto label_468b38;
    }
    ctx->pc = 0x468B30u;
    SET_GPR_U32(ctx, 31, 0x468B38u);
    ctx->pc = 0x468B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x468B30u;
    // 0x468b34: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BAB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BAB8u, 0x468B30u, 0x468B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x468B38u;
label_468b38:
    // 0x468b38: 0x1040008d  beqz        $v0, . + 4 + (0x8D << 2)
label_468b3c:
    if (ctx->pc == 0x468B3Cu) {
        ctx->pc = 0x468B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468B38u;
        // 0x468b3c: 0x8fa30014  lw          $v1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x468B40u;
        goto label_468b40;
    }
    ctx->pc = 0x468B38u;
    {
        const bool branch_taken_0x468b38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x468B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468B38u;
        // 0x468b3c: 0x8fa30014  lw          $v1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x468b38) {
            ctx->pc = 0x468D70u;
            goto label_468d70;
        }
    }
    ctx->pc = 0x468B40u;
label_468b40:
    // 0x468b40: 0x3c02fffc  lui         $v0, 0xFFFC
    ctx->pc = 0x468b40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65532 << 16));
label_468b44:
    // 0x468b44: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x468b44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
label_468b48:
    // 0x468b48: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x468b48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_468b4c:
    // 0x468b4c: 0x2c632003  sltiu       $v1, $v1, 0x2003
    ctx->pc = 0x468b4cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8195) ? 1 : 0);
label_468b50:
    // 0x468b50: 0x1060007f  beqz        $v1, . + 4 + (0x7F << 2)
label_468b54:
    if (ctx->pc == 0x468B54u) {
        ctx->pc = 0x468B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468B50u;
        // 0x468b54: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x468B58u;
        goto label_468b58;
    }
    ctx->pc = 0x468B50u;
    {
        const bool branch_taken_0x468b50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x468B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468B50u;
        // 0x468b54: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x468b50) {
            ctx->pc = 0x468D50u;
            goto label_468d50;
        }
    }
    ctx->pc = 0x468B58u;
label_468b58:
    // 0x468b58: 0x27a50018  addiu       $a1, $sp, 0x18
    ctx->pc = 0x468b58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
label_468b5c:
    // 0x468b5c: 0xc11fb56  jal         func_47ED58
label_468b60:
    if (ctx->pc == 0x468B60u) {
        ctx->pc = 0x468B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468B5Cu;
        // 0x468b60: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x468B64u;
        goto label_468b64;
    }
    ctx->pc = 0x468B5Cu;
    SET_GPR_U32(ctx, 31, 0x468B64u);
    ctx->pc = 0x468B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x468B5Cu;
    // 0x468b60: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47ED58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47ED58u, 0x468B5Cu, 0x468B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x468B64u;
label_468b64:
    // 0x468b64: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x468b64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_468b68:
    // 0x468b68: 0x14430084  bne         $v0, $v1, . + 4 + (0x84 << 2)
label_468b6c:
    if (ctx->pc == 0x468B6Cu) {
        ctx->pc = 0x468B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468B68u;
        // 0x468b6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x468B70u;
        goto label_468b70;
    }
    ctx->pc = 0x468B68u;
    {
        const bool branch_taken_0x468b68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x468B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468B68u;
        // 0x468b6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x468b68) {
            ctx->pc = 0x468D7Cu;
            goto label_468d7c;
        }
    }
    ctx->pc = 0x468B70u;
label_468b70:
    // 0x468b70: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x468b70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_468b74:
    // 0x468b74: 0x18800012  blez        $a0, . + 4 + (0x12 << 2)
label_468b78:
    if (ctx->pc == 0x468B78u) {
        ctx->pc = 0x468B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468B74u;
        // 0x468b78: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x468B7Cu;
        goto label_468b7c;
    }
    ctx->pc = 0x468B74u;
    {
        const bool branch_taken_0x468b74 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x468B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468B74u;
        // 0x468b78: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x468b74) {
            ctx->pc = 0x468BC0u;
            goto label_468bc0;
        }
    }
    ctx->pc = 0x468B7Cu;
label_468b7c:
    // 0x468b7c: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x468b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_468b80:
    // 0x468b80: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x468b80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_468b84:
    // 0x468b84: 0x8c62ae20  lw          $v0, -0x51E0($v1)
    ctx->pc = 0x468b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946336)));
label_468b88:
    // 0x468b88: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x468b88u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_468b8c:
    // 0x468b8c: 0x40f809  jalr        $v0
label_468b90:
    if (ctx->pc == 0x468B90u) {
        ctx->pc = 0x468B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468B8Cu;
        // 0x468b90: 0x34a5000f  ori         $a1, $a1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        ctx->pc = 0x468B94u;
        goto label_468b94;
    }
    ctx->pc = 0x468B8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x468B94u);
        ctx->pc = 0x468B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468B8Cu;
        // 0x468b90: 0x34a5000f  ori         $a1, $a1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x468B8Cu, 0x468B94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x468B94u;
label_468b94:
    // 0x468b94: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_468b98:
    if (ctx->pc == 0x468B98u) {
        ctx->pc = 0x468B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468B94u;
        // 0x468b98: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x468B9Cu;
        goto label_468b9c;
    }
    ctx->pc = 0x468B94u;
    {
        const bool branch_taken_0x468b94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x468B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468B94u;
        // 0x468b98: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x468b94) {
            ctx->pc = 0x468BC4u;
            goto label_468bc4;
        }
    }
    ctx->pc = 0x468B9Cu;
label_468b9c:
    // 0x468b9c: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x468b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_468ba0:
    // 0x468ba0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x468ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_468ba4:
    // 0x468ba4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x468ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_468ba8:
    // 0x468ba8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x468ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_468bac:
    // 0x468bac: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x468bacu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_468bb0:
    // 0x468bb0: 0xc11eff2  jal         func_47BFC8
label_468bb4:
    if (ctx->pc == 0x468BB4u) {
        ctx->pc = 0x468BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468BB0u;
        // 0x468bb4: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x468BB8u;
        goto label_468bb8;
    }
    ctx->pc = 0x468BB0u;
    SET_GPR_U32(ctx, 31, 0x468BB8u);
    ctx->pc = 0x468BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x468BB0u;
    // 0x468bb4: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x468BB0u, 0x468BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x468BB8u;
label_468bb8:
    // 0x468bb8: 0x1000006b  b           . + 4 + (0x6B << 2)
label_468bbc:
    if (ctx->pc == 0x468BBCu) {
        ctx->pc = 0x468BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468BB8u;
        // 0x468bbc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x468BC0u;
        goto label_468bc0;
    }
    ctx->pc = 0x468BB8u;
    {
        const bool branch_taken_0x468bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x468BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468BB8u;
        // 0x468bbc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x468bb8) {
            ctx->pc = 0x468D68u;
            goto label_468d68;
        }
    }
    ctx->pc = 0x468BC0u;
label_468bc0:
    // 0x468bc0: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x468bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_468bc4:
    // 0x468bc4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x468bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_468bc8:
    // 0x468bc8: 0x1840006b  blez        $v0, . + 4 + (0x6B << 2)
label_468bcc:
    if (ctx->pc == 0x468BCCu) {
        ctx->pc = 0x468BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468BC8u;
        // 0x468bcc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x468BD0u;
        goto label_468bd0;
    }
    ctx->pc = 0x468BC8u;
    {
        const bool branch_taken_0x468bc8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x468BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468BC8u;
        // 0x468bcc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x468bc8) {
            ctx->pc = 0x468D78u;
            goto label_468d78;
        }
    }
    ctx->pc = 0x468BD0u;
label_468bd0:
    // 0x468bd0: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x468bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_468bd4:
    // 0x468bd4: 0x2453ad18  addiu       $s3, $v0, -0x52E8
    ctx->pc = 0x468bd4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
label_468bd8:
    // 0x468bd8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x468bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_468bdc:
    // 0x468bdc: 0x0  nop
    ctx->pc = 0x468bdcu;
    // NOP
label_468be0:
    // 0x468be0: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x468be0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_468be4:
    // 0x468be4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x468be4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_468be8:
    // 0x468be8: 0xc11eeae  jal         func_47BAB8
label_468bec:
    if (ctx->pc == 0x468BECu) {
        ctx->pc = 0x468BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468BE8u;
        // 0x468bec: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x468BF0u;
        goto label_468bf0;
    }
    ctx->pc = 0x468BE8u;
    SET_GPR_U32(ctx, 31, 0x468BF0u);
    ctx->pc = 0x468BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x468BE8u;
    // 0x468bec: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BAB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BAB8u, 0x468BE8u, 0x468BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x468BF0u;
label_468bf0:
    // 0x468bf0: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
label_468bf4:
    if (ctx->pc == 0x468BF4u) {
        ctx->pc = 0x468BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468BF0u;
        // 0x468bf4: 0x8fa30014  lw          $v1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x468BF8u;
        goto label_468bf8;
    }
    ctx->pc = 0x468BF0u;
    {
        const bool branch_taken_0x468bf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x468BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468BF0u;
        // 0x468bf4: 0x8fa30014  lw          $v1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x468bf0) {
            ctx->pc = 0x468C4Cu;
            goto label_468c4c;
        }
    }
    ctx->pc = 0x468BF8u;
label_468bf8:
    // 0x468bf8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x468bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_468bfc:
    // 0x468bfc: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
label_468c00:
    if (ctx->pc == 0x468C00u) {
        ctx->pc = 0x468C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468BFCu;
        // 0x468c00: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x468C04u;
        goto label_468c04;
    }
    ctx->pc = 0x468BFCu;
    {
        const bool branch_taken_0x468bfc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x468C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468BFCu;
        // 0x468c00: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x468bfc) {
            ctx->pc = 0x468C2Cu;
            goto label_468c2c;
        }
    }
    ctx->pc = 0x468C04u;
label_468c04:
    // 0x468c04: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x468c04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_468c08:
    // 0x468c08: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x468c08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_468c0c:
    // 0x468c0c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x468c0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_468c10:
    // 0x468c10: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x468c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_468c14:
    // 0x468c14: 0xc11b010  jal         func_46C040
label_468c18:
    if (ctx->pc == 0x468C18u) {
        ctx->pc = 0x468C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468C14u;
        // 0x468c18: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x468C1Cu;
        goto label_468c1c;
    }
    ctx->pc = 0x468C14u;
    SET_GPR_U32(ctx, 31, 0x468C1Cu);
    ctx->pc = 0x468C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x468C14u;
    // 0x468c18: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46C040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46C040u, 0x468C14u, 0x468C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x468C1Cu;
label_468c1c:
    // 0x468c1c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x468c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_468c20:
    // 0x468c20: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x468c20u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_468c24:
    // 0x468c24: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
label_468c28:
    if (ctx->pc == 0x468C28u) {
        ctx->pc = 0x468C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468C24u;
        // 0x468c28: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x468C2Cu;
        goto label_468c2c;
    }
    ctx->pc = 0x468C24u;
    {
        const bool branch_taken_0x468c24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x468c24) {
            ctx->pc = 0x468C28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x468C24u;
            // 0x468c28: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x468C08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_468c08;
        }
    }
    ctx->pc = 0x468C2Cu;
label_468c2c:
    // 0x468c2c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x468c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_468c30:
    // 0x468c30: 0x10800052  beqz        $a0, . + 4 + (0x52 << 2)
label_468c34:
    if (ctx->pc == 0x468C34u) {
        ctx->pc = 0x468C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468C30u;
        // 0x468c34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x468C38u;
        goto label_468c38;
    }
    ctx->pc = 0x468C30u;
    {
        const bool branch_taken_0x468c30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x468C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468C30u;
        // 0x468c34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x468c30) {
            ctx->pc = 0x468D7Cu;
            goto label_468d7c;
        }
    }
    ctx->pc = 0x468C38u;
label_468c38:
    // 0x468c38: 0x8e62010c  lw          $v0, 0x10C($s3)
    ctx->pc = 0x468c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
label_468c3c:
    // 0x468c3c: 0x40f809  jalr        $v0
label_468c40:
    if (ctx->pc == 0x468C40u) {
        ctx->pc = 0x468C44u;
        goto label_468c44;
    }
    ctx->pc = 0x468C3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x468C44u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x468C3Cu, 0x468C44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x468C44u;
label_468c44:
    // 0x468c44: 0x1000004a  b           . + 4 + (0x4A << 2)
label_468c48:
    if (ctx->pc == 0x468C48u) {
        ctx->pc = 0x468C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468C44u;
        // 0x468c48: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x468C4Cu;
        goto label_468c4c;
    }
    ctx->pc = 0x468C44u;
    {
        const bool branch_taken_0x468c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x468C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468C44u;
        // 0x468c48: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x468c44) {
            ctx->pc = 0x468D70u;
            goto label_468d70;
        }
    }
    ctx->pc = 0x468C4Cu;
label_468c4c:
    // 0x468c4c: 0x3c02fffc  lui         $v0, 0xFFFC
    ctx->pc = 0x468c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65532 << 16));
label_468c50:
    // 0x468c50: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x468c50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
label_468c54:
    // 0x468c54: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x468c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_468c58:
    // 0x468c58: 0x2c632003  sltiu       $v1, $v1, 0x2003
    ctx->pc = 0x468c58u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8195) ? 1 : 0);
label_468c5c:
    // 0x468c5c: 0x50600021  beql        $v1, $zero, . + 4 + (0x21 << 2)
label_468c60:
    if (ctx->pc == 0x468C60u) {
        ctx->pc = 0x468C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468C5Cu;
        // 0x468c60: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x468C64u;
        goto label_468c64;
    }
    ctx->pc = 0x468C5Cu;
    {
        const bool branch_taken_0x468c5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x468c5c) {
            ctx->pc = 0x468C60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x468C5Cu;
            // 0x468c60: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x468CE4u;
            goto label_468ce4;
        }
    }
    ctx->pc = 0x468C64u;
label_468c64:
    // 0x468c64: 0xc11ad0e  jal         func_46B438
label_468c68:
    if (ctx->pc == 0x468C68u) {
        ctx->pc = 0x468C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468C64u;
        // 0x468c68: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x468C6Cu;
        goto label_468c6c;
    }
    ctx->pc = 0x468C64u;
    SET_GPR_U32(ctx, 31, 0x468C6Cu);
    ctx->pc = 0x468C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x468C64u;
    // 0x468c68: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46B438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46B438u, 0x468C64u, 0x468C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x468C6Cu;
label_468c6c:
    // 0x468c6c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x468c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_468c70:
    // 0x468c70: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x468c70u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_468c74:
    // 0x468c74: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x468c74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_468c78:
    // 0x468c78: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
label_468c7c:
    if (ctx->pc == 0x468C7Cu) {
        ctx->pc = 0x468C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468C78u;
        // 0x468c7c: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x468C80u;
        goto label_468c80;
    }
    ctx->pc = 0x468C78u;
    {
        const bool branch_taken_0x468c78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x468C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468C78u;
        // 0x468c7c: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x468c78) {
            ctx->pc = 0x468CD4u;
            goto label_468cd4;
        }
    }
    ctx->pc = 0x468C80u;
label_468c80:
    // 0x468c80: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x468c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_468c84:
    // 0x468c84: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
label_468c88:
    if (ctx->pc == 0x468C88u) {
        ctx->pc = 0x468C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468C84u;
        // 0x468c88: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x468C8Cu;
        goto label_468c8c;
    }
    ctx->pc = 0x468C84u;
    {
        const bool branch_taken_0x468c84 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x468C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468C84u;
        // 0x468c88: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x468c84) {
            ctx->pc = 0x468CB4u;
            goto label_468cb4;
        }
    }
    ctx->pc = 0x468C8Cu;
label_468c8c:
    // 0x468c8c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x468c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_468c90:
    // 0x468c90: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x468c90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_468c94:
    // 0x468c94: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x468c94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_468c98:
    // 0x468c98: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x468c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_468c9c:
    // 0x468c9c: 0xc11b010  jal         func_46C040
label_468ca0:
    if (ctx->pc == 0x468CA0u) {
        ctx->pc = 0x468CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468C9Cu;
        // 0x468ca0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x468CA4u;
        goto label_468ca4;
    }
    ctx->pc = 0x468C9Cu;
    SET_GPR_U32(ctx, 31, 0x468CA4u);
    ctx->pc = 0x468CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x468C9Cu;
    // 0x468ca0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46C040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46C040u, 0x468C9Cu, 0x468CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x468CA4u;
label_468ca4:
    // 0x468ca4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x468ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_468ca8:
    // 0x468ca8: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x468ca8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_468cac:
    // 0x468cac: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
label_468cb0:
    if (ctx->pc == 0x468CB0u) {
        ctx->pc = 0x468CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468CACu;
        // 0x468cb0: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x468CB4u;
        goto label_468cb4;
    }
    ctx->pc = 0x468CACu;
    {
        const bool branch_taken_0x468cac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x468cac) {
            ctx->pc = 0x468CB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x468CACu;
            // 0x468cb0: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x468C90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_468c90;
        }
    }
    ctx->pc = 0x468CB4u;
label_468cb4:
    // 0x468cb4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x468cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_468cb8:
    // 0x468cb8: 0x10800030  beqz        $a0, . + 4 + (0x30 << 2)
label_468cbc:
    if (ctx->pc == 0x468CBCu) {
        ctx->pc = 0x468CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468CB8u;
        // 0x468cbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x468CC0u;
        goto label_468cc0;
    }
    ctx->pc = 0x468CB8u;
    {
        const bool branch_taken_0x468cb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x468CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468CB8u;
        // 0x468cbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x468cb8) {
            ctx->pc = 0x468D7Cu;
            goto label_468d7c;
        }
    }
    ctx->pc = 0x468CC0u;
label_468cc0:
    // 0x468cc0: 0x8e62010c  lw          $v0, 0x10C($s3)
    ctx->pc = 0x468cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
label_468cc4:
    // 0x468cc4: 0x40f809  jalr        $v0
label_468cc8:
    if (ctx->pc == 0x468CC8u) {
        ctx->pc = 0x468CCCu;
        goto label_468ccc;
    }
    ctx->pc = 0x468CC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x468CCCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x468CC4u, 0x468CCCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x468CCCu;
label_468ccc:
    // 0x468ccc: 0x10000028  b           . + 4 + (0x28 << 2)
label_468cd0:
    if (ctx->pc == 0x468CD0u) {
        ctx->pc = 0x468CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468CCCu;
        // 0x468cd0: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x468CD4u;
        goto label_468cd4;
    }
    ctx->pc = 0x468CCCu;
    {
        const bool branch_taken_0x468ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x468CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468CCCu;
        // 0x468cd0: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x468ccc) {
            ctx->pc = 0x468D70u;
            goto label_468d70;
        }
    }
    ctx->pc = 0x468CD4u;
label_468cd4:
    // 0x468cd4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x468cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_468cd8:
    // 0x468cd8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x468cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_468cdc:
    // 0x468cdc: 0x10000015  b           . + 4 + (0x15 << 2)
label_468ce0:
    if (ctx->pc == 0x468CE0u) {
        ctx->pc = 0x468CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468CDCu;
        // 0x468ce0: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x468CE4u;
        goto label_468ce4;
    }
    ctx->pc = 0x468CDCu;
    {
        const bool branch_taken_0x468cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x468CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468CDCu;
        // 0x468ce0: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x468cdc) {
            ctx->pc = 0x468D34u;
            goto label_468d34;
        }
    }
    ctx->pc = 0x468CE4u;
label_468ce4:
    // 0x468ce4: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
label_468ce8:
    if (ctx->pc == 0x468CE8u) {
        ctx->pc = 0x468CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468CE4u;
        // 0x468ce8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x468CECu;
        goto label_468cec;
    }
    ctx->pc = 0x468CE4u;
    {
        const bool branch_taken_0x468ce4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x468CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468CE4u;
        // 0x468ce8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x468ce4) {
            ctx->pc = 0x468D14u;
            goto label_468d14;
        }
    }
    ctx->pc = 0x468CECu;
label_468cec:
    // 0x468cec: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x468cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_468cf0:
    // 0x468cf0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x468cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_468cf4:
    // 0x468cf4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x468cf4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_468cf8:
    // 0x468cf8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x468cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_468cfc:
    // 0x468cfc: 0xc11b010  jal         func_46C040
label_468d00:
    if (ctx->pc == 0x468D00u) {
        ctx->pc = 0x468D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468CFCu;
        // 0x468d00: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x468D04u;
        goto label_468d04;
    }
    ctx->pc = 0x468CFCu;
    SET_GPR_U32(ctx, 31, 0x468D04u);
    ctx->pc = 0x468D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x468CFCu;
    // 0x468d00: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46C040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46C040u, 0x468CFCu, 0x468D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x468D04u;
label_468d04:
    // 0x468d04: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x468d04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_468d08:
    // 0x468d08: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x468d08u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_468d0c:
    // 0x468d0c: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
label_468d10:
    if (ctx->pc == 0x468D10u) {
        ctx->pc = 0x468D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468D0Cu;
        // 0x468d10: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x468D14u;
        goto label_468d14;
    }
    ctx->pc = 0x468D0Cu;
    {
        const bool branch_taken_0x468d0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x468d0c) {
            ctx->pc = 0x468D10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x468D0Cu;
            // 0x468d10: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x468CF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_468cf0;
        }
    }
    ctx->pc = 0x468D14u;
label_468d14:
    // 0x468d14: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x468d14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_468d18:
    // 0x468d18: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
label_468d1c:
    if (ctx->pc == 0x468D1Cu) {
        ctx->pc = 0x468D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468D18u;
        // 0x468d1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x468D20u;
        goto label_468d20;
    }
    ctx->pc = 0x468D18u;
    {
        const bool branch_taken_0x468d18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x468D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468D18u;
        // 0x468d1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x468d18) {
            ctx->pc = 0x468D7Cu;
            goto label_468d7c;
        }
    }
    ctx->pc = 0x468D20u;
label_468d20:
    // 0x468d20: 0x8e62010c  lw          $v0, 0x10C($s3)
    ctx->pc = 0x468d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
label_468d24:
    // 0x468d24: 0x40f809  jalr        $v0
label_468d28:
    if (ctx->pc == 0x468D28u) {
        ctx->pc = 0x468D2Cu;
        goto label_468d2c;
    }
    ctx->pc = 0x468D24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x468D2Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x468D24u, 0x468D2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x468D2Cu;
label_468d2c:
    // 0x468d2c: 0x10000010  b           . + 4 + (0x10 << 2)
label_468d30:
    if (ctx->pc == 0x468D30u) {
        ctx->pc = 0x468D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468D2Cu;
        // 0x468d30: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x468D34u;
        goto label_468d34;
    }
    ctx->pc = 0x468D2Cu;
    {
        const bool branch_taken_0x468d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x468D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468D2Cu;
        // 0x468d30: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x468d2c) {
            ctx->pc = 0x468D70u;
            goto label_468d70;
        }
    }
    ctx->pc = 0x468D34u;
label_468d34:
    // 0x468d34: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x468d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_468d38:
    // 0x468d38: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x468d38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_468d3c:
    // 0x468d3c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x468d3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_468d40:
    // 0x468d40: 0x1440ffa7  bnez        $v0, . + 4 + (-0x59 << 2)
label_468d44:
    if (ctx->pc == 0x468D44u) {
        ctx->pc = 0x468D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468D40u;
        // 0x468d44: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x468D48u;
        goto label_468d48;
    }
    ctx->pc = 0x468D40u;
    {
        const bool branch_taken_0x468d40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x468D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468D40u;
        // 0x468d44: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x468d40) {
            ctx->pc = 0x468BE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_468be0;
        }
    }
    ctx->pc = 0x468D48u;
label_468d48:
    // 0x468d48: 0x1000000c  b           . + 4 + (0xC << 2)
label_468d4c:
    if (ctx->pc == 0x468D4Cu) {
        ctx->pc = 0x468D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468D48u;
        // 0x468d4c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x468D50u;
        goto label_468d50;
    }
    ctx->pc = 0x468D48u;
    {
        const bool branch_taken_0x468d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x468D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468D48u;
        // 0x468d4c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x468d48) {
            ctx->pc = 0x468D7Cu;
            goto label_468d7c;
        }
    }
    ctx->pc = 0x468D50u;
label_468d50:
    // 0x468d50: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x468d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_468d54:
    // 0x468d54: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x468d54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_468d58:
    // 0x468d58: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x468d58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_468d5c:
    // 0x468d5c: 0xc11eff2  jal         func_47BFC8
label_468d60:
    if (ctx->pc == 0x468D60u) {
        ctx->pc = 0x468D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468D5Cu;
        // 0x468d60: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x468D64u;
        goto label_468d64;
    }
    ctx->pc = 0x468D5Cu;
    SET_GPR_U32(ctx, 31, 0x468D64u);
    ctx->pc = 0x468D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x468D5Cu;
    // 0x468d60: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x468D5Cu, 0x468D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x468D64u;
label_468d64:
    // 0x468d64: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x468d64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_468d68:
    // 0x468d68: 0xc11f024  jal         func_47C090
label_468d6c:
    if (ctx->pc == 0x468D6Cu) {
        ctx->pc = 0x468D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468D68u;
        // 0x468d6c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x468D70u;
        goto label_468d70;
    }
    ctx->pc = 0x468D68u;
    SET_GPR_U32(ctx, 31, 0x468D70u);
    ctx->pc = 0x468D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x468D68u;
    // 0x468d6c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x468D68u, 0x468D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x468D70u;
label_468d70:
    // 0x468d70: 0x10000002  b           . + 4 + (0x2 << 2)
label_468d74:
    if (ctx->pc == 0x468D74u) {
        ctx->pc = 0x468D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468D70u;
        // 0x468d74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x468D78u;
        goto label_468d78;
    }
    ctx->pc = 0x468D70u;
    {
        const bool branch_taken_0x468d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x468D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468D70u;
        // 0x468d74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x468d70) {
            ctx->pc = 0x468D7Cu;
            goto label_468d7c;
        }
    }
    ctx->pc = 0x468D78u;
label_468d78:
    // 0x468d78: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x468d78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_468d7c:
    // 0x468d7c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x468d7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_468d80:
    // 0x468d80: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x468d80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_468d84:
    // 0x468d84: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x468d84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_468d88:
    // 0x468d88: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x468d88u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_468d8c:
    // 0x468d8c: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x468d8cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_468d90:
    // 0x468d90: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x468d90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_468d94:
    // 0x468d94: 0x3e00008  jr          $ra
label_468d98:
    if (ctx->pc == 0x468D98u) {
        ctx->pc = 0x468D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468D94u;
        // 0x468d98: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x468D9Cu;
        goto label_468d9c;
    }
    ctx->pc = 0x468D94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x468D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468D94u;
        // 0x468d98: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x468D94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x468D9Cu;
label_468d9c:
    // 0x468d9c: 0x0  nop
    ctx->pc = 0x468d9cu;
    // NOP
label_468da0:
    // 0x468da0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x468da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_468da4:
    // 0x468da4: 0x0  nop
    ctx->pc = 0x468da4u;
    // NOP
    ctx->pc = 0x468da8u;
}
