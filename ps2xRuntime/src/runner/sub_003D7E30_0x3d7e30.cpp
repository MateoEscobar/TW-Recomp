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

// Function: sub_003D7E30
// Address: 0x3d7e30 - 0x3d7f08
void sub_003D7E30_0x3d7e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D7E30_0x3d7e30");
#endif

    switch (ctx->pc) {
        case 0x3d7e30u: goto label_3d7e30;
        case 0x3d7e34u: goto label_3d7e34;
        case 0x3d7e38u: goto label_3d7e38;
        case 0x3d7e3cu: goto label_3d7e3c;
        case 0x3d7e40u: goto label_3d7e40;
        case 0x3d7e44u: goto label_3d7e44;
        case 0x3d7e48u: goto label_3d7e48;
        case 0x3d7e4cu: goto label_3d7e4c;
        case 0x3d7e50u: goto label_3d7e50;
        case 0x3d7e54u: goto label_3d7e54;
        case 0x3d7e58u: goto label_3d7e58;
        case 0x3d7e5cu: goto label_3d7e5c;
        case 0x3d7e60u: goto label_3d7e60;
        case 0x3d7e64u: goto label_3d7e64;
        case 0x3d7e68u: goto label_3d7e68;
        case 0x3d7e6cu: goto label_3d7e6c;
        case 0x3d7e70u: goto label_3d7e70;
        case 0x3d7e74u: goto label_3d7e74;
        case 0x3d7e78u: goto label_3d7e78;
        case 0x3d7e7cu: goto label_3d7e7c;
        case 0x3d7e80u: goto label_3d7e80;
        case 0x3d7e84u: goto label_3d7e84;
        case 0x3d7e88u: goto label_3d7e88;
        case 0x3d7e8cu: goto label_3d7e8c;
        case 0x3d7e90u: goto label_3d7e90;
        case 0x3d7e94u: goto label_3d7e94;
        case 0x3d7e98u: goto label_3d7e98;
        case 0x3d7e9cu: goto label_3d7e9c;
        case 0x3d7ea0u: goto label_3d7ea0;
        case 0x3d7ea4u: goto label_3d7ea4;
        case 0x3d7ea8u: goto label_3d7ea8;
        case 0x3d7eacu: goto label_3d7eac;
        case 0x3d7eb0u: goto label_3d7eb0;
        case 0x3d7eb4u: goto label_3d7eb4;
        case 0x3d7eb8u: goto label_3d7eb8;
        case 0x3d7ebcu: goto label_3d7ebc;
        case 0x3d7ec0u: goto label_3d7ec0;
        case 0x3d7ec4u: goto label_3d7ec4;
        case 0x3d7ec8u: goto label_3d7ec8;
        case 0x3d7eccu: goto label_3d7ecc;
        case 0x3d7ed0u: goto label_3d7ed0;
        case 0x3d7ed4u: goto label_3d7ed4;
        case 0x3d7ed8u: goto label_3d7ed8;
        case 0x3d7edcu: goto label_3d7edc;
        case 0x3d7ee0u: goto label_3d7ee0;
        case 0x3d7ee4u: goto label_3d7ee4;
        case 0x3d7ee8u: goto label_3d7ee8;
        case 0x3d7eecu: goto label_3d7eec;
        case 0x3d7ef0u: goto label_3d7ef0;
        case 0x3d7ef4u: goto label_3d7ef4;
        case 0x3d7ef8u: goto label_3d7ef8;
        case 0x3d7efcu: goto label_3d7efc;
        case 0x3d7f00u: goto label_3d7f00;
        case 0x3d7f04u: goto label_3d7f04;
        default: break;
    }

    ctx->pc = 0x3d7e30u;

