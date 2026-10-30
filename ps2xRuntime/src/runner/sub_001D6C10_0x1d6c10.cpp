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

// Function: sub_001D6C10
// Address: 0x1d6c10 - 0x1d6df8
void sub_001D6C10_0x1d6c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D6C10_0x1d6c10");
#endif

    switch (ctx->pc) {
        case 0x1d6c10u: goto label_1d6c10;
        case 0x1d6c14u: goto label_1d6c14;
        case 0x1d6c18u: goto label_1d6c18;
        case 0x1d6c1cu: goto label_1d6c1c;
        case 0x1d6c20u: goto label_1d6c20;
        case 0x1d6c24u: goto label_1d6c24;
        case 0x1d6c28u: goto label_1d6c28;
        case 0x1d6c2cu: goto label_1d6c2c;
        case 0x1d6c30u: goto label_1d6c30;
        case 0x1d6c34u: goto label_1d6c34;
        case 0x1d6c38u: goto label_1d6c38;
        case 0x1d6c3cu: goto label_1d6c3c;
        case 0x1d6c40u: goto label_1d6c40;
        case 0x1d6c44u: goto label_1d6c44;
        case 0x1d6c48u: goto label_1d6c48;
        case 0x1d6c4cu: goto label_1d6c4c;
        case 0x1d6c50u: goto label_1d6c50;
        case 0x1d6c54u: goto label_1d6c54;
        case 0x1d6c58u: goto label_1d6c58;
        case 0x1d6c5cu: goto label_1d6c5c;
        case 0x1d6c60u: goto label_1d6c60;
        case 0x1d6c64u: goto label_1d6c64;
        case 0x1d6c68u: goto label_1d6c68;
        case 0x1d6c6cu: goto label_1d6c6c;
        case 0x1d6c70u: goto label_1d6c70;
        case 0x1d6c74u: goto label_1d6c74;
        case 0x1d6c78u: goto label_1d6c78;
        case 0x1d6c7cu: goto label_1d6c7c;
        case 0x1d6c80u: goto label_1d6c80;
        case 0x1d6c84u: goto label_1d6c84;
        case 0x1d6c88u: goto label_1d6c88;
        case 0x1d6c8cu: goto label_1d6c8c;
        case 0x1d6c90u: goto label_1d6c90;
        case 0x1d6c94u: goto label_1d6c94;
        case 0x1d6c98u: goto label_1d6c98;
        case 0x1d6c9cu: goto label_1d6c9c;
        case 0x1d6ca0u: goto label_1d6ca0;
        case 0x1d6ca4u: goto label_1d6ca4;
        case 0x1d6ca8u: goto label_1d6ca8;
        case 0x1d6cacu: goto label_1d6cac;
        case 0x1d6cb0u: goto label_1d6cb0;
        case 0x1d6cb4u: goto label_1d6cb4;
        case 0x1d6cb8u: goto label_1d6cb8;
        case 0x1d6cbcu: goto label_1d6cbc;
        case 0x1d6cc0u: goto label_1d6cc0;
        case 0x1d6cc4u: goto label_1d6cc4;
        case 0x1d6cc8u: goto label_1d6cc8;
        case 0x1d6cccu: goto label_1d6ccc;
        case 0x1d6cd0u: goto label_1d6cd0;
        case 0x1d6cd4u: goto label_1d6cd4;
        case 0x1d6cd8u: goto label_1d6cd8;
        case 0x1d6cdcu: goto label_1d6cdc;
        case 0x1d6ce0u: goto label_1d6ce0;
        case 0x1d6ce4u: goto label_1d6ce4;
        case 0x1d6ce8u: goto label_1d6ce8;
        case 0x1d6cecu: goto label_1d6cec;
        case 0x1d6cf0u: goto label_1d6cf0;
        case 0x1d6cf4u: goto label_1d6cf4;
        case 0x1d6cf8u: goto label_1d6cf8;
        case 0x1d6cfcu: goto label_1d6cfc;
        case 0x1d6d00u: goto label_1d6d00;
        case 0x1d6d04u: goto label_1d6d04;
        case 0x1d6d08u: goto label_1d6d08;
        case 0x1d6d0cu: goto label_1d6d0c;
        case 0x1d6d10u: goto label_1d6d10;
        case 0x1d6d14u: goto label_1d6d14;
        case 0x1d6d18u: goto label_1d6d18;
        case 0x1d6d1cu: goto label_1d6d1c;
        case 0x1d6d20u: goto label_1d6d20;
        case 0x1d6d24u: goto label_1d6d24;
        case 0x1d6d28u: goto label_1d6d28;
        case 0x1d6d2cu: goto label_1d6d2c;
        case 0x1d6d30u: goto label_1d6d30;
        case 0x1d6d34u: goto label_1d6d34;
        case 0x1d6d38u: goto label_1d6d38;
        case 0x1d6d3cu: goto label_1d6d3c;
        case 0x1d6d40u: goto label_1d6d40;
        case 0x1d6d44u: goto label_1d6d44;
        case 0x1d6d48u: goto label_1d6d48;
        case 0x1d6d4cu: goto label_1d6d4c;
        case 0x1d6d50u: goto label_1d6d50;
        case 0x1d6d54u: goto label_1d6d54;
        case 0x1d6d58u: goto label_1d6d58;
        case 0x1d6d5cu: goto label_1d6d5c;
        case 0x1d6d60u: goto label_1d6d60;
        case 0x1d6d64u: goto label_1d6d64;
        case 0x1d6d68u: goto label_1d6d68;
        case 0x1d6d6cu: goto label_1d6d6c;
        case 0x1d6d70u: goto label_1d6d70;
        case 0x1d6d74u: goto label_1d6d74;
        case 0x1d6d78u: goto label_1d6d78;
        case 0x1d6d7cu: goto label_1d6d7c;
        case 0x1d6d80u: goto label_1d6d80;
        case 0x1d6d84u: goto label_1d6d84;
        case 0x1d6d88u: goto label_1d6d88;
        case 0x1d6d8cu: goto label_1d6d8c;
        case 0x1d6d90u: goto label_1d6d90;
        case 0x1d6d94u: goto label_1d6d94;
        case 0x1d6d98u: goto label_1d6d98;
        case 0x1d6d9cu: goto label_1d6d9c;
        case 0x1d6da0u: goto label_1d6da0;
        case 0x1d6da4u: goto label_1d6da4;
        case 0x1d6da8u: goto label_1d6da8;
        case 0x1d6dacu: goto label_1d6dac;
        case 0x1d6db0u: goto label_1d6db0;
        case 0x1d6db4u: goto label_1d6db4;
        case 0x1d6db8u: goto label_1d6db8;
        case 0x1d6dbcu: goto label_1d6dbc;
        case 0x1d6dc0u: goto label_1d6dc0;
        case 0x1d6dc4u: goto label_1d6dc4;
        case 0x1d6dc8u: goto label_1d6dc8;
        case 0x1d6dccu: goto label_1d6dcc;
        case 0x1d6dd0u: goto label_1d6dd0;
        case 0x1d6dd4u: goto label_1d6dd4;
        case 0x1d6dd8u: goto label_1d6dd8;
        case 0x1d6ddcu: goto label_1d6ddc;
        case 0x1d6de0u: goto label_1d6de0;
        case 0x1d6de4u: goto label_1d6de4;
        case 0x1d6de8u: goto label_1d6de8;
        case 0x1d6decu: goto label_1d6dec;
        case 0x1d6df0u: goto label_1d6df0;
        case 0x1d6df4u: goto label_1d6df4;
        default: break;
    }

    ctx->pc = 0x1d6c10u;

