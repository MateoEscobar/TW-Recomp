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

// Function: sub_004AE510
// Address: 0x4ae510 - 0x4ae610
void sub_004AE510_0x4ae510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AE510_0x4ae510");
#endif

    switch (ctx->pc) {
        case 0x4ae53cu: goto label_4ae53c;
        case 0x4ae590u: goto label_4ae590;
        case 0x4ae5e4u: goto label_4ae5e4;
        default: break;
    }

    ctx->pc = 0x4ae510u;

    // 0x4ae510: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4ae510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4ae514: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x4ae514u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x4ae518: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4ae518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4ae51c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4ae51cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4ae520: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4ae520u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ae524: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4ae524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ae528: 0x9082001a  lbu         $v0, 0x1A($a0)
    ctx->pc = 0x4ae528u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 26)));
    // 0x4ae52c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4AE52Cu;
    {
        const bool branch_taken_0x4ae52c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4AE530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE52Cu;
        // 0x4ae530: 0x52e03  sra         $a1, $a1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ae52c) {
            ctx->pc = 0x4AE554u;
            goto label_4ae554;
        }
    }
    ctx->pc = 0x4AE534u;
    // 0x4ae534: 0xc12bed0  jal         func_4AFB40
    ctx->pc = 0x4AE534u;
    SET_GPR_U32(ctx, 31, 0x4AE53Cu);
    ctx->pc = 0x4AE538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AE534u;
    // 0x4ae538: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AFB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AFB40u, 0x4AE534u, 0x4AE53Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AE53Cu;
label_4ae53c:
    // 0x4ae53c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4ae53cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4ae540: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4AE540u;
    {
        const bool branch_taken_0x4ae540 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x4AE544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE540u;
        // 0x4ae544: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ae540) {
            ctx->pc = 0x4AE558u;
            goto label_4ae558;
        }
    }
    ctx->pc = 0x4AE548u;
    // 0x4ae548: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4ae548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ae54c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x4ae54cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4ae550: 0xa064001a  sb          $a0, 0x1A($v1)
    ctx->pc = 0x4ae550u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 4));
label_4ae554:
    // 0x4ae554: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4ae554u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4ae558:
    // 0x4ae558: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4ae558u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ae55c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ae55cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ae560: 0x3e00008  jr          $ra
    ctx->pc = 0x4AE560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AE564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE560u;
        // 0x4ae564: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AE560u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AE568u;
    // 0x4ae568: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4ae568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4ae56c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4ae56cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4ae570: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4ae570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4ae574: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4ae574u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ae578: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4ae578u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ae57c: 0x9082001a  lbu         $v0, 0x1A($a0)
    ctx->pc = 0x4ae57cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 26)));
    // 0x4ae580: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4AE580u;
    {
        const bool branch_taken_0x4ae580 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4AE584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE580u;
        // 0x4ae584: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ae580) {
            ctx->pc = 0x4AE5A8u;
            goto label_4ae5a8;
        }
    }
    ctx->pc = 0x4AE588u;
    // 0x4ae588: 0xc12bed8  jal         func_4AFB60
    ctx->pc = 0x4AE588u;
    SET_GPR_U32(ctx, 31, 0x4AE590u);
    ctx->pc = 0x4AE58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AE588u;
    // 0x4ae58c: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AFB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AFB60u, 0x4AE588u, 0x4AE590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AE590u;
label_4ae590:
    // 0x4ae590: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4ae590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4ae594: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4AE594u;
    {
        const bool branch_taken_0x4ae594 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x4AE598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE594u;
        // 0x4ae598: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ae594) {
            ctx->pc = 0x4AE5A8u;
            goto label_4ae5a8;
        }
    }
    ctx->pc = 0x4AE59Cu;
    // 0x4ae59c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4ae59cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ae5a0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x4ae5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4ae5a4: 0xa064001a  sb          $a0, 0x1A($v1)
    ctx->pc = 0x4ae5a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 4));
label_4ae5a8:
    // 0x4ae5a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4ae5a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ae5ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ae5acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ae5b0: 0x3e00008  jr          $ra
    ctx->pc = 0x4AE5B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AE5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE5B0u;
        // 0x4ae5b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AE5B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AE5B8u;
    // 0x4ae5b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4ae5b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4ae5bc: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x4ae5bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x4ae5c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4ae5c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4ae5c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4ae5c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4ae5c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4ae5c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ae5cc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4ae5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ae5d0: 0x9082001a  lbu         $v0, 0x1A($a0)
    ctx->pc = 0x4ae5d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 26)));
    // 0x4ae5d4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4AE5D4u;
    {
        const bool branch_taken_0x4ae5d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4AE5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE5D4u;
        // 0x4ae5d8: 0x52e03  sra         $a1, $a1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ae5d4) {
            ctx->pc = 0x4AE5FCu;
            goto label_4ae5fc;
        }
    }
    ctx->pc = 0x4AE5DCu;
    // 0x4ae5dc: 0xc12bed0  jal         func_4AFB40
    ctx->pc = 0x4AE5DCu;
    SET_GPR_U32(ctx, 31, 0x4AE5E4u);
    ctx->pc = 0x4AE5E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AE5DCu;
    // 0x4ae5e0: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AFB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AFB40u, 0x4AE5DCu, 0x4AE5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AE5E4u;
label_4ae5e4:
    // 0x4ae5e4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4ae5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4ae5e8: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4AE5E8u;
    {
        const bool branch_taken_0x4ae5e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x4AE5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE5E8u;
        // 0x4ae5ec: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ae5e8) {
            ctx->pc = 0x4AE600u;
            goto label_4ae600;
        }
    }
    ctx->pc = 0x4AE5F0u;
    // 0x4ae5f0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4ae5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ae5f4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x4ae5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4ae5f8: 0xa064001a  sb          $a0, 0x1A($v1)
    ctx->pc = 0x4ae5f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 4));
label_4ae5fc:
    // 0x4ae5fc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4ae5fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4ae600:
    // 0x4ae600: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4ae600u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ae604: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ae604u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ae608: 0x3e00008  jr          $ra
    ctx->pc = 0x4AE608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AE60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE608u;
        // 0x4ae60c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AE608u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AE610u;
}
