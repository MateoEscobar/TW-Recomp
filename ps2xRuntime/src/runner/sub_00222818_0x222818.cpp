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

// Function: sub_00222818
// Address: 0x222818 - 0x222868
void sub_00222818_0x222818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00222818_0x222818");
#endif

    switch (ctx->pc) {
        case 0x222858u: goto label_222858;
        default: break;
    }

    ctx->pc = 0x222818u;

    // 0x222818: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x222818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22281c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22281cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x222820: 0x808201b0  lb          $v0, 0x1B0($a0)
    ctx->pc = 0x222820u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 432)));
    // 0x222824: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x222824u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x222828: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x222828u;
    {
        const bool branch_taken_0x222828 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22282Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222828u;
        // 0x22282c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222828) {
            ctx->pc = 0x222844u;
            goto label_222844;
        }
    }
    ctx->pc = 0x222830u;
    // 0x222830: 0xc4800374  lwc1        $f0, 0x374($a0)
    ctx->pc = 0x222830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x222834: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x222834u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x222838: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x222838u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x22283c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x22283Cu;
    {
        const bool branch_taken_0x22283c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22283Cu;
        // 0x222840: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22283c) {
            ctx->pc = 0x22285Cu;
            goto label_22285c;
        }
    }
    ctx->pc = 0x222844u;
label_222844:
    // 0x222844: 0x8c850380  lw          $a1, 0x380($a0)
    ctx->pc = 0x222844u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x222848: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x222848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    // 0x22284c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x22284cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x222850: 0xc107908  jal         func_41E420
    ctx->pc = 0x222850u;
    SET_GPR_U32(ctx, 31, 0x222858u);
    ctx->pc = 0x222854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222850u;
    // 0x222854: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E420u, 0x222850u, 0x222858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222858u;
label_222858:
    // 0x222858: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x222858u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22285c:
    // 0x22285c: 0x3e00008  jr          $ra
    ctx->pc = 0x22285Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x222860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22285Cu;
        // 0x222860: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22285Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x222864u;
    // 0x222864: 0x0  nop
    ctx->pc = 0x222864u;
    // NOP
    ctx->pc = 0x222868u;
}
