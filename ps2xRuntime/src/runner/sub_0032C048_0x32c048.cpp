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

// Function: sub_0032C048
// Address: 0x32c048 - 0x32c0c0
void sub_0032C048_0x32c048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032C048_0x32c048");
#endif

    switch (ctx->pc) {
        case 0x32c064u: goto label_32c064;
        case 0x32c06cu: goto label_32c06c;
        case 0x32c07cu: goto label_32c07c;
        case 0x32c084u: goto label_32c084;
        case 0x32c090u: goto label_32c090;
        case 0x32c098u: goto label_32c098;
        case 0x32c0a4u: goto label_32c0a4;
        default: break;
    }

    ctx->pc = 0x32c048u;

    // 0x32c048: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x32c048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x32c04c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x32c04cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32c050: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x32c050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x32c054: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32c054u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c058: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32c058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32c05c: 0xc0c91d4  jal         func_324750
    ctx->pc = 0x32C05Cu;
    SET_GPR_U32(ctx, 31, 0x32C064u);
    ctx->pc = 0x32C060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C05Cu;
    // 0x32c060: 0xe7b40020  swc1        $f20, 0x20($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x324750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324750u, 0x32C05Cu, 0x32C064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C064u;
label_32c064:
    // 0x32c064: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x32C064u;
    SET_GPR_U32(ctx, 31, 0x32C06Cu);
    ctx->pc = 0x32C068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C064u;
    // 0x32c068: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x32C064u, 0x32C06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C06Cu;
label_32c06c:
    // 0x32c06c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x32c06cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32c070: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x32c070u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x32c074: 0xc0c91d4  jal         func_324750
    ctx->pc = 0x32C074u;
    SET_GPR_U32(ctx, 31, 0x32C07Cu);
    ctx->pc = 0x32C078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C074u;
    // 0x32c078: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324750u, 0x32C074u, 0x32C07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C07Cu;
label_32c07c:
    // 0x32c07c: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x32C07Cu;
    SET_GPR_U32(ctx, 31, 0x32C084u);
    ctx->pc = 0x32C080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C07Cu;
    // 0x32c080: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x32C07Cu, 0x32C084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C084u;
label_32c084:
    // 0x32c084: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x32c084u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x32c088: 0xc12e6be  jal         func_4B9AF8
    ctx->pc = 0x32C088u;
    SET_GPR_U32(ctx, 31, 0x32C090u);
    ctx->pc = 0x32C08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C088u;
    // 0x32c08c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B9AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B9AF8u, 0x32C088u, 0x32C090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C090u;
label_32c090:
    // 0x32c090: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x32C090u;
    SET_GPR_U32(ctx, 31, 0x32C098u);
    ctx->pc = 0x32C094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C090u;
    // 0x32c094: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x32C090u, 0x32C098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C098u;
label_32c098:
    // 0x32c098: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32c098u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c09c: 0xc0c8e38  jal         func_3238E0
    ctx->pc = 0x32C09Cu;
    SET_GPR_U32(ctx, 31, 0x32C0A4u);
    ctx->pc = 0x32C0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C09Cu;
    // 0x32c0a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3238E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3238E0u, 0x32C09Cu, 0x32C0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C0A4u;
label_32c0a4:
    // 0x32c0a4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x32c0a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32c0a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32c0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32c0ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32c0acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32c0b0: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x32c0b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x32c0b4: 0x3e00008  jr          $ra
    ctx->pc = 0x32C0B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32C0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C0B4u;
        // 0x32c0b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32C0B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32C0BCu;
    // 0x32c0bc: 0x0  nop
    ctx->pc = 0x32c0bcu;
    // NOP
    ctx->pc = 0x32c0c0u;
}
