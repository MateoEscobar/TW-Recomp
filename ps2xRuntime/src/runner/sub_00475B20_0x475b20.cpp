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

// Function: sub_00475B20
// Address: 0x475b20 - 0x475e00
void sub_00475B20_0x475b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00475B20_0x475b20");
#endif

    switch (ctx->pc) {
        case 0x475b20u: goto label_475b20;
        case 0x475b24u: goto label_475b24;
        case 0x475b28u: goto label_475b28;
        case 0x475b2cu: goto label_475b2c;
        case 0x475b30u: goto label_475b30;
        case 0x475b34u: goto label_475b34;
        case 0x475b38u: goto label_475b38;
        case 0x475b3cu: goto label_475b3c;
        case 0x475b40u: goto label_475b40;
        case 0x475b44u: goto label_475b44;
        case 0x475b48u: goto label_475b48;
        case 0x475b4cu: goto label_475b4c;
        case 0x475b50u: goto label_475b50;
        case 0x475b54u: goto label_475b54;
        case 0x475b58u: goto label_475b58;
        case 0x475b5cu: goto label_475b5c;
        case 0x475b60u: goto label_475b60;
        case 0x475b64u: goto label_475b64;
        case 0x475b68u: goto label_475b68;
        case 0x475b6cu: goto label_475b6c;
        case 0x475b70u: goto label_475b70;
        case 0x475b74u: goto label_475b74;
        case 0x475b78u: goto label_475b78;
        case 0x475b7cu: goto label_475b7c;
        case 0x475b80u: goto label_475b80;
        case 0x475b84u: goto label_475b84;
        case 0x475b88u: goto label_475b88;
        case 0x475b8cu: goto label_475b8c;
        case 0x475b90u: goto label_475b90;
        case 0x475b94u: goto label_475b94;
        case 0x475b98u: goto label_475b98;
        case 0x475b9cu: goto label_475b9c;
        case 0x475ba0u: goto label_475ba0;
        case 0x475ba4u: goto label_475ba4;
        case 0x475ba8u: goto label_475ba8;
        case 0x475bacu: goto label_475bac;
        case 0x475bb0u: goto label_475bb0;
        case 0x475bb4u: goto label_475bb4;
        case 0x475bb8u: goto label_475bb8;
        case 0x475bbcu: goto label_475bbc;
        case 0x475bc0u: goto label_475bc0;
        case 0x475bc4u: goto label_475bc4;
        case 0x475bc8u: goto label_475bc8;
        case 0x475bccu: goto label_475bcc;
        case 0x475bd0u: goto label_475bd0;
        case 0x475bd4u: goto label_475bd4;
        case 0x475bd8u: goto label_475bd8;
        case 0x475bdcu: goto label_475bdc;
        case 0x475be0u: goto label_475be0;
        case 0x475be4u: goto label_475be4;
        case 0x475be8u: goto label_475be8;
        case 0x475becu: goto label_475bec;
        case 0x475bf0u: goto label_475bf0;
        case 0x475bf4u: goto label_475bf4;
        case 0x475bf8u: goto label_475bf8;
        case 0x475bfcu: goto label_475bfc;
        case 0x475c00u: goto label_475c00;
        case 0x475c04u: goto label_475c04;
        case 0x475c08u: goto label_475c08;
        case 0x475c0cu: goto label_475c0c;
        case 0x475c10u: goto label_475c10;
        case 0x475c14u: goto label_475c14;
        case 0x475c18u: goto label_475c18;
        case 0x475c1cu: goto label_475c1c;
        case 0x475c20u: goto label_475c20;
        case 0x475c24u: goto label_475c24;
        case 0x475c28u: goto label_475c28;
        case 0x475c2cu: goto label_475c2c;
        case 0x475c30u: goto label_475c30;
        case 0x475c34u: goto label_475c34;
        case 0x475c38u: goto label_475c38;
        case 0x475c3cu: goto label_475c3c;
        case 0x475c40u: goto label_475c40;
        case 0x475c44u: goto label_475c44;
        case 0x475c48u: goto label_475c48;
        case 0x475c4cu: goto label_475c4c;
        case 0x475c50u: goto label_475c50;
        case 0x475c54u: goto label_475c54;
        case 0x475c58u: goto label_475c58;
        case 0x475c5cu: goto label_475c5c;
        case 0x475c60u: goto label_475c60;
        case 0x475c64u: goto label_475c64;
        case 0x475c68u: goto label_475c68;
        case 0x475c6cu: goto label_475c6c;
        case 0x475c70u: goto label_475c70;
        case 0x475c74u: goto label_475c74;
        case 0x475c78u: goto label_475c78;
        case 0x475c7cu: goto label_475c7c;
        case 0x475c80u: goto label_475c80;
        case 0x475c84u: goto label_475c84;
        case 0x475c88u: goto label_475c88;
        case 0x475c8cu: goto label_475c8c;
        case 0x475c90u: goto label_475c90;
        case 0x475c94u: goto label_475c94;
        case 0x475c98u: goto label_475c98;
        case 0x475c9cu: goto label_475c9c;
        case 0x475ca0u: goto label_475ca0;
        case 0x475ca4u: goto label_475ca4;
        case 0x475ca8u: goto label_475ca8;
        case 0x475cacu: goto label_475cac;
        case 0x475cb0u: goto label_475cb0;
        case 0x475cb4u: goto label_475cb4;
        case 0x475cb8u: goto label_475cb8;
        case 0x475cbcu: goto label_475cbc;
        case 0x475cc0u: goto label_475cc0;
        case 0x475cc4u: goto label_475cc4;
        case 0x475cc8u: goto label_475cc8;
        case 0x475cccu: goto label_475ccc;
        case 0x475cd0u: goto label_475cd0;
        case 0x475cd4u: goto label_475cd4;
        case 0x475cd8u: goto label_475cd8;
        case 0x475cdcu: goto label_475cdc;
        case 0x475ce0u: goto label_475ce0;
        case 0x475ce4u: goto label_475ce4;
        case 0x475ce8u: goto label_475ce8;
        case 0x475cecu: goto label_475cec;
        case 0x475cf0u: goto label_475cf0;
        case 0x475cf4u: goto label_475cf4;
        case 0x475cf8u: goto label_475cf8;
        case 0x475cfcu: goto label_475cfc;
        case 0x475d00u: goto label_475d00;
        case 0x475d04u: goto label_475d04;
        case 0x475d08u: goto label_475d08;
        case 0x475d0cu: goto label_475d0c;
        case 0x475d10u: goto label_475d10;
        case 0x475d14u: goto label_475d14;
        case 0x475d18u: goto label_475d18;
        case 0x475d1cu: goto label_475d1c;
        case 0x475d20u: goto label_475d20;
        case 0x475d24u: goto label_475d24;
        case 0x475d28u: goto label_475d28;
        case 0x475d2cu: goto label_475d2c;
        case 0x475d30u: goto label_475d30;
        case 0x475d34u: goto label_475d34;
        case 0x475d38u: goto label_475d38;
        case 0x475d3cu: goto label_475d3c;
        case 0x475d40u: goto label_475d40;
        case 0x475d44u: goto label_475d44;
        case 0x475d48u: goto label_475d48;
        case 0x475d4cu: goto label_475d4c;
        case 0x475d50u: goto label_475d50;
        case 0x475d54u: goto label_475d54;
        case 0x475d58u: goto label_475d58;
        case 0x475d5cu: goto label_475d5c;
        case 0x475d60u: goto label_475d60;
        case 0x475d64u: goto label_475d64;
        case 0x475d68u: goto label_475d68;
        case 0x475d6cu: goto label_475d6c;
        case 0x475d70u: goto label_475d70;
        case 0x475d74u: goto label_475d74;
        case 0x475d78u: goto label_475d78;
        case 0x475d7cu: goto label_475d7c;
        case 0x475d80u: goto label_475d80;
        case 0x475d84u: goto label_475d84;
        case 0x475d88u: goto label_475d88;
        case 0x475d8cu: goto label_475d8c;
        case 0x475d90u: goto label_475d90;
        case 0x475d94u: goto label_475d94;
        case 0x475d98u: goto label_475d98;
        case 0x475d9cu: goto label_475d9c;
        case 0x475da0u: goto label_475da0;
        case 0x475da4u: goto label_475da4;
        case 0x475da8u: goto label_475da8;
        case 0x475dacu: goto label_475dac;
        case 0x475db0u: goto label_475db0;
        case 0x475db4u: goto label_475db4;
        case 0x475db8u: goto label_475db8;
        case 0x475dbcu: goto label_475dbc;
        case 0x475dc0u: goto label_475dc0;
        case 0x475dc4u: goto label_475dc4;
        case 0x475dc8u: goto label_475dc8;
        case 0x475dccu: goto label_475dcc;
        case 0x475dd0u: goto label_475dd0;
        case 0x475dd4u: goto label_475dd4;
        case 0x475dd8u: goto label_475dd8;
        case 0x475ddcu: goto label_475ddc;
        case 0x475de0u: goto label_475de0;
        case 0x475de4u: goto label_475de4;
        case 0x475de8u: goto label_475de8;
        case 0x475decu: goto label_475dec;
        case 0x475df0u: goto label_475df0;
        case 0x475df4u: goto label_475df4;
        case 0x475df8u: goto label_475df8;
        case 0x475dfcu: goto label_475dfc;
        default: break;
    }

    ctx->pc = 0x475b20u;

