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

// Function: sub_00219B08
// Address: 0x219b08 - 0x219d50
void sub_00219B08_0x219b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00219B08_0x219b08");
#endif

    switch (ctx->pc) {
        case 0x219b08u: goto label_219b08;
        case 0x219b0cu: goto label_219b0c;
        case 0x219b10u: goto label_219b10;
        case 0x219b14u: goto label_219b14;
        case 0x219b18u: goto label_219b18;
        case 0x219b1cu: goto label_219b1c;
        case 0x219b20u: goto label_219b20;
        case 0x219b24u: goto label_219b24;
        case 0x219b28u: goto label_219b28;
        case 0x219b2cu: goto label_219b2c;
        case 0x219b30u: goto label_219b30;
        case 0x219b34u: goto label_219b34;
        case 0x219b38u: goto label_219b38;
        case 0x219b3cu: goto label_219b3c;
        case 0x219b40u: goto label_219b40;
        case 0x219b44u: goto label_219b44;
        case 0x219b48u: goto label_219b48;
        case 0x219b4cu: goto label_219b4c;
        case 0x219b50u: goto label_219b50;
        case 0x219b54u: goto label_219b54;
        case 0x219b58u: goto label_219b58;
        case 0x219b5cu: goto label_219b5c;
        case 0x219b60u: goto label_219b60;
        case 0x219b64u: goto label_219b64;
        case 0x219b68u: goto label_219b68;
        case 0x219b6cu: goto label_219b6c;
        case 0x219b70u: goto label_219b70;
        case 0x219b74u: goto label_219b74;
        case 0x219b78u: goto label_219b78;
        case 0x219b7cu: goto label_219b7c;
        case 0x219b80u: goto label_219b80;
        case 0x219b84u: goto label_219b84;
        case 0x219b88u: goto label_219b88;
        case 0x219b8cu: goto label_219b8c;
        case 0x219b90u: goto label_219b90;
        case 0x219b94u: goto label_219b94;
        case 0x219b98u: goto label_219b98;
        case 0x219b9cu: goto label_219b9c;
        case 0x219ba0u: goto label_219ba0;
        case 0x219ba4u: goto label_219ba4;
        case 0x219ba8u: goto label_219ba8;
        case 0x219bacu: goto label_219bac;
        case 0x219bb0u: goto label_219bb0;
        case 0x219bb4u: goto label_219bb4;
        case 0x219bb8u: goto label_219bb8;
        case 0x219bbcu: goto label_219bbc;
        case 0x219bc0u: goto label_219bc0;
        case 0x219bc4u: goto label_219bc4;
        case 0x219bc8u: goto label_219bc8;
        case 0x219bccu: goto label_219bcc;
        case 0x219bd0u: goto label_219bd0;
        case 0x219bd4u: goto label_219bd4;
        case 0x219bd8u: goto label_219bd8;
        case 0x219bdcu: goto label_219bdc;
        case 0x219be0u: goto label_219be0;
        case 0x219be4u: goto label_219be4;
        case 0x219be8u: goto label_219be8;
        case 0x219becu: goto label_219bec;
        case 0x219bf0u: goto label_219bf0;
        case 0x219bf4u: goto label_219bf4;
        case 0x219bf8u: goto label_219bf8;
        case 0x219bfcu: goto label_219bfc;
        case 0x219c00u: goto label_219c00;
        case 0x219c04u: goto label_219c04;
        case 0x219c08u: goto label_219c08;
        case 0x219c0cu: goto label_219c0c;
        case 0x219c10u: goto label_219c10;
        case 0x219c14u: goto label_219c14;
        case 0x219c18u: goto label_219c18;
        case 0x219c1cu: goto label_219c1c;
        case 0x219c20u: goto label_219c20;
        case 0x219c24u: goto label_219c24;
        case 0x219c28u: goto label_219c28;
        case 0x219c2cu: goto label_219c2c;
        case 0x219c30u: goto label_219c30;
        case 0x219c34u: goto label_219c34;
        case 0x219c38u: goto label_219c38;
        case 0x219c3cu: goto label_219c3c;
        case 0x219c40u: goto label_219c40;
        case 0x219c44u: goto label_219c44;
        case 0x219c48u: goto label_219c48;
        case 0x219c4cu: goto label_219c4c;
        case 0x219c50u: goto label_219c50;
        case 0x219c54u: goto label_219c54;
        case 0x219c58u: goto label_219c58;
        case 0x219c5cu: goto label_219c5c;
        case 0x219c60u: goto label_219c60;
        case 0x219c64u: goto label_219c64;
        case 0x219c68u: goto label_219c68;
        case 0x219c6cu: goto label_219c6c;
        case 0x219c70u: goto label_219c70;
        case 0x219c74u: goto label_219c74;
        case 0x219c78u: goto label_219c78;
        case 0x219c7cu: goto label_219c7c;
        case 0x219c80u: goto label_219c80;
        case 0x219c84u: goto label_219c84;
        case 0x219c88u: goto label_219c88;
        case 0x219c8cu: goto label_219c8c;
        case 0x219c90u: goto label_219c90;
        case 0x219c94u: goto label_219c94;
        case 0x219c98u: goto label_219c98;
        case 0x219c9cu: goto label_219c9c;
        case 0x219ca0u: goto label_219ca0;
        case 0x219ca4u: goto label_219ca4;
        case 0x219ca8u: goto label_219ca8;
        case 0x219cacu: goto label_219cac;
        case 0x219cb0u: goto label_219cb0;
        case 0x219cb4u: goto label_219cb4;
        case 0x219cb8u: goto label_219cb8;
        case 0x219cbcu: goto label_219cbc;
        case 0x219cc0u: goto label_219cc0;
        case 0x219cc4u: goto label_219cc4;
        case 0x219cc8u: goto label_219cc8;
        case 0x219cccu: goto label_219ccc;
        case 0x219cd0u: goto label_219cd0;
        case 0x219cd4u: goto label_219cd4;
        case 0x219cd8u: goto label_219cd8;
        case 0x219cdcu: goto label_219cdc;
        case 0x219ce0u: goto label_219ce0;
        case 0x219ce4u: goto label_219ce4;
        case 0x219ce8u: goto label_219ce8;
        case 0x219cecu: goto label_219cec;
        case 0x219cf0u: goto label_219cf0;
        case 0x219cf4u: goto label_219cf4;
        case 0x219cf8u: goto label_219cf8;
        case 0x219cfcu: goto label_219cfc;
        case 0x219d00u: goto label_219d00;
        case 0x219d04u: goto label_219d04;
        case 0x219d08u: goto label_219d08;
        case 0x219d0cu: goto label_219d0c;
        case 0x219d10u: goto label_219d10;
        case 0x219d14u: goto label_219d14;
        case 0x219d18u: goto label_219d18;
        case 0x219d1cu: goto label_219d1c;
        case 0x219d20u: goto label_219d20;
        case 0x219d24u: goto label_219d24;
        case 0x219d28u: goto label_219d28;
        case 0x219d2cu: goto label_219d2c;
        case 0x219d30u: goto label_219d30;
        case 0x219d34u: goto label_219d34;
        case 0x219d38u: goto label_219d38;
        case 0x219d3cu: goto label_219d3c;
        case 0x219d40u: goto label_219d40;
        case 0x219d44u: goto label_219d44;
        case 0x219d48u: goto label_219d48;
        case 0x219d4cu: goto label_219d4c;
        default: break;
    }

    ctx->pc = 0x219b08u;

