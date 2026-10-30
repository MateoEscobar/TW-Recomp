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

// Function: sub_0028DB88
// Address: 0x28db88 - 0x28dc80
void sub_0028DB88_0x28db88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028DB88_0x28db88");
#endif

    switch (ctx->pc) {
        case 0x28dbb8u: goto label_28dbb8;
        case 0x28dbc0u: goto label_28dbc0;
        case 0x28dbecu: goto label_28dbec;
        case 0x28dc00u: goto label_28dc00;
        case 0x28dc20u: goto label_28dc20;
        case 0x28dc2cu: goto label_28dc2c;
        case 0x28dc40u: goto label_28dc40;
        case 0x28dc5cu: goto label_28dc5c;
        default: break;
    }

    ctx->pc = 0x28db88u;

    // 0x28db88: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x28db88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x28db8c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x28db8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x28db90: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x28db90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x28db94: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x28db94u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28db98: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x28db98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x28db9c: 0x269001a4  addiu       $s0, $s4, 0x1A4
    ctx->pc = 0x28db9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 420));
    // 0x28dba0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x28dba0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dba4: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x28dba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x28dba8: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x28dba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x28dbac: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x28dbacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x28dbb0: 0xc13b6ce  jal         func_4EDB38
    ctx->pc = 0x28DBB0u;
    SET_GPR_U32(ctx, 31, 0x28DBB8u);
    ctx->pc = 0x28DBB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DBB0u;
    // 0x28dbb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EDB38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EDB38u, 0x28DBB0u, 0x28DBB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DBB8u;
label_28dbb8:
    // 0x28dbb8: 0xc136b80  jal         func_4DAE00
    ctx->pc = 0x28DBB8u;
    SET_GPR_U32(ctx, 31, 0x28DBC0u);
    ctx->pc = 0x28DBBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DBB8u;
    // 0x28dbbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAE00u, 0x28DBB8u, 0x28DBC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DBC0u;
label_28dbc0:
    // 0x28dbc0: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x28dbc0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x28dbc4: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x28DBC4u;
    {
        const bool branch_taken_0x28dbc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DBC4u;
        // 0x28dbc8: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28dbc4) {
            ctx->pc = 0x28DC5Cu;
            goto label_28dc5c;
        }
    }
    ctx->pc = 0x28DBCCu;
    // 0x28dbcc: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x28dbccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x28dbd0: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x28dbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x28dbd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28dbd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dbd8: 0x84650092  lh          $a1, 0x92($v1)
    ctx->pc = 0x28dbd8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 146)));
    // 0x28dbdc: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x28dbdcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dbe0: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x28dbe0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x28dbe4: 0xc13b748  jal         func_4EDD20
    ctx->pc = 0x28DBE4u;
    SET_GPR_U32(ctx, 31, 0x28DBECu);
    ctx->pc = 0x28DBE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DBE4u;
    // 0x28dbe8: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EDD20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EDD20u, 0x28DBE4u, 0x28DBECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DBECu;
label_28dbec:
    // 0x28dbec: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x28dbecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x28dbf0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x28dbf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28dbf4: 0x3a0102d  daddu       $v0, $sp, $zero
    ctx->pc = 0x28dbf4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dbf8: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x28dbf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x28dbfc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x28dbfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_28dc00:
    // 0x28dc00: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x28dc00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x28dc04: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x28dc04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x28dc08: 0x0  nop
    ctx->pc = 0x28dc08u;
    // NOP
    // 0x28dc0c: 0x0  nop
    ctx->pc = 0x28dc0cu;
    // NOP
    // 0x28dc10: 0x1485fffb  bne         $a0, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x28DC10u;
    {
        const bool branch_taken_0x28dc10 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x28DC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DC10u;
        // 0x28dc14: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28dc10) {
            ctx->pc = 0x28DC00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28dc00;
        }
    }
    ctx->pc = 0x28DC18u;
    // 0x28dc18: 0x1260000d  beqz        $s3, . + 4 + (0xD << 2)
    ctx->pc = 0x28DC18u;
    {
        const bool branch_taken_0x28dc18 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DC18u;
        // 0x28dc1c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28dc18) {
            ctx->pc = 0x28DC50u;
            goto label_28dc50;
        }
    }
    ctx->pc = 0x28DC20u;
label_28dc20:
    // 0x28dc20: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x28dc20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dc24: 0xc137826  jal         func_4DE098
    ctx->pc = 0x28DC24u;
    SET_GPR_U32(ctx, 31, 0x28DC2Cu);
    ctx->pc = 0x28DC28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DC24u;
    // 0x28dc28: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x28DC24u, 0x28DC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DC2Cu;
label_28dc2c:
    // 0x28dc2c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28dc2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dc30: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x28dc30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dc34: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28dc34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dc38: 0xc137826  jal         func_4DE098
    ctx->pc = 0x28DC38u;
    SET_GPR_U32(ctx, 31, 0x28DC40u);
    ctx->pc = 0x28DC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DC38u;
    // 0x28dc3c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x28DC38u, 0x28DC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DC40u;
label_28dc40:
    // 0x28dc40: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x28dc40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28dc44: 0x233102b  sltu        $v0, $s1, $s3
    ctx->pc = 0x28dc44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x28dc48: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x28DC48u;
    {
        const bool branch_taken_0x28dc48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28DC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DC48u;
        // 0x28dc4c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28dc48) {
            ctx->pc = 0x28DC20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28dc20;
        }
    }
    ctx->pc = 0x28DC50u;
label_28dc50:
    // 0x28dc50: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28dc50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dc54: 0xc13b69a  jal         func_4EDA68
    ctx->pc = 0x28DC54u;
    SET_GPR_U32(ctx, 31, 0x28DC5Cu);
    ctx->pc = 0x28DC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DC54u;
    // 0x28dc58: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EDA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EDA68u, 0x28DC54u, 0x28DC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DC5Cu;
label_28dc5c:
    // 0x28dc5c: 0xae9301e4  sw          $s3, 0x1E4($s4)
    ctx->pc = 0x28dc5cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 484), GPR_U32(ctx, 19));
    // 0x28dc60: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x28dc60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x28dc64: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x28dc64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x28dc68: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x28dc68u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x28dc6c: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x28dc6cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28dc70: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x28dc70u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28dc74: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x28dc74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28dc78: 0x3e00008  jr          $ra
    ctx->pc = 0x28DC78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28DC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DC78u;
        // 0x28dc7c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28DC78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28DC80u;
}