label_475b20:
    // 0x475b20: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x475b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_475b24:
    // 0x475b24: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x475b24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_475b28:
    // 0x475b28: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x475b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_475b2c:
    // 0x475b2c: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x475b2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_475b30:
    // 0x475b30: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x475b30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
label_475b34:
    // 0x475b34: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x475b34u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_475b38:
    // 0x475b38: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x475b38u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_475b3c:
    // 0x475b3c: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x475b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_475b40:
    // 0x475b40: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x475b40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_475b44:
    // 0x475b44: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x475b44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_475b48:
    // 0x475b48: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x475b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_475b4c:
    // 0x475b4c: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x475b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_475b50:
    // 0x475b50: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x475b50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
label_475b54:
    // 0x475b54: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x475b54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
label_475b58:
    // 0x475b58: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x475b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_475b5c:
    // 0x475b5c: 0xc11eeae  jal         func_47BAB8
label_475b60:
    if (ctx->pc == 0x475B60u) {
        ctx->pc = 0x475B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x475B5Cu;
        // 0x475b60: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x475B64u;
        goto label_475b64;
    }
    ctx->pc = 0x475B5Cu;
    SET_GPR_U32(ctx, 31, 0x475B64u);
    ctx->pc = 0x475B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x475B5Cu;
    // 0x475b60: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BAB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BAB8u, 0x475B5Cu, 0x475B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x475B64u;
