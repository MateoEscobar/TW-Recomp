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

// Function: sub_003179C8
// Address: 0x3179c8 - 0x317ad0
void sub_003179C8_0x3179c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003179C8_0x3179c8");
#endif

    switch (ctx->pc) {
        case 0x317a08u: goto label_317a08;
        case 0x317a2cu: goto label_317a2c;
        case 0x317a68u: goto label_317a68;
        case 0x317a7cu: goto label_317a7c;
        case 0x317aa4u: goto label_317aa4;
        case 0x317ab8u: goto label_317ab8;
        default: break;
    }

    ctx->pc = 0x3179c8u;

    // 0x3179c8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3179c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3179cc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3179ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3179d0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3179d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3179d4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3179d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3179d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3179d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3179dc: 0x8e240038  lw          $a0, 0x38($s1)
    ctx->pc = 0x3179dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x3179e0: 0x10800036  beqz        $a0, . + 4 + (0x36 << 2)
    ctx->pc = 0x3179E0u;
    {
        const bool branch_taken_0x3179e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3179E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3179E0u;
        // 0x3179e4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3179e0) {
            ctx->pc = 0x317ABCu;
            goto label_317abc;
        }
    }
    ctx->pc = 0x3179E8u;
    // 0x3179e8: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x3179e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x3179ec: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3179ECu;
    {
        const bool branch_taken_0x3179ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3179F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3179ECu;
        // 0x3179f0: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3179ec) {
            ctx->pc = 0x317A14u;
            goto label_317a14;
        }
    }
    ctx->pc = 0x3179F4u;
    // 0x3179f4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3179f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3179f8: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x3179f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x3179fc: 0x2407004d  addiu       $a3, $zero, 0x4D
    ctx->pc = 0x3179fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x317a00: 0xc08823c  jal         func_2208F0
    ctx->pc = 0x317A00u;
    SET_GPR_U32(ctx, 31, 0x317A08u);
    ctx->pc = 0x317A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317A00u;
    // 0x317a04: 0x9045060c  lbu         $a1, 0x60C($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1548)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2208F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2208F0u, 0x317A00u, 0x317A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317A08u;
label_317a08:
    // 0x317a08: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x317a08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x317a0c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x317A0Cu;
    {
        const bool branch_taken_0x317a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x317A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317A0Cu;
        // 0x317a10: 0xae230034  sw          $v1, 0x34($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317a0c) {
            ctx->pc = 0x317AB8u;
            goto label_317ab8;
        }
    }
    ctx->pc = 0x317A14u;
label_317a14:
    // 0x317a14: 0x1470001c  bne         $v1, $s0, . + 4 + (0x1C << 2)
    ctx->pc = 0x317A14u;
    {
        const bool branch_taken_0x317a14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        ctx->pc = 0x317A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317A14u;
        // 0x317a18: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317a14) {
            ctx->pc = 0x317A88u;
            goto label_317a88;
        }
    }
    ctx->pc = 0x317A1Cu;
    // 0x317a1c: 0x8c820178  lw          $v0, 0x178($a0)
    ctx->pc = 0x317a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 376)));
    // 0x317a20: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x317a20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317a24: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x317A24u;
    SET_GPR_U32(ctx, 31, 0x317A2Cu);
    ctx->pc = 0x317A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317A24u;
    // 0x317a28: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x317A24u, 0x317A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317A2Cu;
