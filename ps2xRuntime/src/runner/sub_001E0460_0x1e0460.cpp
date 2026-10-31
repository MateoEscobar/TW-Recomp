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

// Function: sub_001E0460
// Address: 0x1e0460 - 0x1e0560
void sub_001E0460_0x1e0460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E0460_0x1e0460");
#endif

    switch (ctx->pc) {
        case 0x1e04b0u: goto label_1e04b0;
        case 0x1e04ccu: goto label_1e04cc;
        case 0x1e04d8u: goto label_1e04d8;
        default: break;
    }

    ctx->pc = 0x1e0460u;

    // 0x1e0460: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e0460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e0464: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e0464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e0468: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1e0468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1e046c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e046cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0470: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e0470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e0474: 0x8e220064  lw          $v0, 0x64($s1)
    ctx->pc = 0x1e0474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x1e0478: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E0478u;
    {
        const bool branch_taken_0x1e0478 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E047Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0478u;
        // 0x1e047c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0478) {
            ctx->pc = 0x1E0488u;
            goto label_1e0488;
        }
    }
    ctx->pc = 0x1E0480u;
    // 0x1e0480: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x1E0480u;
    {
        const bool branch_taken_0x1e0480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0480u;
        // 0x1e0484: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0480) {
            ctx->pc = 0x1E0548u;
            goto label_1e0548;
        }
    }
    ctx->pc = 0x1E0488u;
label_1e0488:
    // 0x1e0488: 0x10a20005  beq         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E0488u;
    {
        const bool branch_taken_0x1e0488 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E048Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0488u;
        // 0x1e048c: 0x28a20005  slti        $v0, $a1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0488) {
            ctx->pc = 0x1E04A0u;
            goto label_1e04a0;
        }
    }
    ctx->pc = 0x1E0490u;
    // 0x1e0490: 0x5040002c  beql        $v0, $zero, . + 4 + (0x2C << 2)
    ctx->pc = 0x1E0490u;
    {
        const bool branch_taken_0x1e0490 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0490) {
            ctx->pc = 0x1E0494u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E0490u;
            // 0x1e0494: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E0544u;
            goto label_1e0544;
        }
    }
    ctx->pc = 0x1E0498u;
    // 0x1e0498: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x1E0498u;
    {
        const bool branch_taken_0x1e0498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E049Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0498u;
        // 0x1e049c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0498) {
            ctx->pc = 0x1E0548u;
            goto label_1e0548;
        }
    }
    ctx->pc = 0x1E04A0u;
label_1e04a0:
    // 0x1e04a0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1e04a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1e04a4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1e04a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1e04a8: 0xc043f0c  jal         func_10FC30
    ctx->pc = 0x1E04A8u;
    SET_GPR_U32(ctx, 31, 0x1E04B0u);
    ctx->pc = 0x1E04ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E04A8u;
    // 0x1e04ac: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC30u, 0x1E04A8u, 0x1E04B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E04B0u;
label_1e04b0:
    // 0x1e04b0: 0x8e2307a0  lw          $v1, 0x7A0($s1)
    ctx->pc = 0x1e04b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1952)));
    // 0x1e04b4: 0xae22078c  sw          $v0, 0x78C($s1)
    ctx->pc = 0x1e04b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1932), GPR_U32(ctx, 2));
    // 0x1e04b8: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E04B8u;
    {
        const bool branch_taken_0x1e04b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E04BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E04B8u;
        // 0x1e04bc: 0x26300360  addiu       $s0, $s1, 0x360 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 864));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e04b8) {
            ctx->pc = 0x1E04C4u;
            goto label_1e04c4;
        }
    }
    ctx->pc = 0x1E04C0u;
    // 0x1e04c0: 0x263007b0  addiu       $s0, $s1, 0x7B0
    ctx->pc = 0x1e04c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1968));
label_1e04c4:
    // 0x1e04c4: 0xc0750fa  jal         func_1D43E8
    ctx->pc = 0x1E04C4u;
    SET_GPR_U32(ctx, 31, 0x1E04CCu);
    ctx->pc = 0x1E04C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E04C4u;
    // 0x1e04c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D43E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D43E8u, 0x1E04C4u, 0x1E04CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E04CCu;
