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

// Function: sub_00268C50
// Address: 0x268c50 - 0x268df8
void sub_00268C50_0x268c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00268C50_0x268c50");
#endif

    switch (ctx->pc) {
        case 0x268c50u: goto label_268c50;
        case 0x268c54u: goto label_268c54;
        case 0x268c58u: goto label_268c58;
        case 0x268c5cu: goto label_268c5c;
        case 0x268c60u: goto label_268c60;
        case 0x268c64u: goto label_268c64;
        case 0x268c68u: goto label_268c68;
        case 0x268c6cu: goto label_268c6c;
        case 0x268c70u: goto label_268c70;
        case 0x268c74u: goto label_268c74;
        case 0x268c78u: goto label_268c78;
        case 0x268c7cu: goto label_268c7c;
        case 0x268c80u: goto label_268c80;
        case 0x268c84u: goto label_268c84;
        case 0x268c88u: goto label_268c88;
        case 0x268c8cu: goto label_268c8c;
        case 0x268c90u: goto label_268c90;
        case 0x268c94u: goto label_268c94;
        case 0x268c98u: goto label_268c98;
        case 0x268c9cu: goto label_268c9c;
        case 0x268ca0u: goto label_268ca0;
        case 0x268ca4u: goto label_268ca4;
        case 0x268ca8u: goto label_268ca8;
        case 0x268cacu: goto label_268cac;
        case 0x268cb0u: goto label_268cb0;
        case 0x268cb4u: goto label_268cb4;
        case 0x268cb8u: goto label_268cb8;
        case 0x268cbcu: goto label_268cbc;
        case 0x268cc0u: goto label_268cc0;
        case 0x268cc4u: goto label_268cc4;
        case 0x268cc8u: goto label_268cc8;
        case 0x268cccu: goto label_268ccc;
        case 0x268cd0u: goto label_268cd0;
        case 0x268cd4u: goto label_268cd4;
        case 0x268cd8u: goto label_268cd8;
        case 0x268cdcu: goto label_268cdc;
        case 0x268ce0u: goto label_268ce0;
        case 0x268ce4u: goto label_268ce4;
        case 0x268ce8u: goto label_268ce8;
        case 0x268cecu: goto label_268cec;
        case 0x268cf0u: goto label_268cf0;
        case 0x268cf4u: goto label_268cf4;
        case 0x268cf8u: goto label_268cf8;
        case 0x268cfcu: goto label_268cfc;
        case 0x268d00u: goto label_268d00;
        case 0x268d04u: goto label_268d04;
        case 0x268d08u: goto label_268d08;
        case 0x268d0cu: goto label_268d0c;
        case 0x268d10u: goto label_268d10;
        case 0x268d14u: goto label_268d14;
        case 0x268d18u: goto label_268d18;
        case 0x268d1cu: goto label_268d1c;
        case 0x268d20u: goto label_268d20;
        case 0x268d24u: goto label_268d24;
        case 0x268d28u: goto label_268d28;
        case 0x268d2cu: goto label_268d2c;
        case 0x268d30u: goto label_268d30;
        case 0x268d34u: goto label_268d34;
        case 0x268d38u: goto label_268d38;
        case 0x268d3cu: goto label_268d3c;
        case 0x268d40u: goto label_268d40;
        case 0x268d44u: goto label_268d44;
        case 0x268d48u: goto label_268d48;
        case 0x268d4cu: goto label_268d4c;
        case 0x268d50u: goto label_268d50;
        case 0x268d54u: goto label_268d54;
        case 0x268d58u: goto label_268d58;
        case 0x268d5cu: goto label_268d5c;
        case 0x268d60u: goto label_268d60;
        case 0x268d64u: goto label_268d64;
        case 0x268d68u: goto label_268d68;
        case 0x268d6cu: goto label_268d6c;
        case 0x268d70u: goto label_268d70;
        case 0x268d74u: goto label_268d74;
        case 0x268d78u: goto label_268d78;
        case 0x268d7cu: goto label_268d7c;
        case 0x268d80u: goto label_268d80;
        case 0x268d84u: goto label_268d84;
        case 0x268d88u: goto label_268d88;
        case 0x268d8cu: goto label_268d8c;
        case 0x268d90u: goto label_268d90;
        case 0x268d94u: goto label_268d94;
        case 0x268d98u: goto label_268d98;
        case 0x268d9cu: goto label_268d9c;
        case 0x268da0u: goto label_268da0;
        case 0x268da4u: goto label_268da4;
        case 0x268da8u: goto label_268da8;
        case 0x268dacu: goto label_268dac;
        case 0x268db0u: goto label_268db0;
        case 0x268db4u: goto label_268db4;
        case 0x268db8u: goto label_268db8;
        case 0x268dbcu: goto label_268dbc;
        case 0x268dc0u: goto label_268dc0;
        case 0x268dc4u: goto label_268dc4;
        case 0x268dc8u: goto label_268dc8;
        case 0x268dccu: goto label_268dcc;
        case 0x268dd0u: goto label_268dd0;
        case 0x268dd4u: goto label_268dd4;
        case 0x268dd8u: goto label_268dd8;
        case 0x268ddcu: goto label_268ddc;
        case 0x268de0u: goto label_268de0;
        case 0x268de4u: goto label_268de4;
        case 0x268de8u: goto label_268de8;
        case 0x268decu: goto label_268dec;
        case 0x268df0u: goto label_268df0;
        case 0x268df4u: goto label_268df4;
        default: break;
    }

    ctx->pc = 0x268c50u;