label_317a2c:
    // 0x317a2c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x317a2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x317a30: 0x10500021  beq         $v0, $s0, . + 4 + (0x21 << 2)
    ctx->pc = 0x317A30u;
    {
        const bool branch_taken_0x317a30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x317A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317A30u;
        // 0x317a34: 0x2406026d  addiu       $a2, $zero, 0x26D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 621));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317a30) {
            ctx->pc = 0x317AB8u;
            goto label_317ab8;
        }
    }
    ctx->pc = 0x317A38u;
    // 0x317a38: 0x8e25003c  lw          $a1, 0x3C($s1)
    ctx->pc = 0x317a38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x317a3c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x317a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x317a40: 0x8ca203b4  lw          $v0, 0x3B4($a1)
    ctx->pc = 0x317a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 948)));
    // 0x317a44: 0x8c64aa84  lw          $a0, -0x557C($v1)
    ctx->pc = 0x317a44u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50AA84u));
    // 0x317a48: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x317a48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x317a4c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x317a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x317a50: 0x8c870214  lw          $a3, 0x214($a0)
    ctx->pc = 0x317a50u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 532)));
    // 0x317a54: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x317a54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317a58: 0x9070060c  lbu         $s0, 0x60C($v1)
    ctx->pc = 0x317a58u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1548)));
    // 0x317a5c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x317a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x317a60: 0xc05a582  jal         func_169608
    ctx->pc = 0x317A60u;
    SET_GPR_U32(ctx, 31, 0x317A68u);
    ctx->pc = 0x317A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317A60u;
    // 0x317a64: 0x90450040  lbu         $a1, 0x40($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169608u, 0x317A60u, 0x317A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317A68u;
label_317a68:
    // 0x317a68: 0x8e24003c  lw          $a0, 0x3C($s1)
    ctx->pc = 0x317a68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x317a6c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x317a6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317a70: 0x24060015  addiu       $a2, $zero, 0x15
    ctx->pc = 0x317a70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x317a74: 0xc08823c  jal         func_2208F0
    ctx->pc = 0x317A74u;
    SET_GPR_U32(ctx, 31, 0x317A7Cu);
    ctx->pc = 0x317A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317A74u;
    // 0x317a78: 0x2407004e  addiu       $a3, $zero, 0x4E (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2208F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2208F0u, 0x317A74u, 0x317A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317A7Cu;
label_317a7c:
    // 0x317a7c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x317a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x317a80: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x317A80u;
    {
        const bool branch_taken_0x317a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x317A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317A80u;
        // 0x317a84: 0xae230034  sw          $v1, 0x34($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317a80) {
            ctx->pc = 0x317AB8u;
            goto label_317ab8;
        }
    }
    ctx->pc = 0x317A88u;
label_317a88:
    // 0x317a88: 0x5462000c  bnel        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x317A88u;
    {
        const bool branch_taken_0x317a88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x317a88) {
            ctx->pc = 0x317A8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x317A88u;
            // 0x317a8c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x317ABCu;
            goto label_317abc;
        }
    }
    ctx->pc = 0x317A90u;
    // 0x317a90: 0x8e22003c  lw          $v0, 0x3C($s1)
    ctx->pc = 0x317a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x317a94: 0x37a40004  ori         $a0, $sp, 0x4
    ctx->pc = 0x317a94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x317a98: 0x8c430178  lw          $v1, 0x178($v0)
    ctx->pc = 0x317a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 376)));
    // 0x317a9c: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x317A9Cu;
    SET_GPR_U32(ctx, 31, 0x317AA4u);
    ctx->pc = 0x317AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317A9Cu;
    // 0x317aa0: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x317A9Cu, 0x317AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317AA4u;
label_317aa4:
    // 0x317aa4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x317aa4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x317aa8: 0x10500003  beq         $v0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x317AA8u;
    {
        const bool branch_taken_0x317aa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x317AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317AA8u;
        // 0x317aac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317aa8) {
            ctx->pc = 0x317AB8u;
            goto label_317ab8;
        }
    }
    ctx->pc = 0x317AB0u;
    // 0x317ab0: 0xc0c5df0  jal         func_3177C0
    ctx->pc = 0x317AB0u;
    SET_GPR_U32(ctx, 31, 0x317AB8u);
    ctx->pc = 0x317AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317AB0u;
    // 0x317ab4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3177C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3177C0u, 0x317AB0u, 0x317AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317AB8u;
label_317ab8:
    // 0x317ab8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x317ab8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_317abc:
    // 0x317abc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x317abcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x317ac0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x317ac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x317ac4: 0x3e00008  jr          $ra
    ctx->pc = 0x317AC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x317AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317AC4u;
        // 0x317ac8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x317AC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x317ACCu;
    // 0x317acc: 0x0  nop
    ctx->pc = 0x317accu;
    // NOP
    ctx->pc = 0x317ad0u;
}
