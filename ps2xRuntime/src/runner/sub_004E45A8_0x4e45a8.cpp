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

// Function: sub_004E45A8
// Address: 0x4e45a8 - 0x4e4640
void sub_004E45A8_0x4e45a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E45A8_0x4e45a8");
#endif

    switch (ctx->pc) {
        case 0x4e45a8u: goto label_4e45a8;
        case 0x4e45acu: goto label_4e45ac;
        case 0x4e45b0u: goto label_4e45b0;
        case 0x4e45b4u: goto label_4e45b4;
        case 0x4e45b8u: goto label_4e45b8;
        case 0x4e45bcu: goto label_4e45bc;
        case 0x4e45c0u: goto label_4e45c0;
        case 0x4e45c4u: goto label_4e45c4;
        case 0x4e45c8u: goto label_4e45c8;
        case 0x4e45ccu: goto label_4e45cc;
        case 0x4e45d0u: goto label_4e45d0;
        case 0x4e45d4u: goto label_4e45d4;
        case 0x4e45d8u: goto label_4e45d8;
        case 0x4e45dcu: goto label_4e45dc;
        case 0x4e45e0u: goto label_4e45e0;
        case 0x4e45e4u: goto label_4e45e4;
        case 0x4e45e8u: goto label_4e45e8;
        case 0x4e45ecu: goto label_4e45ec;
        case 0x4e45f0u: goto label_4e45f0;
        case 0x4e45f4u: goto label_4e45f4;
        case 0x4e45f8u: goto label_4e45f8;
        case 0x4e45fcu: goto label_4e45fc;
        case 0x4e4600u: goto label_4e4600;
        case 0x4e4604u: goto label_4e4604;
        case 0x4e4608u: goto label_4e4608;
        case 0x4e460cu: goto label_4e460c;
        case 0x4e4610u: goto label_4e4610;
        case 0x4e4614u: goto label_4e4614;
        case 0x4e4618u: goto label_4e4618;
        case 0x4e461cu: goto label_4e461c;
        case 0x4e4620u: goto label_4e4620;
        case 0x4e4624u: goto label_4e4624;
        case 0x4e4628u: goto label_4e4628;
        case 0x4e462cu: goto label_4e462c;
        case 0x4e4630u: goto label_4e4630;
        case 0x4e4634u: goto label_4e4634;
        case 0x4e4638u: goto label_4e4638;
        case 0x4e463cu: goto label_4e463c;
        default: break;
    }

    ctx->pc = 0x4e45a8u;

label_4e45a8:
    // 0x4e45a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4e45a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4e45ac:
    // 0x4e45ac: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4e45acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4e45b0:
    // 0x4e45b0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4e45b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4e45b4:
    // 0x4e45b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4e45b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e45b8:
    // 0x4e45b8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4e45b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_4e45bc:
    // 0x4e45bc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4e45bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4e45c0:
    // 0x4e45c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e45c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4e45c4:
    // 0x4e45c4: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
label_4e45c8:
    if (ctx->pc == 0x4E45C8u) {
        ctx->pc = 0x4E45C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E45C4u;
        // 0x4e45c8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E45CCu;
        goto label_4e45cc;
    }
    ctx->pc = 0x4E45C4u;
    {
        const bool branch_taken_0x4e45c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E45C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E45C4u;
        // 0x4e45c8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e45c4) {
            ctx->pc = 0x4E4624u;
            goto label_4e4624;
        }
    }
    ctx->pc = 0x4E45CCu;
label_4e45cc:
    // 0x4e45cc: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x4e45ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4e45d0:
    // 0x4e45d0: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_4e45d4:
    if (ctx->pc == 0x4E45D4u) {
        ctx->pc = 0x4E45D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E45D0u;
        // 0x4e45d4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E45D8u;
        goto label_4e45d8;
    }
    ctx->pc = 0x4E45D0u;
    {
        const bool branch_taken_0x4e45d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E45D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E45D0u;
        // 0x4e45d4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e45d0) {
            ctx->pc = 0x4E45FCu;
            goto label_4e45fc;
        }
    }
    ctx->pc = 0x4E45D8u;
label_4e45d8:
    // 0x4e45d8: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x4e45d8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
label_4e45dc:
    // 0x4e45dc: 0x8c48b9c0  lw          $t0, -0x4640($v0)
    ctx->pc = 0x4e45dcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_4e45e0:
    // 0x4e45e0: 0x24c640e0  addiu       $a2, $a2, 0x40E0
    ctx->pc = 0x4e45e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16608));
label_4e45e4:
    // 0x4e45e4: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x4e45e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_4e45e8:
    // 0x4e45e8: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4e45e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4e45ec:
    // 0x4e45ec: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4e45ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4e45f0:
    // 0x4e45f0: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4e45f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4e45f4:
    // 0x4e45f4: 0x60f809  jalr        $v1
label_4e45f8:
    if (ctx->pc == 0x4E45F8u) {
        ctx->pc = 0x4E45F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E45F4u;
        // 0x4e45f8: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E45FCu;
        goto label_4e45fc;
    }
    ctx->pc = 0x4E45F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4E45FCu);
        ctx->pc = 0x4E45F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E45F4u;
        // 0x4e45f8: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E45F4u, 0x4E45FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E45FCu;
label_4e45fc:
    // 0x4e45fc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4e45fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4e4600:
    // 0x4e4600: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4e4600u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e4604:
    // 0x4e4604: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x4e4604u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_4e4608:
    // 0x4e4608: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4e4608u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4e460c:
    // 0x4e460c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4e460cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4e4610:
    // 0x4e4610: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4e4610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4e4614:
    // 0x4e4614: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4e4614u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4e4618:
    // 0x4e4618: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4e4618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4e461c:
    // 0x4e461c: 0x60f809  jalr        $v1
label_4e4620:
    if (ctx->pc == 0x4E4620u) {
        ctx->pc = 0x4E4620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E461Cu;
        // 0x4e4620: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E4624u;
        goto label_4e4624;
    }
    ctx->pc = 0x4E461Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4E4624u);
        ctx->pc = 0x4E4620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E461Cu;
        // 0x4e4620: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E461Cu, 0x4E4624u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E4624u;
label_4e4624:
    // 0x4e4624: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4e4624u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4e4628:
    // 0x4e4628: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4e4628u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4e462c:
    // 0x4e462c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4e462cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e4630:
    // 0x4e4630: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e4630u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4e4634:
    // 0x4e4634: 0x3e00008  jr          $ra
label_4e4638:
    if (ctx->pc == 0x4E4638u) {
        ctx->pc = 0x4E4638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4634u;
        // 0x4e4638: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E463Cu;
        goto label_4e463c;
    }
    ctx->pc = 0x4E4634u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E4638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4634u;
        // 0x4e4638: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E4634u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E463Cu;
label_4e463c:
    // 0x4e463c: 0x0  nop
    ctx->pc = 0x4e463cu;
    // NOP
    ctx->pc = 0x4e4640u;
}
