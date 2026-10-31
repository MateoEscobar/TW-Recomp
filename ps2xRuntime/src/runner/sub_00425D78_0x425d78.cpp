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

// Function: sub_00425D78
// Address: 0x425d78 - 0x426240
void sub_00425D78_0x425d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00425D78_0x425d78");
#endif

    switch (ctx->pc) {
        case 0x425db0u: goto label_425db0;
        case 0x425e5cu: goto label_425e5c;
        case 0x425fe8u: goto label_425fe8;
        case 0x425ff8u: goto label_425ff8;
        case 0x42600cu: goto label_42600c;
        case 0x426038u: goto label_426038;
        case 0x426164u: goto label_426164;
        case 0x426170u: goto label_426170;
        case 0x426180u: goto label_426180;
        case 0x4261d0u: goto label_4261d0;
        default: break;
    }

    ctx->pc = 0x425d78u;

    // 0x425d78: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x425d78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x425d7c: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x425d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x425d80: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x425d80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x425d84: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x425d84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x425d88: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x425d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x425d8c: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x425d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x425d90: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x425d90u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x425d94: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x425d94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x425d98: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x425d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x425d9c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x425d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x425da0: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x425da0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x425da4: 0x8e530008  lw          $s3, 0x8($s2)
    ctx->pc = 0x425da4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x425da8: 0xc119b0e  jal         func_466C38
    ctx->pc = 0x425DA8u;
    SET_GPR_U32(ctx, 31, 0x425DB0u);
    ctx->pc = 0x425DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x425DA8u;
    // 0x425dac: 0x8e640018  lw          $a0, 0x18($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x466C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466C38u, 0x425DA8u, 0x425DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x425DB0u;
label_425db0:
    // 0x425db0: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x425db0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x425db4: 0x8ed40000  lw          $s4, 0x0($s6)
    ctx->pc = 0x425db4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x425db8: 0x8e660018  lw          $a2, 0x18($s3)
    ctx->pc = 0x425db8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x425dbc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x425dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x425dc0: 0x8cc30054  lw          $v1, 0x54($a2)
    ctx->pc = 0x425dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 84)));
    // 0x425dc4: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x425dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
    // 0x425dc8: 0x8cc40018  lw          $a0, 0x18($a2)
    ctx->pc = 0x425dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x425dcc: 0x10820011  beq         $a0, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x425DCCu;
    {
        const bool branch_taken_0x425dcc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x425DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x425DCCu;
        // 0x425dd0: 0x3c030059  lui         $v1, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x425dcc) {
            ctx->pc = 0x425E14u;
            goto label_425e14;
        }
    }
    ctx->pc = 0x425DD4u;
    // 0x425dd4: 0x8cc50054  lw          $a1, 0x54($a2)
    ctx->pc = 0x425dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 84)));
    // 0x425dd8: 0x8c627004  lw          $v0, 0x7004($v1)
    ctx->pc = 0x425dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28676)));
    // 0x425ddc: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x425ddcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x425de0: 0x2622021  addu        $a0, $s3, $v0
    ctx->pc = 0x425de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x425de4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x425de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x425de8: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x425DE8u;
    {
        const bool branch_taken_0x425de8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x425de8) {
            ctx->pc = 0x425DECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x425DE8u;
            // 0x425dec: 0x8cc47004  lw          $a0, 0x7004($a2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28676)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x425E08u;
            goto label_425e08;
        }
    }
    ctx->pc = 0x425DF0u;
    // 0x425df0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x425df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x425df4: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x425df4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x425df8: 0x50620018  beql        $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x425DF8u;
    {
        const bool branch_taken_0x425df8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x425df8) {
            ctx->pc = 0x425DFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x425DF8u;
            // 0x425dfc: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x425E5Cu;
            goto label_425e5c;
        }
    }
    ctx->pc = 0x425E00u;
    // 0x425e00: 0x8cc47004  lw          $a0, 0x7004($a2)
    ctx->pc = 0x425e00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28676)));
    // 0x425e04: 0x0  nop
    ctx->pc = 0x425e04u;
    // NOP
