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

// Function: sub_00302DF8
// Address: 0x302df8 - 0x302eb0
void sub_00302DF8_0x302df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00302DF8_0x302df8");
#endif

    switch (ctx->pc) {
        case 0x302df8u: goto label_302df8;
        case 0x302dfcu: goto label_302dfc;
        case 0x302e00u: goto label_302e00;
        case 0x302e04u: goto label_302e04;
        case 0x302e08u: goto label_302e08;
        case 0x302e0cu: goto label_302e0c;
        case 0x302e10u: goto label_302e10;
        case 0x302e14u: goto label_302e14;
        case 0x302e18u: goto label_302e18;
        case 0x302e1cu: goto label_302e1c;
        case 0x302e20u: goto label_302e20;
        case 0x302e24u: goto label_302e24;
        case 0x302e28u: goto label_302e28;
        case 0x302e2cu: goto label_302e2c;
        case 0x302e30u: goto label_302e30;
        case 0x302e34u: goto label_302e34;
        case 0x302e38u: goto label_302e38;
        case 0x302e3cu: goto label_302e3c;
        case 0x302e40u: goto label_302e40;
        case 0x302e44u: goto label_302e44;
        case 0x302e48u: goto label_302e48;
        case 0x302e4cu: goto label_302e4c;
        case 0x302e50u: goto label_302e50;
        case 0x302e54u: goto label_302e54;
        case 0x302e58u: goto label_302e58;
        case 0x302e5cu: goto label_302e5c;
        case 0x302e60u: goto label_302e60;
        case 0x302e64u: goto label_302e64;
        case 0x302e68u: goto label_302e68;
        case 0x302e6cu: goto label_302e6c;
        case 0x302e70u: goto label_302e70;
        case 0x302e74u: goto label_302e74;
        case 0x302e78u: goto label_302e78;
        case 0x302e7cu: goto label_302e7c;
        case 0x302e80u: goto label_302e80;
        case 0x302e84u: goto label_302e84;
        case 0x302e88u: goto label_302e88;
        case 0x302e8cu: goto label_302e8c;
        case 0x302e90u: goto label_302e90;
        case 0x302e94u: goto label_302e94;
        case 0x302e98u: goto label_302e98;
        case 0x302e9cu: goto label_302e9c;
        case 0x302ea0u: goto label_302ea0;
        case 0x302ea4u: goto label_302ea4;
        case 0x302ea8u: goto label_302ea8;
        case 0x302eacu: goto label_302eac;
        default: break;
    }

    ctx->pc = 0x302df8u;

label_302df8:
    // 0x302df8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x302df8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_302dfc:
    // 0x302dfc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x302dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_302e00:
    // 0x302e00: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x302e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_302e04:
    // 0x302e04: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x302e04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_302e08:
    // 0x302e08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x302e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_302e0c:
    // 0x302e0c: 0xc089f98  jal         func_227E60
label_302e10:
    if (ctx->pc == 0x302E10u) {
        ctx->pc = 0x302E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302E0Cu;
        // 0x302e10: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302E14u;
        goto label_302e14;
    }
    ctx->pc = 0x302E0Cu;
    SET_GPR_U32(ctx, 31, 0x302E14u);
    ctx->pc = 0x302E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302E0Cu;
    // 0x302e10: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E60u, 0x302E0Cu, 0x302E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302E14u;
label_302e14:
    // 0x302e14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x302e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_302e18:
    // 0x302e18: 0x54430003  bnel        $v0, $v1, . + 4 + (0x3 << 2)
label_302e1c:
    if (ctx->pc == 0x302E1Cu) {
        ctx->pc = 0x302E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302E18u;
        // 0x302e1c: 0x8202002c  lb          $v0, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302E20u;
        goto label_302e20;
    }
    ctx->pc = 0x302E18u;
    {
        const bool branch_taken_0x302e18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x302e18) {
            ctx->pc = 0x302E1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x302E18u;
            // 0x302e1c: 0x8202002c  lb          $v0, 0x2C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x302E28u;
            goto label_302e28;
        }
    }
    ctx->pc = 0x302E20u;
label_302e20:
    // 0x302e20: 0x1000001e  b           . + 4 + (0x1E << 2)
label_302e24:
    if (ctx->pc == 0x302E24u) {
        ctx->pc = 0x302E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302E20u;
        // 0x302e24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302E28u;
        goto label_302e28;
    }
    ctx->pc = 0x302E20u;
    {
        const bool branch_taken_0x302e20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302E20u;
        // 0x302e24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302e20) {
            ctx->pc = 0x302E9Cu;
            goto label_302e9c;
        }
    }
    ctx->pc = 0x302E28u;
label_302e28:
    // 0x302e28: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_302e2c:
    if (ctx->pc == 0x302E2Cu) {
        ctx->pc = 0x302E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302E28u;
        // 0x302e2c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302E30u;
        goto label_302e30;
    }
    ctx->pc = 0x302E28u;
    {
        const bool branch_taken_0x302e28 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x302E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302E28u;
        // 0x302e2c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302e28) {
            ctx->pc = 0x302E40u;
            goto label_302e40;
        }
    }
    ctx->pc = 0x302E30u;
label_302e30:
    // 0x302e30: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x302e30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_302e34:
    // 0x302e34: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x302e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_302e38:
    // 0x302e38: 0x10000002  b           . + 4 + (0x2 << 2)
