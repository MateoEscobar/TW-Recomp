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

// Function: sub_001896C0
// Address: 0x1896c0 - 0x189718
void sub_001896C0_0x1896c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001896C0_0x1896c0");
#endif

    switch (ctx->pc) {
        case 0x1896e0u: goto label_1896e0;
        default: break;
    }

    ctx->pc = 0x1896c0u;

    // 0x1896c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1896c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1896c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1896c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1896c8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1896c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1896cc: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x1896ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1896d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1896d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1896d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1896d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1896d8: 0xc10c1fa  jal         func_4307E8
    ctx->pc = 0x1896D8u;
    SET_GPR_U32(ctx, 31, 0x1896E0u);
    ctx->pc = 0x1896DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1896D8u;
    // 0x1896dc: 0x26040c00  addiu       $a0, $s0, 0xC00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x1896D8u, 0x1896E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1896E0u;
label_1896e0:
    // 0x1896e0: 0x3c030055  lui         $v1, 0x55
    ctx->pc = 0x1896e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)85 << 16));
    // 0x1896e4: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x1896e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
    // 0x1896e8: 0xc4612d74  lwc1        $f1, 0x2D74($v1)
    ctx->pc = 0x1896e8u;
    { uint32_t bits = FAST_READ32(0x552D74u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1896ec: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x1896ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x1896f0: 0xc4402d78  lwc1        $f0, 0x2D78($v0)
    ctx->pc = 0x1896f0u;
    { uint32_t bits = FAST_READ32(0x552D78u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1896f4: 0xe6010c0c  swc1        $f1, 0xC0C($s0)
    ctx->pc = 0x1896f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3084), bits); }
    // 0x1896f8: 0xe6000c08  swc1        $f0, 0xC08($s0)
    ctx->pc = 0x1896f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3080), bits); }
    // 0x1896fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1896fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x189700: 0x8c82bd30  lw          $v0, -0x42D0($a0)
    ctx->pc = 0x189700u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x189704: 0xe6010c14  swc1        $f1, 0xC14($s0)
    ctx->pc = 0x189704u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3092), bits); }
    // 0x189708: 0xae020c10  sw          $v0, 0xC10($s0)
    ctx->pc = 0x189708u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3088), GPR_U32(ctx, 2));
    // 0x18970c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x18970cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x189710: 0x3e00008  jr          $ra
    ctx->pc = 0x189710u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x189714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189710u;
        // 0x189714: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x189710u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x189718u;
}
