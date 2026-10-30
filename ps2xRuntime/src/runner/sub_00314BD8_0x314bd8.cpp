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

// Function: sub_00314BD8
// Address: 0x314bd8 - 0x314e30
void sub_00314BD8_0x314bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00314BD8_0x314bd8");
#endif

    switch (ctx->pc) {
        case 0x314bd8u: goto label_314bd8;
        case 0x314bdcu: goto label_314bdc;
        case 0x314be0u: goto label_314be0;
        case 0x314be4u: goto label_314be4;
        case 0x314be8u: goto label_314be8;
        case 0x314becu: goto label_314bec;
        case 0x314bf0u: goto label_314bf0;
        case 0x314bf4u: goto label_314bf4;
        case 0x314bf8u: goto label_314bf8;
        case 0x314bfcu: goto label_314bfc;
        case 0x314c00u: goto label_314c00;
        case 0x314c04u: goto label_314c04;
        case 0x314c08u: goto label_314c08;
        case 0x314c0cu: goto label_314c0c;
        case 0x314c10u: goto label_314c10;
        case 0x314c14u: goto label_314c14;
        case 0x314c18u: goto label_314c18;
        case 0x314c1cu: goto label_314c1c;
        case 0x314c20u: goto label_314c20;
        case 0x314c24u: goto label_314c24;
        case 0x314c28u: goto label_314c28;
        case 0x314c2cu: goto label_314c2c;
        case 0x314c30u: goto label_314c30;
        case 0x314c34u: goto label_314c34;
        case 0x314c38u: goto label_314c38;
        case 0x314c3cu: goto label_314c3c;
        case 0x314c40u: goto label_314c40;
        case 0x314c44u: goto label_314c44;
        case 0x314c48u: goto label_314c48;
        case 0x314c4cu: goto label_314c4c;
        case 0x314c50u: goto label_314c50;
        case 0x314c54u: goto label_314c54;
        case 0x314c58u: goto label_314c58;
        case 0x314c5cu: goto label_314c5c;
        case 0x314c60u: goto label_314c60;
        case 0x314c64u: goto label_314c64;
        case 0x314c68u: goto label_314c68;
        case 0x314c6cu: goto label_314c6c;
        case 0x314c70u: goto label_314c70;
        case 0x314c74u: goto label_314c74;
        case 0x314c78u: goto label_314c78;
        case 0x314c7cu: goto label_314c7c;
        case 0x314c80u: goto label_314c80;
        case 0x314c84u: goto label_314c84;
        case 0x314c88u: goto label_314c88;
        case 0x314c8cu: goto label_314c8c;
        case 0x314c90u: goto label_314c90;
        case 0x314c94u: goto label_314c94;
        case 0x314c98u: goto label_314c98;
        case 0x314c9cu: goto label_314c9c;
        case 0x314ca0u: goto label_314ca0;
        case 0x314ca4u: goto label_314ca4;
        case 0x314ca8u: goto label_314ca8;
        case 0x314cacu: goto label_314cac;
        case 0x314cb0u: goto label_314cb0;
        case 0x314cb4u: goto label_314cb4;
        case 0x314cb8u: goto label_314cb8;
        case 0x314cbcu: goto label_314cbc;
        case 0x314cc0u: goto label_314cc0;
        case 0x314cc4u: goto label_314cc4;
        case 0x314cc8u: goto label_314cc8;
        case 0x314cccu: goto label_314ccc;
        case 0x314cd0u: goto label_314cd0;
        case 0x314cd4u: goto label_314cd4;
        case 0x314cd8u: goto label_314cd8;
        case 0x314cdcu: goto label_314cdc;
        case 0x314ce0u: goto label_314ce0;
        case 0x314ce4u: goto label_314ce4;
        case 0x314ce8u: goto label_314ce8;
        case 0x314cecu: goto label_314cec;
        case 0x314cf0u: goto label_314cf0;
        case 0x314cf4u: goto label_314cf4;
        case 0x314cf8u: goto label_314cf8;
        case 0x314cfcu: goto label_314cfc;
        case 0x314d00u: goto label_314d00;
        case 0x314d04u: goto label_314d04;
        case 0x314d08u: goto label_314d08;
        case 0x314d0cu: goto label_314d0c;
        case 0x314d10u: goto label_314d10;
        case 0x314d14u: goto label_314d14;
        case 0x314d18u: goto label_314d18;
        case 0x314d1cu: goto label_314d1c;
        case 0x314d20u: goto label_314d20;
        case 0x314d24u: goto label_314d24;
        case 0x314d28u: goto label_314d28;
        case 0x314d2cu: goto label_314d2c;
        case 0x314d30u: goto label_314d30;
        case 0x314d34u: goto label_314d34;
        case 0x314d38u: goto label_314d38;
        case 0x314d3cu: goto label_314d3c;
        case 0x314d40u: goto label_314d40;
        case 0x314d44u: goto label_314d44;
        case 0x314d48u: goto label_314d48;
        case 0x314d4cu: goto label_314d4c;
        case 0x314d50u: goto label_314d50;
        case 0x314d54u: goto label_314d54;
        case 0x314d58u: goto label_314d58;
        case 0x314d5cu: goto label_314d5c;
        case 0x314d60u: goto label_314d60;
        case 0x314d64u: goto label_314d64;
        case 0x314d68u: goto label_314d68;
        case 0x314d6cu: goto label_314d6c;
        case 0x314d70u: goto label_314d70;
        case 0x314d74u: goto label_314d74;
        case 0x314d78u: goto label_314d78;
        case 0x314d7cu: goto label_314d7c;
        case 0x314d80u: goto label_314d80;
        case 0x314d84u: goto label_314d84;
        case 0x314d88u: goto label_314d88;
        case 0x314d8cu: goto label_314d8c;
        case 0x314d90u: goto label_314d90;
        case 0x314d94u: goto label_314d94;
        case 0x314d98u: goto label_314d98;
        case 0x314d9cu: goto label_314d9c;
        case 0x314da0u: goto label_314da0;
        case 0x314da4u: goto label_314da4;
        case 0x314da8u: goto label_314da8;
        case 0x314dacu: goto label_314dac;
        case 0x314db0u: goto label_314db0;
        case 0x314db4u: goto label_314db4;
        case 0x314db8u: goto label_314db8;
        case 0x314dbcu: goto label_314dbc;
        case 0x314dc0u: goto label_314dc0;
        case 0x314dc4u: goto label_314dc4;
        case 0x314dc8u: goto label_314dc8;
        case 0x314dccu: goto label_314dcc;
        case 0x314dd0u: goto label_314dd0;
        case 0x314dd4u: goto label_314dd4;
        case 0x314dd8u: goto label_314dd8;
        case 0x314ddcu: goto label_314ddc;
        case 0x314de0u: goto label_314de0;
        case 0x314de4u: goto label_314de4;
        case 0x314de8u: goto label_314de8;
        case 0x314decu: goto label_314dec;
        case 0x314df0u: goto label_314df0;
        case 0x314df4u: goto label_314df4;
        case 0x314df8u: goto label_314df8;
        case 0x314dfcu: goto label_314dfc;
        case 0x314e00u: goto label_314e00;
        case 0x314e04u: goto label_314e04;
        case 0x314e08u: goto label_314e08;
        case 0x314e0cu: goto label_314e0c;
        case 0x314e10u: goto label_314e10;
        case 0x314e14u: goto label_314e14;
        case 0x314e18u: goto label_314e18;
        case 0x314e1cu: goto label_314e1c;
        case 0x314e20u: goto label_314e20;
        case 0x314e24u: goto label_314e24;
        case 0x314e28u: goto label_314e28;
        case 0x314e2cu: goto label_314e2c;
        default: break;
    }

    ctx->pc = 0x314bd8u;

