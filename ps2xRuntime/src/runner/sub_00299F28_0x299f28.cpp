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

// Function: sub_00299F28
// Address: 0x299f28 - 0x299f78
void sub_00299F28_0x299f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00299F28_0x299f28");
#endif

    switch (ctx->pc) {
        case 0x299f6cu: goto label_299f6c;
        default: break;
    }

    ctx->pc = 0x299f28u;

    // 0x299f28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x299f28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x299f2c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x299f2cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299f30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x299f30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x299f34: 0x34e70002  ori         $a3, $a3, 0x2
    ctx->pc = 0x299f34u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)2);
    // 0x299f38: 0xa4670002  sh          $a3, 0x2($v1)
    ctx->pc = 0x299f38u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 7));
    // 0x299f3c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x299f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x299f40: 0x8c47b734  lw          $a3, -0x48CC($v0)
    ctx->pc = 0x299f40u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x50B734u));
    // 0x299f44: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x299f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x299f48: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x299f48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x299f4c: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x299f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299f50: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x299f50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x299f54: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x299f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x299f58: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x299f58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x299f5c: 0x8ce20048  lw          $v0, 0x48($a3)
    ctx->pc = 0x299f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 72)));
    // 0x299f60: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x299f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x299f64: 0xc0a679a  jal         func_299E68
    ctx->pc = 0x299F64u;
    SET_GPR_U32(ctx, 31, 0x299F6Cu);
    ctx->pc = 0x299F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299F64u;
    // 0x299f68: 0xac620010  sw          $v0, 0x10($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299E68u, 0x299F64u, 0x299F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299F6Cu;
label_299f6c:
    // 0x299f6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x299f6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x299f70: 0x3e00008  jr          $ra
    ctx->pc = 0x299F70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299F70u;
        // 0x299f74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299F70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x299F78u;
}
