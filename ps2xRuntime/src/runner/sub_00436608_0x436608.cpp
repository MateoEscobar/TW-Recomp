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

// Function: sub_00436608
// Address: 0x436608 - 0x436710
void sub_00436608_0x436608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00436608_0x436608");
#endif

    switch (ctx->pc) {
        case 0x436658u: goto label_436658;
        case 0x436668u: goto label_436668;
        case 0x436690u: goto label_436690;
        case 0x4366c8u: goto label_4366c8;
        default: break;
    }

    ctx->pc = 0x436608u;

    // 0x436608: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x436608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x43660c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x43660cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x436610: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x436610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x436614: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x436614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x436618: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x436618u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43661c: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x43661cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x436620: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x436620u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x436624: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x436624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x436628: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x436628u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43662c: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x43662cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x436630: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x436630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x436634: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x436634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x436638: 0x14e2000d  bne         $a3, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x436638u;
    {
        const bool branch_taken_0x436638 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x43663Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436638u;
        // 0x43663c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436638) {
            ctx->pc = 0x436670u;
            goto label_436670;
        }
    }
    ctx->pc = 0x436640u;
    // 0x436640: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x436640u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x436644: 0x3c110070  lui         $s1, 0x70
    ctx->pc = 0x436644u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)112 << 16));
    // 0x436648: 0x2631f380  addiu       $s1, $s1, -0xC80
    ctx->pc = 0x436648u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294964096));
    // 0x43664c: 0x8e066d80  lw          $a2, 0x6D80($s0)
    ctx->pc = 0x43664cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x516D80u));
    // 0x436650: 0xc10f59a  jal         func_43D668
    ctx->pc = 0x436650u;
    SET_GPR_U32(ctx, 31, 0x436658u);
    ctx->pc = 0x436654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x436650u;
    // 0x436654: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D668u, 0x436650u, 0x436658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x436658u;
label_436658:
    // 0x436658: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x436658u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x43665c: 0xae006d80  sw          $zero, 0x6D80($s0)
    ctx->pc = 0x43665cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28032), GPR_U32(ctx, 0));
    // 0x436660: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x436660u;
    {
        const bool branch_taken_0x436660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x436664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436660u;
        // 0x436664: 0xac716d84  sw          $s1, 0x6D84($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 28036), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436660) {
            ctx->pc = 0x4366E8u;
            goto label_4366e8;
        }
    }
    ctx->pc = 0x436668u;
label_436668:
    // 0x436668: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x436668u;
    {
        const bool branch_taken_0x436668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43666Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436668u;
        // 0x43666c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436668) {
            ctx->pc = 0x4366E8u;
            goto label_4366e8;
        }
    }
    ctx->pc = 0x436670u;
label_436670:
    // 0x436670: 0x1260001c  beqz        $s3, . + 4 + (0x1C << 2)
    ctx->pc = 0x436670u;
    {
        const bool branch_taken_0x436670 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x436674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436670u;
        // 0x436674: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436670) {
            ctx->pc = 0x4366E4u;
            goto label_4366e4;
        }
    }
    ctx->pc = 0x436678u;
    // 0x436678: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x436678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x43667c: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x43667cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
    // 0x436680: 0x2455f380  addiu       $s5, $v0, -0xC80
    ctx->pc = 0x436680u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964096));
    // 0x436684: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x436684u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
    // 0x436688: 0x2d01821  addu        $v1, $s6, $s0
    ctx->pc = 0x436688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
    // 0x43668c: 0x0  nop
    ctx->pc = 0x43668cu;
    // NOP
label_436690:
    // 0x436690: 0x8e246d84  lw          $a0, 0x6D84($s1)
    ctx->pc = 0x436690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28036)));
    // 0x436694: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x436694u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x436698: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x436698u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x43669c: 0x8e426d80  lw          $v0, 0x6D80($s2)
    ctx->pc = 0x43669cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28032)));
    // 0x4366a0: 0x8e236d84  lw          $v1, 0x6D84($s1)
    ctx->pc = 0x4366a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28036)));
    // 0x4366a4: 0x24460001  addiu       $a2, $v0, 0x1
    ctx->pc = 0x4366a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4366a8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4366a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x4366ac: 0xae466d80  sw          $a2, 0x6D80($s2)
    ctx->pc = 0x4366acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28032), GPR_U32(ctx, 6));
    // 0x4366b0: 0x28c20080  slti        $v0, $a2, 0x80
    ctx->pc = 0x4366b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x4366b4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4366B4u;
    {
        const bool branch_taken_0x4366b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4366B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4366B4u;
        // 0x4366b8: 0xae236d84  sw          $v1, 0x6D84($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28036), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4366b4) {
            ctx->pc = 0x4366D4u;
            goto label_4366d4;
        }
    }
    ctx->pc = 0x4366BCu;
    // 0x4366bc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4366bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4366c0: 0xc10f59a  jal         func_43D668
    ctx->pc = 0x4366C0u;
    SET_GPR_U32(ctx, 31, 0x4366C8u);
    ctx->pc = 0x4366C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4366C0u;
    // 0x4366c4: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D668u, 0x4366C0u, 0x4366C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4366C8u;
label_4366c8:
    // 0x4366c8: 0xae356d84  sw          $s5, 0x6D84($s1)
    ctx->pc = 0x4366c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28036), GPR_U32(ctx, 21));
    // 0x4366cc: 0x1040ffe6  beqz        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x4366CCu;
    {
        const bool branch_taken_0x4366cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4366D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4366CCu;
        // 0x4366d0: 0xae406d80  sw          $zero, 0x6D80($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 28032), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4366cc) {
            ctx->pc = 0x436668u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_436668;
        }
    }
    ctx->pc = 0x4366D4u;
label_4366d4:
    // 0x4366d4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x4366d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x4366d8: 0x213102b  sltu        $v0, $s0, $s3
    ctx->pc = 0x4366d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x4366dc: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x4366DCu;
    {
        const bool branch_taken_0x4366dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4366E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4366DCu;
        // 0x4366e0: 0x2d01821  addu        $v1, $s6, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4366dc) {
            ctx->pc = 0x436690u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_436690;
        }
    }
    ctx->pc = 0x4366E4u;
label_4366e4:
    // 0x4366e4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4366e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4366e8:
    // 0x4366e8: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x4366e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4366ec: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x4366ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4366f0: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x4366f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4366f4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x4366f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4366f8: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x4366f8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4366fc: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x4366fcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x436700: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x436700u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x436704: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x436704u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x436708: 0x3e00008  jr          $ra
    ctx->pc = 0x436708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43670Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436708u;
        // 0x43670c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x436708u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x436710u;
}
