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

// Function: sub_00499E38
// Address: 0x499e38 - 0x49b778
void sub_00499E38_0x499e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00499E38_0x499e38");
#endif

    switch (ctx->pc) {
        case 0x499ed0u: goto label_499ed0;
        case 0x499eecu: goto label_499eec;
        case 0x499f54u: goto label_499f54;
        case 0x499f68u: goto label_499f68;
        case 0x499f9cu: goto label_499f9c;
        case 0x499fb8u: goto label_499fb8;
        case 0x499fccu: goto label_499fcc;
        case 0x499fe4u: goto label_499fe4;
        case 0x49a020u: goto label_49a020;
        case 0x49a040u: goto label_49a040;
        case 0x49a048u: goto label_49a048;
        case 0x49a058u: goto label_49a058;
        case 0x49a074u: goto label_49a074;
        case 0x49a1f0u: goto label_49a1f0;
        case 0x49a210u: goto label_49a210;
        case 0x49a360u: goto label_49a360;
        case 0x49a378u: goto label_49a378;
        case 0x49a40cu: goto label_49a40c;
        case 0x49a490u: goto label_49a490;
        case 0x49a4a8u: goto label_49a4a8;
        case 0x49a568u: goto label_49a568;
        case 0x49a588u: goto label_49a588;
        case 0x49a6f0u: goto label_49a6f0;
        case 0x49a768u: goto label_49a768;
        case 0x49a8a0u: goto label_49a8a0;
        case 0x49a9b0u: goto label_49a9b0;
        case 0x49acc0u: goto label_49acc0;
        case 0x49ace0u: goto label_49ace0;
        case 0x49ae60u: goto label_49ae60;
        case 0x49ae70u: goto label_49ae70;
        case 0x49aedcu: goto label_49aedc;
        case 0x49af60u: goto label_49af60;
        case 0x49af70u: goto label_49af70;
        case 0x49b008u: goto label_49b008;
        case 0x49b020u: goto label_49b020;
        case 0x49b1b8u: goto label_49b1b8;
        case 0x49b208u: goto label_49b208;
        case 0x49b2c8u: goto label_49b2c8;
        case 0x49b400u: goto label_49b400;
        case 0x49b740u: goto label_49b740;
        default: break;
    }

    ctx->pc = 0x499e38u;

    // 0x499e38: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x499e38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x499e3c: 0x8f838a20  lw          $v1, -0x75E0($gp)
    ctx->pc = 0x499e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937120)));
    // 0x499e40: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x499e40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
    // 0x499e44: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x499e44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x499e48: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x499e48u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x499e4c: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x499e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x499e50: 0x2a3b021  addu        $s6, $s5, $v1
    ctx->pc = 0x499e50u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x499e54: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x499e54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x499e58: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x499e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x499e5c: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x499e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x499e60: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x499e60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x499e64: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x499e64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x499e68: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x499e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
    // 0x499e6c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x499e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x499e70: 0x92c20036  lbu         $v0, 0x36($s6)
    ctx->pc = 0x499e70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 54)));
    // 0x499e74: 0x30420006  andi        $v0, $v0, 0x6
    ctx->pc = 0x499e74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)6);
    // 0x499e78: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x499E78u;
    {
        const bool branch_taken_0x499e78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x499E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499E78u;
        // 0x499e7c: 0xa0502d  daddu       $t2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499e78) {
            ctx->pc = 0x499EECu;
            goto label_499eec;
        }
    }
    ctx->pc = 0x499E80u;
    // 0x499e80: 0x8ea8000c  lw          $t0, 0xC($s5)
    ctx->pc = 0x499e80u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x499e84: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x499e84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x499e88: 0x8ea90010  lw          $t1, 0x10($s5)
    ctx->pc = 0x499e88u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x499e8c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x499e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x499e90: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x499e90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x499e94: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x499e94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x499e98: 0xafa80028  sw          $t0, 0x28($sp)
    ctx->pc = 0x499e98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 8));
    // 0x499e9c: 0xafa9002c  sw          $t1, 0x2C($sp)
    ctx->pc = 0x499e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 9));
    // 0x499ea0: 0x8f878a58  lw          $a3, -0x75A8($gp)
    ctx->pc = 0x499ea0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937176)));
    // 0x499ea4: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x499ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x499ea8: 0x84e6001c  lh          $a2, 0x1C($a3)
    ctx->pc = 0x499ea8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x499eac: 0x8d430004  lw          $v1, 0x4($t2)
    ctx->pc = 0x499eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x499eb0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x499eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x499eb4: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x499eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x499eb8: 0x84e6001e  lh          $a2, 0x1E($a3)
    ctx->pc = 0x499eb8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 30)));
    // 0x499ebc: 0xafa80018  sw          $t0, 0x18($sp)
    ctx->pc = 0x499ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 8));
    // 0x499ec0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x499ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x499ec4: 0xafa9001c  sw          $t1, 0x1C($sp)
    ctx->pc = 0x499ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 9));
    // 0x499ec8: 0xc1265d8  jal         func_499760
    ctx->pc = 0x499EC8u;
    SET_GPR_U32(ctx, 31, 0x499ED0u);
    ctx->pc = 0x499ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x499EC8u;
    // 0x499ecc: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x499760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x499760u, 0x499EC8u, 0x499ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x499ED0u;
label_499ed0:
    // 0x499ed0: 0x1040061c  beqz        $v0, . + 4 + (0x61C << 2)
    ctx->pc = 0x499ED0u;
    {
        const bool branch_taken_0x499ed0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x499ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499ED0u;
        // 0x499ed4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499ed0) {
            ctx->pc = 0x49B744u;
            goto label_49b744;
        }
    }
    ctx->pc = 0x499ED8u;
    // 0x499ed8: 0x92a20020  lbu         $v0, 0x20($s5)
    ctx->pc = 0x499ed8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x499edc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x499edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x499ee0: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x499ee0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x499ee4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x499EE4u;
    {
        const bool branch_taken_0x499ee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x499EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499EE4u;
        // 0x499ee8: 0x8f828a58  lw          $v0, -0x75A8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499ee4) {
            ctx->pc = 0x499EF4u;
            goto label_499ef4;
        }
    }
    ctx->pc = 0x499EECu;
label_499eec:
    // 0x499eec: 0x10000615  b           . + 4 + (0x615 << 2)
    ctx->pc = 0x499EECu;
    {
        const bool branch_taken_0x499eec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x499EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499EECu;
        // 0x499ef0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499eec) {
            ctx->pc = 0x49B744u;
            goto label_49b744;
        }
    }
    ctx->pc = 0x499EF4u;
label_499ef4:
    // 0x499ef4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x499ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x499ef8: 0x90450020  lbu         $a1, 0x20($v0)
    ctx->pc = 0x499ef8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x499efc: 0x10a3fffb  beq         $a1, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x499EFCu;
    {
        const bool branch_taken_0x499efc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x499F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499EFCu;
        // 0x499f00: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499efc) {
            ctx->pc = 0x499EECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_499eec;
        }
    }
    ctx->pc = 0x499F04u;
    // 0x499f04: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x499f04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x499f08: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x499F08u;
    {
        const bool branch_taken_0x499f08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x499F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499F08u;
        // 0x499f0c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499f08) {
            ctx->pc = 0x499F20u;
            goto label_499f20;
        }
    }
    ctx->pc = 0x499F10u;
    // 0x499f10: 0x10a0005a  beqz        $a1, . + 4 + (0x5A << 2)
    ctx->pc = 0x499F10u;
    {
        const bool branch_taken_0x499f10 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x499F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499F10u;
        // 0x499f14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499f10) {
            ctx->pc = 0x49A07Cu;
            goto label_49a07c;
        }
    }
    ctx->pc = 0x499F18u;
    // 0x499f18: 0x1000060b  b           . + 4 + (0x60B << 2)
    ctx->pc = 0x499F18u;
    {
        const bool branch_taken_0x499f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x499F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499F18u;
        // 0x499f1c: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499f18) {
            ctx->pc = 0x49B748u;
            goto label_49b748;
        }
    }
    ctx->pc = 0x499F20u;
label_499f20:
    // 0x499f20: 0x10a20005  beq         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x499F20u;
    {
        const bool branch_taken_0x499f20 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x499F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499F20u;
        // 0x499f24: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499f20) {
            ctx->pc = 0x499F38u;
            goto label_499f38;
        }
    }
    ctx->pc = 0x499F28u;
    // 0x499f28: 0x10a20054  beq         $a1, $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x499F28u;
    {
        const bool branch_taken_0x499f28 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x499F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499F28u;
        // 0x499f2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499f28) {
            ctx->pc = 0x49A07Cu;
            goto label_49a07c;
        }
    }
    ctx->pc = 0x499F30u;
    // 0x499f30: 0x10000605  b           . + 4 + (0x605 << 2)
    ctx->pc = 0x499F30u;
    {
        const bool branch_taken_0x499f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x499F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499F30u;
        // 0x499f34: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499f30) {
            ctx->pc = 0x49B748u;
            goto label_49b748;
        }
    }
    ctx->pc = 0x499F38u;
label_499f38:
    // 0x499f38: 0x8fb10024  lw          $s1, 0x24($sp)
    ctx->pc = 0x499f38u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x499f3c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x499f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x499f40: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x499f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x499f44: 0x24170040  addiu       $s7, $zero, 0x40
    ctx->pc = 0x499f44u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x499f48: 0x8fb20014  lw          $s2, 0x14($sp)
    ctx->pc = 0x499f48u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x499f4c: 0xc12638e  jal         func_498E38
    ctx->pc = 0x499F4Cu;
    SET_GPR_U32(ctx, 31, 0x499F54u);
    ctx->pc = 0x499F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x499F4Cu;
    // 0x499f50: 0x222a021  addu        $s4, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x498E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x498E38u, 0x499F4Cu, 0x499F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x499F54u;
label_499f54:
    // 0x499f54: 0x2912023  subu        $a0, $s4, $s1
    ctx->pc = 0x499f54u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x499f58: 0x10800037  beqz        $a0, . + 4 + (0x37 << 2)
    ctx->pc = 0x499F58u;
    {
        const bool branch_taken_0x499f58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x499F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499F58u;
        // 0x499f5c: 0x241e0001  addiu       $fp, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499f58) {
            ctx->pc = 0x49A038u;
            goto label_49a038;
        }
    }
    ctx->pc = 0x499F60u;
    // 0x499f60: 0x27938a60  addiu       $s3, $gp, -0x75A0
    ctx->pc = 0x499f60u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937184));
    // 0x499f64: 0x0  nop
    ctx->pc = 0x499f64u;
    // NOP
label_499f68:
    // 0x499f68: 0x2e4282b  sltu        $a1, $s7, $a0
    ctx->pc = 0x499f68u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x499f6c: 0x8f838a68  lw          $v1, -0x7598($gp)
    ctx->pc = 0x499f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937192)));
    // 0x499f70: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x499f70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x499f74: 0xafb10024  sw          $s1, 0x24($sp)
    ctx->pc = 0x499f74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 17));
    // 0x499f78: 0x85100a  movz        $v0, $a0, $a1
    ctx->pc = 0x499f78u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x499f7c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x499f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x499f80: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x499f80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x499f84: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x499f84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x499f88: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x499f88u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x499f8c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x499f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x499f90: 0x2428021  addu        $s0, $s2, $v0
    ctx->pc = 0x499f90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x499f94: 0xc128fd6  jal         func_4A3F58
    ctx->pc = 0x499F94u;
    SET_GPR_U32(ctx, 31, 0x499F9Cu);
    ctx->pc = 0x499F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x499F94u;
    // 0x499f98: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A3F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A3F58u, 0x499F94u, 0x499F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x499F9Cu;
label_499f9c:
    // 0x499f9c: 0x8f828a68  lw          $v0, -0x7598($gp)
    ctx->pc = 0x499f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937192)));
    // 0x499fa0: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x499fa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x499fa4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x499fa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x499fa8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x499fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x499fac: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x499facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x499fb0: 0xc1218b8  jal         func_4862E0
    ctx->pc = 0x499FB0u;
    SET_GPR_U32(ctx, 31, 0x499FB8u);
    ctx->pc = 0x499FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x499FB0u;
    // 0x499fb4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4862E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4862E0u, 0x499FB0u, 0x499FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x499FB8u;
label_499fb8:
    // 0x499fb8: 0x8f838a68  lw          $v1, -0x7598($gp)
    ctx->pc = 0x499fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937192)));
    // 0x499fbc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x499fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x499fc0: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x499fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x499fc4: 0xc1266a2  jal         func_499A88
    ctx->pc = 0x499FC4u;
    SET_GPR_U32(ctx, 31, 0x499FCCu);
    ctx->pc = 0x499FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x499FC4u;
    // 0x499fc8: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x499A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x499A88u, 0x499FC4u, 0x499FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x499FCCu;
label_499fcc:
    // 0x499fcc: 0x8f828a68  lw          $v0, -0x7598($gp)
    ctx->pc = 0x499fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937192)));
    // 0x499fd0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x499fd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x499fd4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x499fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x499fd8: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x499fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x499fdc: 0xc128ed2  jal         func_4A3B48
    ctx->pc = 0x499FDCu;
    SET_GPR_U32(ctx, 31, 0x499FE4u);
    ctx->pc = 0x499FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x499FDCu;
    // 0x499fe0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A3B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A3B48u, 0x499FDCu, 0x499FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x499FE4u;
label_499fe4:
    // 0x499fe4: 0x8faa0028  lw          $t2, 0x28($sp)
    ctx->pc = 0x499fe4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x499fe8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x499fe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x499fec: 0x8fab002c  lw          $t3, 0x2C($sp)
    ctx->pc = 0x499fecu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x499ff0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x499ff0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x499ff4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x499ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x499ff8: 0xa5100  sll         $t2, $t2, 4
    ctx->pc = 0x499ff8u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x499ffc: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x499ffcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x49a000: 0xb5900  sll         $t3, $t3, 4
    ctx->pc = 0x49a000u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x49a004: 0x254afff8  addiu       $t2, $t2, -0x8
    ctx->pc = 0x49a004u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967288));
    // 0x49a008: 0x256bfff8  addiu       $t3, $t3, -0x8
    ctx->pc = 0x49a008u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967288));
    // 0x49a00c: 0x863021  addu        $a2, $a0, $a2
    ctx->pc = 0x49a00cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x49a010: 0xafbe0000  sw          $fp, 0x0($sp)
    ctx->pc = 0x49a010u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 30));
    // 0x49a014: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x49a014u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x49a018: 0xc126424  jal         func_499090
    ctx->pc = 0x49A018u;
    SET_GPR_U32(ctx, 31, 0x49A020u);
    ctx->pc = 0x49A01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49A018u;
    // 0x49a01c: 0x24090008  addiu       $t1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x499090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x499090u, 0x49A018u, 0x49A020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49A020u;
label_49a020:
    // 0x49a020: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x49a020u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49a024: 0x8f828a68  lw          $v0, -0x7598($gp)
    ctx->pc = 0x49a024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937192)));
    // 0x49a028: 0x2912023  subu        $a0, $s4, $s1
    ctx->pc = 0x49a028u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x49a02c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x49a02cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x49a030: 0x1480ffcd  bnez        $a0, . + 4 + (-0x33 << 2)
    ctx->pc = 0x49A030u;
    {
        const bool branch_taken_0x49a030 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x49A034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A030u;
        // 0x49a034: 0xaf828a68  sw          $v0, -0x7598($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a030) {
            ctx->pc = 0x499F68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_499f68;
        }
    }
    ctx->pc = 0x49A038u;
label_49a038:
    // 0x49a038: 0xc126482  jal         func_499208
    ctx->pc = 0x49A038u;
    SET_GPR_U32(ctx, 31, 0x49A040u);
    ctx->pc = 0x499208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x499208u, 0x49A038u, 0x49A040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49A040u;
label_49a040:
    // 0x49a040: 0xc110cb0  jal         func_4432C0
    ctx->pc = 0x49A040u;
    SET_GPR_U32(ctx, 31, 0x49A048u);
    ctx->pc = 0x4432C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4432C0u, 0x49A040u, 0x49A048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49A048u;
label_49a048:
    // 0x49a048: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x49a048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x49a04c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x49a04cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x49a050: 0xc110cc4  jal         func_443310
    ctx->pc = 0x49A050u;
    SET_GPR_U32(ctx, 31, 0x49A058u);
    ctx->pc = 0x49A054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49A050u;
    // 0x49a054: 0xaec30000  sw          $v1, 0x0($s6) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x443310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443310u, 0x49A050u, 0x49A058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49A058u;
label_49a058:
    // 0x49a058: 0x8ec30004  lw          $v1, 0x4($s6)
    ctx->pc = 0x49a058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x49a05c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x49a05cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x49a060: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x49a060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x49a064: 0x146205b7  bne         $v1, $v0, . + 4 + (0x5B7 << 2)
    ctx->pc = 0x49A064u;
    {
        const bool branch_taken_0x49a064 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x49A068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A064u;
        // 0x49a068: 0xaec30004  sw          $v1, 0x4($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a064) {
            ctx->pc = 0x49B744u;
            goto label_49b744;
        }
    }
    ctx->pc = 0x49A06Cu;
    // 0x49a06c: 0xc1237ea  jal         func_48DFA8
    ctx->pc = 0x49A06Cu;
    SET_GPR_U32(ctx, 31, 0x49A074u);
    ctx->pc = 0x49A070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49A06Cu;
    // 0x49a070: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48DFA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48DFA8u, 0x49A06Cu, 0x49A074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49A074u;
label_49a074:
    // 0x49a074: 0x100005b3  b           . + 4 + (0x5B3 << 2)
    ctx->pc = 0x49A074u;
    {
        const bool branch_taken_0x49a074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49A078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A074u;
        // 0x49a078: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a074) {
            ctx->pc = 0x49B744u;
            goto label_49b744;
        }
    }
    ctx->pc = 0x49A07Cu;
label_49a07c:
    // 0x49a07c: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x49a07cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x49a080: 0x104005b0  beqz        $v0, . + 4 + (0x5B0 << 2)
    ctx->pc = 0x49A080u;
    {
        const bool branch_taken_0x49a080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49A084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A080u;
        // 0x49a084: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a080) {
            ctx->pc = 0x49B744u;
            goto label_49b744;
        }
    }
    ctx->pc = 0x49A088u;
    // 0x49a088: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x49a088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x49a08c: 0x1040ff97  beqz        $v0, . + 4 + (-0x69 << 2)
    ctx->pc = 0x49A08Cu;
    {
        const bool branch_taken_0x49a08c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49A090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A08Cu;
        // 0x49a090: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a08c) {
            ctx->pc = 0x499EECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_499eec;
        }
    }
    ctx->pc = 0x49A094u;
    // 0x49a094: 0x8525001c  lh          $a1, 0x1C($t1)
    ctx->pc = 0x49a094u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 28)));
    // 0x49a098: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x49a098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49a09c: 0x8d230014  lw          $v1, 0x14($t1)
    ctx->pc = 0x49a09cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 20)));
    // 0x49a0a0: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x49a0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x49a0a4: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x49a0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x49a0a8: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x49a0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x49a0ac: 0x24630007  addiu       $v1, $v1, 0x7
    ctx->pc = 0x49a0acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
    // 0x49a0b0: 0x380c3  sra         $s0, $v1, 3
    ctx->pc = 0x49a0b0u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 3));
    // 0x49a0b4: 0x8ea50014  lw          $a1, 0x14($s5)
    ctx->pc = 0x49a0b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x49a0b8: 0x8522001e  lh          $v0, 0x1E($t1)
    ctx->pc = 0x49a0b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 30)));
    // 0x49a0bc: 0x24a30007  addiu       $v1, $a1, 0x7
    ctx->pc = 0x49a0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 7));
    // 0x49a0c0: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x49a0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x49a0c4: 0x388c3  sra         $s1, $v1, 3
    ctx->pc = 0x49a0c4u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 3), 3));
    // 0x49a0c8: 0x14a6000f  bne         $a1, $a2, . + 4 + (0xF << 2)
    ctx->pc = 0x49A0C8u;
    {
        const bool branch_taken_0x49a0c8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        ctx->pc = 0x49A0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A0C8u;
        // 0x49a0cc: 0xafa40014  sw          $a0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a0c8) {
            ctx->pc = 0x49A108u;
            goto label_49a108;
        }
    }
    ctx->pc = 0x49A0D0u;
    // 0x49a0d0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x49a0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x49a0d4: 0x8ea60018  lw          $a2, 0x18($s5)
    ctx->pc = 0x49a0d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x49a0d8: 0x417c2  srl         $v0, $a0, 31
    ctx->pc = 0x49a0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x49a0dc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x49a0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x49a0e0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x49a0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x49a0e4: 0x30850001  andi        $a1, $a0, 0x1
    ctx->pc = 0x49a0e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x49a0e8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x49a0e8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x49a0ec: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x49a0ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x49a0f0: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x49a0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x49a0f4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x49a0f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49a0f8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x49a0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x49a0fc: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x49a0fcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49a100: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x49A100u;
    {
        const bool branch_taken_0x49a100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49A104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A100u;
        // 0x49a104: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a100) {
            ctx->pc = 0x49A130u;
            goto label_49a130;
        }
    }
    ctx->pc = 0x49A108u;
