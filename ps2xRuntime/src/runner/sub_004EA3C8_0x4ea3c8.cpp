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

// Function: sub_004EA3C8
// Address: 0x4ea3c8 - 0x4ea578
void sub_004EA3C8_0x4ea3c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EA3C8_0x4ea3c8");
#endif

    switch (ctx->pc) {
        case 0x4ea41cu: goto label_4ea41c;
        case 0x4ea450u: goto label_4ea450;
        case 0x4ea4a8u: goto label_4ea4a8;
        case 0x4ea4d8u: goto label_4ea4d8;
        case 0x4ea534u: goto label_4ea534;
        case 0x4ea548u: goto label_4ea548;
        case 0x4ea558u: goto label_4ea558;
        default: break;
    }

    ctx->pc = 0x4ea3c8u;

    // 0x4ea3c8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4ea3c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4ea3cc: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x4ea3ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ea3d0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4ea3d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x4ea3d4: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x4ea3d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ea3d8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4ea3d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4ea3dc: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x4ea3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4ea3e0: 0x8d260000  lw          $a2, 0x0($t1)
    ctx->pc = 0x4ea3e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4ea3e4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x4ea3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x4ea3e8: 0x14c2000e  bne         $a2, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x4EA3E8u;
    {
        const bool branch_taken_0x4ea3e8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x4EA3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA3E8u;
        // 0x4ea3ec: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ea3e8) {
            ctx->pc = 0x4EA424u;
            goto label_4ea424;
        }
    }
    ctx->pc = 0x4EA3F0u;
    // 0x4ea3f0: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x4ea3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x4ea3f4: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x4EA3F4u;
    {
        const bool branch_taken_0x4ea3f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ea3f4) {
            ctx->pc = 0x4EA3F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4EA3F4u;
            // 0x4ea3f8: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4EA414u;
            goto label_4ea414;
        }
    }
    ctx->pc = 0x4EA3FCu;
    // 0x4ea3fc: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x4ea3fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4ea400: 0x94c30010  lhu         $v1, 0x10($a2)
    ctx->pc = 0x4ea400u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x4ea404: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x4ea404u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4ea408: 0x1440004d  bnez        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x4EA408u;
    {
        const bool branch_taken_0x4ea408 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4ea408) {
            ctx->pc = 0x4EA540u;
            goto label_4ea540;
        }
    }
    ctx->pc = 0x4EA410u;
    // 0x4ea410: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x4ea410u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_4ea414:
    // 0x4ea414: 0xc13a89c  jal         func_4EA270
    ctx->pc = 0x4EA414u;
    SET_GPR_U32(ctx, 31, 0x4EA41Cu);
    ctx->pc = 0x4EA418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EA414u;
    // 0x4ea418: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EA270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EA270u, 0x4EA414u, 0x4EA41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EA41Cu;
label_4ea41c:
    // 0x4ea41c: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x4EA41Cu;
    {
        const bool branch_taken_0x4ea41c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EA420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA41Cu;
        // 0x4ea420: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ea41c) {
            ctx->pc = 0x4EA55Cu;
            goto label_4ea55c;
        }
    }
    ctx->pc = 0x4EA424u;
label_4ea424:
    // 0x4ea424: 0x54c3000c  bnel        $a2, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x4EA424u;
    {
        const bool branch_taken_0x4ea424 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x4ea424) {
            ctx->pc = 0x4EA428u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4EA424u;
            // 0x4ea428: 0xafa60000  sw          $a2, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4EA458u;
            goto label_4ea458;
        }
    }
    ctx->pc = 0x4EA42Cu;
    // 0x4ea42c: 0x8cc7000c  lw          $a3, 0xC($a2)
    ctx->pc = 0x4ea42cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x4ea430: 0x95030000  lhu         $v1, 0x0($t0)
    ctx->pc = 0x4ea430u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4ea434: 0x94e20010  lhu         $v0, 0x10($a3)
    ctx->pc = 0x4ea434u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x4ea438: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x4ea438u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4ea43c: 0x1440003b  bnez        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x4EA43Cu;
    {
        const bool branch_taken_0x4ea43c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4EA440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA43Cu;
        // 0x4ea440: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ea43c) {
            ctx->pc = 0x4EA52Cu;
            goto label_4ea52c;
        }
    }
    ctx->pc = 0x4EA444u;
    // 0x4ea444: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x4ea444u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ea448: 0xc13a89c  jal         func_4EA270
    ctx->pc = 0x4EA448u;
    SET_GPR_U32(ctx, 31, 0x4EA450u);
    ctx->pc = 0x4EA44Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EA448u;
    // 0x4ea44c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EA270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EA270u, 0x4EA448u, 0x4EA450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EA450u;
