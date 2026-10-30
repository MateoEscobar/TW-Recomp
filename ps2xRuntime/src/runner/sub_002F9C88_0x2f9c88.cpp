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

// Function: sub_002F9C88
// Address: 0x2f9c88 - 0x2f9de0
void sub_002F9C88_0x2f9c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F9C88_0x2f9c88");
#endif

    switch (ctx->pc) {
        case 0x2f9c88u: goto label_2f9c88;
        case 0x2f9c8cu: goto label_2f9c8c;
        case 0x2f9c90u: goto label_2f9c90;
        case 0x2f9c94u: goto label_2f9c94;
        case 0x2f9c98u: goto label_2f9c98;
        case 0x2f9c9cu: goto label_2f9c9c;
        case 0x2f9ca0u: goto label_2f9ca0;
        case 0x2f9ca4u: goto label_2f9ca4;
        case 0x2f9ca8u: goto label_2f9ca8;
        case 0x2f9cacu: goto label_2f9cac;
        case 0x2f9cb0u: goto label_2f9cb0;
        case 0x2f9cb4u: goto label_2f9cb4;
        case 0x2f9cb8u: goto label_2f9cb8;
        case 0x2f9cbcu: goto label_2f9cbc;
        case 0x2f9cc0u: goto label_2f9cc0;
        case 0x2f9cc4u: goto label_2f9cc4;
        case 0x2f9cc8u: goto label_2f9cc8;
        case 0x2f9cccu: goto label_2f9ccc;
        case 0x2f9cd0u: goto label_2f9cd0;
        case 0x2f9cd4u: goto label_2f9cd4;
        case 0x2f9cd8u: goto label_2f9cd8;
        case 0x2f9cdcu: goto label_2f9cdc;
        case 0x2f9ce0u: goto label_2f9ce0;
        case 0x2f9ce4u: goto label_2f9ce4;
        case 0x2f9ce8u: goto label_2f9ce8;
        case 0x2f9cecu: goto label_2f9cec;
        case 0x2f9cf0u: goto label_2f9cf0;
        case 0x2f9cf4u: goto label_2f9cf4;
        case 0x2f9cf8u: goto label_2f9cf8;
        case 0x2f9cfcu: goto label_2f9cfc;
        case 0x2f9d00u: goto label_2f9d00;
        case 0x2f9d04u: goto label_2f9d04;
        case 0x2f9d08u: goto label_2f9d08;
        case 0x2f9d0cu: goto label_2f9d0c;
        case 0x2f9d10u: goto label_2f9d10;
        case 0x2f9d14u: goto label_2f9d14;
        case 0x2f9d18u: goto label_2f9d18;
        case 0x2f9d1cu: goto label_2f9d1c;
        case 0x2f9d20u: goto label_2f9d20;
        case 0x2f9d24u: goto label_2f9d24;
        case 0x2f9d28u: goto label_2f9d28;
        case 0x2f9d2cu: goto label_2f9d2c;
        case 0x2f9d30u: goto label_2f9d30;
        case 0x2f9d34u: goto label_2f9d34;
        case 0x2f9d38u: goto label_2f9d38;
        case 0x2f9d3cu: goto label_2f9d3c;
        case 0x2f9d40u: goto label_2f9d40;
        case 0x2f9d44u: goto label_2f9d44;
        case 0x2f9d48u: goto label_2f9d48;
        case 0x2f9d4cu: goto label_2f9d4c;
        case 0x2f9d50u: goto label_2f9d50;
        case 0x2f9d54u: goto label_2f9d54;
        case 0x2f9d58u: goto label_2f9d58;
        case 0x2f9d5cu: goto label_2f9d5c;
        case 0x2f9d60u: goto label_2f9d60;
        case 0x2f9d64u: goto label_2f9d64;
        case 0x2f9d68u: goto label_2f9d68;
        case 0x2f9d6cu: goto label_2f9d6c;
        case 0x2f9d70u: goto label_2f9d70;
        case 0x2f9d74u: goto label_2f9d74;
        case 0x2f9d78u: goto label_2f9d78;
        case 0x2f9d7cu: goto label_2f9d7c;
        case 0x2f9d80u: goto label_2f9d80;
        case 0x2f9d84u: goto label_2f9d84;
        case 0x2f9d88u: goto label_2f9d88;
        case 0x2f9d8cu: goto label_2f9d8c;
        case 0x2f9d90u: goto label_2f9d90;
        case 0x2f9d94u: goto label_2f9d94;
        case 0x2f9d98u: goto label_2f9d98;
        case 0x2f9d9cu: goto label_2f9d9c;
        case 0x2f9da0u: goto label_2f9da0;
        case 0x2f9da4u: goto label_2f9da4;
        case 0x2f9da8u: goto label_2f9da8;
        case 0x2f9dacu: goto label_2f9dac;
        case 0x2f9db0u: goto label_2f9db0;
        case 0x2f9db4u: goto label_2f9db4;
        case 0x2f9db8u: goto label_2f9db8;
        case 0x2f9dbcu: goto label_2f9dbc;
        case 0x2f9dc0u: goto label_2f9dc0;
        case 0x2f9dc4u: goto label_2f9dc4;
        case 0x2f9dc8u: goto label_2f9dc8;
        case 0x2f9dccu: goto label_2f9dcc;
        case 0x2f9dd0u: goto label_2f9dd0;
        case 0x2f9dd4u: goto label_2f9dd4;
        case 0x2f9dd8u: goto label_2f9dd8;
        case 0x2f9ddcu: goto label_2f9ddc;
        default: break;
    }

    ctx->pc = 0x2f9c88u;

