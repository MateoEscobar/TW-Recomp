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

// Function: sub_0015B598
// Address: 0x15b598 - 0x15b650
void sub_0015B598_0x15b598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015B598_0x15b598");
#endif

    switch (ctx->pc) {
        case 0x15b598u: goto label_15b598;
        case 0x15b59cu: goto label_15b59c;
        case 0x15b5a0u: goto label_15b5a0;
        case 0x15b5a4u: goto label_15b5a4;
        case 0x15b5a8u: goto label_15b5a8;
        case 0x15b5acu: goto label_15b5ac;
        case 0x15b5b0u: goto label_15b5b0;
        case 0x15b5b4u: goto label_15b5b4;
        case 0x15b5b8u: goto label_15b5b8;
        case 0x15b5bcu: goto label_15b5bc;
        case 0x15b5c0u: goto label_15b5c0;
        case 0x15b5c4u: goto label_15b5c4;
        case 0x15b5c8u: goto label_15b5c8;
        case 0x15b5ccu: goto label_15b5cc;
        case 0x15b5d0u: goto label_15b5d0;
        case 0x15b5d4u: goto label_15b5d4;
        case 0x15b5d8u: goto label_15b5d8;
        case 0x15b5dcu: goto label_15b5dc;
        case 0x15b5e0u: goto label_15b5e0;
        case 0x15b5e4u: goto label_15b5e4;
        case 0x15b5e8u: goto label_15b5e8;
        case 0x15b5ecu: goto label_15b5ec;
        case 0x15b5f0u: goto label_15b5f0;
        case 0x15b5f4u: goto label_15b5f4;
        case 0x15b5f8u: goto label_15b5f8;
        case 0x15b5fcu: goto label_15b5fc;
        case 0x15b600u: goto label_15b600;
        case 0x15b604u: goto label_15b604;
        case 0x15b608u: goto label_15b608;
        case 0x15b60cu: goto label_15b60c;
        case 0x15b610u: goto label_15b610;
        case 0x15b614u: goto label_15b614;
        case 0x15b618u: goto label_15b618;
        case 0x15b61cu: goto label_15b61c;
        case 0x15b620u: goto label_15b620;
        case 0x15b624u: goto label_15b624;
        case 0x15b628u: goto label_15b628;
        case 0x15b62cu: goto label_15b62c;
        case 0x15b630u: goto label_15b630;
        case 0x15b634u: goto label_15b634;
        case 0x15b638u: goto label_15b638;
        case 0x15b63cu: goto label_15b63c;
        case 0x15b640u: goto label_15b640;
        case 0x15b644u: goto label_15b644;
        case 0x15b648u: goto label_15b648;
        case 0x15b64cu: goto label_15b64c;
        default: break;
    }

    ctx->pc = 0x15b598u;

label_15b598:
    // 0x15b598: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15b598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_15b59c:
    // 0x15b59c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x15b59cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_15b5a0:
    // 0x15b5a0: 0x8c43c700  lw          $v1, -0x3900($v0)
    ctx->pc = 0x15b5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952704)));
label_15b5a4:
    // 0x15b5a4: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
label_15b5a8:
    if (ctx->pc == 0x15B5A8u) {
        ctx->pc = 0x15B5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B5A4u;
        // 0x15b5a8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B5ACu;
        goto label_15b5ac;
    }
    ctx->pc = 0x15B5A4u;
    {
        const bool branch_taken_0x15b5a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B5A4u;
        // 0x15b5a8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b5a4) {
            ctx->pc = 0x15B5E4u;
            goto label_15b5e4;
        }
    }
    ctx->pc = 0x15B5ACu;
label_15b5ac:
    // 0x15b5ac: 0xc067b9c  jal         func_19EE70