label_475b64:
    // 0x475b64: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_475b68:
    if (ctx->pc == 0x475B68u) {
        ctx->pc = 0x475B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x475B64u;
        // 0x475b68: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x475B6Cu;
        goto label_475b6c;
    }
    ctx->pc = 0x475B64u;
    {
        const bool branch_taken_0x475b64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x475B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x475B64u;
        // 0x475b68: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x475b64) {
            ctx->pc = 0x475BA8u;
            goto label_475ba8;
        }
    }
    ctx->pc = 0x475B6Cu;
label_475b6c:
    // 0x475b6c: 0x3c02fffc  lui         $v0, 0xFFFC
    ctx->pc = 0x475b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65532 << 16));
label_475b70:
    // 0x475b70: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x475b70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
label_475b74:
    // 0x475b74: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x475b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_475b78:
    // 0x475b78: 0x2c632003  sltiu       $v1, $v1, 0x2003
    ctx->pc = 0x475b78u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8195) ? 1 : 0);
label_475b7c:
    // 0x475b7c: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
label_475b80:
    if (ctx->pc == 0x475B80u) {
        ctx->pc = 0x475B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x475B7Cu;
        // 0x475b80: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x475B84u;
        goto label_475b84;
    }
    ctx->pc = 0x475B7Cu;
    {
        const bool branch_taken_0x475b7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x475B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x475B7Cu;
        // 0x475b80: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x475b7c) {
            ctx->pc = 0x475BB0u;
            goto label_475bb0;
        }
    }
    ctx->pc = 0x475B84u;
label_475b84:
    // 0x475b84: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x475b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_475b88:
    // 0x475b88: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x475b88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_475b8c:
    // 0x475b8c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x475b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_475b90:
    // 0x475b90: 0xc11eff2  jal         func_47BFC8
label_475b94:
    if (ctx->pc == 0x475B94u) {
        ctx->pc = 0x475B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x475B90u;
        // 0x475b94: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x475B98u;
        goto label_475b98;
    }
    ctx->pc = 0x475B90u;
    SET_GPR_U32(ctx, 31, 0x475B98u);
    ctx->pc = 0x475B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x475B90u;
    // 0x475b94: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x475B90u, 0x475B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x475B98u;
label_475b98:
    // 0x475b98: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x475b98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_475b9c:
    // 0x475b9c: 0xc11f024  jal         func_47C090
label_475ba0:
    if (ctx->pc == 0x475BA0u) {
        ctx->pc = 0x475BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x475B9Cu;
        // 0x475ba0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x475BA4u;
        goto label_475ba4;
    }
    ctx->pc = 0x475B9Cu;
    SET_GPR_U32(ctx, 31, 0x475BA4u);
    ctx->pc = 0x475BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x475B9Cu;
    // 0x475ba0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x475B9Cu, 0x475BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x475BA4u;
label_475ba4:
    // 0x475ba4: 0x0  nop
    ctx->pc = 0x475ba4u;
    // NOP
label_475ba8:
    // 0x475ba8: 0x10000089  b           . + 4 + (0x89 << 2)
label_475bac:
    if (ctx->pc == 0x475BACu) {
        ctx->pc = 0x475BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x475BA8u;
        // 0x475bac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x475BB0u;
        goto label_475bb0;
    }
    ctx->pc = 0x475BA8u;
    {
        const bool branch_taken_0x475ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x475BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x475BA8u;
        // 0x475bac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x475ba8) {
            ctx->pc = 0x475DD0u;
            goto label_475dd0;
        }
    }
    ctx->pc = 0x475BB0u;
