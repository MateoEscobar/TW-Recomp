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

// Function: sub_00436710
// Address: 0x436710 - 0x4367e0
void sub_00436710_0x436710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00436710_0x436710");
#endif

    switch (ctx->pc) {
        case 0x436738u: goto label_436738;
        case 0x436750u: goto label_436750;
        case 0x4367acu: goto label_4367ac;
        case 0x4367d0u: goto label_4367d0;
        default: break;
    }

    ctx->pc = 0x436710u;

    // 0x436710: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x436710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x436714: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x436714u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x436718: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x436718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x43671c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x43671cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x436720: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x436720u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x436724: 0x81020000  lb          $v0, 0x0($t0)
    ctx->pc = 0x436724u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x436728: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x436728u;
    {
        const bool branch_taken_0x436728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43672Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436728u;
        // 0x43672c: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436728) {
            ctx->pc = 0x4367C4u;
            goto label_4367c4;
        }
    }
    ctx->pc = 0x436730u;
    // 0x436730: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x436730u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x436734: 0x0  nop
    ctx->pc = 0x436734u;
    // NOP
label_436738:
    // 0x436738: 0x24020025  addiu       $v0, $zero, 0x25
    ctx->pc = 0x436738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x43673c: 0x5462001e  bnel        $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x43673Cu;
    {
        const bool branch_taken_0x43673c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x43673c) {
            ctx->pc = 0x436740u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43673Cu;
            // 0x436740: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4367B8u;
            goto label_4367b8;
        }
    }
    ctx->pc = 0x436744u;
    // 0x436744: 0x80c20001  lb          $v0, 0x1($a2)
    ctx->pc = 0x436744u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x436748: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x436748u;
    {
        const bool branch_taken_0x436748 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43674Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436748u;
        // 0x43674c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436748) {
            ctx->pc = 0x4367B8u;
            goto label_4367b8;
        }
    }
    ctx->pc = 0x436750u;
label_436750:
    // 0x436750: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x436750u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x436754: 0x28420041  slti        $v0, $v0, 0x41
    ctx->pc = 0x436754u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)65) ? 1 : 0);
    // 0x436758: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x436758u;
    {
        const bool branch_taken_0x436758 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x436758) {
            ctx->pc = 0x43675Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x436758u;
            // 0x43675c: 0x90c20000  lbu         $v0, 0x0($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x436770u;
            goto label_436770;
        }
    }
    ctx->pc = 0x436760u;
    // 0x436760: 0x80c20001  lb          $v0, 0x1($a2)
    ctx->pc = 0x436760u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x436764: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x436764u;
    {
        const bool branch_taken_0x436764 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x436764) {
            ctx->pc = 0x436768u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x436764u;
            // 0x436768: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x436750u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_436750;
        }
    }
    ctx->pc = 0x43676Cu;
    // 0x43676c: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x43676cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_436770:
    // 0x436770: 0x2442ffbb  addiu       $v0, $v0, -0x45
    ctx->pc = 0x436770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967227));
    // 0x436774: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x436774u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x436778: 0x22603  sra         $a0, $v0, 24
    ctx->pc = 0x436778u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 24));
    // 0x43677c: 0x2c830023  sltiu       $v1, $a0, 0x23
    ctx->pc = 0x43677cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)35) ? 1 : 0);
    // 0x436780: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x436780u;
    {
        const bool branch_taken_0x436780 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x436784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436780u;
        // 0x436784: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436780) {
            ctx->pc = 0x4367B4u;
            goto label_4367b4;
        }
    }
    ctx->pc = 0x436788u;
    // 0x436788: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x436788u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x43678c: 0x2442cc20  addiu       $v0, $v0, -0x33E0
    ctx->pc = 0x43678cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954016));
    // 0x436790: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x436790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x436794: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x436794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x436798: 0x800008  jr          $a0
    ctx->pc = 0x436798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x4367A0u: goto label_4367a0;
            case 0x4367B4u: goto label_4367b4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x436798u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4367A0u;
label_4367a0:
    // 0x4367a0: 0x8ca40054  lw          $a0, 0x54($a1)
    ctx->pc = 0x4367a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
    // 0x4367a4: 0xc10d9f8  jal         func_4367E0
    ctx->pc = 0x4367A4u;
    SET_GPR_U32(ctx, 31, 0x4367ACu);
    ctx->pc = 0x4367A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4367A4u;
    // 0x4367a8: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4367E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4367E0u, 0x4367A4u, 0x4367ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4367ACu;
label_4367ac:
    // 0x4367ac: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x4367ACu;
    {
        const bool branch_taken_0x4367ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4367B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4367ACu;
        // 0x4367b0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4367ac) {
            ctx->pc = 0x4367D4u;
            goto label_4367d4;
        }
    }
    ctx->pc = 0x4367B4u;
label_4367b4:
    // 0x4367b4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x4367b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_4367b8:
    // 0x4367b8: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x4367b8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4367bc: 0x5440ffde  bnel        $v0, $zero, . + 4 + (-0x22 << 2)
    ctx->pc = 0x4367BCu;
    {
        const bool branch_taken_0x4367bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4367bc) {
            ctx->pc = 0x4367C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4367BCu;
            // 0x4367c0: 0x80c30000  lb          $v1, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x436738u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_436738;
        }
    }
    ctx->pc = 0x4367C4u;
label_4367c4:
    // 0x4367c4: 0x8ca40054  lw          $a0, 0x54($a1)
    ctx->pc = 0x4367c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
    // 0x4367c8: 0xc10deb8  jal         func_437AE0
    ctx->pc = 0x4367C8u;
    SET_GPR_U32(ctx, 31, 0x4367D0u);
    ctx->pc = 0x4367CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4367C8u;
    // 0x4367cc: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x437AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x437AE0u, 0x4367C8u, 0x4367D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4367D0u;
label_4367d0:
    // 0x4367d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4367d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4367d4:
    // 0x4367d4: 0x3e00008  jr          $ra
    ctx->pc = 0x4367D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4367D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4367D4u;
        // 0x4367d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4367D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4367DCu;
    // 0x4367dc: 0x0  nop
    ctx->pc = 0x4367dcu;
    // NOP
    ctx->pc = 0x4367e0u;
}
