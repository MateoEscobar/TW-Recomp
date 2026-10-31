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

// Function: sub_0018D868
// Address: 0x18d868 - 0x18d910
void sub_0018D868_0x18d868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018D868_0x18d868");
#endif

    ctx->pc = 0x18d868u;

    // 0x18d868: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18d868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18d86c: 0x10a00015  beqz        $a1, . + 4 + (0x15 << 2)
    ctx->pc = 0x18D86Cu;
    {
        const bool branch_taken_0x18d86c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D86Cu;
        // 0x18d870: 0xac8201e8  sw          $v0, 0x1E8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 488), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d86c) {
            ctx->pc = 0x18D8C4u;
            goto label_18d8c4;
        }
    }
    ctx->pc = 0x18D874u;
    // 0x18d874: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x18d874u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18d878: 0x0  nop
    ctx->pc = 0x18d878u;
    // NOP
    // 0x18d87c: 0x460c0834  c.lt.s      $f1, $f12
    ctx->pc = 0x18d87cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18d880: 0x0  nop
    ctx->pc = 0x18d880u;
    // NOP
    // 0x18d884: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x18D884u;
    {
        const bool branch_taken_0x18d884 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18d884) {
            ctx->pc = 0x18D8ACu;
            goto label_18d8ac;
        }
    }
    ctx->pc = 0x18D88Cu;
    // 0x18d88c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18d88cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x18d890: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18d890u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18d894: 0xe48101ec  swc1        $f1, 0x1EC($a0)
    ctx->pc = 0x18d894u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 492), bits); }
    // 0x18d898: 0x0  nop
    ctx->pc = 0x18d898u;
    // NOP
    // 0x18d89c: 0x0  nop
    ctx->pc = 0x18d89cu;
    // NOP
    // 0x18d8a0: 0x460c0003  div.s       $f0, $f0, $f12
    ctx->pc = 0x18d8a0u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[12]); }
    // 0x18d8a4: 0x3e00008  jr          $ra
    ctx->pc = 0x18D8A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18D8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D8A4u;
        // 0x18d8a8: 0xe48001f0  swc1        $f0, 0x1F0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 496), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18D8A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18D8ACu;
label_18d8ac:
    // 0x18d8ac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18d8acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x18d8b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18d8b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18d8b4: 0x0  nop
    ctx->pc = 0x18d8b4u;
    // NOP
    // 0x18d8b8: 0xe48001f0  swc1        $f0, 0x1F0($a0)
    ctx->pc = 0x18d8b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 496), bits); }
    // 0x18d8bc: 0x3e00008  jr          $ra
    ctx->pc = 0x18D8BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18D8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D8BCu;
        // 0x18d8c0: 0xe48001ec  swc1        $f0, 0x1EC($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 492), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18D8BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18D8C4u;
label_18d8c4:
    // 0x18d8c4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x18d8c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18d8c8: 0x0  nop
    ctx->pc = 0x18d8c8u;
    // NOP
    // 0x18d8cc: 0x460c0834  c.lt.s      $f1, $f12
    ctx->pc = 0x18d8ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18d8d0: 0x0  nop
    ctx->pc = 0x18d8d0u;
    // NOP
    // 0x18d8d4: 0x4502000a  bc1fl       . + 4 + (0xA << 2)
    ctx->pc = 0x18D8D4u;
    {
        const bool branch_taken_0x18d8d4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18d8d4) {
            ctx->pc = 0x18D8D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18D8D4u;
            // 0x18d8d8: 0xe48101ec  swc1        $f1, 0x1EC($a0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 492), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x18D900u;
            goto label_18d900;
        }
    }
    ctx->pc = 0x18D8DCu;
    // 0x18d8dc: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x18d8dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x18d8e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18d8e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18d8e4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18d8e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x18d8e8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x18d8e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18d8ec: 0x0  nop
    ctx->pc = 0x18d8ecu;
    // NOP
    // 0x18d8f0: 0x0  nop
    ctx->pc = 0x18d8f0u;
    // NOP
    // 0x18d8f4: 0x460c0003  div.s       $f0, $f0, $f12
    ctx->pc = 0x18d8f4u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[12]); }
    // 0x18d8f8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x18D8F8u;
    {
        const bool branch_taken_0x18d8f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D8F8u;
        // 0x18d8fc: 0xe48101ec  swc1        $f1, 0x1EC($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 492), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d8f8) {
            ctx->pc = 0x18D908u;
            goto label_18d908;
        }
    }
    ctx->pc = 0x18D900u;
label_18d900:
    // 0x18d900: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x18d900u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x18d904: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18d904u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18d908:
    // 0x18d908: 0x3e00008  jr          $ra
    ctx->pc = 0x18D908u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18D90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D908u;
        // 0x18d90c: 0xe48001f0  swc1        $f0, 0x1F0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 496), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18D908u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18D910u;
}