label_268c50:
    // 0x268c50: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x268c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_268c54:
    // 0x268c54: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x268c54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_268c58:
    // 0x268c58: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x268c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_268c5c:
    // 0x268c5c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x268c5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_268c60:
    // 0x268c60: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x268c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_268c64:
    // 0x268c64: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x268c64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_268c68:
    // 0x268c68: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x268c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_268c6c:
    // 0x268c6c: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x268c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_268c70:
    // 0x268c70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x268c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_268c74:
    // 0x268c74: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x268c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_268c78:
    // 0x268c78: 0xc088ac6  jal         func_222B18
label_268c7c:
    if (ctx->pc == 0x268C7Cu) {
        ctx->pc = 0x268C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268C78u;
        // 0x268c7c: 0xa4400118  sh          $zero, 0x118($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 280), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268C80u;
        goto label_268c80;
    }
    ctx->pc = 0x268C78u;
    SET_GPR_U32(ctx, 31, 0x268C80u);
    ctx->pc = 0x268C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268C78u;
    // 0x268c7c: 0xa4400118  sh          $zero, 0x118($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 280), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B18u, 0x268C78u, 0x268C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268C80u;
label_268c80:
    // 0x268c80: 0x94430046  lhu         $v1, 0x46($v0)
    ctx->pc = 0x268c80u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 70)));
label_268c84:
    // 0x268c84: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x268c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_268c88:
    // 0x268c88: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_268c8c:
    if (ctx->pc == 0x268C8Cu) {
        ctx->pc = 0x268C90u;
        goto label_268c90;
    }
    ctx->pc = 0x268C88u;
    {
        const bool branch_taken_0x268c88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x268c88) {
            ctx->pc = 0x268CACu;
            goto label_268cac;
        }
    }
    ctx->pc = 0x268C90u;
label_268c90:
    // 0x268c90: 0xc08b58a  jal         func_22D628
label_268c94:
    if (ctx->pc == 0x268C94u) {
        ctx->pc = 0x268C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268C90u;
        // 0x268c94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268C98u;
        goto label_268c98;
    }
    ctx->pc = 0x268C90u;
    SET_GPR_U32(ctx, 31, 0x268C98u);
    ctx->pc = 0x268C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268C90u;
    // 0x268c94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D628u, 0x268C90u, 0x268C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268C98u;
label_268c98:
    // 0x268c98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x268c98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_268c9c:
    // 0x268c9c: 0xc09ac28  jal         func_26B0A0
label_268ca0:
    if (ctx->pc == 0x268CA0u) {
        ctx->pc = 0x268CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268C9Cu;
        // 0x268ca0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268CA4u;
        goto label_268ca4;
    }
    ctx->pc = 0x268C9Cu;
    SET_GPR_U32(ctx, 31, 0x268CA4u);
    ctx->pc = 0x268CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268C9Cu;
    // 0x268ca0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26B0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B0A0u, 0x268C9Cu, 0x268CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268CA4u;
label_268ca4:
    // 0x268ca4: 0x1000004c  b           . + 4 + (0x4C << 2)
label_268ca8:
    if (ctx->pc == 0x268CA8u) {
        ctx->pc = 0x268CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268CA4u;
        // 0x268ca8: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268CACu;
        goto label_268cac;
    }
    ctx->pc = 0x268CA4u;
    {
        const bool branch_taken_0x268ca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x268CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268CA4u;
        // 0x268ca8: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268ca4) {
            ctx->pc = 0x268DD8u;
            goto label_268dd8;
        }
    }
    ctx->pc = 0x268CACu;
