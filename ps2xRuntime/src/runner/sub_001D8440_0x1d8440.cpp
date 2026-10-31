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

// Function: sub_001D8440
// Address: 0x1d8440 - 0x1d84a0
void sub_001D8440_0x1d8440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D8440_0x1d8440");
#endif

    switch (ctx->pc) {
        case 0x1d8460u: goto label_1d8460;
        case 0x1d8490u: goto label_1d8490;
        default: break;
    }

    ctx->pc = 0x1d8440u;

    // 0x1d8440: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d8440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d8444: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x1d8444u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
    // 0x1d8448: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x1d8448u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1d844c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d844cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d8450: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1d8450u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1d8454: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d8454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d8458: 0xc06d234  jal         func_1B48D0
    ctx->pc = 0x1D8458u;
    SET_GPR_U32(ctx, 31, 0x1D8460u);
    ctx->pc = 0x1D845Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8458u;
    // 0x1d845c: 0xac620840  sw          $v0, 0x840($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 2112), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B48D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B48D0u, 0x1D8458u, 0x1D8460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8460u;
label_1d8460:
    // 0x1d8460: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d8460u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1d8464: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x1d8464u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x1d8468: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1d8468u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x1d846c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1d846cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x1d8470: 0x8ca6ecf8  lw          $a2, -0x1308($a1)
    ctx->pc = 0x1d8470u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x50ECF8u));
    // 0x1d8474: 0x8c64ed00  lw          $a0, -0x1300($v1)
    ctx->pc = 0x1d8474u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50ED00u));
    // 0x1d8478: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1d8478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1d847c: 0x82182a  slt         $v1, $a0, $v0
    ctx->pc = 0x1d847cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d8480: 0x43200b  movn        $a0, $v0, $v1
    ctx->pc = 0x1d8480u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    // 0x1d8484: 0x86102a  slt         $v0, $a0, $a2
    ctx->pc = 0x1d8484u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1d8488: 0xc06d20e  jal         func_1B4838
    ctx->pc = 0x1D8488u;
    SET_GPR_U32(ctx, 31, 0x1D8490u);
    ctx->pc = 0x1D848Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8488u;
    // 0x1d848c: 0xc2200a  movz        $a0, $a2, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4838u, 0x1D8488u, 0x1D8490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8490u;
label_1d8490:
    // 0x1d8490: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d8490u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d8494: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x1d8494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1d8498: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D849Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8498u;
        // 0x1d849c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8498u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D84A0u;
}
