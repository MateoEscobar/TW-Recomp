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

// Function: sub_00356028
// Address: 0x356028 - 0x356090
void sub_00356028_0x356028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00356028_0x356028");
#endif

    switch (ctx->pc) {
        case 0x356084u: goto label_356084;
        default: break;
    }

    ctx->pc = 0x356028u;

    // 0x356028: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x356028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35602c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35602cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x356030: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x356030u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x356034: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x356034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x356038: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x356038u;
    {
        const bool branch_taken_0x356038 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x35603Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356038u;
        // 0x35603c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356038) {
            ctx->pc = 0x356054u;
            goto label_356054;
        }
    }
    ctx->pc = 0x356040u;
    // 0x356040: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x356040u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x356044: 0x0  nop
    ctx->pc = 0x356044u;
    // NOP
    // 0x356048: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x356048u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x35604c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x35604Cu;
    {
        const bool branch_taken_0x35604c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35604c) {
            ctx->pc = 0x35606Cu;
            goto label_35606c;
        }
    }
    ctx->pc = 0x356054u;
label_356054:
    // 0x356054: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x356054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x356058: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x356058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x35605c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x35605cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x356060: 0x0  nop
    ctx->pc = 0x356060u;
    // NOP
    // 0x356064: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x356064u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x356068: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x356068u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_35606c:
    // 0x35606c: 0x3c013d08  lui         $at, 0x3D08
    ctx->pc = 0x35606cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15624 << 16));
    // 0x356070: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x356070u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
    // 0x356074: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x356074u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x356078: 0x8c850018  lw          $a1, 0x18($a0)
    ctx->pc = 0x356078u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x35607c: 0xc0d57a6  jal         func_355E98
    ctx->pc = 0x35607Cu;
    SET_GPR_U32(ctx, 31, 0x356084u);
    ctx->pc = 0x356080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35607Cu;
    // 0x356080: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x355E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x355E98u, 0x35607Cu, 0x356084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356084u;
label_356084:
    // 0x356084: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x356084u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x356088: 0x3e00008  jr          $ra
    ctx->pc = 0x356088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35608Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356088u;
        // 0x35608c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x356088u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x356090u;
}