label_49a108:
    // 0x49a108: 0x8ea20018  lw          $v0, 0x18($s5)
    ctx->pc = 0x49a108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x49a10c: 0x52200001  beql        $s1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x49A10Cu;
    {
        const bool branch_taken_0x49a10c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x49a10c) {
            ctx->pc = 0x49A110u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49A10Cu;
            // 0x49a110: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x49A114u;
            goto label_49a114;
        }
    }
    ctx->pc = 0x49A114u;
label_49a114:
    // 0x49a114: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x49a114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x49a118: 0x51001b  divu        $zero, $v0, $s1
    ctx->pc = 0x49a118u;
    { uint32_t divisor = GPR_U32(ctx, 17); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x49a11c: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x49a11cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49a120: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x49a120u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49a124: 0x2012  mflo        $a0
    ctx->pc = 0x49a124u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x49a128: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x49a128u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x49a12c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x49a12cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
label_49a130:
    // 0x49a130: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x49a130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x49a134: 0x8f848a58  lw          $a0, -0x75A8($gp)
    ctx->pc = 0x49a134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937176)));
    // 0x49a138: 0x2031018  mult        $v0, $s0, $v1
    ctx->pc = 0x49a138u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x49a13c: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x49A13Cu;
    {
        const bool branch_taken_0x49a13c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x49a13c) {
            ctx->pc = 0x49A140u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49A13Cu;
            // 0x49a140: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x49A144u;
            goto label_49a144;
        }
    }
    ctx->pc = 0x49A144u;
label_49a144:
    // 0x49a144: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x49a144u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49a148: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x49a148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x49a14c: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x49a14cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x49a150: 0x2463ffeb  addiu       $v1, $v1, -0x15
    ctx->pc = 0x49a150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967275));
    // 0x49a154: 0x2c640018  sltiu       $a0, $v1, 0x18
    ctx->pc = 0x49a154u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)24) ? 1 : 0);
    // 0x49a158: 0x50001b  divu        $zero, $v0, $s0
    ctx->pc = 0x49a158u;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x49a15c: 0x1012  mflo        $v0
    ctx->pc = 0x49a15cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x49a160: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x49a160u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x49a164: 0x1080ff61  beqz        $a0, . + 4 + (-0x9F << 2)
    ctx->pc = 0x49A164u;
    {
        const bool branch_taken_0x49a164 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x49A168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A164u;
        // 0x49a168: 0xafa20034  sw          $v0, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a164) {
            ctx->pc = 0x499EECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_499eec;
        }
    }
    ctx->pc = 0x49A16Cu;
    // 0x49a16c: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x49a16cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x49a170: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x49a170u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x49a174: 0x2442fcc0  addiu       $v0, $v0, -0x340
    ctx->pc = 0x49a174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966464));
    // 0x49a178: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x49a178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x49a17c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x49a17cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x49a180: 0x800008  jr          $a0
    ctx->pc = 0x49A180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x499EECu: goto label_499eec;
            case 0x49A188u: goto label_49a188;
            case 0x49A300u: goto label_49a300;
            case 0x49A3E8u: goto label_49a3e8;
            case 0x49AC58u: goto label_49ac58;
            case 0x49ADFCu: goto label_49adfc;
            case 0x49AEB8u: goto label_49aeb8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49A180u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x49A188u;
label_49a188:
    // 0x49a188: 0x8d260018  lw          $a2, 0x18($t1)
    ctx->pc = 0x49a188u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 24)));
    // 0x49a18c: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x49a18cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x49a190: 0x8fa70024  lw          $a3, 0x24($sp)
    ctx->pc = 0x49a190u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x49a194: 0x8fa80010  lw          $t0, 0x10($sp)
    ctx->pc = 0x49a194u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49a198: 0xc23018  mult        $a2, $a2, $v0
    ctx->pc = 0x49a198u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x49a19c: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x49a19cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x49a1a0: 0x1473818  mult        $a3, $t2, $a3
    ctx->pc = 0x49a1a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x49a1a4: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x49a1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x49a1a8: 0x2084018  mult        $t0, $s0, $t0
    ctx->pc = 0x49a1a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x49a1ac: 0x2252818  mult        $a1, $s1, $a1
    ctx->pc = 0x49a1acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x49a1b0: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x49a1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x49a1b4: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x49a1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x49a1b8: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x49a1b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49a1bc: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x49a1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x49a1c0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x49a1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x49a1c4: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x49a1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x49a1c8: 0x485821  addu        $t3, $v0, $t0
    ctx->pc = 0x49a1c8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x49a1cc: 0x653821  addu        $a3, $v1, $a1
    ctx->pc = 0x49a1ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x49a1d0: 0x1120055b  beqz        $t1, . + 4 + (0x55B << 2)
    ctx->pc = 0x49A1D0u;
    {
        const bool branch_taken_0x49a1d0 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x49A1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A1D0u;
        // 0x49a1d4: 0xafa4001c  sw          $a0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a1d0) {
            ctx->pc = 0x49B740u;
            goto label_49b740;
        }
    }
    ctx->pc = 0x49A1D8u;
    // 0x49a1d8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x49a1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x49a1dc: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x49a1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x49a1e0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x49a1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x49a1e4: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x49a1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x49a1e8: 0x3a080  sll         $s4, $v1, 2
    ctx->pc = 0x49a1e8u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x49a1ec: 0x0  nop
    ctx->pc = 0x49a1ecu;
    // NOP
label_49a1f0:
    // 0x49a1f0: 0x8fb20018  lw          $s2, 0x18($sp)
    ctx->pc = 0x49a1f0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x49a1f4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x49a1f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49a1f8: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x49A1F8u;
    {
        const bool branch_taken_0x49a1f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49A1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A1F8u;
        // 0x49a1fc: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a1f8) {
            ctx->pc = 0x49A2D8u;
            goto label_49a2d8;
        }
    }
    ctx->pc = 0x49A200u;
    // 0x49a200: 0x3c167f00  lui         $s6, 0x7F00
    ctx->pc = 0x49a200u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)32512 << 16));
    // 0x49a204: 0x3c18ff00  lui         $t8, 0xFF00
    ctx->pc = 0x49a204u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)65280 << 16));
    // 0x49a208: 0x24150080  addiu       $s5, $zero, 0x80
    ctx->pc = 0x49a208u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x49a20c: 0x3c1300ff  lui         $s3, 0xFF
    ctx->pc = 0x49a20cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)255 << 16));
label_49a210:
    // 0x49a210: 0x8ce90000  lw          $t1, 0x0($a3)
    ctx->pc = 0x49a210u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x49a214: 0x2c9102b  sltu        $v0, $s6, $t1
    ctx->pc = 0x49a214u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x49a218: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x49A218u;
    {
        const bool branch_taken_0x49a218 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49a218) {
            ctx->pc = 0x49A21Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49A218u;
            // 0x49a21c: 0x8d6e0000  lw          $t6, 0x0($t3) (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49A228u;
            goto label_49a228;
        }
    }
    ctx->pc = 0x49A220u;
    // 0x49a220: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x49A220u;
    {
        const bool branch_taken_0x49a220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49A224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A220u;
        // 0x49a224: 0xad690000  sw          $t1, 0x0($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a220) {
            ctx->pc = 0x49A2C4u;
            goto label_49a2c4;
        }
    }
    ctx->pc = 0x49A228u;
label_49a228:
    // 0x49a228: 0x1382824  and         $a1, $t1, $t8
    ctx->pc = 0x49a228u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) & GPR_U64(ctx, 24));
    // 0x49a22c: 0x52e02  srl         $a1, $a1, 24
    ctx->pc = 0x49a22cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 24));
    // 0x49a230: 0x1333024  and         $a2, $t1, $s3
    ctx->pc = 0x49a230u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 9) & GPR_U64(ctx, 19));
    // 0x49a234: 0x1d88024  and         $s0, $t6, $t8
    ctx->pc = 0x49a234u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 14) & GPR_U64(ctx, 24));
    // 0x49a238: 0x1d38824  and         $s1, $t6, $s3
    ctx->pc = 0x49a238u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 14) & GPR_U64(ctx, 19));
    // 0x49a23c: 0x2a57823  subu        $t7, $s5, $a1
    ctx->pc = 0x49a23cu;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
    // 0x49a240: 0x31cdff00  andi        $t5, $t6, 0xFF00
    ctx->pc = 0x49a240u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)65280);
    // 0x49a244: 0x108602  srl         $s0, $s0, 24
    ctx->pc = 0x49a244u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 24));
    // 0x49a248: 0x63402  srl         $a2, $a2, 16
    ctx->pc = 0x49a248u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 16));
    // 0x49a24c: 0x118c02  srl         $s1, $s1, 16
    ctx->pc = 0x49a24cu;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 17), 16));
    // 0x49a250: 0x3124ff00  andi        $a0, $t1, 0xFF00
    ctx->pc = 0x49a250u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65280);
    // 0x49a254: 0x20f8018  mult        $s0, $s0, $t7
    ctx->pc = 0x49a254u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x49a258: 0xc53018  mult        $a2, $a2, $a1
    ctx->pc = 0x49a258u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x49a25c: 0x42202  srl         $a0, $a0, 8
    ctx->pc = 0x49a25cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x49a260: 0xd6a02  srl         $t5, $t5, 8
    ctx->pc = 0x49a260u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 13), 8));
    // 0x49a264: 0x22f8818  mult        $s1, $s1, $t7
    ctx->pc = 0x49a264u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x49a268: 0xa51018  mult        $v0, $a1, $a1
    ctx->pc = 0x49a268u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x49a26c: 0x312300ff  andi        $v1, $t1, 0xFF
    ctx->pc = 0x49a26cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x49a270: 0x31ce00ff  andi        $t6, $t6, 0xFF
    ctx->pc = 0x49a270u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)255);
    // 0x49a274: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x49a274u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x49a278: 0x1af6818  mult        $t5, $t5, $t7
    ctx->pc = 0x49a278u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x49a27c: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x49a27cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x49a280: 0x1cf7018  mult        $t6, $t6, $t7
    ctx->pc = 0x49a280u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x49a284: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x49a284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x49a288: 0xd13021  addu        $a2, $a2, $s1
    ctx->pc = 0x49a288u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x49a28c: 0x8d2021  addu        $a0, $a0, $t5
    ctx->pc = 0x49a28cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
    // 0x49a290: 0x30427f80  andi        $v0, $v0, 0x7F80
    ctx->pc = 0x49a290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32640);
    // 0x49a294: 0x30c67f80  andi        $a2, $a2, 0x7F80
    ctx->pc = 0x49a294u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32640);
    // 0x49a298: 0x21440  sll         $v0, $v0, 17
    ctx->pc = 0x49a298u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 17));
    // 0x49a29c: 0x6e1821  addu        $v1, $v1, $t6
    ctx->pc = 0x49a29cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
    // 0x49a2a0: 0x63240  sll         $a2, $a2, 9
    ctx->pc = 0x49a2a0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 9));
    // 0x49a2a4: 0x30847f80  andi        $a0, $a0, 0x7F80
    ctx->pc = 0x49a2a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32640);
    // 0x49a2a8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x49a2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x49a2ac: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x49a2acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x49a2b0: 0x30637f80  andi        $v1, $v1, 0x7F80
    ctx->pc = 0x49a2b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32640);
    // 0x49a2b4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x49a2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x49a2b8: 0x319c2  srl         $v1, $v1, 7
    ctx->pc = 0x49a2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 7));
    // 0x49a2bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x49a2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x49a2c0: 0xad620000  sw          $v0, 0x0($t3)
    ctx->pc = 0x49a2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
label_49a2c4:
    // 0x49a2c4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x49a2c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49a2c8: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x49a2c8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x49a2cc: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x49a2ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x49a2d0: 0x1440ffcf  bnez        $v0, . + 4 + (-0x31 << 2)
    ctx->pc = 0x49A2D0u;
    {
        const bool branch_taken_0x49a2d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49A2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A2D0u;
        // 0x49a2d4: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a2d0) {
            ctx->pc = 0x49A210u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49a210;
        }
    }
    ctx->pc = 0x49A2D8u;
label_49a2d8:
    // 0x49a2d8: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x49a2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x49a2dc: 0x1745821  addu        $t3, $t3, $s4
    ctx->pc = 0x49a2dcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 20)));
    // 0x49a2e0: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x49a2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x49a2e4: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x49a2e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x49a2e8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x49a2e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49a2ec: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x49a2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x49a2f0: 0x1460ffbf  bnez        $v1, . + 4 + (-0x41 << 2)
    ctx->pc = 0x49A2F0u;
    {
        const bool branch_taken_0x49a2f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x49A2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A2F0u;
        // 0x49a2f4: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a2f0) {
            ctx->pc = 0x49A1F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49a1f0;
        }
    }
    ctx->pc = 0x49A2F8u;
    // 0x49a2f8: 0x10000512  b           . + 4 + (0x512 << 2)
    ctx->pc = 0x49A2F8u;
    {
        const bool branch_taken_0x49a2f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49A2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A2F8u;
        // 0x49a2fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a2f8) {
            ctx->pc = 0x49B744u;
            goto label_49b744;
        }
    }
    ctx->pc = 0x49A300u;
label_49a300:
    // 0x49a300: 0x8d260018  lw          $a2, 0x18($t1)
    ctx->pc = 0x49a300u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 24)));
    // 0x49a304: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x49a304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x49a308: 0x8fa70024  lw          $a3, 0x24($sp)
    ctx->pc = 0x49a308u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x49a30c: 0x8fa80010  lw          $t0, 0x10($sp)
    ctx->pc = 0x49a30cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49a310: 0xc23018  mult        $a2, $a2, $v0
    ctx->pc = 0x49a310u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x49a314: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x49a314u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x49a318: 0x1473818  mult        $a3, $t2, $a3
    ctx->pc = 0x49a318u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x49a31c: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x49a31cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x49a320: 0x2084018  mult        $t0, $s0, $t0
    ctx->pc = 0x49a320u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x49a324: 0x2252818  mult        $a1, $s1, $a1
    ctx->pc = 0x49a324u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x49a328: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x49a328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x49a32c: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x49a32cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x49a330: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x49a330u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49a334: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x49a334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x49a338: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x49a338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x49a33c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x49a33cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x49a340: 0x484021  addu        $t0, $v0, $t0
    ctx->pc = 0x49a340u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x49a344: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x49a344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x49a348: 0x112004fd  beqz        $t1, . + 4 + (0x4FD << 2)
    ctx->pc = 0x49A348u;
    {
        const bool branch_taken_0x49a348 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x49A34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A348u;
        // 0x49a34c: 0xafa4001c  sw          $a0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a348) {
            ctx->pc = 0x49B740u;
            goto label_49b740;
        }
    }
    ctx->pc = 0x49A350u;
    // 0x49a350: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x49a350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x49a354: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x49a354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x49a358: 0x2a080  sll         $s4, $v0, 2
    ctx->pc = 0x49a358u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x49a35c: 0x33040  sll         $a2, $v1, 1
    ctx->pc = 0x49a35cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_49a360:
    // 0x49a360: 0x8fb20018  lw          $s2, 0x18($sp)
    ctx->pc = 0x49a360u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x49a364: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x49a364u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49a368: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x49A368u;
    {
        const bool branch_taken_0x49a368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49A36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A368u;
        // 0x49a36c: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a368) {
            ctx->pc = 0x49A3C4u;
            goto label_49a3c4;
        }
    }
    ctx->pc = 0x49A370u;
    // 0x49a370: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x49a370u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x49a374: 0x0  nop
    ctx->pc = 0x49a374u;
    // NOP
label_49a378:
    // 0x49a378: 0x94a90000  lhu         $t1, 0x0($a1)
    ctx->pc = 0x49a378u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x49a37c: 0x31228000  andi        $v0, $t1, 0x8000
    ctx->pc = 0x49a37cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)32768);
    // 0x49a380: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x49A380u;
    {
        const bool branch_taken_0x49a380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49A384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A380u;
        // 0x49a384: 0x312403e0  andi        $a0, $t1, 0x3E0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)992);
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a380) {
            ctx->pc = 0x49A3B0u;
            goto label_49a3b0;
        }
    }
    ctx->pc = 0x49A388u;
    // 0x49a388: 0x31237c00  andi        $v1, $t1, 0x7C00
    ctx->pc = 0x49a388u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)31744);
    // 0x49a38c: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x49a38cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x49a390: 0x31a40  sll         $v1, $v1, 9
    ctx->pc = 0x49a390u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 9));
    // 0x49a394: 0x872025  or          $a0, $a0, $a3
    ctx->pc = 0x49a394u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
    // 0x49a398: 0x3122001f  andi        $v0, $t1, 0x1F
    ctx->pc = 0x49a398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)31);
    // 0x49a39c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x49a39cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x49a3a0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x49a3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x49a3a4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x49a3a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x49a3a8: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x49a3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x49a3ac: 0x0  nop
    ctx->pc = 0x49a3acu;
    // NOP
label_49a3b0:
    // 0x49a3b0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x49a3b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49a3b4: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x49a3b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x49a3b8: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x49a3b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x49a3bc: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x49A3BCu;
    {
        const bool branch_taken_0x49a3bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49A3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A3BCu;
        // 0x49a3c0: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a3bc) {
            ctx->pc = 0x49A378u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49a378;
        }
    }
    ctx->pc = 0x49A3C4u;
label_49a3c4:
    // 0x49a3c4: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x49a3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x49a3c8: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x49a3c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x49a3cc: 0x1144021  addu        $t0, $t0, $s4
    ctx->pc = 0x49a3ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 20)));
    // 0x49a3d0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x49a3d0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49a3d4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x49a3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x49a3d8: 0x1460ffe1  bnez        $v1, . + 4 + (-0x1F << 2)
    ctx->pc = 0x49A3D8u;
    {
        const bool branch_taken_0x49a3d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x49A3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A3D8u;
        // 0x49a3dc: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a3d8) {
            ctx->pc = 0x49A360u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49a360;
        }
    }
    ctx->pc = 0x49A3E0u;
    // 0x49a3e0: 0x100004d8  b           . + 4 + (0x4D8 << 2)
    ctx->pc = 0x49A3E0u;
    {
        const bool branch_taken_0x49a3e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49A3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A3E0u;
        // 0x49a3e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a3e0) {
            ctx->pc = 0x49B744u;
            goto label_49b744;
        }
    }
    ctx->pc = 0x49A3E8u;
label_49a3e8:
    // 0x49a3e8: 0x92a20022  lbu         $v0, 0x22($s5)
    ctx->pc = 0x49a3e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 34)));
    // 0x49a3ec: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x49a3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x49a3f0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x49a3f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x49a3f4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x49A3F4u;
    {
        const bool branch_taken_0x49a3f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49A3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A3F4u;
        // 0x49a3f8: 0xafa20038  sw          $v0, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a3f4) {
            ctx->pc = 0x49A40Cu;
            goto label_49a40c;
        }
    }
    ctx->pc = 0x49A3FCu;
    // 0x49a3fc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x49a3fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49a400: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x49a400u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49a404: 0xc121902  jal         func_486408
    ctx->pc = 0x49A404u;
    SET_GPR_U32(ctx, 31, 0x49A40Cu);
    ctx->pc = 0x49A408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49A404u;
    // 0x49a408: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x486408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x486408u, 0x49A404u, 0x49A40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49A40Cu;
label_49a40c:
    // 0x49a40c: 0x8f868a58  lw          $a2, -0x75A8($gp)
    ctx->pc = 0x49a40cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937176)));
    // 0x49a410: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x49a410u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x49a414: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x49a414u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x49a418: 0x8cc30018  lw          $v1, 0x18($a2)
    ctx->pc = 0x49a418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x49a41c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x49a41cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49a420: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x49a420u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x49a424: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x49a424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x49a428: 0x2042018  mult        $a0, $s0, $a0
    ctx->pc = 0x49a428u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x49a42c: 0x8ea50014  lw          $a1, 0x14($s5)
    ctx->pc = 0x49a42cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x49a430: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x49a430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x49a434: 0x14a7009a  bne         $a1, $a3, . + 4 + (0x9A << 2)
    ctx->pc = 0x49A434u;
    {
        const bool branch_taken_0x49a434 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 7));
        ctx->pc = 0x49A438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A434u;
        // 0x49a438: 0x44c021  addu        $t8, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a434) {
            ctx->pc = 0x49A6A0u;
            goto label_49a6a0;
        }
    }
    ctx->pc = 0x49A43Cu;
    // 0x49a43c: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x49a43cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x49a440: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x49a440u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x49a444: 0x8ea50018  lw          $a1, 0x18($s5)
    ctx->pc = 0x49a444u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x49a448: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x49a448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x49a44c: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x49a44cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x49a450: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x49a450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x49a454: 0x2242018  mult        $a0, $s1, $a0
    ctx->pc = 0x49a454u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x49a458: 0x92a20023  lbu         $v0, 0x23($s5)
    ctx->pc = 0x49a458u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 35)));
    // 0x49a45c: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x49a45cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x49a460: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x49a460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x49a464: 0x14460037  bne         $v0, $a2, . + 4 + (0x37 << 2)
    ctx->pc = 0x49A464u;
    {
        const bool branch_taken_0x49a464 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x49A468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A464u;
        // 0x49a468: 0x64c821  addu        $t9, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a464) {
            ctx->pc = 0x49A544u;
            goto label_49a544;
        }
    }
    ctx->pc = 0x49A46Cu;
    // 0x49a46c: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x49a46cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x49a470: 0x8ea50008  lw          $a1, 0x8($s5)
    ctx->pc = 0x49a470u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x49a474: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x49a474u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49a478: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x49a478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x49a47c: 0x106001f4  beqz        $v1, . + 4 + (0x1F4 << 2)
    ctx->pc = 0x49A47Cu;
    {
        const bool branch_taken_0x49a47c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x49A480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A47Cu;
        // 0x49a480: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a47c) {
            ctx->pc = 0x49AC50u;
            goto label_49ac50;
        }
    }
    ctx->pc = 0x49A484u;
    // 0x49a484: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x49a484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x49a488: 0x2a080  sll         $s4, $v0, 2
    ctx->pc = 0x49a488u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x49a48c: 0x0  nop
    ctx->pc = 0x49a48cu;
    // NOP
