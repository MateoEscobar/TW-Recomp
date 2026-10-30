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

// Function: sub_00314E30
// Address: 0x314e30 - 0x314f38
void sub_00314E30_0x314e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00314E30_0x314e30");
#endif

    switch (ctx->pc) {
        case 0x314e70u: goto label_314e70;
        case 0x314e94u: goto label_314e94;
        case 0x314ed0u: goto label_314ed0;
        case 0x314ee4u: goto label_314ee4;
        case 0x314f0cu: goto label_314f0c;
        case 0x314f20u: goto label_314f20;
        default: break;
    }

    ctx->pc = 0x314e30u;

    // 0x314e30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x314e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x314e34: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x314e34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x314e38: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x314e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x314e3c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x314e3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314e40: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x314e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x314e44: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x314e44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x314e48: 0x10800036  beqz        $a0, . + 4 + (0x36 << 2)
    ctx->pc = 0x314E48u;
    {
        const bool branch_taken_0x314e48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x314E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314E48u;
        // 0x314e4c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314e48) {
            ctx->pc = 0x314F24u;
            goto label_314f24;
        }
    }
    ctx->pc = 0x314E50u;
    // 0x314e50: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x314e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x314e54: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x314E54u;
    {
        const bool branch_taken_0x314e54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x314E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314E54u;
        // 0x314e58: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314e54) {
            ctx->pc = 0x314E7Cu;
            goto label_314e7c;
        }
    }
    ctx->pc = 0x314E5Cu;
    // 0x314e5c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x314e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x314e60: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x314e60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x314e64: 0x2407004d  addiu       $a3, $zero, 0x4D
    ctx->pc = 0x314e64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x314e68: 0xc08823c  jal         func_2208F0
    ctx->pc = 0x314E68u;
    SET_GPR_U32(ctx, 31, 0x314E70u);
    ctx->pc = 0x314E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314E68u;
    // 0x314e6c: 0x9045060c  lbu         $a1, 0x60C($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1548)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2208F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2208F0u, 0x314E68u, 0x314E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314E70u;
label_314e70:
    // 0x314e70: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x314e70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x314e74: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x314E74u;
    {
        const bool branch_taken_0x314e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314E74u;
        // 0x314e78: 0xae230020  sw          $v1, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314e74) {
            ctx->pc = 0x314F20u;
            goto label_314f20;
        }
    }
    ctx->pc = 0x314E7Cu;
label_314e7c:
    // 0x314e7c: 0x1470001c  bne         $v1, $s0, . + 4 + (0x1C << 2)
    ctx->pc = 0x314E7Cu;
    {
        const bool branch_taken_0x314e7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        ctx->pc = 0x314E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314E7Cu;
        // 0x314e80: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314e7c) {
            ctx->pc = 0x314EF0u;
            goto label_314ef0;
        }
    }
    ctx->pc = 0x314E84u;
    // 0x314e84: 0x8c820178  lw          $v0, 0x178($a0)
    ctx->pc = 0x314e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 376)));
    // 0x314e88: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x314e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314e8c: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x314E8Cu;
    SET_GPR_U32(ctx, 31, 0x314E94u);
    ctx->pc = 0x314E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314E8Cu;
    // 0x314e90: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x314E8Cu, 0x314E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314E94u;