label_219b08:
    // 0x219b08: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x219b08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_219b0c:
    // 0x219b0c: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x219b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_219b10:
    // 0x219b10: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x219b10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_219b14:
    // 0x219b14: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x219b14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_219b18:
    // 0x219b18: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x219b18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_219b1c:
    // 0x219b1c: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x219b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_219b20:
    // 0x219b20: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x219b20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_219b24:
    // 0x219b24: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x219b24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_219b28:
    // 0x219b28: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x219b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_219b2c:
    // 0x219b2c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x219b2cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_219b30:
    // 0x219b30: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x219b30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_219b34:
    // 0x219b34: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x219b34u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_219b38:
    // 0x219b38: 0xc08a61a  jal         func_229868
label_219b3c:
    if (ctx->pc == 0x219B3Cu) {
        ctx->pc = 0x219B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219B38u;
        // 0x219b3c: 0x8ea40000  lw          $a0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219B40u;
        goto label_219b40;
    }
    ctx->pc = 0x219B38u;
    SET_GPR_U32(ctx, 31, 0x219B40u);
    ctx->pc = 0x219B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219B38u;
    // 0x219b3c: 0x8ea40000  lw          $a0, 0x0($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x219B38u, 0x219B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219B40u;
label_219b40:
    // 0x219b40: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x219b40u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_219b44:
    // 0x219b44: 0xc087502  jal         func_21D408
