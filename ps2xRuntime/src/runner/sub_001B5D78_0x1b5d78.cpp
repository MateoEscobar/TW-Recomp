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

// Function: sub_001B5D78
// Address: 0x1b5d78 - 0x1b5dd8
void sub_001B5D78_0x1b5d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B5D78_0x1b5d78");
#endif

    switch (ctx->pc) {
        case 0x1b5d98u: goto label_1b5d98;
        case 0x1b5dc4u: goto label_1b5dc4;
        default: break;
    }

    ctx->pc = 0x1b5d78u;

    // 0x1b5d78: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b5d78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b5d7c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1b5d7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5d80: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x1b5d80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x1b5d84: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1b5d84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5d88: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b5d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b5d8c: 0x24a51e10  addiu       $a1, $a1, 0x1E10
    ctx->pc = 0x1b5d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7696));
    // 0x1b5d90: 0xc071a1e  jal         func_1C6878
    ctx->pc = 0x1B5D90u;
    SET_GPR_U32(ctx, 31, 0x1B5D98u);
    ctx->pc = 0x1B5D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5D90u;
    // 0x1b5d94: 0xe7b40020  swc1        $f20, 0x20($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6878u, 0x1B5D90u, 0x1B5D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5D98u;
label_1b5d98:
    // 0x1b5d98: 0x3c013cf5  lui         $at, 0x3CF5
    ctx->pc = 0x1b5d98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15605 << 16));
    // 0x1b5d9c: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1b5d9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x1b5da0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1b5da0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1b5da4: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x1b5da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b5da8: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x1b5da8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
    // 0x1b5dac: 0x24843ce0  addiu       $a0, $a0, 0x3CE0
    ctx->pc = 0x1b5dacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15584));
    // 0x1b5db0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1b5db0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5db4: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x1b5db4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x1b5db8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b5db8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5dbc: 0xc06dcb4  jal         func_1B72D0
    ctx->pc = 0x1B5DBCu;
    SET_GPR_U32(ctx, 31, 0x1B5DC4u);
    ctx->pc = 0x1B5DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5DBCu;
    // 0x1b5dc0: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B72D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B72D0u, 0x1B5DBCu, 0x1B5DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5DC4u;
label_1b5dc4:
    // 0x1b5dc4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b5dc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b5dc8: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x1b5dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b5dcc: 0x3e00008  jr          $ra
    ctx->pc = 0x1B5DCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5DCCu;
        // 0x1b5dd0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5DCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B5DD4u;
    // 0x1b5dd4: 0x0  nop
    ctx->pc = 0x1b5dd4u;
    // NOP
    ctx->pc = 0x1b5dd8u;
}
