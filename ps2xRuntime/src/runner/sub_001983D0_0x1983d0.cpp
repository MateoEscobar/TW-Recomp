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

// Function: sub_001983D0
// Address: 0x1983d0 - 0x198428
void sub_001983D0_0x1983d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001983D0_0x1983d0");
#endif

    switch (ctx->pc) {
        case 0x1983ecu: goto label_1983ec;
        case 0x198410u: goto label_198410;
        default: break;
    }

    ctx->pc = 0x1983d0u;

    // 0x1983d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1983d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1983d4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1983d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1983d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1983d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1983dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1983dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1983e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1983e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1983e4: 0xc118a48  jal         func_462920
    ctx->pc = 0x1983E4u;
    SET_GPR_U32(ctx, 31, 0x1983ECu);
    ctx->pc = 0x1983E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1983E4u;
    // 0x1983e8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x462920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x462920u, 0x1983E4u, 0x1983ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1983ECu;
label_1983ec:
    // 0x1983ec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1983ECu;
    {
        const bool branch_taken_0x1983ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1983F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1983ECu;
        // 0x1983f0: 0x3c05001a  lui         $a1, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)26 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1983ec) {
            ctx->pc = 0x198400u;
            goto label_198400;
        }
    }
    ctx->pc = 0x1983F4u;
    // 0x1983f4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1983f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1983f8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1983F8u;
    {
        const bool branch_taken_0x1983f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1983FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1983F8u;
        // 0x1983fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1983f8) {
            ctx->pc = 0x198414u;
            goto label_198414;
        }
    }
    ctx->pc = 0x198400u;
label_198400:
    // 0x198400: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x198400u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198404: 0x24a583d0  addiu       $a1, $a1, -0x7C30
    ctx->pc = 0x198404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935504));
    // 0x198408: 0xc120f80  jal         func_483E00
    ctx->pc = 0x198408u;
    SET_GPR_U32(ctx, 31, 0x198410u);
    ctx->pc = 0x19840Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198408u;
    // 0x19840c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x483E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x483E00u, 0x198408u, 0x198410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198410u;
label_198410:
    // 0x198410: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x198410u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_198414:
    // 0x198414: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x198414u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x198418: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x198418u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19841c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19841cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x198420: 0x3e00008  jr          $ra
    ctx->pc = 0x198420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198420u;
        // 0x198424: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198420u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x198428u;
}
