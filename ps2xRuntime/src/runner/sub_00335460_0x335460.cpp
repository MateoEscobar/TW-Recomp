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

// Function: sub_00335460
// Address: 0x335460 - 0x335498
void sub_00335460_0x335460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00335460_0x335460");
#endif

    switch (ctx->pc) {
        case 0x33547cu: goto label_33547c;
        default: break;
    }

    ctx->pc = 0x335460u;

    // 0x335460: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x335460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x335464: 0xe7b50018  swc1        $f21, 0x18($sp)
    ctx->pc = 0x335464u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x335468: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x335468u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x33546c: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x33546cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x335470: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x335470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x335474: 0xc0cd538  jal         func_3354E0
    ctx->pc = 0x335474u;
    SET_GPR_U32(ctx, 31, 0x33547Cu);
    ctx->pc = 0x335478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335474u;
    // 0x335478: 0x46156d01  sub.s       $f20, $f13, $f21 (Delay Slot)
    ctx->f[20] = FPU_SUB_S(ctx->f[13], ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3354E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3354E0u, 0x335474u, 0x33547Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33547Cu;
label_33547c:
    // 0x33547c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33547cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x335480: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x335480u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x335484: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x335484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x335488: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x335488u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x33548c: 0xc7b50018  lwc1        $f21, 0x18($sp)
    ctx->pc = 0x33548cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x335490: 0x3e00008  jr          $ra
    ctx->pc = 0x335490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x335494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335490u;
        // 0x335494: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x335490u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x335498u;
}
