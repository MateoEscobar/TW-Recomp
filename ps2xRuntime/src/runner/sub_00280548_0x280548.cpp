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

// Function: sub_00280548
// Address: 0x280548 - 0x280630
void sub_00280548_0x280548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00280548_0x280548");
#endif

    switch (ctx->pc) {
        case 0x2805c0u: goto label_2805c0;
        case 0x280618u: goto label_280618;
        case 0x280620u: goto label_280620;
        default: break;
    }

    ctx->pc = 0x280548u;

    // 0x280548: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x280548u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28054c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x28054cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x280550: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x280550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x280554: 0x8c45bd30  lw          $a1, -0x42D0($v0)
    ctx->pc = 0x280554u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x280558: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x280558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x28055c: 0x3c030056  lui         $v1, 0x56
    ctx->pc = 0x28055cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)86 << 16));
    // 0x280560: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x280560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x280564: 0x2463e8b8  addiu       $v1, $v1, -0x1748
    ctx->pc = 0x280564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961336));
    // 0x280568: 0xacc500c0  sw          $a1, 0xC0($a2)
    ctx->pc = 0x280568u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 192), GPR_U32(ctx, 5));
    // 0x28056c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28056cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280570: 0x84c701be  lh          $a3, 0x1BE($a2)
    ctx->pc = 0x280570u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 446)));
    // 0x280574: 0x84620002  lh          $v0, 0x2($v1)
    ctx->pc = 0x280574u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x55E8BAu));
    // 0x280578: 0x14e2000d  bne         $a3, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x280578u;
    {
        const bool branch_taken_0x280578 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x28057Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280578u;
        // 0x28057c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280578) {
            ctx->pc = 0x2805B0u;
            goto label_2805b0;
        }
    }
    ctx->pc = 0x280580u;
    // 0x280580: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x280580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x280584: 0x10e20005  beq         $a3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x280584u;
    {
        const bool branch_taken_0x280584 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x280588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280584u;
        // 0x280588: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280584) {
            ctx->pc = 0x28059Cu;
            goto label_28059c;
        }
    }
    ctx->pc = 0x28058Cu;
    // 0x28058c: 0x84630004  lh          $v1, 0x4($v1)
    ctx->pc = 0x28058cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x280590: 0x84c201c0  lh          $v0, 0x1C0($a2)
    ctx->pc = 0x280590u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 448)));
    // 0x280594: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x280594u;
    {
        const bool branch_taken_0x280594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x280598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280594u;
        // 0x280598: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280594) {
            ctx->pc = 0x2805ACu;
            goto label_2805ac;
        }
    }
    ctx->pc = 0x28059Cu;
label_28059c:
    // 0x28059c: 0x8cc301c0  lw          $v1, 0x1C0($a2)
    ctx->pc = 0x28059cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 448)));
    // 0x2805a0: 0x24424e78  addiu       $v0, $v0, 0x4E78
    ctx->pc = 0x2805a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20088));
    // 0x2805a4: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2805A4u;
    {
        const bool branch_taken_0x2805a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2805a4) {
            ctx->pc = 0x2805B0u;
            goto label_2805b0;
        }
    }
    ctx->pc = 0x2805ACu;
label_2805ac:
    // 0x2805ac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2805acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2805b0:
    // 0x2805b0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2805B0u;
    {
        const bool branch_taken_0x2805b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2805B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2805B0u;
        // 0x2805b4: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2805b0) {
            ctx->pc = 0x2805C4u;
            goto label_2805c4;
        }
    }
    ctx->pc = 0x2805B8u;
    // 0x2805b8: 0xc088420  jal         func_221080
    ctx->pc = 0x2805B8u;
    SET_GPR_U32(ctx, 31, 0x2805C0u);
    ctx->pc = 0x2805BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2805B8u;
    // 0x2805bc: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221080u, 0x2805B8u, 0x2805C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2805C0u;
label_2805c0:
    // 0x2805c0: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x2805c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
label_2805c4:
    // 0x2805c4: 0x860301be  lh          $v1, 0x1BE($s0)
    ctx->pc = 0x2805c4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 446)));
    // 0x2805c8: 0x2444e8a8  addiu       $a0, $v0, -0x1758
    ctx->pc = 0x2805c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961320));
    // 0x2805cc: 0x84820002  lh          $v0, 0x2($a0)
    ctx->pc = 0x2805ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x2805d0: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2805D0u;
    {
        const bool branch_taken_0x2805d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2805D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2805D0u;
        // 0x2805d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2805d0) {
            ctx->pc = 0x280608u;
            goto label_280608;
        }
    }
    ctx->pc = 0x2805D8u;
    // 0x2805d8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2805d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2805dc: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2805DCu;
    {
        const bool branch_taken_0x2805dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2805E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2805DCu;
        // 0x2805e0: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2805dc) {
            ctx->pc = 0x2805F4u;
            goto label_2805f4;
        }
    }
    ctx->pc = 0x2805E4u;
    // 0x2805e4: 0x84830004  lh          $v1, 0x4($a0)
    ctx->pc = 0x2805e4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2805e8: 0x860201c0  lh          $v0, 0x1C0($s0)
    ctx->pc = 0x2805e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 448)));
    // 0x2805ec: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2805ECu;
    {
        const bool branch_taken_0x2805ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2805F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2805ECu;
        // 0x2805f0: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2805ec) {
            ctx->pc = 0x280604u;
            goto label_280604;
        }
    }
    ctx->pc = 0x2805F4u;
label_2805f4:
    // 0x2805f4: 0x8e0301c0  lw          $v1, 0x1C0($s0)
    ctx->pc = 0x2805f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
    // 0x2805f8: 0x24425310  addiu       $v0, $v0, 0x5310
    ctx->pc = 0x2805f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21264));
    // 0x2805fc: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2805FCu;
    {
        const bool branch_taken_0x2805fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2805fc) {
            ctx->pc = 0x280608u;
            goto label_280608;
        }
    }
    ctx->pc = 0x280604u;
label_280604:
    // 0x280604: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x280604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_280608:
    // 0x280608: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x280608u;
    {
        const bool branch_taken_0x280608 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x280608) {
            ctx->pc = 0x280618u;
            goto label_280618;
        }
    }
    ctx->pc = 0x280610u;
    // 0x280610: 0xc088420  jal         func_221080
    ctx->pc = 0x280610u;
    SET_GPR_U32(ctx, 31, 0x280618u);
    ctx->pc = 0x280614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280610u;
    // 0x280614: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221080u, 0x280610u, 0x280618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280618u;
label_280618:
    // 0x280618: 0xc086b6a  jal         func_21ADA8
    ctx->pc = 0x280618u;
    SET_GPR_U32(ctx, 31, 0x280620u);
    ctx->pc = 0x28061Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280618u;
    // 0x28061c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21ADA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21ADA8u, 0x280618u, 0x280620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280620u;
label_280620:
    // 0x280620: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x280620u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x280624: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x280624u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x280628: 0x3e00008  jr          $ra
    ctx->pc = 0x280628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28062Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280628u;
        // 0x28062c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x280628u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x280630u;
}