label_49a490:
    // 0x49a490: 0x8fb20018  lw          $s2, 0x18($sp)
    ctx->pc = 0x49a490u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x49a494: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x49a494u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49a498: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x49A498u;
    {
        const bool branch_taken_0x49a498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49A49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A498u;
        // 0x49a49c: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a498) {
            ctx->pc = 0x49A51Cu;
            goto label_49a51c;
        }
    }
    ctx->pc = 0x49A4A0u;
    // 0x49a4a0: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x49a4a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x49a4a4: 0x0  nop
    ctx->pc = 0x49a4a4u;
    // NOP
label_49a4a8:
    // 0x49a4a8: 0x93220000  lbu         $v0, 0x0($t9)
    ctx->pc = 0x49a4a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x49a4ac: 0x30430010  andi        $v1, $v0, 0x10
    ctx->pc = 0x49a4acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x49a4b0: 0x30440008  andi        $a0, $v0, 0x8
    ctx->pc = 0x49a4b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x49a4b4: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x49a4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x49a4b8: 0x304200e7  andi        $v0, $v0, 0xE7
    ctx->pc = 0x49a4b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)231);
    // 0x49a4bc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x49a4bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x49a4c0: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x49a4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x49a4c4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x49a4c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x49a4c8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x49a4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x49a4cc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x49a4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x49a4d0: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x49a4d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x49a4d4: 0x30438000  andi        $v1, $v0, 0x8000
    ctx->pc = 0x49a4d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x49a4d8: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x49A4D8u;
    {
        const bool branch_taken_0x49a4d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x49A4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A4D8u;
        // 0x49a4dc: 0x304403e0  andi        $a0, $v0, 0x3E0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)992);
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a4d8) {
            ctx->pc = 0x49A508u;
            goto label_49a508;
        }
    }
    ctx->pc = 0x49A4E0u;
    // 0x49a4e0: 0x30437c00  andi        $v1, $v0, 0x7C00
    ctx->pc = 0x49a4e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31744);
    // 0x49a4e4: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x49a4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x49a4e8: 0x31a40  sll         $v1, $v1, 9
    ctx->pc = 0x49a4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 9));
    // 0x49a4ec: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x49a4ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x49a4f0: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x49a4f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x49a4f4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x49a4f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x49a4f8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x49a4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x49a4fc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x49a4fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x49a500: 0xaf030000  sw          $v1, 0x0($t8)
    ctx->pc = 0x49a500u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 3));
    // 0x49a504: 0x0  nop
    ctx->pc = 0x49a504u;
    // NOP
label_49a508:
    // 0x49a508: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x49a508u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49a50c: 0x27180004  addiu       $t8, $t8, 0x4
    ctx->pc = 0x49a50cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 4));
    // 0x49a510: 0x27390001  addiu       $t9, $t9, 0x1
    ctx->pc = 0x49a510u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
    // 0x49a514: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x49A514u;
    {
        const bool branch_taken_0x49a514 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49A518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A514u;
        // 0x49a518: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a514) {
            ctx->pc = 0x49A4A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49a4a8;
        }
    }
    ctx->pc = 0x49A51Cu;
label_49a51c:
    // 0x49a51c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x49a51cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x49a520: 0x314c021  addu        $t8, $t8, $s4
    ctx->pc = 0x49a520u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 20)));
    // 0x49a524: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x49a524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x49a528: 0x323c821  addu        $t9, $t9, $v1
    ctx->pc = 0x49a528u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 3)));
    // 0x49a52c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x49a52cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49a530: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x49a530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x49a534: 0x1460ffd6  bnez        $v1, . + 4 + (-0x2A << 2)
    ctx->pc = 0x49A534u;
    {
        const bool branch_taken_0x49a534 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x49A538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A534u;
        // 0x49a538: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a534) {
            ctx->pc = 0x49A490u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49a490;
        }
    }
    ctx->pc = 0x49A53Cu;
    // 0x49a53c: 0x1000047c  b           . + 4 + (0x47C << 2)
    ctx->pc = 0x49A53Cu;
    {
        const bool branch_taken_0x49a53c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49A540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A53Cu;
        // 0x49a540: 0x8fa50038  lw          $a1, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a53c) {
            ctx->pc = 0x49B730u;
            goto label_49b730;
        }
    }
    ctx->pc = 0x49A544u;
label_49a544:
    // 0x49a544: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x49a544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x49a548: 0x8eb30008  lw          $s3, 0x8($s5)
    ctx->pc = 0x49a548u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x49a54c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x49a54cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49a550: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x49a550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x49a554: 0x106001be  beqz        $v1, . + 4 + (0x1BE << 2)
    ctx->pc = 0x49A554u;
    {
        const bool branch_taken_0x49a554 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x49A558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A554u;
        // 0x49a558: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a554) {
            ctx->pc = 0x49AC50u;
            goto label_49ac50;
        }
    }
    ctx->pc = 0x49A55Cu;
    // 0x49a55c: 0x8fa50034  lw          $a1, 0x34($sp)
    ctx->pc = 0x49a55cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x49a560: 0x5a080  sll         $s4, $a1, 2
    ctx->pc = 0x49a560u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x49a564: 0x0  nop
    ctx->pc = 0x49a564u;
    // NOP
label_49a568:
    // 0x49a568: 0x8fb20018  lw          $s2, 0x18($sp)
    ctx->pc = 0x49a568u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x49a56c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x49a56cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49a570: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x49A570u;
    {
        const bool branch_taken_0x49a570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49A574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A570u;
        // 0x49a574: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a570) {
            ctx->pc = 0x49A678u;
            goto label_49a678;
        }
    }
    ctx->pc = 0x49A578u;
    // 0x49a578: 0x3c177f00  lui         $s7, 0x7F00
    ctx->pc = 0x49a578u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)32512 << 16));
    // 0x49a57c: 0x3c0bff00  lui         $t3, 0xFF00
    ctx->pc = 0x49a57cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)65280 << 16));
    // 0x49a580: 0x24160080  addiu       $s6, $zero, 0x80
    ctx->pc = 0x49a580u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x49a584: 0x3c0900ff  lui         $t1, 0xFF
    ctx->pc = 0x49a584u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)255 << 16));
label_49a588:
    // 0x49a588: 0x93220000  lbu         $v0, 0x0($t9)
    ctx->pc = 0x49a588u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x49a58c: 0x30430010  andi        $v1, $v0, 0x10
    ctx->pc = 0x49a58cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x49a590: 0x30440008  andi        $a0, $v0, 0x8
    ctx->pc = 0x49a590u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x49a594: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x49a594u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x49a598: 0x304200e7  andi        $v0, $v0, 0xE7
    ctx->pc = 0x49a598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)231);
    // 0x49a59c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x49a59cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x49a5a0: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x49a5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x49a5a4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x49a5a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x49a5a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x49a5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x49a5ac: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x49a5acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x49a5b0: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x49a5b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x49a5b4: 0x2e7182b  sltu        $v1, $s7, $a3
    ctx->pc = 0x49a5b4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x49a5b8: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x49A5B8u;
    {
        const bool branch_taken_0x49a5b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x49a5b8) {
            ctx->pc = 0x49A5BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49A5B8u;
            // 0x49a5bc: 0x8f0e0000  lw          $t6, 0x0($t8) (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49A5C8u;
            goto label_49a5c8;
        }
    }
    ctx->pc = 0x49A5C0u;
    // 0x49a5c0: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x49A5C0u;
    {
        const bool branch_taken_0x49a5c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49A5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A5C0u;
        // 0x49a5c4: 0xaf070000  sw          $a3, 0x0($t8) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a5c0) {
            ctx->pc = 0x49A664u;
            goto label_49a664;
        }
    }
    ctx->pc = 0x49A5C8u;
label_49a5c8:
    // 0x49a5c8: 0xeb2824  and         $a1, $a3, $t3
    ctx->pc = 0x49a5c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & GPR_U64(ctx, 11));
    // 0x49a5cc: 0x52e02  srl         $a1, $a1, 24
    ctx->pc = 0x49a5ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 24));
    // 0x49a5d0: 0xe93024  and         $a2, $a3, $t1
    ctx->pc = 0x49a5d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & GPR_U64(ctx, 9));
    // 0x49a5d4: 0x1cb8024  and         $s0, $t6, $t3
    ctx->pc = 0x49a5d4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 14) & GPR_U64(ctx, 11));
    // 0x49a5d8: 0x1c98824  and         $s1, $t6, $t1
    ctx->pc = 0x49a5d8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 14) & GPR_U64(ctx, 9));
    // 0x49a5dc: 0x2c57823  subu        $t7, $s6, $a1
    ctx->pc = 0x49a5dcu;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 5)));
    // 0x49a5e0: 0x31cdff00  andi        $t5, $t6, 0xFF00
    ctx->pc = 0x49a5e0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)65280);
    // 0x49a5e4: 0x108602  srl         $s0, $s0, 24
    ctx->pc = 0x49a5e4u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 24));
    // 0x49a5e8: 0x63402  srl         $a2, $a2, 16
    ctx->pc = 0x49a5e8u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 16));
    // 0x49a5ec: 0x118c02  srl         $s1, $s1, 16
    ctx->pc = 0x49a5ecu;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 17), 16));
    // 0x49a5f0: 0x30e4ff00  andi        $a0, $a3, 0xFF00
    ctx->pc = 0x49a5f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65280);
    // 0x49a5f4: 0x20f8018  mult        $s0, $s0, $t7
    ctx->pc = 0x49a5f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x49a5f8: 0xc53018  mult        $a2, $a2, $a1
    ctx->pc = 0x49a5f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x49a5fc: 0x42202  srl         $a0, $a0, 8
    ctx->pc = 0x49a5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x49a600: 0xd6a02  srl         $t5, $t5, 8
    ctx->pc = 0x49a600u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 13), 8));
    // 0x49a604: 0x22f8818  mult        $s1, $s1, $t7
    ctx->pc = 0x49a604u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x49a608: 0xa51018  mult        $v0, $a1, $a1
    ctx->pc = 0x49a608u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x49a60c: 0x30e300ff  andi        $v1, $a3, 0xFF
    ctx->pc = 0x49a60cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x49a610: 0x31ce00ff  andi        $t6, $t6, 0xFF
    ctx->pc = 0x49a610u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)255);
    // 0x49a614: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x49a614u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x49a618: 0x1af6818  mult        $t5, $t5, $t7
    ctx->pc = 0x49a618u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x49a61c: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x49a61cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x49a620: 0x1cf7018  mult        $t6, $t6, $t7
    ctx->pc = 0x49a620u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x49a624: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x49a624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x49a628: 0xd13021  addu        $a2, $a2, $s1
    ctx->pc = 0x49a628u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x49a62c: 0x8d2021  addu        $a0, $a0, $t5
    ctx->pc = 0x49a62cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
    // 0x49a630: 0x30427f80  andi        $v0, $v0, 0x7F80
    ctx->pc = 0x49a630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32640);
    // 0x49a634: 0x30c67f80  andi        $a2, $a2, 0x7F80
    ctx->pc = 0x49a634u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32640);
    // 0x49a638: 0x21440  sll         $v0, $v0, 17
    ctx->pc = 0x49a638u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 17));
    // 0x49a63c: 0x6e1821  addu        $v1, $v1, $t6
    ctx->pc = 0x49a63cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
    // 0x49a640: 0x63240  sll         $a2, $a2, 9
    ctx->pc = 0x49a640u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 9));
    // 0x49a644: 0x30847f80  andi        $a0, $a0, 0x7F80
    ctx->pc = 0x49a644u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32640);
    // 0x49a648: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x49a648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x49a64c: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x49a64cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x49a650: 0x30637f80  andi        $v1, $v1, 0x7F80
    ctx->pc = 0x49a650u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32640);
    // 0x49a654: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x49a654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x49a658: 0x319c2  srl         $v1, $v1, 7
    ctx->pc = 0x49a658u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 7));
    // 0x49a65c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x49a65cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x49a660: 0xaf020000  sw          $v0, 0x0($t8)
    ctx->pc = 0x49a660u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 2));
label_49a664:
    // 0x49a664: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x49a664u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49a668: 0x27180004  addiu       $t8, $t8, 0x4
    ctx->pc = 0x49a668u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 4));
    // 0x49a66c: 0x27390001  addiu       $t9, $t9, 0x1
    ctx->pc = 0x49a66cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
    // 0x49a670: 0x1440ffc5  bnez        $v0, . + 4 + (-0x3B << 2)
    ctx->pc = 0x49A670u;
    {
        const bool branch_taken_0x49a670 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49A674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A670u;
        // 0x49a674: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a670) {
            ctx->pc = 0x49A588u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49a588;
        }
    }
    ctx->pc = 0x49A678u;
label_49a678:
    // 0x49a678: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x49a678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x49a67c: 0x314c021  addu        $t8, $t8, $s4
    ctx->pc = 0x49a67cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 20)));
    // 0x49a680: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x49a680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x49a684: 0x323c821  addu        $t9, $t9, $v1
    ctx->pc = 0x49a684u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 3)));
    // 0x49a688: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x49a688u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49a68c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x49a68cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x49a690: 0x1460ffb5  bnez        $v1, . + 4 + (-0x4B << 2)
    ctx->pc = 0x49A690u;
    {
        const bool branch_taken_0x49a690 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x49A694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A690u;
        // 0x49a694: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a690) {
            ctx->pc = 0x49A568u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49a568;
        }
    }
    ctx->pc = 0x49A698u;
    // 0x49a698: 0x10000425  b           . + 4 + (0x425 << 2)
    ctx->pc = 0x49A698u;
    {
        const bool branch_taken_0x49a698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49A69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A698u;
        // 0x49a69c: 0x8fa50038  lw          $a1, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a698) {
            ctx->pc = 0x49B730u;
            goto label_49b730;
        }
    }
    ctx->pc = 0x49A6A0u;
label_49a6a0:
    // 0x49a6a0: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x49a6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x49a6a4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x49a6a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x49a6a8: 0x8ea50018  lw          $a1, 0x18($s5)
    ctx->pc = 0x49a6a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x49a6ac: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x49a6acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x49a6b0: 0xa32818  mult        $a1, $a1, $v1
    ctx->pc = 0x49a6b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x49a6b4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x49a6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x49a6b8: 0x92a30023  lbu         $v1, 0x23($s5)
    ctx->pc = 0x49a6b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 35)));
    // 0x49a6bc: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x49a6bcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x49a6c0: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x49a6c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x49a6c4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x49a6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x49a6c8: 0x1466006e  bne         $v1, $a2, . + 4 + (0x6E << 2)
    ctx->pc = 0x49A6C8u;
    {
        const bool branch_taken_0x49a6c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x49A6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A6C8u;
        // 0x49a6cc: 0x82c821  addu        $t9, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a6c8) {
            ctx->pc = 0x49A884u;
            goto label_49a884;
        }
    }
    ctx->pc = 0x49A6D0u;
    // 0x49a6d0: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x49a6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x49a6d4: 0x8ea50008  lw          $a1, 0x8($s5)
    ctx->pc = 0x49a6d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x49a6d8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x49a6d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49a6dc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x49a6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x49a6e0: 0x1060015b  beqz        $v1, . + 4 + (0x15B << 2)
    ctx->pc = 0x49A6E0u;
    {
        const bool branch_taken_0x49a6e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x49A6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A6E0u;
        // 0x49a6e4: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a6e0) {
            ctx->pc = 0x49AC50u;
            goto label_49ac50;
        }
    }
    ctx->pc = 0x49A6E8u;
    // 0x49a6e8: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x49a6e8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x49a6ec: 0x0  nop
    ctx->pc = 0x49a6ecu;
    // NOP
label_49a6f0:
    // 0x49a6f0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x49a6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x49a6f4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x49a6f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x49a6f8: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x49A6F8u;
    {
        const bool branch_taken_0x49a6f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49A6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A6F8u;
        // 0x49a6fc: 0x8fb20018  lw          $s2, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a6f8) {
            ctx->pc = 0x49A754u;
            goto label_49a754;
        }
    }
    ctx->pc = 0x49A700u;
    // 0x49a700: 0x93220000  lbu         $v0, 0x0($t9)
    ctx->pc = 0x49a700u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x49a704: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x49a704u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x49a708: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x49a708u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x49a70c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x49a70cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x49a710: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x49a710u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x49a714: 0x30838000  andi        $v1, $a0, 0x8000
    ctx->pc = 0x49a714u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32768);
    // 0x49a718: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x49A718u;
    {
        const bool branch_taken_0x49a718 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x49A71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A718u;
        // 0x49a71c: 0x308203e0  andi        $v0, $a0, 0x3E0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)992);
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a718) {
            ctx->pc = 0x49A748u;
            goto label_49a748;
        }
    }
    ctx->pc = 0x49A720u;
    // 0x49a720: 0x30837c00  andi        $v1, $a0, 0x7C00
    ctx->pc = 0x49a720u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31744);
    // 0x49a724: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x49a724u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x49a728: 0x31a40  sll         $v1, $v1, 9
    ctx->pc = 0x49a728u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 9));
    // 0x49a72c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x49a72cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x49a730: 0x3084001f  andi        $a0, $a0, 0x1F
    ctx->pc = 0x49a730u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x49a734: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x49a734u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x49a738: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x49a738u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x49a73c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x49a73cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x49a740: 0xaf030000  sw          $v1, 0x0($t8)
    ctx->pc = 0x49a740u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 3));
    // 0x49a744: 0x0  nop
    ctx->pc = 0x49a744u;
    // NOP
label_49a748:
    // 0x49a748: 0x27180004  addiu       $t8, $t8, 0x4
    ctx->pc = 0x49a748u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 4));
    // 0x49a74c: 0x27390001  addiu       $t9, $t9, 0x1
    ctx->pc = 0x49a74cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
    // 0x49a750: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x49a750u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_49a754:
    // 0x49a754: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x49a754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x49a758: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x49a758u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x49a75c: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x49A75Cu;
    {
        const bool branch_taken_0x49a75c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49A760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A75Cu;
        // 0x49a760: 0x3a080  sll         $s4, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a75c) {
            ctx->pc = 0x49A80Cu;
            goto label_49a80c;
        }
    }
    ctx->pc = 0x49A764u;
    // 0x49a764: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x49a764u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
label_49a768:
    // 0x49a768: 0x93220000  lbu         $v0, 0x0($t9)
    ctx->pc = 0x49a768u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x49a76c: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x49a76cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x49a770: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x49a770u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x49a774: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x49a774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x49a778: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x49a778u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x49a77c: 0x30438000  andi        $v1, $v0, 0x8000
    ctx->pc = 0x49a77cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x49a780: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x49A780u;
    {
        const bool branch_taken_0x49a780 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x49A784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A780u;
        // 0x49a784: 0x304403e0  andi        $a0, $v0, 0x3E0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)992);
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a780) {
            ctx->pc = 0x49A7B0u;
            goto label_49a7b0;
        }
    }
    ctx->pc = 0x49A788u;
    // 0x49a788: 0x30437c00  andi        $v1, $v0, 0x7C00
    ctx->pc = 0x49a788u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31744);
    // 0x49a78c: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x49a78cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x49a790: 0x31a40  sll         $v1, $v1, 9
    ctx->pc = 0x49a790u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 9));
    // 0x49a794: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x49a794u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x49a798: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x49a798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x49a79c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x49a79cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x49a7a0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x49a7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x49a7a4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x49a7a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x49a7a8: 0xaf030000  sw          $v1, 0x0($t8)
    ctx->pc = 0x49a7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 3));
    // 0x49a7ac: 0x0  nop
    ctx->pc = 0x49a7acu;
    // NOP
