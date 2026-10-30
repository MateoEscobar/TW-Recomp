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

// Function: sub_002F7EE0
// Address: 0x2f7ee0 - 0x2f8030
void sub_002F7EE0_0x2f7ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F7EE0_0x2f7ee0");
#endif

    switch (ctx->pc) {
        case 0x2f7ee0u: goto label_2f7ee0;
        case 0x2f7ee4u: goto label_2f7ee4;
        case 0x2f7ee8u: goto label_2f7ee8;
        case 0x2f7eecu: goto label_2f7eec;
        case 0x2f7ef0u: goto label_2f7ef0;
        case 0x2f7ef4u: goto label_2f7ef4;
        case 0x2f7ef8u: goto label_2f7ef8;
        case 0x2f7efcu: goto label_2f7efc;
        case 0x2f7f00u: goto label_2f7f00;
        case 0x2f7f04u: goto label_2f7f04;
        case 0x2f7f08u: goto label_2f7f08;
        case 0x2f7f0cu: goto label_2f7f0c;
        case 0x2f7f10u: goto label_2f7f10;
        case 0x2f7f14u: goto label_2f7f14;
        case 0x2f7f18u: goto label_2f7f18;
        case 0x2f7f1cu: goto label_2f7f1c;
        case 0x2f7f20u: goto label_2f7f20;
        case 0x2f7f24u: goto label_2f7f24;
        case 0x2f7f28u: goto label_2f7f28;
        case 0x2f7f2cu: goto label_2f7f2c;
        case 0x2f7f30u: goto label_2f7f30;
        case 0x2f7f34u: goto label_2f7f34;
        case 0x2f7f38u: goto label_2f7f38;
        case 0x2f7f3cu: goto label_2f7f3c;
        case 0x2f7f40u: goto label_2f7f40;
        case 0x2f7f44u: goto label_2f7f44;
        case 0x2f7f48u: goto label_2f7f48;
        case 0x2f7f4cu: goto label_2f7f4c;
        case 0x2f7f50u: goto label_2f7f50;
        case 0x2f7f54u: goto label_2f7f54;
        case 0x2f7f58u: goto label_2f7f58;
        case 0x2f7f5cu: goto label_2f7f5c;
        case 0x2f7f60u: goto label_2f7f60;
        case 0x2f7f64u: goto label_2f7f64;
        case 0x2f7f68u: goto label_2f7f68;
        case 0x2f7f6cu: goto label_2f7f6c;
        case 0x2f7f70u: goto label_2f7f70;
        case 0x2f7f74u: goto label_2f7f74;
        case 0x2f7f78u: goto label_2f7f78;
        case 0x2f7f7cu: goto label_2f7f7c;
        case 0x2f7f80u: goto label_2f7f80;
        case 0x2f7f84u: goto label_2f7f84;
        case 0x2f7f88u: goto label_2f7f88;
        case 0x2f7f8cu: goto label_2f7f8c;
        case 0x2f7f90u: goto label_2f7f90;
        case 0x2f7f94u: goto label_2f7f94;
        case 0x2f7f98u: goto label_2f7f98;
        case 0x2f7f9cu: goto label_2f7f9c;
        case 0x2f7fa0u: goto label_2f7fa0;
        case 0x2f7fa4u: goto label_2f7fa4;
        case 0x2f7fa8u: goto label_2f7fa8;
        case 0x2f7facu: goto label_2f7fac;
        case 0x2f7fb0u: goto label_2f7fb0;
        case 0x2f7fb4u: goto label_2f7fb4;
        case 0x2f7fb8u: goto label_2f7fb8;
        case 0x2f7fbcu: goto label_2f7fbc;
        case 0x2f7fc0u: goto label_2f7fc0;
        case 0x2f7fc4u: goto label_2f7fc4;
        case 0x2f7fc8u: goto label_2f7fc8;
        case 0x2f7fccu: goto label_2f7fcc;
        case 0x2f7fd0u: goto label_2f7fd0;
        case 0x2f7fd4u: goto label_2f7fd4;
        case 0x2f7fd8u: goto label_2f7fd8;
        case 0x2f7fdcu: goto label_2f7fdc;
        case 0x2f7fe0u: goto label_2f7fe0;
        case 0x2f7fe4u: goto label_2f7fe4;
        case 0x2f7fe8u: goto label_2f7fe8;
        case 0x2f7fecu: goto label_2f7fec;
        case 0x2f7ff0u: goto label_2f7ff0;
        case 0x2f7ff4u: goto label_2f7ff4;
        case 0x2f7ff8u: goto label_2f7ff8;
        case 0x2f7ffcu: goto label_2f7ffc;
        case 0x2f8000u: goto label_2f8000;
        case 0x2f8004u: goto label_2f8004;
        case 0x2f8008u: goto label_2f8008;
        case 0x2f800cu: goto label_2f800c;
        case 0x2f8010u: goto label_2f8010;
        case 0x2f8014u: goto label_2f8014;
        case 0x2f8018u: goto label_2f8018;
        case 0x2f801cu: goto label_2f801c;
        case 0x2f8020u: goto label_2f8020;
        case 0x2f8024u: goto label_2f8024;
        case 0x2f8028u: goto label_2f8028;
        case 0x2f802cu: goto label_2f802c;
        default: break;
    }

    ctx->pc = 0x2f7ee0u;