label_425e08:
    // 0x425e08: 0x94a50004  lhu         $a1, 0x4($a1)
    ctx->pc = 0x425e08u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x425e0c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x425E0Cu;
    {
        const bool branch_taken_0x425e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x425E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x425E0Cu;
        // 0x425e10: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x425e0c) {
            ctx->pc = 0x425E54u;
            goto label_425e54;
        }
    }
    ctx->pc = 0x425E14u;
label_425e14:
    // 0x425e14: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x425e14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x425e18: 0x8c627000  lw          $v0, 0x7000($v1)
    ctx->pc = 0x425e18u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x597000u));
    // 0x425e1c: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x425e1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x425e20: 0xc22021  addu        $a0, $a2, $v0
    ctx->pc = 0x425e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x425e24: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x425e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x425e28: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x425E28u;
    {
        const bool branch_taken_0x425e28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x425E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x425E28u;
        // 0x425e2c: 0x8cc50054  lw          $a1, 0x54($a2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x425e28) {
            ctx->pc = 0x425E48u;
            goto label_425e48;
        }
    }
    ctx->pc = 0x425E30u;
    // 0x425e30: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x425e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x425e34: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x425e34u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x425e38: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x425E38u;
    {
        const bool branch_taken_0x425e38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x425e38) {
            ctx->pc = 0x425E3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x425E38u;
            // 0x425e3c: 0x8ce47000  lw          $a0, 0x7000($a3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28672)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x425E4Cu;
            goto label_425e4c;
        }
    }
    ctx->pc = 0x425E40u;
    // 0x425e40: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x425E40u;
    {
        const bool branch_taken_0x425e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x425E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x425E40u;
        // 0x425e44: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x425e40) {
            ctx->pc = 0x425E5Cu;
            goto label_425e5c;
        }
    }
    ctx->pc = 0x425E48u;
label_425e48:
    // 0x425e48: 0x8ce47000  lw          $a0, 0x7000($a3)
    ctx->pc = 0x425e48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28672)));
label_425e4c:
    // 0x425e4c: 0x94a50004  lhu         $a1, 0x4($a1)
    ctx->pc = 0x425e4cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x425e50: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x425e50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_425e54:
    // 0x425e54: 0xc11d5b0  jal         func_4756C0
    ctx->pc = 0x425E54u;
    SET_GPR_U32(ctx, 31, 0x425E5Cu);
    ctx->pc = 0x4756C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4756C0u, 0x425E54u, 0x425E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x425E5Cu;
label_425e5c:
    // 0x425e5c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x425e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x425e60: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x425e60u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    // 0x425e64: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x425e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x425e68: 0x94430004  lhu         $v1, 0x4($v0)
    ctx->pc = 0x425e68u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x425e6c: 0x106000ea  beqz        $v1, . + 4 + (0xEA << 2)
    ctx->pc = 0x425E6Cu;
    {
        const bool branch_taken_0x425e6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x425E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x425E6Cu;
        // 0x425e70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x425e6c) {
            ctx->pc = 0x426218u;
            goto label_426218;
        }
    }
    ctx->pc = 0x425E74u;
    // 0x425e74: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x425e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x425e78: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x425e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x425e7c: 0x28640002  slti        $a0, $v1, 0x2
    ctx->pc = 0x425e7cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x425e80: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x425E80u;
    {
        const bool branch_taken_0x425e80 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x425E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x425E80u;
        // 0x425e84: 0xae430020  sw          $v1, 0x20($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x425e80) {
            ctx->pc = 0x425EA0u;
            goto label_425ea0;
        }
    }
    ctx->pc = 0x425E88u;
    // 0x425e88: 0x2662004c  addiu       $v0, $s3, 0x4C
    ctx->pc = 0x425e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 76));
    // 0x425e8c: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x425e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x425e90: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x425e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x425e94: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x425e94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x425e98: 0xe640001c  swc1        $f0, 0x1C($s2)
    ctx->pc = 0x425e98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
    // 0x425e9c: 0x0  nop
    ctx->pc = 0x425e9cu;
    // NOP