label_1d6c10:
    // 0x1d6c10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d6c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1d6c14:
    // 0x1d6c14: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d6c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d6c18:
    // 0x1d6c18: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1d6c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1d6c1c:
    // 0x1d6c1c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1d6c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1d6c20:
    // 0x1d6c20: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d6c20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d6c24:
    // 0x1d6c24: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1d6c24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_1d6c28:
    // 0x1d6c28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d6c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1d6c2c:
    // 0x1d6c2c: 0x14a20024  bne         $a1, $v0, . + 4 + (0x24 << 2)
label_1d6c30:
    if (ctx->pc == 0x1D6C30u) {
        ctx->pc = 0x1D6C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6C2Cu;
        // 0x1d6c30: 0xae200244  sw          $zero, 0x244($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 580), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6C34u;
        goto label_1d6c34;
    }
    ctx->pc = 0x1D6C2Cu;
    {
        const bool branch_taken_0x1d6c2c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D6C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6C2Cu;
        // 0x1d6c30: 0xae200244  sw          $zero, 0x244($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 580), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6c2c) {
            ctx->pc = 0x1D6CC0u;
            goto label_1d6cc0;
        }
    }
    ctx->pc = 0x1D6C34u;
label_1d6c34:
    // 0x1d6c34: 0x8e2204c0  lw          $v0, 0x4C0($s1)
    ctx->pc = 0x1d6c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1216)));
