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

// Function: sub_001DD258
// Address: 0x1dd258 - 0x1dd2e0
void sub_001DD258_0x1dd258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DD258_0x1dd258");
#endif

    switch (ctx->pc) {
        case 0x1dd258u: goto label_1dd258;
        case 0x1dd25cu: goto label_1dd25c;
        case 0x1dd260u: goto label_1dd260;
        case 0x1dd264u: goto label_1dd264;
        case 0x1dd268u: goto label_1dd268;
        case 0x1dd26cu: goto label_1dd26c;
        case 0x1dd270u: goto label_1dd270;
        case 0x1dd274u: goto label_1dd274;
        case 0x1dd278u: goto label_1dd278;
        case 0x1dd27cu: goto label_1dd27c;
        case 0x1dd280u: goto label_1dd280;
        case 0x1dd284u: goto label_1dd284;
        case 0x1dd288u: goto label_1dd288;
        case 0x1dd28cu: goto label_1dd28c;
        case 0x1dd290u: goto label_1dd290;
        case 0x1dd294u: goto label_1dd294;
        case 0x1dd298u: goto label_1dd298;
        case 0x1dd29cu: goto label_1dd29c;
        case 0x1dd2a0u: goto label_1dd2a0;
        case 0x1dd2a4u: goto label_1dd2a4;
        case 0x1dd2a8u: goto label_1dd2a8;
        case 0x1dd2acu: goto label_1dd2ac;
        case 0x1dd2b0u: goto label_1dd2b0;
        case 0x1dd2b4u: goto label_1dd2b4;
        case 0x1dd2b8u: goto label_1dd2b8;
        case 0x1dd2bcu: goto label_1dd2bc;
        case 0x1dd2c0u: goto label_1dd2c0;
        case 0x1dd2c4u: goto label_1dd2c4;
        case 0x1dd2c8u: goto label_1dd2c8;
        case 0x1dd2ccu: goto label_1dd2cc;
        case 0x1dd2d0u: goto label_1dd2d0;
        case 0x1dd2d4u: goto label_1dd2d4;
        case 0x1dd2d8u: goto label_1dd2d8;
        case 0x1dd2dcu: goto label_1dd2dc;
        default: break;
    }

    ctx->pc = 0x1dd258u;

label_1dd258:
    // 0x1dd258: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1dd258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1dd25c:
    // 0x1dd25c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1dd25cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1dd260:
    // 0x1dd260: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x1dd260u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1dd264:
    // 0x1dd264: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1dd264u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1dd268:
    // 0x1dd268: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1dd268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1dd26c:
    // 0x1dd26c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1dd26cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_1dd270:
    // 0x1dd270: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1dd270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1dd274:
    // 0x1dd274: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1dd274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1dd278:
    // 0x1dd278: 0x84450070  lh          $a1, 0x70($v0)
    ctx->pc = 0x1dd278u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_1dd27c:
    // 0x1dd27c: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x1dd27cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_1dd280:
    // 0x1dd280: 0x60f809  jalr        $v1
label_1dd284:
    if (ctx->pc == 0x1DD284u) {
        ctx->pc = 0x1DD284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD280u;
        // 0x1dd284: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD288u;
        goto label_1dd288;
    }
    ctx->pc = 0x1DD280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1DD288u);
        ctx->pc = 0x1DD284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD280u;
        // 0x1dd284: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD280u, 0x1DD288u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DD288u;
label_1dd288:
    // 0x1dd288: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x1dd288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dd28c:
    // 0x1dd28c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1dd28cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1dd290:
    // 0x1dd290: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x1dd290u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_1dd294:
    // 0x1dd294: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1dd294u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1dd298:
    // 0x1dd298: 0x0  nop
    ctx->pc = 0x1dd298u;
    // NOP
label_1dd29c:
    // 0x1dd29c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1dd2a0:
    if (ctx->pc == 0x1DD2A0u) {
        ctx->pc = 0x1DD2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD29Cu;
        // 0x1dd2a0: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD2A4u;
        goto label_1dd2a4;
    }
    ctx->pc = 0x1DD29Cu;
    {
        const bool branch_taken_0x1dd29c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DD2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD29Cu;
        // 0x1dd2a0: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd29c) {
            ctx->pc = 0x1DD2A8u;
            goto label_1dd2a8;
        }
    }
    ctx->pc = 0x1DD2A4u;
label_1dd2a4:
    // 0x1dd2a4: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1dd2a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1dd2a8:
    // 0x1dd2a8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1dd2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1dd2ac:
    // 0x1dd2ac: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1dd2acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1dd2b0:
    // 0x1dd2b0: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x1dd2b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
label_1dd2b4:
    // 0x1dd2b4: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x1dd2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_1dd2b8:
    // 0x1dd2b8: 0x60f809  jalr        $v1
label_1dd2bc:
    if (ctx->pc == 0x1DD2BCu) {
        ctx->pc = 0x1DD2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD2B8u;
        // 0x1dd2bc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD2C0u;
        goto label_1dd2c0;
    }
    ctx->pc = 0x1DD2B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1DD2C0u);
        ctx->pc = 0x1DD2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD2B8u;
        // 0x1dd2bc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD2B8u, 0x1DD2C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DD2C0u;
label_1dd2c0:
    // 0x1dd2c0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1dd2c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1dd2c4:
    // 0x1dd2c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1dd2c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1dd2c8:
    // 0x1dd2c8: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x1dd2c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1dd2cc:
    // 0x1dd2cc: 0x3e00008  jr          $ra
label_1dd2d0:
    if (ctx->pc == 0x1DD2D0u) {
        ctx->pc = 0x1DD2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD2CCu;
        // 0x1dd2d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD2D4u;
        goto label_1dd2d4;
    }
    ctx->pc = 0x1DD2CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD2CCu;
        // 0x1dd2d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD2CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD2D4u;
label_1dd2d4:
    // 0x1dd2d4: 0x0  nop
    ctx->pc = 0x1dd2d4u;
    // NOP
label_1dd2d8:
    // 0x1dd2d8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1dd2d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1dd2dc:
    // 0x1dd2dc: 0x0  nop
    ctx->pc = 0x1dd2dcu;
    // NOP
    ctx->pc = 0x1dd2e0u;
}