label_2f9c88:
    // 0x2f9c88: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2f9c88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2f9c8c:
    // 0x2f9c8c: 0x3c060071  lui         $a2, 0x71
    ctx->pc = 0x2f9c8cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)113 << 16));
label_2f9c90:
    // 0x2f9c90: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2f9c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_2f9c94:
    // 0x2f9c94: 0x24c64b00  addiu       $a2, $a2, 0x4B00
    ctx->pc = 0x2f9c94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19200));
label_2f9c98:
    // 0x2f9c98: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2f9c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2f9c9c:
    // 0x2f9c9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f9c9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f9ca0:
    // 0x2f9ca0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f9ca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2f9ca4:
    // 0x2f9ca4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f9ca4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f9ca8:
    // 0x2f9ca8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2f9ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2f9cac:
    // 0x2f9cac: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2f9cacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f9cb0:
    // 0x2f9cb0: 0x248400a0  addiu       $a0, $a0, 0xA0
    ctx->pc = 0x2f9cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
label_2f9cb4:
    // 0x2f9cb4: 0x84620092  lh          $v0, 0x92($v1)
    ctx->pc = 0x2f9cb4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 146)));
label_2f9cb8:
    // 0x2f9cb8: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2f9cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2f9cbc:
    // 0x2f9cbc: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2f9cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_2f9cc0:
    // 0x2f9cc0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2f9cc0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2f9cc4:
    // 0x2f9cc4: 0xc0a22d0  jal         func_288B40
label_2f9cc8:
    if (ctx->pc == 0x2F9CC8u) {
        ctx->pc = 0x2F9CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9CC4u;
        // 0x2f9cc8: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9CCCu;
        goto label_2f9ccc;
    }
    ctx->pc = 0x2F9CC4u;
    SET_GPR_U32(ctx, 31, 0x2F9CCCu);
    ctx->pc = 0x2F9CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9CC4u;
    // 0x2f9cc8: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288B40u, 0x2F9CC4u, 0x2F9CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9CCCu;
label_2f9ccc:
    // 0x2f9ccc: 0x8e040034  lw          $a0, 0x34($s0)
    ctx->pc = 0x2f9cccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_2f9cd0:
    // 0x2f9cd0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2f9cd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2f9cd4:
    // 0x2f9cd4: 0xc104e3c  jal         func_4138F0