label_219b48:
    if (ctx->pc == 0x219B48u) {
        ctx->pc = 0x219B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219B44u;
        // 0x219b48: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219B4Cu;
        goto label_219b4c;
    }
    ctx->pc = 0x219B44u;
    SET_GPR_U32(ctx, 31, 0x219B4Cu);
    ctx->pc = 0x219B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219B44u;
    // 0x219b48: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x219B44u, 0x219B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219B4Cu;
label_219b4c:
    // 0x219b4c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x219b4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_219b50:
    // 0x219b50: 0xc087502  jal         func_21D408
label_219b54:
    if (ctx->pc == 0x219B54u) {
        ctx->pc = 0x219B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219B50u;
        // 0x219b54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219B58u;
        goto label_219b58;
    }
    ctx->pc = 0x219B50u;
    SET_GPR_U32(ctx, 31, 0x219B58u);
    ctx->pc = 0x219B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219B50u;
    // 0x219b54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x219B50u, 0x219B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219B58u;
label_219b58:
    // 0x219b58: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x219b58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_219b5c:
    // 0x219b5c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x219b5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_219b60:
    // 0x219b60: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x219b60u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_219b64:
    // 0x219b64: 0xc0a408c  jal         func_290230
label_219b68:
    if (ctx->pc == 0x219B68u) {
        ctx->pc = 0x219B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219B64u;
        // 0x219b68: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219B6Cu;
        goto label_219b6c;
    }
    ctx->pc = 0x219B64u;
    SET_GPR_U32(ctx, 31, 0x219B6Cu);
    ctx->pc = 0x219B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219B64u;
    // 0x219b68: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290230u, 0x219B64u, 0x219B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219B6Cu;
label_219b6c:
    // 0x219b6c: 0x1260006e  beqz        $s3, . + 4 + (0x6E << 2)
label_219b70:
    if (ctx->pc == 0x219B70u) {
        ctx->pc = 0x219B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219B6Cu;
        // 0x219b70: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219B74u;
        goto label_219b74;
    }
    ctx->pc = 0x219B6Cu;
    {
        const bool branch_taken_0x219b6c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x219B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219B6Cu;
        // 0x219b70: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219b6c) {
            ctx->pc = 0x219D28u;
            goto label_219d28;
        }
    }
    ctx->pc = 0x219B74u;
label_219b74:
    // 0x219b74: 0x826201b0  lb          $v0, 0x1B0($s3)
    ctx->pc = 0x219b74u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 432)));
label_219b78:
    // 0x219b78: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x219b78u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_219b7c:
    // 0x219b7c: 0x1040006a  beqz        $v0, . + 4 + (0x6A << 2)
label_219b80:
    if (ctx->pc == 0x219B80u) {
        ctx->pc = 0x219B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219B7Cu;
        // 0x219b80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219B84u;
        goto label_219b84;
    }
    ctx->pc = 0x219B7Cu;
    {
        const bool branch_taken_0x219b7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x219B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219B7Cu;
        // 0x219b80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219b7c) {
            ctx->pc = 0x219D28u;
            goto label_219d28;
        }
    }
    ctx->pc = 0x219B84u;
label_219b84:
    // 0x219b84: 0x12020005  beq         $s0, $v0, . + 4 + (0x5 << 2)
