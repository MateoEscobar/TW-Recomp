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

// Function: sub_00480008
// Address: 0x480008 - 0x4800d0
void sub_00480008_0x480008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00480008_0x480008");
#endif

    switch (ctx->pc) {
        case 0x4800a8u: goto label_4800a8;
        case 0x4800b4u: goto label_4800b4;
        default: break;
    }

    ctx->pc = 0x480008u;

    // 0x480008: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x480008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x48000c: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x48000cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x480010: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x480010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x480014: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x480014u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x480018: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x480018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48001c: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x48001cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x480020: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x480020u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x480024: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x480024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x480028: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x480028u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x48002c: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x48002cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x480030: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x480030u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x480034: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x480034u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x480038: 0x46000504  c1          0x504
    ctx->pc = 0x480038u;
    ctx->f[20] = FPU_SQRT_S(ctx->f[0]);
    // 0x48003c: 0x46141834  c.lt.s      $f3, $f20
    ctx->pc = 0x48003cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x480040: 0x0  nop
    ctx->pc = 0x480040u;
    // NOP
    // 0x480044: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x480044u;
    {
        const bool branch_taken_0x480044 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x480048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x480044u;
        // 0x480048: 0x4600a086  mov.s       $f2, $f20 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x480044) {
            ctx->pc = 0x480060u;
            goto label_480060;
        }
    }
    ctx->pc = 0x48004Cu;
    // 0x48004c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x48004cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x480050: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x480050u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x480054: 0x46140083  div.s       $f2, $f0, $f20
    ctx->pc = 0x480054u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[0], ctx->f[20]); }
    // 0x480058: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x480058u;
    {
        const bool branch_taken_0x480058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48005Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x480058u;
        // 0x48005c: 0xc4a00000  lwc1        $f0, 0x0($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x480058) {
            ctx->pc = 0x480068u;
            goto label_480068;
        }
    }
    ctx->pc = 0x480060u;
label_480060:
    // 0x480060: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x480060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x480064: 0x0  nop
    ctx->pc = 0x480064u;
    // NOP
label_480068:
    // 0x480068: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x480068u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x48006c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x48006cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x480070: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x480070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x480074: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x480074u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x480078: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x480078u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x48007c: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x48007cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x480080: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x480080u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x480084: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x480084u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x480088: 0x4601a036  c.le.s      $f20, $f1
    ctx->pc = 0x480088u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x48008c: 0x0  nop
    ctx->pc = 0x48008cu;
    // NOP
    // 0x480090: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x480090u;
    {
        const bool branch_taken_0x480090 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x480094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x480090u;
        // 0x480094: 0xe4800008  swc1        $f0, 0x8($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x480090) {
            ctx->pc = 0x4800B8u;
            goto label_4800b8;
        }
    }
    ctx->pc = 0x480098u;
    // 0x480098: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x480098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x48009c: 0x24040019  addiu       $a0, $zero, 0x19
    ctx->pc = 0x48009cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x4800a0: 0xc11eff2  jal         func_47BFC8
    ctx->pc = 0x4800A0u;
    SET_GPR_U32(ctx, 31, 0x4800A8u);
    ctx->pc = 0x4800A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4800A0u;
    // 0x4800a4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x4800A0u, 0x4800A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4800A8u;
label_4800a8:
    // 0x4800a8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4800a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4800ac: 0xc11f024  jal         func_47C090
    ctx->pc = 0x4800ACu;
    SET_GPR_U32(ctx, 31, 0x4800B4u);
    ctx->pc = 0x4800B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4800ACu;
    // 0x4800b0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x4800ACu, 0x4800B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4800B4u;
label_4800b4:
    // 0x4800b4: 0x0  nop
    ctx->pc = 0x4800b4u;
    // NOP
label_4800b8:
    // 0x4800b8: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x4800b8u;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
    // 0x4800bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4800bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4800c0: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x4800c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x4800c4: 0x3e00008  jr          $ra
    ctx->pc = 0x4800C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4800C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4800C4u;
        // 0x4800c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4800C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4800CCu;
    // 0x4800cc: 0x0  nop
    ctx->pc = 0x4800ccu;
    // NOP
    ctx->pc = 0x4800d0u;
}