label_2f9cd8:
    if (ctx->pc == 0x2F9CD8u) {
        ctx->pc = 0x2F9CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9CD4u;
        // 0x2f9cd8: 0x2606003d  addiu       $a2, $s0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 61));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9CDCu;
        goto label_2f9cdc;
    }
    ctx->pc = 0x2F9CD4u;
    SET_GPR_U32(ctx, 31, 0x2F9CDCu);
    ctx->pc = 0x2F9CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9CD4u;
    // 0x2f9cd8: 0x2606003d  addiu       $a2, $s0, 0x3D (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 61));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4138F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4138F0u, 0x2F9CD4u, 0x2F9CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9CDCu;
label_2f9cdc:
    // 0x2f9cdc: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_2f9ce0:
    if (ctx->pc == 0x2F9CE0u) {
        ctx->pc = 0x2F9CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9CDCu;
        // 0x2f9ce0: 0x92020033  lbu         $v0, 0x33($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 51)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9CE4u;
        goto label_2f9ce4;
    }
    ctx->pc = 0x2F9CDCu;
    {
        const bool branch_taken_0x2f9cdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f9cdc) {
            ctx->pc = 0x2F9CE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F9CDCu;
            // 0x2f9ce0: 0x92020033  lbu         $v0, 0x33($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 51)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F9CF4u;
            goto label_2f9cf4;
        }
    }
    ctx->pc = 0x2F9CE4u;
label_2f9ce4:
    // 0x2f9ce4: 0xc0a36c8  jal         func_28DB20
label_2f9ce8:
    if (ctx->pc == 0x2F9CE8u) {
        ctx->pc = 0x2F9CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9CE4u;
        // 0x2f9ce8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9CECu;
        goto label_2f9cec;
    }
    ctx->pc = 0x2F9CE4u;
    SET_GPR_U32(ctx, 31, 0x2F9CECu);
    ctx->pc = 0x2F9CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9CE4u;
    // 0x2f9ce8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x2F9CE4u, 0x2F9CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9CECu;
label_2f9cec:
    // 0x2f9cec: 0x10000036  b           . + 4 + (0x36 << 2)
label_2f9cf0:
    if (ctx->pc == 0x2F9CF0u) {
        ctx->pc = 0x2F9CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9CECu;
        // 0x2f9cf0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9CF4u;
        goto label_2f9cf4;
    }
    ctx->pc = 0x2F9CECu;
    {
        const bool branch_taken_0x2f9cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9CECu;
        // 0x2f9cf0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9cec) {
            ctx->pc = 0x2F9DC8u;
            goto label_2f9dc8;
        }
    }
    ctx->pc = 0x2F9CF4u;
label_2f9cf4:
    // 0x2f9cf4: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
label_2f9cf8:
    if (ctx->pc == 0x2F9CF8u) {
        ctx->pc = 0x2F9CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9CF4u;
        // 0x2f9cf8: 0x9203003d  lbu         $v1, 0x3D($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 61)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9CFCu;
        goto label_2f9cfc;
    }
    ctx->pc = 0x2F9CF4u;
    {
        const bool branch_taken_0x2f9cf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f9cf4) {
            ctx->pc = 0x2F9CF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F9CF4u;
            // 0x2f9cf8: 0x9203003d  lbu         $v1, 0x3D($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 61)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F9D34u;
            goto label_2f9d34;
        }
    }
    ctx->pc = 0x2F9CFCu;
label_2f9cfc:
    // 0x2f9cfc: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x2f9cfcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_2f9d00:
    // 0x2f9d00: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x2f9d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_2f9d04:
    // 0x2f9d04: 0x8e23b734  lw          $v1, -0x48CC($s1)
    ctx->pc = 0x2f9d04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294948660)));