label_219b88:
    if (ctx->pc == 0x219B88u) {
        ctx->pc = 0x219B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219B84u;
        // 0x219b88: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219B8Cu;
        goto label_219b8c;
    }
    ctx->pc = 0x219B84u;
    {
        const bool branch_taken_0x219b84 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x219B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219B84u;
        // 0x219b88: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219b84) {
            ctx->pc = 0x219B9Cu;
            goto label_219b9c;
        }
    }
    ctx->pc = 0x219B8Cu;
label_219b8c:
    // 0x219b8c: 0x52020007  beql        $s0, $v0, . + 4 + (0x7 << 2)
label_219b90:
    if (ctx->pc == 0x219B90u) {
        ctx->pc = 0x219B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219B8Cu;
        // 0x219b90: 0x8242002c  lb          $v0, 0x2C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219B94u;
        goto label_219b94;
    }
    ctx->pc = 0x219B8Cu;
    {
        const bool branch_taken_0x219b8c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x219b8c) {
            ctx->pc = 0x219B90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x219B8Cu;
            // 0x219b90: 0x8242002c  lb          $v0, 0x2C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x219BACu;
            goto label_219bac;
        }
    }
    ctx->pc = 0x219B94u;
label_219b94:
    // 0x219b94: 0x52800065  beql        $s4, $zero, . + 4 + (0x65 << 2)
label_219b98:
    if (ctx->pc == 0x219B98u) {
        ctx->pc = 0x219B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219B94u;
        // 0x219b98: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219B9Cu;
        goto label_219b9c;
    }
    ctx->pc = 0x219B94u;
    {
        const bool branch_taken_0x219b94 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x219b94) {
            ctx->pc = 0x219B98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x219B94u;
            // 0x219b98: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x219D2Cu;
            goto label_219d2c;
        }
    }
    ctx->pc = 0x219B9Cu;
label_219b9c:
    // 0x219b9c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x219b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_219ba0:
    // 0x219ba0: 0x56020013  bnel        $s0, $v0, . + 4 + (0x13 << 2)
label_219ba4:
    if (ctx->pc == 0x219BA4u) {
        ctx->pc = 0x219BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219BA0u;
        // 0x219ba4: 0x7ac20000  lq          $v0, 0x0($s6) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219BA8u;
        goto label_219ba8;
    }
    ctx->pc = 0x219BA0u;
    {
        const bool branch_taken_0x219ba0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x219ba0) {
            ctx->pc = 0x219BA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x219BA0u;
            // 0x219ba4: 0x7ac20000  lq          $v0, 0x0($s6) (Delay Slot)
            SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 22), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x219BF0u;
            goto label_219bf0;
        }
    }
    ctx->pc = 0x219BA8u;
label_219ba8:
    // 0x219ba8: 0x8242002c  lb          $v0, 0x2C($s2)
    ctx->pc = 0x219ba8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 44)));
label_219bac:
    // 0x219bac: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_219bb0:
    if (ctx->pc == 0x219BB0u) {
        ctx->pc = 0x219BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219BACu;
        // 0x219bb0: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219BB4u;
        goto label_219bb4;
    }
    ctx->pc = 0x219BACu;
    {
        const bool branch_taken_0x219bac = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x219BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219BACu;
        // 0x219bb0: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219bac) {
            ctx->pc = 0x219BC0u;
            goto label_219bc0;
        }
    }
    ctx->pc = 0x219BB4u;
label_219bb4:
    // 0x219bb4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x219bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_219bb8:
    // 0x219bb8: 0x10000002  b           . + 4 + (0x2 << 2)
label_219bbc:
    if (ctx->pc == 0x219BBCu) {
        ctx->pc = 0x219BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219BB8u;
        // 0x219bbc: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219BC0u;
        goto label_219bc0;
    }
    ctx->pc = 0x219BB8u;
    {
        const bool branch_taken_0x219bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219BB8u;
        // 0x219bbc: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219bb8) {
            ctx->pc = 0x219BC4u;
            goto label_219bc4;
        }
    }
    ctx->pc = 0x219BC0u;
