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

// Function: sub_001F6D90
// Address: 0x1f6d90 - 0x1f6f60
void sub_001F6D90_0x1f6d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F6D90_0x1f6d90");
#endif

    switch (ctx->pc) {
        case 0x1f6d90u: goto label_1f6d90;
        case 0x1f6d94u: goto label_1f6d94;
        case 0x1f6d98u: goto label_1f6d98;
        case 0x1f6d9cu: goto label_1f6d9c;
        case 0x1f6da0u: goto label_1f6da0;
        case 0x1f6da4u: goto label_1f6da4;
        case 0x1f6da8u: goto label_1f6da8;
        case 0x1f6dacu: goto label_1f6dac;
        case 0x1f6db0u: goto label_1f6db0;
        case 0x1f6db4u: goto label_1f6db4;
        case 0x1f6db8u: goto label_1f6db8;
        case 0x1f6dbcu: goto label_1f6dbc;
        case 0x1f6dc0u: goto label_1f6dc0;
        case 0x1f6dc4u: goto label_1f6dc4;
        case 0x1f6dc8u: goto label_1f6dc8;
        case 0x1f6dccu: goto label_1f6dcc;
        case 0x1f6dd0u: goto label_1f6dd0;
        case 0x1f6dd4u: goto label_1f6dd4;
        case 0x1f6dd8u: goto label_1f6dd8;
        case 0x1f6ddcu: goto label_1f6ddc;
        case 0x1f6de0u: goto label_1f6de0;
        case 0x1f6de4u: goto label_1f6de4;
        case 0x1f6de8u: goto label_1f6de8;
        case 0x1f6decu: goto label_1f6dec;
        case 0x1f6df0u: goto label_1f6df0;
        case 0x1f6df4u: goto label_1f6df4;
        case 0x1f6df8u: goto label_1f6df8;
        case 0x1f6dfcu: goto label_1f6dfc;
        case 0x1f6e00u: goto label_1f6e00;
        case 0x1f6e04u: goto label_1f6e04;
        case 0x1f6e08u: goto label_1f6e08;
        case 0x1f6e0cu: goto label_1f6e0c;
        case 0x1f6e10u: goto label_1f6e10;
        case 0x1f6e14u: goto label_1f6e14;
        case 0x1f6e18u: goto label_1f6e18;
        case 0x1f6e1cu: goto label_1f6e1c;
        case 0x1f6e20u: goto label_1f6e20;
        case 0x1f6e24u: goto label_1f6e24;
        case 0x1f6e28u: goto label_1f6e28;
        case 0x1f6e2cu: goto label_1f6e2c;
        case 0x1f6e30u: goto label_1f6e30;
        case 0x1f6e34u: goto label_1f6e34;
        case 0x1f6e38u: goto label_1f6e38;
        case 0x1f6e3cu: goto label_1f6e3c;
        case 0x1f6e40u: goto label_1f6e40;
        case 0x1f6e44u: goto label_1f6e44;
        case 0x1f6e48u: goto label_1f6e48;
        case 0x1f6e4cu: goto label_1f6e4c;
        case 0x1f6e50u: goto label_1f6e50;
        case 0x1f6e54u: goto label_1f6e54;
        case 0x1f6e58u: goto label_1f6e58;
        case 0x1f6e5cu: goto label_1f6e5c;
        case 0x1f6e60u: goto label_1f6e60;
        case 0x1f6e64u: goto label_1f6e64;
        case 0x1f6e68u: goto label_1f6e68;
        case 0x1f6e6cu: goto label_1f6e6c;
        case 0x1f6e70u: goto label_1f6e70;
        case 0x1f6e74u: goto label_1f6e74;
        case 0x1f6e78u: goto label_1f6e78;
        case 0x1f6e7cu: goto label_1f6e7c;
        case 0x1f6e80u: goto label_1f6e80;
        case 0x1f6e84u: goto label_1f6e84;
        case 0x1f6e88u: goto label_1f6e88;
        case 0x1f6e8cu: goto label_1f6e8c;
        case 0x1f6e90u: goto label_1f6e90;
        case 0x1f6e94u: goto label_1f6e94;
        case 0x1f6e98u: goto label_1f6e98;
        case 0x1f6e9cu: goto label_1f6e9c;
        case 0x1f6ea0u: goto label_1f6ea0;
        case 0x1f6ea4u: goto label_1f6ea4;
        case 0x1f6ea8u: goto label_1f6ea8;
        case 0x1f6eacu: goto label_1f6eac;
        case 0x1f6eb0u: goto label_1f6eb0;
        case 0x1f6eb4u: goto label_1f6eb4;
        case 0x1f6eb8u: goto label_1f6eb8;
        case 0x1f6ebcu: goto label_1f6ebc;
        case 0x1f6ec0u: goto label_1f6ec0;
        case 0x1f6ec4u: goto label_1f6ec4;
        case 0x1f6ec8u: goto label_1f6ec8;
        case 0x1f6eccu: goto label_1f6ecc;
        case 0x1f6ed0u: goto label_1f6ed0;
        case 0x1f6ed4u: goto label_1f6ed4;
        case 0x1f6ed8u: goto label_1f6ed8;
        case 0x1f6edcu: goto label_1f6edc;
        case 0x1f6ee0u: goto label_1f6ee0;
        case 0x1f6ee4u: goto label_1f6ee4;
        case 0x1f6ee8u: goto label_1f6ee8;
        case 0x1f6eecu: goto label_1f6eec;
        case 0x1f6ef0u: goto label_1f6ef0;
        case 0x1f6ef4u: goto label_1f6ef4;
        case 0x1f6ef8u: goto label_1f6ef8;
        case 0x1f6efcu: goto label_1f6efc;
        case 0x1f6f00u: goto label_1f6f00;
        case 0x1f6f04u: goto label_1f6f04;
        case 0x1f6f08u: goto label_1f6f08;
        case 0x1f6f0cu: goto label_1f6f0c;
        case 0x1f6f10u: goto label_1f6f10;
        case 0x1f6f14u: goto label_1f6f14;
        case 0x1f6f18u: goto label_1f6f18;
        case 0x1f6f1cu: goto label_1f6f1c;
        case 0x1f6f20u: goto label_1f6f20;
        case 0x1f6f24u: goto label_1f6f24;
        case 0x1f6f28u: goto label_1f6f28;
        case 0x1f6f2cu: goto label_1f6f2c;
        case 0x1f6f30u: goto label_1f6f30;
        case 0x1f6f34u: goto label_1f6f34;
        case 0x1f6f38u: goto label_1f6f38;
        case 0x1f6f3cu: goto label_1f6f3c;
        case 0x1f6f40u: goto label_1f6f40;
        case 0x1f6f44u: goto label_1f6f44;
        case 0x1f6f48u: goto label_1f6f48;
        case 0x1f6f4cu: goto label_1f6f4c;
        case 0x1f6f50u: goto label_1f6f50;
        case 0x1f6f54u: goto label_1f6f54;
        case 0x1f6f58u: goto label_1f6f58;
        case 0x1f6f5cu: goto label_1f6f5c;
        default: break;
    }

    ctx->pc = 0x1f6d90u;