label_314bd8:
    // 0x314bd8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x314bd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_314bdc:
    // 0x314bdc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x314bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_314be0:
    // 0x314be0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x314be0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_314be4:
    // 0x314be4: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x314be4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_314be8:
    // 0x314be8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x314be8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_314bec:
    // 0x314bec: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x314becu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_314bf0:
    // 0x314bf0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x314bf0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_314bf4:
    // 0x314bf4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x314bf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_314bf8:
    // 0x314bf8: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x314bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_314bfc:
    // 0x314bfc: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x314bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_314c00:
    // 0x314c00: 0x16220012  bne         $s1, $v0, . + 4 + (0x12 << 2)
label_314c04:
    if (ctx->pc == 0x314C04u) {
        ctx->pc = 0x314C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314C00u;
        // 0x314c04: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314C08u;
        goto label_314c08;
    }
    ctx->pc = 0x314C00u;
    {
        const bool branch_taken_0x314c00 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x314C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314C00u;
        // 0x314c04: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314c00) {
            ctx->pc = 0x314C4Cu;
            goto label_314c4c;
        }
    }
    ctx->pc = 0x314C08u;
label_314c08:
    // 0x314c08: 0x92020030  lbu         $v0, 0x30($s0)
    ctx->pc = 0x314c08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 48)));
