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

// Function: sub_003E7100
// Address: 0x3e7100 - 0x3e71a0
void sub_003E7100_0x3e7100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E7100_0x3e7100");
#endif

    switch (ctx->pc) {
        case 0x3e7134u: goto label_3e7134;
        case 0x3e713cu: goto label_3e713c;
        case 0x3e714cu: goto label_3e714c;
        case 0x3e716cu: goto label_3e716c;
        case 0x3e717cu: goto label_3e717c;
        default: break;
    }

    ctx->pc = 0x3e7100u;

    // 0x3e7100: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3e7100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3e7104: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3e7104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x3e7108: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x3e7108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x3e710c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3e710cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e7110: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3e7110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x3e7114: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3e7114u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e7118: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3e7118u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e711c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3e711cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3e7120: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3e7120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3e7124: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e7124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e7128: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x3e7128u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x3e712c: 0xc0ea146  jal         func_3A8518
    ctx->pc = 0x3E712Cu;
    SET_GPR_U32(ctx, 31, 0x3E7134u);
    ctx->pc = 0x3E7130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E712Cu;
    // 0x3e7130: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3E712Cu, 0x3E7134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7134u;
label_3e7134:
    // 0x3e7134: 0xc0ea13a  jal         func_3A84E8
    ctx->pc = 0x3E7134u;
    SET_GPR_U32(ctx, 31, 0x3E713Cu);
    ctx->pc = 0x3E7138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7134u;
    // 0x3e7138: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84E8u, 0x3E7134u, 0x3E713Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E713Cu;
label_3e713c:
    // 0x3e713c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3e713cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x3e7140: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3e7140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e7144: 0xc0ea12a  jal         func_3A84A8
    ctx->pc = 0x3E7144u;
    SET_GPR_U32(ctx, 31, 0x3E714Cu);
    ctx->pc = 0x3E7148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7144u;
    // 0x3e7148: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3E7144u, 0x3E714Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E714Cu;
label_3e714c:
    // 0x3e714c: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3e714cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e7150: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3e7150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3e7154: 0x8e442c7c  lw          $a0, 0x2C7C($s2)
    ctx->pc = 0x3e7154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
    // 0x3e7158: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3e7158u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e715c: 0xe6340000  swc1        $f20, 0x0($s1)
    ctx->pc = 0x3e715cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x3e7160: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x3e7160u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x3e7164: 0xc0e8cda  jal         func_3A3368
    ctx->pc = 0x3E7164u;
    SET_GPR_U32(ctx, 31, 0x3E716Cu);
    ctx->pc = 0x3E7168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7164u;
    // 0x3e7168: 0x7e220010  sq          $v0, 0x10($s1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3368u, 0x3E7164u, 0x3E716Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E716Cu;
label_3e716c:
    // 0x3e716c: 0x8e442c7c  lw          $a0, 0x2C7C($s2)
    ctx->pc = 0x3e716cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
    // 0x3e7170: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3e7170u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e7174: 0xc0e8cbc  jal         func_3A32F0
    ctx->pc = 0x3E7174u;
    SET_GPR_U32(ctx, 31, 0x3E717Cu);
    ctx->pc = 0x3E7178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7174u;
    // 0x3e7178: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A32F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A32F0u, 0x3E7174u, 0x3E717Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E717Cu;
label_3e717c:
    // 0x3e717c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3e717cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3e7180: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3e7180u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3e7184: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3e7184u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3e7188: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x3e7188u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3e718c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3e718cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e7190: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x3e7190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3e7194: 0x3e00008  jr          $ra
    ctx->pc = 0x3E7194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E7198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7194u;
        // 0x3e7198: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E7194u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E719Cu;
    // 0x3e719c: 0x0  nop
    ctx->pc = 0x3e719cu;
    // NOP
    ctx->pc = 0x3e71a0u;
}