label_2f7ee0:
    // 0x2f7ee0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2f7ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_2f7ee4:
    // 0x2f7ee4: 0x3c070071  lui         $a3, 0x71
    ctx->pc = 0x2f7ee4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)113 << 16));
label_2f7ee8:
    // 0x2f7ee8: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x2f7ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_2f7eec:
    // 0x2f7eec: 0x24e74b00  addiu       $a3, $a3, 0x4B00
    ctx->pc = 0x2f7eecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 19200));
label_2f7ef0:
    // 0x2f7ef0: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x2f7ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_2f7ef4:
    // 0x2f7ef4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f7ef4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f7ef8:
    // 0x2f7ef8: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x2f7ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_2f7efc:
    // 0x2f7efc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2f7efcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f7f00:
    // 0x2f7f00: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x2f7f00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_2f7f04:
    // 0x2f7f04: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2f7f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2f7f08:
    // 0x2f7f08: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2f7f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_2f7f0c:
    // 0x2f7f0c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2f7f0cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f7f10:
    // 0x2f7f10: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x2f7f10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_2f7f14:
    // 0x2f7f14: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2f7f14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f7f18:
    // 0x2f7f18: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2f7f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f7f1c:
    // 0x2f7f1c: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x2f7f1cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2f7f20:
    // 0x2f7f20: 0x86430092  lh          $v1, 0x92($s2)
    ctx->pc = 0x2f7f20u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
label_2f7f24:
    // 0x2f7f24: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2f7f24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2f7f28:
    // 0x2f7f28: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2f7f28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_2f7f2c:
    // 0x2f7f2c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2f7f2cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2f7f30:
    // 0x2f7f30: 0xc10c1fa  jal         func_4307E8
label_2f7f34:
    if (ctx->pc == 0x2F7F34u) {
        ctx->pc = 0x2F7F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7F30u;
        // 0x2f7f34: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7F38u;
        goto label_2f7f38;
    }
    ctx->pc = 0x2F7F30u;
    SET_GPR_U32(ctx, 31, 0x2F7F38u);
    ctx->pc = 0x2F7F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7F30u;
    // 0x2f7f34: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x2F7F30u, 0x2F7F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7F38u;
label_2f7f38:
    // 0x2f7f38: 0x92220028  lbu         $v0, 0x28($s1)
    ctx->pc = 0x2f7f38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 40)));
label_2f7f3c:
    // 0x2f7f3c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_2f7f40:
    if (ctx->pc == 0x2F7F40u) {
        ctx->pc = 0x2F7F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7F3Cu;
        // 0x2f7f40: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7F44u;
        goto label_2f7f44;
    }
    ctx->pc = 0x2F7F3Cu;
    {
        const bool branch_taken_0x2f7f3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7F3Cu;
        // 0x2f7f40: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7f3c) {
            ctx->pc = 0x2F7F74u;
            goto label_2f7f74;
        }
    }
    ctx->pc = 0x2F7F44u;
label_2f7f44:
    // 0x2f7f44: 0x92260029  lbu         $a2, 0x29($s1)
    ctx->pc = 0x2f7f44u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 41)));
label_2f7f48:
    // 0x2f7f48: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2f7f48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f7f4c:
    // 0x2f7f4c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f7f4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f7f50:
    // 0x2f7f50: 0x50660005  beql        $v1, $a2, . + 4 + (0x5 << 2)
