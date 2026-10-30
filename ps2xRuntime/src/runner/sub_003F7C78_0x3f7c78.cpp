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

// Function: sub_003F7C78
// Address: 0x3f7c78 - 0x3f7e08
void sub_003F7C78_0x3f7c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F7C78_0x3f7c78");
#endif

    switch (ctx->pc) {
        case 0x3f7c78u: goto label_3f7c78;
        case 0x3f7c7cu: goto label_3f7c7c;
        case 0x3f7c80u: goto label_3f7c80;
        case 0x3f7c84u: goto label_3f7c84;
        case 0x3f7c88u: goto label_3f7c88;
        case 0x3f7c8cu: goto label_3f7c8c;
        case 0x3f7c90u: goto label_3f7c90;
        case 0x3f7c94u: goto label_3f7c94;
        case 0x3f7c98u: goto label_3f7c98;
        case 0x3f7c9cu: goto label_3f7c9c;
        case 0x3f7ca0u: goto label_3f7ca0;
        case 0x3f7ca4u: goto label_3f7ca4;
        case 0x3f7ca8u: goto label_3f7ca8;
        case 0x3f7cacu: goto label_3f7cac;
        case 0x3f7cb0u: goto label_3f7cb0;
        case 0x3f7cb4u: goto label_3f7cb4;
        case 0x3f7cb8u: goto label_3f7cb8;
        case 0x3f7cbcu: goto label_3f7cbc;
        case 0x3f7cc0u: goto label_3f7cc0;
        case 0x3f7cc4u: goto label_3f7cc4;
        case 0x3f7cc8u: goto label_3f7cc8;
        case 0x3f7cccu: goto label_3f7ccc;
        case 0x3f7cd0u: goto label_3f7cd0;
        case 0x3f7cd4u: goto label_3f7cd4;
        case 0x3f7cd8u: goto label_3f7cd8;
        case 0x3f7cdcu: goto label_3f7cdc;
        case 0x3f7ce0u: goto label_3f7ce0;
        case 0x3f7ce4u: goto label_3f7ce4;
        case 0x3f7ce8u: goto label_3f7ce8;
        case 0x3f7cecu: goto label_3f7cec;
        case 0x3f7cf0u: goto label_3f7cf0;
        case 0x3f7cf4u: goto label_3f7cf4;
        case 0x3f7cf8u: goto label_3f7cf8;
        case 0x3f7cfcu: goto label_3f7cfc;
        case 0x3f7d00u: goto label_3f7d00;
        case 0x3f7d04u: goto label_3f7d04;
        case 0x3f7d08u: goto label_3f7d08;
        case 0x3f7d0cu: goto label_3f7d0c;
        case 0x3f7d10u: goto label_3f7d10;
        case 0x3f7d14u: goto label_3f7d14;
        case 0x3f7d18u: goto label_3f7d18;
        case 0x3f7d1cu: goto label_3f7d1c;
        case 0x3f7d20u: goto label_3f7d20;
        case 0x3f7d24u: goto label_3f7d24;
        case 0x3f7d28u: goto label_3f7d28;
        case 0x3f7d2cu: goto label_3f7d2c;
        case 0x3f7d30u: goto label_3f7d30;
        case 0x3f7d34u: goto label_3f7d34;
        case 0x3f7d38u: goto label_3f7d38;
        case 0x3f7d3cu: goto label_3f7d3c;
        case 0x3f7d40u: goto label_3f7d40;
        case 0x3f7d44u: goto label_3f7d44;
        case 0x3f7d48u: goto label_3f7d48;
        case 0x3f7d4cu: goto label_3f7d4c;
        case 0x3f7d50u: goto label_3f7d50;
        case 0x3f7d54u: goto label_3f7d54;
        case 0x3f7d58u: goto label_3f7d58;
        case 0x3f7d5cu: goto label_3f7d5c;
        case 0x3f7d60u: goto label_3f7d60;
        case 0x3f7d64u: goto label_3f7d64;
        case 0x3f7d68u: goto label_3f7d68;
        case 0x3f7d6cu: goto label_3f7d6c;
        case 0x3f7d70u: goto label_3f7d70;
        case 0x3f7d74u: goto label_3f7d74;
        case 0x3f7d78u: goto label_3f7d78;
        case 0x3f7d7cu: goto label_3f7d7c;
        case 0x3f7d80u: goto label_3f7d80;
        case 0x3f7d84u: goto label_3f7d84;
        case 0x3f7d88u: goto label_3f7d88;
        case 0x3f7d8cu: goto label_3f7d8c;
        case 0x3f7d90u: goto label_3f7d90;
        case 0x3f7d94u: goto label_3f7d94;
        case 0x3f7d98u: goto label_3f7d98;
        case 0x3f7d9cu: goto label_3f7d9c;
        case 0x3f7da0u: goto label_3f7da0;
        case 0x3f7da4u: goto label_3f7da4;
        case 0x3f7da8u: goto label_3f7da8;
        case 0x3f7dacu: goto label_3f7dac;
        case 0x3f7db0u: goto label_3f7db0;
        case 0x3f7db4u: goto label_3f7db4;
        case 0x3f7db8u: goto label_3f7db8;
        case 0x3f7dbcu: goto label_3f7dbc;
        case 0x3f7dc0u: goto label_3f7dc0;
        case 0x3f7dc4u: goto label_3f7dc4;
        case 0x3f7dc8u: goto label_3f7dc8;
        case 0x3f7dccu: goto label_3f7dcc;
        case 0x3f7dd0u: goto label_3f7dd0;
        case 0x3f7dd4u: goto label_3f7dd4;
        case 0x3f7dd8u: goto label_3f7dd8;
        case 0x3f7ddcu: goto label_3f7ddc;
        case 0x3f7de0u: goto label_3f7de0;
        case 0x3f7de4u: goto label_3f7de4;
        case 0x3f7de8u: goto label_3f7de8;
        case 0x3f7decu: goto label_3f7dec;
        case 0x3f7df0u: goto label_3f7df0;
        case 0x3f7df4u: goto label_3f7df4;
        case 0x3f7df8u: goto label_3f7df8;
        case 0x3f7dfcu: goto label_3f7dfc;
        case 0x3f7e00u: goto label_3f7e00;
        case 0x3f7e04u: goto label_3f7e04;
        default: break;
    }

    ctx->pc = 0x3f7c78u;