label_314e94:
    // 0x314e94: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x314e94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x314e98: 0x10500021  beq         $v0, $s0, . + 4 + (0x21 << 2)
    ctx->pc = 0x314E98u;
    {
        const bool branch_taken_0x314e98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x314E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314E98u;
        // 0x314e9c: 0x2406026d  addiu       $a2, $zero, 0x26D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 621));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314e98) {
            ctx->pc = 0x314F20u;
            goto label_314f20;
        }
    }
    ctx->pc = 0x314EA0u;
    // 0x314ea0: 0x8e250028  lw          $a1, 0x28($s1)
    ctx->pc = 0x314ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x314ea4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x314ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x314ea8: 0x8ca203b4  lw          $v0, 0x3B4($a1)
    ctx->pc = 0x314ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 948)));
    // 0x314eac: 0x8c64aa84  lw          $a0, -0x557C($v1)
    ctx->pc = 0x314eacu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50AA84u));
    // 0x314eb0: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x314eb0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x314eb4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x314eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x314eb8: 0x8c870214  lw          $a3, 0x214($a0)
    ctx->pc = 0x314eb8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 532)));
    // 0x314ebc: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x314ebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314ec0: 0x9070060c  lbu         $s0, 0x60C($v1)
    ctx->pc = 0x314ec0u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1548)));
    // 0x314ec4: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x314ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x314ec8: 0xc05a582  jal         func_169608
    ctx->pc = 0x314EC8u;
    SET_GPR_U32(ctx, 31, 0x314ED0u);
    ctx->pc = 0x314ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314EC8u;
    // 0x314ecc: 0x90450040  lbu         $a1, 0x40($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169608u, 0x314EC8u, 0x314ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314ED0u;
label_314ed0:
    // 0x314ed0: 0x8e240028  lw          $a0, 0x28($s1)
    ctx->pc = 0x314ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x314ed4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x314ed4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314ed8: 0x24060015  addiu       $a2, $zero, 0x15
    ctx->pc = 0x314ed8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x314edc: 0xc08823c  jal         func_2208F0
    ctx->pc = 0x314EDCu;
    SET_GPR_U32(ctx, 31, 0x314EE4u);
    ctx->pc = 0x314EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314EDCu;
    // 0x314ee0: 0x2407004e  addiu       $a3, $zero, 0x4E (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2208F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2208F0u, 0x314EDCu, 0x314EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314EE4u;
label_314ee4:
    // 0x314ee4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x314ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x314ee8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x314EE8u;
    {
        const bool branch_taken_0x314ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314EE8u;
        // 0x314eec: 0xae230020  sw          $v1, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314ee8) {
            ctx->pc = 0x314F20u;
            goto label_314f20;
        }
    }
    ctx->pc = 0x314EF0u;
label_314ef0:
    // 0x314ef0: 0x5462000c  bnel        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x314EF0u;
    {
        const bool branch_taken_0x314ef0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x314ef0) {
            ctx->pc = 0x314EF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x314EF0u;
            // 0x314ef4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x314F24u;
            goto label_314f24;
        }
    }
    ctx->pc = 0x314EF8u;
    // 0x314ef8: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x314ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x314efc: 0x37a40004  ori         $a0, $sp, 0x4
    ctx->pc = 0x314efcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x314f00: 0x8c430178  lw          $v1, 0x178($v0)
    ctx->pc = 0x314f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 376)));
    // 0x314f04: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x314F04u;
    SET_GPR_U32(ctx, 31, 0x314F0Cu);
    ctx->pc = 0x314F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314F04u;
    // 0x314f08: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x314F04u, 0x314F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314F0Cu;
label_314f0c:
    // 0x314f0c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x314f0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x314f10: 0x10500003  beq         $v0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x314F10u;
    {
        const bool branch_taken_0x314f10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x314F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314F10u;
        // 0x314f14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314f10) {
            ctx->pc = 0x314F20u;
            goto label_314f20;
        }
    }
    ctx->pc = 0x314F18u;
    // 0x314f18: 0xc0c52f6  jal         func_314BD8
    ctx->pc = 0x314F18u;
    SET_GPR_U32(ctx, 31, 0x314F20u);
    ctx->pc = 0x314F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314F18u;
    // 0x314f1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x314BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314BD8u, 0x314F18u, 0x314F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314F20u;
label_314f20:
    // 0x314f20: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x314f20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_314f24:
    // 0x314f24: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x314f24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x314f28: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x314f28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x314f2c: 0x3e00008  jr          $ra
    ctx->pc = 0x314F2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x314F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314F2Cu;
        // 0x314f30: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x314F2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x314F34u;
    // 0x314f34: 0x0  nop
    ctx->pc = 0x314f34u;
    // NOP
    ctx->pc = 0x314f38u;
}