label_1f6d90:
    // 0x1f6d90: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1f6d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1f6d94:
    // 0x1f6d94: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1f6d94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_1f6d98:
    // 0x1f6d98: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1f6d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_1f6d9c:
    // 0x1f6d9c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f6d9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f6da0:
    // 0x1f6da0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1f6da0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1f6da4:
    // 0x1f6da4: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1f6da4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_1f6da8:
    // 0x1f6da8: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1f6da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_1f6dac:
    // 0x1f6dac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f6dacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1f6db0:
    // 0x1f6db0: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1f6db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1f6db4:
    // 0x1f6db4: 0x10400062  beqz        $v0, . + 4 + (0x62 << 2)
label_1f6db8:
    if (ctx->pc == 0x1F6DB8u) {
        ctx->pc = 0x1F6DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6DB4u;
        // 0x1f6db8: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6DBCu;
        goto label_1f6dbc;
    }
    ctx->pc = 0x1F6DB4u;
    {
        const bool branch_taken_0x1f6db4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6DB4u;
        // 0x1f6db8: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6db4) {
            ctx->pc = 0x1F6F40u;
            goto label_1f6f40;
        }
    }
    ctx->pc = 0x1F6DBCu;
label_1f6dbc:
    // 0x1f6dbc: 0xc07d780  jal         func_1F5E00
