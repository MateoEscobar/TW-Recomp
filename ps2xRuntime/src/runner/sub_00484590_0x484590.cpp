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

// Function: sub_00484590
// Address: 0x484590 - 0x484638
void sub_00484590_0x484590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00484590_0x484590");
#endif

    switch (ctx->pc) {
        case 0x484590u: goto label_484590;
        case 0x484594u: goto label_484594;
        case 0x484598u: goto label_484598;
        case 0x48459cu: goto label_48459c;
        case 0x4845a0u: goto label_4845a0;
        case 0x4845a4u: goto label_4845a4;
        case 0x4845a8u: goto label_4845a8;
        case 0x4845acu: goto label_4845ac;
        case 0x4845b0u: goto label_4845b0;
        case 0x4845b4u: goto label_4845b4;
        case 0x4845b8u: goto label_4845b8;
        case 0x4845bcu: goto label_4845bc;
        case 0x4845c0u: goto label_4845c0;
        case 0x4845c4u: goto label_4845c4;
        case 0x4845c8u: goto label_4845c8;
        case 0x4845ccu: goto label_4845cc;
        case 0x4845d0u: goto label_4845d0;
        case 0x4845d4u: goto label_4845d4;
        case 0x4845d8u: goto label_4845d8;
        case 0x4845dcu: goto label_4845dc;
        case 0x4845e0u: goto label_4845e0;
        case 0x4845e4u: goto label_4845e4;
        case 0x4845e8u: goto label_4845e8;
        case 0x4845ecu: goto label_4845ec;
        case 0x4845f0u: goto label_4845f0;
        case 0x4845f4u: goto label_4845f4;
        case 0x4845f8u: goto label_4845f8;
        case 0x4845fcu: goto label_4845fc;
        case 0x484600u: goto label_484600;
        case 0x484604u: goto label_484604;
        case 0x484608u: goto label_484608;
        case 0x48460cu: goto label_48460c;
        case 0x484610u: goto label_484610;
        case 0x484614u: goto label_484614;
        case 0x484618u: goto label_484618;
        case 0x48461cu: goto label_48461c;
        case 0x484620u: goto label_484620;
        case 0x484624u: goto label_484624;
        case 0x484628u: goto label_484628;
        case 0x48462cu: goto label_48462c;
        case 0x484630u: goto label_484630;
        case 0x484634u: goto label_484634;
        default: break;
    }

    ctx->pc = 0x484590u;

label_484590:
    // 0x484590: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x484590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_484594:
    // 0x484594: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x484594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_484598:
    // 0x484598: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x484598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_48459c:
    // 0x48459c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x48459cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4845a0:
    // 0x4845a0: 0x1220001f  beqz        $s1, . + 4 + (0x1F << 2)
label_4845a4:
    if (ctx->pc == 0x4845A4u) {
        ctx->pc = 0x4845A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4845A0u;
        // 0x4845a4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4845A8u;
        goto label_4845a8;
    }
    ctx->pc = 0x4845A0u;
    {
        const bool branch_taken_0x4845a0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4845A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4845A0u;
        // 0x4845a4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4845a0) {
            ctx->pc = 0x484620u;
            goto label_484620;
        }
    }
    ctx->pc = 0x4845A8u;
label_4845a8:
    // 0x4845a8: 0x8e300098  lw          $s0, 0x98($s1)
    ctx->pc = 0x4845a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
label_4845ac:
    // 0x4845ac: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_4845b0:
    if (ctx->pc == 0x4845B0u) {
        ctx->pc = 0x4845B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4845ACu;
        // 0x4845b0: 0x3c040053  lui         $a0, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4845B4u;
        goto label_4845b4;
    }
    ctx->pc = 0x4845ACu;
    {
        const bool branch_taken_0x4845ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4845B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4845ACu;
        // 0x4845b0: 0x3c040053  lui         $a0, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4845ac) {
            ctx->pc = 0x4845CCu;
            goto label_4845cc;
        }
    }
    ctx->pc = 0x4845B4u;
label_4845b4:
    // 0x4845b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4845b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4845b8:
    // 0x4845b8: 0xc121164  jal         func_484590
label_4845bc:
    if (ctx->pc == 0x4845BCu) {
        ctx->pc = 0x4845BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4845B8u;
        // 0x4845bc: 0x8e10009c  lw          $s0, 0x9C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4845C0u;
        goto label_4845c0;
    }
    ctx->pc = 0x4845B8u;
    SET_GPR_U32(ctx, 31, 0x4845C0u);
    ctx->pc = 0x4845BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4845B8u;
    // 0x4845bc: 0x8e10009c  lw          $s0, 0x9C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x484590u;
    goto label_484590;
    ctx->pc = 0x4845C0u;
