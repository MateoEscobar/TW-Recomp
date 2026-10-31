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

// Function: sub_002236C8
// Address: 0x2236c8 - 0x223720
void sub_002236C8_0x2236c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002236C8_0x2236c8");
#endif

    switch (ctx->pc) {
        case 0x2236d8u: goto label_2236d8;
        default: break;
    }

    ctx->pc = 0x2236c8u;

    // 0x2236c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2236c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2236cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2236ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2236d0: 0xc088ade  jal         func_222B78
    ctx->pc = 0x2236D0u;
    SET_GPR_U32(ctx, 31, 0x2236D8u);
    ctx->pc = 0x222B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B78u, 0x2236D0u, 0x2236D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2236D8u;
label_2236d8:
    // 0x2236d8: 0x80420037  lb          $v0, 0x37($v0)
    ctx->pc = 0x2236d8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 55)));
    // 0x2236dc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2236DCu;
    {
        const bool branch_taken_0x2236dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2236dc) {
            ctx->pc = 0x22370Cu;
            goto label_22370c;
        }
    }
    ctx->pc = 0x2236E4u;
    // 0x2236e4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2236e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2236e8: 0x0  nop
    ctx->pc = 0x2236e8u;
    // NOP
    // 0x2236ec: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2236ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2236f0: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x2236f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x2236f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2236f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2236f8: 0x3c013d80  lui         $at, 0x3D80
    ctx->pc = 0x2236f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15744 << 16));
    // 0x2236fc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2236fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x223700: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x223700u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x223704: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x223704u;
    {
        const bool branch_taken_0x223704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223704u;
        // 0x223708: 0x46020002  mul.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x223704) {
            ctx->pc = 0x223710u;
            goto label_223710;
        }
    }
    ctx->pc = 0x22370Cu;
label_22370c:
    // 0x22370c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22370cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_223710:
    // 0x223710: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x223710u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x223714: 0x3e00008  jr          $ra
    ctx->pc = 0x223714u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x223718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223714u;
        // 0x223718: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x223714u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22371Cu;
    // 0x22371c: 0x0  nop
    ctx->pc = 0x22371cu;
    // NOP
    ctx->pc = 0x223720u;
}
