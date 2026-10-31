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

// Function: sub_004D77F8
// Address: 0x4d77f8 - 0x4d7840
void sub_004D77F8_0x4d77f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D77F8_0x4d77f8");
#endif

    ctx->pc = 0x4d77f8u;

    // 0x4d77f8: 0xc4850008  lwc1        $f5, 0x8($a0)
    ctx->pc = 0x4d77f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x4d77fc: 0xc486000c  lwc1        $f6, 0xC($a0)
    ctx->pc = 0x4d77fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x4d7800: 0xc4870018  lwc1        $f7, 0x18($a0)
    ctx->pc = 0x4d7800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x4d7804: 0xc480001c  lwc1        $f0, 0x1C($a0)
    ctx->pc = 0x4d7804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d7808: 0xc4810020  lwc1        $f1, 0x20($a0)
    ctx->pc = 0x4d7808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d780c: 0xc4820024  lwc1        $f2, 0x24($a0)
    ctx->pc = 0x4d780cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4d7810: 0xc4830030  lwc1        $f3, 0x30($a0)
    ctx->pc = 0x4d7810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4d7814: 0xc4840034  lwc1        $f4, 0x34($a0)
    ctx->pc = 0x4d7814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4d7818: 0xe4800034  swc1        $f0, 0x34($a0)
    ctx->pc = 0x4d7818u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x4d781c: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x4d781cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x4d7820: 0xe482000c  swc1        $f2, 0xC($a0)
    ctx->pc = 0x4d7820u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x4d7824: 0xe4830018  swc1        $f3, 0x18($a0)
    ctx->pc = 0x4d7824u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x4d7828: 0xe484001c  swc1        $f4, 0x1C($a0)
    ctx->pc = 0x4d7828u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x4d782c: 0xe4850020  swc1        $f5, 0x20($a0)
    ctx->pc = 0x4d782cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x4d7830: 0xe4860024  swc1        $f6, 0x24($a0)
    ctx->pc = 0x4d7830u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x4d7834: 0x3e00008  jr          $ra
    ctx->pc = 0x4D7834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D7838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D7834u;
        // 0x4d7838: 0xe4870030  swc1        $f7, 0x30($a0) (Delay Slot)
        { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D7834u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4D783Cu;
    // 0x4d783c: 0x0  nop
    ctx->pc = 0x4d783cu;
    // NOP
    ctx->pc = 0x4d7840u;
}