label_1d6c38:
    // 0x1d6c38: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_1d6c3c:
    if (ctx->pc == 0x1D6C3Cu) {
        ctx->pc = 0x1D6C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6C38u;
        // 0x1d6c3c: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6C40u;
        goto label_1d6c40;
    }
    ctx->pc = 0x1D6C38u;
    {
        const bool branch_taken_0x1d6c38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D6C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6C38u;
        // 0x1d6c3c: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6c38) {
            ctx->pc = 0x1D6C78u;
            goto label_1d6c78;
        }
    }
    ctx->pc = 0x1D6C40u;
label_1d6c40:
    // 0x1d6c40: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1d6c40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1d6c44:
    // 0x1d6c44: 0xc04444c  jal         func_111130
label_1d6c48:
    if (ctx->pc == 0x1D6C48u) {
        ctx->pc = 0x1D6C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6C44u;
        // 0x1d6c48: 0x8e04aa84  lw          $a0, -0x557C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6C4Cu;
        goto label_1d6c4c;
    }
    ctx->pc = 0x1D6C44u;
    SET_GPR_U32(ctx, 31, 0x1D6C4Cu);
    ctx->pc = 0x1D6C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6C44u;
    // 0x1d6c48: 0x8e04aa84  lw          $a0, -0x557C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111130u, 0x1D6C44u, 0x1D6C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6C4Cu;
label_1d6c4c:
    // 0x1d6c4c: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x1d6c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
label_1d6c50:
    // 0x1d6c50: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d6c50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d6c54:
    // 0x1d6c54: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d6c54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d6c58:
    // 0x1d6c58: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d6c58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d6c5c:
    // 0x1d6c5c: 0xc043f36  jal         func_10FCD8
label_1d6c60:
    if (ctx->pc == 0x1D6C60u) {
        ctx->pc = 0x1D6C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6C5Cu;
        // 0x1d6c60: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6C64u;
        goto label_1d6c64;
    }
    ctx->pc = 0x1D6C5Cu;
    SET_GPR_U32(ctx, 31, 0x1D6C64u);
    ctx->pc = 0x1D6C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6C5Cu;
    // 0x1d6c60: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FCD8u, 0x1D6C5Cu, 0x1D6C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6C64u;
label_1d6c64:
    // 0x1d6c64: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1d6c64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1d6c68:
    // 0x1d6c68: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1d6c68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d6c6c:
    // 0x1d6c6c: 0x8c62ecec  lw          $v0, -0x1314($v1)
    ctx->pc = 0x1d6c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294962412)));
label_1d6c70:
    // 0x1d6c70: 0x1000000d  b           . + 4 + (0xD << 2)
label_1d6c74:
    if (ctx->pc == 0x1D6C74u) {
        ctx->pc = 0x1D6C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6C70u;
        // 0x1d6c74: 0xac4445cc  sw          $a0, 0x45CC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 17868), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6C78u;
        goto label_1d6c78;
    }
    ctx->pc = 0x1D6C70u;
    {
        const bool branch_taken_0x1d6c70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6C70u;
        // 0x1d6c74: 0xac4445cc  sw          $a0, 0x45CC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 17868), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6c70) {
            ctx->pc = 0x1D6CA8u;
            goto label_1d6ca8;
        }
    }
    ctx->pc = 0x1D6C78u;
label_1d6c78:
    // 0x1d6c78: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1d6c78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1d6c7c:
    // 0x1d6c7c: 0xc04444c  jal         func_111130
label_1d6c80:
    if (ctx->pc == 0x1D6C80u) {
        ctx->pc = 0x1D6C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6C7Cu;
        // 0x1d6c80: 0x8e04aa84  lw          $a0, -0x557C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6C84u;
        goto label_1d6c84;
    }
    ctx->pc = 0x1D6C7Cu;
    SET_GPR_U32(ctx, 31, 0x1D6C84u);
    ctx->pc = 0x1D6C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6C7Cu;
    // 0x1d6c80: 0x8e04aa84  lw          $a0, -0x557C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111130u, 0x1D6C7Cu, 0x1D6C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6C84u;