label_475bb0:
    // 0x475bb0: 0x27a50014  addiu       $a1, $sp, 0x14
    ctx->pc = 0x475bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
label_475bb4:
    // 0x475bb4: 0xc11fb56  jal         func_47ED58
label_475bb8:
    if (ctx->pc == 0x475BB8u) {
        ctx->pc = 0x475BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x475BB4u;
        // 0x475bb8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x475BBCu;
        goto label_475bbc;
    }
    ctx->pc = 0x475BB4u;
    SET_GPR_U32(ctx, 31, 0x475BBCu);
    ctx->pc = 0x475BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x475BB4u;
    // 0x475bb8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47ED58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47ED58u, 0x475BB4u, 0x475BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x475BBCu;
label_475bbc:
    // 0x475bbc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x475bbcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_475bc0:
    // 0x475bc0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x475bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_475bc4:
    // 0x475bc4: 0x14620082  bne         $v1, $v0, . + 4 + (0x82 << 2)
label_475bc8:
    if (ctx->pc == 0x475BC8u) {
        ctx->pc = 0x475BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x475BC4u;
        // 0x475bc8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x475BCCu;
        goto label_475bcc;
    }
    ctx->pc = 0x475BC4u;
    {
        const bool branch_taken_0x475bc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x475BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x475BC4u;
        // 0x475bc8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x475bc4) {
            ctx->pc = 0x475DD0u;
            goto label_475dd0;
        }
    }
    ctx->pc = 0x475BCCu;
label_475bcc:
    // 0x475bcc: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x475bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_475bd0:
    // 0x475bd0: 0x1443007f  bne         $v0, $v1, . + 4 + (0x7F << 2)
label_475bd4:
    if (ctx->pc == 0x475BD4u) {
        ctx->pc = 0x475BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x475BD0u;
        // 0x475bd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x475BD8u;
        goto label_475bd8;
    }
    ctx->pc = 0x475BD0u;
    {
        const bool branch_taken_0x475bd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x475BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x475BD0u;
        // 0x475bd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x475bd0) {
            ctx->pc = 0x475DD0u;
            goto label_475dd0;
        }
    }
    ctx->pc = 0x475BD8u;
label_475bd8:
    // 0x475bd8: 0x8f828910  lw          $v0, -0x76F0($gp)
    ctx->pc = 0x475bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936848)));
label_475bdc:
    // 0x475bdc: 0x2c22021  addu        $a0, $s6, $v0
    ctx->pc = 0x475bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_475be0:
    // 0x475be0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x475be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_475be4:
    // 0x475be4: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_475be8:
    if (ctx->pc == 0x475BE8u) {
        ctx->pc = 0x475BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x475BE4u;
        // 0x475be8: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x475BECu;
        goto label_475bec;
    }
    ctx->pc = 0x475BE4u;
    {
        const bool branch_taken_0x475be4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x475BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x475BE4u;
        // 0x475be8: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x475be4) {
            ctx->pc = 0x475C04u;
            goto label_475c04;
        }
    }
    ctx->pc = 0x475BECu;
label_475bec:
    // 0x475bec: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x475becu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_475bf0:
    // 0x475bf0: 0x8ec20024  lw          $v0, 0x24($s6)
    ctx->pc = 0x475bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 36)));
label_475bf4:
    // 0x475bf4: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
label_475bf8:
    if (ctx->pc == 0x475BF8u) {
        ctx->pc = 0x475BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x475BF4u;
        // 0x475bf8: 0x8ec50024  lw          $a1, 0x24($s6) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x475BFCu;
        goto label_475bfc;
    }
    ctx->pc = 0x475BF4u;
    {
        const bool branch_taken_0x475bf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x475bf4) {
            ctx->pc = 0x475BF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x475BF4u;
            // 0x475bf8: 0x8ec50024  lw          $a1, 0x24($s6) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x475C08u;
            goto label_475c08;
        }
    }
    ctx->pc = 0x475BFCu;
label_475bfc:
    // 0x475bfc: 0x10000004  b           . + 4 + (0x4 << 2)
label_475c00:
    if (ctx->pc == 0x475C00u) {
        ctx->pc = 0x475C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x475BFCu;
        // 0x475c00: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x475C04u;
        goto label_475c04;
    }
    ctx->pc = 0x475BFCu;
    {
        const bool branch_taken_0x475bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x475C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x475BFCu;
        // 0x475c00: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x475bfc) {
            ctx->pc = 0x475C10u;
            goto label_475c10;
        }
    }
    ctx->pc = 0x475C04u;
label_475c04:
    // 0x475c04: 0x8ec50024  lw          $a1, 0x24($s6)
    ctx->pc = 0x475c04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 36)));
label_475c08:
    // 0x475c08: 0xc11d5b0  jal         func_4756C0
