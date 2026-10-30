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

// Function: sub_002C0DD8
// Address: 0x2c0dd8 - 0x2c0f58
void sub_002C0DD8_0x2c0dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C0DD8_0x2c0dd8");
#endif

    switch (ctx->pc) {
        case 0x2c0dd8u: goto label_2c0dd8;
        case 0x2c0ddcu: goto label_2c0ddc;
        case 0x2c0de0u: goto label_2c0de0;
        case 0x2c0de4u: goto label_2c0de4;
        case 0x2c0de8u: goto label_2c0de8;
        case 0x2c0decu: goto label_2c0dec;
        case 0x2c0df0u: goto label_2c0df0;
        case 0x2c0df4u: goto label_2c0df4;
        case 0x2c0df8u: goto label_2c0df8;
        case 0x2c0dfcu: goto label_2c0dfc;
        case 0x2c0e00u: goto label_2c0e00;
        case 0x2c0e04u: goto label_2c0e04;
        case 0x2c0e08u: goto label_2c0e08;
        case 0x2c0e0cu: goto label_2c0e0c;
        case 0x2c0e10u: goto label_2c0e10;
        case 0x2c0e14u: goto label_2c0e14;
        case 0x2c0e18u: goto label_2c0e18;
        case 0x2c0e1cu: goto label_2c0e1c;
        case 0x2c0e20u: goto label_2c0e20;
        case 0x2c0e24u: goto label_2c0e24;
        case 0x2c0e28u: goto label_2c0e28;
        case 0x2c0e2cu: goto label_2c0e2c;
        case 0x2c0e30u: goto label_2c0e30;
        case 0x2c0e34u: goto label_2c0e34;
        case 0x2c0e38u: goto label_2c0e38;
        case 0x2c0e3cu: goto label_2c0e3c;
        case 0x2c0e40u: goto label_2c0e40;
        case 0x2c0e44u: goto label_2c0e44;
        case 0x2c0e48u: goto label_2c0e48;
        case 0x2c0e4cu: goto label_2c0e4c;
        case 0x2c0e50u: goto label_2c0e50;
        case 0x2c0e54u: goto label_2c0e54;
        case 0x2c0e58u: goto label_2c0e58;
        case 0x2c0e5cu: goto label_2c0e5c;
        case 0x2c0e60u: goto label_2c0e60;
        case 0x2c0e64u: goto label_2c0e64;
        case 0x2c0e68u: goto label_2c0e68;
        case 0x2c0e6cu: goto label_2c0e6c;
        case 0x2c0e70u: goto label_2c0e70;
        case 0x2c0e74u: goto label_2c0e74;
        case 0x2c0e78u: goto label_2c0e78;
        case 0x2c0e7cu: goto label_2c0e7c;
        case 0x2c0e80u: goto label_2c0e80;
        case 0x2c0e84u: goto label_2c0e84;
        case 0x2c0e88u: goto label_2c0e88;
        case 0x2c0e8cu: goto label_2c0e8c;
        case 0x2c0e90u: goto label_2c0e90;
        case 0x2c0e94u: goto label_2c0e94;
        case 0x2c0e98u: goto label_2c0e98;
        case 0x2c0e9cu: goto label_2c0e9c;
        case 0x2c0ea0u: goto label_2c0ea0;
        case 0x2c0ea4u: goto label_2c0ea4;
        case 0x2c0ea8u: goto label_2c0ea8;
        case 0x2c0eacu: goto label_2c0eac;
        case 0x2c0eb0u: goto label_2c0eb0;
        case 0x2c0eb4u: goto label_2c0eb4;
        case 0x2c0eb8u: goto label_2c0eb8;
        case 0x2c0ebcu: goto label_2c0ebc;
        case 0x2c0ec0u: goto label_2c0ec0;
        case 0x2c0ec4u: goto label_2c0ec4;
        case 0x2c0ec8u: goto label_2c0ec8;
        case 0x2c0eccu: goto label_2c0ecc;
        case 0x2c0ed0u: goto label_2c0ed0;
        case 0x2c0ed4u: goto label_2c0ed4;
        case 0x2c0ed8u: goto label_2c0ed8;
        case 0x2c0edcu: goto label_2c0edc;
        case 0x2c0ee0u: goto label_2c0ee0;
        case 0x2c0ee4u: goto label_2c0ee4;
        case 0x2c0ee8u: goto label_2c0ee8;
        case 0x2c0eecu: goto label_2c0eec;
        case 0x2c0ef0u: goto label_2c0ef0;
        case 0x2c0ef4u: goto label_2c0ef4;
        case 0x2c0ef8u: goto label_2c0ef8;
        case 0x2c0efcu: goto label_2c0efc;
        case 0x2c0f00u: goto label_2c0f00;
        case 0x2c0f04u: goto label_2c0f04;
        case 0x2c0f08u: goto label_2c0f08;
        case 0x2c0f0cu: goto label_2c0f0c;
        case 0x2c0f10u: goto label_2c0f10;
        case 0x2c0f14u: goto label_2c0f14;
        case 0x2c0f18u: goto label_2c0f18;
        case 0x2c0f1cu: goto label_2c0f1c;
        case 0x2c0f20u: goto label_2c0f20;
        case 0x2c0f24u: goto label_2c0f24;
        case 0x2c0f28u: goto label_2c0f28;
        case 0x2c0f2cu: goto label_2c0f2c;
        case 0x2c0f30u: goto label_2c0f30;
        case 0x2c0f34u: goto label_2c0f34;
        case 0x2c0f38u: goto label_2c0f38;
        case 0x2c0f3cu: goto label_2c0f3c;
        case 0x2c0f40u: goto label_2c0f40;
        case 0x2c0f44u: goto label_2c0f44;
        case 0x2c0f48u: goto label_2c0f48;
        case 0x2c0f4cu: goto label_2c0f4c;
        case 0x2c0f50u: goto label_2c0f50;
        case 0x2c0f54u: goto label_2c0f54;
        default: break;
    }

    ctx->pc = 0x2c0dd8u;

