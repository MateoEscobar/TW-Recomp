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

// Function: sub_004137D8
// Address: 0x4137d8 - 0x413828
void sub_004137D8_0x4137d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004137D8_0x4137d8");
#endif

    switch (ctx->pc) {
        case 0x413808u: goto label_413808;
        default: break;
    }

    ctx->pc = 0x4137d8u;

    // 0x4137d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4137d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4137dc: 0x24030150  addiu       $v1, $zero, 0x150
    ctx->pc = 0x4137dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
    // 0x4137e0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4137e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4137e4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4137e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x4137e8: 0x838018  mult        $s0, $a0, $v1
    ctx->pc = 0x4137e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x4137ec: 0x24423a10  addiu       $v0, $v0, 0x3A10
    ctx->pc = 0x4137ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14864));
    // 0x4137f0: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x4137f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x4137f4: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x4137f4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x4137f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4137f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4137fc: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x4137fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x413800: 0xc104e24  jal         func_413890
    ctx->pc = 0x413800u;
    SET_GPR_U32(ctx, 31, 0x413808u);
    ctx->pc = 0x413804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x413800u;
    // 0x413804: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413890u, 0x413800u, 0x413808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x413808u;
label_413808:
    // 0x413808: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x413808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x41380c: 0xe6140144  swc1        $f20, 0x144($s0)
    ctx->pc = 0x41380cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 324), bits); }
    // 0x413810: 0xa2020148  sb          $v0, 0x148($s0)
    ctx->pc = 0x413810u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 328), (uint8_t)GPR_U32(ctx, 2));
    // 0x413814: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x413814u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x413818: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x413818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x41381c: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x41381cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x413820: 0x3e00008  jr          $ra
    ctx->pc = 0x413820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x413824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413820u;
        // 0x413824: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x413820u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x413828u;
}
