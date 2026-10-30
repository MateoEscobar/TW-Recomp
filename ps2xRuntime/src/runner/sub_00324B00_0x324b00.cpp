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

// Function: sub_00324B00
// Address: 0x324b00 - 0x324b60
void sub_00324B00_0x324b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00324B00_0x324b00");
#endif

    switch (ctx->pc) {
        case 0x324b14u: goto label_324b14;
        case 0x324b30u: goto label_324b30;
        case 0x324b48u: goto label_324b48;
        default: break;
    }

    ctx->pc = 0x324b00u;

    // 0x324b00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x324b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x324b04: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x324b04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x324b08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x324b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x324b0c: 0xc0c923c  jal         func_3248F0
    ctx->pc = 0x324B0Cu;
    SET_GPR_U32(ctx, 31, 0x324B14u);
    ctx->pc = 0x324B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324B0Cu;
    // 0x324b10: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3248F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3248F0u, 0x324B0Cu, 0x324B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324B14u;
label_324b14:
    // 0x324b14: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x324b14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x324b18: 0x14a00007  bnez        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x324B18u;
    {
        const bool branch_taken_0x324b18 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x324B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324B18u;
        // 0x324b1c: 0x28a20002  slti        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x324b18) {
            ctx->pc = 0x324B38u;
            goto label_324b38;
        }
    }
    ctx->pc = 0x324B20u;
    // 0x324b20: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x324b20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x324b24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x324b24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324b28: 0xc0c8e50  jal         func_323940
    ctx->pc = 0x324B28u;
    SET_GPR_U32(ctx, 31, 0x324B30u);
    ctx->pc = 0x324B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324B28u;
    // 0x324b2c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323940u, 0x324B28u, 0x324B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324B30u;
label_324b30:
    // 0x324b30: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x324B30u;
    {
        const bool branch_taken_0x324b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x324B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324B30u;
        // 0x324b34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324b30) {
            ctx->pc = 0x324B4Cu;
            goto label_324b4c;
        }
    }
    ctx->pc = 0x324B38u;
label_324b38:
    // 0x324b38: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x324B38u;
    {
        const bool branch_taken_0x324b38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x324B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324B38u;
        // 0x324b3c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324b38) {
            ctx->pc = 0x324B4Cu;
            goto label_324b4c;
        }
    }
    ctx->pc = 0x324B40u;
    // 0x324b40: 0xc0c90f6  jal         func_3243D8
    ctx->pc = 0x324B40u;
    SET_GPR_U32(ctx, 31, 0x324B48u);
    ctx->pc = 0x324B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324B40u;
    // 0x324b44: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3243D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3243D8u, 0x324B40u, 0x324B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324B48u;
label_324b48:
    // 0x324b48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x324b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_324b4c:
    // 0x324b4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x324b4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x324b50: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x324b50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x324b54: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x324b54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x324b58: 0x3e00008  jr          $ra
    ctx->pc = 0x324B58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x324B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324B58u;
        // 0x324b5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x324B58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x324B60u;
}
