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

// Function: sub_002B0C88
// Address: 0x2b0c88 - 0x2b0ed8
void sub_002B0C88_0x2b0c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B0C88_0x2b0c88");
#endif

    switch (ctx->pc) {
        case 0x2b0c88u: goto label_2b0c88;
        case 0x2b0c8cu: goto label_2b0c8c;
        case 0x2b0c90u: goto label_2b0c90;
        case 0x2b0c94u: goto label_2b0c94;
        case 0x2b0c98u: goto label_2b0c98;
        case 0x2b0c9cu: goto label_2b0c9c;
        case 0x2b0ca0u: goto label_2b0ca0;
        case 0x2b0ca4u: goto label_2b0ca4;
        case 0x2b0ca8u: goto label_2b0ca8;
        case 0x2b0cacu: goto label_2b0cac;
        case 0x2b0cb0u: goto label_2b0cb0;
        case 0x2b0cb4u: goto label_2b0cb4;
        case 0x2b0cb8u: goto label_2b0cb8;
        case 0x2b0cbcu: goto label_2b0cbc;
        case 0x2b0cc0u: goto label_2b0cc0;
        case 0x2b0cc4u: goto label_2b0cc4;
        case 0x2b0cc8u: goto label_2b0cc8;
        case 0x2b0cccu: goto label_2b0ccc;
        case 0x2b0cd0u: goto label_2b0cd0;
        case 0x2b0cd4u: goto label_2b0cd4;
        case 0x2b0cd8u: goto label_2b0cd8;
        case 0x2b0cdcu: goto label_2b0cdc;
        case 0x2b0ce0u: goto label_2b0ce0;
        case 0x2b0ce4u: goto label_2b0ce4;
        case 0x2b0ce8u: goto label_2b0ce8;
        case 0x2b0cecu: goto label_2b0cec;
        case 0x2b0cf0u: goto label_2b0cf0;
        case 0x2b0cf4u: goto label_2b0cf4;
        case 0x2b0cf8u: goto label_2b0cf8;
        case 0x2b0cfcu: goto label_2b0cfc;
        case 0x2b0d00u: goto label_2b0d00;
        case 0x2b0d04u: goto label_2b0d04;
        case 0x2b0d08u: goto label_2b0d08;
        case 0x2b0d0cu: goto label_2b0d0c;
        case 0x2b0d10u: goto label_2b0d10;
        case 0x2b0d14u: goto label_2b0d14;
        case 0x2b0d18u: goto label_2b0d18;
        case 0x2b0d1cu: goto label_2b0d1c;
        case 0x2b0d20u: goto label_2b0d20;
        case 0x2b0d24u: goto label_2b0d24;
        case 0x2b0d28u: goto label_2b0d28;
        case 0x2b0d2cu: goto label_2b0d2c;
        case 0x2b0d30u: goto label_2b0d30;
        case 0x2b0d34u: goto label_2b0d34;
        case 0x2b0d38u: goto label_2b0d38;
        case 0x2b0d3cu: goto label_2b0d3c;
        case 0x2b0d40u: goto label_2b0d40;
        case 0x2b0d44u: goto label_2b0d44;
        case 0x2b0d48u: goto label_2b0d48;
        case 0x2b0d4cu: goto label_2b0d4c;
        case 0x2b0d50u: goto label_2b0d50;
        case 0x2b0d54u: goto label_2b0d54;
        case 0x2b0d58u: goto label_2b0d58;
        case 0x2b0d5cu: goto label_2b0d5c;
        case 0x2b0d60u: goto label_2b0d60;
        case 0x2b0d64u: goto label_2b0d64;
        case 0x2b0d68u: goto label_2b0d68;
        case 0x2b0d6cu: goto label_2b0d6c;
        case 0x2b0d70u: goto label_2b0d70;
        case 0x2b0d74u: goto label_2b0d74;
        case 0x2b0d78u: goto label_2b0d78;
        case 0x2b0d7cu: goto label_2b0d7c;
        case 0x2b0d80u: goto label_2b0d80;
        case 0x2b0d84u: goto label_2b0d84;
        case 0x2b0d88u: goto label_2b0d88;
        case 0x2b0d8cu: goto label_2b0d8c;
        case 0x2b0d90u: goto label_2b0d90;
        case 0x2b0d94u: goto label_2b0d94;
        case 0x2b0d98u: goto label_2b0d98;
        case 0x2b0d9cu: goto label_2b0d9c;
        case 0x2b0da0u: goto label_2b0da0;
        case 0x2b0da4u: goto label_2b0da4;
        case 0x2b0da8u: goto label_2b0da8;
        case 0x2b0dacu: goto label_2b0dac;
        case 0x2b0db0u: goto label_2b0db0;
        case 0x2b0db4u: goto label_2b0db4;
        case 0x2b0db8u: goto label_2b0db8;
        case 0x2b0dbcu: goto label_2b0dbc;
        case 0x2b0dc0u: goto label_2b0dc0;
        case 0x2b0dc4u: goto label_2b0dc4;
        case 0x2b0dc8u: goto label_2b0dc8;
        case 0x2b0dccu: goto label_2b0dcc;
        case 0x2b0dd0u: goto label_2b0dd0;
        case 0x2b0dd4u: goto label_2b0dd4;
        case 0x2b0dd8u: goto label_2b0dd8;
        case 0x2b0ddcu: goto label_2b0ddc;
        case 0x2b0de0u: goto label_2b0de0;
        case 0x2b0de4u: goto label_2b0de4;
        case 0x2b0de8u: goto label_2b0de8;
        case 0x2b0decu: goto label_2b0dec;
        case 0x2b0df0u: goto label_2b0df0;
        case 0x2b0df4u: goto label_2b0df4;
        case 0x2b0df8u: goto label_2b0df8;
        case 0x2b0dfcu: goto label_2b0dfc;
        case 0x2b0e00u: goto label_2b0e00;
        case 0x2b0e04u: goto label_2b0e04;
        case 0x2b0e08u: goto label_2b0e08;
        case 0x2b0e0cu: goto label_2b0e0c;
        case 0x2b0e10u: goto label_2b0e10;
        case 0x2b0e14u: goto label_2b0e14;
        case 0x2b0e18u: goto label_2b0e18;
        case 0x2b0e1cu: goto label_2b0e1c;
        case 0x2b0e20u: goto label_2b0e20;
        case 0x2b0e24u: goto label_2b0e24;
        case 0x2b0e28u: goto label_2b0e28;
        case 0x2b0e2cu: goto label_2b0e2c;
        case 0x2b0e30u: goto label_2b0e30;
        case 0x2b0e34u: goto label_2b0e34;
        case 0x2b0e38u: goto label_2b0e38;
        case 0x2b0e3cu: goto label_2b0e3c;
        case 0x2b0e40u: goto label_2b0e40;
        case 0x2b0e44u: goto label_2b0e44;
        case 0x2b0e48u: goto label_2b0e48;
        case 0x2b0e4cu: goto label_2b0e4c;
        case 0x2b0e50u: goto label_2b0e50;
        case 0x2b0e54u: goto label_2b0e54;
        case 0x2b0e58u: goto label_2b0e58;
        case 0x2b0e5cu: goto label_2b0e5c;
        case 0x2b0e60u: goto label_2b0e60;
        case 0x2b0e64u: goto label_2b0e64;
        case 0x2b0e68u: goto label_2b0e68;
        case 0x2b0e6cu: goto label_2b0e6c;
        case 0x2b0e70u: goto label_2b0e70;
        case 0x2b0e74u: goto label_2b0e74;
        case 0x2b0e78u: goto label_2b0e78;
        case 0x2b0e7cu: goto label_2b0e7c;
        case 0x2b0e80u: goto label_2b0e80;
        case 0x2b0e84u: goto label_2b0e84;
        case 0x2b0e88u: goto label_2b0e88;
        case 0x2b0e8cu: goto label_2b0e8c;
        case 0x2b0e90u: goto label_2b0e90;
        case 0x2b0e94u: goto label_2b0e94;
        case 0x2b0e98u: goto label_2b0e98;
        case 0x2b0e9cu: goto label_2b0e9c;
        case 0x2b0ea0u: goto label_2b0ea0;
        case 0x2b0ea4u: goto label_2b0ea4;
        case 0x2b0ea8u: goto label_2b0ea8;
        case 0x2b0eacu: goto label_2b0eac;
        case 0x2b0eb0u: goto label_2b0eb0;
        case 0x2b0eb4u: goto label_2b0eb4;
        case 0x2b0eb8u: goto label_2b0eb8;
        case 0x2b0ebcu: goto label_2b0ebc;
        case 0x2b0ec0u: goto label_2b0ec0;
        case 0x2b0ec4u: goto label_2b0ec4;
        case 0x2b0ec8u: goto label_2b0ec8;
        case 0x2b0eccu: goto label_2b0ecc;
        case 0x2b0ed0u: goto label_2b0ed0;
        case 0x2b0ed4u: goto label_2b0ed4;
        default: break;
    }

    ctx->pc = 0x2b0c88u;

