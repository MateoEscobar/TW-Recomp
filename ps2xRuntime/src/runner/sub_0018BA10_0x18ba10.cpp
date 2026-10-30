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

// Function: sub_0018BA10
// Address: 0x18ba10 - 0x18bae0
void sub_0018BA10_0x18ba10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018BA10_0x18ba10");
#endif

    switch (ctx->pc) {
        case 0x18ba10u: goto label_18ba10;
        case 0x18ba14u: goto label_18ba14;
        case 0x18ba18u: goto label_18ba18;
        case 0x18ba1cu: goto label_18ba1c;
        case 0x18ba20u: goto label_18ba20;
        case 0x18ba24u: goto label_18ba24;
        case 0x18ba28u: goto label_18ba28;
        case 0x18ba2cu: goto label_18ba2c;
        case 0x18ba30u: goto label_18ba30;
        case 0x18ba34u: goto label_18ba34;
        case 0x18ba38u: goto label_18ba38;
        case 0x18ba3cu: goto label_18ba3c;
        case 0x18ba40u: goto label_18ba40;
        case 0x18ba44u: goto label_18ba44;
        case 0x18ba48u: goto label_18ba48;
        case 0x18ba4cu: goto label_18ba4c;
        case 0x18ba50u: goto label_18ba50;
        case 0x18ba54u: goto label_18ba54;
        case 0x18ba58u: goto label_18ba58;
        case 0x18ba5cu: goto label_18ba5c;
        case 0x18ba60u: goto label_18ba60;
        case 0x18ba64u: goto label_18ba64;
        case 0x18ba68u: goto label_18ba68;
        case 0x18ba6cu: goto label_18ba6c;
        case 0x18ba70u: goto label_18ba70;
        case 0x18ba74u: goto label_18ba74;
        case 0x18ba78u: goto label_18ba78;
        case 0x18ba7cu: goto label_18ba7c;
        case 0x18ba80u: goto label_18ba80;
        case 0x18ba84u: goto label_18ba84;
        case 0x18ba88u: goto label_18ba88;
        case 0x18ba8cu: goto label_18ba8c;
        case 0x18ba90u: goto label_18ba90;
        case 0x18ba94u: goto label_18ba94;
        case 0x18ba98u: goto label_18ba98;
        case 0x18ba9cu: goto label_18ba9c;
        case 0x18baa0u: goto label_18baa0;
        case 0x18baa4u: goto label_18baa4;
        case 0x18baa8u: goto label_18baa8;
        case 0x18baacu: goto label_18baac;
        case 0x18bab0u: goto label_18bab0;
        case 0x18bab4u: goto label_18bab4;
        case 0x18bab8u: goto label_18bab8;
        case 0x18babcu: goto label_18babc;
        case 0x18bac0u: goto label_18bac0;
        case 0x18bac4u: goto label_18bac4;
        case 0x18bac8u: goto label_18bac8;
        case 0x18baccu: goto label_18bacc;
        case 0x18bad0u: goto label_18bad0;
        case 0x18bad4u: goto label_18bad4;
        case 0x18bad8u: goto label_18bad8;
        case 0x18badcu: goto label_18badc;
        default: break;
    }

    ctx->pc = 0x18ba10u;

label_18ba10:
    // 0x18ba10: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x18ba10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_18ba14:
    // 0x18ba14: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x18ba14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_18ba18:
    // 0x18ba18: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x18ba18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_18ba1c:
    // 0x18ba1c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x18ba1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_18ba20:
    // 0x18ba20: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x18ba20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18ba24:
    // 0x18ba24: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x18ba24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_18ba28:
    // 0x18ba28: 0x2451deb8  addiu       $s1, $v0, -0x2148
    ctx->pc = 0x18ba28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958776));
label_18ba2c:
    // 0x18ba2c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x18ba2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_18ba30:
    // 0x18ba30: 0x3c120055  lui         $s2, 0x55
    ctx->pc = 0x18ba30u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)85 << 16));
label_18ba34:
    // 0x18ba34: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x18ba34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_18ba38:
    // 0x18ba38: 0x3c130055  lui         $s3, 0x55
    ctx->pc = 0x18ba38u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)85 << 16));
label_18ba3c:
    // 0x18ba3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18ba3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_18ba40:
    // 0x18ba40: 0x3c140051  lui         $s4, 0x51
    ctx->pc = 0x18ba40u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
label_18ba44:
    // 0x18ba44: 0x0  nop
    ctx->pc = 0x18ba44u;
    // NOP
label_18ba48:
    // 0x18ba48: 0x8e8c27e4  lw          $t4, 0x27E4($s4)
    ctx->pc = 0x18ba48u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10212)));
label_18ba4c:
    // 0x18ba4c: 0x26652ed8  addiu       $a1, $s3, 0x2ED8
    ctx->pc = 0x18ba4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 11992));
