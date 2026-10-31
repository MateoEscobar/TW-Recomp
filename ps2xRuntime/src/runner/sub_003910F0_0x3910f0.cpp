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

// Function: sub_003910F0
// Address: 0x3910f0 - 0x391138
void sub_003910F0_0x3910f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003910F0_0x3910f0");
#endif

    switch (ctx->pc) {
        case 0x391118u: goto label_391118;
        default: break;
    }

    ctx->pc = 0x3910f0u;

    // 0x3910f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3910f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3910f4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3910f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3910f8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3910f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x3910fc: 0xe7b50018  swc1        $f21, 0x18($sp)
    ctx->pc = 0x3910fcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x391100: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x391100u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x391104: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x391104u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x391108: 0x8c442c04  lw          $a0, 0x2C04($v0)
    ctx->pc = 0x391108u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x512C04u));
    // 0x39110c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x39110cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x391110: 0xc0e4558  jal         func_391560
    ctx->pc = 0x391110u;
    SET_GPR_U32(ctx, 31, 0x391118u);
    ctx->pc = 0x391114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391110u;
    // 0x391114: 0x46006d06  mov.s       $f20, $f13 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x391560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391560u, 0x391110u, 0x391118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391118u;
label_391118:
    // 0x391118: 0xe454006c  swc1        $f20, 0x6C($v0)
    ctx->pc = 0x391118u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 108), bits); }
    // 0x39111c: 0xe4550068  swc1        $f21, 0x68($v0)
    ctx->pc = 0x39111cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 104), bits); }
    // 0x391120: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x391120u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x391124: 0xc7b50018  lwc1        $f21, 0x18($sp)
    ctx->pc = 0x391124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x391128: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x391128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x39112c: 0x3e00008  jr          $ra
    ctx->pc = 0x39112Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x391130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39112Cu;
        // 0x391130: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39112Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x391134u;
    // 0x391134: 0x0  nop
    ctx->pc = 0x391134u;
    // NOP
    ctx->pc = 0x391138u;
}
