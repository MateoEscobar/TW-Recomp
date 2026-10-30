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

// Function: sub_003A8E58
// Address: 0x3a8e58 - 0x3a8f48
void sub_003A8E58_0x3a8e58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A8E58_0x3a8e58");
#endif

    switch (ctx->pc) {
        case 0x3a8e58u: goto label_3a8e58;
        case 0x3a8e5cu: goto label_3a8e5c;
        case 0x3a8e60u: goto label_3a8e60;
        case 0x3a8e64u: goto label_3a8e64;
        case 0x3a8e68u: goto label_3a8e68;
        case 0x3a8e6cu: goto label_3a8e6c;
        case 0x3a8e70u: goto label_3a8e70;
        case 0x3a8e74u: goto label_3a8e74;
        case 0x3a8e78u: goto label_3a8e78;
        case 0x3a8e7cu: goto label_3a8e7c;
        case 0x3a8e80u: goto label_3a8e80;
        case 0x3a8e84u: goto label_3a8e84;
        case 0x3a8e88u: goto label_3a8e88;
        case 0x3a8e8cu: goto label_3a8e8c;
        case 0x3a8e90u: goto label_3a8e90;
        case 0x3a8e94u: goto label_3a8e94;
        case 0x3a8e98u: goto label_3a8e98;
        case 0x3a8e9cu: goto label_3a8e9c;
        case 0x3a8ea0u: goto label_3a8ea0;
        case 0x3a8ea4u: goto label_3a8ea4;
        case 0x3a8ea8u: goto label_3a8ea8;
        case 0x3a8eacu: goto label_3a8eac;
        case 0x3a8eb0u: goto label_3a8eb0;
        case 0x3a8eb4u: goto label_3a8eb4;
        case 0x3a8eb8u: goto label_3a8eb8;
        case 0x3a8ebcu: goto label_3a8ebc;
        case 0x3a8ec0u: goto label_3a8ec0;
        case 0x3a8ec4u: goto label_3a8ec4;
        case 0x3a8ec8u: goto label_3a8ec8;
        case 0x3a8eccu: goto label_3a8ecc;
        case 0x3a8ed0u: goto label_3a8ed0;
        case 0x3a8ed4u: goto label_3a8ed4;
        case 0x3a8ed8u: goto label_3a8ed8;
        case 0x3a8edcu: goto label_3a8edc;
        case 0x3a8ee0u: goto label_3a8ee0;
        case 0x3a8ee4u: goto label_3a8ee4;
        case 0x3a8ee8u: goto label_3a8ee8;
        case 0x3a8eecu: goto label_3a8eec;
        case 0x3a8ef0u: goto label_3a8ef0;
        case 0x3a8ef4u: goto label_3a8ef4;
        case 0x3a8ef8u: goto label_3a8ef8;
        case 0x3a8efcu: goto label_3a8efc;
        case 0x3a8f00u: goto label_3a8f00;
        case 0x3a8f04u: goto label_3a8f04;
        case 0x3a8f08u: goto label_3a8f08;
        case 0x3a8f0cu: goto label_3a8f0c;
        case 0x3a8f10u: goto label_3a8f10;
        case 0x3a8f14u: goto label_3a8f14;
        case 0x3a8f18u: goto label_3a8f18;
        case 0x3a8f1cu: goto label_3a8f1c;
        case 0x3a8f20u: goto label_3a8f20;
        case 0x3a8f24u: goto label_3a8f24;
        case 0x3a8f28u: goto label_3a8f28;
        case 0x3a8f2cu: goto label_3a8f2c;
        case 0x3a8f30u: goto label_3a8f30;
        case 0x3a8f34u: goto label_3a8f34;
        case 0x3a8f38u: goto label_3a8f38;
        case 0x3a8f3cu: goto label_3a8f3c;
        case 0x3a8f40u: goto label_3a8f40;
        case 0x3a8f44u: goto label_3a8f44;
        default: break;
    }

    ctx->pc = 0x3a8e58u;

