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

// Function: sub_003244C0
// Address: 0x3244c0 - 0x324550
void sub_003244C0_0x3244c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003244C0_0x3244c0");
#endif

    switch (ctx->pc) {
        case 0x3244f0u: goto label_3244f0;
        case 0x324500u: goto label_324500;
        case 0x32450cu: goto label_32450c;
        case 0x324520u: goto label_324520;
        case 0x324530u: goto label_324530;
        default: break;
    }

    ctx->pc = 0x3244c0u;

    // 0x3244c0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3244c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x3244c4: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x3244c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x3244c8: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x3244c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x3244cc: 0x3c100057  lui         $s0, 0x57
    ctx->pc = 0x3244ccu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
    // 0x3244d0: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x3244d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x3244d4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3244d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3244d8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3244d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3244dc: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x3244dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x3244e0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3244e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3244e4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x3244e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3244e8: 0xc0c8d3a  jal         func_3234E8
    ctx->pc = 0x3244E8u;
    SET_GPR_U32(ctx, 31, 0x3244F0u);
    ctx->pc = 0x3244ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3244E8u;
    // 0x3244ec: 0x26104878  addiu       $s0, $s0, 0x4878 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3234E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3234E8u, 0x3244E8u, 0x3244F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3244F0u;
label_3244f0:
    // 0x3244f0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3244f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3244f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3244f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3244f8: 0xc0c8d2e  jal         func_3234B8
    ctx->pc = 0x3244F8u;
    SET_GPR_U32(ctx, 31, 0x324500u);
    ctx->pc = 0x3244FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3244F8u;
    // 0x3244fc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3234B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3234B8u, 0x3244F8u, 0x324500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324500u;
label_324500:
    // 0x324500: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x324500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324504: 0xc0c8d3a  jal         func_3234E8
    ctx->pc = 0x324504u;
    SET_GPR_U32(ctx, 31, 0x32450Cu);
    ctx->pc = 0x324508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324504u;
    // 0x324508: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3234E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3234E8u, 0x324504u, 0x32450Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32450Cu;
label_32450c:
    // 0x32450c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x32450cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324510: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x324510u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324514: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x324514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324518: 0xc10ca28  jal         func_4328A0
    ctx->pc = 0x324518u;
    SET_GPR_U32(ctx, 31, 0x324520u);
    ctx->pc = 0x32451Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324518u;
    // 0x32451c: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4328A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4328A0u, 0x324518u, 0x324520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324520u;
label_324520:
    // 0x324520: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x324520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324524: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x324524u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324528: 0xc0c910e  jal         func_324438
    ctx->pc = 0x324528u;
    SET_GPR_U32(ctx, 31, 0x324530u);
    ctx->pc = 0x32452Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324528u;
    // 0x32452c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324438u, 0x324528u, 0x324530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324530u;
label_324530:
    // 0x324530: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x324530u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x324534: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x324534u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x324538: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x324538u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x32453c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x32453cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x324540: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x324540u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x324544: 0x3e00008  jr          $ra
    ctx->pc = 0x324544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x324548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324544u;
        // 0x324548: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x324544u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32454Cu;
    // 0x32454c: 0x0  nop
    ctx->pc = 0x32454cu;
    // NOP
    ctx->pc = 0x324550u;
}
