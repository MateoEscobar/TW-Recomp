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

// Function: sub_0030AB58
// Address: 0x30ab58 - 0x30ac10
void sub_0030AB58_0x30ab58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030AB58_0x30ab58");
#endif

    switch (ctx->pc) {
        case 0x30ab7cu: goto label_30ab7c;
        case 0x30ab88u: goto label_30ab88;
        case 0x30ab90u: goto label_30ab90;
        case 0x30aba8u: goto label_30aba8;
        case 0x30abe8u: goto label_30abe8;
        case 0x30abf4u: goto label_30abf4;
        default: break;
    }

    ctx->pc = 0x30ab58u;

    // 0x30ab58: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x30ab58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x30ab5c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x30ab5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x30ab60: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x30ab60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x30ab64: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x30ab64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ab68: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x30ab68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ab6c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x30ab6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x30ab70: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x30ab70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x30ab74: 0xc087502  jal         func_21D408
    ctx->pc = 0x30AB74u;
    SET_GPR_U32(ctx, 31, 0x30AB7Cu);
    ctx->pc = 0x30AB78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AB74u;
    // 0x30ab78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x30AB74u, 0x30AB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AB7Cu;
label_30ab7c:
    // 0x30ab7c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x30ab7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ab80: 0xc0a3630  jal         func_28D8C0
    ctx->pc = 0x30AB80u;
    SET_GPR_U32(ctx, 31, 0x30AB88u);
    ctx->pc = 0x30AB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AB80u;
    // 0x30ab84: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D8C0u, 0x30AB80u, 0x30AB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AB88u;
label_30ab88:
    // 0x30ab88: 0xc0a3628  jal         func_28D8A0
    ctx->pc = 0x30AB88u;
    SET_GPR_U32(ctx, 31, 0x30AB90u);
    ctx->pc = 0x30AB8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AB88u;
    // 0x30ab8c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D8A0u, 0x30AB88u, 0x30AB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AB90u;
label_30ab90:
    // 0x30ab90: 0x8e0300cc  lw          $v1, 0xCC($s0)
    ctx->pc = 0x30ab90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
    // 0x30ab94: 0x240200ed  addiu       $v0, $zero, 0xED
    ctx->pc = 0x30ab94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 237));
    // 0x30ab98: 0x14620017  bne         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x30AB98u;
    {
        const bool branch_taken_0x30ab98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x30AB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AB98u;
        // 0x30ab9c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ab98) {
            ctx->pc = 0x30ABF8u;
            goto label_30abf8;
        }
    }
    ctx->pc = 0x30ABA0u;
    // 0x30aba0: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x30ABA0u;
    SET_GPR_U32(ctx, 31, 0x30ABA8u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x30ABA0u, 0x30ABA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30ABA8u;
label_30aba8:
    // 0x30aba8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x30aba8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30abac: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x30ABACu;
    {
        const bool branch_taken_0x30abac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30ABB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30ABACu;
        // 0x30abb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30abac) {
            ctx->pc = 0x30ABE8u;
            goto label_30abe8;
        }
    }
    ctx->pc = 0x30ABB4u;
    // 0x30abb4: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x30abb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x30abb8: 0x92260034  lbu         $a2, 0x34($s1)
    ctx->pc = 0x30abb8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x30abbc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x30abbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30abc0: 0x96270030  lhu         $a3, 0x30($s1)
    ctx->pc = 0x30abc0u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x30abc4: 0x86280032  lh          $t0, 0x32($s1)
    ctx->pc = 0x30abc4u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 50)));
    // 0x30abc8: 0x92290035  lbu         $t1, 0x35($s1)
    ctx->pc = 0x30abc8u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 53)));
    // 0x30abcc: 0x922a0036  lbu         $t2, 0x36($s1)
    ctx->pc = 0x30abccu;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 54)));
    // 0x30abd0: 0x922b0037  lbu         $t3, 0x37($s1)
    ctx->pc = 0x30abd0u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 55)));
    // 0x30abd4: 0xc62e002c  lwc1        $f14, 0x2C($s1)
    ctx->pc = 0x30abd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x30abd8: 0xc62c0024  lwc1        $f12, 0x24($s1)
    ctx->pc = 0x30abd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x30abdc: 0xc62d0028  lwc1        $f13, 0x28($s1)
    ctx->pc = 0x30abdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x30abe0: 0xc0bbdea  jal         func_2EF7A8
    ctx->pc = 0x30ABE0u;
    SET_GPR_U32(ctx, 31, 0x30ABE8u);
    ctx->pc = 0x30ABE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30ABE0u;
    // 0x30abe4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF7A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF7A8u, 0x30ABE0u, 0x30ABE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30ABE8u;
label_30abe8:
    // 0x30abe8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30abe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30abec: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x30ABECu;
    SET_GPR_U32(ctx, 31, 0x30ABF4u);
    ctx->pc = 0x30ABF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30ABECu;
    // 0x30abf0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x30ABECu, 0x30ABF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30ABF4u;
label_30abf4:
    // 0x30abf4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x30abf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_30abf8:
    // 0x30abf8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x30abf8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30abfc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x30abfcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30ac00: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x30ac00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30ac04: 0x3e00008  jr          $ra
    ctx->pc = 0x30AC04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30AC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AC04u;
        // 0x30ac08: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30AC04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30AC0Cu;
    // 0x30ac0c: 0x0  nop
    ctx->pc = 0x30ac0cu;
    // NOP
    ctx->pc = 0x30ac10u;
}
