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

// Function: sub_004BECE0
// Address: 0x4bece0 - 0x4bede8
void sub_004BECE0_0x4bece0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004BECE0_0x4bece0");
#endif

    switch (ctx->pc) {
        case 0x4bed58u: goto label_4bed58;
        case 0x4bed9cu: goto label_4bed9c;
        case 0x4bedb0u: goto label_4bedb0;
        case 0x4bedc4u: goto label_4bedc4;
        default: break;
    }

    ctx->pc = 0x4bece0u;

    // 0x4bece0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4bece0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x4bece4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4bece4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4bece8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4bece8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x4becec: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4bececu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4becf0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x4becf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x4becf4: 0x3c120071  lui         $s2, 0x71
    ctx->pc = 0x4becf4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)113 << 16));
    // 0x4becf8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x4becf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x4becfc: 0x265141f0  addiu       $s1, $s2, 0x41F0
    ctx->pc = 0x4becfcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 16880));
    // 0x4bed00: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4bed00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4bed04: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4bed04u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bed08: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x4bed08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x4bed0c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x4bed0cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7141F4u));
    // 0x4bed10: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x4bed10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x4bed14: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x4bed14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
    // 0x4bed18: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x4bed18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x4bed1c: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x4bed1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x4bed20: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x4bed20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x4bed24: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x4bed24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x4bed28: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x4bed28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x4bed2c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x4bed2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x4bed30: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x4bed30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x4bed34: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x4bed34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x4bed38: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x4bed38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x4bed3c: 0xae250020  sw          $a1, 0x20($s1)
    ctx->pc = 0x4bed3cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x714210u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x714210u, _value); } while (0);
    // 0x4bed40: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x4bed40u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x714200u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x714200u, _value); } while (0);
    // 0x4bed44: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x4bed44u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x7141F4u));
    // 0x4bed48: 0xae5341f0  sw          $s3, 0x41F0($s2)
    ctx->pc = 0x4bed48u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 19)); ps2TraceGuestWrite(rdram, 0x7141F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7141F0u, _value); } while (0);
    // 0x4bed4c: 0x2708021  addu        $s0, $s3, $s0
    ctx->pc = 0x4bed4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x4bed50: 0xc12fe02  jal         func_4BF808
    ctx->pc = 0x4BED50u;
    SET_GPR_U32(ctx, 31, 0x4BED58u);
    ctx->pc = 0x4BED54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BED50u;
    // 0x4bed54: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BF808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4BF808u, 0x4BED50u, 0x4BED58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BED58u;
label_4bed58:
    // 0x4bed58: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x4bed58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x4bed5c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4bed5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bed60: 0x8e4241f0  lw          $v0, 0x41F0($s2)
    ctx->pc = 0x4bed60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16880)));
    // 0x4bed64: 0x24430050  addiu       $v1, $v0, 0x50
    ctx->pc = 0x4bed64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x4bed68: 0xc4400050  lwc1        $f0, 0x50($v0)
    ctx->pc = 0x4bed68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4bed6c: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x4bed6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4bed70: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x4bed70u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x4bed74: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x4bed74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x4bed78: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x4bed78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4bed7c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x4bed7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4bed80: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x4bed80u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x4bed84: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x4bed84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x4bed88: 0xc4620014  lwc1        $f2, 0x14($v1)
    ctx->pc = 0x4bed88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4bed8c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x4bed8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4bed90: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x4bed90u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x4bed94: 0xc120034  jal         func_4800D0
    ctx->pc = 0x4BED94u;
    SET_GPR_U32(ctx, 31, 0x4BED9Cu);
    ctx->pc = 0x4BED98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BED94u;
    // 0x4bed98: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4800D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4800D0u, 0x4BED94u, 0x4BED9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BED9Cu;
label_4bed9c:
    // 0x4bed9c: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x4bed9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x4beda0: 0x8e4541f0  lw          $a1, 0x41F0($s2)
    ctx->pc = 0x4beda0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16880)));
    // 0x4beda4: 0x8ca4001c  lw          $a0, 0x1C($a1)
    ctx->pc = 0x4beda4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x4beda8: 0xc12fa62  jal         func_4BE988
    ctx->pc = 0x4BEDA8u;
    SET_GPR_U32(ctx, 31, 0x4BEDB0u);
    ctx->pc = 0x4BEDACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BEDA8u;
    // 0x4bedac: 0x24a50050  addiu       $a1, $a1, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4BE988u, 0x4BEDA8u, 0x4BEDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BEDB0u;
label_4bedb0:
    // 0x4bedb0: 0x8e4441f0  lw          $a0, 0x41F0($s2)
    ctx->pc = 0x4bedb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16880)));
    // 0x4bedb4: 0x3c05004c  lui         $a1, 0x4C
    ctx->pc = 0x4bedb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)76 << 16));
    // 0x4bedb8: 0x24a5eb08  addiu       $a1, $a1, -0x14F8
    ctx->pc = 0x4bedb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961928));
    // 0x4bedbc: 0xc11c72c  jal         func_471CB0
    ctx->pc = 0x4BEDBCu;
    SET_GPR_U32(ctx, 31, 0x4BEDC4u);
    ctx->pc = 0x4BEDC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BEDBCu;
    // 0x4bedc0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x471CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x471CB0u, 0x4BEDBCu, 0x4BEDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BEDC4u;
label_4bedc4:
    // 0x4bedc4: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4bedc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bedc8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x4bedc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4bedcc: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x4bedccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4bedd0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4bedd0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4bedd4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x4bedd4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4bedd8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4bedd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4beddc: 0x3e00008  jr          $ra
    ctx->pc = 0x4BEDDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BEDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BEDDCu;
        // 0x4bede0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4BEDDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4BEDE4u;
    // 0x4bede4: 0x0  nop
    ctx->pc = 0x4bede4u;
    // NOP
    ctx->pc = 0x4bede8u;
}