label_2f9d08:
    // 0x2f9d08: 0x8c640048  lw          $a0, 0x48($v1)
    ctx->pc = 0x2f9d08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_2f9d0c:
    // 0x2f9d0c: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x2f9d0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_2f9d10:
    // 0x2f9d10: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_2f9d14:
    if (ctx->pc == 0x2F9D14u) {
        ctx->pc = 0x2F9D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9D10u;
        // 0x2f9d14: 0x9203003d  lbu         $v1, 0x3D($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 61)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9D18u;
        goto label_2f9d18;
    }
    ctx->pc = 0x2F9D10u;
    {
        const bool branch_taken_0x2f9d10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f9d10) {
            ctx->pc = 0x2F9D14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F9D10u;
            // 0x2f9d14: 0x9203003d  lbu         $v1, 0x3D($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 61)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F9D34u;
            goto label_2f9d34;
        }
    }
    ctx->pc = 0x2F9D18u;
label_2f9d18:
    // 0x2f9d18: 0xc0a36c8  jal         func_28DB20
label_2f9d1c:
    if (ctx->pc == 0x2F9D1Cu) {
        ctx->pc = 0x2F9D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9D18u;
        // 0x2f9d1c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9D20u;
        goto label_2f9d20;
    }
    ctx->pc = 0x2F9D18u;
    SET_GPR_U32(ctx, 31, 0x2F9D20u);
    ctx->pc = 0x2F9D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9D18u;
    // 0x2f9d1c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x2F9D18u, 0x2F9D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9D20u;
label_2f9d20:
    // 0x2f9d20: 0x8e23b734  lw          $v1, -0x48CC($s1)
    ctx->pc = 0x2f9d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294948660)));
label_2f9d24:
    // 0x2f9d24: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x2f9d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_2f9d28:
    // 0x2f9d28: 0x244200fa  addiu       $v0, $v0, 0xFA
    ctx->pc = 0x2f9d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 250));
label_2f9d2c:
    // 0x2f9d2c: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x2f9d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
label_2f9d30:
    // 0x2f9d30: 0x9203003d  lbu         $v1, 0x3D($s0)
    ctx->pc = 0x2f9d30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 61)));
label_2f9d34:
    // 0x2f9d34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f9d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f9d38:
    // 0x2f9d38: 0x54620012  bnel        $v1, $v0, . + 4 + (0x12 << 2)
label_2f9d3c:
    if (ctx->pc == 0x2F9D3Cu) {
        ctx->pc = 0x2F9D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9D38u;
        // 0x2f9d3c: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9D40u;
        goto label_2f9d40;
    }
    ctx->pc = 0x2F9D38u;
    {
        const bool branch_taken_0x2f9d38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f9d38) {
            ctx->pc = 0x2F9D3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F9D38u;
            // 0x2f9d3c: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F9D84u;
            goto label_2f9d84;
        }
    }
    ctx->pc = 0x2F9D40u;
label_2f9d40:
    // 0x2f9d40: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2f9d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2f9d44:
    // 0x2f9d44: 0x8082002e  lb          $v0, 0x2E($a0)
    ctx->pc = 0x2f9d44u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 46)));
label_2f9d48:
    // 0x2f9d48: 0x2882a  slt         $s1, $zero, $v0
    ctx->pc = 0x2f9d48u;
    SET_GPR_U64(ctx, 17, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2f9d4c:
    // 0x2f9d4c: 0x5623000d  bnel        $s1, $v1, . + 4 + (0xD << 2)
label_2f9d50:
    if (ctx->pc == 0x2F9D50u) {
        ctx->pc = 0x2F9D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9D4Cu;
        // 0x2f9d50: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9D54u;
        goto label_2f9d54;
    }
    ctx->pc = 0x2F9D4Cu;
    {
        const bool branch_taken_0x2f9d4c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f9d4c) {
            ctx->pc = 0x2F9D50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F9D4Cu;
            // 0x2f9d50: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F9D84u;
            goto label_2f9d84;
        }
    }
    ctx->pc = 0x2F9D54u;
