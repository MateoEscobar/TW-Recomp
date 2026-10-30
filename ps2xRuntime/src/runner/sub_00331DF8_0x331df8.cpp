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

// Function: sub_00331DF8
// Address: 0x331df8 - 0x331ed8
void sub_00331DF8_0x331df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00331DF8_0x331df8");
#endif

    switch (ctx->pc) {
        case 0x331e50u: goto label_331e50;
        case 0x331e70u: goto label_331e70;
        case 0x331e90u: goto label_331e90;
        case 0x331e9cu: goto label_331e9c;
        case 0x331eb8u: goto label_331eb8;
        default: break;
    }

    ctx->pc = 0x331df8u;

    // 0x331df8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x331df8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x331dfc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x331dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x331e00: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x331e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x331e04: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x331e04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x331e08: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x331e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x331e0c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x331e0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331e10: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x331e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x331e14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x331e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x331e18: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x331e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x331e1c: 0x10620027  beq         $v1, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x331E1Cu;
    {
        const bool branch_taken_0x331e1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x331E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331E1Cu;
        // 0x331e20: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331e1c) {
            ctx->pc = 0x331EBCu;
            goto label_331ebc;
        }
    }
    ctx->pc = 0x331E24u;
    // 0x331e24: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x331e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x331e28: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x331E28u;
    {
        const bool branch_taken_0x331e28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x331e28) {
            ctx->pc = 0x331E2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x331E28u;
            // 0x331e2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x331E48u;
            goto label_331e48;
        }
    }
    ctx->pc = 0x331E30u;
    // 0x331e30: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x331e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x331e34: 0x94620008  lhu         $v0, 0x8($v1)
    ctx->pc = 0x331e34u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x331e38: 0x2c42001f  sltiu       $v0, $v0, 0x1F
    ctx->pc = 0x331e38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)31) ? 1 : 0);
    // 0x331e3c: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x331E3Cu;
    {
        const bool branch_taken_0x331e3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x331E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331E3Cu;
        // 0x331e40: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331e3c) {
            ctx->pc = 0x331EC0u;
            goto label_331ec0;
        }
    }
    ctx->pc = 0x331E44u;
    // 0x331e44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x331e44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_331e48:
    // 0x331e48: 0xc0cc6a0  jal         func_331A80
    ctx->pc = 0x331E48u;
    SET_GPR_U32(ctx, 31, 0x331E50u);
    ctx->pc = 0x331E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331E48u;
    // 0x331e4c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331A80u, 0x331E48u, 0x331E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331E50u;
label_331e50:
    // 0x331e50: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x331e50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x331e54: 0x3c03cccc  lui         $v1, 0xCCCC
    ctx->pc = 0x331e54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52428 << 16));
    // 0x331e58: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x331e58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x331e5c: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x331e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x331e60: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x331e60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x331e64: 0x280c3  sra         $s0, $v0, 3
    ctx->pc = 0x331e64u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 3));
    // 0x331e68: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x331E68u;
    {
        const bool branch_taken_0x331e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x331E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331E68u;
        // 0x331e6c: 0x3c130057  lui         $s3, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331e68) {
            ctx->pc = 0x331E88u;
            goto label_331e88;
        }
    }
    ctx->pc = 0x331E70u;
label_331e70:
    // 0x331e70: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x331e70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x331e74: 0x3442fffd  ori         $v0, $v0, 0xFFFD
    ctx->pc = 0x331e74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
    // 0x331e78: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x331e78u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x331e7c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x331e7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x331e80: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x331E80u;
    {
        const bool branch_taken_0x331e80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x331E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331E80u;
        // 0x331e84: 0x2038021  addu        $s0, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331e80) {
            ctx->pc = 0x331EBCu;
            goto label_331ebc;
        }
    }
    ctx->pc = 0x331E88u;
label_331e88:
    // 0x331e88: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x331E88u;
    SET_GPR_U32(ctx, 31, 0x331E90u);
    ctx->pc = 0x331E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331E88u;
    // 0x331e8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x331E88u, 0x331E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331E90u;
label_331e90:
    // 0x331e90: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x331e90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331e94: 0xc0cc6ea  jal         func_331BA8
    ctx->pc = 0x331E94u;
    SET_GPR_U32(ctx, 31, 0x331E9Cu);
    ctx->pc = 0x331E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331E94u;
    // 0x331e98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331BA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331BA8u, 0x331E94u, 0x331E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331E9Cu;
label_331e9c:
    // 0x331e9c: 0x26635af0  addiu       $v1, $s3, 0x5AF0
    ctx->pc = 0x331e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 23280));
    // 0x331ea0: 0x5443fff3  bnel        $v0, $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x331EA0u;
    {
        const bool branch_taken_0x331ea0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x331ea0) {
            ctx->pc = 0x331EA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x331EA0u;
            // 0x331ea4: 0x86230006  lh          $v1, 0x6($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x331E70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_331e70;
        }
    }
    ctx->pc = 0x331EA8u;
    // 0x331ea8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x331ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x331eac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x331eacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331eb0: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x331EB0u;
    SET_GPR_U32(ctx, 31, 0x331EB8u);
    ctx->pc = 0x331EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331EB0u;
    // 0x331eb4: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x331EB0u, 0x331EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331EB8u;
label_331eb8:
    // 0x331eb8: 0xfe420008  sd          $v0, 0x8($s2)
    ctx->pc = 0x331eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 2));
label_331ebc:
    // 0x331ebc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x331ebcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_331ec0:
    // 0x331ec0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x331ec0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x331ec4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x331ec4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x331ec8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x331ec8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x331ecc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x331eccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x331ed0: 0x3e00008  jr          $ra
    ctx->pc = 0x331ED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x331ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331ED0u;
        // 0x331ed4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x331ED0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x331ED8u;
}