label_314c0c:
    // 0x314c0c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_314c10:
    if (ctx->pc == 0x314C10u) {
        ctx->pc = 0x314C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314C0Cu;
        // 0x314c10: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314C14u;
        goto label_314c14;
    }
    ctx->pc = 0x314C0Cu;
    {
        const bool branch_taken_0x314c0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x314C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314C0Cu;
        // 0x314c10: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314c0c) {
            ctx->pc = 0x314C30u;
            goto label_314c30;
        }
    }
    ctx->pc = 0x314C14u;
label_314c14:
    // 0x314c14: 0x8c42489c  lw          $v0, 0x489C($v0)
    ctx->pc = 0x314c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_314c18:
    // 0x314c18: 0x90430411  lbu         $v1, 0x411($v0)
    ctx->pc = 0x314c18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1041)));
label_314c1c:
    // 0x314c1c: 0x5460007a  bnel        $v1, $zero, . + 4 + (0x7A << 2)
label_314c20:
    if (ctx->pc == 0x314C20u) {
        ctx->pc = 0x314C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314C1Cu;
        // 0x314c20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314C24u;
        goto label_314c24;
    }
    ctx->pc = 0x314C1Cu;
    {
        const bool branch_taken_0x314c1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x314c1c) {
            ctx->pc = 0x314C20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x314C1Cu;
            // 0x314c20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x314E08u;
            goto label_314e08;
        }
    }
    ctx->pc = 0x314C24u;
label_314c24:
    // 0x314c24: 0x90420410  lbu         $v0, 0x410($v0)
    ctx->pc = 0x314c24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1040)));
label_314c28:
    // 0x314c28: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_314c2c:
    if (ctx->pc == 0x314C2Cu) {
        ctx->pc = 0x314C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314C28u;
        // 0x314c2c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314C30u;
        goto label_314c30;
    }
    ctx->pc = 0x314C28u;
    {
        const bool branch_taken_0x314c28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x314c28) {
            ctx->pc = 0x314C2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x314C28u;
            // 0x314c2c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x314C38u;
            goto label_314c38;
        }
    }
    ctx->pc = 0x314C30u;
label_314c30:
    // 0x314c30: 0x10000075  b           . + 4 + (0x75 << 2)
label_314c34:
    if (ctx->pc == 0x314C34u) {
        ctx->pc = 0x314C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314C30u;
        // 0x314c34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314C38u;
        goto label_314c38;
    }
    ctx->pc = 0x314C30u;
    {
        const bool branch_taken_0x314c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314C30u;
        // 0x314c34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314c30) {
            ctx->pc = 0x314E08u;
            goto label_314e08;
        }
    }
    ctx->pc = 0x314C38u;
label_314c38:
    // 0x314c38: 0xc059856  jal         func_166158
label_314c3c:
    if (ctx->pc == 0x314C3Cu) {
        ctx->pc = 0x314C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314C38u;
        // 0x314c3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314C40u;
        goto label_314c40;
    }
    ctx->pc = 0x314C38u;
    SET_GPR_U32(ctx, 31, 0x314C40u);
    ctx->pc = 0x314C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314C38u;
    // 0x314c3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166158u, 0x314C38u, 0x314C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314C40u;
label_314c40:
    // 0x314c40: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x314c40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_314c44:
    // 0x314c44: 0x2880a  movz        $s1, $zero, $v0
    ctx->pc = 0x314c44u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
label_314c48:
    // 0x314c48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x314c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_314c4c:
    // 0x314c4c: 0x1622005b  bne         $s1, $v0, . + 4 + (0x5B << 2)
label_314c50:
    if (ctx->pc == 0x314C50u) {
        ctx->pc = 0x314C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314C4Cu;
        // 0x314c50: 0xae000020  sw          $zero, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314C54u;
        goto label_314c54;
    }
    ctx->pc = 0x314C4Cu;
    {
        const bool branch_taken_0x314c4c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x314C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314C4Cu;
        // 0x314c50: 0xae000020  sw          $zero, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314c4c) {
            ctx->pc = 0x314DBCu;
            goto label_314dbc;
        }
    }
    ctx->pc = 0x314C54u;
label_314c54:
    // 0x314c54: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x314c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_314c58:
    // 0x314c58: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x314c58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_314c5c:
    // 0x314c5c: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x314c5cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_314c60:
    // 0x314c60: 0x3c13006f  lui         $s3, 0x6F
    ctx->pc = 0x314c60u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)111 << 16));