label_425ea0:
    // 0x425ea0: 0x8e680018  lw          $t0, 0x18($s3)
    ctx->pc = 0x425ea0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x425ea4: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x425ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x425ea8: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x425ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x425eac: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x425eacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x425eb0: 0x14400041  bnez        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x425EB0u;
    {
        const bool branch_taken_0x425eb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x425EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x425EB0u;
        // 0x425eb4: 0x2407fffe  addiu       $a3, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x425eb0) {
            ctx->pc = 0x425FB8u;
            goto label_425fb8;
        }
    }
    ctx->pc = 0x425EB8u;
    // 0x425eb8: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x425eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x425ebc: 0x91020008  lbu         $v0, 0x8($t0)
    ctx->pc = 0x425ebcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x425ec0: 0x94a30006  lhu         $v1, 0x6($a1)
    ctx->pc = 0x425ec0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x425ec4: 0x91040018  lbu         $a0, 0x18($t0)
    ctx->pc = 0x425ec4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 24)));
    // 0x425ec8: 0x3042009f  andi        $v0, $v0, 0x9F
    ctx->pc = 0x425ec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)159);
    // 0x425ecc: 0x8e450014  lw          $a1, 0x14($s2)
    ctx->pc = 0x425eccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x425ed0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x425ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x425ed4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x425ed4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x425ed8: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x425ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x425edc: 0xa72824  and         $a1, $a1, $a3
    ctx->pc = 0x425edcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 7));
    // 0x425ee0: 0x8e460010  lw          $a2, 0x10($s2)
    ctx->pc = 0x425ee0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x425ee4: 0x643825  or          $a3, $v1, $a0
    ctx->pc = 0x425ee4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x425ee8: 0xae450014  sw          $a1, 0x14($s2)
    ctx->pc = 0x425ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 5));
    // 0x425eec: 0xae470018  sw          $a3, 0x18($s2)
    ctx->pc = 0x425eecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 7));
    // 0x425ef0: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x425ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x425ef4: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x425EF4u;
    {
        const bool branch_taken_0x425ef4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x425EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x425EF4u;
        // 0x425ef8: 0x24490018  addiu       $t1, $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x425ef4) {
            ctx->pc = 0x425FB8u;
            goto label_425fb8;
        }
    }
    ctx->pc = 0x425EFCu;
    // 0x425efc: 0x8d240010  lw          $a0, 0x10($t1)
    ctx->pc = 0x425efcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x425f00: 0x10e4000e  beq         $a3, $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x425F00u;
    {
        const bool branch_taken_0x425f00 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 4));
        ctx->pc = 0x425F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x425F00u;
        // 0x425f04: 0x2666004c  addiu       $a2, $s3, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x425f00) {
            ctx->pc = 0x425F3Cu;
            goto label_425f3c;
        }
    }
    ctx->pc = 0x425F08u;
    // 0x425f08: 0x71c02  srl         $v1, $a3, 16
    ctx->pc = 0x425f08u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 16));
    // 0x425f0c: 0x41402  srl         $v0, $a0, 16
    ctx->pc = 0x425f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x425f10: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x425f10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x425f14: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x425f14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x425f18: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x425F18u;
    {
        const bool branch_taken_0x425f18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x425F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x425F18u;
        // 0x425f1c: 0x34a20008  ori         $v0, $a1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x425f18) {
            ctx->pc = 0x425F38u;
            goto label_425f38;
        }
    }
    ctx->pc = 0x425F20u;
    // 0x425f20: 0x71e02  srl         $v1, $a3, 24
    ctx->pc = 0x425f20u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 24));
    // 0x425f24: 0x41602  srl         $v0, $a0, 24
    ctx->pc = 0x425f24u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 24));
    // 0x425f28: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x425F28u;
    {
        const bool branch_taken_0x425f28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x425F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x425F28u;
        // 0x425f2c: 0x34a20008  ori         $v0, $a1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x425f28) {
            ctx->pc = 0x425F38u;
            goto label_425f38;
        }
    }
    ctx->pc = 0x425F30u;
    // 0x425f30: 0x34a20004  ori         $v0, $a1, 0x4
    ctx->pc = 0x425f30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4);
    // 0x425f34: 0x0  nop
    ctx->pc = 0x425f34u;
    // NOP
