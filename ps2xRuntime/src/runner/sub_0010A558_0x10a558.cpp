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

// Function: sub_0010A558
// Address: 0x10a558 - 0x10a5b8
void sub_0010A558_0x10a558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010A558_0x10a558");
#endif

    ctx->pc = 0x10a558u;

    // 0x10a558: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x10a558u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x10a55c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x10a55cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x10a560: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x10a560u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10a564: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x10a564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x10a568: 0x46016329  min.s       $f12, $f12, $f1
    ctx->pc = 0x10a568u;
    ctx->f[12] = std::min(ctx->f[12], ctx->f[1]);
    // 0x10a56c: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x10a56cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x10a570: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10A570u;
    {
        const bool branch_taken_0x10a570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A570u;
        // 0x10a574: 0x46006328  max.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = std::max(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a570) {
            ctx->pc = 0x10A580u;
            goto label_10a580;
        }
    }
    ctx->pc = 0x10A578u;
    // 0x10a578: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x10A578u;
    {
        const bool branch_taken_0x10a578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A578u;
        // 0x10a57c: 0xe48c0038  swc1        $f12, 0x38($a0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a578) {
            ctx->pc = 0x10A5A8u;
            goto label_10a5a8;
        }
    }
    ctx->pc = 0x10A580u;
label_10a580:
    // 0x10a580: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x10a580u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x10a584: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10a584u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10a588: 0x0  nop
    ctx->pc = 0x10a588u;
    // NOP
    // 0x10a58c: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x10a58cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x10a590: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x10a590u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x10a594: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x10a594u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x10a598: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x10a598u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x10a59c: 0x0  nop
    ctx->pc = 0x10a59cu;
    // NOP
    // 0x10a5a0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x10a5a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x10a5a4: 0xe4810038  swc1        $f1, 0x38($a0)
    ctx->pc = 0x10a5a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
label_10a5a8:
    // 0x10a5a8: 0xc4800038  lwc1        $f0, 0x38($a0)
    ctx->pc = 0x10a5a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10a5ac: 0x3e00008  jr          $ra
    ctx->pc = 0x10A5ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A5ACu;
        // 0x10a5b0: 0xe4800034  swc1        $f0, 0x34($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10A5ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10A5B4u;
    // 0x10a5b4: 0x0  nop
    ctx->pc = 0x10a5b4u;
    // NOP
    ctx->pc = 0x10a5b8u;
}