label_2f7f54:
    if (ctx->pc == 0x2F7F54u) {
        ctx->pc = 0x2F7F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7F50u;
        // 0x2f7f54: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7F58u;
        goto label_2f7f58;
    }
    ctx->pc = 0x2F7F50u;
    {
        const bool branch_taken_0x2f7f50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x2f7f50) {
            ctx->pc = 0x2F7F54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F7F50u;
            // 0x2f7f54: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F7F68u;
            goto label_2f7f68;
        }
    }
    ctx->pc = 0x2F7F58u;
label_2f7f58:
    // 0x2f7f58: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2f7f58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_2f7f5c:
    // 0x2f7f5c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2f7f5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2f7f60:
    // 0x2f7f60: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x2f7f60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_2f7f64:
    // 0x2f7f64: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2f7f64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2f7f68:
    // 0x2f7f68: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x2f7f68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_2f7f6c:
    // 0x2f7f6c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_2f7f70:
    if (ctx->pc == 0x2F7F70u) {
        ctx->pc = 0x2F7F74u;
        goto label_2f7f74;
    }
    ctx->pc = 0x2F7F6Cu;
    {
        const bool branch_taken_0x2f7f6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f7f6c) {
            ctx->pc = 0x2F7F50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f7f50;
        }
    }
    ctx->pc = 0x2F7F74u;
label_2f7f74:
    // 0x2f7f74: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2f7f74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2f7f78:
    // 0x2f7f78: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f7f78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f7f7c:
    // 0x2f7f7c: 0xc0cd526  jal         func_335498
label_2f7f80:
    if (ctx->pc == 0x2F7F80u) {
        ctx->pc = 0x2F7F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7F7Cu;
        // 0x2f7f80: 0x2484b8a0  addiu       $a0, $a0, -0x4760 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7F84u;
        goto label_2f7f84;
    }
    ctx->pc = 0x2F7F7Cu;
    SET_GPR_U32(ctx, 31, 0x2F7F84u);
    ctx->pc = 0x2F7F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7F7Cu;
    // 0x2f7f80: 0x2484b8a0  addiu       $a0, $a0, -0x4760 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335498u, 0x2F7F7Cu, 0x2F7F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7F84u;
label_2f7f84:
    // 0x2f7f84: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2f7f84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2f7f88:
    // 0x2f7f88: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x2f7f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_2f7f8c:
    // 0x2f7f8c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2f7f8cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2f7f90:
    // 0x2f7f90: 0xa2230029  sb          $v1, 0x29($s1)
    ctx->pc = 0x2f7f90u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 41), (uint8_t)GPR_U32(ctx, 3));
label_2f7f94:
    // 0x2f7f94: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x2f7f94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2f7f98:
    // 0x2f7f98: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2f7f98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_2f7f9c:
    // 0x2f7f9c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2f7f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_2f7fa0:
    // 0x2f7fa0: 0xc105774  jal         func_415DD0
label_2f7fa4:
    if (ctx->pc == 0x2F7FA4u) {
        ctx->pc = 0x2F7FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7FA0u;
        // 0x2f7fa4: 0x84440010  lh          $a0, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7FA8u;
        goto label_2f7fa8;
    }
    ctx->pc = 0x2F7FA0u;
    SET_GPR_U32(ctx, 31, 0x2F7FA8u);
    ctx->pc = 0x2F7FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7FA0u;
    // 0x2f7fa4: 0x84440010  lh          $a0, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415DD0u, 0x2F7FA0u, 0x2F7FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7FA8u;
label_2f7fa8:
    // 0x2f7fa8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f7fa8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f7fac:
    // 0x2f7fac: 0x52000019  beql        $s0, $zero, . + 4 + (0x19 << 2)
label_2f7fb0:
    if (ctx->pc == 0x2F7FB0u) {
        ctx->pc = 0x2F7FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7FACu;
        // 0x2f7fb0: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7FB4u;
        goto label_2f7fb4;
    }
    ctx->pc = 0x2F7FACu;
    {
        const bool branch_taken_0x2f7fac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f7fac) {
            ctx->pc = 0x2F7FB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F7FACu;
            // 0x2f7fb0: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F8014u;
            goto label_2f8014;
        }
    }
    ctx->pc = 0x2F7FB4u;
label_2f7fb4:
    // 0x2f7fb4: 0xc0be04e  jal         func_2F8138
label_2f7fb8:
    if (ctx->pc == 0x2F7FB8u) {
        ctx->pc = 0x2F7FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7FB4u;
        // 0x2f7fb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7FBCu;
        goto label_2f7fbc;
    }
    ctx->pc = 0x2F7FB4u;
    SET_GPR_U32(ctx, 31, 0x2F7FBCu);
    ctx->pc = 0x2F7FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7FB4u;
    // 0x2f7fb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F8138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F8138u, 0x2F7FB4u, 0x2F7FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7FBCu;
