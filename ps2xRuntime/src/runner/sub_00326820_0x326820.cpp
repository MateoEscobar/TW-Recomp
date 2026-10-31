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

// Function: sub_00326820
// Address: 0x326820 - 0x326908
void sub_00326820_0x326820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00326820_0x326820");
#endif

    switch (ctx->pc) {
        case 0x326878u: goto label_326878;
        case 0x326884u: goto label_326884;
        case 0x3268c4u: goto label_3268c4;
        default: break;
    }

    ctx->pc = 0x326820u;

    // 0x326820: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x326820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x326824: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x326824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x326828: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x326828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x32682c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x32682cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326830: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x326830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x326834: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x326834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x326838: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x326838u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32683c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x32683cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x326840: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x326840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x326844: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x326844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x326848: 0x8eb20000  lw          $s2, 0x0($s5)
    ctx->pc = 0x326848u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x32684c: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x32684cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x326850: 0x2a020014  slti        $v0, $s0, 0x14
    ctx->pc = 0x326850u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x326854: 0x2603ffec  addiu       $v1, $s0, -0x14
    ctx->pc = 0x326854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967276));
    // 0x326858: 0x62980a  movz        $s3, $v1, $v0
    ctx->pc = 0x326858u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
    // 0x32685c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x32685cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x326860: 0x213102a  slt         $v0, $s0, $s3
    ctx->pc = 0x326860u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x326864: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x326864u;
    {
        const bool branch_taken_0x326864 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x326868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326864u;
        // 0x326868: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326864) {
            ctx->pc = 0x32689Cu;
            goto label_32689c;
        }
    }
    ctx->pc = 0x32686Cu;
    // 0x32686c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x32686cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x326870: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x326870u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x326874: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x326874u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_326878:
    // 0x326878: 0xde240000  ld          $a0, 0x0($s1)
    ctx->pc = 0x326878u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x32687c: 0xc10b0a0  jal         func_42C280
    ctx->pc = 0x32687Cu;
    SET_GPR_U32(ctx, 31, 0x326884u);
    ctx->pc = 0x326880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32687Cu;
    // 0x326880: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C280u, 0x32687Cu, 0x326884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326884u;
label_326884:
    // 0x326884: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x326884u;
    {
        const bool branch_taken_0x326884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x326888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326884u;
        // 0x326888: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326884) {
            ctx->pc = 0x3268E4u;
            goto label_3268e4;
        }
    }
    ctx->pc = 0x32688Cu;
    // 0x32688c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x32688cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x326890: 0x213102a  slt         $v0, $s0, $s3
    ctx->pc = 0x326890u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x326894: 0x1040fff8  beqz        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x326894u;
    {
        const bool branch_taken_0x326894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x326898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326894u;
        // 0x326898: 0x2631fff8  addiu       $s1, $s1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326894) {
            ctx->pc = 0x326878u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_326878;
        }
    }
    ctx->pc = 0x32689Cu;
label_32689c:
    // 0x32689c: 0x8ea4000c  lw          $a0, 0xC($s5)
    ctx->pc = 0x32689cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x3268a0: 0x3c090057  lui         $t1, 0x57
    ctx->pc = 0x3268a0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)87 << 16));
    // 0x3268a4: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x3268a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3268a8: 0x3c0a03ff  lui         $t2, 0x3FF
    ctx->pc = 0x3268a8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)1023 << 16));
    // 0x3268ac: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x3268acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x3268b0: 0x25294ec8  addiu       $t1, $t1, 0x4EC8
    ctx->pc = 0x3268b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 20168));
    // 0x3268b4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3268b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3268b8: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x3268b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3268bc: 0xc0cb1ac  jal         func_32C6B0
    ctx->pc = 0x3268BCu;
    SET_GPR_U32(ctx, 31, 0x3268C4u);
    ctx->pc = 0x3268C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3268BCu;
    // 0x3268c0: 0x354affff  ori         $t2, $t2, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C6B0u, 0x3268BCu, 0x3268C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3268C4u;
label_3268c4:
    // 0x3268c4: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x3268c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x3268c8: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x3268c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x3268cc: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x3268ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3268d0: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x3268d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x3268d4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3268d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3268d8: 0xae440004  sw          $a0, 0x4($s2)
    ctx->pc = 0x3268d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 4));
    // 0x3268dc: 0xfc740000  sd          $s4, 0x0($v1)
    ctx->pc = 0x3268dcu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 20));
    // 0x3268e0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3268e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3268e4:
    // 0x3268e4: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3268e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3268e8: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3268e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3268ec: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3268ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3268f0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3268f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3268f4: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x3268f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3268f8: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x3268f8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3268fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3268fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x326900: 0x3e00008  jr          $ra
    ctx->pc = 0x326900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x326904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326900u;
        // 0x326904: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326900u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x326908u;
}
