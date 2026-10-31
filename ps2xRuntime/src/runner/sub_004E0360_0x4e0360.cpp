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

// Function: sub_004E0360
// Address: 0x4e0360 - 0x4e0510
void sub_004E0360_0x4e0360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E0360_0x4e0360");
#endif

    switch (ctx->pc) {
        case 0x4e03b4u: goto label_4e03b4;
        case 0x4e03e8u: goto label_4e03e8;
        case 0x4e0440u: goto label_4e0440;
        case 0x4e0470u: goto label_4e0470;
        case 0x4e04ccu: goto label_4e04cc;
        case 0x4e04e0u: goto label_4e04e0;
        case 0x4e04f0u: goto label_4e04f0;
        default: break;
    }

    ctx->pc = 0x4e0360u;

    // 0x4e0360: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4e0360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4e0364: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x4e0364u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e0368: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4e0368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x4e036c: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x4e036cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e0370: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4e0370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4e0374: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x4e0374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4e0378: 0x8d260000  lw          $a2, 0x0($t1)
    ctx->pc = 0x4e0378u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4e037c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x4e037cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x4e0380: 0x14c2000e  bne         $a2, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x4E0380u;
    {
        const bool branch_taken_0x4e0380 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x4E0384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0380u;
        // 0x4e0384: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e0380) {
            ctx->pc = 0x4E03BCu;
            goto label_4e03bc;
        }
    }
    ctx->pc = 0x4E0388u;
    // 0x4e0388: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x4e0388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x4e038c: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x4E038Cu;
    {
        const bool branch_taken_0x4e038c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e038c) {
            ctx->pc = 0x4E0390u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E038Cu;
            // 0x4e0390: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E03ACu;
            goto label_4e03ac;
        }
    }
    ctx->pc = 0x4E0394u;
    // 0x4e0394: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4e0394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4e0398: 0x8cc30010  lw          $v1, 0x10($a2)
    ctx->pc = 0x4e0398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x4e039c: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x4e039cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4e03a0: 0x1440004d  bnez        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x4E03A0u;
    {
        const bool branch_taken_0x4e03a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e03a0) {
            ctx->pc = 0x4E04D8u;
            goto label_4e04d8;
        }
    }
    ctx->pc = 0x4E03A8u;
    // 0x4e03a8: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x4e03a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_4e03ac:
    // 0x4e03ac: 0xc138082  jal         func_4E0208
    ctx->pc = 0x4E03ACu;
    SET_GPR_U32(ctx, 31, 0x4E03B4u);
    ctx->pc = 0x4E03B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E03ACu;
    // 0x4e03b0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E0208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E0208u, 0x4E03ACu, 0x4E03B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E03B4u;
label_4e03b4:
    // 0x4e03b4: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x4E03B4u;
    {
        const bool branch_taken_0x4e03b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E03B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E03B4u;
        // 0x4e03b8: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e03b4) {
            ctx->pc = 0x4E04F4u;
            goto label_4e04f4;
        }
    }
    ctx->pc = 0x4E03BCu;
label_4e03bc:
    // 0x4e03bc: 0x54c3000c  bnel        $a2, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x4E03BCu;
    {
        const bool branch_taken_0x4e03bc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x4e03bc) {
            ctx->pc = 0x4E03C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E03BCu;
            // 0x4e03c0: 0xafa60000  sw          $a2, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E03F0u;
            goto label_4e03f0;
        }
    }
    ctx->pc = 0x4E03C4u;
    // 0x4e03c4: 0x8cc7000c  lw          $a3, 0xC($a2)
    ctx->pc = 0x4e03c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x4e03c8: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4e03c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4e03cc: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x4e03ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x4e03d0: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x4e03d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4e03d4: 0x1440003b  bnez        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x4E03D4u;
    {
        const bool branch_taken_0x4e03d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E03D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E03D4u;
        // 0x4e03d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e03d4) {
            ctx->pc = 0x4E04C4u;
            goto label_4e04c4;
        }
    }
    ctx->pc = 0x4E03DCu;
    // 0x4e03dc: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x4e03dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e03e0: 0xc138082  jal         func_4E0208
    ctx->pc = 0x4E03E0u;
    SET_GPR_U32(ctx, 31, 0x4E03E8u);
    ctx->pc = 0x4E03E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E03E0u;
    // 0x4e03e4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E0208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E0208u, 0x4E03E0u, 0x4E03E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E03E8u;
