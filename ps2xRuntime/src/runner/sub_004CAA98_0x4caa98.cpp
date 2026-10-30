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

// Function: sub_004CAA98
// Address: 0x4caa98 - 0x4cabe0
void sub_004CAA98_0x4caa98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CAA98_0x4caa98");
#endif

    switch (ctx->pc) {
        case 0x4caae8u: goto label_4caae8;
        default: break;
    }

    ctx->pc = 0x4caa98u;

    // 0x4caa98: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4caa98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4caa9c: 0x80782d  daddu       $t7, $a0, $zero
    ctx->pc = 0x4caa9cu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4caaa0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4caaa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4caaa4: 0x24aeffff  addiu       $t6, $a1, -0x1
    ctx->pc = 0x4caaa4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x4caaa8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4caaa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4caaac: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4caaacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4caab0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4caab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4caab4: 0x10a00043  beqz        $a1, . + 4 + (0x43 << 2)
    ctx->pc = 0x4CAAB4u;
    {
        const bool branch_taken_0x4caab4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CAAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CAAB4u;
        // 0x4caab8: 0xffb40020  sd          $s4, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4caab4) {
            ctx->pc = 0x4CABC4u;
            goto label_4cabc4;
        }
    }
    ctx->pc = 0x4CAABCu;
    // 0x4caabc: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x4caabcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x4caac0: 0x3c190053  lui         $t9, 0x53
    ctx->pc = 0x4caac0u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)83 << 16));
    // 0x4caac4: 0x245828a0  addiu       $t8, $v0, 0x28A0
    ctx->pc = 0x4caac4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
    // 0x4caac8: 0x272b2860  addiu       $t3, $t9, 0x2860
    ctx->pc = 0x4caac8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 25), 10336));
    // 0x4caacc: 0x27140800  addiu       $s4, $t8, 0x800
    ctx->pc = 0x4caaccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 24), 2048));
    // 0x4caad0: 0x27130400  addiu       $s3, $t8, 0x400
    ctx->pc = 0x4caad0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 24), 1024));
    // 0x4caad4: 0x27120c00  addiu       $s2, $t8, 0xC00
    ctx->pc = 0x4caad4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 24), 3072));
    // 0x4caad8: 0x3c110053  lui         $s1, 0x53
    ctx->pc = 0x4caad8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)83 << 16));
    // 0x4caadc: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x4caadcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4caae0: 0x8d6c0014  lw          $t4, 0x14($t3)
    ctx->pc = 0x4caae0u;
    SET_GPR_S32(ctx, 12, (int32_t)FAST_READ32(0x532874u));
    // 0x4caae4: 0x0  nop
    ctx->pc = 0x4caae4u;
    // NOP
