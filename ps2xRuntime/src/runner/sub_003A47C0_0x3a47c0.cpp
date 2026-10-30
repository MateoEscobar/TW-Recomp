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

// Function: sub_003A47C0
// Address: 0x3a47c0 - 0x3a4810
void sub_003A47C0_0x3a47c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A47C0_0x3a47c0");
#endif

    switch (ctx->pc) {
        case 0x3a47d4u: goto label_3a47d4;
        default: break;
    }

    ctx->pc = 0x3a47c0u;

    // 0x3a47c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a47c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3a47c4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3a47c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3a47c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a47c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a47cc: 0xc094040  jal         func_250100
    ctx->pc = 0x3A47CCu;
    SET_GPR_U32(ctx, 31, 0x3A47D4u);
    ctx->pc = 0x3A47D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A47CCu;
    // 0x3a47d0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250100u, 0x3A47CCu, 0x3A47D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A47D4u;
label_3a47d4:
    // 0x3a47d4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3a47d4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a47d8: 0x50600008  beql        $v1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3A47D8u;
    {
        const bool branch_taken_0x3a47d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a47d8) {
            ctx->pc = 0x3A47DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A47D8u;
            // 0x3a47dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A47FCu;
            goto label_3a47fc;
        }
    }
    ctx->pc = 0x3A47E0u;
    // 0x3a47e0: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A47E0u;
    {
        const bool branch_taken_0x3a47e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A47E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A47E0u;
        // 0x3a47e4: 0x94620048  lhu         $v0, 0x48($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a47e0) {
            ctx->pc = 0x3A47F0u;
            goto label_3a47f0;
        }
    }
    ctx->pc = 0x3A47E8u;
    // 0x3a47e8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3A47E8u;
    {
        const bool branch_taken_0x3a47e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A47ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A47E8u;
        // 0x3a47ec: 0x3042fff7  andi        $v0, $v0, 0xFFF7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65527);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a47e8) {
            ctx->pc = 0x3A47F4u;
            goto label_3a47f4;
        }
    }
    ctx->pc = 0x3A47F0u;
label_3a47f0:
    // 0x3a47f0: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x3a47f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_3a47f4:
    // 0x3a47f4: 0xa4620048  sh          $v0, 0x48($v1)
    ctx->pc = 0x3a47f4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 72), (uint16_t)GPR_U32(ctx, 2));
    // 0x3a47f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a47f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a47fc:
    // 0x3a47fc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3a47fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a4800: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a4800u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a4804: 0x3e00008  jr          $ra
    ctx->pc = 0x3A4804u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A4808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4804u;
        // 0x3a4808: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A4804u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A480Cu;
    // 0x3a480c: 0x0  nop
    ctx->pc = 0x3a480cu;
    // NOP
    ctx->pc = 0x3a4810u;
}
