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

// Function: sub_001B4908
// Address: 0x1b4908 - 0x1b4948
void sub_001B4908_0x1b4908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B4908_0x1b4908");
#endif

    switch (ctx->pc) {
        case 0x1b493cu: goto label_1b493c;
        default: break;
    }

    ctx->pc = 0x1b4908u;

    // 0x1b4908: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b4908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b490c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1b490cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1b4910: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b4910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b4914: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1b4914u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4918: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x1b4918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b491c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x1b491cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b4920: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x1b4920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b4924: 0x8c44cce4  lw          $a0, -0x331C($v0)
    ctx->pc = 0x1b4924u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50CCE4u));
    // 0x1b4928: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1b4928u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1b492c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1b492cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1b4930: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x1b4930u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1b4934: 0xc05fb20  jal         func_17EC80
    ctx->pc = 0x1B4934u;
    SET_GPR_U32(ctx, 31, 0x1B493Cu);
    ctx->pc = 0x1B4938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4934u;
    // 0x1b4938: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17EC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17EC80u, 0x1B4934u, 0x1B493Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B493Cu;
label_1b493c:
    // 0x1b493c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b493cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b4940: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4940u;
        // 0x1b4944: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4940u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B4948u;
}
