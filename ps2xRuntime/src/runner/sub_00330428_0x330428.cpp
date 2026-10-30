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

// Function: sub_00330428
// Address: 0x330428 - 0x330508
void sub_00330428_0x330428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00330428_0x330428");
#endif

    switch (ctx->pc) {
        case 0x33048cu: goto label_33048c;
        case 0x3304b0u: goto label_3304b0;
        case 0x3304c4u: goto label_3304c4;
        default: break;
    }

    ctx->pc = 0x330428u;

    // 0x330428: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x330428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x33042c: 0x24020025  addiu       $v0, $zero, 0x25
    ctx->pc = 0x33042cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x330430: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x330430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x330434: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x330434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x330438: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x330438u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33043c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x33043cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x330440: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x330440u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330444: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x330444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x330448: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x330448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x33044c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33044cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x330450: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x330450u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x330454: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x330454u;
    {
        const bool branch_taken_0x330454 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x330458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330454u;
        // 0x330458: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330454) {
            ctx->pc = 0x330470u;
            goto label_330470;
        }
    }
    ctx->pc = 0x33045Cu;
    // 0x33045c: 0x2402005b  addiu       $v0, $zero, 0x5B
    ctx->pc = 0x33045cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
    // 0x330460: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x330460u;
    {
        const bool branch_taken_0x330460 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x330464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330460u;
        // 0x330464: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330460) {
            ctx->pc = 0x330494u;
            goto label_330494;
        }
    }
    ctx->pc = 0x330468u;
    // 0x330468: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x330468u;
    {
        const bool branch_taken_0x330468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33046Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330468u;
        // 0x33046c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330468) {
            ctx->pc = 0x3304ECu;
            goto label_3304ec;
        }
    }
    ctx->pc = 0x330470u;
label_330470:
    // 0x330470: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x330470u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x330474: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x330474u;
    {
        const bool branch_taken_0x330474 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x330478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330474u;
        // 0x330478: 0x26020001  addiu       $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330474) {
            ctx->pc = 0x3304E8u;
            goto label_3304e8;
        }
    }
    ctx->pc = 0x33047Cu;
    // 0x33047c: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x33047cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x330480: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x330480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330484: 0xc0ca46e  jal         func_3291B8
    ctx->pc = 0x330484u;
    SET_GPR_U32(ctx, 31, 0x33048Cu);
    ctx->pc = 0x330488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330484u;
    // 0x330488: 0x24a55f58  addiu       $a1, $a1, 0x5F58 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3291B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3291B8u, 0x330484u, 0x33048Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33048Cu;
label_33048c:
    // 0x33048c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x33048Cu;
    {
        const bool branch_taken_0x33048c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x330490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33048Cu;
        // 0x330490: 0x26020001  addiu       $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33048c) {
            ctx->pc = 0x3304E8u;
            goto label_3304e8;
        }
    }
    ctx->pc = 0x330494u;
label_330494:
    // 0x330494: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x330494u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x330498: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x330498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x33049c: 0x3c140057  lui         $s4, 0x57
    ctx->pc = 0x33049cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)87 << 16));
    // 0x3304a0: 0x24130025  addiu       $s3, $zero, 0x25
    ctx->pc = 0x3304a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x3304a4: 0x3842005e  xori        $v0, $v0, 0x5E
    ctx->pc = 0x3304a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)94);
    // 0x3304a8: 0x2412005d  addiu       $s2, $zero, 0x5D
    ctx->pc = 0x3304a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
    // 0x3304ac: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x3304acu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
label_3304b0:
    // 0x3304b0: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x3304b0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3304b4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3304B4u;
    {
        const bool branch_taken_0x3304b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3304B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3304B4u;
        // 0x3304b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3304b4) {
            ctx->pc = 0x3304C8u;
            goto label_3304c8;
        }
    }
    ctx->pc = 0x3304BCu;
    // 0x3304bc: 0xc0ca46e  jal         func_3291B8
    ctx->pc = 0x3304BCu;
    SET_GPR_U32(ctx, 31, 0x3304C4u);
    ctx->pc = 0x3304C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3304BCu;
    // 0x3304c0: 0x26855f80  addiu       $a1, $s4, 0x5F80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 24448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3291B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3291B8u, 0x3304BCu, 0x3304C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3304C4u;
label_3304c4:
    // 0x3304c4: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x3304c4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_3304c8:
    // 0x3304c8: 0x14530004  bne         $v0, $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x3304C8u;
    {
        const bool branch_taken_0x3304c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x3304CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3304C8u;
        // 0x3304cc: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3304c8) {
            ctx->pc = 0x3304DCu;
            goto label_3304dc;
        }
    }
    ctx->pc = 0x3304D0u;
    // 0x3304d0: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x3304d0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3304d4: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x3304d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3304d8: 0x43800b  movn        $s0, $v0, $v1
    ctx->pc = 0x3304d8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
label_3304dc:
    // 0x3304dc: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x3304dcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3304e0: 0x1452fff3  bne         $v0, $s2, . + 4 + (-0xD << 2)
    ctx->pc = 0x3304E0u;
    {
        const bool branch_taken_0x3304e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x3304E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3304E0u;
        // 0x3304e4: 0x26020001  addiu       $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3304e0) {
            ctx->pc = 0x3304B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3304b0;
        }
    }
    ctx->pc = 0x3304E8u;
label_3304e8:
    // 0x3304e8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3304e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3304ec:
    // 0x3304ec: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3304ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3304f0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3304f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3304f4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x3304f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3304f8: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x3304f8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3304fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3304fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x330500: 0x3e00008  jr          $ra
    ctx->pc = 0x330500u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x330504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330500u;
        // 0x330504: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x330500u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x330508u;
}