label_15b5b0:
    if (ctx->pc == 0x15B5B0u) {
        ctx->pc = 0x15B5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B5ACu;
        // 0x15b5b0: 0x240400b9  addiu       $a0, $zero, 0xB9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 185));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B5B4u;
        goto label_15b5b4;
    }
    ctx->pc = 0x15B5ACu;
    SET_GPR_U32(ctx, 31, 0x15B5B4u);
    ctx->pc = 0x15B5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B5ACu;
    // 0x15b5b0: 0x240400b9  addiu       $a0, $zero, 0xB9 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 185));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x15B5ACu, 0x15B5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B5B4u;
label_15b5b4:
    // 0x15b5b4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x15b5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_15b5b8:
    // 0x15b5b8: 0x240400ab  addiu       $a0, $zero, 0xAB
    ctx->pc = 0x15b5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 171));
label_15b5bc:
    // 0x15b5bc: 0xc067b9c  jal         func_19EE70
label_15b5c0:
    if (ctx->pc == 0x15B5C0u) {
        ctx->pc = 0x15B5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B5BCu;
        // 0x15b5c0: 0xac62c730  sw          $v0, -0x38D0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294952752), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B5C4u;
        goto label_15b5c4;
    }
    ctx->pc = 0x15B5BCu;
    SET_GPR_U32(ctx, 31, 0x15B5C4u);
    ctx->pc = 0x15B5C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B5BCu;
    // 0x15b5c0: 0xac62c730  sw          $v0, -0x38D0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294952752), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x15B5BCu, 0x15B5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B5C4u;
label_15b5c4:
    // 0x15b5c4: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x15b5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_15b5c8:
    // 0x15b5c8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x15b5c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15b5cc:
    // 0x15b5cc: 0x24845840  addiu       $a0, $a0, 0x5840
    ctx->pc = 0x15b5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22592));
label_15b5d0:
    // 0x15b5d0: 0x24060bb8  addiu       $a2, $zero, 0xBB8
    ctx->pc = 0x15b5d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3000));
label_15b5d4:
    // 0x15b5d4: 0xc071bf2  jal         func_1C6FC8
label_15b5d8:
    if (ctx->pc == 0x15B5D8u) {
        ctx->pc = 0x15B5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B5D4u;
        // 0x15b5d8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B5DCu;
        goto label_15b5dc;
    }
    ctx->pc = 0x15B5D4u;
    SET_GPR_U32(ctx, 31, 0x15B5DCu);
    ctx->pc = 0x15B5D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B5D4u;
    // 0x15b5d8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6FC8u, 0x15B5D4u, 0x15B5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B5DCu;
label_15b5dc:
    // 0x15b5dc: 0x1000000e  b           . + 4 + (0xE << 2)
label_15b5e0:
    if (ctx->pc == 0x15B5E0u) {
        ctx->pc = 0x15B5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B5DCu;
        // 0x15b5e0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B5E4u;
        goto label_15b5e4;
    }
    ctx->pc = 0x15B5DCu;
    {
        const bool branch_taken_0x15b5dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B5DCu;
        // 0x15b5e0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b5dc) {
            ctx->pc = 0x15B618u;
            goto label_15b618;
        }
    }
    ctx->pc = 0x15B5E4u;
label_15b5e4:
    // 0x15b5e4: 0xc067b9c  jal         func_19EE70
label_15b5e8:
    if (ctx->pc == 0x15B5E8u) {
        ctx->pc = 0x15B5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B5E4u;
        // 0x15b5e8: 0x240400b7  addiu       $a0, $zero, 0xB7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 183));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B5ECu;
        goto label_15b5ec;
    }
    ctx->pc = 0x15B5E4u;
    SET_GPR_U32(ctx, 31, 0x15B5ECu);
    ctx->pc = 0x15B5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B5E4u;
    // 0x15b5e8: 0x240400b7  addiu       $a0, $zero, 0xB7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 183));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x15B5E4u, 0x15B5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B5ECu;
label_15b5ec:
    // 0x15b5ec: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x15b5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_15b5f0:
    // 0x15b5f0: 0x240400a9  addiu       $a0, $zero, 0xA9
    ctx->pc = 0x15b5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 169));