label_268cac:
    // 0x268cac: 0xc08b58a  jal         func_22D628
label_268cb0:
    if (ctx->pc == 0x268CB0u) {
        ctx->pc = 0x268CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268CACu;
        // 0x268cb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268CB4u;
        goto label_268cb4;
    }
    ctx->pc = 0x268CACu;
    SET_GPR_U32(ctx, 31, 0x268CB4u);
    ctx->pc = 0x268CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268CACu;
    // 0x268cb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D628u, 0x268CACu, 0x268CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268CB4u;
label_268cb4:
    // 0x268cb4: 0x3c100056  lui         $s0, 0x56
    ctx->pc = 0x268cb4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
label_268cb8:
    // 0x268cb8: 0x8e3400d8  lw          $s4, 0xD8($s1)
    ctx->pc = 0x268cb8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_268cbc:
    // 0x268cbc: 0x2610df28  addiu       $s0, $s0, -0x20D8
    ctx->pc = 0x268cbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294958888));
label_268cc0:
    // 0x268cc0: 0xc041532  jal         func_1054C8
label_268cc4:
    if (ctx->pc == 0x268CC4u) {
        ctx->pc = 0x268CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268CC0u;
        // 0x268cc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268CC8u;
        goto label_268cc8;
    }
    ctx->pc = 0x268CC0u;
    SET_GPR_U32(ctx, 31, 0x268CC8u);
    ctx->pc = 0x268CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268CC0u;
    // 0x268cc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x268CC0u, 0x268CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268CC8u;
label_268cc8:
    // 0x268cc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x268cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_268ccc:
    // 0x268ccc: 0xc041532  jal         func_1054C8
label_268cd0:
    if (ctx->pc == 0x268CD0u) {
        ctx->pc = 0x268CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268CCCu;
        // 0x268cd0: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268CD4u;
        goto label_268cd4;
    }
    ctx->pc = 0x268CCCu;
    SET_GPR_U32(ctx, 31, 0x268CD4u);
    ctx->pc = 0x268CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268CCCu;
    // 0x268cd0: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x268CCCu, 0x268CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268CD4u;
label_268cd4:
    // 0x268cd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x268cd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_268cd8:
    // 0x268cd8: 0xc041532  jal         func_1054C8
label_268cdc:
    if (ctx->pc == 0x268CDCu) {
        ctx->pc = 0x268CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268CD8u;
        // 0x268cdc: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268CE0u;
        goto label_268ce0;
    }
    ctx->pc = 0x268CD8u;
    SET_GPR_U32(ctx, 31, 0x268CE0u);
    ctx->pc = 0x268CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268CD8u;
    // 0x268cdc: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x268CD8u, 0x268CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268CE0u;
label_268ce0:
    // 0x268ce0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x268ce0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_268ce4:
    // 0x268ce4: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_268ce8:
    if (ctx->pc == 0x268CE8u) {
        ctx->pc = 0x268CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268CE4u;
        // 0x268ce8: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268CECu;
        goto label_268cec;
    }
    ctx->pc = 0x268CE4u;
    {
        const bool branch_taken_0x268ce4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x268CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268CE4u;
        // 0x268ce8: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268ce4) {
            ctx->pc = 0x268D08u;
            goto label_268d08;
        }
    }
    ctx->pc = 0x268CECu;
label_268cec:
    // 0x268cec: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x268cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_268cf0:
    // 0x268cf0: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x268cf0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_268cf4:
    // 0x268cf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x268cf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_268cf8:
    // 0x268cf8: 0x8c660054  lw          $a2, 0x54($v1)
    ctx->pc = 0x268cf8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_268cfc:
    // 0x268cfc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x268cfcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_268d00:
    // 0x268d00: 0xc04159e  jal         func_105678
label_268d04:
    if (ctx->pc == 0x268D04u) {
        ctx->pc = 0x268D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268D00u;
        // 0x268d04: 0x8e2500d8  lw          $a1, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268D08u;
        goto label_268d08;
    }
    ctx->pc = 0x268D00u;
    SET_GPR_U32(ctx, 31, 0x268D08u);
    ctx->pc = 0x268D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268D00u;
    // 0x268d04: 0x8e2500d8  lw          $a1, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x268D00u, 0x268D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268D08u;