label_49a7b0:
    // 0x49a7b0: 0x93220000  lbu         $v0, 0x0($t9)
    ctx->pc = 0x49a7b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x49a7b4: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x49a7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x49a7b8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x49a7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x49a7bc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x49a7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x49a7c0: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x49a7c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x49a7c4: 0x30438000  andi        $v1, $v0, 0x8000
    ctx->pc = 0x49a7c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x49a7c8: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x49A7C8u;
    {
        const bool branch_taken_0x49a7c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x49A7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A7C8u;
        // 0x49a7cc: 0x27180004  addiu       $t8, $t8, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a7c8) {
            ctx->pc = 0x49A7F8u;
            goto label_49a7f8;
        }
    }
    ctx->pc = 0x49A7D0u;
    // 0x49a7d0: 0x304403e0  andi        $a0, $v0, 0x3E0
    ctx->pc = 0x49a7d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)992);
    // 0x49a7d4: 0x30437c00  andi        $v1, $v0, 0x7C00
    ctx->pc = 0x49a7d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31744);
    // 0x49a7d8: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x49a7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x49a7dc: 0x31a40  sll         $v1, $v1, 9
    ctx->pc = 0x49a7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 9));
    // 0x49a7e0: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x49a7e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x49a7e4: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x49a7e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x49a7e8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x49a7e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x49a7ec: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x49a7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x49a7f0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x49a7f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x49a7f4: 0xaf030000  sw          $v1, 0x0($t8)
    ctx->pc = 0x49a7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 3));
label_49a7f8:
    // 0x49a7f8: 0x2652fffe  addiu       $s2, $s2, -0x2
    ctx->pc = 0x49a7f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967294));
    // 0x49a7fc: 0x27180004  addiu       $t8, $t8, 0x4
    ctx->pc = 0x49a7fcu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 4));
    // 0x49a800: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x49a800u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x49a804: 0x1040ffd8  beqz        $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x49A804u;
    {
        const bool branch_taken_0x49a804 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49A808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A804u;
        // 0x49a808: 0x27390001  addiu       $t9, $t9, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a804) {
            ctx->pc = 0x49A768u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49a768;
        }
    }
    ctx->pc = 0x49A80Cu;
label_49a80c:
    // 0x49a80c: 0x1a400014  blez        $s2, . + 4 + (0x14 << 2)
    ctx->pc = 0x49A80Cu;
    {
        const bool branch_taken_0x49a80c = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x49A810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A80Cu;
        // 0x49a810: 0x8fa30030  lw          $v1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a80c) {
            ctx->pc = 0x49A860u;
            goto label_49a860;
        }
    }
    ctx->pc = 0x49A814u;
    // 0x49a814: 0x93220000  lbu         $v0, 0x0($t9)
    ctx->pc = 0x49a814u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x49a818: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x49a818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x49a81c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x49a81cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x49a820: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x49a820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x49a824: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x49a824u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x49a828: 0x30838000  andi        $v1, $a0, 0x8000
    ctx->pc = 0x49a828u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32768);
    // 0x49a82c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x49A82Cu;
    {
        const bool branch_taken_0x49a82c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x49A830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A82Cu;
        // 0x49a830: 0x308203e0  andi        $v0, $a0, 0x3E0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)992);
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a82c) {
            ctx->pc = 0x49A858u;
            goto label_49a858;
        }
    }
    ctx->pc = 0x49A834u;
    // 0x49a834: 0x30837c00  andi        $v1, $a0, 0x7C00
    ctx->pc = 0x49a834u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31744);
    // 0x49a838: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x49a838u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x49a83c: 0x31a40  sll         $v1, $v1, 9
    ctx->pc = 0x49a83cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 9));
    // 0x49a840: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x49a840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x49a844: 0x3084001f  andi        $a0, $a0, 0x1F
    ctx->pc = 0x49a844u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x49a848: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x49a848u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x49a84c: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x49a84cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x49a850: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x49a850u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x49a854: 0xaf030000  sw          $v1, 0x0($t8)
    ctx->pc = 0x49a854u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 3));
label_49a858:
    // 0x49a858: 0x27180004  addiu       $t8, $t8, 0x4
    ctx->pc = 0x49a858u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 4));
    // 0x49a85c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x49a85cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_49a860:
    // 0x49a860: 0x314c021  addu        $t8, $t8, $s4
    ctx->pc = 0x49a860u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 20)));
    // 0x49a864: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x49a864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x49a868: 0x323c821  addu        $t9, $t9, $v1
    ctx->pc = 0x49a868u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 3)));
    // 0x49a86c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x49a86cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49a870: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x49a870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x49a874: 0x1460ff9e  bnez        $v1, . + 4 + (-0x62 << 2)
    ctx->pc = 0x49A874u;
    {
        const bool branch_taken_0x49a874 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x49A878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A874u;
        // 0x49a878: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a874) {
            ctx->pc = 0x49A6F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49a6f0;
        }
    }
    ctx->pc = 0x49A87Cu;
    // 0x49a87c: 0x100003ac  b           . + 4 + (0x3AC << 2)
    ctx->pc = 0x49A87Cu;
    {
        const bool branch_taken_0x49a87c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49A880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A87Cu;
        // 0x49a880: 0x8fa50038  lw          $a1, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a87c) {
            ctx->pc = 0x49B730u;
            goto label_49b730;
        }
    }
    ctx->pc = 0x49A884u;
label_49a884:
    // 0x49a884: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x49a884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x49a888: 0x8eb30008  lw          $s3, 0x8($s5)
    ctx->pc = 0x49a888u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x49a88c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x49a88cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49a890: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x49a890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x49a894: 0x106000ee  beqz        $v1, . + 4 + (0xEE << 2)
    ctx->pc = 0x49A894u;
    {
        const bool branch_taken_0x49a894 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x49A898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A894u;
        // 0x49a898: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a894) {
            ctx->pc = 0x49AC50u;
            goto label_49ac50;
        }
    }
    ctx->pc = 0x49A89Cu;
    // 0x49a89c: 0x3c1e00ff  lui         $fp, 0xFF
    ctx->pc = 0x49a89cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)255 << 16));
label_49a8a0:
    // 0x49a8a0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x49a8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x49a8a4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x49a8a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x49a8a8: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x49A8A8u;
    {
        const bool branch_taken_0x49a8a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49A8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A8A8u;
        // 0x49a8ac: 0x8fb20018  lw          $s2, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a8a8) {
            ctx->pc = 0x49A990u;
            goto label_49a990;
        }
    }
    ctx->pc = 0x49A8B0u;
    // 0x49a8b0: 0x93220000  lbu         $v0, 0x0($t9)
    ctx->pc = 0x49a8b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x49a8b4: 0x3c057f00  lui         $a1, 0x7F00
    ctx->pc = 0x49a8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32512 << 16));
    // 0x49a8b8: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x49a8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x49a8bc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x49a8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x49a8c0: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x49a8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x49a8c4: 0x8c4c0000  lw          $t4, 0x0($v0)
    ctx->pc = 0x49a8c4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x49a8c8: 0xac182b  sltu        $v1, $a1, $t4
    ctx->pc = 0x49a8c8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x49a8cc: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x49A8CCu;
    {
        const bool branch_taken_0x49a8cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x49a8cc) {
            ctx->pc = 0x49A8D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49A8CCu;
            // 0x49a8d0: 0x8f080000  lw          $t0, 0x0($t8) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49A8E0u;
            goto label_49a8e0;
        }
    }
    ctx->pc = 0x49A8D4u;
    // 0x49a8d4: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x49A8D4u;
    {
        const bool branch_taken_0x49a8d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49A8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A8D4u;
        // 0x49a8d8: 0xaf0c0000  sw          $t4, 0x0($t8) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a8d4) {
            ctx->pc = 0x49A984u;
            goto label_49a984;
        }
    }
    ctx->pc = 0x49A8DCu;
    // 0x49a8dc: 0x0  nop
    ctx->pc = 0x49a8dcu;
    // NOP
label_49a8e0:
    // 0x49a8e0: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x49a8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x49a8e4: 0x1823024  and         $a2, $t4, $v0
    ctx->pc = 0x49a8e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 12) & GPR_U64(ctx, 2));
    // 0x49a8e8: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x49a8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x49a8ec: 0x63602  srl         $a2, $a2, 24
    ctx->pc = 0x49a8ecu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 24));
    // 0x49a8f0: 0x1024824  and         $t1, $t0, $v0
    ctx->pc = 0x49a8f0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x49a8f4: 0x665823  subu        $t3, $v1, $a2
    ctx->pc = 0x49a8f4u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x49a8f8: 0x11e5024  and         $t2, $t0, $fp
    ctx->pc = 0x49a8f8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 8) & GPR_U64(ctx, 30));
    // 0x49a8fc: 0x19e2024  and         $a0, $t4, $fp
    ctx->pc = 0x49a8fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 12) & GPR_U64(ctx, 30));
    // 0x49a900: 0x3107ff00  andi        $a3, $t0, 0xFF00
    ctx->pc = 0x49a900u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65280);
    // 0x49a904: 0x94e02  srl         $t1, $t1, 24
    ctx->pc = 0x49a904u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 9), 24));
    // 0x49a908: 0x42402  srl         $a0, $a0, 16
    ctx->pc = 0x49a908u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x49a90c: 0xa5402  srl         $t2, $t2, 16
    ctx->pc = 0x49a90cu;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x49a910: 0x3183ff00  andi        $v1, $t4, 0xFF00
    ctx->pc = 0x49a910u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)65280);
    // 0x49a914: 0x12b4818  mult        $t1, $t1, $t3
    ctx->pc = 0x49a914u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x49a918: 0x862018  mult        $a0, $a0, $a2
    ctx->pc = 0x49a918u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x49a91c: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x49a91cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x49a920: 0x73a02  srl         $a3, $a3, 8
    ctx->pc = 0x49a920u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 8));
    // 0x49a924: 0x14b5018  mult        $t2, $t2, $t3
    ctx->pc = 0x49a924u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x49a928: 0xc61018  mult        $v0, $a2, $a2
    ctx->pc = 0x49a928u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x49a92c: 0x318500ff  andi        $a1, $t4, 0xFF
    ctx->pc = 0x49a92cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)255);
    // 0x49a930: 0x310800ff  andi        $t0, $t0, 0xFF
    ctx->pc = 0x49a930u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x49a934: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x49a934u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x49a938: 0xeb3818  mult        $a3, $a3, $t3
    ctx->pc = 0x49a938u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x49a93c: 0xa62818  mult        $a1, $a1, $a2
    ctx->pc = 0x49a93cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x49a940: 0x10b4018  mult        $t0, $t0, $t3
    ctx->pc = 0x49a940u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x49a944: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x49a944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x49a948: 0x8a2021  addu        $a0, $a0, $t2
    ctx->pc = 0x49a948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x49a94c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x49a94cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x49a950: 0x30427f80  andi        $v0, $v0, 0x7F80
    ctx->pc = 0x49a950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32640);
    // 0x49a954: 0x30847f80  andi        $a0, $a0, 0x7F80
    ctx->pc = 0x49a954u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32640);
    // 0x49a958: 0x21440  sll         $v0, $v0, 17
    ctx->pc = 0x49a958u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 17));
    // 0x49a95c: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x49a95cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x49a960: 0x42240  sll         $a0, $a0, 9
    ctx->pc = 0x49a960u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 9));
    // 0x49a964: 0x30637f80  andi        $v1, $v1, 0x7F80
    ctx->pc = 0x49a964u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32640);
    // 0x49a968: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x49a968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x49a96c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x49a96cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x49a970: 0x30a57f80  andi        $a1, $a1, 0x7F80
    ctx->pc = 0x49a970u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32640);
    // 0x49a974: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x49a974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x49a978: 0x529c2  srl         $a1, $a1, 7
    ctx->pc = 0x49a978u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 7));
    // 0x49a97c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x49a97cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x49a980: 0xaf020000  sw          $v0, 0x0($t8)
    ctx->pc = 0x49a980u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 2));
label_49a984:
    // 0x49a984: 0x27180004  addiu       $t8, $t8, 0x4
    ctx->pc = 0x49a984u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 4));
    // 0x49a988: 0x27390001  addiu       $t9, $t9, 0x1
    ctx->pc = 0x49a988u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
    // 0x49a98c: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x49a98cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_49a990:
    // 0x49a990: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x49a990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x49a994: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x49a994u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x49a998: 0x1440006e  bnez        $v0, . + 4 + (0x6E << 2)
    ctx->pc = 0x49A998u;
    {
        const bool branch_taken_0x49a998 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49A99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A998u;
        // 0x49a99c: 0x3a080  sll         $s4, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a998) {
            ctx->pc = 0x49AB54u;
            goto label_49ab54;
        }
    }
    ctx->pc = 0x49A9A0u;
    // 0x49a9a0: 0x3c177f00  lui         $s7, 0x7F00
    ctx->pc = 0x49a9a0u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)32512 << 16));
    // 0x49a9a4: 0x3c0bff00  lui         $t3, 0xFF00
    ctx->pc = 0x49a9a4u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)65280 << 16));
    // 0x49a9a8: 0x24160080  addiu       $s6, $zero, 0x80
    ctx->pc = 0x49a9a8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x49a9ac: 0x3c0900ff  lui         $t1, 0xFF
    ctx->pc = 0x49a9acu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)255 << 16));
label_49a9b0:
    // 0x49a9b0: 0x93220000  lbu         $v0, 0x0($t9)
    ctx->pc = 0x49a9b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x49a9b4: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x49a9b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x49a9b8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x49a9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x49a9bc: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x49a9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x49a9c0: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x49a9c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x49a9c4: 0x2e7182b  sltu        $v1, $s7, $a3
    ctx->pc = 0x49a9c4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x49a9c8: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x49A9C8u;
    {
        const bool branch_taken_0x49a9c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x49a9c8) {
            ctx->pc = 0x49A9CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49A9C8u;
            // 0x49a9cc: 0x8f0e0000  lw          $t6, 0x0($t8) (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49A9D8u;
            goto label_49a9d8;
        }
    }
    ctx->pc = 0x49A9D0u;
    // 0x49a9d0: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x49A9D0u;
    {
        const bool branch_taken_0x49a9d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49A9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A9D0u;
        // 0x49a9d4: 0xaf070000  sw          $a3, 0x0($t8) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a9d0) {
            ctx->pc = 0x49AA74u;
            goto label_49aa74;
        }
    }
    ctx->pc = 0x49A9D8u;
label_49a9d8:
    // 0x49a9d8: 0xeb2824  and         $a1, $a3, $t3
    ctx->pc = 0x49a9d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & GPR_U64(ctx, 11));
    // 0x49a9dc: 0x52e02  srl         $a1, $a1, 24
    ctx->pc = 0x49a9dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 24));
    // 0x49a9e0: 0xe93024  and         $a2, $a3, $t1
    ctx->pc = 0x49a9e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & GPR_U64(ctx, 9));
    // 0x49a9e4: 0x1cb8024  and         $s0, $t6, $t3
    ctx->pc = 0x49a9e4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 14) & GPR_U64(ctx, 11));
    // 0x49a9e8: 0x1c98824  and         $s1, $t6, $t1
    ctx->pc = 0x49a9e8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 14) & GPR_U64(ctx, 9));
    // 0x49a9ec: 0x2c57823  subu        $t7, $s6, $a1
    ctx->pc = 0x49a9ecu;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 5)));
    // 0x49a9f0: 0x31cdff00  andi        $t5, $t6, 0xFF00
    ctx->pc = 0x49a9f0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)65280);
    // 0x49a9f4: 0x108602  srl         $s0, $s0, 24
    ctx->pc = 0x49a9f4u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 24));
    // 0x49a9f8: 0x63402  srl         $a2, $a2, 16
    ctx->pc = 0x49a9f8u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 16));
    // 0x49a9fc: 0x118c02  srl         $s1, $s1, 16
    ctx->pc = 0x49a9fcu;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 17), 16));
    // 0x49aa00: 0x30e4ff00  andi        $a0, $a3, 0xFF00
    ctx->pc = 0x49aa00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65280);
    // 0x49aa04: 0x20f8018  mult        $s0, $s0, $t7
    ctx->pc = 0x49aa04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x49aa08: 0xc53018  mult        $a2, $a2, $a1
    ctx->pc = 0x49aa08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x49aa0c: 0x42202  srl         $a0, $a0, 8
    ctx->pc = 0x49aa0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x49aa10: 0xd6a02  srl         $t5, $t5, 8
    ctx->pc = 0x49aa10u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 13), 8));
    // 0x49aa14: 0x22f8818  mult        $s1, $s1, $t7
    ctx->pc = 0x49aa14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x49aa18: 0xa51018  mult        $v0, $a1, $a1
    ctx->pc = 0x49aa18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x49aa1c: 0x30e300ff  andi        $v1, $a3, 0xFF
    ctx->pc = 0x49aa1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x49aa20: 0x31ce00ff  andi        $t6, $t6, 0xFF
    ctx->pc = 0x49aa20u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)255);
    // 0x49aa24: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x49aa24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x49aa28: 0x1af6818  mult        $t5, $t5, $t7
    ctx->pc = 0x49aa28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x49aa2c: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x49aa2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x49aa30: 0x1cf7018  mult        $t6, $t6, $t7
    ctx->pc = 0x49aa30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x49aa34: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x49aa34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x49aa38: 0xd13021  addu        $a2, $a2, $s1
    ctx->pc = 0x49aa38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x49aa3c: 0x8d2021  addu        $a0, $a0, $t5
    ctx->pc = 0x49aa3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
    // 0x49aa40: 0x30427f80  andi        $v0, $v0, 0x7F80
    ctx->pc = 0x49aa40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32640);
    // 0x49aa44: 0x30c67f80  andi        $a2, $a2, 0x7F80
    ctx->pc = 0x49aa44u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32640);
    // 0x49aa48: 0x21440  sll         $v0, $v0, 17
    ctx->pc = 0x49aa48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 17));
    // 0x49aa4c: 0x6e1821  addu        $v1, $v1, $t6
    ctx->pc = 0x49aa4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
    // 0x49aa50: 0x63240  sll         $a2, $a2, 9
    ctx->pc = 0x49aa50u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 9));
    // 0x49aa54: 0x30847f80  andi        $a0, $a0, 0x7F80
    ctx->pc = 0x49aa54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32640);
    // 0x49aa58: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x49aa58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x49aa5c: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x49aa5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x49aa60: 0x30637f80  andi        $v1, $v1, 0x7F80
    ctx->pc = 0x49aa60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32640);
    // 0x49aa64: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x49aa64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x49aa68: 0x319c2  srl         $v1, $v1, 7
    ctx->pc = 0x49aa68u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 7));
    // 0x49aa6c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x49aa6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x49aa70: 0xaf020000  sw          $v0, 0x0($t8)
    ctx->pc = 0x49aa70u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 2));
label_49aa74:
    // 0x49aa74: 0x93220000  lbu         $v0, 0x0($t9)
    ctx->pc = 0x49aa74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x49aa78: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x49aa78u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x49aa7c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x49aa7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x49aa80: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x49aa80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x49aa84: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x49aa84u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x49aa88: 0x2e7182b  sltu        $v1, $s7, $a3
    ctx->pc = 0x49aa88u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x49aa8c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x49AA8Cu;
    {
        const bool branch_taken_0x49aa8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x49AA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49AA8Cu;
        // 0x49aa90: 0x27180004  addiu       $t8, $t8, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49aa8c) {
            ctx->pc = 0x49AAA0u;
            goto label_49aaa0;
        }
    }
    ctx->pc = 0x49AA94u;
    // 0x49aa94: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x49AA94u;
    {
        const bool branch_taken_0x49aa94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49AA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49AA94u;
        // 0x49aa98: 0xaf070000  sw          $a3, 0x0($t8) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49aa94) {
            ctx->pc = 0x49AB40u;
            goto label_49ab40;
        }
    }
    ctx->pc = 0x49AA9Cu;
    // 0x49aa9c: 0x0  nop
    ctx->pc = 0x49aa9cu;
    // NOP
