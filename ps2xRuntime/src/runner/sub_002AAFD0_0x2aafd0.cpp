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

// Function: sub_002AAFD0
// Address: 0x2aafd0 - 0x2ab068
void sub_002AAFD0_0x2aafd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AAFD0_0x2aafd0");
#endif

    switch (ctx->pc) {
        case 0x2aaff4u: goto label_2aaff4;
        case 0x2ab02cu: goto label_2ab02c;
        case 0x2ab050u: goto label_2ab050;
        default: break;
    }

    ctx->pc = 0x2aafd0u;

    // 0x2aafd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2aafd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2aafd4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2aafd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2aafd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2aafd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2aafdc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2aafdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aafe0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2aafe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2aafe4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2aafe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2aafe8: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x2aafe8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2aafec: 0xc08bfbc  jal         func_22FEF0
    ctx->pc = 0x2AAFECu;
    SET_GPR_U32(ctx, 31, 0x2AAFF4u);
    ctx->pc = 0x2AAFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AAFECu;
    // 0x2aaff0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FEF0u, 0x2AAFECu, 0x2AAFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AAFF4u;
label_2aaff4:
    // 0x2aaff4: 0x86230092  lh          $v1, 0x92($s1)
    ctx->pc = 0x2aaff4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
    // 0x2aaff8: 0x3c050071  lui         $a1, 0x71
    ctx->pc = 0x2aaff8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)113 << 16));
    // 0x2aaffc: 0x24a54b00  addiu       $a1, $a1, 0x4B00
    ctx->pc = 0x2aaffcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19200));
    // 0x2ab000: 0x3c0140e0  lui         $at, 0x40E0
    ctx->pc = 0x2ab000u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16608 << 16));
    // 0x2ab004: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2ab004u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ab008: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2ab008u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x2ab00c: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x2ab00cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x2ab010: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2ab010u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2ab014: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2ab014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2ab018: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2ab018u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x2ab01c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2ab01cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ab020: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x2ab020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    // 0x2ab024: 0xc0cd508  jal         func_335420
    ctx->pc = 0x2AB024u;
    SET_GPR_U32(ctx, 31, 0x2AB02Cu);
    ctx->pc = 0x2AB028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB024u;
    // 0x2ab028: 0x7e020030  sq          $v0, 0x30($s0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x2AB024u, 0x2AB02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB02Cu;
label_2ab02c:
    // 0x2ab02c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2ab02cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2ab030: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2ab030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ab034: 0xa2000072  sb          $zero, 0x72($s0)
    ctx->pc = 0x2ab034u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 114), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ab038: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x2ab038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2ab03c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2ab03cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ab040: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x2ab040u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x2ab044: 0xa46200f4  sh          $v0, 0xF4($v1)
    ctx->pc = 0x2ab044u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 244), (uint16_t)GPR_U32(ctx, 2));
    // 0x2ab048: 0xc0a337e  jal         func_28CDF8
    ctx->pc = 0x2AB048u;
    SET_GPR_U32(ctx, 31, 0x2AB050u);
    ctx->pc = 0x2AB04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB048u;
    // 0x2ab04c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CDF8u, 0x2AB048u, 0x2AB050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB050u;
label_2ab050:
    // 0x2ab050: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2ab050u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ab054: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ab054u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ab058: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ab058u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ab05c: 0x3e00008  jr          $ra
    ctx->pc = 0x2AB05Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AB060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB05Cu;
        // 0x2ab060: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AB05Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AB064u;
    // 0x2ab064: 0x0  nop
    ctx->pc = 0x2ab064u;
    // NOP
    ctx->pc = 0x2ab068u;
}