label_268d08:
    // 0x268d08: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x268d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_268d0c:
    // 0x268d0c: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x268d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_268d10:
    // 0x268d10: 0x12400012  beqz        $s2, . + 4 + (0x12 << 2)
label_268d14:
    if (ctx->pc == 0x268D14u) {
        ctx->pc = 0x268D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268D10u;
        // 0x268d14: 0xac620018  sw          $v0, 0x18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268D18u;
        goto label_268d18;
    }
    ctx->pc = 0x268D10u;
    {
        const bool branch_taken_0x268d10 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x268D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268D10u;
        // 0x268d14: 0xac620018  sw          $v0, 0x18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268d10) {
            ctx->pc = 0x268D5Cu;
            goto label_268d5c;
        }
    }
    ctx->pc = 0x268D18u;
label_268d18:
    // 0x268d18: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x268d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_268d1c:
    // 0x268d1c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x268d1cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_268d20:
    // 0x268d20: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x268d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_268d24:
    // 0x268d24: 0x40f809  jalr        $v0
label_268d28:
    if (ctx->pc == 0x268D28u) {
        ctx->pc = 0x268D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268D24u;
        // 0x268d28: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268D2Cu;
        goto label_268d2c;
    }
    ctx->pc = 0x268D24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x268D2Cu);
        ctx->pc = 0x268D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268D24u;
        // 0x268d28: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x268D24u, 0x268D2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x268D2Cu;
label_268d2c:
    // 0x268d2c: 0x3c0a0027  lui         $t2, 0x27
    ctx->pc = 0x268d2cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)39 << 16));
label_268d30:
    // 0x268d30: 0x3c013e6e  lui         $at, 0x3E6E
    ctx->pc = 0x268d30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15982 << 16));
label_268d34:
    // 0x268d34: 0x3421eef0  ori         $at, $at, 0xEEF0
    ctx->pc = 0x268d34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61168);
label_268d38:
    // 0x268d38: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x268d38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_268d3c:
    // 0x268d3c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x268d3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_268d40:
    // 0x268d40: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x268d40u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_268d44:
    // 0x268d44: 0x254aa1f0  addiu       $t2, $t2, -0x5E10
    ctx->pc = 0x268d44u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294943216));
label_268d48:
    // 0x268d48: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x268d48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_268d4c:
    // 0x268d4c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x268d4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_268d50:
    // 0x268d50: 0x2406014b  addiu       $a2, $zero, 0x14B
    ctx->pc = 0x268d50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 331));
label_268d54:
    // 0x268d54: 0xc041664  jal         func_105990
label_268d58:
    if (ctx->pc == 0x268D58u) {
        ctx->pc = 0x268D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268D54u;
        // 0x268d58: 0x24082000  addiu       $t0, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268D5Cu;
        goto label_268d5c;
    }
    ctx->pc = 0x268D54u;
    SET_GPR_U32(ctx, 31, 0x268D5Cu);
    ctx->pc = 0x268D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268D54u;
    // 0x268d58: 0x24082000  addiu       $t0, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x268D54u, 0x268D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268D5Cu;
label_268d5c:
    // 0x268d5c: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
label_268d60:
    if (ctx->pc == 0x268D60u) {
        ctx->pc = 0x268D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268D5Cu;
        // 0x268d60: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268D64u;
        goto label_268d64;
    }
    ctx->pc = 0x268D5Cu;
    {
        const bool branch_taken_0x268d5c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x268D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268D5Cu;
        // 0x268d60: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268d5c) {
            ctx->pc = 0x268D84u;
            goto label_268d84;
        }
    }
    ctx->pc = 0x268D64u;
label_268d64:
    // 0x268d64: 0x8e2500d8  lw          $a1, 0xD8($s1)
    ctx->pc = 0x268d64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_268d68:
    // 0x268d68: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x268d68u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_268d6c:
    // 0x268d6c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x268d6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_268d70:
    // 0x268d70: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x268d70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_268d74:
    // 0x268d74: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x268d74u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_268d78:
    // 0x268d78: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x268d78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_268d7c:
    // 0x268d7c: 0xc041b20  jal         func_106C80
label_268d80:
    if (ctx->pc == 0x268D80u) {
        ctx->pc = 0x268D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268D7Cu;
        // 0x268d80: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268D84u;
        goto label_268d84;
    }
    ctx->pc = 0x268D7Cu;
    SET_GPR_U32(ctx, 31, 0x268D84u);
    ctx->pc = 0x268D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268D7Cu;
    // 0x268d80: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x268D7Cu, 0x268D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268D84u;