label_2b0c88:
    // 0x2b0c88: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x2b0c88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_2b0c8c:
    // 0x2b0c8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b0c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b0c90:
    // 0x2b0c90: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x2b0c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
label_2b0c94:
    // 0x2b0c94: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x2b0c94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
label_2b0c98:
    // 0x2b0c98: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x2b0c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
label_2b0c9c:
    // 0x2b0c9c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2b0c9cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b0ca0:
    // 0x2b0ca0: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x2b0ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
label_2b0ca4:
    // 0x2b0ca4: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x2b0ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
label_2b0ca8:
    // 0x2b0ca8: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x2b0ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_2b0cac:
    // 0x2b0cac: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2b0cacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_2b0cb0:
    // 0x2b0cb0: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x2b0cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
label_2b0cb4:
    // 0x2b0cb4: 0x92700055  lbu         $s0, 0x55($s3)
    ctx->pc = 0x2b0cb4u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 85)));
label_2b0cb8:
    // 0x2b0cb8: 0x1602007c  bne         $s0, $v0, . + 4 + (0x7C << 2)
label_2b0cbc:
    if (ctx->pc == 0x2B0CBCu) {
        ctx->pc = 0x2B0CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0CB8u;
        // 0x2b0cbc: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0CC0u;
        goto label_2b0cc0;
    }
    ctx->pc = 0x2B0CB8u;
    {
        const bool branch_taken_0x2b0cb8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B0CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0CB8u;
        // 0x2b0cbc: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0cb8) {
            ctx->pc = 0x2B0EACu;
            goto label_2b0eac;
        }
    }
    ctx->pc = 0x2B0CC0u;
