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

// Function: sub_001BD740
// Address: 0x1bd740 - 0x1bd838
void sub_001BD740_0x1bd740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BD740_0x1bd740");
#endif

    ctx->pc = 0x1bd740u;

    // 0x1bd740: 0x24030084  addiu       $v1, $zero, 0x84
    ctx->pc = 0x1bd740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    // 0x1bd744: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x1bd744u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
    // 0x1bd748: 0xa32818  mult        $a1, $a1, $v1
    ctx->pc = 0x1bd748u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1bd74c: 0x8cc2489c  lw          $v0, 0x489C($a2)
    ctx->pc = 0x1bd74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 18588)));
    // 0x1bd750: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1bd750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1bd754: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1bd754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1bd758: 0x8c4514d8  lw          $a1, 0x14D8($v0)
    ctx->pc = 0x1bd758u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x1bd75c: 0x10a30017  beq         $a1, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1BD75Cu;
    {
        const bool branch_taken_0x1bd75c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1BD760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD75Cu;
        // 0x1bd760: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd75c) {
            ctx->pc = 0x1BD7BCu;
            goto label_1bd7bc;
        }
    }
    ctx->pc = 0x1BD764u;
    // 0x1bd764: 0x10a20015  beq         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1BD764u;
    {
        const bool branch_taken_0x1bd764 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BD768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD764u;
        // 0x1bd768: 0x24020050  addiu       $v0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd764) {
            ctx->pc = 0x1BD7BCu;
            goto label_1bd7bc;
        }
    }
    ctx->pc = 0x1BD76Cu;
    // 0x1bd76c: 0x10a20013  beq         $a1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1BD76Cu;
    {
        const bool branch_taken_0x1bd76c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BD770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD76Cu;
        // 0x1bd770: 0x24020051  addiu       $v0, $zero, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd76c) {
            ctx->pc = 0x1BD7BCu;
            goto label_1bd7bc;
        }
    }
    ctx->pc = 0x1BD774u;
    // 0x1bd774: 0x10a20011  beq         $a1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1BD774u;
    {
        const bool branch_taken_0x1bd774 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BD778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD774u;
        // 0x1bd778: 0x24020052  addiu       $v0, $zero, 0x52 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd774) {
            ctx->pc = 0x1BD7BCu;
            goto label_1bd7bc;
        }
    }
    ctx->pc = 0x1BD77Cu;
    // 0x1bd77c: 0x10a2000f  beq         $a1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1BD77Cu;
    {
        const bool branch_taken_0x1bd77c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BD780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD77Cu;
        // 0x1bd780: 0x24020053  addiu       $v0, $zero, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd77c) {
            ctx->pc = 0x1BD7BCu;
            goto label_1bd7bc;
        }
    }
    ctx->pc = 0x1BD784u;
    // 0x1bd784: 0x10a2000d  beq         $a1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1BD784u;
    {
        const bool branch_taken_0x1bd784 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BD788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD784u;
        // 0x1bd788: 0x24020054  addiu       $v0, $zero, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd784) {
            ctx->pc = 0x1BD7BCu;
            goto label_1bd7bc;
        }
    }
    ctx->pc = 0x1BD78Cu;
    // 0x1bd78c: 0x10a2000b  beq         $a1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1BD78Cu;
    {
        const bool branch_taken_0x1bd78c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BD790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD78Cu;
        // 0x1bd790: 0x24020056  addiu       $v0, $zero, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd78c) {
            ctx->pc = 0x1BD7BCu;
            goto label_1bd7bc;
        }
    }
    ctx->pc = 0x1BD794u;
    // 0x1bd794: 0x10a20009  beq         $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BD794u;
    {
        const bool branch_taken_0x1bd794 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BD798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD794u;
        // 0x1bd798: 0x24020057  addiu       $v0, $zero, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd794) {
            ctx->pc = 0x1BD7BCu;
            goto label_1bd7bc;
        }
    }
    ctx->pc = 0x1BD79Cu;
    // 0x1bd79c: 0x10a20007  beq         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BD79Cu;
    {
        const bool branch_taken_0x1bd79c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BD7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD79Cu;
        // 0x1bd7a0: 0x2402005c  addiu       $v0, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd79c) {
            ctx->pc = 0x1BD7BCu;
            goto label_1bd7bc;
        }
    }
    ctx->pc = 0x1BD7A4u;
    // 0x1bd7a4: 0x10a20005  beq         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BD7A4u;
    {
        const bool branch_taken_0x1bd7a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BD7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD7A4u;
        // 0x1bd7a8: 0x2402005d  addiu       $v0, $zero, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd7a4) {
            ctx->pc = 0x1BD7BCu;
            goto label_1bd7bc;
        }
    }
    ctx->pc = 0x1BD7ACu;
    // 0x1bd7ac: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BD7ACu;
    {
        const bool branch_taken_0x1bd7ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BD7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD7ACu;
        // 0x1bd7b0: 0x24020063  addiu       $v0, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd7ac) {
            ctx->pc = 0x1BD7BCu;
            goto label_1bd7bc;
        }
    }
    ctx->pc = 0x1BD7B4u;
    // 0x1bd7b4: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BD7B4u;
    {
        const bool branch_taken_0x1bd7b4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BD7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD7B4u;
        // 0x1bd7b8: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd7b4) {
            ctx->pc = 0x1BD7C4u;
            goto label_1bd7c4;
        }
    }
    ctx->pc = 0x1BD7BCu;
