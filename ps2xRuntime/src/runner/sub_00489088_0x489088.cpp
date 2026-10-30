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

// Function: sub_00489088
// Address: 0x489088 - 0x489128
void sub_00489088_0x489088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00489088_0x489088");
#endif

    switch (ctx->pc) {
        case 0x489088u: goto label_489088;
        case 0x48908cu: goto label_48908c;
        case 0x489090u: goto label_489090;
        case 0x489094u: goto label_489094;
        case 0x489098u: goto label_489098;
        case 0x48909cu: goto label_48909c;
        case 0x4890a0u: goto label_4890a0;
        case 0x4890a4u: goto label_4890a4;
        case 0x4890a8u: goto label_4890a8;
        case 0x4890acu: goto label_4890ac;
        case 0x4890b0u: goto label_4890b0;
        case 0x4890b4u: goto label_4890b4;
        case 0x4890b8u: goto label_4890b8;
        case 0x4890bcu: goto label_4890bc;
        case 0x4890c0u: goto label_4890c0;
        case 0x4890c4u: goto label_4890c4;
        case 0x4890c8u: goto label_4890c8;
        case 0x4890ccu: goto label_4890cc;
        case 0x4890d0u: goto label_4890d0;
        case 0x4890d4u: goto label_4890d4;
        case 0x4890d8u: goto label_4890d8;
        case 0x4890dcu: goto label_4890dc;
        case 0x4890e0u: goto label_4890e0;
        case 0x4890e4u: goto label_4890e4;
        case 0x4890e8u: goto label_4890e8;
        case 0x4890ecu: goto label_4890ec;
        case 0x4890f0u: goto label_4890f0;
        case 0x4890f4u: goto label_4890f4;
        case 0x4890f8u: goto label_4890f8;
        case 0x4890fcu: goto label_4890fc;
        case 0x489100u: goto label_489100;
        case 0x489104u: goto label_489104;
        case 0x489108u: goto label_489108;
        case 0x48910cu: goto label_48910c;
        case 0x489110u: goto label_489110;
        case 0x489114u: goto label_489114;
        case 0x489118u: goto label_489118;
        case 0x48911cu: goto label_48911c;
        case 0x489120u: goto label_489120;
        case 0x489124u: goto label_489124;
        default: break;
    }

    ctx->pc = 0x489088u;

label_489088:
    // 0x489088: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x489088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_48908c:
    // 0x48908c: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x48908cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_489090:
    // 0x489090: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x489090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_489094:
    // 0x489094: 0x2403006d  addiu       $v1, $zero, 0x6D
    ctx->pc = 0x489094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
label_489098:
    // 0x489098: 0x24c2ffff  addiu       $v0, $a2, -0x1
    ctx->pc = 0x489098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_48909c:
    // 0x48909c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x48909cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4890a0:
    // 0x4890a0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4890a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4890a4:
    // 0x4890a4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4890a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4890a8:
    // 0x4890a8: 0x2c42000f  sltiu       $v0, $v0, 0xF
    ctx->pc = 0x4890a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
label_4890ac:
    // 0x4890ac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4890b0:
    if (ctx->pc == 0x4890B0u) {
        ctx->pc = 0x4890B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4890ACu;
        // 0x4890b0: 0xa3a30000  sb          $v1, 0x0($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4890B4u;
        goto label_4890b4;
    }
    ctx->pc = 0x4890ACu;
    {
        const bool branch_taken_0x4890ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4890B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4890ACu;
        // 0x4890b0: 0xa3a30000  sb          $v1, 0x0($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4890ac) {
            ctx->pc = 0x4890C8u;
            goto label_4890c8;
        }
    }
    ctx->pc = 0x4890B4u;
label_4890b4:
    // 0x4890b4: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x4890b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_4890b8:
    // 0x4890b8: 0x2442f048  addiu       $v0, $v0, -0xFB8
    ctx->pc = 0x4890b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963272));
label_4890bc:
    // 0x4890bc: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x4890bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_4890c0:
    // 0x4890c0: 0x10000002  b           . + 4 + (0x2 << 2)