label_425f38:
    // 0x425f38: 0xae420014  sw          $v0, 0x14($s2)
    ctx->pc = 0x425f38u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
label_425f3c:
    // 0x425f3c: 0x9502000c  lhu         $v0, 0xC($t0)
    ctx->pc = 0x425f3cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x425f40: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x425F40u;
    {
        const bool branch_taken_0x425f40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x425F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x425F40u;
        // 0x425f44: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x425f40) {
            ctx->pc = 0x425F78u;
            goto label_425f78;
        }
    }
    ctx->pc = 0x425F48u;
    // 0x425f48: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x425F48u;
    {
        const bool branch_taken_0x425f48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x425f48) {
            ctx->pc = 0x425F4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x425F48u;
            // 0x425f4c: 0x8e430014  lw          $v1, 0x14($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x425F60u;
            goto label_425f60;
        }
    }
    ctx->pc = 0x425F50u;
    // 0x425f50: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x425f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x425f54: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x425f54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x425f58: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x425F58u;
    {
        const bool branch_taken_0x425f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x425F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x425F58u;
        // 0x425f5c: 0xae420014  sw          $v0, 0x14($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x425f58) {
            ctx->pc = 0x425F78u;
            goto label_425f78;
        }
    }
    ctx->pc = 0x425F60u;
label_425f60:
    // 0x425f60: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x425f60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x425f64: 0xae430014  sw          $v1, 0x14($s2)
    ctx->pc = 0x425f64u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 3));
    // 0x425f68: 0x9502000c  lhu         $v0, 0xC($t0)
    ctx->pc = 0x425f68u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x425f6c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x425f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x425f70: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x425f70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x425f74: 0xae430014  sw          $v1, 0x14($s2)
    ctx->pc = 0x425f74u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 3));
label_425f78:
    // 0x425f78: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x425f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x425f7c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x425f7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x425f80: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x425F80u;
    {
        const bool branch_taken_0x425f80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x425f80) {
            ctx->pc = 0x425F84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x425F80u;
            // 0x425f84: 0x8e630018  lw          $v1, 0x18($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x425FC0u;
            goto label_425fc0;
        }
    }
    ctx->pc = 0x425F88u;
    // 0x425f88: 0x84c30006  lh          $v1, 0x6($a2)
    ctx->pc = 0x425f88u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x425f8c: 0x8d220028  lw          $v0, 0x28($t1)
    ctx->pc = 0x425f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 40)));
    // 0x425f90: 0x54430007  bnel        $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x425F90u;
    {
        const bool branch_taken_0x425f90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x425f90) {
            ctx->pc = 0x425F94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x425F90u;
            // 0x425f94: 0x8e420014  lw          $v0, 0x14($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x425FB0u;
            goto label_425fb0;
        }
    }
    ctx->pc = 0x425F98u;
    // 0x425f98: 0x84c30004  lh          $v1, 0x4($a2)
    ctx->pc = 0x425f98u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x425f9c: 0x8d220024  lw          $v0, 0x24($t1)
    ctx->pc = 0x425f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 36)));
    // 0x425fa0: 0x50430007  beql        $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x425FA0u;
    {
        const bool branch_taken_0x425fa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x425fa0) {
            ctx->pc = 0x425FA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x425FA0u;
            // 0x425fa4: 0x8e630018  lw          $v1, 0x18($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x425FC0u;
            goto label_425fc0;
        }
    }
    ctx->pc = 0x425FA8u;
    // 0x425fa8: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x425fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x425fac: 0x0  nop
    ctx->pc = 0x425facu;
    // NOP