label_2c0dd8:
    // 0x2c0dd8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2c0dd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2c0ddc:
    // 0x2c0ddc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2c0ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2c0de0:
    // 0x2c0de0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2c0de0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_2c0de4:
    // 0x2c0de4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2c0de4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2c0de8:
    // 0x2c0de8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c0de8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c0dec:
    // 0x2c0dec: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2c0decu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_2c0df0:
    // 0x2c0df0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c0df0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2c0df4:
    // 0x2c0df4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2c0df4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2c0df8:
    // 0x2c0df8: 0x86030024  lh          $v1, 0x24($s0)
    ctx->pc = 0x2c0df8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 36)));
label_2c0dfc:
    // 0x2c0dfc: 0x10650018  beq         $v1, $a1, . + 4 + (0x18 << 2)
label_2c0e00:
    if (ctx->pc == 0x2C0E00u) {
        ctx->pc = 0x2C0E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0DFCu;
        // 0x2c0e00: 0x8c910000  lw          $s1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0E04u;
        goto label_2c0e04;
    }
    ctx->pc = 0x2C0DFCu;
    {
        const bool branch_taken_0x2c0dfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x2C0E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0DFCu;
        // 0x2c0e00: 0x8c910000  lw          $s1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0dfc) {
            ctx->pc = 0x2C0E60u;
            goto label_2c0e60;
        }
    }
    ctx->pc = 0x2C0E04u;
label_2c0e04:
    // 0x2c0e04: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x2c0e04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_2c0e08:
    // 0x2c0e08: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2c0e0c:
    if (ctx->pc == 0x2C0E0Cu) {
        ctx->pc = 0x2C0E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0E08u;
        // 0x2c0e0c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0E10u;
        goto label_2c0e10;
    }
    ctx->pc = 0x2C0E08u;
    {
        const bool branch_taken_0x2c0e08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0E08u;
        // 0x2c0e0c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0e08) {
            ctx->pc = 0x2C0E20u;
            goto label_2c0e20;
        }
    }
    ctx->pc = 0x2C0E10u;
