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

// Function: sub_002DBAE8
// Address: 0x2dbae8 - 0x2dbb50
void sub_002DBAE8_0x2dbae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DBAE8_0x2dbae8");
#endif

    switch (ctx->pc) {
        case 0x2dbb38u: goto label_2dbb38;
        default: break;
    }

    ctx->pc = 0x2dbae8u;

    // 0x2dbae8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2dbae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2dbaec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2dbaecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2dbaf0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2dbaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2dbaf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dbaf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2dbaf8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2dbaf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbafc: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x2dbafcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2dbb00: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2DBB00u;
    {
        const bool branch_taken_0x2dbb00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2DBB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBB00u;
        // 0x2dbb04: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbb00) {
            ctx->pc = 0x2DBB30u;
            goto label_2dbb30;
        }
    }
    ctx->pc = 0x2DBB08u;
    // 0x2dbb08: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x2dbb08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x2dbb0c: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x2dbb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2dbb10: 0x8c82b734  lw          $v0, -0x48CC($a0)
    ctx->pc = 0x2dbb10u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x50B734u));
    // 0x2dbb14: 0x8c450048  lw          $a1, 0x48($v0)
    ctx->pc = 0x2dbb14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x2dbb18: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x2dbb18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2dbb1c: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x2dbb1cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2dbb20: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DBB20u;
    {
        const bool branch_taken_0x2dbb20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBB20u;
        // 0x2dbb24: 0xae00001c  sw          $zero, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbb20) {
            ctx->pc = 0x2DBB40u;
            goto label_2dbb40;
        }
    }
    ctx->pc = 0x2DBB28u;
    // 0x2dbb28: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2DBB28u;
    {
        const bool branch_taken_0x2dbb28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBB28u;
        // 0x2dbb2c: 0xae050028  sw          $a1, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbb28) {
            ctx->pc = 0x2DBB40u;
            goto label_2dbb40;
        }
    }
    ctx->pc = 0x2DBB30u;
label_2dbb30:
    // 0x2dbb30: 0xc0a36c8  jal         func_28DB20
    ctx->pc = 0x2DBB30u;
    SET_GPR_U32(ctx, 31, 0x2DBB38u);
    ctx->pc = 0x2DBB34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBB30u;
    // 0x2dbb34: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x2DBB30u, 0x2DBB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBB38u;
label_2dbb38:
    // 0x2dbb38: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2dbb38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2dbb3c: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x2dbb3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
label_2dbb40:
    // 0x2dbb40: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2dbb40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dbb44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dbb44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dbb48: 0x3e00008  jr          $ra
    ctx->pc = 0x2DBB48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DBB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBB48u;
        // 0x2dbb4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DBB48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DBB50u;
}