label_475c0c:
    if (ctx->pc == 0x475C0Cu) {
        ctx->pc = 0x475C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x475C08u;
        // 0x475c0c: 0x2c62021  addu        $a0, $s6, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x475C10u;
        goto label_475c10;
    }
    ctx->pc = 0x475C08u;
    SET_GPR_U32(ctx, 31, 0x475C10u);
    ctx->pc = 0x475C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x475C08u;
    // 0x475c0c: 0x2c62021  addu        $a0, $s6, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4756C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4756C0u, 0x475C08u, 0x475C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x475C10u;
label_475c10:
    // 0x475c10: 0x8c5e0000  lw          $fp, 0x0($v0)
    ctx->pc = 0x475c10u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_475c14:
    // 0x475c14: 0x8fd70000  lw          $s7, 0x0($fp)
    ctx->pc = 0x475c14u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_475c18:
    // 0x475c18: 0x1ae0006c  blez        $s7, . + 4 + (0x6C << 2)
label_475c1c:
    if (ctx->pc == 0x475C1Cu) {
        ctx->pc = 0x475C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x475C18u;
        // 0x475c1c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x475C20u;
        goto label_475c20;
    }
    ctx->pc = 0x475C18u;
    {
        const bool branch_taken_0x475c18 = (GPR_S32(ctx, 23) <= 0);
        ctx->pc = 0x475C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x475C18u;
        // 0x475c1c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x475c18) {
            ctx->pc = 0x475DCCu;
            goto label_475dcc;
        }
    }
    ctx->pc = 0x475C20u;
label_475c20:
    // 0x475c20: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x475c20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_475c24:
    // 0x475c24: 0x0  nop
    ctx->pc = 0x475c24u;
    // NOP
label_475c28:
    // 0x475c28: 0x27a50018  addiu       $a1, $sp, 0x18
    ctx->pc = 0x475c28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
label_475c2c:
    // 0x475c2c: 0xc11fb56  jal         func_47ED58
label_475c30:
    if (ctx->pc == 0x475C30u) {
        ctx->pc = 0x475C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x475C2Cu;
        // 0x475c30: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x475C34u;
        goto label_475c34;
    }
    ctx->pc = 0x475C2Cu;
    SET_GPR_U32(ctx, 31, 0x475C34u);
    ctx->pc = 0x475C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x475C2Cu;
    // 0x475c30: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47ED58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47ED58u, 0x475C2Cu, 0x475C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x475C34u;
label_475c34:
    // 0x475c34: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x475c34u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_475c38:
    // 0x475c38: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x475c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_475c3c:
    // 0x475c3c: 0x1682ffda  bne         $s4, $v0, . + 4 + (-0x26 << 2)
label_475c40:
    if (ctx->pc == 0x475C40u) {
        ctx->pc = 0x475C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x475C3Cu;
        // 0x475c40: 0x131080  sll         $v0, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x475C44u;
        goto label_475c44;
    }
    ctx->pc = 0x475C3Cu;
    {
        const bool branch_taken_0x475c3c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x475C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x475C3Cu;
        // 0x475c40: 0x131080  sll         $v0, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x475c3c) {
            ctx->pc = 0x475BA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_475ba8;
        }
    }
    ctx->pc = 0x475C44u;
label_475c44:
    // 0x475c44: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x475c44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_475c48:
    // 0x475c48: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x475c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_475c4c:
    // 0x475c4c: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x475c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_475c50:
    // 0x475c50: 0x3c29021  addu        $s2, $fp, $v0
    ctx->pc = 0x475c50u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
label_475c54:
    // 0x475c54: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x475c54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_475c58:
    // 0x475c58: 0x8c62ae20  lw          $v0, -0x51E0($v1)
    ctx->pc = 0x475c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946336)));
label_475c5c:
    // 0x475c5c: 0x24840267  addiu       $a0, $a0, 0x267
    ctx->pc = 0x475c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 615));
label_475c60:
    // 0x475c60: 0x40f809  jalr        $v0
label_475c64:
    if (ctx->pc == 0x475C64u) {
        ctx->pc = 0x475C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x475C60u;
        // 0x475c64: 0x34a5050d  ori         $a1, $a1, 0x50D (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1293);
        ctx->in_delay_slot = false;
        ctx->pc = 0x475C68u;
        goto label_475c68;
    }
    ctx->pc = 0x475C60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x475C68u);
        ctx->pc = 0x475C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x475C60u;
        // 0x475c64: 0x34a5050d  ori         $a1, $a1, 0x50D (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1293);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x475C60u, 0x475C68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x475C68u;
label_475c68:
    // 0x475c68: 0x1040ffcf  beqz        $v0, . + 4 + (-0x31 << 2)
