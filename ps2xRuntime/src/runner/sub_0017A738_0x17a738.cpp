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

// Function: sub_0017A738
// Address: 0x17a738 - 0x17a7f0
void sub_0017A738_0x17a738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017A738_0x17a738");
#endif

    switch (ctx->pc) {
        case 0x17a790u: goto label_17a790;
        case 0x17a7acu: goto label_17a7ac;
        default: break;
    }

    ctx->pc = 0x17a738u;

    // 0x17a738: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x17a738u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x17a73c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x17a73cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x17a740: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x17a740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x17a744: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x17a744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x17a748: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x17a748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x17a74c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x17a74cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a750: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x17a750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x17a754: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x17a754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x17a758: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17a758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17a75c: 0xc441ccc4  lwc1        $f1, -0x333C($v0)
    ctx->pc = 0x17a75cu;
    { uint32_t bits = FAST_READ32(0x50CCC4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17a760: 0xc6600014  lwc1        $f0, 0x14($s3)
    ctx->pc = 0x17a760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17a764: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x17a764u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17a768: 0x0  nop
    ctx->pc = 0x17a768u;
    // NOP
    // 0x17a76c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x17A76Cu;
    {
        const bool branch_taken_0x17a76c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x17A770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A76Cu;
        // 0x17a770: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a76c) {
            ctx->pc = 0x17A77Cu;
            goto label_17a77c;
        }
    }
    ctx->pc = 0x17A774u;
    // 0x17a774: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x17A774u;
    {
        const bool branch_taken_0x17a774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A774u;
        // 0x17a778: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a774) {
            ctx->pc = 0x17A7CCu;
            goto label_17a7cc;
        }
    }
    ctx->pc = 0x17A77Cu;
label_17a77c:
    // 0x17a77c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x17a77cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x17a780: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x17A780u;
    {
        const bool branch_taken_0x17a780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A780u;
        // 0x17a784: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a780) {
            ctx->pc = 0x17A7C8u;
            goto label_17a7c8;
        }
    }
    ctx->pc = 0x17A788u;
    // 0x17a788: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x17a788u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17a78c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x17a78cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17a790:
    // 0x17a790: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x17a790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x17a794: 0x2422021  addu        $a0, $s2, $v0
    ctx->pc = 0x17a794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x17a798: 0x9083006f  lbu         $v1, 0x6F($a0)
    ctx->pc = 0x17a798u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 111)));
    // 0x17a79c: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x17A79Cu;
    {
        const bool branch_taken_0x17a79c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a79c) {
            ctx->pc = 0x17A7A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17A79Cu;
            // 0x17a7a0: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17A7B8u;
            goto label_17a7b8;
        }
    }
    ctx->pc = 0x17A7A4u;
    // 0x17a7a4: 0xc05eaf8  jal         func_17ABE0
    ctx->pc = 0x17A7A4u;
    SET_GPR_U32(ctx, 31, 0x17A7ACu);
    ctx->pc = 0x17A7A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A7A4u;
    // 0x17a7a8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17ABE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17ABE0u, 0x17A7A4u, 0x17A7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A7ACu;
label_17a7ac:
    // 0x17a7ac: 0x10540007  beq         $v0, $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x17A7ACu;
    {
        const bool branch_taken_0x17a7ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x17A7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A7ACu;
        // 0x17a7b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a7ac) {
            ctx->pc = 0x17A7CCu;
            goto label_17a7cc;
        }
    }
    ctx->pc = 0x17A7B4u;
    // 0x17a7b4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x17a7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_17a7b8:
    // 0x17a7b8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x17a7b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x17a7bc: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x17a7bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x17a7c0: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x17A7C0u;
    {
        const bool branch_taken_0x17a7c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17A7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A7C0u;
        // 0x17a7c4: 0x26520070  addiu       $s2, $s2, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a7c0) {
            ctx->pc = 0x17A790u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17a790;
        }
    }
    ctx->pc = 0x17A7C8u;
label_17a7c8:
    // 0x17a7c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17a7c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17a7cc:
    // 0x17a7cc: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x17a7ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17a7d0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x17a7d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17a7d4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x17a7d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17a7d8: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x17a7d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17a7dc: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x17a7dcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17a7e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17a7e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17a7e4: 0x3e00008  jr          $ra
    ctx->pc = 0x17A7E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A7E4u;
        // 0x17a7e8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A7E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17A7ECu;
    // 0x17a7ec: 0x0  nop
    ctx->pc = 0x17a7ecu;
    // NOP
    ctx->pc = 0x17a7f0u;
}
