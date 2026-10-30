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

// Function: sub_00416B68
// Address: 0x416b68 - 0x416bb8
void sub_00416B68_0x416b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00416B68_0x416b68");
#endif

    switch (ctx->pc) {
        case 0x416ba0u: goto label_416ba0;
        case 0x416bacu: goto label_416bac;
        default: break;
    }

    ctx->pc = 0x416b68u;

    // 0x416b68: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x416b68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x416b6c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x416b6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x416b70: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x416b70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x416b74: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x416b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x416b78: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x416b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x416b7c: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x416b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x416b80: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x416b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x416b84: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x416b84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x416b88: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x416b88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x416b8c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x416b8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x416b90: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x416b90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x416b94: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x416b94u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x416b98: 0xc0e40a2  jal         func_390288
    ctx->pc = 0x416B98u;
    SET_GPR_U32(ctx, 31, 0x416BA0u);
    ctx->pc = 0x416B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x416B98u;
    // 0x416b9c: 0xe7a3000c  swc1        $f3, 0xC($sp) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x390288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390288u, 0x416B98u, 0x416BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x416BA0u;
label_416ba0:
    // 0x416ba0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x416ba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x416ba4: 0xc105876  jal         func_4161D8
    ctx->pc = 0x416BA4u;
    SET_GPR_U32(ctx, 31, 0x416BACu);
    ctx->pc = 0x416BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x416BA4u;
    // 0x416ba8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161D8u, 0x416BA4u, 0x416BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x416BACu;
label_416bac:
    // 0x416bac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x416bacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x416bb0: 0x3e00008  jr          $ra
    ctx->pc = 0x416BB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x416BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416BB0u;
        // 0x416bb4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x416BB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x416BB8u;
}