label_425fb0:
    // 0x425fb0: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x425fb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x425fb4: 0xae420014  sw          $v0, 0x14($s2)
    ctx->pc = 0x425fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
label_425fb8:
    // 0x425fb8: 0x8e630018  lw          $v1, 0x18($s3)
    ctx->pc = 0x425fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x425fbc: 0x0  nop
    ctx->pc = 0x425fbcu;
    // NOP
label_425fc0:
    // 0x425fc0: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x425fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x425fc4: 0xa460000c  sh          $zero, 0xC($v1)
    ctx->pc = 0x425fc4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x425fc8: 0x8e62004c  lw          $v0, 0x4C($s3)
    ctx->pc = 0x425fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x425fcc: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x425fccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x425fd0: 0xae62004c  sw          $v0, 0x4C($s3)
    ctx->pc = 0x425fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 2));
    // 0x425fd4: 0x3c110071  lui         $s1, 0x71
    ctx->pc = 0x425fd4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)113 << 16));
    // 0x425fd8: 0x8e30ad18  lw          $s0, -0x52E8($s1)
    ctx->pc = 0x425fd8u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x70AD18u));
    // 0x425fdc: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x425fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x425fe0: 0xc12104a  jal         func_484128
    ctx->pc = 0x425FE0u;
    SET_GPR_U32(ctx, 31, 0x425FE8u);
    ctx->pc = 0x425FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x425FE0u;
    // 0x425fe4: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x484128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x484128u, 0x425FE0u, 0x425FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x425FE8u;
label_425fe8:
    // 0x425fe8: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x425fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x425fec: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x425fecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x425ff0: 0xc11f4a0  jal         func_47D280
    ctx->pc = 0x425FF0u;
    SET_GPR_U32(ctx, 31, 0x425FF8u);
    ctx->pc = 0x425FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x425FF0u;
    // 0x425ff4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47D280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47D280u, 0x425FF0u, 0x425FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x425FF8u;
label_425ff8:
    // 0x425ff8: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x425ff8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x425ffc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x425ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x426000: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x426000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x426004: 0xc11a45e  jal         func_469178
    ctx->pc = 0x426004u;
    SET_GPR_U32(ctx, 31, 0x42600Cu);
    ctx->pc = 0x426008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x426004u;
    // 0x426008: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x469178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x469178u, 0x426004u, 0x42600Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42600Cu;
label_42600c:
    // 0x42600c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x42600cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x426010: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x426010u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x426014: 0x8e23ad18  lw          $v1, -0x52E8($s1)
    ctx->pc = 0x426014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946072)));
    // 0x426018: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x426018u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x42601c: 0x8c827114  lw          $v0, 0x7114($a0)
    ctx->pc = 0x42601cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x597114u));
    // 0x426020: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x426020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x426024: 0x24630060  addiu       $v1, $v1, 0x60
    ctx->pc = 0x426024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x426028: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x426028u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x42602c: 0x148880  sll         $s1, $s4, 2
    ctx->pc = 0x42602cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x426030: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x426030u;
    {
        const bool branch_taken_0x426030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x426034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426030u;
        // 0x426034: 0x3c150059  lui         $s5, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x426030) {
            ctx->pc = 0x42603Cu;
            goto label_42603c;
        }
    }
    ctx->pc = 0x426038u;
label_426038:
    // 0x426038: 0x24630014  addiu       $v1, $v1, 0x14
    ctx->pc = 0x426038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