label_3a8e58:
    // 0x3a8e58: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3a8e58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_3a8e5c:
    // 0x3a8e5c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x3a8e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_3a8e60:
    // 0x3a8e60: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x3a8e60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_3a8e64:
    // 0x3a8e64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a8e64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a8e68:
    // 0x3a8e68: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x3a8e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_3a8e6c:
    // 0x3a8e6c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3a8e6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3a8e70:
    // 0x3a8e70: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x3a8e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_3a8e74:
    // 0x3a8e74: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3a8e74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3a8e78:
    // 0x3a8e78: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3a8e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3a8e7c:
    // 0x3a8e7c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3a8e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3a8e80:
    // 0x3a8e80: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3a8e80u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3a8e84:
    // 0x3a8e84: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3a8e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3a8e88:
    // 0x3a8e88: 0x40f809  jalr        $v0
label_3a8e8c:
    if (ctx->pc == 0x3A8E8Cu) {
        ctx->pc = 0x3A8E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8E88u;
        // 0x3a8e8c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8E90u;
        goto label_3a8e90;
    }
    ctx->pc = 0x3A8E88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A8E90u);
        ctx->pc = 0x3A8E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8E88u;
        // 0x3a8e8c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A8E88u, 0x3A8E90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A8E90u;
label_3a8e90:
    // 0x3a8e90: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3a8e90u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a8e94:
    // 0x3a8e94: 0xc0ea146  jal         func_3A8518
label_3a8e98:
    if (ctx->pc == 0x3A8E98u) {
        ctx->pc = 0x3A8E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8E94u;
        // 0x3a8e98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8E9Cu;
        goto label_3a8e9c;
    }
    ctx->pc = 0x3A8E94u;
    SET_GPR_U32(ctx, 31, 0x3A8E9Cu);
    ctx->pc = 0x3A8E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8E94u;
    // 0x3a8e98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3A8E94u, 0x3A8E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8E9Cu;
label_3a8e9c:
    // 0x3a8e9c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3a8e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3a8ea0:
    // 0x3a8ea0: 0xc0ea12a  jal         func_3A84A8
label_3a8ea4:
    if (ctx->pc == 0x3A8EA4u) {
        ctx->pc = 0x3A8EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8EA0u;
        // 0x3a8ea4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8EA8u;
        goto label_3a8ea8;
    }
    ctx->pc = 0x3A8EA0u;
    SET_GPR_U32(ctx, 31, 0x3A8EA8u);
    ctx->pc = 0x3A8EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8EA0u;
    // 0x3a8ea4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3A8EA0u, 0x3A8EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8EA8u;
label_3a8ea8:
    // 0x3a8ea8: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3a8ea8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3a8eac:
    // 0x3a8eac: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3a8eacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3a8eb0:
    // 0x3a8eb0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3a8eb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a8eb4:
    // 0x3a8eb4: 0xc0ea12a  jal         func_3A84A8
label_3a8eb8:
    if (ctx->pc == 0x3A8EB8u) {
        ctx->pc = 0x3A8EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8EB4u;
        // 0x3a8eb8: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8EBCu;
        goto label_3a8ebc;
    }
    ctx->pc = 0x3A8EB4u;
    SET_GPR_U32(ctx, 31, 0x3A8EBCu);
    ctx->pc = 0x3A8EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8EB4u;
    // 0x3a8eb8: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3A8EB4u, 0x3A8EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8EBCu;
label_3a8ebc:
    // 0x3a8ebc: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3a8ebcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3a8ec0:
    // 0x3a8ec0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a8ec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a8ec4:
    // 0x3a8ec4: 0xc0ea146  jal         func_3A8518
label_3a8ec8:
    if (ctx->pc == 0x3A8EC8u) {
        ctx->pc = 0x3A8EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8EC4u;
        // 0x3a8ec8: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8ECCu;
        goto label_3a8ecc;
    }
    ctx->pc = 0x3A8EC4u;
    SET_GPR_U32(ctx, 31, 0x3A8ECCu);
    ctx->pc = 0x3A8EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8EC4u;
    // 0x3a8ec8: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3A8EC4u, 0x3A8ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8ECCu;
label_3a8ecc:
    // 0x3a8ecc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3a8eccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a8ed0:
    // 0x3a8ed0: 0xc0ea14c  jal         func_3A8530
label_3a8ed4:
    if (ctx->pc == 0x3A8ED4u) {
        ctx->pc = 0x3A8ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8ED0u;
        // 0x3a8ed4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8ED8u;
        goto label_3a8ed8;
    }
    ctx->pc = 0x3A8ED0u;
    SET_GPR_U32(ctx, 31, 0x3A8ED8u);
    ctx->pc = 0x3A8ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8ED0u;
    // 0x3a8ed4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3A8ED0u, 0x3A8ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8ED8u;
