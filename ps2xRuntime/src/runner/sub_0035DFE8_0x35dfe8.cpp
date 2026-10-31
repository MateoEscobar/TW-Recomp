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

// Function: sub_0035DFE8
// Address: 0x35dfe8 - 0x35e0a0
void sub_0035DFE8_0x35dfe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035DFE8_0x35dfe8");
#endif

    switch (ctx->pc) {
        case 0x35e018u: goto label_35e018;
        case 0x35e02cu: goto label_35e02c;
        case 0x35e040u: goto label_35e040;
        case 0x35e048u: goto label_35e048;
        case 0x35e05cu: goto label_35e05c;
        case 0x35e064u: goto label_35e064;
        case 0x35e078u: goto label_35e078;
        default: break;
    }

    ctx->pc = 0x35dfe8u;

    // 0x35dfe8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x35dfe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x35dfec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35dfecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35dff0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x35dff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x35dff4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35dff4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35dff8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35dff8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35dffc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x35dffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x35e000: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x35e000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x35e004: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x35e004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x35e008: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x35e008u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e00c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35e00cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35e010: 0xc1024c6  jal         func_409318
    ctx->pc = 0x35E010u;
    SET_GPR_U32(ctx, 31, 0x35E018u);
    ctx->pc = 0x35E014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E010u;
    // 0x35e014: 0xe7b40050  swc1        $f20, 0x50($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x35E010u, 0x35E018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E018u;
label_35e018:
    // 0x35e018: 0x2982b  sltu        $s3, $zero, $v0
    ctx->pc = 0x35e018u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x35e01c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35e01cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e020: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x35e020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35e024: 0xc1024c6  jal         func_409318
    ctx->pc = 0x35E024u;
    SET_GPR_U32(ctx, 31, 0x35E02Cu);
    ctx->pc = 0x35E028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E024u;
    // 0x35e028: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x35E024u, 0x35E02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E02Cu;
label_35e02c:
    // 0x35e02c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x35e02cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e030: 0x2902b  sltu        $s2, $zero, $v0
    ctx->pc = 0x35e030u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x35e034: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x35e034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x35e038: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35E038u;
    SET_GPR_U32(ctx, 31, 0x35E040u);
    ctx->pc = 0x35E03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E038u;
    // 0x35e03c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35E038u, 0x35E040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E040u;
label_35e040:
    // 0x35e040: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x35E040u;
    SET_GPR_U32(ctx, 31, 0x35E048u);
    ctx->pc = 0x35E044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E040u;
    // 0x35e044: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x35E040u, 0x35E048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E048u;
label_35e048:
    // 0x35e048: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x35e048u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e04c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x35e04cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x35e050: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35e050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e054: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35E054u;
    SET_GPR_U32(ctx, 31, 0x35E05Cu);
    ctx->pc = 0x35E058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E054u;
    // 0x35e058: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35E054u, 0x35E05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E05Cu;
label_35e05c:
    // 0x35e05c: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x35E05Cu;
    SET_GPR_U32(ctx, 31, 0x35E064u);
    ctx->pc = 0x35E060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E05Cu;
    // 0x35e060: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x35E05Cu, 0x35E064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E064u;
label_35e064:
    // 0x35e064: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x35e064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e068: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x35e068u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e06c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x35e06cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x35e070: 0xc08e97e  jal         func_23A5F8
    ctx->pc = 0x35E070u;
    SET_GPR_U32(ctx, 31, 0x35E078u);
    ctx->pc = 0x35E074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E070u;
    // 0x35e074: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A5F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A5F8u, 0x35E070u, 0x35E078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E078u;
label_35e078:
    // 0x35e078: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x35e078u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x35e07c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35e07cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e080: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x35e080u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35e084: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x35e084u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35e088: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x35e088u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35e08c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35e08cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35e090: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x35e090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x35e094: 0x3e00008  jr          $ra
    ctx->pc = 0x35E094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35E098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E094u;
        // 0x35e098: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35E094u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35E09Cu;
    // 0x35e09c: 0x0  nop
    ctx->pc = 0x35e09cu;
    // NOP
    ctx->pc = 0x35e0a0u;
}
