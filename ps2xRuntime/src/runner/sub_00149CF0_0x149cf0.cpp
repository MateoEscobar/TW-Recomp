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

// Function: sub_00149CF0
// Address: 0x149cf0 - 0x149d38
void sub_00149CF0_0x149cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00149CF0_0x149cf0");
#endif

    switch (ctx->pc) {
        case 0x149d0cu: goto label_149d0c;
        case 0x149d28u: goto label_149d28;
        default: break;
    }

    ctx->pc = 0x149cf0u;

    // 0x149cf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x149cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x149cf4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x149cf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x149cf8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x149cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x149cfc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x149cfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149d00: 0x8e040104  lw          $a0, 0x104($s0)
    ctx->pc = 0x149d00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x149d04: 0xc1136cc  jal         func_44DB30
    ctx->pc = 0x149D04u;
    SET_GPR_U32(ctx, 31, 0x149D0Cu);
    ctx->pc = 0x149D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149D04u;
    // 0x149d08: 0x8e050108  lw          $a1, 0x108($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44DB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44DB30u, 0x149D04u, 0x149D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149D0Cu;
label_149d0c:
    // 0x149d0c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x149d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x149d10: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x149D10u;
    {
        const bool branch_taken_0x149d10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x149D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149D10u;
        // 0x149d14: 0x3c020015  lui         $v0, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149d10) {
            ctx->pc = 0x149D20u;
            goto label_149d20;
        }
    }
    ctx->pc = 0x149D18u;
    // 0x149d18: 0x24429d38  addiu       $v0, $v0, -0x62C8
    ctx->pc = 0x149d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942008));
    // 0x149d1c: 0xae020100  sw          $v0, 0x100($s0)
    ctx->pc = 0x149d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
label_149d20:
    // 0x149d20: 0xc0525c8  jal         func_149720
    ctx->pc = 0x149D20u;
    SET_GPR_U32(ctx, 31, 0x149D28u);
    ctx->pc = 0x149D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149D20u;
    // 0x149d24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149720u, 0x149D20u, 0x149D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149D28u;
label_149d28:
    // 0x149d28: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x149d28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x149d2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x149d2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x149d30: 0x3e00008  jr          $ra
    ctx->pc = 0x149D30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x149D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149D30u;
        // 0x149d34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x149D30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x149D38u;
}