label_475c6c:
    if (ctx->pc == 0x475C6Cu) {
        ctx->pc = 0x475C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x475C68u;
        // 0x475c6c: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x475C70u;
        goto label_475c70;
    }
    ctx->pc = 0x475C68u;
    {
        const bool branch_taken_0x475c68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x475C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x475C68u;
        // 0x475c6c: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x475c68) {
            ctx->pc = 0x475BA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_475ba8;
        }
    }
    ctx->pc = 0x475C70u;
label_475c70:
    // 0x475c70: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x475c70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_475c74:
    // 0x475c74: 0x3c080047  lui         $t0, 0x47
    ctx->pc = 0x475c74u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)71 << 16));
label_475c78:
    // 0x475c78: 0x25085690  addiu       $t0, $t0, 0x5690
    ctx->pc = 0x475c78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 22160));
label_475c7c:
    // 0x475c7c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x475c7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_475c80:
    // 0x475c80: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x475c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_475c84:
    // 0x475c84: 0x27a5001c  addiu       $a1, $sp, 0x1C
    ctx->pc = 0x475c84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
label_475c88:
    // 0x475c88: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x475c88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_475c8c:
    // 0x475c8c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x475c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_475c90:
    // 0x475c90: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x475c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_475c94:
    // 0x475c94: 0xac56000c  sw          $s6, 0xC($v0)
    ctx->pc = 0x475c94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 22));
label_475c98:
    // 0x475c98: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x475c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_475c9c:
    // 0x475c9c: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x475c9cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_475ca0:
    // 0x475ca0: 0x2463024f  addiu       $v1, $v1, 0x24F
    ctx->pc = 0x475ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 591));
label_475ca4:
    // 0x475ca4: 0xace30008  sw          $v1, 0x8($a3)
    ctx->pc = 0x475ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
label_475ca8:
    // 0x475ca8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x475ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_475cac:
    // 0x475cac: 0xac520010  sw          $s2, 0x10($v0)
    ctx->pc = 0x475cacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 18));
label_475cb0:
    // 0x475cb0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x475cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_475cb4:
    // 0x475cb4: 0xac680014  sw          $t0, 0x14($v1)
    ctx->pc = 0x475cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 8));
label_475cb8:
    // 0x475cb8: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x475cb8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_475cbc:
    // 0x475cbc: 0xc11fb56  jal         func_47ED58
label_475cc0:
    if (ctx->pc == 0x475CC0u) {
        ctx->pc = 0x475CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x475CBCu;
        // 0x475cc0: 0x26110018  addiu       $s1, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x475CC4u;
        goto label_475cc4;
    }
    ctx->pc = 0x475CBCu;
    SET_GPR_U32(ctx, 31, 0x475CC4u);
    ctx->pc = 0x475CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x475CBCu;
    // 0x475cc0: 0x26110018  addiu       $s1, $s0, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47ED58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47ED58u, 0x475CBCu, 0x475CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x475CC4u;
label_475cc4:
    // 0x475cc4: 0x1454ffb8  bne         $v0, $s4, . + 4 + (-0x48 << 2)
label_475cc8:
    if (ctx->pc == 0x475CC8u) {
        ctx->pc = 0x475CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x475CC4u;
        // 0x475cc8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x475CCCu;
        goto label_475ccc;
    }
    ctx->pc = 0x475CC4u;
    {
        const bool branch_taken_0x475cc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x475CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x475CC4u;
        // 0x475cc8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x475cc4) {
            ctx->pc = 0x475BA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_475ba8;
        }
    }
    ctx->pc = 0x475CCCu;
label_475ccc:
    // 0x475ccc: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x475cccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
label_475cd0:
    // 0x475cd0: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x475cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_475cd4:
    // 0x475cd4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x475cd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_475cd8:
    // 0x475cd8: 0xc10c1fa  jal         func_4307E8
label_475cdc:
    if (ctx->pc == 0x475CDCu) {
        ctx->pc = 0x475CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x475CD8u;
        // 0x475cdc: 0x240601d0  addiu       $a2, $zero, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 464));
        ctx->in_delay_slot = false;
        ctx->pc = 0x475CE0u;
        goto label_475ce0;
    }
    ctx->pc = 0x475CD8u;
    SET_GPR_U32(ctx, 31, 0x475CE0u);
    ctx->pc = 0x475CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x475CD8u;
    // 0x475cdc: 0x240601d0  addiu       $a2, $zero, 0x1D0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x475CD8u, 0x475CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x475CE0u;
label_475ce0:
    // 0x475ce0: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x475ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_475ce4:
    // 0x475ce4: 0x26020227  addiu       $v0, $s0, 0x227
    ctx->pc = 0x475ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 551));
label_475ce8:
    // 0x475ce8: 0x3463ffc0  ori         $v1, $v1, 0xFFC0
    ctx->pc = 0x475ce8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65472);
