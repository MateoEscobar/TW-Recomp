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

// Function: sub_00312208
// Address: 0x312208 - 0x312310
void sub_00312208_0x312208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00312208_0x312208");
#endif

    switch (ctx->pc) {
        case 0x312248u: goto label_312248;
        case 0x31226cu: goto label_31226c;
        case 0x3122a8u: goto label_3122a8;
        case 0x3122bcu: goto label_3122bc;
        case 0x3122e4u: goto label_3122e4;
        case 0x3122f8u: goto label_3122f8;
        default: break;
    }

    ctx->pc = 0x312208u;

    // 0x312208: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x312208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x31220c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x31220cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x312210: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x312210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x312214: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x312214u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312218: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x312218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x31221c: 0x8e240034  lw          $a0, 0x34($s1)
    ctx->pc = 0x31221cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x312220: 0x10800036  beqz        $a0, . + 4 + (0x36 << 2)
    ctx->pc = 0x312220u;
    {
        const bool branch_taken_0x312220 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x312224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312220u;
        // 0x312224: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312220) {
            ctx->pc = 0x3122FCu;
            goto label_3122fc;
        }
    }
    ctx->pc = 0x312228u;
    // 0x312228: 0x8e230030  lw          $v1, 0x30($s1)
    ctx->pc = 0x312228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x31222c: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x31222Cu;
    {
        const bool branch_taken_0x31222c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x312230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31222Cu;
        // 0x312230: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31222c) {
            ctx->pc = 0x312254u;
            goto label_312254;
        }
    }
    ctx->pc = 0x312234u;
    // 0x312234: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x312234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x312238: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x312238u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x31223c: 0x2407004d  addiu       $a3, $zero, 0x4D
    ctx->pc = 0x31223cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x312240: 0xc08823c  jal         func_2208F0
    ctx->pc = 0x312240u;
    SET_GPR_U32(ctx, 31, 0x312248u);
    ctx->pc = 0x312244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312240u;
    // 0x312244: 0x9045060c  lbu         $a1, 0x60C($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1548)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2208F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2208F0u, 0x312240u, 0x312248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312248u;
label_312248:
    // 0x312248: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x312248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31224c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x31224Cu;
    {
        const bool branch_taken_0x31224c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31224Cu;
        // 0x312250: 0xae230030  sw          $v1, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31224c) {
            ctx->pc = 0x3122F8u;
            goto label_3122f8;
        }
    }
    ctx->pc = 0x312254u;
label_312254:
    // 0x312254: 0x1470001c  bne         $v1, $s0, . + 4 + (0x1C << 2)
    ctx->pc = 0x312254u;
    {
        const bool branch_taken_0x312254 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        ctx->pc = 0x312258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312254u;
        // 0x312258: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312254) {
            ctx->pc = 0x3122C8u;
            goto label_3122c8;
        }
    }
    ctx->pc = 0x31225Cu;
    // 0x31225c: 0x8c820178  lw          $v0, 0x178($a0)
    ctx->pc = 0x31225cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 376)));
    // 0x312260: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x312260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312264: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x312264u;
    SET_GPR_U32(ctx, 31, 0x31226Cu);
    ctx->pc = 0x312268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312264u;
    // 0x312268: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x312264u, 0x31226Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31226Cu;