label_2b0cc0:
    // 0x2b0cc0: 0x8e510000  lw          $s1, 0x0($s2)
    ctx->pc = 0x2b0cc0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2b0cc4:
    // 0x2b0cc4: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
label_2b0cc8:
    if (ctx->pc == 0x2B0CC8u) {
        ctx->pc = 0x2B0CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0CC4u;
        // 0x2b0cc8: 0x8e460004  lw          $a2, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0CCCu;
        goto label_2b0ccc;
    }
    ctx->pc = 0x2B0CC4u;
    {
        const bool branch_taken_0x2b0cc4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b0cc4) {
            ctx->pc = 0x2B0CC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B0CC4u;
            // 0x2b0cc8: 0x8e460004  lw          $a2, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B0CECu;
            goto label_2b0cec;
        }
    }
    ctx->pc = 0x2B0CCCu;
label_2b0ccc:
    // 0x2b0ccc: 0xc087502  jal         func_21D408
label_2b0cd0:
    if (ctx->pc == 0x2B0CD0u) {
        ctx->pc = 0x2B0CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0CCCu;
        // 0x2b0cd0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0CD4u;
        goto label_2b0cd4;
    }
    ctx->pc = 0x2B0CCCu;
    SET_GPR_U32(ctx, 31, 0x2B0CD4u);
    ctx->pc = 0x2B0CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0CCCu;
    // 0x2b0cd0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2B0CCCu, 0x2B0CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0CD4u;
