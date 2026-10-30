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

// Function: sub_00335E40
// Address: 0x335e40 - 0x335ea0
void sub_00335E40_0x335e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00335E40_0x335e40");
#endif

    switch (ctx->pc) {
        case 0x335e5cu: goto label_335e5c;
        case 0x335e68u: goto label_335e68;
        default: break;
    }

    ctx->pc = 0x335e40u;

    // 0x335e40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x335e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x335e44: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x335e44u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x335e48: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x335e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x335e4c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x335e4cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x335e50: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x335e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x335e54: 0xc12e310  jal         func_4B8C40
    ctx->pc = 0x335E54u;
    SET_GPR_U32(ctx, 31, 0x335E5Cu);
    ctx->pc = 0x335E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335E54u;
    // 0x335e58: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x335E54u, 0x335E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335E5Cu;
label_335e5c:
    // 0x335e5c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x335e5cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x335e60: 0xc12e29c  jal         func_4B8A70
    ctx->pc = 0x335E60u;
    SET_GPR_U32(ctx, 31, 0x335E68u);
    ctx->pc = 0x335E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335E60u;
    // 0x335e64: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x335E60u, 0x335E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335E68u;
label_335e68:
    // 0x335e68: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x335e68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x335e6c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x335e6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x335e70: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x335e70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335e74: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x335e74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x335e78: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x335e78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x335e7c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x335e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x335e80: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x335e80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x335e84: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x335e84u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x335e88: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x335e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x335e8c: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x335e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
    // 0x335e90: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x335e90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x335e94: 0x3e00008  jr          $ra
    ctx->pc = 0x335E94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x335E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335E94u;
        // 0x335e98: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x335E94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x335E9Cu;
    // 0x335e9c: 0x0  nop
    ctx->pc = 0x335e9cu;
    // NOP
    ctx->pc = 0x335ea0u;
}
