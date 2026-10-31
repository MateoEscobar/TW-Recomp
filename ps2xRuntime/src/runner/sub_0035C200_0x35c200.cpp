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

// Function: sub_0035C200
// Address: 0x35c200 - 0x35c278
void sub_0035C200_0x35c200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035C200_0x35c200");
#endif

    switch (ctx->pc) {
        case 0x35c228u: goto label_35c228;
        case 0x35c230u: goto label_35c230;
        case 0x35c244u: goto label_35c244;
        case 0x35c24cu: goto label_35c24c;
        case 0x35c258u: goto label_35c258;
        default: break;
    }

    ctx->pc = 0x35c200u;

    // 0x35c200: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x35c200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x35c204: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35c204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35c208: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x35c208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x35c20c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x35c20cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x35c210: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35c210u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c214: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x35c214u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c218: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x35c218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x35c21c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35c21cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35c220: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35C220u;
    SET_GPR_U32(ctx, 31, 0x35C228u);
    ctx->pc = 0x35C224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C220u;
    // 0x35c224: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35C220u, 0x35C228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C228u;
label_35c228:
    // 0x35c228: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35C228u;
    SET_GPR_U32(ctx, 31, 0x35C230u);
    ctx->pc = 0x35C22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C228u;
    // 0x35c22c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35C228u, 0x35C230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C230u;
label_35c230:
    // 0x35c230: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x35c230u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c234: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x35c234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35c238: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x35c238u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c23c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35C23Cu;
    SET_GPR_U32(ctx, 31, 0x35C244u);
    ctx->pc = 0x35C240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C23Cu;
    // 0x35c240: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35C23Cu, 0x35C244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C244u;
label_35c244:
    // 0x35c244: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x35C244u;
    SET_GPR_U32(ctx, 31, 0x35C24Cu);
    ctx->pc = 0x35C248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C244u;
    // 0x35c248: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x35C244u, 0x35C24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C24Cu;
label_35c24c:
    // 0x35c24c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x35c24cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c250: 0xc08e0e8  jal         func_2383A0
    ctx->pc = 0x35C250u;
    SET_GPR_U32(ctx, 31, 0x35C258u);
    ctx->pc = 0x35C254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C250u;
    // 0x35c254: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2383A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2383A0u, 0x35C250u, 0x35C258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C258u;
label_35c258:
    // 0x35c258: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x35c258u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35c25c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35c25cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c260: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x35c260u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35c264: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x35c264u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35c268: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35c268u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35c26c: 0x3e00008  jr          $ra
    ctx->pc = 0x35C26Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35C270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C26Cu;
        // 0x35c270: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35C26Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35C274u;
    // 0x35c274: 0x0  nop
    ctx->pc = 0x35c274u;
    // NOP
    ctx->pc = 0x35c278u;
}
