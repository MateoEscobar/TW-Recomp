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

// Function: sub_0010A500
// Address: 0x10a500 - 0x10a558
void sub_0010A500_0x10a500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010A500_0x10a500");
#endif

    ctx->pc = 0x10a500u;

    // 0x10a500: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x10a500u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x10a504: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x10a504u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x10a508: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x10a508u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10a50c: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x10a50cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x10a510: 0x46016329  min.s       $f12, $f12, $f1
    ctx->pc = 0x10a510u;
    ctx->f[12] = std::min(ctx->f[12], ctx->f[1]);
    // 0x10a514: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x10a514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x10a518: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10A518u;
    {
        const bool branch_taken_0x10a518 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A518u;
        // 0x10a51c: 0x46006328  max.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = std::max(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a518) {
            ctx->pc = 0x10A528u;
            goto label_10a528;
        }
    }
    ctx->pc = 0x10A520u;
    // 0x10a520: 0x3e00008  jr          $ra
    ctx->pc = 0x10A520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A520u;
        // 0x10a524: 0xe48c0034  swc1        $f12, 0x34($a0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10A520u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10A528u;
label_10a528:
    // 0x10a528: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x10a528u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x10a52c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10a52cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10a530: 0x0  nop
    ctx->pc = 0x10a530u;
    // NOP
    // 0x10a534: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x10a534u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x10a538: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x10a538u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x10a53c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x10a53cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x10a540: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x10a540u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x10a544: 0x0  nop
    ctx->pc = 0x10a544u;
    // NOP
    // 0x10a548: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x10a548u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x10a54c: 0x3e00008  jr          $ra
    ctx->pc = 0x10A54Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A54Cu;
        // 0x10a550: 0xe4810034  swc1        $f1, 0x34($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10A54Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10A554u;
    // 0x10a554: 0x0  nop
    ctx->pc = 0x10a554u;
    // NOP
    ctx->pc = 0x10a558u;
}
