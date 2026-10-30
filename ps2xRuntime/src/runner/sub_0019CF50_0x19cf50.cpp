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

// Function: sub_0019CF50
// Address: 0x19cf50 - 0x19cf90
void sub_0019CF50_0x19cf50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019CF50_0x19cf50");
#endif

    ctx->pc = 0x19cf50u;

    // 0x19cf50: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x19cf50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x19cf54: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x19cf54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19cf58: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x19cf58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x19cf5c: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x19cf5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x19cf60: 0xe4401cf8  swc1        $f0, 0x1CF8($v0)
    ctx->pc = 0x19cf60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 7416), bits); }
    // 0x19cf64: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x19cf64u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cf68: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x19cf68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cf6c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19cf6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cf70: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x19cf70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19cf74: 0xe4601cfc  swc1        $f0, 0x1CFC($v1)
    ctx->pc = 0x19cf74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 7420), bits); }
    // 0x19cf78: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x19cf78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19cf7c: 0xe4e11cf0  swc1        $f1, 0x1CF0($a3)
    ctx->pc = 0x19cf7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 7408), bits); }
    // 0x19cf80: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x19cf80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19cf84: 0x3e00008  jr          $ra
    ctx->pc = 0x19CF84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19CF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CF84u;
        // 0x19cf88: 0xe4801cf4  swc1        $f0, 0x1CF4($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 7412), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19CF84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19CF8Cu;
    // 0x19cf8c: 0x0  nop
    ctx->pc = 0x19cf8cu;
    // NOP
    ctx->pc = 0x19cf90u;
}