label_314c64:
    // 0x314c64: 0x24540048  addiu       $s4, $v0, 0x48
    ctx->pc = 0x314c64u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_314c68:
    // 0x314c68: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x314c68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_314c6c:
    // 0x314c6c: 0x0  nop
    ctx->pc = 0x314c6cu;
    // NOP
label_314c70:
    // 0x314c70: 0xc137826  jal         func_4DE098
label_314c74:
    if (ctx->pc == 0x314C74u) {
        ctx->pc = 0x314C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314C70u;
        // 0x314c74: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314C78u;
        goto label_314c78;
    }
    ctx->pc = 0x314C70u;
    SET_GPR_U32(ctx, 31, 0x314C78u);
    ctx->pc = 0x314C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314C70u;
    // 0x314c74: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x314C70u, 0x314C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314C78u;
label_314c78:
    // 0x314c78: 0xc0e409a  jal         func_390268
label_314c7c:
    if (ctx->pc == 0x314C7Cu) {
        ctx->pc = 0x314C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314C78u;
        // 0x314c7c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314C80u;
        goto label_314c80;
    }
    ctx->pc = 0x314C78u;
    SET_GPR_U32(ctx, 31, 0x314C80u);
    ctx->pc = 0x314C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314C78u;
    // 0x314c7c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x314C78u, 0x314C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314C80u;
label_314c80:
    // 0x314c80: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x314c80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_314c84:
    // 0x314c84: 0x52200040  beql        $s1, $zero, . + 4 + (0x40 << 2)
label_314c88:
    if (ctx->pc == 0x314C88u) {
        ctx->pc = 0x314C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314C84u;
        // 0x314c88: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314C8Cu;
        goto label_314c8c;
    }
    ctx->pc = 0x314C84u;
    {
        const bool branch_taken_0x314c84 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x314c84) {
            ctx->pc = 0x314C88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x314C84u;
            // 0x314c88: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x314D88u;
            goto label_314d88;
        }
    }
    ctx->pc = 0x314C8Cu;
label_314c8c:
    // 0x314c8c: 0x822201b0  lb          $v0, 0x1B0($s1)
    ctx->pc = 0x314c8cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
label_314c90:
    // 0x314c90: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x314c90u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_314c94:
    // 0x314c94: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x314c94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_314c98:
    // 0x314c98: 0x5055003b  beql        $v0, $s5, . + 4 + (0x3B << 2)
label_314c9c:
    if (ctx->pc == 0x314C9Cu) {
        ctx->pc = 0x314C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314C98u;
        // 0x314c9c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314CA0u;
        goto label_314ca0;
    }
    ctx->pc = 0x314C98u;
    {
        const bool branch_taken_0x314c98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        if (branch_taken_0x314c98) {
            ctx->pc = 0x314C9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x314C98u;
            // 0x314c9c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x314D88u;
            goto label_314d88;
        }
    }
    ctx->pc = 0x314CA0u;
label_314ca0:
    // 0x314ca0: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x314ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_314ca4:
    // 0x314ca4: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
label_314ca8:
    if (ctx->pc == 0x314CA8u) {
        ctx->pc = 0x314CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314CA4u;
        // 0x314ca8: 0x8e020028  lw          $v0, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314CACu;
        goto label_314cac;
    }
    ctx->pc = 0x314CA4u;
    {
        const bool branch_taken_0x314ca4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x314ca4) {
            ctx->pc = 0x314CA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x314CA4u;
            // 0x314ca8: 0x8e020028  lw          $v0, 0x28($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x314D18u;
            goto label_314d18;
        }
    }
    ctx->pc = 0x314CACu;
label_314cac:
    // 0x314cac: 0x2664b8a0  addiu       $a0, $s3, -0x4760
    ctx->pc = 0x314cacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294949024));
label_314cb0:
    // 0x314cb0: 0xc0cd4ee  jal         func_3353B8
label_314cb4:
    if (ctx->pc == 0x314CB4u) {
        ctx->pc = 0x314CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314CB0u;
        // 0x314cb4: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314CB8u;
        goto label_314cb8;
    }
    ctx->pc = 0x314CB0u;
    SET_GPR_U32(ctx, 31, 0x314CB8u);
    ctx->pc = 0x314CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314CB0u;
    // 0x314cb4: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x314CB0u, 0x314CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314CB8u;
