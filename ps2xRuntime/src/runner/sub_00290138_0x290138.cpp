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

// Function: sub_00290138
// Address: 0x290138 - 0x290230
void sub_00290138_0x290138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00290138_0x290138");
#endif

    switch (ctx->pc) {
        case 0x2901dcu: goto label_2901dc;
        default: break;
    }

    ctx->pc = 0x290138u;

    // 0x290138: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x290138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x29013c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x29013cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x290140: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x290140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x290144: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x290144u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290148: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x290148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x29014c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x29014cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290150: 0x16300003  bne         $s1, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x290150u;
    {
        const bool branch_taken_0x290150 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        ctx->pc = 0x290154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290150u;
        // 0x290154: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290150) {
            ctx->pc = 0x290160u;
            goto label_290160;
        }
    }
    ctx->pc = 0x290158u;
    // 0x290158: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x290158u;
    {
        const bool branch_taken_0x290158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29015Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290158u;
        // 0x29015c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290158) {
            ctx->pc = 0x290214u;
            goto label_290214;
        }
    }
    ctx->pc = 0x290160u;
label_290160:
    // 0x290160: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x290160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x290164: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x290164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x290168: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x290168u;
    {
        const bool branch_taken_0x290168 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x29016Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290168u;
        // 0x29016c: 0x8e25020c  lw          $a1, 0x20C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 524)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290168) {
            ctx->pc = 0x290194u;
            goto label_290194;
        }
    }
    ctx->pc = 0x290170u;
    // 0x290170: 0x920202e5  lbu         $v0, 0x2E5($s0)
    ctx->pc = 0x290170u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 741)));
    // 0x290174: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x290174u;
    {
        const bool branch_taken_0x290174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x290178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290174u;
        // 0x290178: 0x2202b  sltu        $a0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x290174) {
            ctx->pc = 0x290194u;
            goto label_290194;
        }
    }
    ctx->pc = 0x29017Cu;
    // 0x29017c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x29017cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x290180: 0x806201b0  lb          $v0, 0x1B0($v1)
    ctx->pc = 0x290180u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 432)));
    // 0x290184: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x290184u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x290188: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x290188u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x29018c: 0x10440021  beq         $v0, $a0, . + 4 + (0x21 << 2)
    ctx->pc = 0x29018Cu;
    {
        const bool branch_taken_0x29018c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x290190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29018Cu;
        // 0x290190: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29018c) {
            ctx->pc = 0x290214u;
            goto label_290214;
        }
    }
    ctx->pc = 0x290194u;
label_290194:
    // 0x290194: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x290194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x290198: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x290198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29019c: 0x5462000d  bnel        $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x29019Cu;
    {
        const bool branch_taken_0x29019c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x29019c) {
            ctx->pc = 0x2901A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29019Cu;
            // 0x2901a0: 0x8e04020c  lw          $a0, 0x20C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2901D4u;
            goto label_2901d4;
        }
    }
    ctx->pc = 0x2901A4u;
    // 0x2901a4: 0x922202e5  lbu         $v0, 0x2E5($s1)
    ctx->pc = 0x2901a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 741)));
    // 0x2901a8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2901A8u;
    {
        const bool branch_taken_0x2901a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2901ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2901A8u;
        // 0x2901ac: 0x2202b  sltu        $a0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2901a8) {
            ctx->pc = 0x2901D0u;
            goto label_2901d0;
        }
    }
    ctx->pc = 0x2901B0u;
    // 0x2901b0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2901b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2901b4: 0x806201b0  lb          $v0, 0x1B0($v1)
    ctx->pc = 0x2901b4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 432)));
    // 0x2901b8: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x2901b8u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x2901bc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2901bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2901c0: 0x54440004  bnel        $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2901C0u;
    {
        const bool branch_taken_0x2901c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x2901c0) {
            ctx->pc = 0x2901C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2901C0u;
            // 0x2901c4: 0x8e04020c  lw          $a0, 0x20C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2901D4u;
            goto label_2901d4;
        }
    }
    ctx->pc = 0x2901C8u;
    // 0x2901c8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2901C8u;
    {
        const bool branch_taken_0x2901c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2901CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2901C8u;
        // 0x2901cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2901c8) {
            ctx->pc = 0x290214u;
            goto label_290214;
        }
    }
    ctx->pc = 0x2901D0u;
label_2901d0:
    // 0x2901d0: 0x8e04020c  lw          $a0, 0x20C($s0)
    ctx->pc = 0x2901d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
label_2901d4:
    // 0x2901d4: 0xc05a3f8  jal         func_168FE0
    ctx->pc = 0x2901D4u;
    SET_GPR_U32(ctx, 31, 0x2901DCu);
    ctx->pc = 0x2901D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2901D4u;
    // 0x2901d8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x168FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x168FE0u, 0x2901D4u, 0x2901DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2901DCu;
label_2901dc:
    // 0x2901dc: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2901DCu;
    {
        const bool branch_taken_0x2901dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2901dc) {
            ctx->pc = 0x2901E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2901DCu;
            // 0x2901e0: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x290210u;
            goto label_290210;
        }
    }
    ctx->pc = 0x2901E4u;
    // 0x2901e4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2901e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2901e8: 0x806201b0  lb          $v0, 0x1B0($v1)
    ctx->pc = 0x2901e8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 432)));
    // 0x2901ec: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x2901ecu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x2901f0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2901F0u;
    {
        const bool branch_taken_0x2901f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2901F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2901F0u;
        // 0x2901f4: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2901f0) {
            ctx->pc = 0x290214u;
            goto label_290214;
        }
    }
    ctx->pc = 0x2901F8u;
    // 0x2901f8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2901f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2901fc: 0x806201b0  lb          $v0, 0x1B0($v1)
    ctx->pc = 0x2901fcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 432)));
    // 0x290200: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x290200u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x290204: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x290204u;
    {
        const bool branch_taken_0x290204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x290208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290204u;
        // 0x290208: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290204) {
            ctx->pc = 0x290214u;
            goto label_290214;
        }
    }
    ctx->pc = 0x29020Cu;
    // 0x29020c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x29020cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_290210:
    // 0x290210: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x290210u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_290214:
    // 0x290214: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x290214u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x290218: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x290218u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29021c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x29021cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x290220: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x290220u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x290224: 0x3e00008  jr          $ra
    ctx->pc = 0x290224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x290228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290224u;
        // 0x290228: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290224u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29022Cu;
    // 0x29022c: 0x0  nop
    ctx->pc = 0x29022cu;
    // NOP
    ctx->pc = 0x290230u;
}
