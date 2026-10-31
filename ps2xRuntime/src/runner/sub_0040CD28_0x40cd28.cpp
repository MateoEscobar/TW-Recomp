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

// Function: sub_0040CD28
// Address: 0x40cd28 - 0x40cd78
void sub_0040CD28_0x40cd28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040CD28_0x40cd28");
#endif

    switch (ctx->pc) {
        case 0x40cd54u: goto label_40cd54;
        case 0x40cd68u: goto label_40cd68;
        default: break;
    }

    ctx->pc = 0x40cd28u;

    // 0x40cd28: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x40cd28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x40cd2c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x40cd2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40cd30: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x40cd30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x40cd34: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x40cd34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40cd38: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x40cd38u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x40cd3c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x40cd3cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x40cd40: 0xc44f000c  lwc1        $f15, 0xC($v0)
    ctx->pc = 0x40cd40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x40cd44: 0xc44d0004  lwc1        $f13, 0x4($v0)
    ctx->pc = 0x40cd44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x40cd48: 0xc44e0008  lwc1        $f14, 0x8($v0)
    ctx->pc = 0x40cd48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x40cd4c: 0xc05eb2a  jal         func_17ACA8
    ctx->pc = 0x40CD4Cu;
    SET_GPR_U32(ctx, 31, 0x40CD54u);
    ctx->pc = 0x40CD50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40CD4Cu;
    // 0x40cd50: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x17ACA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17ACA8u, 0x40CD4Cu, 0x40CD54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40CD54u;
label_40cd54:
    // 0x40cd54: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x40cd54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x40cd58: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x40cd58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x40cd5c: 0x8c64deb8  lw          $a0, -0x2148($v1)
    ctx->pc = 0x40cd5cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5FDEB8u));
    // 0x40cd60: 0xc063232  jal         func_18C8C8
    ctx->pc = 0x40CD60u;
    SET_GPR_U32(ctx, 31, 0x40CD68u);
    ctx->pc = 0x40CD64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40CD60u;
    // 0x40cd64: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18C8C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C8C8u, 0x40CD60u, 0x40CD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40CD68u;
label_40cd68:
    // 0x40cd68: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x40cd68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x40cd6c: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x40cd6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x40cd70: 0x3e00008  jr          $ra
    ctx->pc = 0x40CD70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40CD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40CD70u;
        // 0x40cd74: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40CD70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40CD78u;
}