label_18ba50:
    // 0x18ba50: 0x24060220  addiu       $a2, $zero, 0x220
    ctx->pc = 0x18ba50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_18ba54:
    // 0x18ba54: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x18ba54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_18ba58:
    // 0x18ba58: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x18ba58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_18ba5c:
    // 0x18ba5c: 0x26482ef0  addiu       $t0, $s2, 0x2EF0
    ctx->pc = 0x18ba5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 12016));
label_18ba60:
    // 0x18ba60: 0x240900f3  addiu       $t1, $zero, 0xF3
    ctx->pc = 0x18ba60u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 243));
label_18ba64:
    // 0x18ba64: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x18ba64u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18ba68:
    // 0x18ba68: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x18ba68u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_18ba6c:
    // 0x18ba6c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x18ba6cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18ba70:
    // 0x18ba70: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x18ba70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_18ba74:
    // 0x18ba74: 0x40f809  jalr        $v0
label_18ba78:
    if (ctx->pc == 0x18BA78u) {
        ctx->pc = 0x18BA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BA74u;
        // 0x18ba78: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18BA7Cu;
        goto label_18ba7c;
    }
    ctx->pc = 0x18BA74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18BA7Cu);
        ctx->pc = 0x18BA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BA74u;
        // 0x18ba78: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18BA74u, 0x18BA7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18BA7Cu;
label_18ba7c:
    // 0x18ba7c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_18ba80:
    if (ctx->pc == 0x18BA80u) {
        ctx->pc = 0x18BA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BA7Cu;
        // 0x18ba80: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18BA84u;
        goto label_18ba84;
    }
    ctx->pc = 0x18BA7Cu;
    {
        const bool branch_taken_0x18ba7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BA7Cu;
        // 0x18ba80: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ba7c) {
            ctx->pc = 0x18BA8Cu;
            goto label_18ba8c;
        }
    }
    ctx->pc = 0x18BA84u;
label_18ba84:
    // 0x18ba84: 0xc062c78  jal         func_18B1E0
label_18ba88:
    if (ctx->pc == 0x18BA88u) {
        ctx->pc = 0x18BA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BA84u;
        // 0x18ba88: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18BA8Cu;
        goto label_18ba8c;
    }
    ctx->pc = 0x18BA84u;
    SET_GPR_U32(ctx, 31, 0x18BA8Cu);
    ctx->pc = 0x18BA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BA84u;
    // 0x18ba88: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B1E0u, 0x18BA84u, 0x18BA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BA8Cu;
label_18ba8c:
    // 0x18ba8c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x18ba8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_18ba90:
    // 0x18ba90: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18ba90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_18ba94:
    // 0x18ba94: 0x2e020002  sltiu       $v0, $s0, 0x2
    ctx->pc = 0x18ba94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_18ba98:
    // 0x18ba98: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
label_18ba9c:
    if (ctx->pc == 0x18BA9Cu) {
        ctx->pc = 0x18BA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BA98u;
        // 0x18ba9c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18BAA0u;
        goto label_18baa0;
    }
    ctx->pc = 0x18BA98u;
    {
        const bool branch_taken_0x18ba98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18BA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BA98u;
        // 0x18ba9c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ba98) {
            ctx->pc = 0x18BA48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18ba48;
        }
    }
    ctx->pc = 0x18BAA0u;
label_18baa0:
    // 0x18baa0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x18baa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_18baa4:
    // 0x18baa4: 0x8c45cdb4  lw          $a1, -0x324C($v0)
    ctx->pc = 0x18baa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954420)));
label_18baa8:
    // 0x18baa8: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x18baa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_18baac:
    // 0x18baac: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x18baacu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_18bab0:
    // 0x18bab0: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x18bab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_18bab4:
    // 0x18bab4: 0x40f809  jalr        $v0
label_18bab8:
    if (ctx->pc == 0x18BAB8u) {
        ctx->pc = 0x18BAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BAB4u;
        // 0x18bab8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18BABCu;
        goto label_18babc;
    }
    ctx->pc = 0x18BAB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18BABCu);
        ctx->pc = 0x18BAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BAB4u;
        // 0x18bab8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18BAB4u, 0x18BABCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18BABCu;
label_18babc:
    // 0x18babc: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x18babcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_18bac0:
    // 0x18bac0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x18bac0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_18bac4:
    // 0x18bac4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x18bac4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_18bac8:
    // 0x18bac8: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x18bac8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_18bacc:
    // 0x18bacc: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x18baccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_18bad0:
    // 0x18bad0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18bad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18bad4:
    // 0x18bad4: 0x3e00008  jr          $ra
label_18bad8:
    if (ctx->pc == 0x18BAD8u) {
        ctx->pc = 0x18BAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BAD4u;
        // 0x18bad8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18BADCu;
        goto label_18badc;
    }
    ctx->pc = 0x18BAD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18BAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BAD4u;
        // 0x18bad8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18BAD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18BADCu;
label_18badc:
    // 0x18badc: 0x0  nop
    ctx->pc = 0x18badcu;
    // NOP
    ctx->pc = 0x18bae0u;
}
