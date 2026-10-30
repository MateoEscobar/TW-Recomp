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

// Function: sub_003354E0
// Address: 0x3354e0 - 0x335540
void sub_003354E0_0x3354e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003354E0_0x3354e0");
#endif

    switch (ctx->pc) {
        case 0x3354f0u: goto label_3354f0;
        default: break;
    }

    ctx->pc = 0x3354e0u;

    // 0x3354e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3354e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3354e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3354e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3354e8: 0xc0cd4e4  jal         func_335390
    ctx->pc = 0x3354E8u;
    SET_GPR_U32(ctx, 31, 0x3354F0u);
    ctx->pc = 0x335390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335390u, 0x3354E8u, 0x3354F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3354F0u;
label_3354f0:
    // 0x3354f0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3354F0u;
    {
        const bool branch_taken_0x3354f0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3354F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3354F0u;
        // 0x3354f4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3354f0) {
            ctx->pc = 0x33550Cu;
            goto label_33550c;
        }
    }
    ctx->pc = 0x3354F8u;
    // 0x3354f8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3354f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3354fc: 0x0  nop
    ctx->pc = 0x3354fcu;
    // NOP
    // 0x335500: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x335500u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x335504: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x335504u;
    {
        const bool branch_taken_0x335504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x335504) {
            ctx->pc = 0x335524u;
            goto label_335524;
        }
    }
    ctx->pc = 0x33550Cu;
label_33550c:
    // 0x33550c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x33550cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x335510: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x335510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x335514: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x335514u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x335518: 0x0  nop
    ctx->pc = 0x335518u;
    // NOP
    // 0x33551c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x33551cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x335520: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x335520u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_335524:
    // 0x335524: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x335524u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x335528: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x335528u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33552c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33552cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x335530: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x335530u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x335534: 0x3e00008  jr          $ra
    ctx->pc = 0x335534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x335538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335534u;
        // 0x335538: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x335534u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33553Cu;
    // 0x33553c: 0x0  nop
    ctx->pc = 0x33553cu;
    // NOP
    ctx->pc = 0x335540u;
}