label_2f9d54:
    // 0x2f9d54: 0xc0a36c2  jal         func_28DB08
label_2f9d58:
    if (ctx->pc == 0x2F9D58u) {
        ctx->pc = 0x2F9D5Cu;
        goto label_2f9d5c;
    }
    ctx->pc = 0x2F9D54u;
    SET_GPR_U32(ctx, 31, 0x2F9D5Cu);
    ctx->pc = 0x28DB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB08u, 0x2F9D54u, 0x2F9D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9D5Cu;
label_2f9d5c:
    // 0x2f9d5c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2f9d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2f9d60:
    // 0x2f9d60: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x2f9d60u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_2f9d64:
    // 0x2f9d64: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x2f9d64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2f9d68:
    // 0x2f9d68: 0xa0f809  jalr        $a1
label_2f9d6c:
    if (ctx->pc == 0x2F9D6Cu) {
        ctx->pc = 0x2F9D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9D68u;
        // 0x2f9d6c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9D70u;
        goto label_2f9d70;
    }
    ctx->pc = 0x2F9D68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x2F9D70u);
        ctx->pc = 0x2F9D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9D68u;
        // 0x2f9d6c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F9D68u, 0x2F9D70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F9D70u;
label_2f9d70:
    // 0x2f9d70: 0x54510004  bnel        $v0, $s1, . + 4 + (0x4 << 2)
label_2f9d74:
    if (ctx->pc == 0x2F9D74u) {
        ctx->pc = 0x2F9D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9D70u;
        // 0x2f9d74: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9D78u;
        goto label_2f9d78;
    }
    ctx->pc = 0x2F9D70u;
    {
        const bool branch_taken_0x2f9d70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x2f9d70) {
            ctx->pc = 0x2F9D74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F9D70u;
            // 0x2f9d74: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F9D84u;
            goto label_2f9d84;
        }
    }
    ctx->pc = 0x2F9D78u;
label_2f9d78:
    // 0x2f9d78: 0xc0a36c8  jal         func_28DB20
label_2f9d7c:
    if (ctx->pc == 0x2F9D7Cu) {
        ctx->pc = 0x2F9D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9D78u;
        // 0x2f9d7c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9D80u;
        goto label_2f9d80;
    }
    ctx->pc = 0x2F9D78u;
    SET_GPR_U32(ctx, 31, 0x2F9D80u);
    ctx->pc = 0x2F9D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9D78u;
    // 0x2f9d7c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x2F9D78u, 0x2F9D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9D80u;
label_2f9d80:
    // 0x2f9d80: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2f9d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2f9d84:
    // 0x2f9d84: 0x8062002e  lb          $v0, 0x2E($v1)
    ctx->pc = 0x2f9d84u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 46)));
label_2f9d88:
    // 0x2f9d88: 0x1c40000e  bgtz        $v0, . + 4 + (0xE << 2)
label_2f9d8c:
    if (ctx->pc == 0x2F9D8Cu) {
        ctx->pc = 0x2F9D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9D88u;
        // 0x2f9d8c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9D90u;
        goto label_2f9d90;
    }
    ctx->pc = 0x2F9D88u;
    {
        const bool branch_taken_0x2f9d88 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2F9D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9D88u;
        // 0x2f9d8c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9d88) {
            ctx->pc = 0x2F9DC4u;
            goto label_2f9dc4;
        }
    }
    ctx->pc = 0x2F9D90u;
label_2f9d90:
    // 0x2f9d90: 0x8e040034  lw          $a0, 0x34($s0)
    ctx->pc = 0x2f9d90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_2f9d94:
    // 0x2f9d94: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2f9d94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2f9d98:
    // 0x2f9d98: 0x26060020  addiu       $a2, $s0, 0x20
    ctx->pc = 0x2f9d98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_2f9d9c:
    // 0x2f9d9c: 0x26070030  addiu       $a3, $s0, 0x30
    ctx->pc = 0x2f9d9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_2f9da0:
    // 0x2f9da0: 0xc104ea4  jal         func_413A90
