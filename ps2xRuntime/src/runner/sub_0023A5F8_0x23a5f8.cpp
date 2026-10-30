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

// Function: sub_0023A5F8
// Address: 0x23a5f8 - 0x23a630
void sub_0023A5F8_0x23a5f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023A5F8_0x23a5f8");
#endif

    ctx->pc = 0x23a5f8u;

    // 0x23a5f8: 0x460c6000  add.s       $f0, $f12, $f12
    ctx->pc = 0x23a5f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
    // 0x23a5fc: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x23a5fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
    // 0x23a600: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x23a600u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
    // 0x23a604: 0x3c080051  lui         $t0, 0x51
    ctx->pc = 0x23a604u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
    // 0x23a608: 0x3c090051  lui         $t1, 0x51
    ctx->pc = 0x23a608u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)81 << 16));
    // 0x23a60c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x23a60cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x23a610: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x23a610u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x23a614: 0xacc50304  sw          $a1, 0x304($a2)
    ctx->pc = 0x23a614u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x510304u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x510304u, _value); } while (0);
    // 0x23a618: 0xace40308  sw          $a0, 0x308($a3)
    ctx->pc = 0x23a618u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x510308u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x510308u, _value); } while (0);
    // 0x23a61c: 0xe44d0314  swc1        $f13, 0x314($v0)
    ctx->pc = 0x23a61cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x510314u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x510314u, _value); } while (0); }
    // 0x23a620: 0xe4600318  swc1        $f0, 0x318($v1)
    ctx->pc = 0x23a620u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x510318u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x510318u, _value); } while (0); }
    // 0x23a624: 0xe50d030c  swc1        $f13, 0x30C($t0)
    ctx->pc = 0x23a624u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x51030Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x51030Cu, _value); } while (0); }
    // 0x23a628: 0x3e00008  jr          $ra
    ctx->pc = 0x23A628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23A62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A628u;
        // 0x23a62c: 0xe52c0310  swc1        $f12, 0x310($t1) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 784), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23A628u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23A630u;
}