label_1f6dc0:
    if (ctx->pc == 0x1F6DC0u) {
        ctx->pc = 0x1F6DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6DBCu;
        // 0x1f6dc0: 0x3c100055  lui         $s0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6DC4u;
        goto label_1f6dc4;
    }
    ctx->pc = 0x1F6DBCu;
    SET_GPR_U32(ctx, 31, 0x1F6DC4u);
    ctx->pc = 0x1F6DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6DBCu;
    // 0x1f6dc0: 0x3c100055  lui         $s0, 0x55 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)85 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5E00u, 0x1F6DBCu, 0x1F6DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6DC4u;
label_1f6dc4:
    // 0x1f6dc4: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x1f6dc4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f6dc8:
    // 0x1f6dc8: 0x8e240090  lw          $a0, 0x90($s1)
    ctx->pc = 0x1f6dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_1f6dcc:
    // 0x1f6dcc: 0x26107758  addiu       $s0, $s0, 0x7758
    ctx->pc = 0x1f6dccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 30552));
label_1f6dd0:
    // 0x1f6dd0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1f6dd0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f6dd4:
    // 0x1f6dd4: 0xc073462  jal         func_1CD188
label_1f6dd8:
    if (ctx->pc == 0x1F6DD8u) {
        ctx->pc = 0x1F6DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6DD4u;
        // 0x1f6dd8: 0x263200a0  addiu       $s2, $s1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6DDCu;
        goto label_1f6ddc;
    }
    ctx->pc = 0x1F6DD4u;
    SET_GPR_U32(ctx, 31, 0x1F6DDCu);
    ctx->pc = 0x1F6DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6DD4u;
    // 0x1f6dd8: 0x263200a0  addiu       $s2, $s1, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD188u, 0x1F6DD4u, 0x1F6DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6DDCu;
label_1f6ddc:
    // 0x1f6ddc: 0x8e240090  lw          $a0, 0x90($s1)
    ctx->pc = 0x1f6ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_1f6de0:
    // 0x1f6de0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f6de0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f6de4:
    // 0x1f6de4: 0xc139138  jal         func_4E44E0
label_1f6de8:
    if (ctx->pc == 0x1F6DE8u) {
        ctx->pc = 0x1F6DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6DE4u;
        // 0x1f6de8: 0x2406015b  addiu       $a2, $zero, 0x15B (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 347));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6DECu;
        goto label_1f6dec;
    }
    ctx->pc = 0x1F6DE4u;
    SET_GPR_U32(ctx, 31, 0x1F6DECu);
    ctx->pc = 0x1F6DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6DE4u;
    // 0x1f6de8: 0x2406015b  addiu       $a2, $zero, 0x15B (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 347));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E44E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E44E0u, 0x1F6DE4u, 0x1F6DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6DECu;
label_1f6dec:
    // 0x1f6dec: 0x8e240094  lw          $a0, 0x94($s1)
    ctx->pc = 0x1f6decu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
label_1f6df0:
    // 0x1f6df0: 0x8c8200d0  lw          $v0, 0xD0($a0)
    ctx->pc = 0x1f6df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
label_1f6df4:
    // 0x1f6df4: 0x248400d0  addiu       $a0, $a0, 0xD0
    ctx->pc = 0x1f6df4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 208));
label_1f6df8:
    // 0x1f6df8: 0x84430068  lh          $v1, 0x68($v0)
    ctx->pc = 0x1f6df8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_1f6dfc:
    // 0x1f6dfc: 0x8c45006c  lw          $a1, 0x6C($v0)
    ctx->pc = 0x1f6dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_1f6e00:
    // 0x1f6e00: 0xa0f809  jalr        $a1
