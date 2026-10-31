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

// Function: sub_0010FD48
// Address: 0x10fd48 - 0x10fdd0
void sub_0010FD48_0x10fd48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010FD48_0x10fd48");
#endif

    switch (ctx->pc) {
        case 0x10fd8cu: goto label_10fd8c;
        case 0x10fdacu: goto label_10fdac;
        default: break;
    }

    ctx->pc = 0x10fd48u;

    // 0x10fd48: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x10fd48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x10fd4c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x10fd4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x10fd50: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10fd50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fd54: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x10fd54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x10fd58: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x10fd58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x10fd5c: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x10fd5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x10fd60: 0xe7b60050  swc1        $f22, 0x50($sp)
    ctx->pc = 0x10fd60u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x10fd64: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x10fd64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fd68: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x10fd68u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x10fd6c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x10fd6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fd70: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x10fd70u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x10fd74: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x10fd74u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x10fd78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10fd78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10fd7c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x10fd7cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x10fd80: 0x46007586  mov.s       $f22, $f14
    ctx->pc = 0x10fd80u;
    ctx->f[22] = FPU_MOV_S(ctx->f[14]);
    // 0x10fd84: 0xc050fda  jal         func_143F68
    ctx->pc = 0x10FD84u;
    SET_GPR_U32(ctx, 31, 0x10FD8Cu);
    ctx->pc = 0x10FD88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FD84u;
    // 0x10fd88: 0x248491e0  addiu       $a0, $a0, -0x6E20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x10FD84u, 0x10FD8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FD8Cu;
label_10fd8c:
    // 0x10fd8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10fd8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fd90: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x10fd90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fd94: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x10fd94u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x10fd98: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x10fd98u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x10fd9c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x10fd9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fda0: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x10fda0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    // 0x10fda4: 0xc043f74  jal         func_10FDD0
    ctx->pc = 0x10FDA4u;
    SET_GPR_U32(ctx, 31, 0x10FDACu);
    ctx->pc = 0x10FDA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FDA4u;
    // 0x10fda8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FDD0u, 0x10FDA4u, 0x10FDACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FDACu;
label_10fdac:
    // 0x10fdac: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x10fdacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10fdb0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x10fdb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10fdb4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x10fdb4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10fdb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10fdb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10fdbc: 0xc7b60050  lwc1        $f22, 0x50($sp)
    ctx->pc = 0x10fdbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x10fdc0: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x10fdc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x10fdc4: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x10fdc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x10fdc8: 0x3e00008  jr          $ra
    ctx->pc = 0x10FDC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10FDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FDC8u;
        // 0x10fdcc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10FDC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10FDD0u;
}