label_3f7c78:
    // 0x3f7c78: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x3f7c78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_3f7c7c:
    // 0x3f7c7c: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x3f7c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
label_3f7c80:
    // 0x3f7c80: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x3f7c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
label_3f7c84:
    // 0x3f7c84: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3f7c84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3f7c88:
    // 0x3f7c88: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x3f7c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
label_3f7c8c:
    // 0x3f7c8c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3f7c8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f7c90:
    // 0x3f7c90: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x3f7c90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_3f7c94:
    // 0x3f7c94: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3f7c94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3f7c98:
    // 0x3f7c98: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3f7c98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3f7c9c:
    // 0x3f7c9c: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3f7c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3f7ca0:
    // 0x3f7ca0: 0x40f809  jalr        $v0
label_3f7ca4:
    if (ctx->pc == 0x3F7CA4u) {
        ctx->pc = 0x3F7CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7CA0u;
        // 0x3f7ca4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F7CA8u;
        goto label_3f7ca8;
    }
    ctx->pc = 0x3F7CA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3F7CA8u);
        ctx->pc = 0x3F7CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7CA0u;
        // 0x3f7ca4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F7CA0u, 0x3F7CA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F7CA8u;
label_3f7ca8:
    // 0x3f7ca8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3f7ca8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f7cac:
    // 0x3f7cac: 0xc0ea14c  jal         func_3A8530
label_3f7cb0:
    if (ctx->pc == 0x3F7CB0u) {
        ctx->pc = 0x3F7CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7CACu;
        // 0x3f7cb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F7CB4u;
        goto label_3f7cb4;
    }
    ctx->pc = 0x3F7CACu;
    SET_GPR_U32(ctx, 31, 0x3F7CB4u);
    ctx->pc = 0x3F7CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F7CACu;
    // 0x3f7cb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3F7CACu, 0x3F7CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F7CB4u;
label_3f7cb4:
    // 0x3f7cb4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3f7cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3f7cb8:
    // 0x3f7cb8: 0xc0ea12a  jal         func_3A84A8
label_3f7cbc:
    if (ctx->pc == 0x3F7CBCu) {
        ctx->pc = 0x3F7CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7CB8u;
        // 0x3f7cbc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F7CC0u;
        goto label_3f7cc0;
    }
    ctx->pc = 0x3F7CB8u;
    SET_GPR_U32(ctx, 31, 0x3F7CC0u);
    ctx->pc = 0x3F7CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F7CB8u;
    // 0x3f7cbc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3F7CB8u, 0x3F7CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F7CC0u;