label_4890c4:
    if (ctx->pc == 0x4890C4u) {
        ctx->pc = 0x4890C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4890C0u;
        // 0x4890c4: 0x80420000  lb          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4890C8u;
        goto label_4890c8;
    }
    ctx->pc = 0x4890C0u;
    {
        const bool branch_taken_0x4890c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4890C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4890C0u;
        // 0x4890c4: 0x80420000  lb          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4890c0) {
            ctx->pc = 0x4890CCu;
            goto label_4890cc;
        }
    }
    ctx->pc = 0x4890C8u;
label_4890c8:
    // 0x4890c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4890c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4890cc:
    // 0x4890cc: 0xa3a00002  sb          $zero, 0x2($sp)
    ctx->pc = 0x4890ccu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 0));
label_4890d0:
    // 0x4890d0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_4890d4:
    if (ctx->pc == 0x4890D4u) {
        ctx->pc = 0x4890D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4890D0u;
        // 0x4890d4: 0xa3a20001  sb          $v0, 0x1($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4890D8u;
        goto label_4890d8;
    }
    ctx->pc = 0x4890D0u;
    {
        const bool branch_taken_0x4890d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4890D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4890D0u;
        // 0x4890d4: 0xa3a20001  sb          $v0, 0x1($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4890d0) {
            ctx->pc = 0x48910Cu;
            goto label_48910c;
        }
    }
    ctx->pc = 0x4890D8u;
label_4890d8:
    // 0x4890d8: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x4890d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_4890dc:
    // 0x4890dc: 0x2451ad18  addiu       $s1, $v0, -0x52E8
    ctx->pc = 0x4890dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
label_4890e0:
    // 0x4890e0: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x4890e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_4890e4:
    // 0x4890e4: 0x40f809  jalr        $v0
label_4890e8:
    if (ctx->pc == 0x4890E8u) {
        ctx->pc = 0x4890E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4890E4u;
        // 0x4890e8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4890ECu;
        goto label_4890ec;
    }
    ctx->pc = 0x4890E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4890ECu);
        ctx->pc = 0x4890E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4890E4u;
        // 0x4890e8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4890E4u, 0x4890ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4890ECu;
label_4890ec:
    // 0x4890ec: 0x52000008  beql        $s0, $zero, . + 4 + (0x8 << 2)
label_4890f0:
    if (ctx->pc == 0x4890F0u) {
        ctx->pc = 0x4890F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4890ECu;
        // 0x4890f0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4890F4u;
        goto label_4890f4;
    }
    ctx->pc = 0x4890ECu;
    {
        const bool branch_taken_0x4890ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4890ec) {
            ctx->pc = 0x4890F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4890ECu;
            // 0x4890f0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x489110u;
            goto label_489110;
        }
    }
    ctx->pc = 0x4890F4u;
label_4890f4:
    // 0x4890f4: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x4890f4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_4890f8:
    // 0x4890f8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_4890fc:
    if (ctx->pc == 0x4890FCu) {
        ctx->pc = 0x4890FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4890F8u;
        // 0x4890fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x489100u;
        goto label_489100;
    }
    ctx->pc = 0x4890F8u;
    {
        const bool branch_taken_0x4890f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4890FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4890F8u;
        // 0x4890fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4890f8) {
            ctx->pc = 0x48910Cu;
            goto label_48910c;
        }
    }
    ctx->pc = 0x489100u;
label_489100:
    // 0x489100: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x489100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_489104:
    // 0x489104: 0x40f809  jalr        $v0
label_489108:
    if (ctx->pc == 0x489108u) {
        ctx->pc = 0x489108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x489104u;
        // 0x489108: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48910Cu;
        goto label_48910c;
    }
    ctx->pc = 0x489104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x48910Cu);
        ctx->pc = 0x489108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x489104u;
        // 0x489108: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x489104u, 0x48910Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x48910Cu;
label_48910c:
    // 0x48910c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x48910cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_489110:
    // 0x489110: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x489110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_489114:
    // 0x489114: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x489114u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_489118:
    // 0x489118: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x489118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_48911c:
    // 0x48911c: 0x3e00008  jr          $ra
label_489120:
    if (ctx->pc == 0x489120u) {
        ctx->pc = 0x489120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48911Cu;
        // 0x489120: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x489124u;
        goto label_489124;
    }
    ctx->pc = 0x48911Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x489120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48911Cu;
        // 0x489120: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48911Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x489124u;
label_489124:
    // 0x489124: 0x0  nop
    ctx->pc = 0x489124u;
    // NOP
    ctx->pc = 0x489128u;
}