label_49aaa0:
    // 0x49aaa0: 0x8f0e0000  lw          $t6, 0x0($t8)
    ctx->pc = 0x49aaa0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x49aaa4: 0xeb2824  and         $a1, $a3, $t3
    ctx->pc = 0x49aaa4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & GPR_U64(ctx, 11));
    // 0x49aaa8: 0x52e02  srl         $a1, $a1, 24
    ctx->pc = 0x49aaa8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 24));
    // 0x49aaac: 0xe93024  and         $a2, $a3, $t1
    ctx->pc = 0x49aaacu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & GPR_U64(ctx, 9));
    // 0x49aab0: 0x1cb8024  and         $s0, $t6, $t3
    ctx->pc = 0x49aab0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 14) & GPR_U64(ctx, 11));
    // 0x49aab4: 0x1c98824  and         $s1, $t6, $t1
    ctx->pc = 0x49aab4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 14) & GPR_U64(ctx, 9));
    // 0x49aab8: 0x2c57823  subu        $t7, $s6, $a1
    ctx->pc = 0x49aab8u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 5)));
    // 0x49aabc: 0x31cdff00  andi        $t5, $t6, 0xFF00
    ctx->pc = 0x49aabcu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)65280);
    // 0x49aac0: 0x108602  srl         $s0, $s0, 24
    ctx->pc = 0x49aac0u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 24));
    // 0x49aac4: 0x63402  srl         $a2, $a2, 16
    ctx->pc = 0x49aac4u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 16));
    // 0x49aac8: 0x118c02  srl         $s1, $s1, 16
    ctx->pc = 0x49aac8u;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 17), 16));
    // 0x49aacc: 0x30e4ff00  andi        $a0, $a3, 0xFF00
    ctx->pc = 0x49aaccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65280);
    // 0x49aad0: 0x20f8018  mult        $s0, $s0, $t7
    ctx->pc = 0x49aad0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x49aad4: 0xc53018  mult        $a2, $a2, $a1
    ctx->pc = 0x49aad4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x49aad8: 0x42202  srl         $a0, $a0, 8
    ctx->pc = 0x49aad8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x49aadc: 0xd6a02  srl         $t5, $t5, 8
    ctx->pc = 0x49aadcu;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 13), 8));
    // 0x49aae0: 0x22f8818  mult        $s1, $s1, $t7
    ctx->pc = 0x49aae0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x49aae4: 0xa51018  mult        $v0, $a1, $a1
    ctx->pc = 0x49aae4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x49aae8: 0x30e300ff  andi        $v1, $a3, 0xFF
    ctx->pc = 0x49aae8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x49aaec: 0x31ce00ff  andi        $t6, $t6, 0xFF
    ctx->pc = 0x49aaecu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)255);
    // 0x49aaf0: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x49aaf0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x49aaf4: 0x1af6818  mult        $t5, $t5, $t7
    ctx->pc = 0x49aaf4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x49aaf8: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x49aaf8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x49aafc: 0x1cf7018  mult        $t6, $t6, $t7
    ctx->pc = 0x49aafcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x49ab00: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x49ab00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x49ab04: 0xd13021  addu        $a2, $a2, $s1
    ctx->pc = 0x49ab04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x49ab08: 0x8d2021  addu        $a0, $a0, $t5
    ctx->pc = 0x49ab08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
    // 0x49ab0c: 0x30427f80  andi        $v0, $v0, 0x7F80
    ctx->pc = 0x49ab0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32640);
    // 0x49ab10: 0x30c67f80  andi        $a2, $a2, 0x7F80
    ctx->pc = 0x49ab10u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32640);
    // 0x49ab14: 0x21440  sll         $v0, $v0, 17
    ctx->pc = 0x49ab14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 17));
    // 0x49ab18: 0x6e1821  addu        $v1, $v1, $t6
    ctx->pc = 0x49ab18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
    // 0x49ab1c: 0x63240  sll         $a2, $a2, 9
    ctx->pc = 0x49ab1cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 9));
    // 0x49ab20: 0x30847f80  andi        $a0, $a0, 0x7F80
    ctx->pc = 0x49ab20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32640);
    // 0x49ab24: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x49ab24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x49ab28: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x49ab28u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x49ab2c: 0x30637f80  andi        $v1, $v1, 0x7F80
    ctx->pc = 0x49ab2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32640);
    // 0x49ab30: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x49ab30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x49ab34: 0x319c2  srl         $v1, $v1, 7
    ctx->pc = 0x49ab34u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 7));
    // 0x49ab38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x49ab38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x49ab3c: 0xaf020000  sw          $v0, 0x0($t8)
    ctx->pc = 0x49ab3cu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 2));
label_49ab40:
    // 0x49ab40: 0x2652fffe  addiu       $s2, $s2, -0x2
    ctx->pc = 0x49ab40u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967294));
    // 0x49ab44: 0x27180004  addiu       $t8, $t8, 0x4
    ctx->pc = 0x49ab44u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 4));
    // 0x49ab48: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x49ab48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x49ab4c: 0x1040ff98  beqz        $v0, . + 4 + (-0x68 << 2)
    ctx->pc = 0x49AB4Cu;
    {
        const bool branch_taken_0x49ab4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49AB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49AB4Cu;
        // 0x49ab50: 0x27390001  addiu       $t9, $t9, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ab4c) {
            ctx->pc = 0x49A9B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49a9b0;
        }
    }
    ctx->pc = 0x49AB54u;
label_49ab54:
    // 0x49ab54: 0x1a400037  blez        $s2, . + 4 + (0x37 << 2)
    ctx->pc = 0x49AB54u;
    {
        const bool branch_taken_0x49ab54 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x49AB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49AB54u;
        // 0x49ab58: 0x8fa30030  lw          $v1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ab54) {
            ctx->pc = 0x49AC34u;
            goto label_49ac34;
        }
    }
    ctx->pc = 0x49AB5Cu;
    // 0x49ab5c: 0x93220000  lbu         $v0, 0x0($t9)
    ctx->pc = 0x49ab5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x49ab60: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x49ab60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x49ab64: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x49ab64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x49ab68: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x49ab68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x49ab6c: 0x8c4c0000  lw          $t4, 0x0($v0)
    ctx->pc = 0x49ab6cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x49ab70: 0x3c027f00  lui         $v0, 0x7F00
    ctx->pc = 0x49ab70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32512 << 16));
    // 0x49ab74: 0x4c182b  sltu        $v1, $v0, $t4
    ctx->pc = 0x49ab74u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x49ab78: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x49AB78u;
    {
        const bool branch_taken_0x49ab78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x49ab78) {
            ctx->pc = 0x49AB7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49AB78u;
            // 0x49ab7c: 0x8f080000  lw          $t0, 0x0($t8) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49AB88u;
            goto label_49ab88;
        }
    }
    ctx->pc = 0x49AB80u;
    // 0x49ab80: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x49AB80u;
    {
        const bool branch_taken_0x49ab80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49AB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49AB80u;
        // 0x49ab84: 0xaf0c0000  sw          $t4, 0x0($t8) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ab80) {
            ctx->pc = 0x49AC2Cu;
            goto label_49ac2c;
        }
    }
    ctx->pc = 0x49AB88u;
label_49ab88:
    // 0x49ab88: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x49ab88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x49ab8c: 0x1833024  and         $a2, $t4, $v1
    ctx->pc = 0x49ab8cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 12) & GPR_U64(ctx, 3));
    // 0x49ab90: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x49ab90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x49ab94: 0x63602  srl         $a2, $a2, 24
    ctx->pc = 0x49ab94u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 24));
    // 0x49ab98: 0x1034824  and         $t1, $t0, $v1
    ctx->pc = 0x49ab98u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x49ab9c: 0x11e5024  and         $t2, $t0, $fp
    ctx->pc = 0x49ab9cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 8) & GPR_U64(ctx, 30));
    // 0x49aba0: 0x19e2024  and         $a0, $t4, $fp
    ctx->pc = 0x49aba0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 12) & GPR_U64(ctx, 30));
    // 0x49aba4: 0xa65823  subu        $t3, $a1, $a2
    ctx->pc = 0x49aba4u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x49aba8: 0x3107ff00  andi        $a3, $t0, 0xFF00
    ctx->pc = 0x49aba8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65280);
    // 0x49abac: 0x94e02  srl         $t1, $t1, 24
    ctx->pc = 0x49abacu;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 9), 24));
    // 0x49abb0: 0x42402  srl         $a0, $a0, 16
    ctx->pc = 0x49abb0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x49abb4: 0xa5402  srl         $t2, $t2, 16
    ctx->pc = 0x49abb4u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x49abb8: 0x3183ff00  andi        $v1, $t4, 0xFF00
    ctx->pc = 0x49abb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)65280);
    // 0x49abbc: 0x12b4818  mult        $t1, $t1, $t3
    ctx->pc = 0x49abbcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x49abc0: 0x862018  mult        $a0, $a0, $a2
    ctx->pc = 0x49abc0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x49abc4: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x49abc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x49abc8: 0x73a02  srl         $a3, $a3, 8
    ctx->pc = 0x49abc8u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 8));
    // 0x49abcc: 0x14b5018  mult        $t2, $t2, $t3
    ctx->pc = 0x49abccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x49abd0: 0xc61018  mult        $v0, $a2, $a2
    ctx->pc = 0x49abd0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x49abd4: 0x318500ff  andi        $a1, $t4, 0xFF
    ctx->pc = 0x49abd4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)255);
    // 0x49abd8: 0x310800ff  andi        $t0, $t0, 0xFF
    ctx->pc = 0x49abd8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x49abdc: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x49abdcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x49abe0: 0xeb3818  mult        $a3, $a3, $t3
    ctx->pc = 0x49abe0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x49abe4: 0xa62818  mult        $a1, $a1, $a2
    ctx->pc = 0x49abe4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x49abe8: 0x10b4018  mult        $t0, $t0, $t3
    ctx->pc = 0x49abe8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x49abec: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x49abecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x49abf0: 0x8a2021  addu        $a0, $a0, $t2
    ctx->pc = 0x49abf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x49abf4: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x49abf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x49abf8: 0x30427f80  andi        $v0, $v0, 0x7F80
    ctx->pc = 0x49abf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32640);
    // 0x49abfc: 0x30847f80  andi        $a0, $a0, 0x7F80
    ctx->pc = 0x49abfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32640);
    // 0x49ac00: 0x21440  sll         $v0, $v0, 17
    ctx->pc = 0x49ac00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 17));
    // 0x49ac04: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x49ac04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x49ac08: 0x42240  sll         $a0, $a0, 9
    ctx->pc = 0x49ac08u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 9));
    // 0x49ac0c: 0x30637f80  andi        $v1, $v1, 0x7F80
    ctx->pc = 0x49ac0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32640);
    // 0x49ac10: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x49ac10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x49ac14: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x49ac14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x49ac18: 0x30a57f80  andi        $a1, $a1, 0x7F80
    ctx->pc = 0x49ac18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32640);
    // 0x49ac1c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x49ac1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x49ac20: 0x529c2  srl         $a1, $a1, 7
    ctx->pc = 0x49ac20u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 7));
    // 0x49ac24: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x49ac24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x49ac28: 0xaf020000  sw          $v0, 0x0($t8)
    ctx->pc = 0x49ac28u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 2));
label_49ac2c:
    // 0x49ac2c: 0x27180004  addiu       $t8, $t8, 0x4
    ctx->pc = 0x49ac2cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 4));
    // 0x49ac30: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x49ac30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_49ac34:
    // 0x49ac34: 0x314c021  addu        $t8, $t8, $s4
    ctx->pc = 0x49ac34u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 20)));
    // 0x49ac38: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x49ac38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x49ac3c: 0x323c821  addu        $t9, $t9, $v1
    ctx->pc = 0x49ac3cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 3)));
    // 0x49ac40: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x49ac40u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49ac44: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x49ac44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x49ac48: 0x1460ff15  bnez        $v1, . + 4 + (-0xEB << 2)
    ctx->pc = 0x49AC48u;
    {
        const bool branch_taken_0x49ac48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x49AC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49AC48u;
        // 0x49ac4c: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ac48) {
            ctx->pc = 0x49A8A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49a8a0;
        }
    }
    ctx->pc = 0x49AC50u;
label_49ac50:
    // 0x49ac50: 0x100002b7  b           . + 4 + (0x2B7 << 2)
    ctx->pc = 0x49AC50u;
    {
        const bool branch_taken_0x49ac50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49AC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49AC50u;
        // 0x49ac54: 0x8fa50038  lw          $a1, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ac50) {
            ctx->pc = 0x49B730u;
            goto label_49b730;
        }
    }
    ctx->pc = 0x49AC58u;
label_49ac58:
    // 0x49ac58: 0x8d260018  lw          $a2, 0x18($t1)
    ctx->pc = 0x49ac58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 24)));
    // 0x49ac5c: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x49ac5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x49ac60: 0x8fa70024  lw          $a3, 0x24($sp)
    ctx->pc = 0x49ac60u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x49ac64: 0x8fa80010  lw          $t0, 0x10($sp)
    ctx->pc = 0x49ac64u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49ac68: 0xc23018  mult        $a2, $a2, $v0
    ctx->pc = 0x49ac68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x49ac6c: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x49ac6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x49ac70: 0x1473818  mult        $a3, $t2, $a3
    ctx->pc = 0x49ac70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x49ac74: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x49ac74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x49ac78: 0x2084018  mult        $t0, $s0, $t0
    ctx->pc = 0x49ac78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x49ac7c: 0x2252818  mult        $a1, $s1, $a1
    ctx->pc = 0x49ac7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x49ac80: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x49ac80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x49ac84: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x49ac84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x49ac88: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x49ac88u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49ac8c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x49ac8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x49ac90: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x49ac90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x49ac94: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x49ac94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x49ac98: 0x48c821  addu        $t9, $v0, $t0
    ctx->pc = 0x49ac98u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x49ac9c: 0x659821  addu        $s3, $v1, $a1
    ctx->pc = 0x49ac9cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x49aca0: 0x112002a7  beqz        $t1, . + 4 + (0x2A7 << 2)
    ctx->pc = 0x49ACA0u;
    {
        const bool branch_taken_0x49aca0 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x49ACA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49ACA0u;
        // 0x49aca4: 0xafa4001c  sw          $a0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49aca0) {
            ctx->pc = 0x49B740u;
            goto label_49b740;
        }
    }
    ctx->pc = 0x49ACA8u;
    // 0x49aca8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x49aca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x49acac: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x49acacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x49acb0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x49acb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x49acb4: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x49acb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x49acb8: 0x3a040  sll         $s4, $v1, 1
    ctx->pc = 0x49acb8u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x49acbc: 0x0  nop
    ctx->pc = 0x49acbcu;
    // NOP
label_49acc0:
    // 0x49acc0: 0x8fb20018  lw          $s2, 0x18($sp)
    ctx->pc = 0x49acc0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x49acc4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x49acc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49acc8: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x49ACC8u;
    {
        const bool branch_taken_0x49acc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49ACCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49ACC8u;
        // 0x49accc: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49acc8) {
            ctx->pc = 0x49ADD4u;
            goto label_49add4;
        }
    }
    ctx->pc = 0x49ACD0u;
    // 0x49acd0: 0x3c1e7f00  lui         $fp, 0x7F00
    ctx->pc = 0x49acd0u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)32512 << 16));
    // 0x49acd4: 0x3c1700f8  lui         $s7, 0xF8
    ctx->pc = 0x49acd4u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)248 << 16));
    // 0x49acd8: 0x24160080  addiu       $s6, $zero, 0x80
    ctx->pc = 0x49acd8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x49acdc: 0x3c1500ff  lui         $s5, 0xFF
    ctx->pc = 0x49acdcu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)255 << 16));
label_49ace0:
    // 0x49ace0: 0x8e780000  lw          $t8, 0x0($s3)
    ctx->pc = 0x49ace0u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x49ace4: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x49ace4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x49ace8: 0x3057824  and         $t7, $t8, $a1
    ctx->pc = 0x49ace8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 24) & GPR_U64(ctx, 5));
    // 0x49acec: 0x3cf102b  sltu        $v0, $fp, $t7
    ctx->pc = 0x49acecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
    // 0x49acf0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x49ACF0u;
    {
        const bool branch_taken_0x49acf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49ACF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49ACF0u;
        // 0x49acf4: 0x3304f800  andi        $a0, $t8, 0xF800 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)63488);
        ctx->in_delay_slot = false;
        if (branch_taken_0x49acf0) {
            ctx->pc = 0x49AD20u;
            goto label_49ad20;
        }
    }
    ctx->pc = 0x49ACF8u;
    // 0x49acf8: 0x3171824  and         $v1, $t8, $s7
    ctx->pc = 0x49acf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 24) & GPR_U64(ctx, 23));
    // 0x49acfc: 0x42182  srl         $a0, $a0, 6
    ctx->pc = 0x49acfcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 6));
    // 0x49ad00: 0x31a42  srl         $v1, $v1, 9
    ctx->pc = 0x49ad00u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 9));
    // 0x49ad04: 0x34848000  ori         $a0, $a0, 0x8000
    ctx->pc = 0x49ad04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x49ad08: 0x330200f8  andi        $v0, $t8, 0xF8
    ctx->pc = 0x49ad08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)248);
    // 0x49ad0c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x49ad0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x49ad10: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x49ad10u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x49ad14: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x49AD14u;
    {
        const bool branch_taken_0x49ad14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49AD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49AD14u;
        // 0x49ad18: 0x621825  or          $v1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ad14) {
            ctx->pc = 0x49ADBCu;
            goto label_49adbc;
        }
    }
    ctx->pc = 0x49AD1Cu;
    // 0x49ad1c: 0x0  nop
    ctx->pc = 0x49ad1cu;
    // NOP
label_49ad20:
    // 0x49ad20: 0x972c0000  lhu         $t4, 0x0($t9)
    ctx->pc = 0x49ad20u;
    SET_GPR_ZE32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x49ad24: 0xf7e02  srl         $t7, $t7, 24
    ctx->pc = 0x49ad24u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 15), 24));
    // 0x49ad28: 0x2cf8823  subu        $s1, $s6, $t7
    ctx->pc = 0x49ad28u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 15)));
    // 0x49ad2c: 0x3156824  and         $t5, $t8, $s5
    ctx->pc = 0x49ad2cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 24) & GPR_U64(ctx, 21));
    // 0x49ad30: 0x318b8000  andi        $t3, $t4, 0x8000
    ctx->pc = 0x49ad30u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)32768);
    // 0x49ad34: 0x31907c00  andi        $s0, $t4, 0x7C00
    ctx->pc = 0x49ad34u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)31744);
    // 0x49ad38: 0xb5a02  srl         $t3, $t3, 8
    ctx->pc = 0x49ad38u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 11), 8));
    // 0x49ad3c: 0x318e03e0  andi        $t6, $t4, 0x3E0
    ctx->pc = 0x49ad3cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)992);
    // 0x49ad40: 0x3304ff00  andi        $a0, $t8, 0xFF00
    ctx->pc = 0x49ad40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)65280);
    // 0x49ad44: 0x1715818  mult        $t3, $t3, $s1
    ctx->pc = 0x49ad44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x49ad48: 0x1ef1818  mult        $v1, $t7, $t7
    ctx->pc = 0x49ad48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x49ad4c: 0xd6c02  srl         $t5, $t5, 16
    ctx->pc = 0x49ad4cu;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 13), 16));
    // 0x49ad50: 0x1081c2  srl         $s0, $s0, 7
    ctx->pc = 0x49ad50u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 7));
    // 0x49ad54: 0x42202  srl         $a0, $a0, 8
    ctx->pc = 0x49ad54u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x49ad58: 0xe7082  srl         $t6, $t6, 2
    ctx->pc = 0x49ad58u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 14), 2));
    // 0x49ad5c: 0x318c001f  andi        $t4, $t4, 0x1F
    ctx->pc = 0x49ad5cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)31);
    // 0x49ad60: 0x1af6818  mult        $t5, $t5, $t7
    ctx->pc = 0x49ad60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x49ad64: 0x2118018  mult        $s0, $s0, $s1
    ctx->pc = 0x49ad64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x49ad68: 0x330200ff  andi        $v0, $t8, 0xFF
    ctx->pc = 0x49ad68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)255);
    // 0x49ad6c: 0xc60c0  sll         $t4, $t4, 3
    ctx->pc = 0x49ad6cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x49ad70: 0x8f2018  mult        $a0, $a0, $t7
    ctx->pc = 0x49ad70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x49ad74: 0x1d17018  mult        $t6, $t6, $s1
    ctx->pc = 0x49ad74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x49ad78: 0x256b2000  addiu       $t3, $t3, 0x2000
    ctx->pc = 0x49ad78u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 8192));
    // 0x49ad7c: 0x4f1018  mult        $v0, $v0, $t7
    ctx->pc = 0x49ad7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x49ad80: 0x1916018  mult        $t4, $t4, $s1
    ctx->pc = 0x49ad80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x49ad84: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x49ad84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x49ad88: 0x1b06821  addu        $t5, $t5, $s0
    ctx->pc = 0x49ad88u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 16)));
    // 0x49ad8c: 0x8e2021  addu        $a0, $a0, $t6
    ctx->pc = 0x49ad8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 14)));
    // 0x49ad90: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x49ad90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x49ad94: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x49ad94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x49ad98: 0x31ad7c00  andi        $t5, $t5, 0x7C00
    ctx->pc = 0x49ad98u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)31744);
    // 0x49ad9c: 0x4c1021  addu        $v0, $v0, $t4
    ctx->pc = 0x49ad9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x49ada0: 0x30847c00  andi        $a0, $a0, 0x7C00
    ctx->pc = 0x49ada0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31744);
    // 0x49ada4: 0x6d1821  addu        $v1, $v1, $t5
    ctx->pc = 0x49ada4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x49ada8: 0x42142  srl         $a0, $a0, 5
    ctx->pc = 0x49ada8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
    // 0x49adac: 0x30427c00  andi        $v0, $v0, 0x7C00
    ctx->pc = 0x49adacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31744);
    // 0x49adb0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x49adb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x49adb4: 0x21282  srl         $v0, $v0, 10
    ctx->pc = 0x49adb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 10));
    // 0x49adb8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x49adb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_49adbc:
    // 0x49adbc: 0xa7230000  sh          $v1, 0x0($t9)
    ctx->pc = 0x49adbcu;
    WRITE16(ADD32(GPR_U32(ctx, 25), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x49adc0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x49adc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49adc4: 0x27390002  addiu       $t9, $t9, 0x2
    ctx->pc = 0x49adc4u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 2));
    // 0x49adc8: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x49adc8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x49adcc: 0x1440ffc4  bnez        $v0, . + 4 + (-0x3C << 2)
    ctx->pc = 0x49ADCCu;
    {
        const bool branch_taken_0x49adcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49ADD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49ADCCu;
        // 0x49add0: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49adcc) {
            ctx->pc = 0x49ACE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49ace0;
        }
    }
    ctx->pc = 0x49ADD4u;