label_2b0cd4:
    // 0x2b0cd4: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2b0cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2b0cd8:
    // 0x2b0cd8: 0xc0a408c  jal         func_290230
label_2b0cdc:
    if (ctx->pc == 0x2B0CDCu) {
        ctx->pc = 0x2B0CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0CD8u;
        // 0x2b0cdc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0CE0u;
        goto label_2b0ce0;
    }
    ctx->pc = 0x2B0CD8u;
    SET_GPR_U32(ctx, 31, 0x2B0CE0u);
    ctx->pc = 0x2B0CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0CD8u;
    // 0x2b0cdc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290230u, 0x2B0CD8u, 0x2B0CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0CE0u;
label_2b0ce0:
    // 0x2b0ce0: 0x10500073  beq         $v0, $s0, . + 4 + (0x73 << 2)
label_2b0ce4:
    if (ctx->pc == 0x2B0CE4u) {
        ctx->pc = 0x2B0CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0CE0u;
        // 0x2b0ce4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0CE8u;
        goto label_2b0ce8;
    }
    ctx->pc = 0x2B0CE0u;
    {
        const bool branch_taken_0x2b0ce0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x2B0CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0CE0u;
        // 0x2b0ce4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0ce0) {
            ctx->pc = 0x2B0EB0u;
            goto label_2b0eb0;
        }
    }
    ctx->pc = 0x2B0CE8u;
label_2b0ce8:
    // 0x2b0ce8: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x2b0ce8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2b0cec:
    // 0x2b0cec: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2b0cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2b0cf0:
    // 0x2b0cf0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2b0cf0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b0cf4:
    // 0x2b0cf4: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x2b0cf4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b0cf8:
    // 0x2b0cf8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2b0cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2b0cfc:
    // 0x2b0cfc: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x2b0cfcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_2b0d00:
    // 0x2b0d00: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x2b0d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_2b0d04:
    // 0x2b0d04: 0x60f809  jalr        $v1
label_2b0d08:
    if (ctx->pc == 0x2B0D08u) {
        ctx->pc = 0x2B0D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0D04u;
        // 0x2b0d08: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0D0Cu;
        goto label_2b0d0c;
    }
    ctx->pc = 0x2B0D04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2B0D0Cu);
        ctx->pc = 0x2B0D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0D04u;
        // 0x2b0d08: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B0D04u, 0x2B0D0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B0D0Cu;
label_2b0d0c:
    // 0x2b0d0c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x2b0d0cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2b0d10:
    // 0x2b0d10: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x2b0d10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_2b0d14:
    // 0x2b0d14: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2b0d14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2b0d18:
    // 0x2b0d18: 0x24704b00  addiu       $s0, $v1, 0x4B00
    ctx->pc = 0x2b0d18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_2b0d1c:
    // 0x2b0d1c: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x2b0d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_2b0d20:
    // 0x2b0d20: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2b0d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2b0d24:
    // 0x2b0d24: 0x84620092  lh          $v0, 0x92($v1)
    ctx->pc = 0x2b0d24u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 146)));
label_2b0d28:
    // 0x2b0d28: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2b0d28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2b0d2c:
    // 0x2b0d2c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2b0d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_2b0d30:
    // 0x2b0d30: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2b0d30u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2b0d34:
    // 0x2b0d34: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_2b0d38:
    if (ctx->pc == 0x2B0D38u) {
        ctx->pc = 0x2B0D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0D34u;
        // 0x2b0d38: 0x7fa30030  sq          $v1, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0D3Cu;
        goto label_2b0d3c;
    }
    ctx->pc = 0x2B0D34u;
    {
        const bool branch_taken_0x2b0d34 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0D34u;
        // 0x2b0d38: 0x7fa30030  sq          $v1, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0d34) {
            ctx->pc = 0x2B0D50u;
            goto label_2b0d50;
        }
    }
    ctx->pc = 0x2B0D3Cu;
