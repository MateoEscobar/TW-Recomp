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

// Function: sub_003E8020
// Address: 0x3e8020 - 0x3e80d0
void sub_003E8020_0x3e8020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E8020_0x3e8020");
#endif

    switch (ctx->pc) {
        case 0x3e8020u: goto label_3e8020;
        case 0x3e8024u: goto label_3e8024;
        case 0x3e8028u: goto label_3e8028;
        case 0x3e802cu: goto label_3e802c;
        case 0x3e8030u: goto label_3e8030;
        case 0x3e8034u: goto label_3e8034;
        case 0x3e8038u: goto label_3e8038;
        case 0x3e803cu: goto label_3e803c;
        case 0x3e8040u: goto label_3e8040;
        case 0x3e8044u: goto label_3e8044;
        case 0x3e8048u: goto label_3e8048;
        case 0x3e804cu: goto label_3e804c;
        case 0x3e8050u: goto label_3e8050;
        case 0x3e8054u: goto label_3e8054;
        case 0x3e8058u: goto label_3e8058;
        case 0x3e805cu: goto label_3e805c;
        case 0x3e8060u: goto label_3e8060;
        case 0x3e8064u: goto label_3e8064;
        case 0x3e8068u: goto label_3e8068;
        case 0x3e806cu: goto label_3e806c;
        case 0x3e8070u: goto label_3e8070;
        case 0x3e8074u: goto label_3e8074;
        case 0x3e8078u: goto label_3e8078;
        case 0x3e807cu: goto label_3e807c;
        case 0x3e8080u: goto label_3e8080;
        case 0x3e8084u: goto label_3e8084;
        case 0x3e8088u: goto label_3e8088;
        case 0x3e808cu: goto label_3e808c;
        case 0x3e8090u: goto label_3e8090;
        case 0x3e8094u: goto label_3e8094;
        case 0x3e8098u: goto label_3e8098;
        case 0x3e809cu: goto label_3e809c;
        case 0x3e80a0u: goto label_3e80a0;
        case 0x3e80a4u: goto label_3e80a4;
        case 0x3e80a8u: goto label_3e80a8;
        case 0x3e80acu: goto label_3e80ac;
        case 0x3e80b0u: goto label_3e80b0;
        case 0x3e80b4u: goto label_3e80b4;
        case 0x3e80b8u: goto label_3e80b8;
        case 0x3e80bcu: goto label_3e80bc;
        case 0x3e80c0u: goto label_3e80c0;
        case 0x3e80c4u: goto label_3e80c4;
        case 0x3e80c8u: goto label_3e80c8;
        case 0x3e80ccu: goto label_3e80cc;
        default: break;
    }

    ctx->pc = 0x3e8020u;

label_3e8020:
    // 0x3e8020: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3e8020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_3e8024:
    // 0x3e8024: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3e8024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_3e8028:
    // 0x3e8028: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3e8028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_3e802c:
    // 0x3e802c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3e802cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e8030:
    // 0x3e8030: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3e8030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_3e8034:
    // 0x3e8034: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3e8034u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3e8038:
    // 0x3e8038: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3e8038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3e803c:
    // 0x3e803c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3e803cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3e8040:
    // 0x3e8040: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3e8040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3e8044:
    // 0x3e8044: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3e8044u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3e8048:
    // 0x3e8048: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3e8048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3e804c:
    // 0x3e804c: 0x40f809  jalr        $v0
label_3e8050:
    if (ctx->pc == 0x3E8050u) {
        ctx->pc = 0x3E8050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E804Cu;
        // 0x3e8050: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E8054u;
        goto label_3e8054;
    }
    ctx->pc = 0x3E804Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E8054u);
        ctx->pc = 0x3E8050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E804Cu;
        // 0x3e8050: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E804Cu, 0x3E8054u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E8054u;
label_3e8054:
    // 0x3e8054: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3e8054u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e8058:
    // 0x3e8058: 0xc0ea146  jal         func_3A8518