label_4ea450:
    // 0x4ea450: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x4EA450u;
    {
        const bool branch_taken_0x4ea450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EA454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA450u;
        // 0x4ea454: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ea450) {
            ctx->pc = 0x4EA55Cu;
            goto label_4ea55c;
        }
    }
    ctx->pc = 0x4EA458u;
label_4ea458:
    // 0x4ea458: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4ea458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4ea45c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4EA45Cu;
    {
        const bool branch_taken_0x4ea45c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4EA460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA45Cu;
        // 0x4ea460: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ea45c) {
            ctx->pc = 0x4EA480u;
            goto label_4ea480;
        }
    }
    ctx->pc = 0x4EA464u;
    // 0x4ea464: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x4ea464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x4ea468: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x4ea468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x4ea46c: 0x54460005  bnel        $v0, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x4EA46Cu;
    {
        const bool branch_taken_0x4ea46c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x4ea46c) {
            ctx->pc = 0x4EA470u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4EA46Cu;
            // 0x4ea470: 0x8ce30000  lw          $v1, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4EA484u;
            goto label_4ea484;
        }
    }
    ctx->pc = 0x4EA474u;
    // 0x4ea474: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x4ea474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x4ea478: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x4EA478u;
    {
        const bool branch_taken_0x4ea478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EA47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA478u;
        // 0x4ea47c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ea478) {
            ctx->pc = 0x4EA4F0u;
            goto label_4ea4f0;
        }
    }
    ctx->pc = 0x4EA480u;
label_4ea480:
    // 0x4ea480: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4ea480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_4ea484:
    // 0x4ea484: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x4ea484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x4ea488: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x4EA488u;
    {
        const bool branch_taken_0x4ea488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ea488) {
            ctx->pc = 0x4EA48Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4EA488u;
            // 0x4ea48c: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4EA4C8u;
            goto label_4ea4c8;
        }
    }
    ctx->pc = 0x4EA490u;
    // 0x4ea490: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4ea490u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ea494: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x4ea494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x4ea498: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x4EA498u;
    {
        const bool branch_taken_0x4ea498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ea498) {
            ctx->pc = 0x4EA49Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4EA498u;
            // 0x4ea49c: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4EA4F0u;
            goto label_4ea4f0;
        }
    }
    ctx->pc = 0x4EA4A0u;
    // 0x4ea4a0: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x4ea4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x4ea4a4: 0x0  nop
    ctx->pc = 0x4ea4a4u;
    // NOP
label_4ea4a8:
    // 0x4ea4a8: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x4ea4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x4ea4ac: 0x0  nop
    ctx->pc = 0x4ea4acu;
    // NOP
    // 0x4ea4b0: 0x0  nop
    ctx->pc = 0x4ea4b0u;
    // NOP
    // 0x4ea4b4: 0x0  nop
    ctx->pc = 0x4ea4b4u;
    // NOP
    // 0x4ea4b8: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x4EA4B8u;
    {
        const bool branch_taken_0x4ea4b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4ea4b8) {
            ctx->pc = 0x4EA4BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4EA4B8u;
            // 0x4ea4bc: 0x8c63000c  lw          $v1, 0xC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4EA4A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4ea4a8;
        }
    }
    ctx->pc = 0x4EA4C0u;
    // 0x4ea4c0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x4EA4C0u;
    {
        const bool branch_taken_0x4ea4c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EA4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA4C0u;
        // 0x4ea4c4: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ea4c0) {
            ctx->pc = 0x4EA4F0u;
            goto label_4ea4f0;
        }
    }
    ctx->pc = 0x4EA4C8u;
label_4ea4c8:
    // 0x4ea4c8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x4ea4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4ea4cc: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4EA4CCu;
    {
        const bool branch_taken_0x4ea4cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4EA4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA4CCu;
        // 0x4ea4d0: 0xace40000  sw          $a0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ea4cc) {
            ctx->pc = 0x4EA4F0u;
            goto label_4ea4f0;
        }
    }
    ctx->pc = 0x4EA4D4u;
    // 0x4ea4d4: 0x0  nop
    ctx->pc = 0x4ea4d4u;
    // NOP