label_3f7cc0:
    // 0x3f7cc0: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3f7cc0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3f7cc4:
    // 0x3f7cc4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3f7cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3f7cc8:
    // 0x3f7cc8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3f7cc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f7ccc:
    // 0x3f7ccc: 0xc0ea12a  jal         func_3A84A8
label_3f7cd0:
    if (ctx->pc == 0x3F7CD0u) {
        ctx->pc = 0x3F7CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7CCCu;
        // 0x3f7cd0: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F7CD4u;
        goto label_3f7cd4;
    }
    ctx->pc = 0x3F7CCCu;
    SET_GPR_U32(ctx, 31, 0x3F7CD4u);
    ctx->pc = 0x3F7CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F7CCCu;
    // 0x3f7cd0: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3F7CCCu, 0x3F7CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F7CD4u;
label_3f7cd4:
    // 0x3f7cd4: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3f7cd4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3f7cd8:
    // 0x3f7cd8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3f7cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f7cdc:
    // 0x3f7cdc: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x3f7cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3f7ce0:
    // 0x3f7ce0: 0xc0e858c  jal         func_3A1630
label_3f7ce4:
    if (ctx->pc == 0x3F7CE4u) {
        ctx->pc = 0x3F7CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7CE0u;
        // 0x3f7ce4: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F7CE8u;
        goto label_3f7ce8;
    }
    ctx->pc = 0x3F7CE0u;
    SET_GPR_U32(ctx, 31, 0x3F7CE8u);
    ctx->pc = 0x3F7CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F7CE0u;
    // 0x3f7ce4: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3F7CE0u, 0x3F7CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F7CE8u;
label_3f7ce8:
    // 0x3f7ce8: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3f7ce8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f7cec:
    // 0x3f7cec: 0x24030405  addiu       $v1, $zero, 0x405
    ctx->pc = 0x3f7cecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1029));
label_3f7cf0:
    // 0x3f7cf0: 0x7ba50000  lq          $a1, 0x0($sp)
    ctx->pc = 0x3f7cf0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3f7cf4:
    // 0x3f7cf4: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x3f7cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_3f7cf8:
    // 0x3f7cf8: 0xae230054  sw          $v1, 0x54($s1)
    ctx->pc = 0x3f7cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
label_3f7cfc:
    // 0x3f7cfc: 0x24841750  addiu       $a0, $a0, 0x1750
    ctx->pc = 0x3f7cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5968));
label_3f7d00:
    // 0x3f7d00: 0x7e220020  sq          $v0, 0x20($s1)
    ctx->pc = 0x3f7d00u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 2));
label_3f7d04:
    // 0x3f7d04: 0x7e250010  sq          $a1, 0x10($s1)
    ctx->pc = 0x3f7d04u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 5));
label_3f7d08:
    // 0x3f7d08: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x3f7d08u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_3f7d0c:
    // 0x3f7d0c: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3f7d0cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f7d10:
    // 0x3f7d10: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x3f7d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
label_3f7d14:
    // 0x3f7d14: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x3f7d14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_3f7d18:
    // 0x3f7d18: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x3f7d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_3f7d1c:
    // 0x3f7d1c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3f7d1cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3f7d20:
    // 0x3f7d20: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3f7d20u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3f7d24:
    // 0x3f7d24: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3f7d24u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3f7d28:
    // 0x3f7d28: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3f7d28u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3f7d2c:
    // 0x3f7d2c: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3f7d2cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3f7d30:
    // 0x3f7d30: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3f7d30u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3f7d34:
    // 0x3f7d34: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3f7d34u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3f7d38:
    // 0x3f7d38: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3f7d38u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3f7d3c:
    // 0x3f7d3c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3f7d3cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3f7d40:
    // 0x3f7d40: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3f7d40u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3f7d44:
    // 0x3f7d44: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3f7d44u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3f7d48:
    // 0x3f7d48: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3f7d48u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3f7d4c:
    // 0x3f7d4c: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3f7d4cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3f7d50:
    // 0x3f7d50: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3f7d50u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3f7d54:
    // 0x3f7d54: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3f7d54u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3f7d58:
    // 0x3f7d58: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3f7d58u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3f7d5c:
    // 0x3f7d5c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x3f7d5cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_3f7d60:
    // 0x3f7d60: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3f7d60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3f7d64:
    // 0x3f7d64: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3f7d64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f7d68:
    // 0x3f7d68: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x3f7d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