label_1f6e04:
    if (ctx->pc == 0x1F6E04u) {
        ctx->pc = 0x1F6E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6E00u;
        // 0x1f6e04: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6E08u;
        goto label_1f6e08;
    }
    ctx->pc = 0x1F6E00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1F6E08u);
        ctx->pc = 0x1F6E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6E00u;
        // 0x1f6e04: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F6E00u, 0x1F6E08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F6E08u;
label_1f6e08:
    // 0x1f6e08: 0x8e240094  lw          $a0, 0x94($s1)
    ctx->pc = 0x1f6e08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
label_1f6e0c:
    // 0x1f6e0c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f6e0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f6e10:
    // 0x1f6e10: 0xc13a72a  jal         func_4E9CA8
label_1f6e14:
    if (ctx->pc == 0x1F6E14u) {
        ctx->pc = 0x1F6E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6E10u;
        // 0x1f6e14: 0x2406015e  addiu       $a2, $zero, 0x15E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6E18u;
        goto label_1f6e18;
    }
    ctx->pc = 0x1F6E10u;
    SET_GPR_U32(ctx, 31, 0x1F6E18u);
    ctx->pc = 0x1F6E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6E10u;
    // 0x1f6e14: 0x2406015e  addiu       $a2, $zero, 0x15E (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E9CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E9CA8u, 0x1F6E10u, 0x1F6E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6E18u;
label_1f6e18:
    // 0x1f6e18: 0x8e25009c  lw          $a1, 0x9C($s1)
    ctx->pc = 0x1f6e18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_1f6e1c:
    // 0x1f6e1c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f6e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f6e20:
    // 0x1f6e20: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x1f6e20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_1f6e24:
    // 0x1f6e24: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x1f6e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_1f6e28:
    // 0x1f6e28: 0x60f809  jalr        $v1
label_1f6e2c:
    if (ctx->pc == 0x1F6E2Cu) {
        ctx->pc = 0x1F6E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6E28u;
        // 0x1f6e2c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6E30u;
        goto label_1f6e30;
    }
    ctx->pc = 0x1F6E28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F6E30u);
        ctx->pc = 0x1F6E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6E28u;
        // 0x1f6e2c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F6E28u, 0x1F6E30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F6E30u;
label_1f6e30:
    // 0x1f6e30: 0x8e24009c  lw          $a0, 0x9C($s1)
    ctx->pc = 0x1f6e30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_1f6e34:
    // 0x1f6e34: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f6e34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f6e38:
    // 0x1f6e38: 0xc138e72  jal         func_4E39C8
label_1f6e3c:
    if (ctx->pc == 0x1F6E3Cu) {
        ctx->pc = 0x1F6E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6E38u;
        // 0x1f6e3c: 0x24060161  addiu       $a2, $zero, 0x161 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 353));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6E40u;
        goto label_1f6e40;
    }
    ctx->pc = 0x1F6E38u;
    SET_GPR_U32(ctx, 31, 0x1F6E40u);
    ctx->pc = 0x1F6E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6E38u;
    // 0x1f6e3c: 0x24060161  addiu       $a2, $zero, 0x161 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 353));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E39C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E39C8u, 0x1F6E38u, 0x1F6E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6E40u;
label_1f6e40:
    // 0x1f6e40: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x1f6e40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1f6e44:
    // 0x1f6e44: 0x0  nop
    ctx->pc = 0x1f6e44u;
    // NOP
label_1f6e48:
    // 0x1f6e48: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1f6e48u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1f6e4c:
    // 0x1f6e4c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f6e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f6e50:
    // 0x1f6e50: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x1f6e50u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_1f6e54:
    // 0x1f6e54: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x1f6e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_1f6e58:
    // 0x1f6e58: 0x60f809  jalr        $v1
