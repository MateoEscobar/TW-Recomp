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

// Function: sub_0039C388
// Address: 0x39c388 - 0x39c3d0
void sub_0039C388_0x39c388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039C388_0x39c388");
#endif

    switch (ctx->pc) {
        case 0x39c3c4u: goto label_39c3c4;
        default: break;
    }

    ctx->pc = 0x39c388u;

    // 0x39c388: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x39c388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x39c38c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x39c38cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c390: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x39c390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x39c394: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x39c394u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c398: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x39c398u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x39c39c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x39c39cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x39c3a0: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x39c3a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x39c3a4: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x39c3a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x39c3a8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x39c3a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x39c3ac: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x39c3acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x39c3b0: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x39c3b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x39c3b4: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x39c3b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x39c3b8: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x39c3b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x39c3bc: 0xc0e93a2  jal         func_3A4E88
    ctx->pc = 0x39C3BCu;
    SET_GPR_U32(ctx, 31, 0x39C3C4u);
    ctx->pc = 0x39C3C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C3BCu;
    // 0x39c3c0: 0xe7a3000c  swc1        $f3, 0xC($sp) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4E88u, 0x39C3BCu, 0x39C3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C3C4u;
label_39c3c4:
    // 0x39c3c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x39c3c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39c3c8: 0x3e00008  jr          $ra
    ctx->pc = 0x39C3C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39C3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C3C8u;
        // 0x39c3cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39C3C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39C3D0u;
}
