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

// Function: sub_00104410
// Address: 0x104410 - 0x104478
void sub_00104410_0x104410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00104410_0x104410");
#endif

    switch (ctx->pc) {
        case 0x10446cu: goto label_10446c;
        default: break;
    }

    ctx->pc = 0x104410u;

    // 0x104410: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x104410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x104414: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x104414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x104418: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x104418u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x10441c: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x10441cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x104420: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x104420u;
    {
        const bool branch_taken_0x104420 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x104424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104420u;
        // 0x104424: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104420) {
            ctx->pc = 0x10443Cu;
            goto label_10443c;
        }
    }
    ctx->pc = 0x104428u;
    // 0x104428: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x104428u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10442c: 0x0  nop
    ctx->pc = 0x10442cu;
    // NOP
    // 0x104430: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x104430u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x104434: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x104434u;
    {
        const bool branch_taken_0x104434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x104434) {
            ctx->pc = 0x104454u;
            goto label_104454;
        }
    }
    ctx->pc = 0x10443Cu;
label_10443c:
    // 0x10443c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x10443cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x104440: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x104440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x104444: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x104444u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x104448: 0x0  nop
    ctx->pc = 0x104448u;
    // NOP
    // 0x10444c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x10444cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x104450: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x104450u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_104454:
    // 0x104454: 0x3c013d08  lui         $at, 0x3D08
    ctx->pc = 0x104454u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15624 << 16));
    // 0x104458: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x104458u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
    // 0x10445c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x10445cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x104460: 0x8c850020  lw          $a1, 0x20($a0)
    ctx->pc = 0x104460u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x104464: 0xc04107e  jal         func_1041F8
    ctx->pc = 0x104464u;
    SET_GPR_U32(ctx, 31, 0x10446Cu);
    ctx->pc = 0x104468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104464u;
    // 0x104468: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1041F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1041F8u, 0x104464u, 0x10446Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10446Cu;
label_10446c:
    // 0x10446c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10446cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x104470: 0x3e00008  jr          $ra
    ctx->pc = 0x104470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x104474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104470u;
        // 0x104474: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104470u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x104478u;
}