label_1d6c84:
    // 0x1d6c84: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x1d6c84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
label_1d6c88:
    // 0x1d6c88: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d6c88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d6c8c:
    // 0x1d6c8c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d6c8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d6c90:
    // 0x1d6c90: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d6c90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d6c94:
    // 0x1d6c94: 0xc043f36  jal         func_10FCD8
label_1d6c98:
    if (ctx->pc == 0x1D6C98u) {
        ctx->pc = 0x1D6C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6C94u;
        // 0x1d6c98: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6C9Cu;
        goto label_1d6c9c;
    }
    ctx->pc = 0x1D6C94u;
    SET_GPR_U32(ctx, 31, 0x1D6C9Cu);
    ctx->pc = 0x1D6C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6C94u;
    // 0x1d6c98: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FCD8u, 0x1D6C94u, 0x1D6C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6C9Cu;
label_1d6c9c:
    // 0x1d6c9c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1d6c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1d6ca0:
    // 0x1d6ca0: 0x8c62ecec  lw          $v0, -0x1314($v1)
    ctx->pc = 0x1d6ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294962412)));
label_1d6ca4:
    // 0x1d6ca4: 0xac4045cc  sw          $zero, 0x45CC($v0)
    ctx->pc = 0x1d6ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 17868), GPR_U32(ctx, 0));
label_1d6ca8:
    // 0x1d6ca8: 0x8c64ecec  lw          $a0, -0x1314($v1)
    ctx->pc = 0x1d6ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294962412)));
label_1d6cac:
    // 0x1d6cac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d6cacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d6cb0:
    // 0x1d6cb0: 0xc076a8e  jal         func_1DAA38
label_1d6cb4:
    if (ctx->pc == 0x1D6CB4u) {
        ctx->pc = 0x1D6CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6CB0u;
        // 0x1d6cb4: 0xae2004c0  sw          $zero, 0x4C0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1216), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6CB8u;
        goto label_1d6cb8;
    }
    ctx->pc = 0x1D6CB0u;
    SET_GPR_U32(ctx, 31, 0x1D6CB8u);
    ctx->pc = 0x1D6CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6CB0u;
    // 0x1d6cb4: 0xae2004c0  sw          $zero, 0x4C0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1216), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DAA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DAA38u, 0x1D6CB0u, 0x1D6CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6CB8u;
label_1d6cb8:
    // 0x1d6cb8: 0x10000043  b           . + 4 + (0x43 << 2)
label_1d6cbc:
    if (ctx->pc == 0x1D6CBCu) {
        ctx->pc = 0x1D6CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6CB8u;
        // 0x1d6cbc: 0x8e2204c8  lw          $v0, 0x4C8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6CC0u;
        goto label_1d6cc0;
    }
    ctx->pc = 0x1D6CB8u;
    {
        const bool branch_taken_0x1d6cb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6CB8u;
        // 0x1d6cbc: 0x8e2204c8  lw          $v0, 0x4C8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6cb8) {
            ctx->pc = 0x1D6DC8u;
            goto label_1d6dc8;
        }
    }
    ctx->pc = 0x1D6CC0u;
label_1d6cc0:
    // 0x1d6cc0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1d6cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d6cc4:
    // 0x1d6cc4: 0x14a20025  bne         $a1, $v0, . + 4 + (0x25 << 2)
label_1d6cc8:
    if (ctx->pc == 0x1D6CC8u) {
        ctx->pc = 0x1D6CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6CC4u;
        // 0x1d6cc8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6CCCu;
        goto label_1d6ccc;
    }
    ctx->pc = 0x1D6CC4u;
    {
        const bool branch_taken_0x1d6cc4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D6CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6CC4u;
        // 0x1d6cc8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6cc4) {
            ctx->pc = 0x1D6D5Cu;
            goto label_1d6d5c;
        }
    }
    ctx->pc = 0x1D6CCCu;
label_1d6ccc:
    // 0x1d6ccc: 0x8e3204c0  lw          $s2, 0x4C0($s1)
    ctx->pc = 0x1d6cccu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1216)));