label_2c0e10:
    // 0x2c0e10: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_2c0e14:
    if (ctx->pc == 0x2C0E14u) {
        ctx->pc = 0x2C0E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0E10u;
        // 0x2c0e14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0E18u;
        goto label_2c0e18;
    }
    ctx->pc = 0x2C0E10u;
    {
        const bool branch_taken_0x2c0e10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0E10u;
        // 0x2c0e14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0e10) {
            ctx->pc = 0x2C0E30u;
            goto label_2c0e30;
        }
    }
    ctx->pc = 0x2C0E18u;
label_2c0e18:
    // 0x2c0e18: 0x1000004a  b           . + 4 + (0x4A << 2)
label_2c0e1c:
    if (ctx->pc == 0x2C0E1Cu) {
        ctx->pc = 0x2C0E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0E18u;
        // 0x2c0e1c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0E20u;
        goto label_2c0e20;
    }
    ctx->pc = 0x2C0E18u;
    {
        const bool branch_taken_0x2c0e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0E18u;
        // 0x2c0e1c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0e18) {
            ctx->pc = 0x2C0F44u;
            goto label_2c0f44;
        }
    }
    ctx->pc = 0x2C0E20u;
label_2c0e20:
    // 0x2c0e20: 0x10620040  beq         $v1, $v0, . + 4 + (0x40 << 2)
label_2c0e24:
    if (ctx->pc == 0x2C0E24u) {
        ctx->pc = 0x2C0E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0E20u;
        // 0x2c0e24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0E28u;
        goto label_2c0e28;
    }
    ctx->pc = 0x2C0E20u;
    {
        const bool branch_taken_0x2c0e20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C0E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0E20u;
        // 0x2c0e24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0e20) {
            ctx->pc = 0x2C0F24u;
            goto label_2c0f24;
        }
    }
    ctx->pc = 0x2C0E28u;
label_2c0e28:
    // 0x2c0e28: 0x10000046  b           . + 4 + (0x46 << 2)
label_2c0e2c:
    if (ctx->pc == 0x2C0E2Cu) {
        ctx->pc = 0x2C0E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0E28u;
        // 0x2c0e2c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0E30u;
        goto label_2c0e30;
    }
    ctx->pc = 0x2C0E28u;
    {
        const bool branch_taken_0x2c0e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0E28u;
        // 0x2c0e2c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0e28) {
            ctx->pc = 0x2C0F44u;
            goto label_2c0f44;
        }
    }
    ctx->pc = 0x2C0E30u;
label_2c0e30:
    // 0x2c0e30: 0xa6050024  sh          $a1, 0x24($s0)
    ctx->pc = 0x2c0e30u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 36), (uint16_t)GPR_U32(ctx, 5));
label_2c0e34:
    // 0x2c0e34: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2c0e34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c0e38:
    // 0x2c0e38: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2c0e38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2c0e3c:
    // 0x2c0e3c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2c0e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2c0e40:
    // 0x2c0e40: 0x40f809  jalr        $v0
label_2c0e44:
    if (ctx->pc == 0x2C0E44u) {
        ctx->pc = 0x2C0E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0E40u;
        // 0x2c0e44: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0E48u;
        goto label_2c0e48;
    }
    ctx->pc = 0x2C0E40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C0E48u);
        ctx->pc = 0x2C0E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0E40u;
        // 0x2c0e44: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C0E40u, 0x2C0E48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C0E48u;
label_2c0e48:
    // 0x2c0e48: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x2c0e48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_2c0e4c:
    // 0x2c0e4c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c0e4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c0e50:
    // 0x2c0e50: 0xc0ab742  jal         func_2ADD08
label_2c0e54:
    if (ctx->pc == 0x2C0E54u) {
        ctx->pc = 0x2C0E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0E50u;
        // 0x2c0e54: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0E58u;
        goto label_2c0e58;
    }
    ctx->pc = 0x2C0E50u;
    SET_GPR_U32(ctx, 31, 0x2C0E58u);
    ctx->pc = 0x2C0E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0E50u;
    // 0x2c0e54: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ADD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ADD08u, 0x2C0E50u, 0x2C0E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0E58u;
label_2c0e58:
    // 0x2c0e58: 0x10000039  b           . + 4 + (0x39 << 2)