label_31226c:
    // 0x31226c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x31226cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x312270: 0x10500021  beq         $v0, $s0, . + 4 + (0x21 << 2)
    ctx->pc = 0x312270u;
    {
        const bool branch_taken_0x312270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x312274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312270u;
        // 0x312274: 0x2406026d  addiu       $a2, $zero, 0x26D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 621));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312270) {
            ctx->pc = 0x3122F8u;
            goto label_3122f8;
        }
    }
    ctx->pc = 0x312278u;
    // 0x312278: 0x8e250038  lw          $a1, 0x38($s1)
    ctx->pc = 0x312278u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x31227c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x31227cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x312280: 0x8ca203b4  lw          $v0, 0x3B4($a1)
    ctx->pc = 0x312280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 948)));
    // 0x312284: 0x8c64aa84  lw          $a0, -0x557C($v1)
    ctx->pc = 0x312284u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50AA84u));
    // 0x312288: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x312288u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x31228c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x31228cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x312290: 0x8c870214  lw          $a3, 0x214($a0)
    ctx->pc = 0x312290u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 532)));
    // 0x312294: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x312294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312298: 0x9070060c  lbu         $s0, 0x60C($v1)
    ctx->pc = 0x312298u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1548)));
    // 0x31229c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x31229cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x3122a0: 0xc05a582  jal         func_169608
    ctx->pc = 0x3122A0u;
    SET_GPR_U32(ctx, 31, 0x3122A8u);
    ctx->pc = 0x3122A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3122A0u;
    // 0x3122a4: 0x90450040  lbu         $a1, 0x40($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169608u, 0x3122A0u, 0x3122A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3122A8u;
label_3122a8:
    // 0x3122a8: 0x8e240038  lw          $a0, 0x38($s1)
    ctx->pc = 0x3122a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x3122ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3122acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3122b0: 0x24060015  addiu       $a2, $zero, 0x15
    ctx->pc = 0x3122b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x3122b4: 0xc08823c  jal         func_2208F0
    ctx->pc = 0x3122B4u;
    SET_GPR_U32(ctx, 31, 0x3122BCu);
    ctx->pc = 0x3122B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3122B4u;
    // 0x3122b8: 0x2407004e  addiu       $a3, $zero, 0x4E (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2208F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2208F0u, 0x3122B4u, 0x3122BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3122BCu;
label_3122bc:
    // 0x3122bc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3122bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3122c0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3122C0u;
    {
        const bool branch_taken_0x3122c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3122C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3122C0u;
        // 0x3122c4: 0xae230030  sw          $v1, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3122c0) {
            ctx->pc = 0x3122F8u;
            goto label_3122f8;
        }
    }
    ctx->pc = 0x3122C8u;
label_3122c8:
    // 0x3122c8: 0x5462000c  bnel        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3122C8u;
    {
        const bool branch_taken_0x3122c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3122c8) {
            ctx->pc = 0x3122CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3122C8u;
            // 0x3122cc: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3122FCu;
            goto label_3122fc;
        }
    }
    ctx->pc = 0x3122D0u;
    // 0x3122d0: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x3122d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x3122d4: 0x37a40004  ori         $a0, $sp, 0x4
    ctx->pc = 0x3122d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x3122d8: 0x8c430178  lw          $v1, 0x178($v0)
    ctx->pc = 0x3122d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 376)));
    // 0x3122dc: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x3122DCu;
    SET_GPR_U32(ctx, 31, 0x3122E4u);
    ctx->pc = 0x3122E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3122DCu;
    // 0x3122e0: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x3122DCu, 0x3122E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3122E4u;
label_3122e4:
    // 0x3122e4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3122e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3122e8: 0x10500003  beq         $v0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3122E8u;
    {
        const bool branch_taken_0x3122e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x3122ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3122E8u;
        // 0x3122ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3122e8) {
            ctx->pc = 0x3122F8u;
            goto label_3122f8;
        }
    }
    ctx->pc = 0x3122F0u;
    // 0x3122f0: 0xc0c47de  jal         func_311F78
    ctx->pc = 0x3122F0u;
    SET_GPR_U32(ctx, 31, 0x3122F8u);
    ctx->pc = 0x3122F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3122F0u;
    // 0x3122f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x311F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x311F78u, 0x3122F0u, 0x3122F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3122F8u;
label_3122f8:
    // 0x3122f8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3122f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3122fc:
    // 0x3122fc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3122fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x312300: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x312300u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x312304: 0x3e00008  jr          $ra
    ctx->pc = 0x312304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x312308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312304u;
        // 0x312308: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x312304u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31230Cu;
    // 0x31230c: 0x0  nop
    ctx->pc = 0x31230cu;
    // NOP
    ctx->pc = 0x312310u;
}
