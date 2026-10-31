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

// Function: sub_00250E00
// Address: 0x250e00 - 0x250e48
void sub_00250E00_0x250e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00250E00_0x250e00");
#endif

    switch (ctx->pc) {
        case 0x250e3cu: goto label_250e3c;
        default: break;
    }

    ctx->pc = 0x250e00u;

    // 0x250e00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x250e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x250e04: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x250e04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250e08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x250e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x250e0c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x250e0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250e10: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x250e10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x250e14: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x250e14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x250e18: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x250e18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x250e1c: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x250e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x250e20: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x250e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x250e24: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x250e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x250e28: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x250e28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x250e2c: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x250e2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x250e30: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x250e30u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x250e34: 0xc0942da  jal         func_250B68
    ctx->pc = 0x250E34u;
    SET_GPR_U32(ctx, 31, 0x250E3Cu);
    ctx->pc = 0x250E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250E34u;
    // 0x250e38: 0xe7a3000c  swc1        $f3, 0xC($sp) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x250B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250B68u, 0x250E34u, 0x250E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250E3Cu;
label_250e3c:
    // 0x250e3c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x250e3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x250e40: 0x3e00008  jr          $ra
    ctx->pc = 0x250E40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x250E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250E40u;
        // 0x250e44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x250E40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x250E48u;
}