label_2c0e5c:
    if (ctx->pc == 0x2C0E5Cu) {
        ctx->pc = 0x2C0E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0E58u;
        // 0x2c0e5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0E60u;
        goto label_2c0e60;
    }
    ctx->pc = 0x2C0E58u;
    {
        const bool branch_taken_0x2c0e58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0E58u;
        // 0x2c0e5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0e58) {
            ctx->pc = 0x2C0F40u;
            goto label_2c0f40;
        }
    }
    ctx->pc = 0x2C0E60u;
label_2c0e60:
    // 0x2c0e60: 0x8082002e  lb          $v0, 0x2E($a0)
    ctx->pc = 0x2c0e60u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 46)));
label_2c0e64:
    // 0x2c0e64: 0x1c400036  bgtz        $v0, . + 4 + (0x36 << 2)
label_2c0e68:
    if (ctx->pc == 0x2C0E68u) {
        ctx->pc = 0x2C0E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0E64u;
        // 0x2c0e68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0E6Cu;
        goto label_2c0e6c;
    }
    ctx->pc = 0x2C0E64u;
    {
        const bool branch_taken_0x2c0e64 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2C0E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0E64u;
        // 0x2c0e68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0e64) {
            ctx->pc = 0x2C0F40u;
            goto label_2c0f40;
        }
    }
    ctx->pc = 0x2C0E6Cu;
label_2c0e6c:
    // 0x2c0e6c: 0xc0aff12  jal         func_2BFC48
label_2c0e70:
    if (ctx->pc == 0x2C0E70u) {
        ctx->pc = 0x2C0E74u;
        goto label_2c0e74;
    }
    ctx->pc = 0x2C0E6Cu;
    SET_GPR_U32(ctx, 31, 0x2C0E74u);
    ctx->pc = 0x2BFC48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BFC48u, 0x2C0E6Cu, 0x2C0E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0E74u;
label_2c0e74:
    // 0x2c0e74: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2c0e74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c0e78:
    // 0x2c0e78: 0x12400013  beqz        $s2, . + 4 + (0x13 << 2)
label_2c0e7c:
    if (ctx->pc == 0x2C0E7Cu) {
        ctx->pc = 0x2C0E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0E78u;
        // 0x2c0e7c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0E80u;
        goto label_2c0e80;
    }
    ctx->pc = 0x2C0E78u;
    {
        const bool branch_taken_0x2c0e78 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0E78u;
        // 0x2c0e7c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0e78) {
            ctx->pc = 0x2C0EC8u;
            goto label_2c0ec8;
        }
    }
    ctx->pc = 0x2C0E80u;
label_2c0e80:
    // 0x2c0e80: 0xc087502  jal         func_21D408
label_2c0e84:
    if (ctx->pc == 0x2C0E84u) {
        ctx->pc = 0x2C0E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0E80u;
        // 0x2c0e84: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0E88u;
        goto label_2c0e88;
    }
    ctx->pc = 0x2C0E80u;
    SET_GPR_U32(ctx, 31, 0x2C0E88u);
    ctx->pc = 0x2C0E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0E80u;
    // 0x2c0e84: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2C0E80u, 0x2C0E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0E88u;
label_2c0e88:
    // 0x2c0e88: 0xac510288  sw          $s1, 0x288($v0)
    ctx->pc = 0x2c0e88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 648), GPR_U32(ctx, 17));
label_2c0e8c:
    // 0x2c0e8c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2c0e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c0e90:
    // 0x2c0e90: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2c0e90u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2c0e94:
    // 0x2c0e94: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2c0e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2c0e98:
    // 0x2c0e98: 0x40f809  jalr        $v0
label_2c0e9c:
    if (ctx->pc == 0x2C0E9Cu) {
        ctx->pc = 0x2C0E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0E98u;
        // 0x2c0e9c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0EA0u;
        goto label_2c0ea0;
    }
    ctx->pc = 0x2C0E98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C0EA0u);
        ctx->pc = 0x2C0E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0E98u;
        // 0x2c0e9c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C0E98u, 0x2C0EA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C0EA0u;
