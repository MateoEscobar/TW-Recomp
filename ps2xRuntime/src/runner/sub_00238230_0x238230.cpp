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

// Function: sub_00238230
// Address: 0x238230 - 0x238288
void sub_00238230_0x238230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00238230_0x238230");
#endif

    switch (ctx->pc) {
        case 0x238250u: goto label_238250;
        case 0x238258u: goto label_238258;
        case 0x23826cu: goto label_23826c;
        default: break;
    }

    ctx->pc = 0x238230u;

    // 0x238230: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x238230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x238234: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x238234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x238238: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x238238u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x23823c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x23823cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238240: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x238240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x238244: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x238244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x238248: 0xc0e4060  jal         func_390180
    ctx->pc = 0x238248u;
    SET_GPR_U32(ctx, 31, 0x238250u);
    ctx->pc = 0x23824Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238248u;
    // 0x23824c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x238248u, 0x238250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238250u;
label_238250:
    // 0x238250: 0xc08a61a  jal         func_229868
    ctx->pc = 0x238250u;
    SET_GPR_U32(ctx, 31, 0x238258u);
    ctx->pc = 0x238254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238250u;
    // 0x238254: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x238250u, 0x238258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238258u;
label_238258:
    // 0x238258: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x238258u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23825c: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23825Cu;
    {
        const bool branch_taken_0x23825c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x238260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23825Cu;
        // 0x238260: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23825c) {
            ctx->pc = 0x238274u;
            goto label_238274;
        }
    }
    ctx->pc = 0x238264u;
    // 0x238264: 0xc0897f2  jal         func_225FC8
    ctx->pc = 0x238264u;
    SET_GPR_U32(ctx, 31, 0x23826Cu);
    ctx->pc = 0x238268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238264u;
    // 0x238268: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225FC8u, 0x238264u, 0x23826Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23826Cu;
label_23826c:
    // 0x23826c: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x23826cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x238270: 0xae020278  sw          $v0, 0x278($s0)
    ctx->pc = 0x238270u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 632), GPR_U32(ctx, 2));
label_238274:
    // 0x238274: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x238274u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x238278: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x238278u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23827c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23827cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x238280: 0x3e00008  jr          $ra
    ctx->pc = 0x238280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x238284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238280u;
        // 0x238284: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x238280u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x238288u;
}