label_3f7d6c:
    // 0x3f7d6c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3f7d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3f7d70:
    // 0x3f7d70: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x3f7d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
label_3f7d74:
    // 0x3f7d74: 0x3c050a0a  lui         $a1, 0xA0A
    ctx->pc = 0x3f7d74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2570 << 16));
label_3f7d78:
    // 0x3f7d78: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x3f7d78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_3f7d7c:
    // 0x3f7d7c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3f7d7cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3f7d80:
    // 0x3f7d80: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3f7d80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f7d84:
    // 0x3f7d84: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3f7d84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3f7d88:
    // 0x3f7d88: 0x7e420000  sq          $v0, 0x0($s2)
    ctx->pc = 0x3f7d88u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
label_3f7d8c:
    // 0x3f7d8c: 0x34a50aaf  ori         $a1, $a1, 0xAAF
    ctx->pc = 0x3f7d8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2735);
label_3f7d90:
    // 0x3f7d90: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x3f7d90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_3f7d94:
    // 0x3f7d94: 0x240700c8  addiu       $a3, $zero, 0xC8
    ctx->pc = 0x3f7d94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
label_3f7d98:
    // 0x3f7d98: 0x3c01bfc0  lui         $at, 0xBFC0
    ctx->pc = 0x3f7d98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49088 << 16));
label_3f7d9c:
    // 0x3f7d9c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3f7d9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3f7da0:
    // 0x3f7da0: 0x34630d02  ori         $v1, $v1, 0xD02
    ctx->pc = 0x3f7da0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3330);
label_3f7da4:
    // 0x3f7da4: 0xae46002c  sw          $a2, 0x2C($s2)
    ctx->pc = 0x3f7da4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 6));
label_3f7da8:
    // 0x3f7da8: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x3f7da8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
label_3f7dac:
    // 0x3f7dac: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3f7dacu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3f7db0:
    // 0x3f7db0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3f7db0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3f7db4:
    // 0x3f7db4: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x3f7db4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_3f7db8:
    // 0x3f7db8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x3f7db8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3f7dbc:
    // 0x3f7dbc: 0x3c013bf5  lui         $at, 0x3BF5
    ctx->pc = 0x3f7dbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15349 << 16));
label_3f7dc0:
    // 0x3f7dc0: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x3f7dc0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_3f7dc4:
    // 0x3f7dc4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3f7dc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f7dc8:
    // 0x3f7dc8: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x3f7dc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_3f7dcc:
    // 0x3f7dcc: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x3f7dccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
label_3f7dd0:
    // 0x3f7dd0: 0xe4820004  swc1        $f2, 0x4($a0)
    ctx->pc = 0x3f7dd0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_3f7dd4:
    // 0x3f7dd4: 0xe4830008  swc1        $f3, 0x8($a0)
    ctx->pc = 0x3f7dd4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_3f7dd8:
    // 0x3f7dd8: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x3f7dd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_3f7ddc:
    // 0x3f7ddc: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x3f7ddcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3f7de0:
    // 0x3f7de0: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x3f7de0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_3f7de4:
    // 0x3f7de4: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3f7de4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3f7de8:
    // 0x3f7de8: 0xae430028  sw          $v1, 0x28($s2)
    ctx->pc = 0x3f7de8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 3));
label_3f7dec:
    // 0x3f7dec: 0x7e420010  sq          $v0, 0x10($s2)
    ctx->pc = 0x3f7decu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 2));
label_3f7df0:
    // 0x3f7df0: 0xae450020  sw          $a1, 0x20($s2)
    ctx->pc = 0x3f7df0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 5));
label_3f7df4:
    // 0x3f7df4: 0xae470024  sw          $a3, 0x24($s2)
    ctx->pc = 0x3f7df4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 7));
label_3f7df8:
    // 0x3f7df8: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x3f7df8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3f7dfc:
    // 0x3f7dfc: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x3f7dfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_3f7e00:
    // 0x3f7e00: 0x3e00008  jr          $ra
label_3f7e04:
    if (ctx->pc == 0x3F7E04u) {
        ctx->pc = 0x3F7E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7E00u;
        // 0x3f7e04: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F7E08u;
        goto label_fallthrough_0x3f7e00;
    }
    ctx->pc = 0x3F7E00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F7E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7E00u;
        // 0x3f7e04: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F7E00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3f7e00:
    ctx->pc = 0x3F7E08u;
}