label_2b0d3c:
    // 0x2b0d3c: 0x86220092  lh          $v0, 0x92($s1)
    ctx->pc = 0x2b0d3cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
label_2b0d40:
    // 0x2b0d40: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2b0d40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2b0d44:
    // 0x2b0d44: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2b0d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_2b0d48:
    // 0x2b0d48: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2b0d48u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2b0d4c:
    // 0x2b0d4c: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x2b0d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_2b0d50:
    // 0x2b0d50: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x2b0d50u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2b0d54:
    // 0x2b0d54: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2b0d54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2b0d58:
    // 0x2b0d58: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x2b0d58u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2b0d5c:
    // 0x2b0d5c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2b0d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2b0d60:
    // 0x2b0d60: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2b0d60u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2b0d64:
    // 0x2b0d64: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2b0d64u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2b0d68:
    // 0x2b0d68: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2b0d68u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2b0d6c:
    // 0x2b0d6c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2b0d6cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_2b0d70:
    // 0x2b0d70: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x2b0d70u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_2b0d74:
    // 0x2b0d74: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2b0d74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2b0d78:
    // 0x2b0d78: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x2b0d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_2b0d7c:
    // 0x2b0d7c: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x2b0d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
label_2b0d80:
    // 0x2b0d80: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x2b0d80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_2b0d84:
    // 0x2b0d84: 0x7ba30040  lq          $v1, 0x40($sp)
    ctx->pc = 0x2b0d84u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2b0d88:
    // 0x2b0d88: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2b0d88u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2b0d8c:
    // 0x2b0d8c: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x2b0d8cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2b0d90:
    // 0x2b0d90: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x2b0d90u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2b0d94:
    // 0x2b0d94: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x2b0d94u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2b0d98:
    // 0x2b0d98: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x2b0d98u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_2b0d9c:
    // 0x2b0d9c: 0x4a0003bf  vwaitq
    ctx->pc = 0x2b0d9cu;
    // VWAITQ (Q already resolved in this runtime)
label_2b0da0:
    // 0x2b0da0: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x2b0da0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2b0da4:
    // 0x2b0da4: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x2b0da4u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_2b0da8:
    // 0x2b0da8: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x2b0da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_2b0dac:
    // 0x2b0dac: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x2b0dacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
label_2b0db0:
    // 0x2b0db0: 0xc094ab8  jal         func_252AE0
label_2b0db4:
    if (ctx->pc == 0x2B0DB4u) {
        ctx->pc = 0x2B0DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0DB0u;
        // 0x2b0db4: 0x7fa30050  sq          $v1, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0DB8u;
        goto label_2b0db8;
    }
    ctx->pc = 0x2B0DB0u;
    SET_GPR_U32(ctx, 31, 0x2B0DB8u);
    ctx->pc = 0x2B0DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0DB0u;
    // 0x2b0db4: 0x7fa30050  sq          $v1, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252AE0u, 0x2B0DB0u, 0x2B0DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0DB8u;
label_2b0db8:
    // 0x2b0db8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_2b0dbc:
    if (ctx->pc == 0x2B0DBCu) {
        ctx->pc = 0x2B0DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0DB8u;
        // 0x2b0dbc: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0DC0u;
        goto label_2b0dc0;
    }
    ctx->pc = 0x2B0DB8u;
    {
        const bool branch_taken_0x2b0db8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0DB8u;
        // 0x2b0dbc: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0db8) {
            ctx->pc = 0x2B0DF0u;
            goto label_2b0df0;
        }
    }
    ctx->pc = 0x2B0DC0u;
