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

// Function: sub_0031CAF8
// Address: 0x31caf8 - 0x31cb9c
void sub_0031CAF8_0x31caf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031CAF8_0x31caf8");
#endif

    switch (ctx->pc) {
        case 0x31caf8u: goto label_31caf8;
        case 0x31cafcu: goto label_31cafc;
        case 0x31cb00u: goto label_31cb00;
        case 0x31cb04u: goto label_31cb04;
        case 0x31cb08u: goto label_31cb08;
        case 0x31cb0cu: goto label_31cb0c;
        case 0x31cb10u: goto label_31cb10;
        case 0x31cb14u: goto label_31cb14;
        case 0x31cb18u: goto label_31cb18;
        case 0x31cb1cu: goto label_31cb1c;
        case 0x31cb20u: goto label_31cb20;
        case 0x31cb24u: goto label_31cb24;
        case 0x31cb28u: goto label_31cb28;
        case 0x31cb2cu: goto label_31cb2c;
        case 0x31cb30u: goto label_31cb30;
        case 0x31cb34u: goto label_31cb34;
        case 0x31cb38u: goto label_31cb38;
        case 0x31cb3cu: goto label_31cb3c;
        case 0x31cb40u: goto label_31cb40;
        case 0x31cb44u: goto label_31cb44;
        case 0x31cb48u: goto label_31cb48;
        case 0x31cb4cu: goto label_31cb4c;
        case 0x31cb50u: goto label_31cb50;
        case 0x31cb54u: goto label_31cb54;
        case 0x31cb58u: goto label_31cb58;
        case 0x31cb5cu: goto label_31cb5c;
        case 0x31cb60u: goto label_31cb60;
        case 0x31cb64u: goto label_31cb64;
        case 0x31cb68u: goto label_31cb68;
        case 0x31cb6cu: goto label_31cb6c;
        case 0x31cb70u: goto label_31cb70;
        case 0x31cb74u: goto label_31cb74;
        case 0x31cb78u: goto label_31cb78;
        case 0x31cb7cu: goto label_31cb7c;
        case 0x31cb80u: goto label_31cb80;
        case 0x31cb84u: goto label_31cb84;
        case 0x31cb88u: goto label_31cb88;
        case 0x31cb8cu: goto label_31cb8c;
        case 0x31cb90u: goto label_31cb90;
        case 0x31cb94u: goto label_31cb94;
        case 0x31cb98u: goto label_31cb98;
        default: break;
    }

    ctx->pc = 0x31caf8u;

label_31caf8:
    // 0x31caf8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x31caf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_31cafc:
    // 0x31cafc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x31cafcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_31cb00:
    // 0x31cb00: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x31cb00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_31cb04:
    // 0x31cb04: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x31cb04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_31cb08:
    // 0x31cb08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31cb08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_31cb0c:
    // 0x31cb0c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x31cb0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_31cb10:
    // 0x31cb10: 0xc08a61a  jal         func_229868
label_31cb14:
    if (ctx->pc == 0x31CB14u) {
        ctx->pc = 0x31CB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CB10u;
        // 0x31cb14: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31CB18u;
        goto label_31cb18;
    }
    ctx->pc = 0x31CB10u;
    SET_GPR_U32(ctx, 31, 0x31CB18u);
    ctx->pc = 0x31CB14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CB10u;
    // 0x31cb14: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x31CB10u, 0x31CB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CB18u;
label_31cb18:
    // 0x31cb18: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x31cb18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31cb1c:
    // 0x31cb1c: 0x10a00022  beqz        $a1, . + 4 + (0x22 << 2)
label_31cb20:
    if (ctx->pc == 0x31CB20u) {
        ctx->pc = 0x31CB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CB1Cu;
        // 0x31cb20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31CB24u;
        goto label_31cb24;
    }
    ctx->pc = 0x31CB1Cu;
    {
        const bool branch_taken_0x31cb1c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x31CB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CB1Cu;
        // 0x31cb20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31cb1c) {
            ctx->pc = 0x31CBA8u;
            return;
        }
    }
    ctx->pc = 0x31CB24u;
label_31cb24:
    // 0x31cb24: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x31cb24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_31cb28:
    // 0x31cb28: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x31cb28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_31cb2c:
    // 0x31cb2c: 0x2c830016  sltiu       $v1, $a0, 0x16
    ctx->pc = 0x31cb2cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)22) ? 1 : 0);
label_31cb30:
    // 0x31cb30: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
label_31cb34:
    if (ctx->pc == 0x31CB34u) {
        ctx->pc = 0x31CB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CB30u;
        // 0x31cb34: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31CB38u;
        goto label_31cb38;
    }
    ctx->pc = 0x31CB30u;
    {
        const bool branch_taken_0x31cb30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31CB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CB30u;
        // 0x31cb34: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31cb30) {
            ctx->pc = 0x31CBA4u;
            return;
        }
    }
    ctx->pc = 0x31CB38u;