label_219bc0:
    // 0x219bc0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x219bc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_219bc4:
    // 0x219bc4: 0x50a0000a  beql        $a1, $zero, . + 4 + (0xA << 2)
label_219bc8:
    if (ctx->pc == 0x219BC8u) {
        ctx->pc = 0x219BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219BC4u;
        // 0x219bc8: 0x7ac20000  lq          $v0, 0x0($s6) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219BCCu;
        goto label_219bcc;
    }
    ctx->pc = 0x219BC4u;
    {
        const bool branch_taken_0x219bc4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x219bc4) {
            ctx->pc = 0x219BC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x219BC4u;
            // 0x219bc8: 0x7ac20000  lq          $v0, 0x0($s6) (Delay Slot)
            SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 22), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x219BF0u;
            goto label_219bf0;
        }
    }
    ctx->pc = 0x219BCCu;
label_219bcc:
    // 0x219bcc: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x219bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_219bd0:
    // 0x219bd0: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x219bd0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_219bd4:
    // 0x219bd4: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x219bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_219bd8:
    // 0x219bd8: 0x40f809  jalr        $v0
label_219bdc:
    if (ctx->pc == 0x219BDCu) {
        ctx->pc = 0x219BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219BD8u;
        // 0x219bdc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219BE0u;
        goto label_219be0;
    }
    ctx->pc = 0x219BD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x219BE0u);
        ctx->pc = 0x219BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219BD8u;
        // 0x219bdc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x219BD8u, 0x219BE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x219BE0u;
label_219be0:
    // 0x219be0: 0x2403004f  addiu       $v1, $zero, 0x4F
    ctx->pc = 0x219be0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
label_219be4:
    // 0x219be4: 0x10430051  beq         $v0, $v1, . + 4 + (0x51 << 2)
label_219be8:
    if (ctx->pc == 0x219BE8u) {
        ctx->pc = 0x219BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219BE4u;
        // 0x219be8: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219BECu;
        goto label_219bec;
    }
    ctx->pc = 0x219BE4u;
    {
        const bool branch_taken_0x219be4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x219BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219BE4u;
        // 0x219be8: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219be4) {
            ctx->pc = 0x219D2Cu;
            goto label_219d2c;
        }
    }
    ctx->pc = 0x219BECu;
label_219bec:
    // 0x219bec: 0x7ac20000  lq          $v0, 0x0($s6)
    ctx->pc = 0x219becu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 22), 0)));
label_219bf0:
    // 0x219bf0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x219bf0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_219bf4:
    // 0x219bf4: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x219bf4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_219bf8:
    // 0x219bf8: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x219bf8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_219bfc:
    // 0x219bfc: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x219bfcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_219c00:
    // 0x219c00: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x219c00u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_219c04:
    // 0x219c04: 0x4a0003bf  vwaitq
    ctx->pc = 0x219c04u;
    // VWAITQ (Q already resolved in this runtime)
label_219c08:
    // 0x219c08: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x219c08u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_219c0c:
    // 0x219c0c: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x219c0cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_219c10:
    // 0x219c10: 0x7aa30050  lq          $v1, 0x50($s5)
    ctx->pc = 0x219c10u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 21), 80)));
label_219c14:
    // 0x219c14: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x219c14u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_219c18:
    // 0x219c18: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x219c18u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_219c1c:
    // 0x219c1c: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x219c1cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_219c20:
    // 0x219c20: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x219c20u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_219c24:
    // 0x219c24: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x219c24u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_219c28:
    // 0x219c28: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x219c28u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
label_219c2c:
    // 0x219c2c: 0x3c01bf4c  lui         $at, 0xBF4C
    ctx->pc = 0x219c2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48972 << 16));
label_219c30:
    // 0x219c30: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x219c30u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_219c34:
    // 0x219c34: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x219c34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_219c38:
    // 0x219c38: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x219c38u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_219c3c:
    // 0x219c3c: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x219c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_219c40:
    // 0x219c40: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x219c40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_219c44:
    // 0x219c44: 0x0  nop
    ctx->pc = 0x219c44u;
    // NOP