label_2c0ea0:
    // 0x2c0ea0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x2c0ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_2c0ea4:
    // 0x2c0ea4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c0ea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c0ea8:
    // 0x2c0ea8: 0x8c62489c  lw          $v0, 0x489C($v1)
    ctx->pc = 0x2c0ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
label_2c0eac:
    // 0x2c0eac: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2c0eacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2c0eb0:
    // 0x2c0eb0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c0eb0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c0eb4:
    // 0x2c0eb4: 0xc0aff80  jal         func_2BFE00
label_2c0eb8:
    if (ctx->pc == 0x2C0EB8u) {
        ctx->pc = 0x2C0EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0EB4u;
        // 0x2c0eb8: 0x84460320  lh          $a2, 0x320($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 800)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0EBCu;
        goto label_2c0ebc;
    }
    ctx->pc = 0x2C0EB4u;
    SET_GPR_U32(ctx, 31, 0x2C0EBCu);
    ctx->pc = 0x2C0EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0EB4u;
    // 0x2c0eb8: 0x84460320  lh          $a2, 0x320($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 800)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BFE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BFE00u, 0x2C0EB4u, 0x2C0EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0EBCu;
label_2c0ebc:
    // 0x2c0ebc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2c0ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2c0ec0:
    // 0x2c0ec0: 0x1000001e  b           . + 4 + (0x1E << 2)
label_2c0ec4:
    if (ctx->pc == 0x2C0EC4u) {
        ctx->pc = 0x2C0EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0EC0u;
        // 0x2c0ec4: 0xa6020024  sh          $v0, 0x24($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 36), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0EC8u;
        goto label_2c0ec8;
    }
    ctx->pc = 0x2C0EC0u;
    {
        const bool branch_taken_0x2c0ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0EC0u;
        // 0x2c0ec4: 0xa6020024  sh          $v0, 0x24($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 36), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0ec0) {
            ctx->pc = 0x2C0F3Cu;
            goto label_2c0f3c;
        }
    }
    ctx->pc = 0x2C0EC8u;
label_2c0ec8:
    // 0x2c0ec8: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x2c0ec8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2c0ecc:
    // 0x2c0ecc: 0xa6020024  sh          $v0, 0x24($s0)
    ctx->pc = 0x2c0eccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 36), (uint16_t)GPR_U32(ctx, 2));
label_2c0ed0:
    // 0x2c0ed0: 0x24040130  addiu       $a0, $zero, 0x130
    ctx->pc = 0x2c0ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
label_2c0ed4:
    // 0x2c0ed4: 0x84c30210  lh          $v1, 0x210($a2)
    ctx->pc = 0x2c0ed4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 528)));
label_2c0ed8:
    // 0x2c0ed8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2c0ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c0edc:
    // 0x2c0edc: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x2c0edcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_2c0ee0:
    // 0x2c0ee0: 0x8cd0020c  lw          $s0, 0x20C($a2)
    ctx->pc = 0x2c0ee0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 524)));
label_2c0ee4:
    // 0x2c0ee4: 0x84a40028  lh          $a0, 0x28($a1)
    ctx->pc = 0x2c0ee4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 40)));
label_2c0ee8:
    // 0x2c0ee8: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x2c0ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_2c0eec:
    // 0x2c0eec: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x2c0eecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_2c0ef0:
    // 0x2c0ef0: 0x24630640  addiu       $v1, $v1, 0x640
    ctx->pc = 0x2c0ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1600));
label_2c0ef4:
    // 0x2c0ef4: 0x40f809  jalr        $v0
label_2c0ef8:
    if (ctx->pc == 0x2C0EF8u) {
        ctx->pc = 0x2C0EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0EF4u;
        // 0x2c0ef8: 0x2038021  addu        $s0, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0EFCu;
        goto label_2c0efc;
    }
    ctx->pc = 0x2C0EF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C0EFCu);
        ctx->pc = 0x2C0EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0EF4u;
        // 0x2c0ef8: 0x2038021  addu        $s0, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C0EF4u, 0x2C0EFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C0EFCu;
