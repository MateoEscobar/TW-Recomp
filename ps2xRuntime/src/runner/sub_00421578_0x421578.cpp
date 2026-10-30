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

// Function: sub_00421578
// Address: 0x421578 - 0x4215d8
void sub_00421578_0x421578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00421578_0x421578");
#endif

    switch (ctx->pc) {
        case 0x4215a0u: goto label_4215a0;
        case 0x4215acu: goto label_4215ac;
        default: break;
    }

    ctx->pc = 0x421578u;

    // 0x421578: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x421578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x42157c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x42157cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x421580: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x421580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x421584: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x421584u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x421588: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x421588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x42158c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x42158cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x421590: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x421590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x421594: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x421594u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x421598: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x421598u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42159c: 0x0  nop
    ctx->pc = 0x42159cu;
    // NOP
label_4215a0:
    // 0x4215a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4215a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4215a4: 0xc10858e  jal         func_421638
    ctx->pc = 0x4215A4u;
    SET_GPR_U32(ctx, 31, 0x4215ACu);
    ctx->pc = 0x4215A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4215A4u;
    // 0x4215a8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x421638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x421638u, 0x4215A4u, 0x4215ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4215ACu;
label_4215ac:
    // 0x4215ac: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x4215acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x4215b0: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x4215b0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x4215b4: 0x2e030006  sltiu       $v1, $s0, 0x6
    ctx->pc = 0x4215b4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x4215b8: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x4215B8u;
    {
        const bool branch_taken_0x4215b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4215BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4215B8u;
        // 0x4215bc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4215b8) {
            ctx->pc = 0x4215A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4215a0;
        }
    }
    ctx->pc = 0x4215C0u;
    // 0x4215c0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4215c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4215c4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4215c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4215c8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4215c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4215cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4215ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4215d0: 0x3e00008  jr          $ra
    ctx->pc = 0x4215D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4215D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4215D0u;
        // 0x4215d4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4215D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4215D8u;
}
