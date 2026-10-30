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

// Function: sub_00250E48
// Address: 0x250e48 - 0x250e98
void sub_00250E48_0x250e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00250E48_0x250e48");
#endif

    switch (ctx->pc) {
        case 0x250e84u: goto label_250e84;
        default: break;
    }

    ctx->pc = 0x250e48u;

    // 0x250e48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x250e48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x250e4c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x250e4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250e50: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x250e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x250e54: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x250e54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250e58: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x250e58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x250e5c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x250e5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x250e60: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x250e60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x250e64: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x250e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x250e68: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x250e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x250e6c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x250e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x250e70: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x250e70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x250e74: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x250e74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x250e78: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x250e78u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x250e7c: 0xc0942c4  jal         func_250B10
    ctx->pc = 0x250E7Cu;
    SET_GPR_U32(ctx, 31, 0x250E84u);
    ctx->pc = 0x250E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250E7Cu;
    // 0x250e80: 0xe7a3000c  swc1        $f3, 0xC($sp) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x250B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250B10u, 0x250E7Cu, 0x250E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250E84u;
label_250e84:
    // 0x250e84: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x250e84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x250e88: 0x3e00008  jr          $ra
    ctx->pc = 0x250E88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x250E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250E88u;
        // 0x250e8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x250E88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x250E90u;
    // 0x250e90: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x250e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x250e94: 0x0  nop
    ctx->pc = 0x250e94u;
    // NOP
    ctx->pc = 0x250e98u;
}