label_475cec:
    // 0x475cec: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x475cecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_475cf0:
    // 0x475cf0: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x475cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_475cf4:
    // 0x475cf4: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x475cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_475cf8:
    // 0x475cf8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_475cfc:
    if (ctx->pc == 0x475CFCu) {
        ctx->pc = 0x475CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x475CF8u;
        // 0x475cfc: 0x2463007f  addiu       $v1, $v1, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x475D00u;
        goto label_475d00;
    }
    ctx->pc = 0x475CF8u;
    {
        const bool branch_taken_0x475cf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x475CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x475CF8u;
        // 0x475cfc: 0x2463007f  addiu       $v1, $v1, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x475cf8) {
            ctx->pc = 0x475D10u;
            goto label_475d10;
        }
    }
    ctx->pc = 0x475D00u;
label_475d00:
    // 0x475d00: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x475d00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_475d04:
    // 0x475d04: 0x3442ff80  ori         $v0, $v0, 0xFF80
    ctx->pc = 0x475d04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65408);
label_475d08:
    // 0x475d08: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x475d08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_475d0c:
    // 0x475d0c: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x475d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_475d10:
    // 0x475d10: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x475d10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_475d14:
    // 0x475d14: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x475d14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_475d18:
    // 0x475d18: 0xc11fb56  jal         func_47ED58
label_475d1c:
    if (ctx->pc == 0x475D1Cu) {
        ctx->pc = 0x475D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x475D18u;
        // 0x475d1c: 0x8fa60018  lw          $a2, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x475D20u;
        goto label_475d20;
    }
    ctx->pc = 0x475D18u;
    SET_GPR_U32(ctx, 31, 0x475D20u);
    ctx->pc = 0x475D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x475D18u;
    // 0x475d1c: 0x8fa60018  lw          $a2, 0x18($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47ED58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47ED58u, 0x475D18u, 0x475D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x475D20u;
label_475d20:
    // 0x475d20: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x475d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_475d24:
    // 0x475d24: 0x1443ffa0  bne         $v0, $v1, . + 4 + (-0x60 << 2)
label_475d28:
    if (ctx->pc == 0x475D28u) {
        ctx->pc = 0x475D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x475D24u;
        // 0x475d28: 0x26700001  addiu       $s0, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x475D2Cu;
        goto label_475d2c;
    }
    ctx->pc = 0x475D24u;
    {
        const bool branch_taken_0x475d24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x475D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x475D24u;
        // 0x475d28: 0x26700001  addiu       $s0, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x475d24) {
            ctx->pc = 0x475BA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_475ba8;
        }
    }
    ctx->pc = 0x475D2Cu;
label_475d2c:
    // 0x475d2c: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x475d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_475d30:
    // 0x475d30: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x475d30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_475d34:
    // 0x475d34: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x475d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_475d38:
    // 0x475d38: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x475d38u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_475d3c:
    // 0x475d3c: 0x21702  srl         $v0, $v0, 28
    ctx->pc = 0x475d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 28));
label_475d40:
    // 0x475d40: 0x30440007  andi        $a0, $v0, 0x7
    ctx->pc = 0x475d40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_475d44:
    // 0x475d44: 0x2c830008  sltiu       $v1, $a0, 0x8
    ctx->pc = 0x475d44u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_475d48:
    // 0x475d48: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
label_475d4c:
    if (ctx->pc == 0x475D4Cu) {
        ctx->pc = 0x475D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x475D48u;
        // 0x475d4c: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x475D50u;
        goto label_475d50;
    }
    ctx->pc = 0x475D48u;
    {
        const bool branch_taken_0x475d48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x475D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x475D48u;
        // 0x475d4c: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x475d48) {
            ctx->pc = 0x475D9Cu;
            goto label_475d9c;
        }
    }
    ctx->pc = 0x475D50u;
label_475d50:
    // 0x475d50: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x475d50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_475d54:
    // 0x475d54: 0x2442eae0  addiu       $v0, $v0, -0x1520
    ctx->pc = 0x475d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961888));
label_475d58:
    // 0x475d58: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x475d58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_475d5c:
    // 0x475d5c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x475d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_475d60:
    // 0x475d60: 0x800008  jr          $a0
label_475d64:
    if (ctx->pc == 0x475D64u) {
        ctx->pc = 0x475D68u;
        goto label_475d68;
    }
    ctx->pc = 0x475D60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x475D68u: goto label_475d68;
            case 0x475D78u: goto label_475d78;
            case 0x475D98u: goto label_475d98;
            case 0x475D9Cu: goto label_475d9c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x475D60u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x475D68u;
label_475d68:
    // 0x475d68: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x475d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_475d6c:
    // 0x475d6c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x475d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_475d70:
    // 0x475d70: 0x1000000a  b           . + 4 + (0xA << 2)
