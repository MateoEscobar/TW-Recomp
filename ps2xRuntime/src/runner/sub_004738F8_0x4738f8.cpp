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

// Function: sub_004738F8
// Address: 0x4738f8 - 0x473940
void sub_004738F8_0x4738f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004738F8_0x4738f8");
#endif

    switch (ctx->pc) {
        case 0x47392cu: goto label_47392c;
        default: break;
    }

    ctx->pc = 0x4738f8u;

    // 0x4738f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4738f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4738fc: 0x8f828518  lw          $v0, -0x7AE8($gp)
    ctx->pc = 0x4738fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935832)));
    // 0x473900: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x473900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x473904: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x473904u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x473908: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x473908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x47390c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x47390cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x473910: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x473910u;
    {
        const bool branch_taken_0x473910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x473914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x473910u;
        // 0x473914: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x473910) {
            ctx->pc = 0x47392Cu;
            goto label_47392c;
        }
    }
    ctx->pc = 0x473918u;
    // 0x473918: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x473918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x47391c: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x47391Cu;
    {
        const bool branch_taken_0x47391c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x473920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47391Cu;
        // 0x473920: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47391c) {
            ctx->pc = 0x473930u;
            goto label_473930;
        }
    }
    ctx->pc = 0x473924u;
    // 0x473924: 0xc11cb0a  jal         func_472C28
    ctx->pc = 0x473924u;
    SET_GPR_U32(ctx, 31, 0x47392Cu);
    ctx->pc = 0x473928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x473924u;
    // 0x473928: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x472C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x472C28u, 0x473924u, 0x47392Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47392Cu;
label_47392c:
    // 0x47392c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x47392cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_473930:
    // 0x473930: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x473930u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x473934: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x473934u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x473938: 0x3e00008  jr          $ra
    ctx->pc = 0x473938u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47393Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x473938u;
        // 0x47393c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x473938u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x473940u;
}