label_314cb8:
    // 0x314cb8: 0x2c420033  sltiu       $v0, $v0, 0x33
    ctx->pc = 0x314cb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)51) ? 1 : 0);
label_314cbc:
    // 0x314cbc: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
label_314cc0:
    if (ctx->pc == 0x314CC0u) {
        ctx->pc = 0x314CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314CBCu;
        // 0x314cc0: 0x8e020028  lw          $v0, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314CC4u;
        goto label_314cc4;
    }
    ctx->pc = 0x314CBCu;
    {
        const bool branch_taken_0x314cbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x314cbc) {
            ctx->pc = 0x314CC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x314CBCu;
            // 0x314cc0: 0x8e020028  lw          $v0, 0x28($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x314D18u;
            goto label_314d18;
        }
    }
    ctx->pc = 0x314CC4u;
label_314cc4:
    // 0x314cc4: 0xc087502  jal         func_21D408
label_314cc8:
    if (ctx->pc == 0x314CC8u) {
        ctx->pc = 0x314CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314CC4u;
        // 0x314cc8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314CCCu;
        goto label_314ccc;
    }
    ctx->pc = 0x314CC4u;
    SET_GPR_U32(ctx, 31, 0x314CCCu);
    ctx->pc = 0x314CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314CC4u;
    // 0x314cc8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x314CC4u, 0x314CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314CCCu;
label_314ccc:
    // 0x314ccc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x314cccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_314cd0:
    // 0x314cd0: 0x8062002c  lb          $v0, 0x2C($v1)
    ctx->pc = 0x314cd0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 44)));
label_314cd4:
    // 0x314cd4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_314cd8:
    if (ctx->pc == 0x314CD8u) {
        ctx->pc = 0x314CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314CD4u;
        // 0x314cd8: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314CDCu;
        goto label_314cdc;
    }
    ctx->pc = 0x314CD4u;
    {
        const bool branch_taken_0x314cd4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x314CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314CD4u;
        // 0x314cd8: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314cd4) {
            ctx->pc = 0x314CE8u;
            goto label_314ce8;
        }
    }
    ctx->pc = 0x314CDCu;
label_314cdc:
    // 0x314cdc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x314cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_314ce0:
    // 0x314ce0: 0x10000002  b           . + 4 + (0x2 << 2)
label_314ce4:
    if (ctx->pc == 0x314CE4u) {
        ctx->pc = 0x314CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314CE0u;
        // 0x314ce4: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314CE8u;
        goto label_314ce8;
    }
    ctx->pc = 0x314CE0u;
    {
        const bool branch_taken_0x314ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314CE0u;
        // 0x314ce4: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314ce0) {
            ctx->pc = 0x314CECu;
            goto label_314cec;
        }
    }
    ctx->pc = 0x314CE8u;
label_314ce8:
    // 0x314ce8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x314ce8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_314cec:
    // 0x314cec: 0x50a00026  beql        $a1, $zero, . + 4 + (0x26 << 2)
label_314cf0:
    if (ctx->pc == 0x314CF0u) {
        ctx->pc = 0x314CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314CECu;
        // 0x314cf0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314CF4u;
        goto label_314cf4;
    }
    ctx->pc = 0x314CECu;
    {
        const bool branch_taken_0x314cec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x314cec) {
            ctx->pc = 0x314CF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x314CECu;
            // 0x314cf0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x314D88u;
            goto label_314d88;
        }
    }
    ctx->pc = 0x314CF4u;
label_314cf4:
    // 0x314cf4: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x314cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_314cf8:
    // 0x314cf8: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x314cf8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_314cfc:
    // 0x314cfc: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x314cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_314d00:
    // 0x314d00: 0x40f809  jalr        $v0
label_314d04:
    if (ctx->pc == 0x314D04u) {
        ctx->pc = 0x314D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314D00u;
        // 0x314d04: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314D08u;
        goto label_314d08;
    }
    ctx->pc = 0x314D00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x314D08u);
        ctx->pc = 0x314D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314D00u;
        // 0x314d04: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x314D00u, 0x314D08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x314D08u;
label_314d08:
    // 0x314d08: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
label_314d0c:
    if (ctx->pc == 0x314D0Cu) {
        ctx->pc = 0x314D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314D08u;
        // 0x314d0c: 0xae110024  sw          $s1, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314D10u;
        goto label_314d10;
    }
    ctx->pc = 0x314D08u;
    {
        const bool branch_taken_0x314d08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x314d08) {
            ctx->pc = 0x314D0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x314D08u;
            // 0x314d0c: 0xae110024  sw          $s1, 0x24($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x314D84u;
            goto label_314d84;
        }
    }
    ctx->pc = 0x314D10u;