label_475d74:
    if (ctx->pc == 0x475D74u) {
        ctx->pc = 0x475D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x475D70u;
        // 0x475d74: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x475D78u;
        goto label_475d78;
    }
    ctx->pc = 0x475D70u;
    {
        const bool branch_taken_0x475d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x475D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x475D70u;
        // 0x475d74: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x475d70) {
            ctx->pc = 0x475D9Cu;
            goto label_475d9c;
        }
    }
    ctx->pc = 0x475D78u;
label_475d78:
    // 0x475d78: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x475d78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_475d7c:
    // 0x475d7c: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x475d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_475d80:
    // 0x475d80: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x475d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_475d84:
    // 0x475d84: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x475d84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_475d88:
    // 0x475d88: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x475d88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_475d8c:
    // 0x475d8c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x475d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_475d90:
    // 0x475d90: 0x10000002  b           . + 4 + (0x2 << 2)
label_475d94:
    if (ctx->pc == 0x475D94u) {
        ctx->pc = 0x475D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x475D90u;
        // 0x475d94: 0x24a5000c  addiu       $a1, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x475D98u;
        goto label_475d98;
    }
    ctx->pc = 0x475D90u;
    {
        const bool branch_taken_0x475d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x475D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x475D90u;
        // 0x475d94: 0x24a5000c  addiu       $a1, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x475d90) {
            ctx->pc = 0x475D9Cu;
            goto label_475d9c;
        }
    }
    ctx->pc = 0x475D98u;
label_475d98:
    // 0x475d98: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x475d98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_475d9c:
    // 0x475d9c: 0x50e0ffe6  beql        $a3, $zero, . + 4 + (-0x1A << 2)
label_475da0:
    if (ctx->pc == 0x475DA0u) {
        ctx->pc = 0x475DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x475D9Cu;
        // 0x475da0: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x475DA4u;
        goto label_475da4;
    }
    ctx->pc = 0x475D9Cu;
    {
        const bool branch_taken_0x475d9c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x475d9c) {
            ctx->pc = 0x475DA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x475D9Cu;
            // 0x475da0: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x475D38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_475d38;
        }
    }
    ctx->pc = 0x475DA4u;
label_475da4:
    // 0x475da4: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x475da4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_475da8:
    // 0x475da8: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x475da8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_475dac:
    // 0x475dac: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x475dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_475db0:
    // 0x475db0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x475db0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_475db4:
    // 0x475db4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x475db4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_475db8:
    // 0x475db8: 0xc10f644  jal         func_43D910
label_475dbc:
    if (ctx->pc == 0x475DBCu) {
        ctx->pc = 0x475DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x475DB8u;
        // 0x475dbc: 0x24a50018  addiu       $a1, $a1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x475DC0u;
        goto label_475dc0;
    }
    ctx->pc = 0x475DB8u;
    SET_GPR_U32(ctx, 31, 0x475DC0u);
    ctx->pc = 0x475DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x475DB8u;
    // 0x475dbc: 0x24a50018  addiu       $a1, $a1, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D910u, 0x475DB8u, 0x475DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x475DC0u;
label_475dc0:
    // 0x475dc0: 0x277102a  slt         $v0, $s3, $s7
    ctx->pc = 0x475dc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_475dc4:
    // 0x475dc4: 0x1440ff98  bnez        $v0, . + 4 + (-0x68 << 2)
label_475dc8:
    if (ctx->pc == 0x475DC8u) {
        ctx->pc = 0x475DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x475DC4u;
        // 0x475dc8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x475DCCu;
        goto label_475dcc;
    }
    ctx->pc = 0x475DC4u;
    {
        const bool branch_taken_0x475dc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x475DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x475DC4u;
        // 0x475dc8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x475dc4) {
            ctx->pc = 0x475C28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_475c28;
        }
    }
    ctx->pc = 0x475DCCu;
label_475dcc:
    // 0x475dcc: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x475dccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_475dd0:
    // 0x475dd0: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x475dd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_475dd4:
    // 0x475dd4: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x475dd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_475dd8:
    // 0x475dd8: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x475dd8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_475ddc:
    // 0x475ddc: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x475ddcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_475de0:
    // 0x475de0: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x475de0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_475de4:
    // 0x475de4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x475de4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_475de8:
    // 0x475de8: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x475de8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_475dec:
    // 0x475dec: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x475decu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_475df0:
    // 0x475df0: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x475df0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_475df4:
    // 0x475df4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x475df4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_475df8:
    // 0x475df8: 0x3e00008  jr          $ra
label_475dfc:
    if (ctx->pc == 0x475DFCu) {
        ctx->pc = 0x475DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x475DF8u;
        // 0x475dfc: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x475E00u;
        goto label_fallthrough_0x475df8;
    }
    ctx->pc = 0x475DF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x475DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x475DF8u;
        // 0x475dfc: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x475DF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x475df8:
    ctx->pc = 0x475E00u;
}