label_4caae8:
    // 0x4caae8: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x4caae8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x4caaec: 0x8d680008  lw          $t0, 0x8($t3)
    ctx->pc = 0x4caaecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x4caaf0: 0x31ea0001  andi        $t2, $t7, 0x1
    ctx->pc = 0x4caaf0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)1);
    // 0x4caaf4: 0x8d6d0010  lw          $t5, 0x10($t3)
    ctx->pc = 0x4caaf4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 16)));
    // 0x4caaf8: 0x91820000  lbu         $v0, 0x0($t4)
    ctx->pc = 0x4caaf8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4caafc: 0x91040000  lbu         $a0, 0x0($t0)
    ctx->pc = 0x4caafcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4cab00: 0x91a50000  lbu         $a1, 0x0($t5)
    ctx->pc = 0x4cab00u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4cab04: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4cab04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4cab08: 0x8e262850  lw          $a2, 0x2850($s1)
    ctx->pc = 0x4cab08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10320)));
    // 0x4cab0c: 0x524821  addu        $t1, $v0, $s2
    ctx->pc = 0x4cab0cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x4cab10: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x4cab10u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x4cab14: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x4cab14u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x4cab18: 0xb43821  addu        $a3, $a1, $s4
    ctx->pc = 0x4cab18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
    // 0x4cab1c: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x4cab1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x4cab20: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x4cab20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x4cab24: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4cab24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4cab28: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x4cab28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4cab2c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x4cab2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x4cab30: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x4cab30u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4cab34: 0xb82821  addu        $a1, $a1, $t8
    ctx->pc = 0x4cab34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 24)));
    // 0x4cab38: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x4cab38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4cab3c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x4cab3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x4cab40: 0xad680008  sw          $t0, 0x8($t3)
    ctx->pc = 0x4cab40u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 8));
    // 0x4cab44: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4cab44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4cab48: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4cab48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4cab4c: 0x8d680018  lw          $t0, 0x18($t3)
    ctx->pc = 0x4cab4cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 24)));
    // 0x4cab50: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x4cab50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4cab54: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x4cab54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x4cab58: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x4cab58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4cab5c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x4cab5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x4cab60: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x4cab60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4cab64: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x4cab64u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x4cab68: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x4cab68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4cab6c: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x4cab6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x4cab70: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x4cab70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x4cab74: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x4cab74u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x4cab78: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x4cab78u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4cab7c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4cab7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4cab80: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x4cab80u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x4cab84: 0x8f242860  lw          $a0, 0x2860($t9)
    ctx->pc = 0x4cab84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 10336)));
    // 0x4cab88: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4cab88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4cab8c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x4cab8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x4cab90: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4cab90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4cab94: 0x24830004  addiu       $v1, $a0, 0x4
    ctx->pc = 0x4cab94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x4cab98: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4cab98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4cab9c: 0xad680018  sw          $t0, 0x18($t3)
    ctx->pc = 0x4cab9cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 24), GPR_U32(ctx, 8));
    // 0x4caba0: 0x15400005  bnez        $t2, . + 4 + (0x5 << 2)
    ctx->pc = 0x4CABA0u;
    {
        const bool branch_taken_0x4caba0 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x4CABA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CABA0u;
        // 0x4caba4: 0xaf232860  sw          $v1, 0x2860($t9) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 25), 10336), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4caba0) {
            ctx->pc = 0x4CABB8u;
            goto label_4cabb8;
        }
    }
    ctx->pc = 0x4CABA8u;
    // 0x4caba8: 0x25a20001  addiu       $v0, $t5, 0x1
    ctx->pc = 0x4caba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x4cabac: 0x25830001  addiu       $v1, $t4, 0x1
    ctx->pc = 0x4cabacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x4cabb0: 0xad620010  sw          $v0, 0x10($t3)
    ctx->pc = 0x4cabb0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 16), GPR_U32(ctx, 2));
    // 0x4cabb4: 0xad630014  sw          $v1, 0x14($t3)
    ctx->pc = 0x4cabb4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 20), GPR_U32(ctx, 3));
label_4cabb8:
    // 0x4cabb8: 0x25ceffff  addiu       $t6, $t6, -0x1
    ctx->pc = 0x4cabb8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
    // 0x4cabbc: 0x55d0ffca  bnel        $t6, $s0, . + 4 + (-0x36 << 2)
    ctx->pc = 0x4CABBCu;
    {
        const bool branch_taken_0x4cabbc = (GPR_U64(ctx, 14) != GPR_U64(ctx, 16));
        if (branch_taken_0x4cabbc) {
            ctx->pc = 0x4CABC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4CABBCu;
            // 0x4cabc0: 0x8d6c0014  lw          $t4, 0x14($t3) (Delay Slot)
            SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4CAAE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4caae8;
        }
    }
    ctx->pc = 0x4CABC4u;
label_4cabc4:
    // 0x4cabc4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4cabc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4cabc8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4cabc8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4cabcc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4cabccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4cabd0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4cabd0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4cabd4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4cabd4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4cabd8: 0x3e00008  jr          $ra
    ctx->pc = 0x4CABD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CABDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CABD8u;
        // 0x4cabdc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4CABD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4CABE0u;
}
