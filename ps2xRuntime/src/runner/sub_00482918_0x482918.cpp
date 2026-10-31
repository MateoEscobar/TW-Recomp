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

// Function: sub_00482918
// Address: 0x482918 - 0x482980
void sub_00482918_0x482918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00482918_0x482918");
#endif

    switch (ctx->pc) {
        case 0x482968u: goto label_482968;
        default: break;
    }

    ctx->pc = 0x482918u;

    // 0x482918: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x482918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x48291c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x48291cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x482920: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x482920u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x482924: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x482924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x482928: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x482928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x48292c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x48292cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x482930: 0x68a20007  ldl         $v0, 0x7($a1)
    ctx->pc = 0x482930u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x482934: 0x6ca20000  ldr         $v0, 0x0($a1)
    ctx->pc = 0x482934u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x482938: 0xb202006f  sdl         $v0, 0x6F($s0)
    ctx->pc = 0x482938u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 111); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x48293c: 0xb6020068  sdr         $v0, 0x68($s0)
    ctx->pc = 0x48293cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 104); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x482940: 0xc6010068  lwc1        $f1, 0x68($s0)
    ctx->pc = 0x482940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x482944: 0xc602006c  lwc1        $f2, 0x6C($s0)
    ctx->pc = 0x482944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x482948: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x482948u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x48294c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x48294cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x482950: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x482950u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x482954: 0xe6010070  swc1        $f1, 0x70($s0)
    ctx->pc = 0x482954u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x482958: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x482958u;
    {
        const bool branch_taken_0x482958 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x48295Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x482958u;
        // 0x48295c: 0xe6000074  swc1        $f0, 0x74($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x482958) {
            ctx->pc = 0x482968u;
            goto label_482968;
        }
    }
    ctx->pc = 0x482960u;
    // 0x482960: 0xc12105a  jal         func_484168
    ctx->pc = 0x482960u;
    SET_GPR_U32(ctx, 31, 0x482968u);
    ctx->pc = 0x484168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x484168u, 0x482960u, 0x482968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x482968u;
label_482968:
    // 0x482968: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x482968u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48296c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48296cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x482970: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x482970u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x482974: 0x3e00008  jr          $ra
    ctx->pc = 0x482974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x482978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x482974u;
        // 0x482978: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x482974u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48297Cu;
    // 0x48297c: 0x0  nop
    ctx->pc = 0x48297cu;
    // NOP
    ctx->pc = 0x482980u;
}