label_15b5f4:
    // 0x15b5f4: 0xc067b9c  jal         func_19EE70
label_15b5f8:
    if (ctx->pc == 0x15B5F8u) {
        ctx->pc = 0x15B5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B5F4u;
        // 0x15b5f8: 0xac62c730  sw          $v0, -0x38D0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294952752), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B5FCu;
        goto label_15b5fc;
    }
    ctx->pc = 0x15B5F4u;
    SET_GPR_U32(ctx, 31, 0x15B5FCu);
    ctx->pc = 0x15B5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B5F4u;
    // 0x15b5f8: 0xac62c730  sw          $v0, -0x38D0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294952752), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x15B5F4u, 0x15B5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B5FCu;
label_15b5fc:
    // 0x15b5fc: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x15b5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_15b600:
    // 0x15b600: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x15b600u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15b604:
    // 0x15b604: 0x24845840  addiu       $a0, $a0, 0x5840
    ctx->pc = 0x15b604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22592));
label_15b608:
    // 0x15b608: 0x240607d0  addiu       $a2, $zero, 0x7D0
    ctx->pc = 0x15b608u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
label_15b60c:
    // 0x15b60c: 0xc071bf2  jal         func_1C6FC8
label_15b610:
    if (ctx->pc == 0x15B610u) {
        ctx->pc = 0x15B610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B60Cu;
        // 0x15b610: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B614u;
        goto label_15b614;
    }
    ctx->pc = 0x15B60Cu;
    SET_GPR_U32(ctx, 31, 0x15B614u);
    ctx->pc = 0x15B610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B60Cu;
    // 0x15b610: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6FC8u, 0x15B60Cu, 0x15B614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B614u;
label_15b614:
    // 0x15b614: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15b614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_15b618:
    // 0x15b618: 0x8c455024  lw          $a1, 0x5024($v0)
    ctx->pc = 0x15b618u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20516)));
label_15b61c:
    // 0x15b61c: 0x8ca30128  lw          $v1, 0x128($a1)
    ctx->pc = 0x15b61cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 296)));
label_15b620:
    // 0x15b620: 0x84640190  lh          $a0, 0x190($v1)
    ctx->pc = 0x15b620u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 400)));
label_15b624:
    // 0x15b624: 0x8c620194  lw          $v0, 0x194($v1)
    ctx->pc = 0x15b624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 404)));
label_15b628:
    // 0x15b628: 0x40f809  jalr        $v0
label_15b62c:
    if (ctx->pc == 0x15B62Cu) {
        ctx->pc = 0x15B62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B628u;
        // 0x15b62c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B630u;
        goto label_15b630;
    }
    ctx->pc = 0x15B628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15B630u);
        ctx->pc = 0x15B62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B628u;
        // 0x15b62c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15B628u, 0x15B630u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15B630u;
label_15b630:
    // 0x15b630: 0x3c030016  lui         $v1, 0x16
    ctx->pc = 0x15b630u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22 << 16));
label_15b634:
    // 0x15b634: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15b634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_15b638:
    // 0x15b638: 0x2463b8c0  addiu       $v1, $v1, -0x4740
    ctx->pc = 0x15b638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949056));
label_15b63c:
    // 0x15b63c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15b63cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_15b640:
    // 0x15b640: 0xac43c734  sw          $v1, -0x38CC($v0)
    ctx->pc = 0x15b640u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294952756), GPR_U32(ctx, 3));
label_15b644:
    // 0x15b644: 0x3e00008  jr          $ra
label_15b648:
    if (ctx->pc == 0x15B648u) {
        ctx->pc = 0x15B648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B644u;
        // 0x15b648: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B64Cu;
        goto label_15b64c;
    }
    ctx->pc = 0x15B644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15B648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B644u;
        // 0x15b648: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15B644u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15B64Cu;
label_15b64c:
    // 0x15b64c: 0x0  nop
    ctx->pc = 0x15b64cu;
    // NOP
    ctx->pc = 0x15b650u;
}
