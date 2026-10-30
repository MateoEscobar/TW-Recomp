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

// Function: sub_00360550
// Address: 0x360550 - 0x3605c8
void sub_00360550_0x360550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00360550_0x360550");
#endif

    switch (ctx->pc) {
        case 0x360578u: goto label_360578;
        case 0x360580u: goto label_360580;
        case 0x360594u: goto label_360594;
        case 0x36059cu: goto label_36059c;
        case 0x3605a8u: goto label_3605a8;
        default: break;
    }

    ctx->pc = 0x360550u;

    // 0x360550: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x360550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x360554: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x360554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x360558: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x360558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x36055c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x36055cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x360560: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x360560u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360564: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x360564u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360568: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x360568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x36056c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36056cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x360570: 0xc102472  jal         func_4091C8
    ctx->pc = 0x360570u;
    SET_GPR_U32(ctx, 31, 0x360578u);
    ctx->pc = 0x360574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360570u;
    // 0x360574: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x360570u, 0x360578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360578u;
label_360578:
    // 0x360578: 0xc10b108  jal         func_42C420
    ctx->pc = 0x360578u;
    SET_GPR_U32(ctx, 31, 0x360580u);
    ctx->pc = 0x36057Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360578u;
    // 0x36057c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x360578u, 0x360580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360580u;
label_360580:
    // 0x360580: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x360580u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360584: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x360584u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360588: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x360588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36058c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36058Cu;
    SET_GPR_U32(ctx, 31, 0x360594u);
    ctx->pc = 0x360590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36058Cu;
    // 0x360590: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36058Cu, 0x360594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360594u;
label_360594:
    // 0x360594: 0xc10b108  jal         func_42C420
    ctx->pc = 0x360594u;
    SET_GPR_U32(ctx, 31, 0x36059Cu);
    ctx->pc = 0x360598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360594u;
    // 0x360598: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x360594u, 0x36059Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36059Cu;
label_36059c:
    // 0x36059c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x36059cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3605a0: 0xc0abd4a  jal         func_2AF528
    ctx->pc = 0x3605A0u;
    SET_GPR_U32(ctx, 31, 0x3605A8u);
    ctx->pc = 0x3605A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3605A0u;
    // 0x3605a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF528u, 0x3605A0u, 0x3605A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3605A8u;
label_3605a8:
    // 0x3605a8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3605a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3605ac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3605acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3605b0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3605b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3605b4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3605b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3605b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3605b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3605bc: 0x3e00008  jr          $ra
    ctx->pc = 0x3605BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3605C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3605BCu;
        // 0x3605c0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3605BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3605C4u;
    // 0x3605c4: 0x0  nop
    ctx->pc = 0x3605c4u;
    // NOP
    ctx->pc = 0x3605c8u;
}