label_42603c:
    // 0x42603c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x42603cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x426040: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x426040u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x426044: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x426044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x426048: 0x50c20017  beql        $a2, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x426048u;
    {
        const bool branch_taken_0x426048 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x426048) {
            ctx->pc = 0x42604Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x426048u;
            // 0x42604c: 0x8e43000c  lw          $v1, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4260A8u;
            goto label_4260a8;
        }
    }
    ctx->pc = 0x426050u;
    // 0x426050: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x426050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x426054: 0xc4650004  lwc1        $f5, 0x4($v1)
    ctx->pc = 0x426054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x426058: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x426058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x42605c: 0xc4a40004  lwc1        $f4, 0x4($a1)
    ctx->pc = 0x42605cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x426060: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x426060u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x426064: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x426064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x426068: 0x46052102  mul.s       $f4, $f4, $f5
    ctx->pc = 0x426068u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x42606c: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x42606cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x426070: 0xc465000c  lwc1        $f5, 0xC($v1)
    ctx->pc = 0x426070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x426074: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x426074u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x426078: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x426078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x42607c: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x42607cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x426080: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x426080u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x426084: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x426084u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x426088: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x426088u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x42608c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x42608cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x426090: 0x0  nop
    ctx->pc = 0x426090u;
    // NOP
    // 0x426094: 0x4500ffe8  bc1f        . + 4 + (-0x18 << 2)
    ctx->pc = 0x426094u;
    {
        const bool branch_taken_0x426094 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x426098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426094u;
        // 0x426098: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x426094) {
            ctx->pc = 0x426038u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_426038;
        }
    }
    ctx->pc = 0x42609Cu;
    // 0x42609c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x42609cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4260a0: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x4260a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x4260a4: 0x0  nop
    ctx->pc = 0x4260a4u;
    // NOP
label_4260a8:
    // 0x4260a8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x4260a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4260ac: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x4260acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x4260b0: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x4260B0u;
    {
        const bool branch_taken_0x4260b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4260B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4260B0u;
        // 0x4260b4: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4260b0) {
            ctx->pc = 0x4260ECu;
            goto label_4260ec;
        }
    }
    ctx->pc = 0x4260B8u;
    // 0x4260b8: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x4260b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x4260bc: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x4260BCu;
    {
        const bool branch_taken_0x4260bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4260bc) {
            ctx->pc = 0x4260C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4260BCu;
            // 0x4260c0: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4260D4u;
            goto label_4260d4;
        }
    }
    ctx->pc = 0x4260C4u;
    // 0x4260c4: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x4260c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x4260c8: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x4260C8u;
    {
        const bool branch_taken_0x4260c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4260c8) {
            ctx->pc = 0x4260CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4260C8u;
            // 0x4260cc: 0x30620010  andi        $v0, $v1, 0x10 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4260E4u;
            goto label_4260e4;
        }
    }
    ctx->pc = 0x4260D0u;
    // 0x4260d0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4260d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4260d4:
    // 0x4260d4: 0xa2430029  sb          $v1, 0x29($s2)
    ctx->pc = 0x4260d4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 41), (uint8_t)GPR_U32(ctx, 3));
    // 0x4260d8: 0x90826e70  lbu         $v0, 0x6E70($a0)
    ctx->pc = 0x4260d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28272)));
    // 0x4260dc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x4260DCu;
    {
        const bool branch_taken_0x4260dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4260E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4260DCu;
        // 0x4260e0: 0x34420004  ori         $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4260dc) {
            ctx->pc = 0x426128u;
            goto label_426128;
        }
    }
    ctx->pc = 0x4260E4u;
label_4260e4:
    // 0x4260e4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4260E4u;
    {
        const bool branch_taken_0x4260e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4260E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4260E4u;
        // 0x4260e8: 0x30620008  andi        $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4260e4) {
            ctx->pc = 0x426100u;
            goto label_426100;
        }
    }
    ctx->pc = 0x4260ECu;