label_1d6cd0:
    // 0x1d6cd0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d6cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d6cd4:
    // 0x1d6cd4: 0x1642000e  bne         $s2, $v0, . + 4 + (0xE << 2)
label_1d6cd8:
    if (ctx->pc == 0x1D6CD8u) {
        ctx->pc = 0x1D6CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6CD4u;
        // 0x1d6cd8: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6CDCu;
        goto label_1d6cdc;
    }
    ctx->pc = 0x1D6CD4u;
    {
        const bool branch_taken_0x1d6cd4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D6CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6CD4u;
        // 0x1d6cd8: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6cd4) {
            ctx->pc = 0x1D6D10u;
            goto label_1d6d10;
        }
    }
    ctx->pc = 0x1D6CDCu;
label_1d6cdc:
    // 0x1d6cdc: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1d6cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1d6ce0:
    // 0x1d6ce0: 0xc04444c  jal         func_111130
label_1d6ce4:
    if (ctx->pc == 0x1D6CE4u) {
        ctx->pc = 0x1D6CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6CE0u;
        // 0x1d6ce4: 0x8e04aa84  lw          $a0, -0x557C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6CE8u;
        goto label_1d6ce8;
    }
    ctx->pc = 0x1D6CE0u;
    SET_GPR_U32(ctx, 31, 0x1D6CE8u);
    ctx->pc = 0x1D6CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6CE0u;
    // 0x1d6ce4: 0x8e04aa84  lw          $a0, -0x557C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111130u, 0x1D6CE0u, 0x1D6CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6CE8u;
label_1d6ce8:
    // 0x1d6ce8: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x1d6ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
label_1d6cec:
    // 0x1d6cec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d6cecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d6cf0:
    // 0x1d6cf0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d6cf0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d6cf4:
    // 0x1d6cf4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d6cf4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d6cf8:
    // 0x1d6cf8: 0xc043f36  jal         func_10FCD8
label_1d6cfc:
    if (ctx->pc == 0x1D6CFCu) {
        ctx->pc = 0x1D6CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6CF8u;
        // 0x1d6cfc: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6D00u;
        goto label_1d6d00;
    }
    ctx->pc = 0x1D6CF8u;
    SET_GPR_U32(ctx, 31, 0x1D6D00u);
    ctx->pc = 0x1D6CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6CF8u;
    // 0x1d6cfc: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FCD8u, 0x1D6CF8u, 0x1D6D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6D00u;
label_1d6d00:
    // 0x1d6d00: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1d6d00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1d6d04:
    // 0x1d6d04: 0x8c62ecec  lw          $v0, -0x1314($v1)
    ctx->pc = 0x1d6d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294962412)));
label_1d6d08:
    // 0x1d6d08: 0x1000000d  b           . + 4 + (0xD << 2)
label_1d6d0c:
    if (ctx->pc == 0x1D6D0Cu) {
        ctx->pc = 0x1D6D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6D08u;
        // 0x1d6d0c: 0xac5245cc  sw          $s2, 0x45CC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 17868), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6D10u;
        goto label_1d6d10;
    }
    ctx->pc = 0x1D6D08u;
    {
        const bool branch_taken_0x1d6d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6D08u;
        // 0x1d6d0c: 0xac5245cc  sw          $s2, 0x45CC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 17868), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6d08) {
            ctx->pc = 0x1D6D40u;
            goto label_1d6d40;
        }
    }
    ctx->pc = 0x1D6D10u;
label_1d6d10:
    // 0x1d6d10: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1d6d10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1d6d14:
    // 0x1d6d14: 0xc04444c  jal         func_111130
label_1d6d18:
    if (ctx->pc == 0x1D6D18u) {
        ctx->pc = 0x1D6D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6D14u;
        // 0x1d6d18: 0x8e04aa84  lw          $a0, -0x557C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6D1Cu;
        goto label_1d6d1c;
    }
    ctx->pc = 0x1D6D14u;
    SET_GPR_U32(ctx, 31, 0x1D6D1Cu);
    ctx->pc = 0x1D6D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6D14u;
    // 0x1d6d18: 0x8e04aa84  lw          $a0, -0x557C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111130u, 0x1D6D14u, 0x1D6D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6D1Cu;
label_1d6d1c:
    // 0x1d6d1c: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x1d6d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