label_2b0dc0:
    // 0x2b0dc0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2b0dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2b0dc4:
    // 0x2b0dc4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b0dc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b0dc8:
    // 0x2b0dc8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b0dc8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b0dcc:
    // 0x2b0dcc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2b0dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2b0dd0:
    // 0x2b0dd0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2b0dd0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b0dd4:
    // 0x2b0dd4: 0x3409ffff  ori         $t1, $zero, 0xFFFF
    ctx->pc = 0x2b0dd4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_2b0dd8:
    // 0x2b0dd8: 0x84440092  lh          $a0, 0x92($v0)
    ctx->pc = 0x2b0dd8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 146)));
label_2b0ddc:
    // 0x2b0ddc: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2b0ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2b0de0:
    // 0x2b0de0: 0xc09381e  jal         func_24E078
label_2b0de4:
    if (ctx->pc == 0x2B0DE4u) {
        ctx->pc = 0x2B0DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0DE0u;
        // 0x2b0de4: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0DE8u;
        goto label_2b0de8;
    }
    ctx->pc = 0x2B0DE0u;
    SET_GPR_U32(ctx, 31, 0x2B0DE8u);
    ctx->pc = 0x2B0DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0DE0u;
    // 0x2b0de4: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24E078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24E078u, 0x2B0DE0u, 0x2B0DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0DE8u;
label_2b0de8:
    // 0x2b0de8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2b0de8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2b0dec:
    // 0x2b0dec: 0x2a00a  movz        $s4, $zero, $v0
    ctx->pc = 0x2b0decu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 0));
label_2b0df0:
    // 0x2b0df0: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x2b0df0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2b0df4:
    // 0x2b0df4: 0xc0e2612  jal         func_389848
label_2b0df8:
    if (ctx->pc == 0x2B0DF8u) {
        ctx->pc = 0x2B0DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0DF4u;
        // 0x2b0df8: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0DFCu;
        goto label_2b0dfc;
    }
    ctx->pc = 0x2B0DF4u;
    SET_GPR_U32(ctx, 31, 0x2B0DFCu);
    ctx->pc = 0x2B0DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0DF4u;
    // 0x2b0df8: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389848u, 0x2B0DF4u, 0x2B0DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0DFCu;
label_2b0dfc:
    // 0x2b0dfc: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x2b0dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_2b0e00:
    // 0x2b0e00: 0xc0e2612  jal         func_389848
label_2b0e04:
    if (ctx->pc == 0x2B0E04u) {
        ctx->pc = 0x2B0E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0E00u;
        // 0x2b0e04: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0E08u;
        goto label_2b0e08;
    }
    ctx->pc = 0x2B0E00u;
    SET_GPR_U32(ctx, 31, 0x2B0E08u);
    ctx->pc = 0x2B0E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0E00u;
    // 0x2b0e04: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389848u, 0x2B0E00u, 0x2B0E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0E08u;
label_2b0e08:
    // 0x2b0e08: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_2b0e0c:
    if (ctx->pc == 0x2B0E0Cu) {
        ctx->pc = 0x2B0E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0E08u;
        // 0x2b0e0c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0E10u;
        goto label_2b0e10;
    }
    ctx->pc = 0x2B0E08u;
    {
        const bool branch_taken_0x2b0e08 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0E08u;
        // 0x2b0e0c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0e08) {
            ctx->pc = 0x2B0E28u;
            goto label_2b0e28;
        }
    }
    ctx->pc = 0x2B0E10u;
label_2b0e10:
    // 0x2b0e10: 0x920212d5  lbu         $v0, 0x12D5($s0)
    ctx->pc = 0x2b0e10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4821)));
label_2b0e14:
    // 0x2b0e14: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2b0e18:
    if (ctx->pc == 0x2B0E18u) {
        ctx->pc = 0x2B0E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0E14u;
        // 0x2b0e18: 0x2182b  sltu        $v1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0E1Cu;
        goto label_2b0e1c;
    }
    ctx->pc = 0x2B0E14u;
    {
        const bool branch_taken_0x2b0e14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0E14u;
        // 0x2b0e18: 0x2182b  sltu        $v1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0e14) {
            ctx->pc = 0x2B0E28u;
            goto label_2b0e28;
        }
    }
    ctx->pc = 0x2B0E1Cu;