label_4260ec:
    // 0x4260ec: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x4260ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4260f0: 0xa2420029  sb          $v0, 0x29($s2)
    ctx->pc = 0x4260f0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 41), (uint8_t)GPR_U32(ctx, 2));
    // 0x4260f4: 0x90836e70  lbu         $v1, 0x6E70($a0)
    ctx->pc = 0x4260f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28272)));
    // 0x4260f8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x4260F8u;
    {
        const bool branch_taken_0x4260f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4260FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4260F8u;
        // 0x4260fc: 0xa2430028  sb          $v1, 0x28($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 40), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4260f8) {
            ctx->pc = 0x42612Cu;
            goto label_42612c;
        }
    }
    ctx->pc = 0x426100u;
label_426100:
    // 0x426100: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x426100u;
    {
        const bool branch_taken_0x426100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x426104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426100u;
        // 0x426104: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x426100) {
            ctx->pc = 0x426118u;
            goto label_426118;
        }
    }
    ctx->pc = 0x426108u;
    // 0x426108: 0xa2430029  sb          $v1, 0x29($s2)
    ctx->pc = 0x426108u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 41), (uint8_t)GPR_U32(ctx, 3));
    // 0x42610c: 0x90826e70  lbu         $v0, 0x6E70($a0)
    ctx->pc = 0x42610cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28272)));
    // 0x426110: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x426110u;
    {
        const bool branch_taken_0x426110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x426114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426110u;
        // 0x426114: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x426110) {
            ctx->pc = 0x426128u;
            goto label_426128;
        }
    }
    ctx->pc = 0x426118u;
label_426118:
    // 0x426118: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x426118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x42611c: 0xa2430029  sb          $v1, 0x29($s2)
    ctx->pc = 0x42611cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 41), (uint8_t)GPR_U32(ctx, 3));
    // 0x426120: 0x90826e70  lbu         $v0, 0x6E70($a0)
    ctx->pc = 0x426120u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28272)));
    // 0x426124: 0x34420014  ori         $v0, $v0, 0x14
    ctx->pc = 0x426124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20);
label_426128:
    // 0x426128: 0xa2420028  sb          $v0, 0x28($s2)
    ctx->pc = 0x426128u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 40), (uint8_t)GPR_U32(ctx, 2));
label_42612c:
    // 0x42612c: 0x38a20002  xori        $v0, $a1, 0x2
    ctx->pc = 0x42612cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)2);
    // 0x426130: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x426130u;
    {
        const bool branch_taken_0x426130 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x426130) {
            ctx->pc = 0x426134u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x426130u;
            // 0x426134: 0x8e630018  lw          $v1, 0x18($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x426148u;
            goto label_426148;
        }
    }
    ctx->pc = 0x426138u;
    // 0x426138: 0x92420028  lbu         $v0, 0x28($s2)
    ctx->pc = 0x426138u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x42613c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x42613cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x426140: 0xa2420028  sb          $v0, 0x28($s2)
    ctx->pc = 0x426140u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 40), (uint8_t)GPR_U32(ctx, 2));
    // 0x426144: 0x8e630018  lw          $v1, 0x18($s3)
    ctx->pc = 0x426144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_426148:
    // 0x426148: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x426148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x42614c: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x42614cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x426150: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x426150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x426154: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x426154u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x426158: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x426158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x42615c: 0xc05fa4c  jal         func_17E930
    ctx->pc = 0x42615Cu;
    SET_GPR_U32(ctx, 31, 0x426164u);
    ctx->pc = 0x426160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42615Cu;
    // 0x426160: 0xa242002a  sb          $v0, 0x2A($s2) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 18), 42), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E930u, 0x42615Cu, 0x426164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x426164u;
label_426164:
    // 0x426164: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x426164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x426168: 0xc118758  jal         func_461D60
    ctx->pc = 0x426168u;
    SET_GPR_U32(ctx, 31, 0x426170u);
    ctx->pc = 0x42616Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x426168u;
    // 0x42616c: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x461D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x461D60u, 0x426168u, 0x426170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x426170u;
