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

// Function: sub_0036BCB8
// Address: 0x36bcb8 - 0x36bd90
void sub_0036BCB8_0x36bcb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036BCB8_0x36bcb8");
#endif

    switch (ctx->pc) {
        case 0x36bce0u: goto label_36bce0;
        case 0x36bce8u: goto label_36bce8;
        case 0x36bcf8u: goto label_36bcf8;
        case 0x36bd10u: goto label_36bd10;
        case 0x36bd18u: goto label_36bd18;
        case 0x36bd34u: goto label_36bd34;
        case 0x36bd40u: goto label_36bd40;
        case 0x36bd50u: goto label_36bd50;
        case 0x36bd64u: goto label_36bd64;
        default: break;
    }

    ctx->pc = 0x36bcb8u;

    // 0x36bcb8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x36bcb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x36bcbc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36bcbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36bcc0: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x36bcc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x36bcc4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36bcc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36bcc8: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x36bcc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x36bccc: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x36bcccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x36bcd0: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x36bcd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x36bcd4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x36bcd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x36bcd8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36BCD8u;
    SET_GPR_U32(ctx, 31, 0x36BCE0u);
    ctx->pc = 0x36BCDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BCD8u;
    // 0x36bcdc: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36BCD8u, 0x36BCE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BCE0u;
label_36bce0:
    // 0x36bce0: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x36BCE0u;
    SET_GPR_U32(ctx, 31, 0x36BCE8u);
    ctx->pc = 0x36BCE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BCE0u;
    // 0x36bce4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x36BCE0u, 0x36BCE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BCE8u;
label_36bce8:
    // 0x36bce8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x36bce8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36bcec: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x36bcecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36bcf0: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x36bcf0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36bcf4: 0x0  nop
    ctx->pc = 0x36bcf4u;
    // NOP
label_36bcf8:
    // 0x36bcf8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36bcf8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36bcfc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36bcfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36bd00: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x36bd00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36bd04: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36bd04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36bd08: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x36BD08u;
    SET_GPR_U32(ctx, 31, 0x36BD10u);
    ctx->pc = 0x36BD0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BD08u;
    // 0x36bd0c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x36BD08u, 0x36BD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BD10u;
label_36bd10:
    // 0x36bd10: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x36BD10u;
    SET_GPR_U32(ctx, 31, 0x36BD18u);
    ctx->pc = 0x36BD14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BD10u;
    // 0x36bd14: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x36BD10u, 0x36BD18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BD18u;
label_36bd18:
    // 0x36bd18: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x36bd18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x36bd1c: 0x2a020014  slti        $v0, $s0, 0x14
    ctx->pc = 0x36bd1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x36bd20: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x36BD20u;
    {
        const bool branch_taken_0x36bd20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36BD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BD20u;
        // 0x36bd24: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36bd20) {
            ctx->pc = 0x36BCF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36bcf8;
        }
    }
    ctx->pc = 0x36BD28u;
    // 0x36bd28: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x36bd28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36bd2c: 0xc0a51e2  jal         func_294788
    ctx->pc = 0x36BD2Cu;
    SET_GPR_U32(ctx, 31, 0x36BD34u);
    ctx->pc = 0x36BD30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BD2Cu;
    // 0x36bd30: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294788u, 0x36BD2Cu, 0x36BD34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BD34u;
label_36bd34:
    // 0x36bd34: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x36bd34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36bd38: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x36bd38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x36bd3c: 0x0  nop
    ctx->pc = 0x36bd3cu;
    // NOP
label_36bd40:
    // 0x36bd40: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x36bd40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x36bd44: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36bd44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36bd48: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x36BD48u;
    SET_GPR_U32(ctx, 31, 0x36BD50u);
    ctx->pc = 0x36BD4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BD48u;
    // 0x36bd4c: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x36BD48u, 0x36BD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BD50u;
label_36bd50:
    // 0x36bd50: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x36bd50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36bd54: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36bd54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36bd58: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x36bd58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36bd5c: 0xc102576  jal         func_4095D8
    ctx->pc = 0x36BD5Cu;
    SET_GPR_U32(ctx, 31, 0x36BD64u);
    ctx->pc = 0x36BD60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BD5Cu;
    // 0x36bd60: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x36BD5Cu, 0x36BD64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BD64u;
label_36bd64:
    // 0x36bd64: 0x2a020014  slti        $v0, $s0, 0x14
    ctx->pc = 0x36bd64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x36bd68: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x36BD68u;
    {
        const bool branch_taken_0x36bd68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36BD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BD68u;
        // 0x36bd6c: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36bd68) {
            ctx->pc = 0x36BD40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36bd40;
        }
    }
    ctx->pc = 0x36BD70u;
    // 0x36bd70: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x36bd70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x36bd74: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36bd74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36bd78: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x36bd78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x36bd7c: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x36bd7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x36bd80: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x36bd80u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x36bd84: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x36bd84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x36bd88: 0x3e00008  jr          $ra
    ctx->pc = 0x36BD88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36BD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BD88u;
        // 0x36bd8c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36BD88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36BD90u;
}
