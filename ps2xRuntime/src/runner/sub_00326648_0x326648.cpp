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

// Function: sub_00326648
// Address: 0x326648 - 0x3266f8
void sub_00326648_0x326648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00326648_0x326648");
#endif

    switch (ctx->pc) {
        case 0x3266c4u: goto label_3266c4;
        default: break;
    }

    ctx->pc = 0x326648u;

    // 0x326648: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x326648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x32664c: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x32664cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326650: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x326650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x326654: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x326654u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326658: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x326658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x32665c: 0x72880  sll         $a1, $a3, 2
    ctx->pc = 0x32665cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x326660: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x326660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x326664: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x326664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x326668: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x326668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32666c: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x32666cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x326670: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x326670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x326674: 0x14c30005  bne         $a2, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x326674u;
    {
        const bool branch_taken_0x326674 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x326678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326674u;
        // 0x326678: 0x458821  addu        $s1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326674) {
            ctx->pc = 0x32668Cu;
            goto label_32668c;
        }
    }
    ctx->pc = 0x32667Cu;
    // 0x32667c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x32667cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x326680: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x326680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x326684: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x326684u;
    {
        const bool branch_taken_0x326684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326684u;
        // 0x326688: 0x3442ff80  ori         $v0, $v0, 0xFF80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65408);
        ctx->in_delay_slot = false;
        if (branch_taken_0x326684) {
            ctx->pc = 0x3266D0u;
            goto label_3266d0;
        }
    }
    ctx->pc = 0x32668Cu;
label_32668c:
    // 0x32668c: 0x24c2ffff  addiu       $v0, $a2, -0x1
    ctx->pc = 0x32668cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x326690: 0x3c1001ff  lui         $s0, 0x1FF
    ctx->pc = 0x326690u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)511 << 16));
    // 0x326694: 0x479023  subu        $s2, $v0, $a3
    ctx->pc = 0x326694u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x326698: 0x3610ffff  ori         $s0, $s0, 0xFFFF
    ctx->pc = 0x326698u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x32669c: 0x6410002  bgez        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x32669Cu;
    {
        const bool branch_taken_0x32669c = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x3266A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32669Cu;
        // 0x3266a0: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32669c) {
            ctx->pc = 0x3266A8u;
            goto label_3266a8;
        }
    }
    ctx->pc = 0x3266A4u;
    // 0x3266a4: 0x21023  negu        $v0, $v0
    ctx->pc = 0x3266a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_3266a8:
    // 0x3266a8: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x3266a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3266ac: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3266ACu;
    {
        const bool branch_taken_0x3266ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3266ac) {
            ctx->pc = 0x3266B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3266ACu;
            // 0x3266b0: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3266C8u;
            goto label_3266c8;
        }
    }
    ctx->pc = 0x3266B4u;
    // 0x3266b4: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x3266b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x3266b8: 0x8d040008  lw          $a0, 0x8($t0)
    ctx->pc = 0x3266b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x3266bc: 0xc0c9968  jal         func_3265A0
    ctx->pc = 0x3266BCu;
    SET_GPR_U32(ctx, 31, 0x3266C4u);
    ctx->pc = 0x3266C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3266BCu;
    // 0x3266c0: 0x24a54e80  addiu       $a1, $a1, 0x4E80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3265A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3265A0u, 0x3266BCu, 0x3266C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3266C4u;
label_3266c4:
    // 0x3266c4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3266c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3266c8:
    // 0x3266c8: 0x2501021  addu        $v0, $s2, $s0
    ctx->pc = 0x3266c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x3266cc: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x3266ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_3266d0:
    // 0x3266d0: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x3266d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x3266d4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3266d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3266d8: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3266d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x3266dc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3266dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3266e0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3266e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3266e4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3266e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3266e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3266e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3266ec: 0x3e00008  jr          $ra
    ctx->pc = 0x3266ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3266F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3266ECu;
        // 0x3266f0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3266ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3266F4u;
    // 0x3266f4: 0x0  nop
    ctx->pc = 0x3266f4u;
    // NOP
    ctx->pc = 0x3266f8u;
}