label_2c0efc:
    // 0x2c0efc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2c0efcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2c0f00:
    // 0x2c0f00: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c0f00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c0f04:
    // 0x2c0f04: 0x8e05006c  lw          $a1, 0x6C($s0)
    ctx->pc = 0x2c0f04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
label_2c0f08:
    // 0x2c0f08: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2c0f08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2c0f0c:
    // 0x2c0f0c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2c0f0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_2c0f10:
    // 0x2c0f10: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x2c0f10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2c0f14:
    // 0x2c0f14: 0xc0b6a04  jal         func_2DA810
label_2c0f18:
    if (ctx->pc == 0x2C0F18u) {
        ctx->pc = 0x2C0F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0F14u;
        // 0x2c0f18: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0F1Cu;
        goto label_2c0f1c;
    }
    ctx->pc = 0x2C0F14u;
    SET_GPR_U32(ctx, 31, 0x2C0F1Cu);
    ctx->pc = 0x2C0F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0F14u;
    // 0x2c0f18: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA810u, 0x2C0F14u, 0x2C0F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0F1Cu;
label_2c0f1c:
    // 0x2c0f1c: 0x10000008  b           . + 4 + (0x8 << 2)
label_2c0f20:
    if (ctx->pc == 0x2C0F20u) {
        ctx->pc = 0x2C0F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0F1Cu;
        // 0x2c0f20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0F24u;
        goto label_2c0f24;
    }
    ctx->pc = 0x2C0F1Cu;
    {
        const bool branch_taken_0x2c0f1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0F1Cu;
        // 0x2c0f20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0f1c) {
            ctx->pc = 0x2C0F40u;
            goto label_2c0f40;
        }
    }
    ctx->pc = 0x2C0F24u;
label_2c0f24:
    // 0x2c0f24: 0x8082002e  lb          $v0, 0x2E($a0)
    ctx->pc = 0x2c0f24u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 46)));
label_2c0f28:
    // 0x2c0f28: 0x1c400005  bgtz        $v0, . + 4 + (0x5 << 2)
label_2c0f2c:
    if (ctx->pc == 0x2C0F2Cu) {
        ctx->pc = 0x2C0F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0F28u;
        // 0x2c0f2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0F30u;
        goto label_2c0f30;
    }
    ctx->pc = 0x2C0F28u;
    {
        const bool branch_taken_0x2c0f28 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2C0F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0F28u;
        // 0x2c0f2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0f28) {
            ctx->pc = 0x2C0F40u;
            goto label_2c0f40;
        }
    }
    ctx->pc = 0x2C0F30u;
label_2c0f30:
    // 0x2c0f30: 0xa6050024  sh          $a1, 0x24($s0)
    ctx->pc = 0x2c0f30u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 36), (uint16_t)GPR_U32(ctx, 5));
label_2c0f34:
    // 0x2c0f34: 0x10000002  b           . + 4 + (0x2 << 2)
label_2c0f38:
    if (ctx->pc == 0x2C0F38u) {
        ctx->pc = 0x2C0F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0F34u;
        // 0x2c0f38: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0F3Cu;
        goto label_2c0f3c;
    }
    ctx->pc = 0x2C0F34u;
    {
        const bool branch_taken_0x2c0f34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0F34u;
        // 0x2c0f38: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0f34) {
            ctx->pc = 0x2C0F40u;
            goto label_2c0f40;
        }
    }
    ctx->pc = 0x2C0F3Cu;
label_2c0f3c:
    // 0x2c0f3c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c0f3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c0f40:
    // 0x2c0f40: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2c0f40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2c0f44:
    // 0x2c0f44: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2c0f44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2c0f48:
    // 0x2c0f48: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2c0f48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2c0f4c:
    // 0x2c0f4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c0f4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c0f50:
    // 0x2c0f50: 0x3e00008  jr          $ra
label_2c0f54:
    if (ctx->pc == 0x2C0F54u) {
        ctx->pc = 0x2C0F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0F50u;
        // 0x2c0f54: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0F58u;
        goto label_fallthrough_0x2c0f50;
    }
    ctx->pc = 0x2C0F50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C0F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0F50u;
        // 0x2c0f54: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C0F50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2c0f50:
    ctx->pc = 0x2C0F58u;
}