label_426170:
    // 0x426170: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x426170u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x426174: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x426174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x426178: 0xc1233da  jal         func_48CF68
    ctx->pc = 0x426178u;
    SET_GPR_U32(ctx, 31, 0x426180u);
    ctx->pc = 0x42617Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x426178u;
    // 0x42617c: 0x36250002  ori         $a1, $s1, 0x2 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)2);
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CF68u, 0x426178u, 0x426180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x426180u;
label_426180:
    // 0x426180: 0x8ea6707c  lw          $a2, 0x707C($s5)
    ctx->pc = 0x426180u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28796)));
    // 0x426184: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x426184u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x426188: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x426188u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x42618c: 0x3c026c00  lui         $v0, 0x6C00
    ctx->pc = 0x42618cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27648 << 16));
    // 0x426190: 0x3442033c  ori         $v0, $v0, 0x33C
    ctx->pc = 0x426190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)828);
    // 0x426194: 0x2242025  or          $a0, $s1, $a0
    ctx->pc = 0x426194u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) | GPR_U64(ctx, 4));
    // 0x426198: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x426198u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x42619c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x42619cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x4261a0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4261a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4261a4: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x4261a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x4261a8: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x4261a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x4261ac: 0x34a50101  ori         $a1, $a1, 0x101
    ctx->pc = 0x4261acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)257);
    // 0x4261b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4261b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4261b4: 0x70651cc8  ppacw       $v1, $v1, $a1
    ctx->pc = 0x4261b4u;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 5)));
    // 0x4261b8: 0x704414c8  ppacw       $v0, $v0, $a0
    ctx->pc = 0x4261b8u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x4261bc: 0x70621cc8  ppacw       $v1, $v1, $v0
    ctx->pc = 0x4261bcu;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x4261c0: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x4261c0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x4261c4: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x4261c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x4261c8: 0x12800011  beqz        $s4, . + 4 + (0x11 << 2)
    ctx->pc = 0x4261C8u;
    {
        const bool branch_taken_0x4261c8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x4261CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4261C8u;
        // 0x4261cc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4261c8) {
            ctx->pc = 0x426210u;
            goto label_426210;
        }
    }
    ctx->pc = 0x4261D0u;
label_4261d0:
    // 0x4261d0: 0x7a030010  lq          $v1, 0x10($s0)
    ctx->pc = 0x4261d0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x4261d4: 0x7a040020  lq          $a0, 0x20($s0)
    ctx->pc = 0x4261d4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x4261d8: 0x7a050030  lq          $a1, 0x30($s0)
    ctx->pc = 0x4261d8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x4261dc: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x4261dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4261e0: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x4261e0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x4261e4: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x4261e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x4261e8: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x4261e8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x4261ec: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x4261ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x4261f0: 0x7cc40000  sq          $a0, 0x0($a2)
    ctx->pc = 0x4261f0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 4));
    // 0x4261f4: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x4261f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x4261f8: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x4261f8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
    // 0x4261fc: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x4261fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x426200: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x426200u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x426204: 0xf4102b  sltu        $v0, $a3, $s4
    ctx->pc = 0x426204u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x426208: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x426208u;
    {
        const bool branch_taken_0x426208 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42620Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426208u;
        // 0x42620c: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x426208) {
            ctx->pc = 0x4261D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4261d0;
        }
    }
    ctx->pc = 0x426210u;
label_426210:
    // 0x426210: 0xaea6707c  sw          $a2, 0x707C($s5)
    ctx->pc = 0x426210u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 28796), GPR_U32(ctx, 6));
    // 0x426214: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x426214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_426218:
    // 0x426218: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x426218u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x42621c: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x42621cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x426220: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x426220u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x426224: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x426224u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x426228: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x426228u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x42622c: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x42622cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x426230: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x426230u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x426234: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x426234u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x426238: 0x3e00008  jr          $ra
    ctx->pc = 0x426238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42623Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426238u;
        // 0x42623c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x426238u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x426240u;
}