label_219c48:
    // 0x219c48: 0x45000037  bc1f        . + 4 + (0x37 << 2)
label_219c4c:
    if (ctx->pc == 0x219C4Cu) {
        ctx->pc = 0x219C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219C48u;
        // 0x219c4c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219C50u;
        goto label_219c50;
    }
    ctx->pc = 0x219C48u;
    {
        const bool branch_taken_0x219c48 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x219C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219C48u;
        // 0x219c4c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219c48) {
            ctx->pc = 0x219D28u;
            goto label_219d28;
        }
    }
    ctx->pc = 0x219C50u;
label_219c50:
    // 0x219c50: 0x56800019  bnel        $s4, $zero, . + 4 + (0x19 << 2)
label_219c54:
    if (ctx->pc == 0x219C54u) {
        ctx->pc = 0x219C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219C50u;
        // 0x219c54: 0x8e6301a8  lw          $v1, 0x1A8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 424)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219C58u;
        goto label_219c58;
    }
    ctx->pc = 0x219C50u;
    {
        const bool branch_taken_0x219c50 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x219c50) {
            ctx->pc = 0x219C54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x219C50u;
            // 0x219c54: 0x8e6301a8  lw          $v1, 0x1A8($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 424)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x219CB8u;
            goto label_219cb8;
        }
    }
    ctx->pc = 0x219C58u;
label_219c58:
    // 0x219c58: 0x8e22056c  lw          $v0, 0x56C($s1)
    ctx->pc = 0x219c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1388)));
label_219c5c:
    // 0x219c5c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_219c60:
    if (ctx->pc == 0x219C60u) {
        ctx->pc = 0x219C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219C5Cu;
        // 0x219c60: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219C64u;
        goto label_219c64;
    }
    ctx->pc = 0x219C5Cu;
    {
        const bool branch_taken_0x219c5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x219C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219C5Cu;
        // 0x219c60: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219c5c) {
            ctx->pc = 0x219C78u;
            goto label_219c78;
        }
    }
    ctx->pc = 0x219C64u;
label_219c64:
    // 0x219c64: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x219c64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_219c68:
    // 0x219c68: 0x8c43b734  lw          $v1, -0x48CC($v0)
    ctx->pc = 0x219c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_219c6c:
    // 0x219c6c: 0x8c640048  lw          $a0, 0x48($v1)
    ctx->pc = 0x219c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_219c70:
    // 0x219c70: 0x1000001c  b           . + 4 + (0x1C << 2)
label_219c74:
    if (ctx->pc == 0x219C74u) {
        ctx->pc = 0x219C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219C70u;
        // 0x219c74: 0x24822710  addiu       $v0, $a0, 0x2710 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 10000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219C78u;
        goto label_219c78;
    }
    ctx->pc = 0x219C70u;
    {
        const bool branch_taken_0x219c70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219C70u;
        // 0x219c74: 0x24822710  addiu       $v0, $a0, 0x2710 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 10000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219c70) {
            ctx->pc = 0x219CE4u;
            goto label_219ce4;
        }
    }
    ctx->pc = 0x219C78u;
label_219c78:
    // 0x219c78: 0x8e250570  lw          $a1, 0x570($s1)
    ctx->pc = 0x219c78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1392)));
label_219c7c:
    // 0x219c7c: 0x8c83b734  lw          $v1, -0x48CC($a0)
    ctx->pc = 0x219c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294948660)));
label_219c80:
    // 0x219c80: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x219c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_219c84:
    // 0x219c84: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x219c84u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_219c88:
    // 0x219c88: 0x2c4207d0  sltiu       $v0, $v0, 0x7D0
    ctx->pc = 0x219c88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2000) ? 1 : 0);
label_219c8c:
    // 0x219c8c: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