label_1e04cc:
    // 0x1e04cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e04ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e04d0: 0xc0750fc  jal         func_1D43F0
    ctx->pc = 0x1E04D0u;
    SET_GPR_U32(ctx, 31, 0x1E04D8u);
    ctx->pc = 0x1E04D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E04D0u;
    // 0x1e04d4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D43F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D43F0u, 0x1E04D0u, 0x1E04D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E04D8u;
label_1e04d8:
    // 0x1e04d8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1e04d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e04dc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1e04dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e04e0: 0x5064000d  beql        $v1, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x1E04E0u;
    {
        const bool branch_taken_0x1e04e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x1e04e0) {
            ctx->pc = 0x1E04E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E04E0u;
            // 0x1e04e4: 0xae2407a0  sw          $a0, 0x7A0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 1952), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E0518u;
            goto label_1e0518;
        }
    }
    ctx->pc = 0x1E04E8u;
    // 0x1e04e8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E04E8u;
    {
        const bool branch_taken_0x1e04e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E04ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E04E8u;
        // 0x1e04ec: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e04e8) {
            ctx->pc = 0x1E0508u;
            goto label_1e0508;
        }
    }
    ctx->pc = 0x1E04F0u;
    // 0x1e04f0: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1E04F0u;
    {
        const bool branch_taken_0x1e04f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E04F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E04F0u;
        // 0x1e04f4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e04f0) {
            ctx->pc = 0x1E0524u;
            goto label_1e0524;
        }
    }
    ctx->pc = 0x1E04F8u;
    // 0x1e04f8: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1E04F8u;
    {
        const bool branch_taken_0x1e04f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E04FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E04F8u;
        // 0x1e04fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e04f8) {
            ctx->pc = 0x1E0534u;
            goto label_1e0534;
        }
    }
    ctx->pc = 0x1E0500u;
    // 0x1e0500: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1E0500u;
    {
        const bool branch_taken_0x1e0500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0500u;
        // 0x1e0504: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0500) {
            ctx->pc = 0x1E054Cu;
            goto label_1e054c;
        }
    }
    ctx->pc = 0x1E0508u;
label_1e0508:
    // 0x1e0508: 0xae240060  sw          $a0, 0x60($s1)
    ctx->pc = 0x1e0508u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 4));
    // 0x1e050c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e050cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e0510: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1E0510u;
    {
        const bool branch_taken_0x1e0510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0510u;
        // 0x1e0514: 0xae2407a4  sw          $a0, 0x7A4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1956), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0510) {
            ctx->pc = 0x1E0548u;
            goto label_1e0548;
        }
    }
    ctx->pc = 0x1E0518u;
label_1e0518:
    // 0x1e0518: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e0518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e051c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1E051Cu;
    {
        const bool branch_taken_0x1e051c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E051Cu;
        // 0x1e0520: 0xae200060  sw          $zero, 0x60($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e051c) {
            ctx->pc = 0x1E0548u;
            goto label_1e0548;
        }
    }
    ctx->pc = 0x1E0524u;
label_1e0524:
    // 0x1e0524: 0xae240060  sw          $a0, 0x60($s1)
    ctx->pc = 0x1e0524u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 4));
    // 0x1e0528: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e0528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e052c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1E052Cu;
    {
        const bool branch_taken_0x1e052c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E052Cu;
        // 0x1e0530: 0xae2407a8  sw          $a0, 0x7A8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1960), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e052c) {
            ctx->pc = 0x1E0548u;
            goto label_1e0548;
        }
    }
    ctx->pc = 0x1E0534u;
label_1e0534:
    // 0x1e0534: 0xae240060  sw          $a0, 0x60($s1)
    ctx->pc = 0x1e0534u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 4));
    // 0x1e0538: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e0538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e053c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1E053Cu;
    {
        const bool branch_taken_0x1e053c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E053Cu;
        // 0x1e0540: 0xae2407ac  sw          $a0, 0x7AC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1964), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e053c) {
            ctx->pc = 0x1E0548u;
            goto label_1e0548;
        }
    }
    ctx->pc = 0x1E0544u;
label_1e0544:
    // 0x1e0544: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e0544u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e0548:
    // 0x1e0548: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1e0548u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e054c:
    // 0x1e054c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e054cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e0550: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e0550u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0554: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0554u;
        // 0x1e0558: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0554u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E055Cu;
    // 0x1e055c: 0x0  nop
    ctx->pc = 0x1e055cu;
    // NOP
    ctx->pc = 0x1e0560u;
}