label_31cb38:
    // 0x31cb38: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x31cb38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_31cb3c:
    // 0x31cb3c: 0x24421ea0  addiu       $v0, $v0, 0x1EA0
    ctx->pc = 0x31cb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7840));
label_31cb40:
    // 0x31cb40: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x31cb40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_31cb44:
    // 0x31cb44: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x31cb44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_31cb48:
    // 0x31cb48: 0x800008  jr          $a0
label_31cb4c:
    if (ctx->pc == 0x31CB4Cu) {
        ctx->pc = 0x31CB50u;
        goto label_31cb50;
    }
    ctx->pc = 0x31CB48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x31CB50u: goto label_31cb50;
            case 0x31CB60u: goto label_31cb60;
            case 0x31CB70u: goto label_31cb70;
            case 0x31CB7Cu: goto label_31cb7c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31CB48u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x31CB50u;
label_31cb50:
    // 0x31cb50: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x31cb50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_31cb54:
    // 0x31cb54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31cb54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31cb58:
    // 0x31cb58: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
label_31cb5c:
    if (ctx->pc == 0x31CB5Cu) {
        ctx->pc = 0x31CB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CB58u;
        // 0x31cb5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31CB60u;
        goto label_31cb60;
    }
    ctx->pc = 0x31CB58u;
    {
        const bool branch_taken_0x31cb58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x31CB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CB58u;
        // 0x31cb5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31cb58) {
            ctx->pc = 0x31CBA8u;
            return;
        }
    }
    ctx->pc = 0x31CB60u;
label_31cb60:
    // 0x31cb60: 0xc0c71d0  jal         func_31C740
label_31cb64:
    if (ctx->pc == 0x31CB64u) {
        ctx->pc = 0x31CB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CB60u;
        // 0x31cb64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31CB68u;
        goto label_31cb68;
    }
    ctx->pc = 0x31CB60u;
    SET_GPR_U32(ctx, 31, 0x31CB68u);
    ctx->pc = 0x31CB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CB60u;
    // 0x31cb64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31C740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31C740u, 0x31CB60u, 0x31CB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CB68u;
label_31cb68:
    // 0x31cb68: 0x1000000f  b           . + 4 + (0xF << 2)
label_31cb6c:
    if (ctx->pc == 0x31CB6Cu) {
        ctx->pc = 0x31CB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CB68u;
        // 0x31cb6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31CB70u;
        goto label_31cb70;
    }
    ctx->pc = 0x31CB68u;
    {
        const bool branch_taken_0x31cb68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31CB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CB68u;
        // 0x31cb6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31cb68) {
            ctx->pc = 0x31CBA8u;
            return;
        }
    }
    ctx->pc = 0x31CB70u;
label_31cb70:
    // 0x31cb70: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x31cb70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_31cb74:
    // 0x31cb74: 0x10000003  b           . + 4 + (0x3 << 2)
label_31cb78:
    if (ctx->pc == 0x31CB78u) {
        ctx->pc = 0x31CB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CB74u;
        // 0x31cb78: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31CB7Cu;
        goto label_31cb7c;
    }
    ctx->pc = 0x31CB74u;
    {
        const bool branch_taken_0x31cb74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31CB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CB74u;
        // 0x31cb78: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31cb74) {
            ctx->pc = 0x31CB84u;
            goto label_31cb84;
        }
    }
    ctx->pc = 0x31CB7Cu;
label_31cb7c:
    // 0x31cb7c: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x31cb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_31cb80:
    // 0x31cb80: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x31cb80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_31cb84:
    // 0x31cb84: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x31cb84u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_31cb88:
    // 0x31cb88: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x31cb88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_31cb8c:
    // 0x31cb8c: 0x60f809  jalr        $v1
label_31cb90:
    if (ctx->pc == 0x31CB90u) {
        ctx->pc = 0x31CB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CB8Cu;
        // 0x31cb90: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31CB94u;
        goto label_31cb94;
    }
    ctx->pc = 0x31CB8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x31CB94u);
        ctx->pc = 0x31CB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CB8Cu;
        // 0x31cb90: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31CB8Cu, 0x31CB94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31CB94u;
label_31cb94:
    // 0x31cb94: 0x10000004  b           . + 4 + (0x4 << 2)
label_31cb98:
    if (ctx->pc == 0x31CB98u) {
        ctx->pc = 0x31CB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CB94u;
        // 0x31cb98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31CB9Cu;
        goto label_fallthrough_0x31cb94;
    }
    ctx->pc = 0x31CB94u;
    {
        const bool branch_taken_0x31cb94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31CB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CB94u;
        // 0x31cb98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31cb94) {
            ctx->pc = 0x31CBA8u;
            return;
        }
    }
label_fallthrough_0x31cb94:
    ctx->pc = 0x31CB9Cu;
}