label_314d10:
    // 0x314d10: 0x1000001d  b           . + 4 + (0x1D << 2)
label_314d14:
    if (ctx->pc == 0x314D14u) {
        ctx->pc = 0x314D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314D10u;
        // 0x314d14: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314D18u;
        goto label_314d18;
    }
    ctx->pc = 0x314D10u;
    {
        const bool branch_taken_0x314d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314D10u;
        // 0x314d14: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314d10) {
            ctx->pc = 0x314D88u;
            goto label_314d88;
        }
    }
    ctx->pc = 0x314D18u;
label_314d18:
    // 0x314d18: 0x5440001b  bnel        $v0, $zero, . + 4 + (0x1B << 2)
label_314d1c:
    if (ctx->pc == 0x314D1Cu) {
        ctx->pc = 0x314D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314D18u;
        // 0x314d1c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314D20u;
        goto label_314d20;
    }
    ctx->pc = 0x314D18u;
    {
        const bool branch_taken_0x314d18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x314d18) {
            ctx->pc = 0x314D1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x314D18u;
            // 0x314d1c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x314D88u;
            goto label_314d88;
        }
    }
    ctx->pc = 0x314D20u;
label_314d20:
    // 0x314d20: 0x2664b8a0  addiu       $a0, $s3, -0x4760
    ctx->pc = 0x314d20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294949024));
label_314d24:
    // 0x314d24: 0xc0cd4ee  jal         func_3353B8
label_314d28:
    if (ctx->pc == 0x314D28u) {
        ctx->pc = 0x314D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314D24u;
        // 0x314d28: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314D2Cu;
        goto label_314d2c;
    }
    ctx->pc = 0x314D24u;
    SET_GPR_U32(ctx, 31, 0x314D2Cu);
    ctx->pc = 0x314D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314D24u;
    // 0x314d28: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x314D24u, 0x314D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314D2Cu;
label_314d2c:
    // 0x314d2c: 0x2c420033  sltiu       $v0, $v0, 0x33
    ctx->pc = 0x314d2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)51) ? 1 : 0);
label_314d30:
    // 0x314d30: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
label_314d34:
    if (ctx->pc == 0x314D34u) {
        ctx->pc = 0x314D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314D30u;
        // 0x314d34: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314D38u;
        goto label_314d38;
    }
    ctx->pc = 0x314D30u;
    {
        const bool branch_taken_0x314d30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x314d30) {
            ctx->pc = 0x314D34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x314D30u;
            // 0x314d34: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x314D88u;
            goto label_314d88;
        }
    }
    ctx->pc = 0x314D38u;
label_314d38:
    // 0x314d38: 0xc087502  jal         func_21D408
label_314d3c:
    if (ctx->pc == 0x314D3Cu) {
        ctx->pc = 0x314D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314D38u;
        // 0x314d3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314D40u;
        goto label_314d40;
    }
    ctx->pc = 0x314D38u;
    SET_GPR_U32(ctx, 31, 0x314D40u);
    ctx->pc = 0x314D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314D38u;
    // 0x314d3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x314D38u, 0x314D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314D40u;
label_314d40:
    // 0x314d40: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x314d40u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_314d44:
    // 0x314d44: 0x8062002c  lb          $v0, 0x2C($v1)
    ctx->pc = 0x314d44u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 44)));
label_314d48:
    // 0x314d48: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_314d4c:
    if (ctx->pc == 0x314D4Cu) {
        ctx->pc = 0x314D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314D48u;
        // 0x314d4c: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314D50u;
        goto label_314d50;
    }
    ctx->pc = 0x314D48u;
    {
        const bool branch_taken_0x314d48 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x314D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314D48u;
        // 0x314d4c: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314d48) {
            ctx->pc = 0x314D5Cu;
            goto label_314d5c;
        }
    }
    ctx->pc = 0x314D50u;
label_314d50:
    // 0x314d50: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x314d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_314d54:
    // 0x314d54: 0x10000002  b           . + 4 + (0x2 << 2)
label_314d58:
    if (ctx->pc == 0x314D58u) {
        ctx->pc = 0x314D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314D54u;
        // 0x314d58: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314D5Cu;
        goto label_314d5c;
    }
    ctx->pc = 0x314D54u;
    {
        const bool branch_taken_0x314d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314D54u;
        // 0x314d58: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314d54) {
            ctx->pc = 0x314D60u;
            goto label_314d60;
        }
    }
    ctx->pc = 0x314D5Cu;