label_49add4:
    // 0x49add4: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x49add4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x49add8: 0x334c821  addu        $t9, $t9, $s4
    ctx->pc = 0x49add8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 20)));
    // 0x49addc: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x49addcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x49ade0: 0x2639821  addu        $s3, $s3, $v1
    ctx->pc = 0x49ade0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x49ade4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x49ade4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49ade8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x49ade8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x49adec: 0x1460ffb4  bnez        $v1, . + 4 + (-0x4C << 2)
    ctx->pc = 0x49ADECu;
    {
        const bool branch_taken_0x49adec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x49ADF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49ADECu;
        // 0x49adf0: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49adec) {
            ctx->pc = 0x49ACC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49acc0;
        }
    }
    ctx->pc = 0x49ADF4u;
    // 0x49adf4: 0x10000253  b           . + 4 + (0x253 << 2)
    ctx->pc = 0x49ADF4u;
    {
        const bool branch_taken_0x49adf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49ADF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49ADF4u;
        // 0x49adf8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49adf4) {
            ctx->pc = 0x49B744u;
            goto label_49b744;
        }
    }
    ctx->pc = 0x49ADFCu;
label_49adfc:
    // 0x49adfc: 0x8d260018  lw          $a2, 0x18($t1)
    ctx->pc = 0x49adfcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 24)));
    // 0x49ae00: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x49ae00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x49ae04: 0x8fa70024  lw          $a3, 0x24($sp)
    ctx->pc = 0x49ae04u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x49ae08: 0x8fa80010  lw          $t0, 0x10($sp)
    ctx->pc = 0x49ae08u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49ae0c: 0xc23018  mult        $a2, $a2, $v0
    ctx->pc = 0x49ae0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x49ae10: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x49ae10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x49ae14: 0x1473818  mult        $a3, $t2, $a3
    ctx->pc = 0x49ae14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x49ae18: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x49ae18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x49ae1c: 0x2084018  mult        $t0, $s0, $t0
    ctx->pc = 0x49ae1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x49ae20: 0x2252818  mult        $a1, $s1, $a1
    ctx->pc = 0x49ae20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x49ae24: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x49ae24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x49ae28: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x49ae28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x49ae2c: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x49ae2cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49ae30: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x49ae30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x49ae34: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x49ae34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x49ae38: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x49ae38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x49ae3c: 0x484021  addu        $t0, $v0, $t0
    ctx->pc = 0x49ae3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x49ae40: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x49ae40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x49ae44: 0x1120023e  beqz        $t1, . + 4 + (0x23E << 2)
    ctx->pc = 0x49AE44u;
    {
        const bool branch_taken_0x49ae44 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x49AE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49AE44u;
        // 0x49ae48: 0xafa4001c  sw          $a0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ae44) {
            ctx->pc = 0x49B740u;
            goto label_49b740;
        }
    }
    ctx->pc = 0x49AE4Cu;
    // 0x49ae4c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x49ae4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x49ae50: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x49ae50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x49ae54: 0x23040  sll         $a2, $v0, 1
    ctx->pc = 0x49ae54u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x49ae58: 0x3a040  sll         $s4, $v1, 1
    ctx->pc = 0x49ae58u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x49ae5c: 0x0  nop
    ctx->pc = 0x49ae5cu;
    // NOP
label_49ae60:
    // 0x49ae60: 0x8fb20018  lw          $s2, 0x18($sp)
    ctx->pc = 0x49ae60u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x49ae64: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x49ae64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49ae68: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x49AE68u;
    {
        const bool branch_taken_0x49ae68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49AE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49AE68u;
        // 0x49ae6c: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ae68) {
            ctx->pc = 0x49AE94u;
            goto label_49ae94;
        }
    }
    ctx->pc = 0x49AE70u;
label_49ae70:
    // 0x49ae70: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x49ae70u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x49ae74: 0x30628000  andi        $v0, $v1, 0x8000
    ctx->pc = 0x49ae74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x49ae78: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x49AE78u;
    {
        const bool branch_taken_0x49ae78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x49ae78) {
            ctx->pc = 0x49AE7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49AE78u;
            // 0x49ae7c: 0xa5030000  sh          $v1, 0x0($t0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49AE80u;
            goto label_49ae80;
        }
    }
    ctx->pc = 0x49AE80u;
label_49ae80:
    // 0x49ae80: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x49ae80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49ae84: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x49ae84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x49ae88: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x49ae88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x49ae8c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x49AE8Cu;
    {
        const bool branch_taken_0x49ae8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49AE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49AE8Cu;
        // 0x49ae90: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ae8c) {
            ctx->pc = 0x49AE70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49ae70;
        }
    }
    ctx->pc = 0x49AE94u;
label_49ae94:
    // 0x49ae94: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x49ae94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x49ae98: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x49ae98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x49ae9c: 0x1144021  addu        $t0, $t0, $s4
    ctx->pc = 0x49ae9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 20)));
    // 0x49aea0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x49aea0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49aea4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x49aea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x49aea8: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x49AEA8u;
    {
        const bool branch_taken_0x49aea8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x49AEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49AEA8u;
        // 0x49aeac: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49aea8) {
            ctx->pc = 0x49AE60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49ae60;
        }
    }
    ctx->pc = 0x49AEB0u;
    // 0x49aeb0: 0x10000224  b           . + 4 + (0x224 << 2)
    ctx->pc = 0x49AEB0u;
    {
        const bool branch_taken_0x49aeb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49AEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49AEB0u;
        // 0x49aeb4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49aeb0) {
            ctx->pc = 0x49B744u;
            goto label_49b744;
        }
    }
    ctx->pc = 0x49AEB8u;
label_49aeb8:
    // 0x49aeb8: 0x92a20022  lbu         $v0, 0x22($s5)
    ctx->pc = 0x49aeb8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 34)));
    // 0x49aebc: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x49aebcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x49aec0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x49aec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x49aec4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x49AEC4u;
    {
        const bool branch_taken_0x49aec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49AEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49AEC4u;
        // 0x49aec8: 0xafa2003c  sw          $v0, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49aec4) {
            ctx->pc = 0x49AEDCu;
            goto label_49aedc;
        }
    }
    ctx->pc = 0x49AECCu;
    // 0x49aecc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x49aeccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49aed0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x49aed0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49aed4: 0xc121902  jal         func_486408
    ctx->pc = 0x49AED4u;
    SET_GPR_U32(ctx, 31, 0x49AEDCu);
    ctx->pc = 0x49AED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49AED4u;
    // 0x49aed8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x486408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x486408u, 0x49AED4u, 0x49AEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49AEDCu;
label_49aedc:
    // 0x49aedc: 0x8f868a58  lw          $a2, -0x75A8($gp)
    ctx->pc = 0x49aedcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937176)));
    // 0x49aee0: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x49aee0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x49aee4: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x49aee4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x49aee8: 0x8cc30018  lw          $v1, 0x18($a2)
    ctx->pc = 0x49aee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x49aeec: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x49aeecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49aef0: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x49aef0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x49aef4: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x49aef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x49aef8: 0x2042018  mult        $a0, $s0, $a0
    ctx->pc = 0x49aef8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x49aefc: 0x8ea50014  lw          $a1, 0x14($s5)
    ctx->pc = 0x49aefcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x49af00: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x49af00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x49af04: 0x14a70099  bne         $a1, $a3, . + 4 + (0x99 << 2)
    ctx->pc = 0x49AF04u;
    {
        const bool branch_taken_0x49af04 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 7));
        ctx->pc = 0x49AF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49AF04u;
        // 0x49af08: 0x44c821  addu        $t9, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49af04) {
            ctx->pc = 0x49B16Cu;
            goto label_49b16c;
        }
    }
    ctx->pc = 0x49AF0Cu;
    // 0x49af0c: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x49af0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x49af10: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x49af10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x49af14: 0x8ea50018  lw          $a1, 0x18($s5)
    ctx->pc = 0x49af14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x49af18: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x49af18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x49af1c: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x49af1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x49af20: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x49af20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x49af24: 0x2242018  mult        $a0, $s1, $a0
    ctx->pc = 0x49af24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x49af28: 0x92a20023  lbu         $v0, 0x23($s5)
    ctx->pc = 0x49af28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 35)));
    // 0x49af2c: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x49af2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x49af30: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x49af30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x49af34: 0x1446002b  bne         $v0, $a2, . + 4 + (0x2B << 2)
    ctx->pc = 0x49AF34u;
    {
        const bool branch_taken_0x49af34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x49AF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49AF34u;
        // 0x49af38: 0x649821  addu        $s3, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49af34) {
            ctx->pc = 0x49AFE4u;
            goto label_49afe4;
        }
    }
    ctx->pc = 0x49AF3Cu;
    // 0x49af3c: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x49af3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x49af40: 0x8ea50008  lw          $a1, 0x8($s5)
    ctx->pc = 0x49af40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x49af44: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x49af44u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49af48: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x49af48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x49af4c: 0x106001f7  beqz        $v1, . + 4 + (0x1F7 << 2)
    ctx->pc = 0x49AF4Cu;
    {
        const bool branch_taken_0x49af4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x49AF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49AF4Cu;
        // 0x49af50: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49af4c) {
            ctx->pc = 0x49B72Cu;
            goto label_49b72c;
        }
    }
    ctx->pc = 0x49AF54u;
    // 0x49af54: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x49af54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x49af58: 0x2a040  sll         $s4, $v0, 1
    ctx->pc = 0x49af58u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x49af5c: 0x0  nop
    ctx->pc = 0x49af5cu;
    // NOP
label_49af60:
    // 0x49af60: 0x8fb20018  lw          $s2, 0x18($sp)
    ctx->pc = 0x49af60u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x49af64: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x49af64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49af68: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x49AF68u;
    {
        const bool branch_taken_0x49af68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49AF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49AF68u;
        // 0x49af6c: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49af68) {
            ctx->pc = 0x49AFBCu;
            goto label_49afbc;
        }
    }
    ctx->pc = 0x49AF70u;
label_49af70:
    // 0x49af70: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x49af70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x49af74: 0x30430010  andi        $v1, $v0, 0x10
    ctx->pc = 0x49af74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x49af78: 0x30440008  andi        $a0, $v0, 0x8
    ctx->pc = 0x49af78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x49af7c: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x49af7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x49af80: 0x304200e7  andi        $v0, $v0, 0xE7
    ctx->pc = 0x49af80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)231);
    // 0x49af84: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x49af84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x49af88: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x49af88u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x49af8c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x49af8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x49af90: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x49af90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x49af94: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x49af94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x49af98: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x49af98u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x49af9c: 0x30438000  andi        $v1, $v0, 0x8000
    ctx->pc = 0x49af9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x49afa0: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x49AFA0u;
    {
        const bool branch_taken_0x49afa0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x49afa0) {
            ctx->pc = 0x49AFA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49AFA0u;
            // 0x49afa4: 0xa7220000  sh          $v0, 0x0($t9) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 25), 0), (uint16_t)GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49AFA8u;
            goto label_49afa8;
        }
    }
    ctx->pc = 0x49AFA8u;
label_49afa8:
    // 0x49afa8: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x49afa8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49afac: 0x27390002  addiu       $t9, $t9, 0x2
    ctx->pc = 0x49afacu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 2));
    // 0x49afb0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x49afb0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x49afb4: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x49AFB4u;
    {
        const bool branch_taken_0x49afb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49AFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49AFB4u;
        // 0x49afb8: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49afb4) {
            ctx->pc = 0x49AF70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49af70;
        }
    }
    ctx->pc = 0x49AFBCu;
label_49afbc:
    // 0x49afbc: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x49afbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x49afc0: 0x334c821  addu        $t9, $t9, $s4
    ctx->pc = 0x49afc0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 20)));
    // 0x49afc4: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x49afc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x49afc8: 0x2639821  addu        $s3, $s3, $v1
    ctx->pc = 0x49afc8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x49afcc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x49afccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49afd0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x49afd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x49afd4: 0x1460ffe2  bnez        $v1, . + 4 + (-0x1E << 2)
    ctx->pc = 0x49AFD4u;
    {
        const bool branch_taken_0x49afd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x49AFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49AFD4u;
        // 0x49afd8: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49afd4) {
            ctx->pc = 0x49AF60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49af60;
        }
    }
    ctx->pc = 0x49AFDCu;
    // 0x49afdc: 0x100001d4  b           . + 4 + (0x1D4 << 2)
    ctx->pc = 0x49AFDCu;
    {
        const bool branch_taken_0x49afdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49AFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49AFDCu;
        // 0x49afe0: 0x8fa5003c  lw          $a1, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49afdc) {
            ctx->pc = 0x49B730u;
            goto label_49b730;
        }
    }
    ctx->pc = 0x49AFE4u;
label_49afe4:
    // 0x49afe4: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x49afe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x49afe8: 0x8eb60008  lw          $s6, 0x8($s5)
    ctx->pc = 0x49afe8u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x49afec: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x49afecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49aff0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x49aff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x49aff4: 0x106001cd  beqz        $v1, . + 4 + (0x1CD << 2)
    ctx->pc = 0x49AFF4u;
    {
        const bool branch_taken_0x49aff4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x49AFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49AFF4u;
        // 0x49aff8: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49aff4) {
            ctx->pc = 0x49B72Cu;
            goto label_49b72c;
        }
    }
    ctx->pc = 0x49AFFCu;
    // 0x49affc: 0x8fa50034  lw          $a1, 0x34($sp)
    ctx->pc = 0x49affcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x49b000: 0x5a040  sll         $s4, $a1, 1
    ctx->pc = 0x49b000u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x49b004: 0x0  nop
    ctx->pc = 0x49b004u;
    // NOP
label_49b008:
    // 0x49b008: 0x8fb20018  lw          $s2, 0x18($sp)
    ctx->pc = 0x49b008u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x49b00c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x49b00cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49b010: 0x1040004c  beqz        $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x49B010u;
    {
        const bool branch_taken_0x49b010 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49B014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B010u;
        // 0x49b014: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b010) {
            ctx->pc = 0x49B144u;
            goto label_49b144;
        }
    }
    ctx->pc = 0x49B018u;
    // 0x49b018: 0x241e0080  addiu       $fp, $zero, 0x80
    ctx->pc = 0x49b018u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x49b01c: 0x3c1700ff  lui         $s7, 0xFF
    ctx->pc = 0x49b01cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)255 << 16));
label_49b020:
    // 0x49b020: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x49b020u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x49b024: 0x30430010  andi        $v1, $v0, 0x10
    ctx->pc = 0x49b024u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x49b028: 0x30440008  andi        $a0, $v0, 0x8
    ctx->pc = 0x49b028u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x49b02c: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x49b02cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x49b030: 0x304200e7  andi        $v0, $v0, 0xE7
    ctx->pc = 0x49b030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)231);
    // 0x49b034: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x49b034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x49b038: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x49b038u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x49b03c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x49b03cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x49b040: 0x3c037f00  lui         $v1, 0x7F00
    ctx->pc = 0x49b040u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32512 << 16));
    // 0x49b044: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x49b044u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x49b048: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x49b048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x49b04c: 0x8c580000  lw          $t8, 0x0($v0)
    ctx->pc = 0x49b04cu;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x49b050: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x49b050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x49b054: 0x3027824  and         $t7, $t8, $v0
    ctx->pc = 0x49b054u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 24) & GPR_U64(ctx, 2));
    // 0x49b058: 0x6f102b  sltu        $v0, $v1, $t7
    ctx->pc = 0x49b058u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
    // 0x49b05c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x49B05Cu;
    {
        const bool branch_taken_0x49b05c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49B060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B05Cu;
        // 0x49b060: 0x3304f800  andi        $a0, $t8, 0xF800 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)63488);
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b05c) {
            ctx->pc = 0x49B090u;
            goto label_49b090;
        }
    }
    ctx->pc = 0x49B064u;
    // 0x49b064: 0x3c0500f8  lui         $a1, 0xF8
    ctx->pc = 0x49b064u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)248 << 16));
    // 0x49b068: 0x3051824  and         $v1, $t8, $a1
    ctx->pc = 0x49b068u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 24) & GPR_U64(ctx, 5));
    // 0x49b06c: 0x42182  srl         $a0, $a0, 6
    ctx->pc = 0x49b06cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 6));
    // 0x49b070: 0x31a42  srl         $v1, $v1, 9
    ctx->pc = 0x49b070u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 9));
    // 0x49b074: 0x34848000  ori         $a0, $a0, 0x8000
    ctx->pc = 0x49b074u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x49b078: 0x330200f8  andi        $v0, $t8, 0xF8
    ctx->pc = 0x49b078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)248);
    // 0x49b07c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x49b07cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x49b080: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x49b080u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x49b084: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x49B084u;
    {
        const bool branch_taken_0x49b084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49B088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B084u;
        // 0x49b088: 0x621825  or          $v1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b084) {
            ctx->pc = 0x49B12Cu;
            goto label_49b12c;
        }
    }
    ctx->pc = 0x49B08Cu;
    // 0x49b08c: 0x0  nop
    ctx->pc = 0x49b08cu;
    // NOP
label_49b090:
    // 0x49b090: 0x972c0000  lhu         $t4, 0x0($t9)
    ctx->pc = 0x49b090u;
    SET_GPR_ZE32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x49b094: 0xf7e02  srl         $t7, $t7, 24
    ctx->pc = 0x49b094u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 15), 24));
    // 0x49b098: 0x3cf8823  subu        $s1, $fp, $t7
    ctx->pc = 0x49b098u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 15)));
    // 0x49b09c: 0x3176824  and         $t5, $t8, $s7
    ctx->pc = 0x49b09cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 24) & GPR_U64(ctx, 23));
    // 0x49b0a0: 0x318b8000  andi        $t3, $t4, 0x8000
    ctx->pc = 0x49b0a0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)32768);
    // 0x49b0a4: 0x31907c00  andi        $s0, $t4, 0x7C00
    ctx->pc = 0x49b0a4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)31744);
    // 0x49b0a8: 0xb5a02  srl         $t3, $t3, 8
    ctx->pc = 0x49b0a8u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 11), 8));
    // 0x49b0ac: 0x318e03e0  andi        $t6, $t4, 0x3E0
    ctx->pc = 0x49b0acu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)992);
    // 0x49b0b0: 0x3304ff00  andi        $a0, $t8, 0xFF00
    ctx->pc = 0x49b0b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)65280);
    // 0x49b0b4: 0x1715818  mult        $t3, $t3, $s1
    ctx->pc = 0x49b0b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x49b0b8: 0x1ef1818  mult        $v1, $t7, $t7
    ctx->pc = 0x49b0b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x49b0bc: 0xd6c02  srl         $t5, $t5, 16
    ctx->pc = 0x49b0bcu;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 13), 16));
    // 0x49b0c0: 0x1081c2  srl         $s0, $s0, 7
    ctx->pc = 0x49b0c0u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 7));
    // 0x49b0c4: 0x42202  srl         $a0, $a0, 8
    ctx->pc = 0x49b0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x49b0c8: 0xe7082  srl         $t6, $t6, 2
    ctx->pc = 0x49b0c8u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 14), 2));
    // 0x49b0cc: 0x318c001f  andi        $t4, $t4, 0x1F
    ctx->pc = 0x49b0ccu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)31);
    // 0x49b0d0: 0x1af6818  mult        $t5, $t5, $t7
    ctx->pc = 0x49b0d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x49b0d4: 0x2118018  mult        $s0, $s0, $s1
    ctx->pc = 0x49b0d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x49b0d8: 0x330200ff  andi        $v0, $t8, 0xFF
    ctx->pc = 0x49b0d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)255);
    // 0x49b0dc: 0xc60c0  sll         $t4, $t4, 3
    ctx->pc = 0x49b0dcu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x49b0e0: 0x8f2018  mult        $a0, $a0, $t7
    ctx->pc = 0x49b0e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x49b0e4: 0x1d17018  mult        $t6, $t6, $s1
    ctx->pc = 0x49b0e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x49b0e8: 0x256b2000  addiu       $t3, $t3, 0x2000
    ctx->pc = 0x49b0e8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 8192));
    // 0x49b0ec: 0x4f1018  mult        $v0, $v0, $t7
    ctx->pc = 0x49b0ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x49b0f0: 0x1916018  mult        $t4, $t4, $s1
    ctx->pc = 0x49b0f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x49b0f4: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x49b0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x49b0f8: 0x1b06821  addu        $t5, $t5, $s0
    ctx->pc = 0x49b0f8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 16)));
    // 0x49b0fc: 0x8e2021  addu        $a0, $a0, $t6
    ctx->pc = 0x49b0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 14)));
    // 0x49b100: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x49b100u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x49b104: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x49b104u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x49b108: 0x31ad7c00  andi        $t5, $t5, 0x7C00
    ctx->pc = 0x49b108u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)31744);
    // 0x49b10c: 0x4c1021  addu        $v0, $v0, $t4
    ctx->pc = 0x49b10cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x49b110: 0x30847c00  andi        $a0, $a0, 0x7C00
    ctx->pc = 0x49b110u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31744);
    // 0x49b114: 0x6d1821  addu        $v1, $v1, $t5
    ctx->pc = 0x49b114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x49b118: 0x42142  srl         $a0, $a0, 5
    ctx->pc = 0x49b118u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
    // 0x49b11c: 0x30427c00  andi        $v0, $v0, 0x7C00
    ctx->pc = 0x49b11cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31744);
    // 0x49b120: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x49b120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x49b124: 0x21282  srl         $v0, $v0, 10
    ctx->pc = 0x49b124u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 10));
    // 0x49b128: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x49b128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_49b12c:
    // 0x49b12c: 0xa7230000  sh          $v1, 0x0($t9)
    ctx->pc = 0x49b12cu;
    WRITE16(ADD32(GPR_U32(ctx, 25), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x49b130: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x49b130u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49b134: 0x27390002  addiu       $t9, $t9, 0x2
    ctx->pc = 0x49b134u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 2));
    // 0x49b138: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x49b138u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x49b13c: 0x1440ffb8  bnez        $v0, . + 4 + (-0x48 << 2)
    ctx->pc = 0x49B13Cu;
    {
        const bool branch_taken_0x49b13c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49B140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B13Cu;
        // 0x49b140: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b13c) {
            ctx->pc = 0x49B020u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49b020;
        }
    }
    ctx->pc = 0x49B144u;
