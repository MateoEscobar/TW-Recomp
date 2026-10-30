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

// Function: sub_00324550
// Address: 0x324550 - 0x3245a8
void sub_00324550_0x324550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00324550_0x324550");
#endif

    switch (ctx->pc) {
        case 0x324574u: goto label_324574;
        case 0x324590u: goto label_324590;
        default: break;
    }

    ctx->pc = 0x324550u;

    // 0x324550: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x324550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x324554: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x324554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x324558: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x324558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x32455c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x32455cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324560: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x324560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x324564: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x324564u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324568: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x324568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32456c: 0xc0c8cc0  jal         func_323300
    ctx->pc = 0x32456Cu;
    SET_GPR_U32(ctx, 31, 0x324574u);
    ctx->pc = 0x324570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32456Cu;
    // 0x324570: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323300u, 0x32456Cu, 0x324574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324574u;
label_324574:
    // 0x324574: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x324574u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x324578: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x324578u;
    {
        const bool branch_taken_0x324578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32457Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324578u;
        // 0x32457c: 0x3c050057  lui         $a1, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324578) {
            ctx->pc = 0x324590u;
            goto label_324590;
        }
    }
    ctx->pc = 0x324580u;
    // 0x324580: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x324580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324584: 0x24a54890  addiu       $a1, $a1, 0x4890
    ctx->pc = 0x324584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18576));
    // 0x324588: 0xc0c9224  jal         func_324890
    ctx->pc = 0x324588u;
    SET_GPR_U32(ctx, 31, 0x324590u);
    ctx->pc = 0x32458Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324588u;
    // 0x32458c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324890u, 0x324588u, 0x324590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324590u;
label_324590:
    // 0x324590: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x324590u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x324594: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x324594u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x324598: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x324598u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32459c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32459cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3245a0: 0x3e00008  jr          $ra
    ctx->pc = 0x3245A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3245A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3245A0u;
        // 0x3245a4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3245A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3245A8u;
}
