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

// Function: sub_002C2D38
// Address: 0x2c2d38 - 0x2c2d80
void sub_002C2D38_0x2c2d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C2D38_0x2c2d38");
#endif

    switch (ctx->pc) {
        case 0x2c2d74u: goto label_2c2d74;
        default: break;
    }

    ctx->pc = 0x2c2d38u;

    // 0x2c2d38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c2d38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c2d3c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c2d3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c2d40: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2c2d40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2c2d44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c2d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c2d48: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x2c2d48u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x2c2d4c: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x2c2d4cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x2c2d50: 0xc4c20008  lwc1        $f2, 0x8($a2)
    ctx->pc = 0x2c2d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c2d54: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x2c2d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c2d58: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x2c2d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c2d5c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2c2d5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2c2d60: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2c2d60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2d64: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2c2d64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2c2d68: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x2c2d68u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2c2d6c: 0xc0b0b60  jal         func_2C2D80
    ctx->pc = 0x2C2D6Cu;
    SET_GPR_U32(ctx, 31, 0x2C2D74u);
    ctx->pc = 0x2C2D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2D6Cu;
    // 0x2c2d70: 0xe7a3000c  swc1        $f3, 0xC($sp) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2D80u, 0x2C2D6Cu, 0x2C2D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2D74u;
label_2c2d74:
    // 0x2c2d74: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c2d74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c2d78: 0x3e00008  jr          $ra
    ctx->pc = 0x2C2D78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C2D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2D78u;
        // 0x2c2d7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C2D78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C2D80u;
}