label_49b144:
    // 0x49b144: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x49b144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x49b148: 0x334c821  addu        $t9, $t9, $s4
    ctx->pc = 0x49b148u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 20)));
    // 0x49b14c: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x49b14cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x49b150: 0x2639821  addu        $s3, $s3, $v1
    ctx->pc = 0x49b150u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x49b154: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x49b154u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49b158: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x49b158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x49b15c: 0x1460ffaa  bnez        $v1, . + 4 + (-0x56 << 2)
    ctx->pc = 0x49B15Cu;
    {
        const bool branch_taken_0x49b15c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x49B160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B15Cu;
        // 0x49b160: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b15c) {
            ctx->pc = 0x49B008u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49b008;
        }
    }
    ctx->pc = 0x49B164u;
    // 0x49b164: 0x10000172  b           . + 4 + (0x172 << 2)
    ctx->pc = 0x49B164u;
    {
        const bool branch_taken_0x49b164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49B168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B164u;
        // 0x49b168: 0x8fa5003c  lw          $a1, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b164) {
            ctx->pc = 0x49B730u;
            goto label_49b730;
        }
    }
    ctx->pc = 0x49B16Cu;
label_49b16c:
    // 0x49b16c: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x49b16cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x49b170: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x49b170u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x49b174: 0x8ea50018  lw          $a1, 0x18($s5)
    ctx->pc = 0x49b174u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x49b178: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x49b178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x49b17c: 0xa32818  mult        $a1, $a1, $v1
    ctx->pc = 0x49b17cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x49b180: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x49b180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x49b184: 0x92a30023  lbu         $v1, 0x23($s5)
    ctx->pc = 0x49b184u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 35)));
    // 0x49b188: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x49b188u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x49b18c: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x49b18cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x49b190: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x49b190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x49b194: 0x14660049  bne         $v1, $a2, . + 4 + (0x49 << 2)
    ctx->pc = 0x49B194u;
    {
        const bool branch_taken_0x49b194 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x49B198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B194u;
        // 0x49b198: 0x829821  addu        $s3, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b194) {
            ctx->pc = 0x49B2BCu;
            goto label_49b2bc;
        }
    }
    ctx->pc = 0x49B19Cu;
    // 0x49b19c: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x49b19cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x49b1a0: 0x8ea40008  lw          $a0, 0x8($s5)
    ctx->pc = 0x49b1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x49b1a4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x49b1a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49b1a8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x49b1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x49b1ac: 0x1060015f  beqz        $v1, . + 4 + (0x15F << 2)
    ctx->pc = 0x49B1ACu;
    {
        const bool branch_taken_0x49b1ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x49B1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B1ACu;
        // 0x49b1b0: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b1ac) {
            ctx->pc = 0x49B72Cu;
            goto label_49b72c;
        }
    }
    ctx->pc = 0x49B1B4u;
    // 0x49b1b4: 0x0  nop
    ctx->pc = 0x49b1b4u;
    // NOP
label_49b1b8:
    // 0x49b1b8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x49b1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x49b1bc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x49b1bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x49b1c0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x49B1C0u;
    {
        const bool branch_taken_0x49b1c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49B1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B1C0u;
        // 0x49b1c4: 0x8fb20018  lw          $s2, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b1c0) {
            ctx->pc = 0x49B1F4u;
            goto label_49b1f4;
        }
    }
    ctx->pc = 0x49B1C8u;
    // 0x49b1c8: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x49b1c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x49b1cc: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x49b1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x49b1d0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x49b1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x49b1d4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x49b1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x49b1d8: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x49b1d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x49b1dc: 0x30438000  andi        $v1, $v0, 0x8000
    ctx->pc = 0x49b1dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x49b1e0: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x49B1E0u;
    {
        const bool branch_taken_0x49b1e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x49b1e0) {
            ctx->pc = 0x49B1E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49B1E0u;
            // 0x49b1e4: 0xa7220000  sh          $v0, 0x0($t9) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 25), 0), (uint16_t)GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49B1E8u;
            goto label_49b1e8;
        }
    }
    ctx->pc = 0x49B1E8u;
label_49b1e8:
    // 0x49b1e8: 0x27390002  addiu       $t9, $t9, 0x2
    ctx->pc = 0x49b1e8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 2));
    // 0x49b1ec: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x49b1ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x49b1f0: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x49b1f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_49b1f4:
    // 0x49b1f4: 0x8fa50034  lw          $a1, 0x34($sp)
    ctx->pc = 0x49b1f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x49b1f8: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x49b1f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x49b1fc: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x49B1FCu;
    {
        const bool branch_taken_0x49b1fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49B200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B1FCu;
        // 0x49b200: 0x5a040  sll         $s4, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b1fc) {
            ctx->pc = 0x49B264u;
            goto label_49b264;
        }
    }
    ctx->pc = 0x49B204u;
    // 0x49b204: 0x0  nop
    ctx->pc = 0x49b204u;
    // NOP
label_49b208:
    // 0x49b208: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x49b208u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x49b20c: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x49b20cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x49b210: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x49b210u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x49b214: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x49b214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x49b218: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x49b218u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x49b21c: 0x30438000  andi        $v1, $v0, 0x8000
    ctx->pc = 0x49b21cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x49b220: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x49B220u;
    {
        const bool branch_taken_0x49b220 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x49b220) {
            ctx->pc = 0x49B224u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49B220u;
            // 0x49b224: 0xa7220000  sh          $v0, 0x0($t9) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 25), 0), (uint16_t)GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49B228u;
            goto label_49b228;
        }
    }
    ctx->pc = 0x49B228u;
label_49b228:
    // 0x49b228: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x49b228u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x49b22c: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x49b22cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x49b230: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x49b230u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x49b234: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x49b234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x49b238: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x49b238u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x49b23c: 0x30438000  andi        $v1, $v0, 0x8000
    ctx->pc = 0x49b23cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x49b240: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x49B240u;
    {
        const bool branch_taken_0x49b240 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x49B244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B240u;
        // 0x49b244: 0x27390002  addiu       $t9, $t9, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b240) {
            ctx->pc = 0x49B250u;
            goto label_49b250;
        }
    }
    ctx->pc = 0x49B248u;
    // 0x49b248: 0xa7220000  sh          $v0, 0x0($t9)
    ctx->pc = 0x49b248u;
    WRITE16(ADD32(GPR_U32(ctx, 25), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x49b24c: 0x0  nop
    ctx->pc = 0x49b24cu;
    // NOP
label_49b250:
    // 0x49b250: 0x2652fffe  addiu       $s2, $s2, -0x2
    ctx->pc = 0x49b250u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967294));
    // 0x49b254: 0x27390002  addiu       $t9, $t9, 0x2
    ctx->pc = 0x49b254u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 2));
    // 0x49b258: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x49b258u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x49b25c: 0x1040ffea  beqz        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x49B25Cu;
    {
        const bool branch_taken_0x49b25c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49B260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B25Cu;
        // 0x49b260: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b25c) {
            ctx->pc = 0x49B208u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49b208;
        }
    }
    ctx->pc = 0x49B264u;
label_49b264:
    // 0x49b264: 0x1a40000c  blez        $s2, . + 4 + (0xC << 2)
    ctx->pc = 0x49B264u;
    {
        const bool branch_taken_0x49b264 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x49B268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B264u;
        // 0x49b268: 0x8fa30030  lw          $v1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b264) {
            ctx->pc = 0x49B298u;
            goto label_49b298;
        }
    }
    ctx->pc = 0x49B26Cu;
    // 0x49b26c: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x49b26cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x49b270: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x49b270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x49b274: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x49b274u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x49b278: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x49b278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x49b27c: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x49b27cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x49b280: 0x30438000  andi        $v1, $v0, 0x8000
    ctx->pc = 0x49b280u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x49b284: 0x54600002  bnel        $v1, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x49B284u;
    {
        const bool branch_taken_0x49b284 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x49b284) {
            ctx->pc = 0x49B288u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49B284u;
            // 0x49b288: 0xa7220000  sh          $v0, 0x0($t9) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 25), 0), (uint16_t)GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49B290u;
            goto label_49b290;
        }
    }
    ctx->pc = 0x49B28Cu;
    // 0x49b28c: 0x0  nop
    ctx->pc = 0x49b28cu;
    // NOP
label_49b290:
    // 0x49b290: 0x27390002  addiu       $t9, $t9, 0x2
    ctx->pc = 0x49b290u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 2));
    // 0x49b294: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x49b294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_49b298:
    // 0x49b298: 0x334c821  addu        $t9, $t9, $s4
    ctx->pc = 0x49b298u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 20)));
    // 0x49b29c: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x49b29cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x49b2a0: 0x2639821  addu        $s3, $s3, $v1
    ctx->pc = 0x49b2a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x49b2a4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x49b2a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49b2a8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x49b2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x49b2ac: 0x1460ffc2  bnez        $v1, . + 4 + (-0x3E << 2)
    ctx->pc = 0x49B2ACu;
    {
        const bool branch_taken_0x49b2ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x49B2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B2ACu;
        // 0x49b2b0: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b2ac) {
            ctx->pc = 0x49B1B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49b1b8;
        }
    }
    ctx->pc = 0x49B2B4u;
    // 0x49b2b4: 0x1000011e  b           . + 4 + (0x11E << 2)
    ctx->pc = 0x49B2B4u;
    {
        const bool branch_taken_0x49b2b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49B2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B2B4u;
        // 0x49b2b8: 0x8fa5003c  lw          $a1, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b2b4) {
            ctx->pc = 0x49B730u;
            goto label_49b730;
        }
    }
    ctx->pc = 0x49B2BCu;
label_49b2bc:
    // 0x49b2bc: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x49b2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x49b2c0: 0x10000116  b           . + 4 + (0x116 << 2)
    ctx->pc = 0x49B2C0u;
    {
        const bool branch_taken_0x49b2c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49B2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B2C0u;
        // 0x49b2c4: 0x8eb60008  lw          $s6, 0x8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b2c0) {
            ctx->pc = 0x49B71Cu;
            goto label_49b71c;
        }
    }
    ctx->pc = 0x49B2C8u;
label_49b2c8:
    // 0x49b2c8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x49b2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x49b2cc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x49b2ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x49b2d0: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x49B2D0u;
    {
        const bool branch_taken_0x49b2d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49B2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B2D0u;
        // 0x49b2d4: 0x8fb20018  lw          $s2, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b2d0) {
            ctx->pc = 0x49B3E4u;
            goto label_49b3e4;
        }
    }
    ctx->pc = 0x49B2D8u;
    // 0x49b2d8: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x49b2d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x49b2dc: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x49b2dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x49b2e0: 0x3c037f00  lui         $v1, 0x7F00
    ctx->pc = 0x49b2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32512 << 16));
    // 0x49b2e4: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x49b2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x49b2e8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x49b2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x49b2ec: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x49b2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x49b2f0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x49b2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x49b2f4: 0x854824  and         $t1, $a0, $a1
    ctx->pc = 0x49b2f4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x49b2f8: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x49b2f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x49b2fc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x49B2FCu;
    {
        const bool branch_taken_0x49b2fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49B300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B2FCu;
        // 0x49b300: 0x3082f800  andi        $v0, $a0, 0xF800 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63488);
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b2fc) {
            ctx->pc = 0x49B330u;
            goto label_49b330;
        }
    }
    ctx->pc = 0x49B304u;
    // 0x49b304: 0x3c0500f8  lui         $a1, 0xF8
    ctx->pc = 0x49b304u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)248 << 16));
    // 0x49b308: 0x851824  and         $v1, $a0, $a1
    ctx->pc = 0x49b308u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x49b30c: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x49b30cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x49b310: 0x31a42  srl         $v1, $v1, 9
    ctx->pc = 0x49b310u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 9));
    // 0x49b314: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x49b314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x49b318: 0x308400f8  andi        $a0, $a0, 0xF8
    ctx->pc = 0x49b318u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)248);
    // 0x49b31c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x49b31cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x49b320: 0x420c2  srl         $a0, $a0, 3
    ctx->pc = 0x49b320u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 3));
    // 0x49b324: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x49b324u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x49b328: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x49B328u;
    {
        const bool branch_taken_0x49b328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49B32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B328u;
        // 0x49b32c: 0xa7230000  sh          $v1, 0x0($t9) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 25), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b328) {
            ctx->pc = 0x49B3D8u;
            goto label_49b3d8;
        }
    }
    ctx->pc = 0x49B330u;
label_49b330:
    // 0x49b330: 0x97250000  lhu         $a1, 0x0($t9)
    ctx->pc = 0x49b330u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x49b334: 0x94e02  srl         $t1, $t1, 24
    ctx->pc = 0x49b334u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 9), 24));
    // 0x49b338: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x49b338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x49b33c: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x49b33cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
    // 0x49b340: 0x30a68000  andi        $a2, $a1, 0x8000
    ctx->pc = 0x49b340u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32768);
    // 0x49b344: 0x498823  subu        $s1, $v0, $t1
    ctx->pc = 0x49b344u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x49b348: 0x834024  and         $t0, $a0, $v1
    ctx->pc = 0x49b348u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x49b34c: 0x63202  srl         $a2, $a2, 8
    ctx->pc = 0x49b34cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 8));
    // 0x49b350: 0x30aa7c00  andi        $t2, $a1, 0x7C00
    ctx->pc = 0x49b350u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31744);
    // 0x49b354: 0x3083ff00  andi        $v1, $a0, 0xFF00
    ctx->pc = 0x49b354u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65280);
    // 0x49b358: 0x30a703e0  andi        $a3, $a1, 0x3E0
    ctx->pc = 0x49b358u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)992);
    // 0x49b35c: 0xd13018  mult        $a2, $a2, $s1
    ctx->pc = 0x49b35cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x49b360: 0x1291018  mult        $v0, $t1, $t1
    ctx->pc = 0x49b360u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x49b364: 0x84402  srl         $t0, $t0, 16
    ctx->pc = 0x49b364u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x49b368: 0xa51c2  srl         $t2, $t2, 7
    ctx->pc = 0x49b368u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 10), 7));
    // 0x49b36c: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x49b36cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x49b370: 0x73882  srl         $a3, $a3, 2
    ctx->pc = 0x49b370u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 2));
    // 0x49b374: 0x30a5001f  andi        $a1, $a1, 0x1F
    ctx->pc = 0x49b374u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x49b378: 0x1094018  mult        $t0, $t0, $t1
    ctx->pc = 0x49b378u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x49b37c: 0x1515018  mult        $t2, $t2, $s1
    ctx->pc = 0x49b37cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x49b380: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x49b380u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x49b384: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x49b384u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x49b388: 0x691818  mult        $v1, $v1, $t1
    ctx->pc = 0x49b388u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x49b38c: 0xf13818  mult        $a3, $a3, $s1
    ctx->pc = 0x49b38cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x49b390: 0x24c62000  addiu       $a2, $a2, 0x2000
    ctx->pc = 0x49b390u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8192));
    // 0x49b394: 0x892018  mult        $a0, $a0, $t1
    ctx->pc = 0x49b394u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x49b398: 0xb12818  mult        $a1, $a1, $s1
    ctx->pc = 0x49b398u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x49b39c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x49b39cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x49b3a0: 0x10a4021  addu        $t0, $t0, $t2
    ctx->pc = 0x49b3a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
    // 0x49b3a4: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x49b3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x49b3a8: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x49b3a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x49b3ac: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x49b3acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x49b3b0: 0x31087c00  andi        $t0, $t0, 0x7C00
    ctx->pc = 0x49b3b0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)31744);
    // 0x49b3b4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x49b3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x49b3b8: 0x30637c00  andi        $v1, $v1, 0x7C00
    ctx->pc = 0x49b3b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31744);
    // 0x49b3bc: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x49b3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x49b3c0: 0x31942  srl         $v1, $v1, 5
    ctx->pc = 0x49b3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x49b3c4: 0x30847c00  andi        $a0, $a0, 0x7C00
    ctx->pc = 0x49b3c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31744);
    // 0x49b3c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x49b3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x49b3cc: 0x42282  srl         $a0, $a0, 10
    ctx->pc = 0x49b3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 10));
    // 0x49b3d0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x49b3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x49b3d4: 0xa7220000  sh          $v0, 0x0($t9)
    ctx->pc = 0x49b3d4u;
    WRITE16(ADD32(GPR_U32(ctx, 25), 0), (uint16_t)GPR_U32(ctx, 2));
label_49b3d8:
    // 0x49b3d8: 0x27390002  addiu       $t9, $t9, 0x2
    ctx->pc = 0x49b3d8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 2));
    // 0x49b3dc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x49b3dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x49b3e0: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x49b3e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_49b3e4:
    // 0x49b3e4: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x49b3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x49b3e8: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x49b3e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x49b3ec: 0x14400085  bnez        $v0, . + 4 + (0x85 << 2)
    ctx->pc = 0x49B3ECu;
    {
        const bool branch_taken_0x49b3ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49B3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B3ECu;
        // 0x49b3f0: 0x3a040  sll         $s4, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b3ec) {
            ctx->pc = 0x49B604u;
            goto label_49b604;
        }
    }
    ctx->pc = 0x49B3F4u;
    // 0x49b3f4: 0x241e0080  addiu       $fp, $zero, 0x80
    ctx->pc = 0x49b3f4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x49b3f8: 0x3c1700ff  lui         $s7, 0xFF
    ctx->pc = 0x49b3f8u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)255 << 16));
    // 0x49b3fc: 0x0  nop
    ctx->pc = 0x49b3fcu;
    // NOP
label_49b400:
    // 0x49b400: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x49b400u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x49b404: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x49b404u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x49b408: 0x3c037f00  lui         $v1, 0x7F00
    ctx->pc = 0x49b408u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32512 << 16));
    // 0x49b40c: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x49b40cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x49b410: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x49b410u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x49b414: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x49b414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x49b418: 0x8c580000  lw          $t8, 0x0($v0)
    ctx->pc = 0x49b418u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x49b41c: 0x3057824  and         $t7, $t8, $a1
    ctx->pc = 0x49b41cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 24) & GPR_U64(ctx, 5));
    // 0x49b420: 0x6f102b  sltu        $v0, $v1, $t7
    ctx->pc = 0x49b420u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
    // 0x49b424: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x49B424u;
    {
        const bool branch_taken_0x49b424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49B428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B424u;
        // 0x49b428: 0x3304f800  andi        $a0, $t8, 0xF800 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)63488);
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b424) {
            ctx->pc = 0x49B458u;
            goto label_49b458;
        }
    }
    ctx->pc = 0x49B42Cu;
    // 0x49b42c: 0x3c0500f8  lui         $a1, 0xF8
    ctx->pc = 0x49b42cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)248 << 16));
    // 0x49b430: 0x3051824  and         $v1, $t8, $a1
    ctx->pc = 0x49b430u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 24) & GPR_U64(ctx, 5));
    // 0x49b434: 0x42182  srl         $a0, $a0, 6
    ctx->pc = 0x49b434u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 6));
    // 0x49b438: 0x31a42  srl         $v1, $v1, 9
    ctx->pc = 0x49b438u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 9));
    // 0x49b43c: 0x34848000  ori         $a0, $a0, 0x8000
    ctx->pc = 0x49b43cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x49b440: 0x330200f8  andi        $v0, $t8, 0xF8
    ctx->pc = 0x49b440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)248);
    // 0x49b444: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x49b444u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x49b448: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x49b448u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x49b44c: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x49B44Cu;
    {
        const bool branch_taken_0x49b44c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49B450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B44Cu;
        // 0x49b450: 0x621825  or          $v1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b44c) {
            ctx->pc = 0x49B4F4u;
            goto label_49b4f4;
        }
    }
    ctx->pc = 0x49B454u;
    // 0x49b454: 0x0  nop
    ctx->pc = 0x49b454u;
    // NOP