label_1f6e5c:
    if (ctx->pc == 0x1F6E5Cu) {
        ctx->pc = 0x1F6E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6E58u;
        // 0x1f6e5c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6E60u;
        goto label_1f6e60;
    }
    ctx->pc = 0x1F6E58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F6E60u);
        ctx->pc = 0x1F6E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6E58u;
        // 0x1f6e5c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F6E58u, 0x1F6E60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F6E60u;
label_1f6e60:
    // 0x1f6e60: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1f6e60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1f6e64:
    // 0x1f6e64: 0x26857758  addiu       $a1, $s4, 0x7758
    ctx->pc = 0x1f6e64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 30552));
label_1f6e68:
    // 0x1f6e68: 0x24060165  addiu       $a2, $zero, 0x165
    ctx->pc = 0x1f6e68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 357));
label_1f6e6c:
    // 0x1f6e6c: 0xc138e72  jal         func_4E39C8
label_1f6e70:
    if (ctx->pc == 0x1F6E70u) {
        ctx->pc = 0x1F6E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6E6Cu;
        // 0x1f6e70: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6E74u;
        goto label_1f6e74;
    }
    ctx->pc = 0x1F6E6Cu;
    SET_GPR_U32(ctx, 31, 0x1F6E74u);
    ctx->pc = 0x1F6E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6E6Cu;
    // 0x1f6e70: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E39C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E39C8u, 0x1F6E6Cu, 0x1F6E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6E74u;
label_1f6e74:
    // 0x1f6e74: 0x2e620002  sltiu       $v0, $s3, 0x2
    ctx->pc = 0x1f6e74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1f6e78:
    // 0x1f6e78: 0x5440fff3  bnel        $v0, $zero, . + 4 + (-0xD << 2)
label_1f6e7c:
    if (ctx->pc == 0x1F6E7Cu) {
        ctx->pc = 0x1F6E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6E78u;
        // 0x1f6e7c: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6E80u;
        goto label_1f6e80;
    }
    ctx->pc = 0x1F6E78u;
    {
        const bool branch_taken_0x1f6e78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f6e78) {
            ctx->pc = 0x1F6E7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F6E78u;
            // 0x1f6e7c: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F6E48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f6e48;
        }
    }
    ctx->pc = 0x1F6E80u;
label_1f6e80:
    // 0x1f6e80: 0x26907758  addiu       $s0, $s4, 0x7758
    ctx->pc = 0x1f6e80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 30552));
label_1f6e84:
    // 0x1f6e84: 0x8e2400ac  lw          $a0, 0xAC($s1)
    ctx->pc = 0x1f6e84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
label_1f6e88:
    // 0x1f6e88: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f6e88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f6e8c:
    // 0x1f6e8c: 0xc13a5a0  jal         func_4E9680
label_1f6e90:
    if (ctx->pc == 0x1F6E90u) {
        ctx->pc = 0x1F6E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6E8Cu;
        // 0x1f6e90: 0x24060175  addiu       $a2, $zero, 0x175 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 373));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6E94u;
        goto label_1f6e94;
    }
    ctx->pc = 0x1F6E8Cu;
    SET_GPR_U32(ctx, 31, 0x1F6E94u);
    ctx->pc = 0x1F6E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6E8Cu;
    // 0x1f6e90: 0x24060175  addiu       $a2, $zero, 0x175 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 373));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E9680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E9680u, 0x1F6E8Cu, 0x1F6E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6E94u;
label_1f6e94:
    // 0x1f6e94: 0x8e2500b0  lw          $a1, 0xB0($s1)
    ctx->pc = 0x1f6e94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_1f6e98:
    // 0x1f6e98: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f6e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f6e9c:
    // 0x1f6e9c: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x1f6e9cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_1f6ea0:
    // 0x1f6ea0: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x1f6ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_1f6ea4:
    // 0x1f6ea4: 0x60f809  jalr        $v1