label_3d7e30:
    // 0x3d7e30: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3d7e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_3d7e34:
    // 0x3d7e34: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x3d7e34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_3d7e38:
    // 0x3d7e38: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x3d7e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_3d7e3c:
    // 0x3d7e3c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x3d7e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_3d7e40:
    // 0x3d7e40: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3d7e40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3d7e44:
    // 0x3d7e44: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3d7e44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_3d7e48:
    // 0x3d7e48: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3d7e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3d7e4c:
    // 0x3d7e4c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3d7e4cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d7e50:
    // 0x3d7e50: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3d7e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3d7e54:
    // 0x3d7e54: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3d7e54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3d7e58:
    // 0x3d7e58: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3d7e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3d7e5c:
    // 0x3d7e5c: 0x40f809  jalr        $v0
label_3d7e60:
    if (ctx->pc == 0x3D7E60u) {
        ctx->pc = 0x3D7E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7E5Cu;
        // 0x3d7e60: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7E64u;
        goto label_3d7e64;
    }
    ctx->pc = 0x3D7E5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D7E64u);
        ctx->pc = 0x3D7E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7E5Cu;
        // 0x3d7e60: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D7E5Cu, 0x3D7E64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D7E64u;
label_3d7e64:
    // 0x3d7e64: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3d7e64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d7e68:
    // 0x3d7e68: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x3d7e68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_3d7e6c:
    // 0x3d7e6c: 0xc0e858c  jal         func_3A1630
label_3d7e70:
    if (ctx->pc == 0x3D7E70u) {
        ctx->pc = 0x3D7E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7E6Cu;
        // 0x3d7e70: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7E74u;
        goto label_3d7e74;
    }
    ctx->pc = 0x3D7E6Cu;
    SET_GPR_U32(ctx, 31, 0x3D7E74u);
    ctx->pc = 0x3D7E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D7E6Cu;
    // 0x3d7e70: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3D7E6Cu, 0x3D7E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D7E74u;
label_3d7e74:
    // 0x3d7e74: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3d7e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3d7e78:
    // 0x3d7e78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d7e78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d7e7c:
    // 0x3d7e7c: 0xc0ea14c  jal         func_3A8530
label_3d7e80:
    if (ctx->pc == 0x3D7E80u) {
        ctx->pc = 0x3D7E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7E7Cu;
        // 0x3d7e80: 0xae620054  sw          $v0, 0x54($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7E84u;
        goto label_3d7e84;
    }
    ctx->pc = 0x3D7E7Cu;
    SET_GPR_U32(ctx, 31, 0x3D7E84u);
    ctx->pc = 0x3D7E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D7E7Cu;
    // 0x3d7e80: 0xae620054  sw          $v0, 0x54($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3D7E7Cu, 0x3D7E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D7E84u;
label_3d7e84:
    // 0x3d7e84: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3d7e84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d7e88:
    // 0x3d7e88: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3d7e88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3d7e8c:
    // 0x3d7e8c: 0xc0ea12a  jal         func_3A84A8
label_3d7e90:
    if (ctx->pc == 0x3D7E90u) {
        ctx->pc = 0x3D7E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7E8Cu;
        // 0x3d7e90: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7E94u;
        goto label_3d7e94;
    }
    ctx->pc = 0x3D7E8Cu;
    SET_GPR_U32(ctx, 31, 0x3D7E94u);
    ctx->pc = 0x3D7E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D7E8Cu;
    // 0x3d7e90: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3D7E8Cu, 0x3D7E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D7E94u;
label_3d7e94:
    // 0x3d7e94: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3d7e94u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d7e98:
    // 0x3d7e98: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3d7e98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d7e9c:
    // 0x3d7e9c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3d7e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3d7ea0:
    // 0x3d7ea0: 0xc0ea12a  jal         func_3A84A8
