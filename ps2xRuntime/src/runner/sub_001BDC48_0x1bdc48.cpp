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

// Function: sub_001BDC48
// Address: 0x1bdc48 - 0x1bdcd0
void sub_001BDC48_0x1bdc48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BDC48_0x1bdc48");
#endif

    switch (ctx->pc) {
        case 0x1bdc8cu: goto label_1bdc8c;
        case 0x1bdc9cu: goto label_1bdc9c;
        case 0x1bdcb4u: goto label_1bdcb4;
        default: break;
    }

    ctx->pc = 0x1bdc48u;

    // 0x1bdc48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bdc48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bdc4c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1bdc4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1bdc50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bdc50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bdc54: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bdc54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdc58: 0x26020070  addiu       $v0, $s0, 0x70
    ctx->pc = 0x1bdc58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x1bdc5c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1bdc5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1bdc60: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1bdc60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1bdc64: 0x8e050584  lw          $a1, 0x584($s0)
    ctx->pc = 0x1bdc64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1412)));
    // 0x1bdc68: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1bdc68u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1bdc6c: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x1bdc6cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x1bdc70: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1bdc70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1bdc74: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x1bdc74u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1bdc78: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1BDC78u;
    {
        const bool branch_taken_0x1bdc78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDC78u;
        // 0x1bdc7c: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdc78) {
            ctx->pc = 0x1BDCA4u;
            goto label_1bdca4;
        }
    }
    ctx->pc = 0x1BDC80u;
    // 0x1bdc80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bdc80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdc84: 0xc06f704  jal         func_1BDC10
    ctx->pc = 0x1BDC84u;
    SET_GPR_U32(ctx, 31, 0x1BDC8Cu);
    ctx->pc = 0x1BDC88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDC84u;
    // 0x1bdc88: 0xae020584  sw          $v0, 0x584($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1412), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDC10u, 0x1BDC84u, 0x1BDC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDC8Cu;
label_1bdc8c:
    // 0x1bdc8c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1bdc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1bdc90: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1bdc90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1bdc94: 0xc043f0c  jal         func_10FC30
    ctx->pc = 0x1BDC94u;
    SET_GPR_U32(ctx, 31, 0x1BDC9Cu);
    ctx->pc = 0x1BDC98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDC94u;
    // 0x1bdc98: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC30u, 0x1BDC94u, 0x1BDC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDC9Cu;
label_1bdc9c:
    // 0x1bdc9c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1BDC9Cu;
    {
        const bool branch_taken_0x1bdc9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDC9Cu;
        // 0x1bdca0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdc9c) {
            ctx->pc = 0x1BDCC0u;
            goto label_1bdcc0;
        }
    }
    ctx->pc = 0x1BDCA4u;
label_1bdca4:
    // 0x1bdca4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1bdca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1bdca8: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1bdca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1bdcac: 0xc043f0c  jal         func_10FC30
    ctx->pc = 0x1BDCACu;
    SET_GPR_U32(ctx, 31, 0x1BDCB4u);
    ctx->pc = 0x1BDCB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDCACu;
    // 0x1bdcb0: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC30u, 0x1BDCACu, 0x1BDCB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDCB4u;
label_1bdcb4:
    // 0x1bdcb4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bdcb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bdcb8: 0xae0306a8  sw          $v1, 0x6A8($s0)
    ctx->pc = 0x1bdcb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1704), GPR_U32(ctx, 3));
    // 0x1bdcbc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1bdcbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1bdcc0:
    // 0x1bdcc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bdcc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bdcc4: 0x3e00008  jr          $ra
    ctx->pc = 0x1BDCC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BDCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDCC4u;
        // 0x1bdcc8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BDCC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BDCCCu;
    // 0x1bdccc: 0x0  nop
    ctx->pc = 0x1bdcccu;
    // NOP
    ctx->pc = 0x1bdcd0u;
}