label_1d6d20:
    // 0x1d6d20: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d6d20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d6d24:
    // 0x1d6d24: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d6d24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d6d28:
    // 0x1d6d28: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d6d28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d6d2c:
    // 0x1d6d2c: 0xc043f36  jal         func_10FCD8
label_1d6d30:
    if (ctx->pc == 0x1D6D30u) {
        ctx->pc = 0x1D6D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6D2Cu;
        // 0x1d6d30: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6D34u;
        goto label_1d6d34;
    }
    ctx->pc = 0x1D6D2Cu;
    SET_GPR_U32(ctx, 31, 0x1D6D34u);
    ctx->pc = 0x1D6D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6D2Cu;
    // 0x1d6d30: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FCD8u, 0x1D6D2Cu, 0x1D6D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6D34u;
label_1d6d34:
    // 0x1d6d34: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1d6d34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1d6d38:
    // 0x1d6d38: 0x8c62ecec  lw          $v0, -0x1314($v1)
    ctx->pc = 0x1d6d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294962412)));
label_1d6d3c:
    // 0x1d6d3c: 0xac4045cc  sw          $zero, 0x45CC($v0)
    ctx->pc = 0x1d6d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 17868), GPR_U32(ctx, 0));
label_1d6d40:
    // 0x1d6d40: 0x8c64ecec  lw          $a0, -0x1314($v1)
    ctx->pc = 0x1d6d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294962412)));
label_1d6d44:
    // 0x1d6d44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d6d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d6d48:
    // 0x1d6d48: 0xae2204c0  sw          $v0, 0x4C0($s1)
    ctx->pc = 0x1d6d48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1216), GPR_U32(ctx, 2));
label_1d6d4c:
    // 0x1d6d4c: 0xc076a8e  jal         func_1DAA38
label_1d6d50:
    if (ctx->pc == 0x1D6D50u) {
        ctx->pc = 0x1D6D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6D4Cu;
        // 0x1d6d50: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6D54u;
        goto label_1d6d54;
    }
    ctx->pc = 0x1D6D4Cu;
    SET_GPR_U32(ctx, 31, 0x1D6D54u);
    ctx->pc = 0x1D6D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6D4Cu;
    // 0x1d6d50: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DAA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DAA38u, 0x1D6D4Cu, 0x1D6D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6D54u;
label_1d6d54:
    // 0x1d6d54: 0x1000001c  b           . + 4 + (0x1C << 2)
label_1d6d58:
    if (ctx->pc == 0x1D6D58u) {
        ctx->pc = 0x1D6D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6D54u;
        // 0x1d6d58: 0x8e2204c8  lw          $v0, 0x4C8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6D5Cu;
        goto label_1d6d5c;
    }
    ctx->pc = 0x1D6D54u;
    {
        const bool branch_taken_0x1d6d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6D54u;
        // 0x1d6d58: 0x8e2204c8  lw          $v0, 0x4C8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6d54) {
            ctx->pc = 0x1D6DC8u;
            goto label_1d6dc8;
        }
    }
    ctx->pc = 0x1D6D5Cu;
label_1d6d5c:
    // 0x1d6d5c: 0x14a20012  bne         $a1, $v0, . + 4 + (0x12 << 2)
label_1d6d60:
    if (ctx->pc == 0x1D6D60u) {
        ctx->pc = 0x1D6D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6D5Cu;
        // 0x1d6d60: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6D64u;
        goto label_1d6d64;
    }
    ctx->pc = 0x1D6D5Cu;
    {
        const bool branch_taken_0x1d6d5c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D6D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6D5Cu;
        // 0x1d6d60: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6d5c) {
            ctx->pc = 0x1D6DA8u;
            goto label_1d6da8;
        }
    }
    ctx->pc = 0x1D6D64u;
label_1d6d64:
    // 0x1d6d64: 0x8e2204c8  lw          $v0, 0x4C8($s1)
    ctx->pc = 0x1d6d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1224)));
label_1d6d68:
    // 0x1d6d68: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_1d6d6c:
    if (ctx->pc == 0x1D6D6Cu) {
        ctx->pc = 0x1D6D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6D68u;
        // 0x1d6d6c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6D70u;
        goto label_1d6d70;
    }
    ctx->pc = 0x1D6D68u;
    {
        const bool branch_taken_0x1d6d68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6D68u;
        // 0x1d6d6c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6d68) {
            ctx->pc = 0x1D6DE4u;
            goto label_1d6de4;
        }
    }
    ctx->pc = 0x1D6D70u;