label_219c90:
    if (ctx->pc == 0x219C90u) {
        ctx->pc = 0x219C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219C8Cu;
        // 0x219c90: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219C94u;
        goto label_219c94;
    }
    ctx->pc = 0x219C8Cu;
    {
        const bool branch_taken_0x219c8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x219C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219C8Cu;
        // 0x219c90: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219c8c) {
            ctx->pc = 0x219D2Cu;
            goto label_219d2c;
        }
    }
    ctx->pc = 0x219C94u;
label_219c94:
    // 0x219c94: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x219c94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_219c98:
    // 0x219c98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x219c98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_219c9c:
    // 0x219c9c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x219c9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_219ca0:
    // 0x219ca0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x219ca0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_219ca4:
    // 0x219ca4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x219ca4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_219ca8:
    // 0x219ca8: 0xc0875a0  jal         func_21D680
label_219cac:
    if (ctx->pc == 0x219CACu) {
        ctx->pc = 0x219CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219CA8u;
        // 0x219cac: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219CB0u;
        goto label_219cb0;
    }
    ctx->pc = 0x219CA8u;
    SET_GPR_U32(ctx, 31, 0x219CB0u);
    ctx->pc = 0x219CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219CA8u;
    // 0x219cac: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D680u, 0x219CA8u, 0x219CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219CB0u;
label_219cb0:
    // 0x219cb0: 0x1000001c  b           . + 4 + (0x1C << 2)
label_219cb4:
    if (ctx->pc == 0x219CB4u) {
        ctx->pc = 0x219CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219CB0u;
        // 0x219cb4: 0xae200570  sw          $zero, 0x570($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1392), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219CB8u;
        goto label_219cb8;
    }
    ctx->pc = 0x219CB0u;
    {
        const bool branch_taken_0x219cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219CB0u;
        // 0x219cb4: 0xae200570  sw          $zero, 0x570($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1392), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219cb0) {
            ctx->pc = 0x219D24u;
            goto label_219d24;
        }
    }
    ctx->pc = 0x219CB8u;
label_219cb8:
    // 0x219cb8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x219cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_219cbc:
    // 0x219cbc: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x219cbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_219cc0:
    // 0x219cc0: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_219cc4:
    if (ctx->pc == 0x219CC4u) {
        ctx->pc = 0x219CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219CC0u;
        // 0x219cc4: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219CC8u;
        goto label_219cc8;
    }
    ctx->pc = 0x219CC0u;
    {
        const bool branch_taken_0x219cc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x219CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219CC0u;
        // 0x219cc4: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219cc0) {
            ctx->pc = 0x219D2Cu;
            goto label_219d2c;
        }
    }
    ctx->pc = 0x219CC8u;
label_219cc8:
    // 0x219cc8: 0x8e22056c  lw          $v0, 0x56C($s1)
    ctx->pc = 0x219cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1388)));
label_219ccc:
    // 0x219ccc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_219cd0:
    if (ctx->pc == 0x219CD0u) {
        ctx->pc = 0x219CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219CCCu;
        // 0x219cd0: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219CD4u;
        goto label_219cd4;
    }
    ctx->pc = 0x219CCCu;
    {
        const bool branch_taken_0x219ccc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x219CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219CCCu;
        // 0x219cd0: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219ccc) {
            ctx->pc = 0x219CF0u;
            goto label_219cf0;
        }
    }
    ctx->pc = 0x219CD4u;
label_219cd4:
    // 0x219cd4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x219cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_219cd8:
    // 0x219cd8: 0x8c43b734  lw          $v1, -0x48CC($v0)
    ctx->pc = 0x219cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_219cdc:
    // 0x219cdc: 0x8c640048  lw          $a0, 0x48($v1)
    ctx->pc = 0x219cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_219ce0:
    // 0x219ce0: 0x24820834  addiu       $v0, $a0, 0x834
    ctx->pc = 0x219ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 2100));
label_219ce4:
    // 0x219ce4: 0xae240570  sw          $a0, 0x570($s1)
    ctx->pc = 0x219ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1392), GPR_U32(ctx, 4));
label_219ce8:
    // 0x219ce8: 0x1000000f  b           . + 4 + (0xF << 2)
