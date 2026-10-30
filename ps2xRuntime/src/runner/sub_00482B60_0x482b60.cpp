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

// Function: sub_00482B60
// Address: 0x482b60 - 0x482c30
void sub_00482B60_0x482b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00482B60_0x482b60");
#endif

    switch (ctx->pc) {
        case 0x482c18u: goto label_482c18;
        default: break;
    }

    ctx->pc = 0x482b60u;

    // 0x482b60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x482b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x482b64: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x482b64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x482b68: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x482b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x482b6c: 0x2442ad18  addiu       $v0, $v0, -0x52E8
    ctx->pc = 0x482b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
    // 0x482b70: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x482b70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x482b74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x482b74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x482b78: 0xe60c0084  swc1        $f12, 0x84($s0)
    ctx->pc = 0x482b78u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    // 0x482b7c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x482b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x482b80: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x482b80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x482b84: 0xc445001c  lwc1        $f5, 0x1C($v0)
    ctx->pc = 0x482b84u;
    { uint32_t bits = FAST_READ32(0x70AD34u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x482b88: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x482B88u;
    {
        const bool branch_taken_0x482b88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x482B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x482B88u;
        // 0x482b8c: 0xc4440018  lwc1        $f4, 0x18($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x482b88) {
            ctx->pc = 0x482BA4u;
            goto label_482ba4;
        }
    }
    ctx->pc = 0x482B90u;
    // 0x482b90: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x482b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x482b94: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x482B94u;
    {
        const bool branch_taken_0x482b94 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x482b94) {
            ctx->pc = 0x482BA4u;
            goto label_482ba4;
        }
    }
    ctx->pc = 0x482B9Cu;
    // 0x482b9c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x482B9Cu;
    {
        const bool branch_taken_0x482b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x482BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x482B9Cu;
        // 0x482ba0: 0xc6020080  lwc1        $f2, 0x80($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x482b9c) {
            ctx->pc = 0x482BBCu;
            goto label_482bbc;
        }
    }
    ctx->pc = 0x482BA4u;
label_482ba4:
    // 0x482ba4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x482ba4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x482ba8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x482ba8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x482bac: 0xc6010084  lwc1        $f1, 0x84($s0)
    ctx->pc = 0x482bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x482bb0: 0xc6020080  lwc1        $f2, 0x80($s0)
    ctx->pc = 0x482bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x482bb4: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x482bb4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x482bb8: 0x46020083  div.s       $f2, $f0, $f2
    ctx->pc = 0x482bb8u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
label_482bbc:
    // 0x482bbc: 0x46042841  sub.s       $f1, $f5, $f4
    ctx->pc = 0x482bbcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x482bc0: 0xc7808294  lwc1        $f0, -0x7D6C($gp)
    ctx->pc = 0x482bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x482bc4: 0x460260c1  sub.s       $f3, $f12, $f2
    ctx->pc = 0x482bc4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
    // 0x482bc8: 0x46026080  add.s       $f2, $f12, $f2
    ctx->pc = 0x482bc8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
    // 0x482bcc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x482bccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x482bd0: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x482bd0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x482bd4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x482bd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x482bd8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x482bd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x482bdc: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x482bdcu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x482be0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x482be0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x482be4: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x482be4u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x482be8: 0x46042841  sub.s       $f1, $f5, $f4
    ctx->pc = 0x482be8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x482bec: 0x46042800  add.s       $f0, $f5, $f4
    ctx->pc = 0x482becu;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x482bf0: 0xc7a40000  lwc1        $f4, 0x0($sp)
    ctx->pc = 0x482bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x482bf4: 0x46040843  div.s       $f1, $f1, $f4
    ctx->pc = 0x482bf4u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[4]); }
    // 0x482bf8: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x482bf8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x482bfc: 0xe601008c  swc1        $f1, 0x8C($s0)
    ctx->pc = 0x482bfcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 140), bits); }
    // 0x482c00: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x482c00u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x482c04: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x482c04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x482c08: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x482C08u;
    {
        const bool branch_taken_0x482c08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x482C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x482C08u;
        // 0x482c0c: 0xe6000090  swc1        $f0, 0x90($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x482c08) {
            ctx->pc = 0x482C18u;
            goto label_482c18;
        }
    }
    ctx->pc = 0x482C10u;
    // 0x482c10: 0xc12105a  jal         func_484168
    ctx->pc = 0x482C10u;
    SET_GPR_U32(ctx, 31, 0x482C18u);
    ctx->pc = 0x484168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x484168u, 0x482C10u, 0x482C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x482C18u;
label_482c18:
    // 0x482c18: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x482c18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x482c1c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x482c1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x482c20: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x482c20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x482c24: 0x3e00008  jr          $ra
    ctx->pc = 0x482C24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x482C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x482C24u;
        // 0x482c28: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x482C24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x482C2Cu;
    // 0x482c2c: 0x0  nop
    ctx->pc = 0x482c2cu;
    // NOP
    ctx->pc = 0x482c30u;
}