label_314d5c:
    // 0x314d5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x314d5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_314d60:
    // 0x314d60: 0x50a00009  beql        $a1, $zero, . + 4 + (0x9 << 2)
label_314d64:
    if (ctx->pc == 0x314D64u) {
        ctx->pc = 0x314D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314D60u;
        // 0x314d64: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314D68u;
        goto label_314d68;
    }
    ctx->pc = 0x314D60u;
    {
        const bool branch_taken_0x314d60 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x314d60) {
            ctx->pc = 0x314D64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x314D60u;
            // 0x314d64: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x314D88u;
            goto label_314d88;
        }
    }
    ctx->pc = 0x314D68u;
label_314d68:
    // 0x314d68: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x314d68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_314d6c:
    // 0x314d6c: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x314d6cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_314d70:
    // 0x314d70: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x314d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_314d74:
    // 0x314d74: 0x40f809  jalr        $v0
label_314d78:
    if (ctx->pc == 0x314D78u) {
        ctx->pc = 0x314D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314D74u;
        // 0x314d78: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314D7Cu;
        goto label_314d7c;
    }
    ctx->pc = 0x314D74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x314D7Cu);
        ctx->pc = 0x314D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314D74u;
        // 0x314d78: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x314D74u, 0x314D7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x314D7Cu;
label_314d7c:
    // 0x314d7c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_314d80:
    if (ctx->pc == 0x314D80u) {
        ctx->pc = 0x314D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314D7Cu;
        // 0x314d80: 0xae110028  sw          $s1, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314D84u;
        goto label_314d84;
    }
    ctx->pc = 0x314D7Cu;
    {
        const bool branch_taken_0x314d7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x314d7c) {
            ctx->pc = 0x314D80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x314D7Cu;
            // 0x314d80: 0xae110028  sw          $s1, 0x28($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x314D84u;
            goto label_314d84;
        }
    }
    ctx->pc = 0x314D84u;
label_314d84:
    // 0x314d84: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x314d84u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_314d88:
    // 0x314d88: 0x2e420010  sltiu       $v0, $s2, 0x10
    ctx->pc = 0x314d88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_314d8c:
    // 0x314d8c: 0x5440ffb8  bnel        $v0, $zero, . + 4 + (-0x48 << 2)
label_314d90:
    if (ctx->pc == 0x314D90u) {
        ctx->pc = 0x314D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314D8Cu;
        // 0x314d90: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314D94u;
        goto label_314d94;
    }
    ctx->pc = 0x314D8Cu;
    {
        const bool branch_taken_0x314d8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x314d8c) {
            ctx->pc = 0x314D90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x314D8Cu;
            // 0x314d90: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x314C70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_314c70;
        }
    }
    ctx->pc = 0x314D94u;
label_314d94:
    // 0x314d94: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x314d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_314d98:
    // 0x314d98: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_314d9c:
    if (ctx->pc == 0x314D9Cu) {
        ctx->pc = 0x314D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314D98u;
        // 0x314d9c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314DA0u;
        goto label_314da0;
    }
    ctx->pc = 0x314D98u;
    {
        const bool branch_taken_0x314d98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x314D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314D98u;
        // 0x314d9c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314d98) {
            ctx->pc = 0x314DECu;
            goto label_314dec;
        }
    }
    ctx->pc = 0x314DA0u;
label_314da0:
    // 0x314da0: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x314da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_314da4:
    // 0x314da4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_314da8:
    if (ctx->pc == 0x314DA8u) {
        ctx->pc = 0x314DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314DA4u;
        // 0x314da8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314DACu;
        goto label_314dac;
    }
    ctx->pc = 0x314DA4u;
    {
        const bool branch_taken_0x314da4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x314DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314DA4u;
        // 0x314da8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314da4) {
            ctx->pc = 0x314DE8u;
            goto label_314de8;
        }
    }
    ctx->pc = 0x314DACu;
label_314dac:
    // 0x314dac: 0xc0c52f4  jal         func_314BD0
label_314db0:
    if (ctx->pc == 0x314DB0u) {
        ctx->pc = 0x314DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314DACu;
        // 0x314db0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314DB4u;
        goto label_314db4;
    }
    ctx->pc = 0x314DACu;
    SET_GPR_U32(ctx, 31, 0x314DB4u);
    ctx->pc = 0x314DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314DACu;
    // 0x314db0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x314BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314BD0u, 0x314DACu, 0x314DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314DB4u;