label_1bd7bc:
    // 0x1bd7bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1BD7BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BD7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD7BCu;
        // 0x1bd7c0: 0x8c820098  lw          $v0, 0x98($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 152)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BD7BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BD7C4u;
label_1bd7c4:
    // 0x1bd7c4: 0x10a20017  beq         $a1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1BD7C4u;
    {
        const bool branch_taken_0x1bd7c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BD7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD7C4u;
        // 0x1bd7c8: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd7c4) {
            ctx->pc = 0x1BD824u;
            goto label_1bd824;
        }
    }
    ctx->pc = 0x1BD7CCu;
    // 0x1bd7cc: 0x10a20015  beq         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1BD7CCu;
    {
        const bool branch_taken_0x1bd7cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BD7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD7CCu;
        // 0x1bd7d0: 0x2402001f  addiu       $v0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd7cc) {
            ctx->pc = 0x1BD824u;
            goto label_1bd824;
        }
    }
    ctx->pc = 0x1BD7D4u;
    // 0x1bd7d4: 0x10a20013  beq         $a1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1BD7D4u;
    {
        const bool branch_taken_0x1bd7d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BD7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD7D4u;
        // 0x1bd7d8: 0x24020022  addiu       $v0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd7d4) {
            ctx->pc = 0x1BD824u;
            goto label_1bd824;
        }
    }
    ctx->pc = 0x1BD7DCu;
    // 0x1bd7dc: 0x10a20011  beq         $a1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1BD7DCu;
    {
        const bool branch_taken_0x1bd7dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BD7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD7DCu;
        // 0x1bd7e0: 0x24020033  addiu       $v0, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd7dc) {
            ctx->pc = 0x1BD824u;
            goto label_1bd824;
        }
    }
    ctx->pc = 0x1BD7E4u;
    // 0x1bd7e4: 0x10a2000f  beq         $a1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1BD7E4u;
    {
        const bool branch_taken_0x1bd7e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BD7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD7E4u;
        // 0x1bd7e8: 0x24020034  addiu       $v0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd7e4) {
            ctx->pc = 0x1BD824u;
            goto label_1bd824;
        }
    }
    ctx->pc = 0x1BD7ECu;
    // 0x1bd7ec: 0x10a2000d  beq         $a1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1BD7ECu;
    {
        const bool branch_taken_0x1bd7ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BD7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD7ECu;
        // 0x1bd7f0: 0x24020036  addiu       $v0, $zero, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd7ec) {
            ctx->pc = 0x1BD824u;
            goto label_1bd824;
        }
    }
    ctx->pc = 0x1BD7F4u;
    // 0x1bd7f4: 0x10a2000b  beq         $a1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1BD7F4u;
    {
        const bool branch_taken_0x1bd7f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BD7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD7F4u;
        // 0x1bd7f8: 0x24020037  addiu       $v0, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd7f4) {
            ctx->pc = 0x1BD824u;
            goto label_1bd824;
        }
    }
    ctx->pc = 0x1BD7FCu;
    // 0x1bd7fc: 0x10a20009  beq         $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BD7FCu;
    {
        const bool branch_taken_0x1bd7fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BD800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD7FCu;
        // 0x1bd800: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd7fc) {
            ctx->pc = 0x1BD824u;
            goto label_1bd824;
        }
    }
    ctx->pc = 0x1BD804u;
    // 0x1bd804: 0x10a20007  beq         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BD804u;
    {
        const bool branch_taken_0x1bd804 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BD808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD804u;
        // 0x1bd808: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd804) {
            ctx->pc = 0x1BD824u;
            goto label_1bd824;
        }
    }
    ctx->pc = 0x1BD80Cu;
    // 0x1bd80c: 0x10a20005  beq         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BD80Cu;
    {
        const bool branch_taken_0x1bd80c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BD810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD80Cu;
        // 0x1bd810: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd80c) {
            ctx->pc = 0x1BD824u;
            goto label_1bd824;
        }
    }
    ctx->pc = 0x1BD814u;
    // 0x1bd814: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BD814u;
    {
        const bool branch_taken_0x1bd814 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BD818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD814u;
        // 0x1bd818: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd814) {
            ctx->pc = 0x1BD824u;
            goto label_1bd824;
        }
    }
    ctx->pc = 0x1BD81Cu;
    // 0x1bd81c: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BD81Cu;
    {
        const bool branch_taken_0x1bd81c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bd81c) {
            ctx->pc = 0x1BD82Cu;
            goto label_1bd82c;
        }
    }
    ctx->pc = 0x1BD824u;
label_1bd824:
    // 0x1bd824: 0x3e00008  jr          $ra
    ctx->pc = 0x1BD824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BD828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD824u;
        // 0x1bd828: 0x8c82009c  lw          $v0, 0x9C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BD824u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BD82Cu;
label_1bd82c:
    // 0x1bd82c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BD82Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BD830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD82Cu;
        // 0x1bd830: 0x8c820098  lw          $v0, 0x98($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 152)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BD82Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BD834u;
    // 0x1bd834: 0x0  nop
    ctx->pc = 0x1bd834u;
    // NOP
    ctx->pc = 0x1bd838u;
}