label_1d6d70:
    // 0x1d6d70: 0x8e2204c0  lw          $v0, 0x4C0($s1)
    ctx->pc = 0x1d6d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1216)));
label_1d6d74:
    // 0x1d6d74: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1d6d78:
    if (ctx->pc == 0x1D6D78u) {
        ctx->pc = 0x1D6D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6D74u;
        // 0x1d6d78: 0x8e2204c4  lw          $v0, 0x4C4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1220)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6D7Cu;
        goto label_1d6d7c;
    }
    ctx->pc = 0x1D6D74u;
    {
        const bool branch_taken_0x1d6d74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D6D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6D74u;
        // 0x1d6d78: 0x8e2204c4  lw          $v0, 0x4C4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1220)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6d74) {
            ctx->pc = 0x1D6D90u;
            goto label_1d6d90;
        }
    }
    ctx->pc = 0x1D6D7Cu;
label_1d6d7c:
    // 0x1d6d7c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1d6d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d6d80:
    // 0x1d6d80: 0x40f809  jalr        $v0
label_1d6d84:
    if (ctx->pc == 0x1D6D84u) {
        ctx->pc = 0x1D6D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6D80u;
        // 0x1d6d84: 0x8e240240  lw          $a0, 0x240($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 576)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6D88u;
        goto label_1d6d88;
    }
    ctx->pc = 0x1D6D80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D6D88u);
        ctx->pc = 0x1D6D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6D80u;
        // 0x1d6d84: 0x8e240240  lw          $a0, 0x240($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 576)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6D80u, 0x1D6D88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D6D88u;
label_1d6d88:
    // 0x1d6d88: 0x10000005  b           . + 4 + (0x5 << 2)
label_1d6d8c:
    if (ctx->pc == 0x1D6D8Cu) {
        ctx->pc = 0x1D6D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6D88u;
        // 0x1d6d8c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6D90u;
        goto label_1d6d90;
    }
    ctx->pc = 0x1D6D88u;
    {
        const bool branch_taken_0x1d6d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6D88u;
        // 0x1d6d8c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6d88) {
            ctx->pc = 0x1D6DA0u;
            goto label_1d6da0;
        }
    }
    ctx->pc = 0x1D6D90u;
label_1d6d90:
    // 0x1d6d90: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1d6d90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d6d94:
    // 0x1d6d94: 0x40f809  jalr        $v0
label_1d6d98:
    if (ctx->pc == 0x1D6D98u) {
        ctx->pc = 0x1D6D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6D94u;
        // 0x1d6d98: 0x8e240240  lw          $a0, 0x240($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 576)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6D9Cu;
        goto label_1d6d9c;
    }
    ctx->pc = 0x1D6D94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D6D9Cu);
        ctx->pc = 0x1D6D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6D94u;
        // 0x1d6d98: 0x8e240240  lw          $a0, 0x240($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 576)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6D94u, 0x1D6D9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D6D9Cu;
label_1d6d9c:
    // 0x1d6d9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d6d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d6da0:
    // 0x1d6da0: 0x1000000f  b           . + 4 + (0xF << 2)
label_1d6da4:
    if (ctx->pc == 0x1D6DA4u) {
        ctx->pc = 0x1D6DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6DA0u;
        // 0x1d6da4: 0xae220244  sw          $v0, 0x244($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 580), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6DA8u;
        goto label_1d6da8;
    }
    ctx->pc = 0x1D6DA0u;
    {
        const bool branch_taken_0x1d6da0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6DA0u;
        // 0x1d6da4: 0xae220244  sw          $v0, 0x244($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 580), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6da0) {
            ctx->pc = 0x1D6DE0u;
            goto label_1d6de0;
        }
    }
    ctx->pc = 0x1D6DA8u;
label_1d6da8:
    // 0x1d6da8: 0x54a20007  bnel        $a1, $v0, . + 4 + (0x7 << 2)