label_219cec:
    if (ctx->pc == 0x219CECu) {
        ctx->pc = 0x219CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219CE8u;
        // 0x219cec: 0xae22056c  sw          $v0, 0x56C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1388), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219CF0u;
        goto label_219cf0;
    }
    ctx->pc = 0x219CE8u;
    {
        const bool branch_taken_0x219ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219CE8u;
        // 0x219cec: 0xae22056c  sw          $v0, 0x56C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1388), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219ce8) {
            ctx->pc = 0x219D28u;
            goto label_219d28;
        }
    }
    ctx->pc = 0x219CF0u;
label_219cf0:
    // 0x219cf0: 0x8e250570  lw          $a1, 0x570($s1)
    ctx->pc = 0x219cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1392)));
label_219cf4:
    // 0x219cf4: 0x8c83b734  lw          $v1, -0x48CC($a0)
    ctx->pc = 0x219cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294948660)));
label_219cf8:
    // 0x219cf8: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x219cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_219cfc:
    // 0x219cfc: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x219cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_219d00:
    // 0x219d00: 0x2c4207d0  sltiu       $v0, $v0, 0x7D0
    ctx->pc = 0x219d00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2000) ? 1 : 0);
label_219d04:
    // 0x219d04: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_219d08:
    if (ctx->pc == 0x219D08u) {
        ctx->pc = 0x219D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219D04u;
        // 0x219d08: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219D0Cu;
        goto label_219d0c;
    }
    ctx->pc = 0x219D04u;
    {
        const bool branch_taken_0x219d04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x219D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219D04u;
        // 0x219d08: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219d04) {
            ctx->pc = 0x219D2Cu;
            goto label_219d2c;
        }
    }
    ctx->pc = 0x219D0Cu;
label_219d0c:
    // 0x219d0c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x219d0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_219d10:
    // 0x219d10: 0xc08c828  jal         func_2320A0
label_219d14:
    if (ctx->pc == 0x219D14u) {
        ctx->pc = 0x219D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219D10u;
        // 0x219d14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219D18u;
        goto label_219d18;
    }
    ctx->pc = 0x219D10u;
    SET_GPR_U32(ctx, 31, 0x219D18u);
    ctx->pc = 0x219D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219D10u;
    // 0x219d14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2320A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2320A0u, 0x219D10u, 0x219D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219D18u;
label_219d18:
    // 0x219d18: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_219d1c:
    if (ctx->pc == 0x219D1Cu) {
        ctx->pc = 0x219D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219D18u;
        // 0x219d1c: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219D20u;
        goto label_219d20;
    }
    ctx->pc = 0x219D18u;
    {
        const bool branch_taken_0x219d18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x219D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219D18u;
        // 0x219d1c: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219d18) {
            ctx->pc = 0x219D2Cu;
            goto label_219d2c;
        }
    }
    ctx->pc = 0x219D20u;
label_219d20:
    // 0x219d20: 0xae200570  sw          $zero, 0x570($s1)
    ctx->pc = 0x219d20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1392), GPR_U32(ctx, 0));
label_219d24:
    // 0x219d24: 0xae20056c  sw          $zero, 0x56C($s1)
    ctx->pc = 0x219d24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1388), GPR_U32(ctx, 0));
label_219d28:
    // 0x219d28: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x219d28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_219d2c:
    // 0x219d2c: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x219d2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_219d30:
    // 0x219d30: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x219d30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_219d34:
    // 0x219d34: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x219d34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_219d38:
    // 0x219d38: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x219d38u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_219d3c:
    // 0x219d3c: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x219d3cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_219d40:
    // 0x219d40: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x219d40u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_219d44:
    // 0x219d44: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x219d44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_219d48:
    // 0x219d48: 0x3e00008  jr          $ra
label_219d4c:
    if (ctx->pc == 0x219D4Cu) {
        ctx->pc = 0x219D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219D48u;
        // 0x219d4c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219D50u;
        goto label_fallthrough_0x219d48;
    }
    ctx->pc = 0x219D48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x219D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219D48u;
        // 0x219d4c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x219D48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x219d48:
    ctx->pc = 0x219D50u;
}
