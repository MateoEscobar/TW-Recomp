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

// Function: sub_002AD5A8
// Address: 0x2ad5a8 - 0x2ad630
void sub_002AD5A8_0x2ad5a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AD5A8_0x2ad5a8");
#endif

    switch (ctx->pc) {
        case 0x2ad5a8u: goto label_2ad5a8;
        case 0x2ad5acu: goto label_2ad5ac;
        case 0x2ad5b0u: goto label_2ad5b0;
        case 0x2ad5b4u: goto label_2ad5b4;
        case 0x2ad5b8u: goto label_2ad5b8;
        case 0x2ad5bcu: goto label_2ad5bc;
        case 0x2ad5c0u: goto label_2ad5c0;
        case 0x2ad5c4u: goto label_2ad5c4;
        case 0x2ad5c8u: goto label_2ad5c8;
        case 0x2ad5ccu: goto label_2ad5cc;
        case 0x2ad5d0u: goto label_2ad5d0;
        case 0x2ad5d4u: goto label_2ad5d4;
        case 0x2ad5d8u: goto label_2ad5d8;
        case 0x2ad5dcu: goto label_2ad5dc;
        case 0x2ad5e0u: goto label_2ad5e0;
        case 0x2ad5e4u: goto label_2ad5e4;
        case 0x2ad5e8u: goto label_2ad5e8;
        case 0x2ad5ecu: goto label_2ad5ec;
        case 0x2ad5f0u: goto label_2ad5f0;
        case 0x2ad5f4u: goto label_2ad5f4;
        case 0x2ad5f8u: goto label_2ad5f8;
        case 0x2ad5fcu: goto label_2ad5fc;
        case 0x2ad600u: goto label_2ad600;
        case 0x2ad604u: goto label_2ad604;
        case 0x2ad608u: goto label_2ad608;
        case 0x2ad60cu: goto label_2ad60c;
        case 0x2ad610u: goto label_2ad610;
        case 0x2ad614u: goto label_2ad614;
        case 0x2ad618u: goto label_2ad618;
        case 0x2ad61cu: goto label_2ad61c;
        case 0x2ad620u: goto label_2ad620;
        case 0x2ad624u: goto label_2ad624;
        case 0x2ad628u: goto label_2ad628;
        case 0x2ad62cu: goto label_2ad62c;
        default: break;
    }

    ctx->pc = 0x2ad5a8u;

label_2ad5a8:
    // 0x2ad5a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ad5a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2ad5ac:
    // 0x2ad5ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ad5acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ad5b0:
    // 0x2ad5b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ad5b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2ad5b4:
    // 0x2ad5b4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2ad5b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_2ad5b8:
    // 0x2ad5b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ad5b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2ad5bc:
    // 0x2ad5bc: 0x9083002d  lbu         $v1, 0x2D($a0)
    ctx->pc = 0x2ad5bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 45)));
label_2ad5c0:
    // 0x2ad5c0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_2ad5c4:
    if (ctx->pc == 0x2AD5C4u) {
        ctx->pc = 0x2AD5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD5C0u;
        // 0x2ad5c4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD5C8u;
        goto label_2ad5c8;
    }
    ctx->pc = 0x2AD5C0u;
    {
        const bool branch_taken_0x2ad5c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2AD5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD5C0u;
        // 0x2ad5c4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad5c0) {
            ctx->pc = 0x2AD5D0u;
            goto label_2ad5d0;
        }
    }
    ctx->pc = 0x2AD5C8u;
label_2ad5c8:
    // 0x2ad5c8: 0x10000013  b           . + 4 + (0x13 << 2)
label_2ad5cc:
    if (ctx->pc == 0x2AD5CCu) {
        ctx->pc = 0x2AD5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD5C8u;
        // 0x2ad5cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD5D0u;
        goto label_2ad5d0;
    }
    ctx->pc = 0x2AD5C8u;
    {
        const bool branch_taken_0x2ad5c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD5C8u;
        // 0x2ad5cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad5c8) {
            ctx->pc = 0x2AD618u;
            goto label_2ad618;
        }
    }
    ctx->pc = 0x2AD5D0u;
label_2ad5d0:
    // 0x2ad5d0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2ad5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2ad5d4:
    // 0x2ad5d4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2ad5d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2ad5d8:
    // 0x2ad5d8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2ad5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2ad5dc:
    // 0x2ad5dc: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2ad5dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2ad5e0:
    // 0x2ad5e0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2ad5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2ad5e4:
    // 0x2ad5e4: 0x40f809  jalr        $v0
label_2ad5e8:
    if (ctx->pc == 0x2AD5E8u) {
        ctx->pc = 0x2AD5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD5E4u;
        // 0x2ad5e8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD5ECu;
        goto label_2ad5ec;
    }
    ctx->pc = 0x2AD5E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2AD5ECu);
        ctx->pc = 0x2AD5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD5E4u;
        // 0x2ad5e8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AD5E4u, 0x2AD5ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2AD5ECu;
label_2ad5ec:
    // 0x2ad5ec: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2ad5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ad5f0:
    // 0x2ad5f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ad5f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ad5f4:
    // 0x2ad5f4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2ad5f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2ad5f8:
    // 0x2ad5f8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2ad5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2ad5fc:
    // 0x2ad5fc: 0x40f809  jalr        $v0
label_2ad600:
    if (ctx->pc == 0x2AD600u) {
        ctx->pc = 0x2AD600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD5FCu;
        // 0x2ad600: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD604u;
        goto label_2ad604;
    }
    ctx->pc = 0x2AD5FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2AD604u);
        ctx->pc = 0x2AD600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD5FCu;
        // 0x2ad600: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AD5FCu, 0x2AD604u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2AD604u;
label_2ad604:
    // 0x2ad604: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ad604u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ad608:
    // 0x2ad608: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ad608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ad60c:
    // 0x2ad60c: 0xc0aa924  jal         func_2AA490
label_2ad610:
    if (ctx->pc == 0x2AD610u) {
        ctx->pc = 0x2AD610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD60Cu;
        // 0x2ad610: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD614u;
        goto label_2ad614;
    }
    ctx->pc = 0x2AD60Cu;
    SET_GPR_U32(ctx, 31, 0x2AD614u);
    ctx->pc = 0x2AD610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD60Cu;
    // 0x2ad610: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA490u, 0x2AD60Cu, 0x2AD614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD614u;
label_2ad614:
    // 0x2ad614: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ad614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ad618:
    // 0x2ad618: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2ad618u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2ad61c:
    // 0x2ad61c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ad61cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2ad620:
    // 0x2ad620: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ad620u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ad624:
    // 0x2ad624: 0x3e00008  jr          $ra
label_2ad628:
    if (ctx->pc == 0x2AD628u) {
        ctx->pc = 0x2AD628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD624u;
        // 0x2ad628: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD62Cu;
        goto label_2ad62c;
    }
    ctx->pc = 0x2AD624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AD628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD624u;
        // 0x2ad628: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AD624u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AD62Cu;
label_2ad62c:
    // 0x2ad62c: 0x0  nop
    ctx->pc = 0x2ad62cu;
    // NOP
    ctx->pc = 0x2ad630u;
}