label_1f6ea8:
    if (ctx->pc == 0x1F6EA8u) {
        ctx->pc = 0x1F6EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6EA4u;
        // 0x1f6ea8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6EACu;
        goto label_1f6eac;
    }
    ctx->pc = 0x1F6EA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F6EACu);
        ctx->pc = 0x1F6EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6EA4u;
        // 0x1f6ea8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F6EA4u, 0x1F6EACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F6EACu;
label_1f6eac:
    // 0x1f6eac: 0x8e2400b0  lw          $a0, 0xB0($s1)
    ctx->pc = 0x1f6eacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_1f6eb0:
    // 0x1f6eb0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f6eb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f6eb4:
    // 0x1f6eb4: 0xc139fc8  jal         func_4E7F20
label_1f6eb8:
    if (ctx->pc == 0x1F6EB8u) {
        ctx->pc = 0x1F6EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6EB4u;
        // 0x1f6eb8: 0x24060178  addiu       $a2, $zero, 0x178 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 376));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6EBCu;
        goto label_1f6ebc;
    }
    ctx->pc = 0x1F6EB4u;
    SET_GPR_U32(ctx, 31, 0x1F6EBCu);
    ctx->pc = 0x1F6EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6EB4u;
    // 0x1f6eb8: 0x24060178  addiu       $a2, $zero, 0x178 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E7F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E7F20u, 0x1F6EB4u, 0x1F6EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6EBCu;
label_1f6ebc:
    // 0x1f6ebc: 0x8e2500b4  lw          $a1, 0xB4($s1)
    ctx->pc = 0x1f6ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
label_1f6ec0:
    // 0x1f6ec0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f6ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f6ec4:
    // 0x1f6ec4: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x1f6ec4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_1f6ec8:
    // 0x1f6ec8: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x1f6ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_1f6ecc:
    // 0x1f6ecc: 0x60f809  jalr        $v1
label_1f6ed0:
    if (ctx->pc == 0x1F6ED0u) {
        ctx->pc = 0x1F6ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6ECCu;
        // 0x1f6ed0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6ED4u;
        goto label_1f6ed4;
    }
    ctx->pc = 0x1F6ECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F6ED4u);
        ctx->pc = 0x1F6ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6ECCu;
        // 0x1f6ed0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F6ECCu, 0x1F6ED4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F6ED4u;
label_1f6ed4:
    // 0x1f6ed4: 0x8e2400b4  lw          $a0, 0xB4($s1)
    ctx->pc = 0x1f6ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
label_1f6ed8:
    // 0x1f6ed8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f6ed8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f6edc:
    // 0x1f6edc: 0xc139fc8  jal         func_4E7F20
label_1f6ee0:
    if (ctx->pc == 0x1F6EE0u) {
        ctx->pc = 0x1F6EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6EDCu;
        // 0x1f6ee0: 0x2406017b  addiu       $a2, $zero, 0x17B (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 379));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6EE4u;
        goto label_1f6ee4;
    }
    ctx->pc = 0x1F6EDCu;
    SET_GPR_U32(ctx, 31, 0x1F6EE4u);
    ctx->pc = 0x1F6EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6EDCu;
    // 0x1f6ee0: 0x2406017b  addiu       $a2, $zero, 0x17B (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 379));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E7F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E7F20u, 0x1F6EDCu, 0x1F6EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6EE4u;
label_1f6ee4:
    // 0x1f6ee4: 0x8e2500b8  lw          $a1, 0xB8($s1)
    ctx->pc = 0x1f6ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
label_1f6ee8:
    // 0x1f6ee8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f6ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f6eec:
    // 0x1f6eec: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x1f6eecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_1f6ef0:
    // 0x1f6ef0: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x1f6ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_1f6ef4:
    // 0x1f6ef4: 0x60f809  jalr        $v1
label_1f6ef8:
    if (ctx->pc == 0x1F6EF8u) {
        ctx->pc = 0x1F6EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6EF4u;
        // 0x1f6ef8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6EFCu;
        goto label_1f6efc;
    }
    ctx->pc = 0x1F6EF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F6EFCu);
        ctx->pc = 0x1F6EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6EF4u;
        // 0x1f6ef8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F6EF4u, 0x1F6EFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F6EFCu;