label_314db4:
    // 0x314db4: 0x10000014  b           . + 4 + (0x14 << 2)
label_314db8:
    if (ctx->pc == 0x314DB8u) {
        ctx->pc = 0x314DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314DB4u;
        // 0x314db8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314DBCu;
        goto label_314dbc;
    }
    ctx->pc = 0x314DB4u;
    {
        const bool branch_taken_0x314db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314DB4u;
        // 0x314db8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314db4) {
            ctx->pc = 0x314E08u;
            goto label_314e08;
        }
    }
    ctx->pc = 0x314DBCu;
label_314dbc:
    // 0x314dbc: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x314dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_314dc0:
    // 0x314dc0: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_314dc4:
    if (ctx->pc == 0x314DC4u) {
        ctx->pc = 0x314DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314DC0u;
        // 0x314dc4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314DC8u;
        goto label_314dc8;
    }
    ctx->pc = 0x314DC0u;
    {
        const bool branch_taken_0x314dc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x314DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314DC0u;
        // 0x314dc4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314dc0) {
            ctx->pc = 0x314DECu;
            goto label_314dec;
        }
    }
    ctx->pc = 0x314DC8u;
label_314dc8:
    // 0x314dc8: 0xc087b0e  jal         func_21EC38
label_314dcc:
    if (ctx->pc == 0x314DCCu) {
        ctx->pc = 0x314DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314DC8u;
        // 0x314dcc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314DD0u;
        goto label_314dd0;
    }
    ctx->pc = 0x314DC8u;
    SET_GPR_U32(ctx, 31, 0x314DD0u);
    ctx->pc = 0x314DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314DC8u;
    // 0x314dcc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21EC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21EC38u, 0x314DC8u, 0x314DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314DD0u;
label_314dd0:
    // 0x314dd0: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x314dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_314dd4:
    // 0x314dd4: 0xc087b0e  jal         func_21EC38
label_314dd8:
    if (ctx->pc == 0x314DD8u) {
        ctx->pc = 0x314DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314DD4u;
        // 0x314dd8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314DDCu;
        goto label_314ddc;
    }
    ctx->pc = 0x314DD4u;
    SET_GPR_U32(ctx, 31, 0x314DDCu);
    ctx->pc = 0x314DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314DD4u;
    // 0x314dd8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21EC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21EC38u, 0x314DD4u, 0x314DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314DDCu;
label_314ddc:
    // 0x314ddc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x314ddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_314de0:
    // 0x314de0: 0xc0c52f4  jal         func_314BD0
label_314de4:
    if (ctx->pc == 0x314DE4u) {
        ctx->pc = 0x314DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314DE0u;
        // 0x314de4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314DE8u;
        goto label_314de8;
    }
    ctx->pc = 0x314DE0u;
    SET_GPR_U32(ctx, 31, 0x314DE8u);
    ctx->pc = 0x314DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314DE0u;
    // 0x314de4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x314BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314BD0u, 0x314DE0u, 0x314DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314DE8u;
label_314de8:
    // 0x314de8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x314de8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_314dec:
    // 0x314dec: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x314decu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
label_314df0:
    // 0x314df0: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x314df0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_314df4:
    // 0x314df4: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x314df4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
label_314df8:
    // 0x314df8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x314df8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_314dfc:
    // 0x314dfc: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x314dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_314e00:
    // 0x314e00: 0x24630bb8  addiu       $v1, $v1, 0xBB8
    ctx->pc = 0x314e00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3000));
label_314e04:
    // 0x314e04: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x314e04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
label_314e08:
    // 0x314e08: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x314e08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_314e0c:
    // 0x314e0c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x314e0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_314e10:
    // 0x314e10: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x314e10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_314e14:
    // 0x314e14: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x314e14u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_314e18:
    // 0x314e18: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x314e18u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_314e1c:
    // 0x314e1c: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x314e1cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_314e20:
    // 0x314e20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x314e20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_314e24:
    // 0x314e24: 0x3e00008  jr          $ra
label_314e28:
    if (ctx->pc == 0x314E28u) {
        ctx->pc = 0x314E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314E24u;
        // 0x314e28: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314E2Cu;
        goto label_314e2c;
    }
    ctx->pc = 0x314E24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x314E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314E24u;
        // 0x314e28: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x314E24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x314E2Cu;
label_314e2c:
    // 0x314e2c: 0x0  nop
    ctx->pc = 0x314e2cu;
    // NOP
    ctx->pc = 0x314e30u;
}