label_3a8ed8:
    // 0x3a8ed8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3a8ed8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a8edc:
    // 0x3a8edc: 0xc0ea146  jal         func_3A8518
label_3a8ee0:
    if (ctx->pc == 0x3A8EE0u) {
        ctx->pc = 0x3A8EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8EDCu;
        // 0x3a8ee0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8EE4u;
        goto label_3a8ee4;
    }
    ctx->pc = 0x3A8EDCu;
    SET_GPR_U32(ctx, 31, 0x3A8EE4u);
    ctx->pc = 0x3A8EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8EDCu;
    // 0x3a8ee0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3A8EDCu, 0x3A8EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8EE4u;
label_3a8ee4:
    // 0x3a8ee4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3a8ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a8ee8:
    // 0x3a8ee8: 0xc0e858c  jal         func_3A1630
label_3a8eec:
    if (ctx->pc == 0x3A8EECu) {
        ctx->pc = 0x3A8EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8EE8u;
        // 0x3a8eec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8EF0u;
        goto label_3a8ef0;
    }
    ctx->pc = 0x3A8EE8u;
    SET_GPR_U32(ctx, 31, 0x3A8EF0u);
    ctx->pc = 0x3A8EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8EE8u;
    // 0x3a8eec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3A8EE8u, 0x3A8EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8EF0u;
label_3a8ef0:
    // 0x3a8ef0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3a8ef0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3a8ef4:
    // 0x3a8ef4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3a8ef4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a8ef8:
    // 0x3a8ef8: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x3a8ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_3a8efc:
    // 0x3a8efc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3a8efcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3a8f00:
    // 0x3a8f00: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x3a8f00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_3a8f04:
    // 0x3a8f04: 0xc0e896e  jal         func_3A25B8
label_3a8f08:
    if (ctx->pc == 0x3A8F08u) {
        ctx->pc = 0x3A8F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8F04u;
        // 0x3a8f08: 0xe60000bc  swc1        $f0, 0xBC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 188), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8F0Cu;
        goto label_3a8f0c;
    }
    ctx->pc = 0x3A8F04u;
    SET_GPR_U32(ctx, 31, 0x3A8F0Cu);
    ctx->pc = 0x3A8F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8F04u;
    // 0x3a8f08: 0xe60000bc  swc1        $f0, 0xBC($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 188), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A25B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A25B8u, 0x3A8F04u, 0x3A8F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8F0Cu;
label_3a8f0c:
    // 0x3a8f0c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3a8f0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a8f10:
    // 0x3a8f10: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3a8f10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3a8f14:
    // 0x3a8f14: 0xc0e8604  jal         func_3A1810
label_3a8f18:
    if (ctx->pc == 0x3A8F18u) {
        ctx->pc = 0x3A8F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8F14u;
        // 0x3a8f18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8F1Cu;
        goto label_3a8f1c;
    }
    ctx->pc = 0x3A8F14u;
    SET_GPR_U32(ctx, 31, 0x3A8F1Cu);
    ctx->pc = 0x3A8F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8F14u;
    // 0x3a8f18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1810u, 0x3A8F14u, 0x3A8F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8F1Cu;
label_3a8f1c:
    // 0x3a8f1c: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3a8f1cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3a8f20:
    // 0x3a8f20: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x3a8f20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3a8f24:
    // 0x3a8f24: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x3a8f24u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
label_3a8f28:
    // 0x3a8f28: 0xae800004  sw          $zero, 0x4($s4)
    ctx->pc = 0x3a8f28u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
label_3a8f2c:
    // 0x3a8f2c: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x3a8f2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3a8f30:
    // 0x3a8f30: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x3a8f30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3a8f34:
    // 0x3a8f34: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x3a8f34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3a8f38:
    // 0x3a8f38: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3a8f38u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3a8f3c:
    // 0x3a8f3c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3a8f3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3a8f40:
    // 0x3a8f40: 0x3e00008  jr          $ra
label_3a8f44:
    if (ctx->pc == 0x3A8F44u) {
        ctx->pc = 0x3A8F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8F40u;
        // 0x3a8f44: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8F48u;
        goto label_fallthrough_0x3a8f40;
    }
    ctx->pc = 0x3A8F40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A8F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8F40u;
        // 0x3a8f44: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A8F40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3a8f40:
    ctx->pc = 0x3A8F48u;
}