label_1f6efc:
    // 0x1f6efc: 0x8e2400b8  lw          $a0, 0xB8($s1)
    ctx->pc = 0x1f6efcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
label_1f6f00:
    // 0x1f6f00: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f6f00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f6f04:
    // 0x1f6f04: 0xc13a560  jal         func_4E9580
label_1f6f08:
    if (ctx->pc == 0x1F6F08u) {
        ctx->pc = 0x1F6F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6F04u;
        // 0x1f6f08: 0x2406017e  addiu       $a2, $zero, 0x17E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 382));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6F0Cu;
        goto label_1f6f0c;
    }
    ctx->pc = 0x1F6F04u;
    SET_GPR_U32(ctx, 31, 0x1F6F0Cu);
    ctx->pc = 0x1F6F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6F04u;
    // 0x1f6f08: 0x2406017e  addiu       $a2, $zero, 0x17E (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 382));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E9580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E9580u, 0x1F6F04u, 0x1F6F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6F0Cu;
label_1f6f0c:
    // 0x1f6f0c: 0x8e2500bc  lw          $a1, 0xBC($s1)
    ctx->pc = 0x1f6f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_1f6f10:
    // 0x1f6f10: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f6f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f6f14:
    // 0x1f6f14: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x1f6f14u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_1f6f18:
    // 0x1f6f18: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x1f6f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_1f6f1c:
    // 0x1f6f1c: 0x60f809  jalr        $v1
label_1f6f20:
    if (ctx->pc == 0x1F6F20u) {
        ctx->pc = 0x1F6F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6F1Cu;
        // 0x1f6f20: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6F24u;
        goto label_1f6f24;
    }
    ctx->pc = 0x1F6F1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F6F24u);
        ctx->pc = 0x1F6F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6F1Cu;
        // 0x1f6f20: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F6F1Cu, 0x1F6F24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F6F24u;
label_1f6f24:
    // 0x1f6f24: 0x8e2400bc  lw          $a0, 0xBC($s1)
    ctx->pc = 0x1f6f24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_1f6f28:
    // 0x1f6f28: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f6f28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f6f2c:
    // 0x1f6f2c: 0xc139fe8  jal         func_4E7FA0
label_1f6f30:
    if (ctx->pc == 0x1F6F30u) {
        ctx->pc = 0x1F6F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6F2Cu;
        // 0x1f6f30: 0x24060181  addiu       $a2, $zero, 0x181 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 385));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6F34u;
        goto label_1f6f34;
    }
    ctx->pc = 0x1F6F2Cu;
    SET_GPR_U32(ctx, 31, 0x1F6F34u);
    ctx->pc = 0x1F6F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6F2Cu;
    // 0x1f6f30: 0x24060181  addiu       $a2, $zero, 0x181 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 385));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E7FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E7FA0u, 0x1F6F2Cu, 0x1F6F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6F34u;
label_1f6f34:
    // 0x1f6f34: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x1f6f34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_1f6f38:
    // 0x1f6f38: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x1f6f38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_1f6f3c:
    // 0x1f6f3c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1f6f3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1f6f40:
    // 0x1f6f40: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1f6f40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1f6f44:
    // 0x1f6f44: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1f6f44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1f6f48:
    // 0x1f6f48: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1f6f48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f6f4c:
    // 0x1f6f4c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1f6f4cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f6f50:
    // 0x1f6f50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f6f50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f6f54:
    // 0x1f6f54: 0x3e00008  jr          $ra
label_1f6f58:
    if (ctx->pc == 0x1F6F58u) {
        ctx->pc = 0x1F6F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6F54u;
        // 0x1f6f58: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6F5Cu;
        goto label_1f6f5c;
    }
    ctx->pc = 0x1F6F54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F6F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6F54u;
        // 0x1f6f58: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F6F54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F6F5Cu;
label_1f6f5c:
    // 0x1f6f5c: 0x0  nop
    ctx->pc = 0x1f6f5cu;
    // NOP
    ctx->pc = 0x1f6f60u;
}
