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

// Function: sub_00109FB8
// Address: 0x109fb8 - 0x10a008
void sub_00109FB8_0x109fb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00109FB8_0x109fb8");
#endif

    switch (ctx->pc) {
        case 0x109fb8u: goto label_109fb8;
        case 0x109fbcu: goto label_109fbc;
        case 0x109fc0u: goto label_109fc0;
        case 0x109fc4u: goto label_109fc4;
        case 0x109fc8u: goto label_109fc8;
        case 0x109fccu: goto label_109fcc;
        case 0x109fd0u: goto label_109fd0;
        case 0x109fd4u: goto label_109fd4;
        case 0x109fd8u: goto label_109fd8;
        case 0x109fdcu: goto label_109fdc;
        case 0x109fe0u: goto label_109fe0;
        case 0x109fe4u: goto label_109fe4;
        case 0x109fe8u: goto label_109fe8;
        case 0x109fecu: goto label_109fec;
        case 0x109ff0u: goto label_109ff0;
        case 0x109ff4u: goto label_109ff4;
        case 0x109ff8u: goto label_109ff8;
        case 0x109ffcu: goto label_109ffc;
        case 0x10a000u: goto label_10a000;
        case 0x10a004u: goto label_10a004;
        default: break;
    }

    ctx->pc = 0x109fb8u;

label_109fb8:
    // 0x109fb8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x109fb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_109fbc:
    // 0x109fbc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x109fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_109fc0:
    // 0x109fc0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x109fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_109fc4:
    // 0x109fc4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x109fc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_109fc8:
    // 0x109fc8: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x109fc8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_109fcc:
    // 0x109fcc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x109fccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_109fd0:
    // 0x109fd0: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x109fd0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_109fd4:
    // 0x109fd4: 0xc05d4e0  jal         func_175380
label_109fd8:
    if (ctx->pc == 0x109FD8u) {
        ctx->pc = 0x109FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109FD4u;
        // 0x109fd8: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109FDCu;
        goto label_109fdc;
    }
    ctx->pc = 0x109FD4u;
    SET_GPR_U32(ctx, 31, 0x109FDCu);
    ctx->pc = 0x109FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109FD4u;
    // 0x109fd8: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175380u, 0x109FD4u, 0x109FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109FDCu;
label_109fdc:
    // 0x109fdc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x109fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_109fe0:
    // 0x109fe0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x109fe0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_109fe4:
    // 0x109fe4: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x109fe4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_109fe8:
    // 0x109fe8: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x109fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_109fec:
    // 0x109fec: 0x60f809  jalr        $v1
label_109ff0:
    if (ctx->pc == 0x109FF0u) {
        ctx->pc = 0x109FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109FECu;
        // 0x109ff0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109FF4u;
        goto label_109ff4;
    }
    ctx->pc = 0x109FECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x109FF4u);
        ctx->pc = 0x109FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109FECu;
        // 0x109ff0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x109FECu, 0x109FF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x109FF4u;
label_109ff4:
    // 0x109ff4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x109ff4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_109ff8:
    // 0x109ff8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x109ff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_109ffc:
    // 0x109ffc: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x109ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_10a000:
    // 0x10a000: 0x3e00008  jr          $ra
label_10a004:
    if (ctx->pc == 0x10A004u) {
        ctx->pc = 0x10A004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A000u;
        // 0x10a004: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A008u;
        goto label_fallthrough_0x10a000;
    }
    ctx->pc = 0x10A000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A000u;
        // 0x10a004: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10A000u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x10a000:
    ctx->pc = 0x10A008u;
}