label_2b0e1c:
    // 0x2b0e1c: 0x2041026  xor         $v0, $s0, $a0
    ctx->pc = 0x2b0e1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 4));
label_2b0e20:
    // 0x2b0e20: 0x60b02d  daddu       $s6, $v1, $zero
    ctx->pc = 0x2b0e20u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2b0e24:
    // 0x2b0e24: 0x2b00b  movn        $s6, $zero, $v0
    ctx->pc = 0x2b0e24u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 0));
label_2b0e28:
    // 0x2b0e28: 0xc0a4e54  jal         func_293950
label_2b0e2c:
    if (ctx->pc == 0x2B0E2Cu) {
        ctx->pc = 0x2B0E30u;
        goto label_2b0e30;
    }
    ctx->pc = 0x2B0E28u;
    SET_GPR_U32(ctx, 31, 0x2B0E30u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2B0E28u, 0x2B0E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0E30u;
label_2b0e30:
    // 0x2b0e30: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b0e30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b0e34:
    // 0x2b0e34: 0x52000019  beql        $s0, $zero, . + 4 + (0x19 << 2)
label_2b0e38:
    if (ctx->pc == 0x2B0E38u) {
        ctx->pc = 0x2B0E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0E34u;
        // 0x2b0e38: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0E3Cu;
        goto label_2b0e3c;
    }
    ctx->pc = 0x2B0E34u;
    {
        const bool branch_taken_0x2b0e34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b0e34) {
            ctx->pc = 0x2B0E38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B0E34u;
            // 0x2b0e38: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B0E9Cu;
            goto label_2b0e9c;
        }
    }
    ctx->pc = 0x2B0E3Cu;
label_2b0e3c:
    // 0x2b0e3c: 0x52200008  beql        $s1, $zero, . + 4 + (0x8 << 2)
label_2b0e40:
    if (ctx->pc == 0x2B0E40u) {
        ctx->pc = 0x2B0E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0E3Cu;
        // 0x2b0e40: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0E44u;
        goto label_2b0e44;
    }
    ctx->pc = 0x2B0E3Cu;
    {
        const bool branch_taken_0x2b0e3c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b0e3c) {
            ctx->pc = 0x2B0E40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B0E3Cu;
            // 0x2b0e40: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B0E60u;
            goto label_2b0e60;
        }
    }
    ctx->pc = 0x2B0E44u;
label_2b0e44:
    // 0x2b0e44: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2b0e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b0e48:
    // 0x2b0e48: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2b0e48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2b0e4c:
    // 0x2b0e4c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2b0e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2b0e50:
    // 0x2b0e50: 0x40f809  jalr        $v0
label_2b0e54:
    if (ctx->pc == 0x2B0E54u) {
        ctx->pc = 0x2B0E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0E50u;
        // 0x2b0e54: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0E58u;
        goto label_2b0e58;
    }
    ctx->pc = 0x2B0E50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B0E58u);
        ctx->pc = 0x2B0E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0E50u;
        // 0x2b0e54: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B0E50u, 0x2B0E58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B0E58u;
label_2b0e58:
    // 0x2b0e58: 0x10000002  b           . + 4 + (0x2 << 2)
label_2b0e5c:
    if (ctx->pc == 0x2B0E5Cu) {
        ctx->pc = 0x2B0E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0E58u;
        // 0x2b0e5c: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0E60u;
        goto label_2b0e60;
    }
    ctx->pc = 0x2B0E58u;
    {
        const bool branch_taken_0x2b0e58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0E58u;
        // 0x2b0e5c: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0e58) {
            ctx->pc = 0x2B0E64u;
            goto label_2b0e64;
        }
    }
    ctx->pc = 0x2B0E60u;
label_2b0e60:
    // 0x2b0e60: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x2b0e60u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2b0e64:
    // 0x2b0e64: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2b0e64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2b0e68:
    // 0x2b0e68: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x2b0e68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2b0e6c:
    // 0x2b0e6c: 0x904b0add  lbu         $t3, 0xADD($v0)
    ctx->pc = 0x2b0e6cu;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2781)));