label_302e3c:
    if (ctx->pc == 0x302E3Cu) {
        ctx->pc = 0x302E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302E38u;
        // 0x302e3c: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302E40u;
        goto label_302e40;
    }
    ctx->pc = 0x302E38u;
    {
        const bool branch_taken_0x302e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302E38u;
        // 0x302e3c: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302e38) {
            ctx->pc = 0x302E44u;
            goto label_302e44;
        }
    }
    ctx->pc = 0x302E40u;
label_302e40:
    // 0x302e40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x302e40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_302e44:
    // 0x302e44: 0x10a00015  beqz        $a1, . + 4 + (0x15 << 2)
label_302e48:
    if (ctx->pc == 0x302E48u) {
        ctx->pc = 0x302E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302E44u;
        // 0x302e48: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302E4Cu;
        goto label_302e4c;
    }
    ctx->pc = 0x302E44u;
    {
        const bool branch_taken_0x302e44 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x302E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302E44u;
        // 0x302e48: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302e44) {
            ctx->pc = 0x302E9Cu;
            goto label_302e9c;
        }
    }
    ctx->pc = 0x302E4Cu;
label_302e4c:
    // 0x302e4c: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x302e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_302e50:
    // 0x302e50: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x302e50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_302e54:
    // 0x302e54: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x302e54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_302e58:
    // 0x302e58: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x302e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_302e5c:
    // 0x302e5c: 0x40f809  jalr        $v0
label_302e60:
    if (ctx->pc == 0x302E60u) {
        ctx->pc = 0x302E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302E5Cu;
        // 0x302e60: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302E64u;
        goto label_302e64;
    }
    ctx->pc = 0x302E5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x302E64u);
        ctx->pc = 0x302E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302E5Cu;
        // 0x302e60: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x302E5Cu, 0x302E64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x302E64u;
label_302e64:
    // 0x302e64: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x302e64u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_302e68:
    // 0x302e68: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x302e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_302e6c:
    // 0x302e6c: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_302e70:
    if (ctx->pc == 0x302E70u) {
        ctx->pc = 0x302E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302E6Cu;
        // 0x302e70: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302E74u;
        goto label_302e74;
    }
    ctx->pc = 0x302E6Cu;
    {
        const bool branch_taken_0x302e6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x302E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302E6Cu;
        // 0x302e70: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302e6c) {
            ctx->pc = 0x302E94u;
            goto label_302e94;
        }
    }
    ctx->pc = 0x302E74u;
label_302e74:
    // 0x302e74: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_302e78:
    if (ctx->pc == 0x302E78u) {
        ctx->pc = 0x302E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302E74u;
        // 0x302e78: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302E7Cu;
        goto label_302e7c;
    }
    ctx->pc = 0x302E74u;
    {
        const bool branch_taken_0x302e74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x302E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302E74u;
        // 0x302e78: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302e74) {
            ctx->pc = 0x302E94u;
            goto label_302e94;
        }
    }
    ctx->pc = 0x302E7Cu;
label_302e7c:
    // 0x302e7c: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_302e80:
    if (ctx->pc == 0x302E80u) {
        ctx->pc = 0x302E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302E7Cu;
        // 0x302e80: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302E84u;
        goto label_302e84;
    }
    ctx->pc = 0x302E7Cu;
    {
        const bool branch_taken_0x302e7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x302E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302E7Cu;
        // 0x302e80: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302e7c) {
            ctx->pc = 0x302E9Cu;
            goto label_302e9c;
        }
    }
    ctx->pc = 0x302E84u;
label_302e84:
    // 0x302e84: 0xc0a40d2  jal         func_290348
label_302e88:
    if (ctx->pc == 0x302E88u) {
        ctx->pc = 0x302E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302E84u;
        // 0x302e88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302E8Cu;
        goto label_302e8c;
    }
    ctx->pc = 0x302E84u;
    SET_GPR_U32(ctx, 31, 0x302E8Cu);
    ctx->pc = 0x302E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302E84u;
    // 0x302e88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290348u, 0x302E84u, 0x302E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302E8Cu;
label_302e8c:
    // 0x302e8c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_302e90:
    if (ctx->pc == 0x302E90u) {
        ctx->pc = 0x302E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302E8Cu;
        // 0x302e90: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302E94u;
        goto label_302e94;
    }
    ctx->pc = 0x302E8Cu;
    {
        const bool branch_taken_0x302e8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x302E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302E8Cu;
        // 0x302e90: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302e8c) {
            ctx->pc = 0x302E9Cu;
            goto label_302e9c;
        }
    }
    ctx->pc = 0x302E94u;
label_302e94:
    // 0x302e94: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x302e94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_302e98:
    // 0x302e98: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x302e98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_302e9c:
    // 0x302e9c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x302e9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_302ea0:
    // 0x302ea0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x302ea0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_302ea4:
    // 0x302ea4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x302ea4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_302ea8:
    // 0x302ea8: 0x3e00008  jr          $ra
label_302eac:
    if (ctx->pc == 0x302EACu) {
        ctx->pc = 0x302EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302EA8u;
        // 0x302eac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302EB0u;
        goto label_fallthrough_0x302ea8;
    }
    ctx->pc = 0x302EA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x302EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302EA8u;
        // 0x302eac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x302EA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x302ea8:
    ctx->pc = 0x302EB0u;
}