label_268d84:
    // 0x268d84: 0xc05d484  jal         func_175210
label_268d88:
    if (ctx->pc == 0x268D88u) {
        ctx->pc = 0x268D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268D84u;
        // 0x268d88: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268D8Cu;
        goto label_268d8c;
    }
    ctx->pc = 0x268D84u;
    SET_GPR_U32(ctx, 31, 0x268D8Cu);
    ctx->pc = 0x268D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268D84u;
    // 0x268d88: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x268D84u, 0x268D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268D8Cu;
label_268d8c:
    // 0x268d8c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x268d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_268d90:
    // 0x268d90: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x268d90u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_268d94:
    // 0x268d94: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x268d94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_268d98:
    // 0x268d98: 0xa0f809  jalr        $a1
label_268d9c:
    if (ctx->pc == 0x268D9Cu) {
        ctx->pc = 0x268D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268D98u;
        // 0x268d9c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268DA0u;
        goto label_268da0;
    }
    ctx->pc = 0x268D98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x268DA0u);
        ctx->pc = 0x268D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268D98u;
        // 0x268d9c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x268D98u, 0x268DA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x268DA0u;
label_268da0:
    // 0x268da0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x268da0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_268da4:
    // 0x268da4: 0xc087016  jal         func_21C058
label_268da8:
    if (ctx->pc == 0x268DA8u) {
        ctx->pc = 0x268DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268DA4u;
        // 0x268da8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268DACu;
        goto label_268dac;
    }
    ctx->pc = 0x268DA4u;
    SET_GPR_U32(ctx, 31, 0x268DACu);
    ctx->pc = 0x268DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268DA4u;
    // 0x268da8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x268DA4u, 0x268DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268DACu;
label_268dac:
    // 0x268dac: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x268dacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_268db0:
    // 0x268db0: 0xc05d53a  jal         func_1754E8
label_268db4:
    if (ctx->pc == 0x268DB4u) {
        ctx->pc = 0x268DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268DB0u;
        // 0x268db4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268DB8u;
        goto label_268db8;
    }
    ctx->pc = 0x268DB0u;
    SET_GPR_U32(ctx, 31, 0x268DB8u);
    ctx->pc = 0x268DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268DB0u;
    // 0x268db4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x268DB0u, 0x268DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268DB8u;
label_268db8:
    // 0x268db8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x268db8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_268dbc:
    // 0x268dbc: 0xc05d4f6  jal         func_1753D8
label_268dc0:
    if (ctx->pc == 0x268DC0u) {
        ctx->pc = 0x268DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268DBCu;
        // 0x268dc0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268DC4u;
        goto label_268dc4;
    }
    ctx->pc = 0x268DBCu;
    SET_GPR_U32(ctx, 31, 0x268DC4u);
    ctx->pc = 0x268DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268DBCu;
    // 0x268dc0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x268DBCu, 0x268DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268DC4u;
label_268dc4:
    // 0x268dc4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x268dc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_268dc8:
    // 0x268dc8: 0xc089990  jal         func_226640
label_268dcc:
    if (ctx->pc == 0x268DCCu) {
        ctx->pc = 0x268DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268DC8u;
        // 0x268dcc: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268DD0u;
        goto label_268dd0;
    }
    ctx->pc = 0x268DC8u;
    SET_GPR_U32(ctx, 31, 0x268DD0u);
    ctx->pc = 0x268DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268DC8u;
    // 0x268dcc: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x268DC8u, 0x268DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268DD0u;
label_268dd0:
    // 0x268dd0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x268dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_268dd4:
    // 0x268dd4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x268dd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_268dd8:
    // 0x268dd8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x268dd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_268ddc:
    // 0x268ddc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x268ddcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_268de0:
    // 0x268de0: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x268de0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_268de4:
    // 0x268de4: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x268de4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_268de8:
    // 0x268de8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x268de8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_268dec:
    // 0x268dec: 0x3e00008  jr          $ra
label_268df0:
    if (ctx->pc == 0x268DF0u) {
        ctx->pc = 0x268DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268DECu;
        // 0x268df0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268DF4u;
        goto label_268df4;
    }
    ctx->pc = 0x268DECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x268DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268DECu;
        // 0x268df0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x268DECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x268DF4u;
label_268df4:
    // 0x268df4: 0x0  nop
    ctx->pc = 0x268df4u;
    // NOP
    ctx->pc = 0x268df8u;
}