label_2b0e70:
    // 0x2b0e70: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2b0e70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2b0e74:
    // 0x2b0e74: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x2b0e74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_2b0e78:
    // 0x2b0e78: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2b0e78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2b0e7c:
    // 0x2b0e7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b0e7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b0e80:
    // 0x2b0e80: 0xafb40000  sw          $s4, 0x0($sp)
    ctx->pc = 0x2b0e80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 20));
label_2b0e84:
    // 0x2b0e84: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2b0e84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2b0e88:
    // 0x2b0e88: 0xafb60008  sw          $s6, 0x8($sp)
    ctx->pc = 0x2b0e88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 22));
label_2b0e8c:
    // 0x2b0e8c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2b0e8cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b0e90:
    // 0x2b0e90: 0xc0b3e3e  jal         func_2CF8F8
label_2b0e94:
    if (ctx->pc == 0x2B0E94u) {
        ctx->pc = 0x2B0E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0E90u;
        // 0x2b0e94: 0x240a000d  addiu       $t2, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0E98u;
        goto label_2b0e98;
    }
    ctx->pc = 0x2B0E90u;
    SET_GPR_U32(ctx, 31, 0x2B0E98u);
    ctx->pc = 0x2B0E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0E90u;
    // 0x2b0e94: 0x240a000d  addiu       $t2, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF8F8u, 0x2B0E90u, 0x2B0E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0E98u;
label_2b0e98:
    // 0x2b0e98: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2b0e98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2b0e9c:
    // 0x2b0e9c: 0xc0a35d6  jal         func_28D758
label_2b0ea0:
    if (ctx->pc == 0x2B0EA0u) {
        ctx->pc = 0x2B0EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0E9Cu;
        // 0x2b0ea0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0EA4u;
        goto label_2b0ea4;
    }
    ctx->pc = 0x2B0E9Cu;
    SET_GPR_U32(ctx, 31, 0x2B0EA4u);
    ctx->pc = 0x2B0EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0E9Cu;
    // 0x2b0ea0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2B0E9Cu, 0x2B0EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0EA4u;
label_2b0ea4:
    // 0x2b0ea4: 0x10000002  b           . + 4 + (0x2 << 2)
label_2b0ea8:
    if (ctx->pc == 0x2B0EA8u) {
        ctx->pc = 0x2B0EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0EA4u;
        // 0x2b0ea8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0EACu;
        goto label_2b0eac;
    }
    ctx->pc = 0x2B0EA4u;
    {
        const bool branch_taken_0x2b0ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0EA4u;
        // 0x2b0ea8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0ea4) {
            ctx->pc = 0x2B0EB0u;
            goto label_2b0eb0;
        }
    }
    ctx->pc = 0x2B0EACu;
label_2b0eac:
    // 0x2b0eac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b0eacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b0eb0:
    // 0x2b0eb0: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x2b0eb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_2b0eb4:
    // 0x2b0eb4: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x2b0eb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_2b0eb8:
    // 0x2b0eb8: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x2b0eb8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_2b0ebc:
    // 0x2b0ebc: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x2b0ebcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2b0ec0:
    // 0x2b0ec0: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x2b0ec0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2b0ec4:
    // 0x2b0ec4: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x2b0ec4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2b0ec8:
    // 0x2b0ec8: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x2b0ec8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2b0ecc:
    // 0x2b0ecc: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2b0eccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2b0ed0:
    // 0x2b0ed0: 0x3e00008  jr          $ra
label_2b0ed4:
    if (ctx->pc == 0x2B0ED4u) {
        ctx->pc = 0x2B0ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0ED0u;
        // 0x2b0ed4: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0ED8u;
        goto label_fallthrough_0x2b0ed0;
    }
    ctx->pc = 0x2B0ED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B0ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0ED0u;
        // 0x2b0ed4: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B0ED0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2b0ed0:
    ctx->pc = 0x2B0ED8u;
}