label_3d7ea4:
    if (ctx->pc == 0x3D7EA4u) {
        ctx->pc = 0x3D7EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7EA0u;
        // 0x3d7ea4: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7EA8u;
        goto label_3d7ea8;
    }
    ctx->pc = 0x3D7EA0u;
    SET_GPR_U32(ctx, 31, 0x3D7EA8u);
    ctx->pc = 0x3D7EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D7EA0u;
    // 0x3d7ea4: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3D7EA0u, 0x3D7EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D7EA8u;
label_3d7ea8:
    // 0x3d7ea8: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3d7ea8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d7eac:
    // 0x3d7eac: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x3d7eacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_3d7eb0:
    // 0x3d7eb0: 0x7e620010  sq          $v0, 0x10($s3)
    ctx->pc = 0x3d7eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 16), GPR_VEC(ctx, 2));
label_3d7eb4:
    // 0x3d7eb4: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x3d7eb4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
label_3d7eb8:
    // 0x3d7eb8: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x3d7eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
label_3d7ebc:
    // 0x3d7ebc: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x3d7ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_3d7ec0:
    // 0x3d7ec0: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x3d7ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_3d7ec4:
    // 0x3d7ec4: 0x16400008  bnez        $s2, . + 4 + (0x8 << 2)
label_3d7ec8:
    if (ctx->pc == 0x3D7EC8u) {
        ctx->pc = 0x3D7EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7EC4u;
        // 0x3d7ec8: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7ECCu;
        goto label_3d7ecc;
    }
    ctx->pc = 0x3D7EC4u;
    {
        const bool branch_taken_0x3d7ec4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D7EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7EC4u;
        // 0x3d7ec8: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7ec4) {
            ctx->pc = 0x3D7EE8u;
            goto label_3d7ee8;
        }
    }
    ctx->pc = 0x3D7ECCu;
label_3d7ecc:
    // 0x3d7ecc: 0x7a620010  lq          $v0, 0x10($s3)
    ctx->pc = 0x3d7eccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 16)));
label_3d7ed0:
    // 0x3d7ed0: 0x3c0549d1  lui         $a1, 0x49D1
    ctx->pc = 0x3d7ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18897 << 16));
label_3d7ed4:
    // 0x3d7ed4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3d7ed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d7ed8:
    // 0x3d7ed8: 0x34a54d16  ori         $a1, $a1, 0x4D16
    ctx->pc = 0x3d7ed8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)19734);
label_3d7edc:
    // 0x3d7edc: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3d7edcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3d7ee0:
    // 0x3d7ee0: 0xc045cb2  jal         func_1172C8
label_3d7ee4:
    if (ctx->pc == 0x3D7EE4u) {
        ctx->pc = 0x3D7EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7EE0u;
        // 0x3d7ee4: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7EE8u;
        goto label_3d7ee8;
    }
    ctx->pc = 0x3D7EE0u;
    SET_GPR_U32(ctx, 31, 0x3D7EE8u);
    ctx->pc = 0x3D7EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D7EE0u;
    // 0x3d7ee4: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1172C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1172C8u, 0x3D7EE0u, 0x3D7EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D7EE8u;
label_3d7ee8:
    // 0x3d7ee8: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x3d7ee8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3d7eec:
    // 0x3d7eec: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x3d7eecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3d7ef0:
    // 0x3d7ef0: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x3d7ef0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3d7ef4:
    // 0x3d7ef4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3d7ef4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3d7ef8:
    // 0x3d7ef8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3d7ef8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3d7efc:
    // 0x3d7efc: 0x3e00008  jr          $ra
label_3d7f00:
    if (ctx->pc == 0x3D7F00u) {
        ctx->pc = 0x3D7F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7EFCu;
        // 0x3d7f00: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7F04u;
        goto label_3d7f04;
    }
    ctx->pc = 0x3D7EFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D7F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7EFCu;
        // 0x3d7f00: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D7EFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D7F04u;
label_3d7f04:
    // 0x3d7f04: 0x0  nop
    ctx->pc = 0x3d7f04u;
    // NOP
    ctx->pc = 0x3d7f08u;
}