label_2f9da4:
    if (ctx->pc == 0x2F9DA4u) {
        ctx->pc = 0x2F9DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9DA0u;
        // 0x2f9da4: 0x26080031  addiu       $t0, $s0, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 49));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9DA8u;
        goto label_2f9da8;
    }
    ctx->pc = 0x2F9DA0u;
    SET_GPR_U32(ctx, 31, 0x2F9DA8u);
    ctx->pc = 0x2F9DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9DA0u;
    // 0x2f9da4: 0x26080031  addiu       $t0, $s0, 0x31 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 49));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413A90u, 0x2F9DA0u, 0x2F9DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9DA8u;
label_2f9da8:
    // 0x2f9da8: 0xa2020032  sb          $v0, 0x32($s0)
    ctx->pc = 0x2f9da8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 50), (uint8_t)GPR_U32(ctx, 2));
label_2f9dac:
    // 0x2f9dac: 0xc0be5b4  jal         func_2F96D0
label_2f9db0:
    if (ctx->pc == 0x2F9DB0u) {
        ctx->pc = 0x2F9DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9DACu;
        // 0x2f9db0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9DB4u;
        goto label_2f9db4;
    }
    ctx->pc = 0x2F9DACu;
    SET_GPR_U32(ctx, 31, 0x2F9DB4u);
    ctx->pc = 0x2F9DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9DACu;
    // 0x2f9db0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F96D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F96D0u, 0x2F9DACu, 0x2F9DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9DB4u;
label_2f9db4:
    // 0x2f9db4: 0x10510004  beq         $v0, $s1, . + 4 + (0x4 << 2)
label_2f9db8:
    if (ctx->pc == 0x2F9DB8u) {
        ctx->pc = 0x2F9DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9DB4u;
        // 0x2f9db8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9DBCu;
        goto label_2f9dbc;
    }
    ctx->pc = 0x2F9DB4u;
    {
        const bool branch_taken_0x2f9db4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x2F9DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9DB4u;
        // 0x2f9db8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9db4) {
            ctx->pc = 0x2F9DC8u;
            goto label_2f9dc8;
        }
    }
    ctx->pc = 0x2F9DBCu;
label_2f9dbc:
    // 0x2f9dbc: 0xc0be660  jal         func_2F9980
label_2f9dc0:
    if (ctx->pc == 0x2F9DC0u) {
        ctx->pc = 0x2F9DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9DBCu;
        // 0x2f9dc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9DC4u;
        goto label_2f9dc4;
    }
    ctx->pc = 0x2F9DBCu;
    SET_GPR_U32(ctx, 31, 0x2F9DC4u);
    ctx->pc = 0x2F9DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9DBCu;
    // 0x2f9dc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9980u, 0x2F9DBCu, 0x2F9DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9DC4u;
label_2f9dc4:
    // 0x2f9dc4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f9dc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f9dc8:
    // 0x2f9dc8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2f9dc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2f9dcc:
    // 0x2f9dcc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2f9dccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2f9dd0:
    // 0x2f9dd0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f9dd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2f9dd4:
    // 0x2f9dd4: 0x3e00008  jr          $ra
label_2f9dd8:
    if (ctx->pc == 0x2F9DD8u) {
        ctx->pc = 0x2F9DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9DD4u;
        // 0x2f9dd8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9DDCu;
        goto label_2f9ddc;
    }
    ctx->pc = 0x2F9DD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F9DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9DD4u;
        // 0x2f9dd8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F9DD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F9DDCu;
label_2f9ddc:
    // 0x2f9ddc: 0x0  nop
    ctx->pc = 0x2f9ddcu;
    // NOP
    ctx->pc = 0x2f9de0u;
}
