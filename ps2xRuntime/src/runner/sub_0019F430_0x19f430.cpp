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

// Function: sub_0019F430
// Address: 0x19f430 - 0x19f4c8
void sub_0019F430_0x19f430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019F430_0x19f430");
#endif

    switch (ctx->pc) {
        case 0x19f45cu: goto label_19f45c;
        case 0x19f468u: goto label_19f468;
        default: break;
    }

    ctx->pc = 0x19f430u;

    // 0x19f430: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x19f430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x19f434: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19f434u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f438: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x19f438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x19f43c: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x19f43cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x19f440: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19f440u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f444: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19f444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19f448: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x19f448u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x19f44c: 0xe6140470  swc1        $f20, 0x470($s0)
    ctx->pc = 0x19f44cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1136), bits); }
    // 0x19f450: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x19f450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f454: 0xc06e4ea  jal         func_1B93A8
    ctx->pc = 0x19F454u;
    SET_GPR_U32(ctx, 31, 0x19F45Cu);
    ctx->pc = 0x19F458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F454u;
    // 0x19f458: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B93A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B93A8u, 0x19F454u, 0x19F45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F45Cu;
label_19f45c:
    // 0x19f45c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x19f45cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x19f460: 0xc06e538  jal         func_1B94E0
    ctx->pc = 0x19F460u;
    SET_GPR_U32(ctx, 31, 0x19F468u);
    ctx->pc = 0x19F464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F460u;
    // 0x19f464: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B94E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B94E0u, 0x19F460u, 0x19F468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F468u;
label_19f468:
    // 0x19f468: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x19f468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19f46c: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x19f46cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19f470: 0xc7a30014  lwc1        $f3, 0x14($sp)
    ctx->pc = 0x19f470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x19f474: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x19f474u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x19f478: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x19f478u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x19f47c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x19f47cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x19f480: 0x0  nop
    ctx->pc = 0x19f480u;
    // NOP
    // 0x19f484: 0x0  nop
    ctx->pc = 0x19f484u;
    // NOP
    // 0x19f488: 0x46030043  div.s       $f1, $f0, $f3
    ctx->pc = 0x19f488u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[3]); }
    // 0x19f48c: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x19f48cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19f490: 0x0  nop
    ctx->pc = 0x19f490u;
    // NOP
    // 0x19f494: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x19F494u;
    {
        const bool branch_taken_0x19f494 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19F498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F494u;
        // 0x19f498: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f494) {
            ctx->pc = 0x19F4B0u;
            goto label_19f4b0;
        }
    }
    ctx->pc = 0x19F49Cu;
    // 0x19f49c: 0xc440cfb4  lwc1        $f0, -0x304C($v0)
    ctx->pc = 0x19f49cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954932)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19f4a0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x19f4a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x19f4a4: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x19f4a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x19f4a8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19F4A8u;
    {
        const bool branch_taken_0x19f4a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F4A8u;
        // 0x19f4ac: 0xe600046c  swc1        $f0, 0x46C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1132), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f4a8) {
            ctx->pc = 0x19F4B4u;
            goto label_19f4b4;
        }
    }
    ctx->pc = 0x19F4B0u;
label_19f4b0:
    // 0x19f4b0: 0xe614046c  swc1        $f20, 0x46C($s0)
    ctx->pc = 0x19f4b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1132), bits); }
label_19f4b4:
    // 0x19f4b4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x19f4b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19f4b8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19f4b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19f4bc: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x19f4bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x19f4c0: 0x3e00008  jr          $ra
    ctx->pc = 0x19F4C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F4C0u;
        // 0x19f4c4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F4C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F4C8u;
}