label_1d6dac:
    if (ctx->pc == 0x1D6DACu) {
        ctx->pc = 0x1D6DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6DA8u;
        // 0x1d6dac: 0x8e2204c8  lw          $v0, 0x4C8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6DB0u;
        goto label_1d6db0;
    }
    ctx->pc = 0x1D6DA8u;
    {
        const bool branch_taken_0x1d6da8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d6da8) {
            ctx->pc = 0x1D6DACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D6DA8u;
            // 0x1d6dac: 0x8e2204c8  lw          $v0, 0x4C8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D6DC8u;
            goto label_1d6dc8;
        }
    }
    ctx->pc = 0x1D6DB0u;
label_1d6db0:
    // 0x1d6db0: 0x8e240240  lw          $a0, 0x240($s1)
    ctx->pc = 0x1d6db0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 576)));
label_1d6db4:
    // 0x1d6db4: 0x8e2204c4  lw          $v0, 0x4C4($s1)
    ctx->pc = 0x1d6db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1220)));
label_1d6db8:
    // 0x1d6db8: 0x40f809  jalr        $v0
label_1d6dbc:
    if (ctx->pc == 0x1D6DBCu) {
        ctx->pc = 0x1D6DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6DB8u;
        // 0x1d6dbc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6DC0u;
        goto label_1d6dc0;
    }
    ctx->pc = 0x1D6DB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D6DC0u);
        ctx->pc = 0x1D6DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6DB8u;
        // 0x1d6dbc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6DB8u, 0x1D6DC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D6DC0u;
label_1d6dc0:
    // 0x1d6dc0: 0x10000008  b           . + 4 + (0x8 << 2)
label_1d6dc4:
    if (ctx->pc == 0x1D6DC4u) {
        ctx->pc = 0x1D6DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6DC0u;
        // 0x1d6dc4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6DC8u;
        goto label_1d6dc8;
    }
    ctx->pc = 0x1D6DC0u;
    {
        const bool branch_taken_0x1d6dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6DC0u;
        // 0x1d6dc4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6dc0) {
            ctx->pc = 0x1D6DE4u;
            goto label_1d6de4;
        }
    }
    ctx->pc = 0x1D6DC8u;
label_1d6dc8:
    // 0x1d6dc8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1d6dcc:
    if (ctx->pc == 0x1D6DCCu) {
        ctx->pc = 0x1D6DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6DC8u;
        // 0x1d6dcc: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6DD0u;
        goto label_1d6dd0;
    }
    ctx->pc = 0x1D6DC8u;
    {
        const bool branch_taken_0x1d6dc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D6DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6DC8u;
        // 0x1d6dcc: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6dc8) {
            ctx->pc = 0x1D6DE4u;
            goto label_1d6de4;
        }
    }
    ctx->pc = 0x1D6DD0u;
label_1d6dd0:
    // 0x1d6dd0: 0x8e2504c0  lw          $a1, 0x4C0($s1)
    ctx->pc = 0x1d6dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1216)));
label_1d6dd4:
    // 0x1d6dd4: 0x8e2204c4  lw          $v0, 0x4C4($s1)
    ctx->pc = 0x1d6dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1220)));
label_1d6dd8:
    // 0x1d6dd8: 0x40f809  jalr        $v0
label_1d6ddc:
    if (ctx->pc == 0x1D6DDCu) {
        ctx->pc = 0x1D6DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6DD8u;
        // 0x1d6ddc: 0x8e240240  lw          $a0, 0x240($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 576)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6DE0u;
        goto label_1d6de0;
    }
    ctx->pc = 0x1D6DD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D6DE0u);
        ctx->pc = 0x1D6DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6DD8u;
        // 0x1d6ddc: 0x8e240240  lw          $a0, 0x240($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 576)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6DD8u, 0x1D6DE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D6DE0u;
label_1d6de0:
    // 0x1d6de0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1d6de0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1d6de4:
    // 0x1d6de4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1d6de4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d6de8:
    // 0x1d6de8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1d6de8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d6dec:
    // 0x1d6dec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d6decu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d6df0:
    // 0x1d6df0: 0x3e00008  jr          $ra
label_1d6df4:
    if (ctx->pc == 0x1D6DF4u) {
        ctx->pc = 0x1D6DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6DF0u;
        // 0x1d6df4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6DF8u;
        goto label_fallthrough_0x1d6df0;
    }
    ctx->pc = 0x1D6DF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D6DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6DF0u;
        // 0x1d6df4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6DF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1d6df0:
    ctx->pc = 0x1D6DF8u;
}