label_4ea4d8:
    // 0x4ea4d8: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x4ea4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x4ea4dc: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4ea4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4ea4e0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x4ea4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4ea4e4: 0x0  nop
    ctx->pc = 0x4ea4e4u;
    // NOP
    // 0x4ea4e8: 0x1062fffb  beq         $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x4EA4E8u;
    {
        const bool branch_taken_0x4ea4e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4EA4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA4E8u;
        // 0x4ea4ec: 0xace40000  sw          $a0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ea4e8) {
            ctx->pc = 0x4EA4D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4ea4d8;
        }
    }
    ctx->pc = 0x4EA4F0u;
label_4ea4f0:
    // 0x4ea4f0: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x4ea4f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ea4f4: 0x95040000  lhu         $a0, 0x0($t0)
    ctx->pc = 0x4ea4f4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4ea4f8: 0x94e20010  lhu         $v0, 0x10($a3)
    ctx->pc = 0x4ea4f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x4ea4fc: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x4ea4fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x4ea500: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4EA500u;
    {
        const bool branch_taken_0x4ea500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EA504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA500u;
        // 0x4ea504: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ea500) {
            ctx->pc = 0x4EA514u;
            goto label_4ea514;
        }
    }
    ctx->pc = 0x4EA508u;
    // 0x4ea508: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x4ea508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4ea50c: 0x94430010  lhu         $v1, 0x10($v0)
    ctx->pc = 0x4ea50cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x4ea510: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x4ea510u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4ea514:
    // 0x4ea514: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x4EA514u;
    {
        const bool branch_taken_0x4ea514 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EA518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA514u;
        // 0x4ea518: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ea514) {
            ctx->pc = 0x4EA550u;
            goto label_4ea550;
        }
    }
    ctx->pc = 0x4EA51Cu;
    // 0x4ea51c: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x4ea51cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x4ea520: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x4EA520u;
    {
        const bool branch_taken_0x4ea520 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4ea520) {
            ctx->pc = 0x4EA524u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4EA520u;
            // 0x4ea524: 0x8d260000  lw          $a2, 0x0($t1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4EA53Cu;
            goto label_4ea53c;
        }
    }
    ctx->pc = 0x4EA528u;
    // 0x4ea528: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4ea528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4ea52c:
    // 0x4ea52c: 0xc13a7a8  jal         func_4E9EA0
    ctx->pc = 0x4EA52Cu;
    SET_GPR_U32(ctx, 31, 0x4EA534u);
    ctx->pc = 0x4EA530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EA52Cu;
    // 0x4ea530: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E9EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E9EA0u, 0x4EA52Cu, 0x4EA534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EA534u;
label_4ea534:
    // 0x4ea534: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x4EA534u;
    {
        const bool branch_taken_0x4ea534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EA538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA534u;
        // 0x4ea538: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ea534) {
            ctx->pc = 0x4EA564u;
            goto label_4ea564;
        }
    }
    ctx->pc = 0x4EA53Cu;
label_4ea53c:
    // 0x4ea53c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4ea53cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4ea540:
    // 0x4ea540: 0xc13a7a8  jal         func_4E9EA0
    ctx->pc = 0x4EA540u;
    SET_GPR_U32(ctx, 31, 0x4EA548u);
    ctx->pc = 0x4EA544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EA540u;
    // 0x4ea544: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E9EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E9EA0u, 0x4EA540u, 0x4EA548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EA548u;
label_4ea548:
    // 0x4ea548: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4EA548u;
    {
        const bool branch_taken_0x4ea548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EA54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA548u;
        // 0x4ea54c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ea548) {
            ctx->pc = 0x4EA564u;
            goto label_4ea564;
        }
    }
    ctx->pc = 0x4EA550u;
label_4ea550:
    // 0x4ea550: 0xc13a89c  jal         func_4EA270
    ctx->pc = 0x4EA550u;
    SET_GPR_U32(ctx, 31, 0x4EA558u);
    ctx->pc = 0x4EA554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EA550u;
    // 0x4ea554: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EA270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EA270u, 0x4EA550u, 0x4EA558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EA558u;
label_4ea558:
    // 0x4ea558: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4ea558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_4ea55c:
    // 0x4ea55c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4ea55cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4ea560: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4ea560u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4ea564:
    // 0x4ea564: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4ea564u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4ea568: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4ea568u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4ea56c: 0x3e00008  jr          $ra
    ctx->pc = 0x4EA56Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EA570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA56Cu;
        // 0x4ea570: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EA56Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EA574u;
    // 0x4ea574: 0x0  nop
    ctx->pc = 0x4ea574u;
    // NOP
    ctx->pc = 0x4ea578u;
}