label_4e03e8:
    // 0x4e03e8: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x4E03E8u;
    {
        const bool branch_taken_0x4e03e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E03ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E03E8u;
        // 0x4e03ec: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e03e8) {
            ctx->pc = 0x4E04F4u;
            goto label_4e04f4;
        }
    }
    ctx->pc = 0x4E03F0u;
label_4e03f0:
    // 0x4e03f0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4e03f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4e03f4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4E03F4u;
    {
        const bool branch_taken_0x4e03f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E03F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E03F4u;
        // 0x4e03f8: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e03f4) {
            ctx->pc = 0x4E0418u;
            goto label_4e0418;
        }
    }
    ctx->pc = 0x4E03FCu;
    // 0x4e03fc: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x4e03fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x4e0400: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x4e0400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x4e0404: 0x54460005  bnel        $v0, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x4E0404u;
    {
        const bool branch_taken_0x4e0404 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x4e0404) {
            ctx->pc = 0x4E0408u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E0404u;
            // 0x4e0408: 0x8ce30000  lw          $v1, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E041Cu;
            goto label_4e041c;
        }
    }
    ctx->pc = 0x4E040Cu;
    // 0x4e040c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x4e040cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x4e0410: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x4E0410u;
    {
        const bool branch_taken_0x4e0410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E0414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0410u;
        // 0x4e0414: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e0410) {
            ctx->pc = 0x4E0488u;
            goto label_4e0488;
        }
    }
    ctx->pc = 0x4E0418u;
label_4e0418:
    // 0x4e0418: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4e0418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_4e041c:
    // 0x4e041c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x4e041cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x4e0420: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x4E0420u;
    {
        const bool branch_taken_0x4e0420 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e0420) {
            ctx->pc = 0x4E0424u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E0420u;
            // 0x4e0424: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E0460u;
            goto label_4e0460;
        }
    }
    ctx->pc = 0x4E0428u;
    // 0x4e0428: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4e0428u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e042c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x4e042cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x4e0430: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x4E0430u;
    {
        const bool branch_taken_0x4e0430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e0430) {
            ctx->pc = 0x4E0434u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E0430u;
            // 0x4e0434: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E0488u;
            goto label_4e0488;
        }
    }
    ctx->pc = 0x4E0438u;
    // 0x4e0438: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x4e0438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x4e043c: 0x0  nop
    ctx->pc = 0x4e043cu;
    // NOP
label_4e0440:
    // 0x4e0440: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x4e0440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x4e0444: 0x0  nop
    ctx->pc = 0x4e0444u;
    // NOP
    // 0x4e0448: 0x0  nop
    ctx->pc = 0x4e0448u;
    // NOP
    // 0x4e044c: 0x0  nop
    ctx->pc = 0x4e044cu;
    // NOP
    // 0x4e0450: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x4E0450u;
    {
        const bool branch_taken_0x4e0450 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e0450) {
            ctx->pc = 0x4E0454u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E0450u;
            // 0x4e0454: 0x8c63000c  lw          $v1, 0xC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E0440u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4e0440;
        }
    }
    ctx->pc = 0x4E0458u;
    // 0x4e0458: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x4E0458u;
    {
        const bool branch_taken_0x4e0458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E045Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0458u;
        // 0x4e045c: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e0458) {
            ctx->pc = 0x4E0488u;
            goto label_4e0488;
        }
    }
    ctx->pc = 0x4E0460u;
label_4e0460:
    // 0x4e0460: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x4e0460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4e0464: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4E0464u;
    {
        const bool branch_taken_0x4e0464 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4E0468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0464u;
        // 0x4e0468: 0xace40000  sw          $a0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e0464) {
            ctx->pc = 0x4E0488u;
            goto label_4e0488;
        }
    }
    ctx->pc = 0x4E046Cu;
    // 0x4e046c: 0x0  nop
    ctx->pc = 0x4e046cu;
    // NOP