label_3e805c:
    if (ctx->pc == 0x3E805Cu) {
        ctx->pc = 0x3E805Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8058u;
        // 0x3e805c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E8060u;
        goto label_3e8060;
    }
    ctx->pc = 0x3E8058u;
    SET_GPR_U32(ctx, 31, 0x3E8060u);
    ctx->pc = 0x3E805Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E8058u;
    // 0x3e805c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3E8058u, 0x3E8060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E8060u;
label_3e8060:
    // 0x3e8060: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3e8060u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e8064:
    // 0x3e8064: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3e8064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3e8068:
    // 0x3e8068: 0xc0ea12a  jal         func_3A84A8
label_3e806c:
    if (ctx->pc == 0x3E806Cu) {
        ctx->pc = 0x3E806Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8068u;
        // 0x3e806c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E8070u;
        goto label_3e8070;
    }
    ctx->pc = 0x3E8068u;
    SET_GPR_U32(ctx, 31, 0x3E8070u);
    ctx->pc = 0x3E806Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E8068u;
    // 0x3e806c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3E8068u, 0x3E8070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E8070u;
label_3e8070:
    // 0x3e8070: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3e8070u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3e8074:
    // 0x3e8074: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e8074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e8078:
    // 0x3e8078: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x3e8078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_3e807c:
    // 0x3e807c: 0xc0e858c  jal         func_3A1630
label_3e8080:
    if (ctx->pc == 0x3E8080u) {
        ctx->pc = 0x3E8080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E807Cu;
        // 0x3e8080: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E8084u;
        goto label_3e8084;
    }
    ctx->pc = 0x3E807Cu;
    SET_GPR_U32(ctx, 31, 0x3E8084u);
    ctx->pc = 0x3E8080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E807Cu;
    // 0x3e8080: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3E807Cu, 0x3E8084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E8084u;
label_3e8084:
    // 0x3e8084: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3e8084u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3e8088:
    // 0x3e8088: 0x24030488  addiu       $v1, $zero, 0x488
    ctx->pc = 0x3e8088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1160));
label_3e808c:
    // 0x3e808c: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x3e808cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_3e8090:
    // 0x3e8090: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3e8090u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3e8094:
    // 0x3e8094: 0xae120084  sw          $s2, 0x84($s0)
    ctx->pc = 0x3e8094u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 18));
label_3e8098:
    // 0x3e8098: 0xae120080  sw          $s2, 0x80($s0)
    ctx->pc = 0x3e8098u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 18));
label_3e809c:
    // 0x3e809c: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x3e809cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_3e80a0:
    // 0x3e80a0: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x3e80a0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
label_3e80a4:
    // 0x3e80a4: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x3e80a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
label_3e80a8:
    // 0x3e80a8: 0xe600008c  swc1        $f0, 0x8C($s0)
    ctx->pc = 0x3e80a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 140), bits); }
label_3e80ac:
    // 0x3e80ac: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x3e80acu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_3e80b0:
    // 0x3e80b0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3e80b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3e80b4:
    // 0x3e80b4: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3e80b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3e80b8:
    // 0x3e80b8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3e80b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3e80bc:
    // 0x3e80bc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3e80bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3e80c0:
    // 0x3e80c0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3e80c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3e80c4:
    // 0x3e80c4: 0x3e00008  jr          $ra
label_3e80c8:
    if (ctx->pc == 0x3E80C8u) {
        ctx->pc = 0x3E80C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E80C4u;
        // 0x3e80c8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E80CCu;
        goto label_3e80cc;
    }
    ctx->pc = 0x3E80C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E80C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E80C4u;
        // 0x3e80c8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E80C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E80CCu;
label_3e80cc:
    // 0x3e80cc: 0x0  nop
    ctx->pc = 0x3e80ccu;
    // NOP
    ctx->pc = 0x3e80d0u;
}
