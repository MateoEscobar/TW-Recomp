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

// Function: sub_001BC000
// Address: 0x1bc000 - 0x1bc028
void sub_001BC000_0x1bc000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BC000_0x1bc000");
#endif

    ctx->pc = 0x1bc000u;

    // 0x1bc000: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1bc000u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bc004: 0xc7b900f8  lwc1        $f25, 0xF8($sp)
    ctx->pc = 0x1bc004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x1bc008: 0xc7b800f0  lwc1        $f24, 0xF0($sp)
    ctx->pc = 0x1bc008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1bc00c: 0xc7b700e8  lwc1        $f23, 0xE8($sp)
    ctx->pc = 0x1bc00cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1bc010: 0xc7b600e0  lwc1        $f22, 0xE0($sp)
    ctx->pc = 0x1bc010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1bc014: 0xc7b500d8  lwc1        $f21, 0xD8($sp)
    ctx->pc = 0x1bc014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1bc018: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x1bc018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1bc01c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BC01Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BC020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC01Cu;
        // 0x1bc020: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BC01Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BC024u;
    // 0x1bc024: 0x0  nop
    ctx->pc = 0x1bc024u;
    // NOP
    ctx->pc = 0x1bc028u;
}