label_4845c0:
    // 0x4845c0: 0x5600fffd  bnel        $s0, $zero, . + 4 + (-0x3 << 2)
label_4845c4:
    if (ctx->pc == 0x4845C4u) {
        ctx->pc = 0x4845C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4845C0u;
        // 0x4845c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4845C8u;
        goto label_4845c8;
    }
    ctx->pc = 0x4845C0u;
    {
        const bool branch_taken_0x4845c0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x4845c0) {
            ctx->pc = 0x4845C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4845C0u;
            // 0x4845c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4845B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4845b8;
        }
    }
    ctx->pc = 0x4845C8u;
label_4845c8:
    // 0x4845c8: 0x3c040053  lui         $a0, 0x53
    ctx->pc = 0x4845c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)83 << 16));
label_4845cc:
    // 0x4845cc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4845ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4845d0:
    // 0x4845d0: 0xc11ffb4  jal         func_47FED0
label_4845d4:
    if (ctx->pc == 0x4845D4u) {
        ctx->pc = 0x4845D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4845D0u;
        // 0x4845d4: 0x2484ebc0  addiu       $a0, $a0, -0x1440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4845D8u;
        goto label_4845d8;
    }
    ctx->pc = 0x4845D0u;
    SET_GPR_U32(ctx, 31, 0x4845D8u);
    ctx->pc = 0x4845D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4845D0u;
    // 0x4845d4: 0x2484ebc0  addiu       $a0, $a0, -0x1440 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47FED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47FED0u, 0x4845D0u, 0x4845D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4845D8u;
label_4845d8:
    // 0x4845d8: 0x92230003  lbu         $v1, 0x3($s1)
    ctx->pc = 0x4845d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_4845dc:
    // 0x4845dc: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x4845dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
label_4845e0:
    // 0x4845e0: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_4845e4:
    if (ctx->pc == 0x4845E4u) {
        ctx->pc = 0x4845E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4845E0u;
        // 0x4845e4: 0x8f838960  lw          $v1, -0x76A0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936928)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4845E8u;
        goto label_4845e8;
    }
    ctx->pc = 0x4845E0u;
    {
        const bool branch_taken_0x4845e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4845E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4845E0u;
        // 0x4845e4: 0x8f838960  lw          $v1, -0x76A0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936928)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4845e0) {
            ctx->pc = 0x484604u;
            goto label_484604;
        }
    }
    ctx->pc = 0x4845E8u;
label_4845e8:
    // 0x4845e8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x4845e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_4845ec:
    // 0x4845ec: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x4845ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_4845f0:
    // 0x4845f0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x4845f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_4845f4:
    // 0x4845f4: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x4845f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_4845f8:
    // 0x4845f8: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x4845f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_4845fc:
    // 0x4845fc: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x4845fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_484600:
    // 0x484600: 0x8f838960  lw          $v1, -0x76A0($gp)
    ctx->pc = 0x484600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936928)));
label_484604:
    // 0x484604: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x484604u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
label_484608:
    // 0x484608: 0x2484ad18  addiu       $a0, $a0, -0x52E8
    ctx->pc = 0x484608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946072));
label_48460c:
    // 0x48460c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x48460cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_484610:
    // 0x484610: 0x8c82011c  lw          $v0, 0x11C($a0)
    ctx->pc = 0x484610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 284)));
label_484614:
    // 0x484614: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x484614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_484618:
    // 0x484618: 0x40f809  jalr        $v0
label_48461c:
    if (ctx->pc == 0x48461Cu) {
        ctx->pc = 0x48461Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484618u;
        // 0x48461c: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x484620u;
        goto label_484620;
    }
    ctx->pc = 0x484618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x484620u);
        ctx->pc = 0x48461Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484618u;
        // 0x48461c: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x484618u, 0x484620u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x484620u;
label_484620:
    // 0x484620: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x484620u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_484624:
    // 0x484624: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x484624u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_484628:
    // 0x484628: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x484628u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_48462c:
    // 0x48462c: 0x3e00008  jr          $ra
label_484630:
    if (ctx->pc == 0x484630u) {
        ctx->pc = 0x484630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48462Cu;
        // 0x484630: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x484634u;
        goto label_484634;
    }
    ctx->pc = 0x48462Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x484630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48462Cu;
        // 0x484630: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48462Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x484634u;
label_484634:
    // 0x484634: 0x0  nop
    ctx->pc = 0x484634u;
    // NOP
    ctx->pc = 0x484638u;
}