label_2f7fbc:
    // 0x2f7fbc: 0xc10587a  jal         func_4161E8
label_2f7fc0:
    if (ctx->pc == 0x2F7FC0u) {
        ctx->pc = 0x2F7FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7FBCu;
        // 0x2f7fc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7FC4u;
        goto label_2f7fc4;
    }
    ctx->pc = 0x2F7FBCu;
    SET_GPR_U32(ctx, 31, 0x2F7FC4u);
    ctx->pc = 0x2F7FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7FBCu;
    // 0x2f7fc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x2F7FBCu, 0x2F7FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7FC4u;
label_2f7fc4:
    // 0x2f7fc4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2f7fc4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2f7fc8:
    // 0x2f7fc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f7fc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f7fcc:
    // 0x2f7fcc: 0x27b00050  addiu       $s0, $sp, 0x50
    ctx->pc = 0x2f7fccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2f7fd0:
    // 0x2f7fd0: 0xc105896  jal         func_416258
label_2f7fd4:
    if (ctx->pc == 0x2F7FD4u) {
        ctx->pc = 0x2F7FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7FD0u;
        // 0x2f7fd4: 0x7fa30030  sq          $v1, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7FD8u;
        goto label_2f7fd8;
    }
    ctx->pc = 0x2F7FD0u;
    SET_GPR_U32(ctx, 31, 0x2F7FD8u);
    ctx->pc = 0x2F7FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7FD0u;
    // 0x2f7fd4: 0x7fa30030  sq          $v1, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x416258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x416258u, 0x2F7FD0u, 0x2F7FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7FD8u;
label_2f7fd8:
    // 0x2f7fd8: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x2f7fd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
label_2f7fdc:
    // 0x2f7fdc: 0x3421fa36  ori         $at, $at, 0xFA36
    ctx->pc = 0x2f7fdcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64054);
label_2f7fe0:
    // 0x2f7fe0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2f7fe0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2f7fe4:
    // 0x2f7fe4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f7fe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f7fe8:
    // 0x2f7fe8: 0xc0cd7a8  jal         func_335EA0
label_2f7fec:
    if (ctx->pc == 0x2F7FECu) {
        ctx->pc = 0x2F7FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7FE8u;
        // 0x2f7fec: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7FF0u;
        goto label_2f7ff0;
    }
    ctx->pc = 0x2F7FE8u;
    SET_GPR_U32(ctx, 31, 0x2F7FF0u);
    ctx->pc = 0x2F7FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7FE8u;
    // 0x2f7fec: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335EA0u, 0x2F7FE8u, 0x2F7FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7FF0u;
label_2f7ff0:
    // 0x2f7ff0: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x2f7ff0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2f7ff4:
    // 0x2f7ff4: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x2f7ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2f7ff8:
    // 0x2f7ff8: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x2f7ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_2f7ffc:
    // 0x2f7ffc: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2f7ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2f8000:
    // 0x2f8000: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x2f8000u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_2f8004:
    // 0x2f8004: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x2f8004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_2f8008:
    // 0x2f8008: 0x40f809  jalr        $v0
label_2f800c:
    if (ctx->pc == 0x2F800Cu) {
        ctx->pc = 0x2F800Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8008u;
        // 0x2f800c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8010u;
        goto label_2f8010;
    }
    ctx->pc = 0x2F8008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2F8010u);
        ctx->pc = 0x2F800Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8008u;
        // 0x2f800c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F8008u, 0x2F8010u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F8010u;
label_2f8010:
    // 0x2f8010: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x2f8010u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2f8014:
    // 0x2f8014: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x2f8014u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2f8018:
    // 0x2f8018: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x2f8018u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2f801c:
    // 0x2f801c: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x2f801cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2f8020:
    // 0x2f8020: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2f8020u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2f8024:
    // 0x2f8024: 0x3e00008  jr          $ra
label_2f8028:
    if (ctx->pc == 0x2F8028u) {
        ctx->pc = 0x2F8028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8024u;
        // 0x2f8028: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F802Cu;
        goto label_2f802c;
    }
    ctx->pc = 0x2F8024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F8028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8024u;
        // 0x2f8028: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F8024u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F802Cu;
label_2f802c:
    // 0x2f802c: 0x0  nop
    ctx->pc = 0x2f802cu;
    // NOP
    ctx->pc = 0x2f8030u;
}