label_49b458:
    // 0x49b458: 0x972c0000  lhu         $t4, 0x0($t9)
    ctx->pc = 0x49b458u;
    SET_GPR_ZE32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x49b45c: 0xf7e02  srl         $t7, $t7, 24
    ctx->pc = 0x49b45cu;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 15), 24));
    // 0x49b460: 0x3cf8823  subu        $s1, $fp, $t7
    ctx->pc = 0x49b460u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 15)));
    // 0x49b464: 0x3176824  and         $t5, $t8, $s7
    ctx->pc = 0x49b464u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 24) & GPR_U64(ctx, 23));
    // 0x49b468: 0x318b8000  andi        $t3, $t4, 0x8000
    ctx->pc = 0x49b468u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)32768);
    // 0x49b46c: 0x31907c00  andi        $s0, $t4, 0x7C00
    ctx->pc = 0x49b46cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)31744);
    // 0x49b470: 0xb5a02  srl         $t3, $t3, 8
    ctx->pc = 0x49b470u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 11), 8));
    // 0x49b474: 0x318e03e0  andi        $t6, $t4, 0x3E0
    ctx->pc = 0x49b474u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)992);
    // 0x49b478: 0x3304ff00  andi        $a0, $t8, 0xFF00
    ctx->pc = 0x49b478u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)65280);
    // 0x49b47c: 0x1715818  mult        $t3, $t3, $s1
    ctx->pc = 0x49b47cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x49b480: 0x1ef1818  mult        $v1, $t7, $t7
    ctx->pc = 0x49b480u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x49b484: 0xd6c02  srl         $t5, $t5, 16
    ctx->pc = 0x49b484u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 13), 16));
    // 0x49b488: 0x1081c2  srl         $s0, $s0, 7
    ctx->pc = 0x49b488u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 7));
    // 0x49b48c: 0x42202  srl         $a0, $a0, 8
    ctx->pc = 0x49b48cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x49b490: 0xe7082  srl         $t6, $t6, 2
    ctx->pc = 0x49b490u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 14), 2));
    // 0x49b494: 0x318c001f  andi        $t4, $t4, 0x1F
    ctx->pc = 0x49b494u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)31);
    // 0x49b498: 0x1af6818  mult        $t5, $t5, $t7
    ctx->pc = 0x49b498u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x49b49c: 0x2118018  mult        $s0, $s0, $s1
    ctx->pc = 0x49b49cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x49b4a0: 0x330200ff  andi        $v0, $t8, 0xFF
    ctx->pc = 0x49b4a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)255);
    // 0x49b4a4: 0xc60c0  sll         $t4, $t4, 3
    ctx->pc = 0x49b4a4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x49b4a8: 0x8f2018  mult        $a0, $a0, $t7
    ctx->pc = 0x49b4a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x49b4ac: 0x1d17018  mult        $t6, $t6, $s1
    ctx->pc = 0x49b4acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x49b4b0: 0x256b2000  addiu       $t3, $t3, 0x2000
    ctx->pc = 0x49b4b0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 8192));
    // 0x49b4b4: 0x4f1018  mult        $v0, $v0, $t7
    ctx->pc = 0x49b4b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x49b4b8: 0x1916018  mult        $t4, $t4, $s1
    ctx->pc = 0x49b4b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x49b4bc: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x49b4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x49b4c0: 0x1b06821  addu        $t5, $t5, $s0
    ctx->pc = 0x49b4c0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 16)));
    // 0x49b4c4: 0x8e2021  addu        $a0, $a0, $t6
    ctx->pc = 0x49b4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 14)));
    // 0x49b4c8: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x49b4c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x49b4cc: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x49b4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x49b4d0: 0x31ad7c00  andi        $t5, $t5, 0x7C00
    ctx->pc = 0x49b4d0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)31744);
    // 0x49b4d4: 0x4c1021  addu        $v0, $v0, $t4
    ctx->pc = 0x49b4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x49b4d8: 0x30847c00  andi        $a0, $a0, 0x7C00
    ctx->pc = 0x49b4d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31744);
    // 0x49b4dc: 0x6d1821  addu        $v1, $v1, $t5
    ctx->pc = 0x49b4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x49b4e0: 0x42142  srl         $a0, $a0, 5
    ctx->pc = 0x49b4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
    // 0x49b4e4: 0x30427c00  andi        $v0, $v0, 0x7C00
    ctx->pc = 0x49b4e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31744);
    // 0x49b4e8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x49b4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x49b4ec: 0x21282  srl         $v0, $v0, 10
    ctx->pc = 0x49b4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 10));
    // 0x49b4f0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x49b4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_49b4f4:
    // 0x49b4f4: 0xa7230000  sh          $v1, 0x0($t9)
    ctx->pc = 0x49b4f4u;
    WRITE16(ADD32(GPR_U32(ctx, 25), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x49b4f8: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x49b4f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x49b4fc: 0x3c037f00  lui         $v1, 0x7F00
    ctx->pc = 0x49b4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32512 << 16));
    // 0x49b500: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x49b500u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x49b504: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x49b504u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x49b508: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x49b508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x49b50c: 0x8c580000  lw          $t8, 0x0($v0)
    ctx->pc = 0x49b50cu;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x49b510: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x49b510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x49b514: 0x3027824  and         $t7, $t8, $v0
    ctx->pc = 0x49b514u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 24) & GPR_U64(ctx, 2));
    // 0x49b518: 0x6f102b  sltu        $v0, $v1, $t7
    ctx->pc = 0x49b518u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
    // 0x49b51c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x49B51Cu;
    {
        const bool branch_taken_0x49b51c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49B520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B51Cu;
        // 0x49b520: 0x27390002  addiu       $t9, $t9, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b51c) {
            ctx->pc = 0x49B550u;
            goto label_49b550;
        }
    }
    ctx->pc = 0x49B524u;
    // 0x49b524: 0x3304f800  andi        $a0, $t8, 0xF800
    ctx->pc = 0x49b524u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)63488);
    // 0x49b528: 0x3c0500f8  lui         $a1, 0xF8
    ctx->pc = 0x49b528u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)248 << 16));
    // 0x49b52c: 0x3051824  and         $v1, $t8, $a1
    ctx->pc = 0x49b52cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 24) & GPR_U64(ctx, 5));
    // 0x49b530: 0x42182  srl         $a0, $a0, 6
    ctx->pc = 0x49b530u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 6));
    // 0x49b534: 0x31a42  srl         $v1, $v1, 9
    ctx->pc = 0x49b534u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 9));
    // 0x49b538: 0x34848000  ori         $a0, $a0, 0x8000
    ctx->pc = 0x49b538u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x49b53c: 0x330200f8  andi        $v0, $t8, 0xF8
    ctx->pc = 0x49b53cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)248);
    // 0x49b540: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x49b540u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x49b544: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x49b544u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x49b548: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x49B548u;
    {
        const bool branch_taken_0x49b548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49B54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B548u;
        // 0x49b54c: 0x621825  or          $v1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b548) {
            ctx->pc = 0x49B5ECu;
            goto label_49b5ec;
        }
    }
    ctx->pc = 0x49B550u;
label_49b550:
    // 0x49b550: 0x972c0000  lhu         $t4, 0x0($t9)
    ctx->pc = 0x49b550u;
    SET_GPR_ZE32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x49b554: 0xf7e02  srl         $t7, $t7, 24
    ctx->pc = 0x49b554u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 15), 24));
    // 0x49b558: 0x3cf8823  subu        $s1, $fp, $t7
    ctx->pc = 0x49b558u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 15)));
    // 0x49b55c: 0x3176824  and         $t5, $t8, $s7
    ctx->pc = 0x49b55cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 24) & GPR_U64(ctx, 23));
    // 0x49b560: 0x318b8000  andi        $t3, $t4, 0x8000
    ctx->pc = 0x49b560u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)32768);
    // 0x49b564: 0x31907c00  andi        $s0, $t4, 0x7C00
    ctx->pc = 0x49b564u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)31744);
    // 0x49b568: 0xb5a02  srl         $t3, $t3, 8
    ctx->pc = 0x49b568u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 11), 8));
    // 0x49b56c: 0x318e03e0  andi        $t6, $t4, 0x3E0
    ctx->pc = 0x49b56cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)992);
    // 0x49b570: 0x3304ff00  andi        $a0, $t8, 0xFF00
    ctx->pc = 0x49b570u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)65280);
    // 0x49b574: 0x1715818  mult        $t3, $t3, $s1
    ctx->pc = 0x49b574u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x49b578: 0x1ef1818  mult        $v1, $t7, $t7
    ctx->pc = 0x49b578u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x49b57c: 0xd6c02  srl         $t5, $t5, 16
    ctx->pc = 0x49b57cu;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 13), 16));
    // 0x49b580: 0x1081c2  srl         $s0, $s0, 7
    ctx->pc = 0x49b580u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 7));
    // 0x49b584: 0x42202  srl         $a0, $a0, 8
    ctx->pc = 0x49b584u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x49b588: 0xe7082  srl         $t6, $t6, 2
    ctx->pc = 0x49b588u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 14), 2));
    // 0x49b58c: 0x318c001f  andi        $t4, $t4, 0x1F
    ctx->pc = 0x49b58cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)31);
    // 0x49b590: 0x1af6818  mult        $t5, $t5, $t7
    ctx->pc = 0x49b590u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x49b594: 0x2118018  mult        $s0, $s0, $s1
    ctx->pc = 0x49b594u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x49b598: 0x330200ff  andi        $v0, $t8, 0xFF
    ctx->pc = 0x49b598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)255);
    // 0x49b59c: 0xc60c0  sll         $t4, $t4, 3
    ctx->pc = 0x49b59cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x49b5a0: 0x8f2018  mult        $a0, $a0, $t7
    ctx->pc = 0x49b5a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x49b5a4: 0x1d17018  mult        $t6, $t6, $s1
    ctx->pc = 0x49b5a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x49b5a8: 0x256b2000  addiu       $t3, $t3, 0x2000
    ctx->pc = 0x49b5a8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 8192));
    // 0x49b5ac: 0x4f1018  mult        $v0, $v0, $t7
    ctx->pc = 0x49b5acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x49b5b0: 0x1916018  mult        $t4, $t4, $s1
    ctx->pc = 0x49b5b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x49b5b4: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x49b5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x49b5b8: 0x1b06821  addu        $t5, $t5, $s0
    ctx->pc = 0x49b5b8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 16)));
    // 0x49b5bc: 0x8e2021  addu        $a0, $a0, $t6
    ctx->pc = 0x49b5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 14)));
    // 0x49b5c0: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x49b5c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x49b5c4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x49b5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x49b5c8: 0x31ad7c00  andi        $t5, $t5, 0x7C00
    ctx->pc = 0x49b5c8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)31744);
    // 0x49b5cc: 0x4c1021  addu        $v0, $v0, $t4
    ctx->pc = 0x49b5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x49b5d0: 0x30847c00  andi        $a0, $a0, 0x7C00
    ctx->pc = 0x49b5d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31744);
    // 0x49b5d4: 0x6d1821  addu        $v1, $v1, $t5
    ctx->pc = 0x49b5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x49b5d8: 0x42142  srl         $a0, $a0, 5
    ctx->pc = 0x49b5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
    // 0x49b5dc: 0x30427c00  andi        $v0, $v0, 0x7C00
    ctx->pc = 0x49b5dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31744);
    // 0x49b5e0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x49b5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x49b5e4: 0x21282  srl         $v0, $v0, 10
    ctx->pc = 0x49b5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 10));
    // 0x49b5e8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x49b5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_49b5ec:
    // 0x49b5ec: 0xa7230000  sh          $v1, 0x0($t9)
    ctx->pc = 0x49b5ecu;
    WRITE16(ADD32(GPR_U32(ctx, 25), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x49b5f0: 0x2652fffe  addiu       $s2, $s2, -0x2
    ctx->pc = 0x49b5f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967294));
    // 0x49b5f4: 0x27390002  addiu       $t9, $t9, 0x2
    ctx->pc = 0x49b5f4u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 2));
    // 0x49b5f8: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x49b5f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x49b5fc: 0x1040ff80  beqz        $v0, . + 4 + (-0x80 << 2)
    ctx->pc = 0x49B5FCu;
    {
        const bool branch_taken_0x49b5fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49B600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B5FCu;
        // 0x49b600: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b5fc) {
            ctx->pc = 0x49B400u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49b400;
        }
    }
    ctx->pc = 0x49B604u;
label_49b604:
    // 0x49b604: 0x1a400041  blez        $s2, . + 4 + (0x41 << 2)
    ctx->pc = 0x49B604u;
    {
        const bool branch_taken_0x49b604 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x49B608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B604u;
        // 0x49b608: 0x3c037f00  lui         $v1, 0x7F00 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32512 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b604) {
            ctx->pc = 0x49B70Cu;
            goto label_49b70c;
        }
    }
    ctx->pc = 0x49B60Cu;
    // 0x49b60c: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x49b60cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x49b610: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x49b610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x49b614: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x49b614u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x49b618: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x49b618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x49b61c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x49b61cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x49b620: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x49b620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x49b624: 0x824824  and         $t1, $a0, $v0
    ctx->pc = 0x49b624u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x49b628: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x49b628u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x49b62c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x49B62Cu;
    {
        const bool branch_taken_0x49b62c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49B630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B62Cu;
        // 0x49b630: 0x3082f800  andi        $v0, $a0, 0xF800 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63488);
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b62c) {
            ctx->pc = 0x49B660u;
            goto label_49b660;
        }
    }
    ctx->pc = 0x49B634u;
    // 0x49b634: 0x3c0500f8  lui         $a1, 0xF8
    ctx->pc = 0x49b634u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)248 << 16));
    // 0x49b638: 0x851824  and         $v1, $a0, $a1
    ctx->pc = 0x49b638u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x49b63c: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x49b63cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x49b640: 0x31a42  srl         $v1, $v1, 9
    ctx->pc = 0x49b640u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 9));
    // 0x49b644: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x49b644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x49b648: 0x308400f8  andi        $a0, $a0, 0xF8
    ctx->pc = 0x49b648u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)248);
    // 0x49b64c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x49b64cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x49b650: 0x420c2  srl         $a0, $a0, 3
    ctx->pc = 0x49b650u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 3));
    // 0x49b654: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x49b654u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x49b658: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x49B658u;
    {
        const bool branch_taken_0x49b658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49B65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B658u;
        // 0x49b65c: 0xa7230000  sh          $v1, 0x0($t9) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 25), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b658) {
            ctx->pc = 0x49B708u;
            goto label_49b708;
        }
    }
    ctx->pc = 0x49B660u;
label_49b660:
    // 0x49b660: 0x97250000  lhu         $a1, 0x0($t9)
    ctx->pc = 0x49b660u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x49b664: 0x94e02  srl         $t1, $t1, 24
    ctx->pc = 0x49b664u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 9), 24));
    // 0x49b668: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x49b668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x49b66c: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x49b66cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
    // 0x49b670: 0x30a68000  andi        $a2, $a1, 0x8000
    ctx->pc = 0x49b670u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32768);
    // 0x49b674: 0x498823  subu        $s1, $v0, $t1
    ctx->pc = 0x49b674u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x49b678: 0x834024  and         $t0, $a0, $v1
    ctx->pc = 0x49b678u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x49b67c: 0x63202  srl         $a2, $a2, 8
    ctx->pc = 0x49b67cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 8));
    // 0x49b680: 0x30aa7c00  andi        $t2, $a1, 0x7C00
    ctx->pc = 0x49b680u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31744);
    // 0x49b684: 0x3083ff00  andi        $v1, $a0, 0xFF00
    ctx->pc = 0x49b684u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65280);
    // 0x49b688: 0x30a703e0  andi        $a3, $a1, 0x3E0
    ctx->pc = 0x49b688u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)992);
    // 0x49b68c: 0xd13018  mult        $a2, $a2, $s1
    ctx->pc = 0x49b68cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x49b690: 0x1291018  mult        $v0, $t1, $t1
    ctx->pc = 0x49b690u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x49b694: 0x84402  srl         $t0, $t0, 16
    ctx->pc = 0x49b694u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x49b698: 0xa51c2  srl         $t2, $t2, 7
    ctx->pc = 0x49b698u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 10), 7));
    // 0x49b69c: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x49b69cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x49b6a0: 0x73882  srl         $a3, $a3, 2
    ctx->pc = 0x49b6a0u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 2));
    // 0x49b6a4: 0x30a5001f  andi        $a1, $a1, 0x1F
    ctx->pc = 0x49b6a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x49b6a8: 0x1094018  mult        $t0, $t0, $t1
    ctx->pc = 0x49b6a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x49b6ac: 0x1515018  mult        $t2, $t2, $s1
    ctx->pc = 0x49b6acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x49b6b0: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x49b6b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x49b6b4: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x49b6b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x49b6b8: 0x691818  mult        $v1, $v1, $t1
    ctx->pc = 0x49b6b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x49b6bc: 0xf13818  mult        $a3, $a3, $s1
    ctx->pc = 0x49b6bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x49b6c0: 0x24c62000  addiu       $a2, $a2, 0x2000
    ctx->pc = 0x49b6c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8192));
    // 0x49b6c4: 0x892018  mult        $a0, $a0, $t1
    ctx->pc = 0x49b6c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x49b6c8: 0xb12818  mult        $a1, $a1, $s1
    ctx->pc = 0x49b6c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x49b6cc: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x49b6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x49b6d0: 0x10a4021  addu        $t0, $t0, $t2
    ctx->pc = 0x49b6d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
    // 0x49b6d4: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x49b6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x49b6d8: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x49b6d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x49b6dc: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x49b6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x49b6e0: 0x31087c00  andi        $t0, $t0, 0x7C00
    ctx->pc = 0x49b6e0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)31744);
    // 0x49b6e4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x49b6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x49b6e8: 0x30637c00  andi        $v1, $v1, 0x7C00
    ctx->pc = 0x49b6e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31744);
    // 0x49b6ec: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x49b6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x49b6f0: 0x31942  srl         $v1, $v1, 5
    ctx->pc = 0x49b6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x49b6f4: 0x30847c00  andi        $a0, $a0, 0x7C00
    ctx->pc = 0x49b6f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31744);
    // 0x49b6f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x49b6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x49b6fc: 0x42282  srl         $a0, $a0, 10
    ctx->pc = 0x49b6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 10));
    // 0x49b700: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x49b700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x49b704: 0xa7220000  sh          $v0, 0x0($t9)
    ctx->pc = 0x49b704u;
    WRITE16(ADD32(GPR_U32(ctx, 25), 0), (uint16_t)GPR_U32(ctx, 2));
label_49b708:
    // 0x49b708: 0x27390002  addiu       $t9, $t9, 0x2
    ctx->pc = 0x49b708u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 2));
label_49b70c:
    // 0x49b70c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x49b70cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x49b710: 0x334c821  addu        $t9, $t9, $s4
    ctx->pc = 0x49b710u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 20)));
    // 0x49b714: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x49b714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x49b718: 0x2639821  addu        $s3, $s3, $v1
    ctx->pc = 0x49b718u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_49b71c:
    // 0x49b71c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x49b71cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49b720: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x49b720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x49b724: 0x1460fee8  bnez        $v1, . + 4 + (-0x118 << 2)
    ctx->pc = 0x49B724u;
    {
        const bool branch_taken_0x49b724 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x49B728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B724u;
        // 0x49b728: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b724) {
            ctx->pc = 0x49B2C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49b2c8;
        }
    }
    ctx->pc = 0x49B72Cu;
label_49b72c:
    // 0x49b72c: 0x8fa5003c  lw          $a1, 0x3C($sp)
    ctx->pc = 0x49b72cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_49b730:
    // 0x49b730: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x49B730u;
    {
        const bool branch_taken_0x49b730 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x49B734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B730u;
        // 0x49b734: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b730) {
            ctx->pc = 0x49B744u;
            goto label_49b744;
        }
    }
    ctx->pc = 0x49B738u;
    // 0x49b738: 0xc121912  jal         func_486448
    ctx->pc = 0x49B738u;
    SET_GPR_U32(ctx, 31, 0x49B740u);
    ctx->pc = 0x49B73Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49B738u;
    // 0x49b73c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x486448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x486448u, 0x49B738u, 0x49B740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49B740u;
label_49b740:
    // 0x49b740: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x49b740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_49b744:
    // 0x49b744: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x49b744u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_49b748:
    // 0x49b748: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x49b748u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x49b74c: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x49b74cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x49b750: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x49b750u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x49b754: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x49b754u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x49b758: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x49b758u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x49b75c: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x49b75cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x49b760: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x49b760u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x49b764: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x49b764u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x49b768: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x49b768u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x49b76c: 0x3e00008  jr          $ra
    ctx->pc = 0x49B76Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49B770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B76Cu;
        // 0x49b770: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49B76Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49B774u;
    // 0x49b774: 0x0  nop
    ctx->pc = 0x49b774u;
    // NOP
    ctx->pc = 0x49b778u;
}