label_4e0470:
    // 0x4e0470: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x4e0470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x4e0474: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4e0474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4e0478: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x4e0478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4e047c: 0x0  nop
    ctx->pc = 0x4e047cu;
    // NOP
    // 0x4e0480: 0x1062fffb  beq         $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x4E0480u;
    {
        const bool branch_taken_0x4e0480 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4E0484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0480u;
        // 0x4e0484: 0xace40000  sw          $a0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e0480) {
            ctx->pc = 0x4E0470u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4e0470;
        }
    }
    ctx->pc = 0x4E0488u;
label_4e0488:
    // 0x4e0488: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x4e0488u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e048c: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x4e048cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4e0490: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x4e0490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x4e0494: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x4e0494u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x4e0498: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4E0498u;
    {
        const bool branch_taken_0x4e0498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E049Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0498u;
        // 0x4e049c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e0498) {
            ctx->pc = 0x4E04ACu;
            goto label_4e04ac;
        }
    }
    ctx->pc = 0x4E04A0u;
    // 0x4e04a0: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x4e04a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4e04a4: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x4e04a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x4e04a8: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x4e04a8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4e04ac:
    // 0x4e04ac: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x4E04ACu;
    {
        const bool branch_taken_0x4e04ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E04B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E04ACu;
        // 0x4e04b0: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e04ac) {
            ctx->pc = 0x4E04E8u;
            goto label_4e04e8;
        }
    }
    ctx->pc = 0x4E04B4u;
    // 0x4e04b4: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x4e04b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x4e04b8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x4E04B8u;
    {
        const bool branch_taken_0x4e04b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e04b8) {
            ctx->pc = 0x4E04BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E04B8u;
            // 0x4e04bc: 0x8d260000  lw          $a2, 0x0($t1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E04D4u;
            goto label_4e04d4;
        }
    }
    ctx->pc = 0x4E04C0u;
    // 0x4e04c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e04c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e04c4:
    // 0x4e04c4: 0xc137f8e  jal         func_4DFE38
    ctx->pc = 0x4E04C4u;
    SET_GPR_U32(ctx, 31, 0x4E04CCu);
    ctx->pc = 0x4E04C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E04C4u;
    // 0x4e04c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DFE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DFE38u, 0x4E04C4u, 0x4E04CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E04CCu;
label_4e04cc:
    // 0x4e04cc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x4E04CCu;
    {
        const bool branch_taken_0x4e04cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E04D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E04CCu;
        // 0x4e04d0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e04cc) {
            ctx->pc = 0x4E04FCu;
            goto label_4e04fc;
        }
    }
    ctx->pc = 0x4E04D4u;
label_4e04d4:
    // 0x4e04d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e04d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e04d8:
    // 0x4e04d8: 0xc137f8e  jal         func_4DFE38
    ctx->pc = 0x4E04D8u;
    SET_GPR_U32(ctx, 31, 0x4E04E0u);
    ctx->pc = 0x4E04DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E04D8u;
    // 0x4e04dc: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DFE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DFE38u, 0x4E04D8u, 0x4E04E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E04E0u;
label_4e04e0:
    // 0x4e04e0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4E04E0u;
    {
        const bool branch_taken_0x4e04e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E04E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E04E0u;
        // 0x4e04e4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e04e0) {
            ctx->pc = 0x4E04FCu;
            goto label_4e04fc;
        }
    }
    ctx->pc = 0x4E04E8u;
label_4e04e8:
    // 0x4e04e8: 0xc138082  jal         func_4E0208
    ctx->pc = 0x4E04E8u;
    SET_GPR_U32(ctx, 31, 0x4E04F0u);
    ctx->pc = 0x4E04ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E04E8u;
    // 0x4e04ec: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E0208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E0208u, 0x4E04E8u, 0x4E04F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E04F0u;
label_4e04f0:
    // 0x4e04f0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4e04f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_4e04f4:
    // 0x4e04f4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4e04f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4e04f8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4e04f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e04fc:
    // 0x4e04fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4e04fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4e0500: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4e0500u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4e0504: 0x3e00008  jr          $ra
    ctx->pc = 0x4E0504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E0508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0504u;
        // 0x4e0508: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E0504u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E050Cu;
    // 0x4e050c: 0x0  nop
    ctx->pc = 0x4e050cu;
    // NOP
    ctx->pc = 0x4e0510u;
}
