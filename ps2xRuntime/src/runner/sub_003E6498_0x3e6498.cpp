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

// Function: sub_003E6498
// Address: 0x3e6498 - 0x3e6598
void sub_003E6498_0x3e6498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E6498_0x3e6498");
#endif

    switch (ctx->pc) {
        case 0x3e6498u: goto label_3e6498;
        case 0x3e649cu: goto label_3e649c;
        case 0x3e64a0u: goto label_3e64a0;
        case 0x3e64a4u: goto label_3e64a4;
        case 0x3e64a8u: goto label_3e64a8;
        case 0x3e64acu: goto label_3e64ac;
        case 0x3e64b0u: goto label_3e64b0;
        case 0x3e64b4u: goto label_3e64b4;
        case 0x3e64b8u: goto label_3e64b8;
        case 0x3e64bcu: goto label_3e64bc;
        case 0x3e64c0u: goto label_3e64c0;
        case 0x3e64c4u: goto label_3e64c4;
        case 0x3e64c8u: goto label_3e64c8;
        case 0x3e64ccu: goto label_3e64cc;
        case 0x3e64d0u: goto label_3e64d0;
        case 0x3e64d4u: goto label_3e64d4;
        case 0x3e64d8u: goto label_3e64d8;
        case 0x3e64dcu: goto label_3e64dc;
        case 0x3e64e0u: goto label_3e64e0;
        case 0x3e64e4u: goto label_3e64e4;
        case 0x3e64e8u: goto label_3e64e8;
        case 0x3e64ecu: goto label_3e64ec;
        case 0x3e64f0u: goto label_3e64f0;
        case 0x3e64f4u: goto label_3e64f4;
        case 0x3e64f8u: goto label_3e64f8;
        case 0x3e64fcu: goto label_3e64fc;
        case 0x3e6500u: goto label_3e6500;
        case 0x3e6504u: goto label_3e6504;
        case 0x3e6508u: goto label_3e6508;
        case 0x3e650cu: goto label_3e650c;
        case 0x3e6510u: goto label_3e6510;
        case 0x3e6514u: goto label_3e6514;
        case 0x3e6518u: goto label_3e6518;
        case 0x3e651cu: goto label_3e651c;
        case 0x3e6520u: goto label_3e6520;
        case 0x3e6524u: goto label_3e6524;
        case 0x3e6528u: goto label_3e6528;
        case 0x3e652cu: goto label_3e652c;
        case 0x3e6530u: goto label_3e6530;
        case 0x3e6534u: goto label_3e6534;
        case 0x3e6538u: goto label_3e6538;
        case 0x3e653cu: goto label_3e653c;
        case 0x3e6540u: goto label_3e6540;
        case 0x3e6544u: goto label_3e6544;
        case 0x3e6548u: goto label_3e6548;
        case 0x3e654cu: goto label_3e654c;
        case 0x3e6550u: goto label_3e6550;
        case 0x3e6554u: goto label_3e6554;
        case 0x3e6558u: goto label_3e6558;
        case 0x3e655cu: goto label_3e655c;
        case 0x3e6560u: goto label_3e6560;
        case 0x3e6564u: goto label_3e6564;
        case 0x3e6568u: goto label_3e6568;
        case 0x3e656cu: goto label_3e656c;
        case 0x3e6570u: goto label_3e6570;
        case 0x3e6574u: goto label_3e6574;
        case 0x3e6578u: goto label_3e6578;
        case 0x3e657cu: goto label_3e657c;
        case 0x3e6580u: goto label_3e6580;
        case 0x3e6584u: goto label_3e6584;
        case 0x3e6588u: goto label_3e6588;
        case 0x3e658cu: goto label_3e658c;
        case 0x3e6590u: goto label_3e6590;
        case 0x3e6594u: goto label_3e6594;
        default: break;
    }

    ctx->pc = 0x3e6498u;

label_3e6498:
    // 0x3e6498: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3e6498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3e649c:
    // 0x3e649c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3e649cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_3e64a0:
    // 0x3e64a0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3e64a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3e64a4:
    // 0x3e64a4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3e64a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3e64a8:
    // 0x3e64a8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3e64a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_3e64ac:
    // 0x3e64ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3e64acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e64b0:
    // 0x3e64b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3e64b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3e64b4:
    // 0x3e64b4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3e64b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3e64b8:
    // 0x3e64b8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3e64b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3e64bc:
    // 0x3e64bc: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3e64bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3e64c0:
    // 0x3e64c0: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3e64c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3e64c4:
    // 0x3e64c4: 0x40f809  jalr        $v0
label_3e64c8:
    if (ctx->pc == 0x3E64C8u) {
        ctx->pc = 0x3E64C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E64C4u;
        // 0x3e64c8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E64CCu;
        goto label_3e64cc;
    }
    ctx->pc = 0x3E64C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E64CCu);
        ctx->pc = 0x3E64C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E64C4u;
        // 0x3e64c8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E64C4u, 0x3E64CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E64CCu;
label_3e64cc:
    // 0x3e64cc: 0x2603fff6  addiu       $v1, $s0, -0xA
    ctx->pc = 0x3e64ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967286));
label_3e64d0:
    // 0x3e64d0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3e64d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e64d4:
    // 0x3e64d4: 0x2c620028  sltiu       $v0, $v1, 0x28
    ctx->pc = 0x3e64d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)40) ? 1 : 0);
label_3e64d8:
    // 0x3e64d8: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
label_3e64dc:
    if (ctx->pc == 0x3E64DCu) {
        ctx->pc = 0x3E64DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E64D8u;
        // 0x3e64dc: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E64E0u;
        goto label_3e64e0;
    }
    ctx->pc = 0x3E64D8u;
    {
        const bool branch_taken_0x3e64d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E64DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E64D8u;
        // 0x3e64dc: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e64d8) {
            ctx->pc = 0x3E6598u;
            return;
        }
    }
    ctx->pc = 0x3E64E0u;
label_3e64e0:
    // 0x3e64e0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3e64e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3e64e4:
    // 0x3e64e4: 0x24425500  addiu       $v0, $v0, 0x5500
    ctx->pc = 0x3e64e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21760));
label_3e64e8:
    // 0x3e64e8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3e64e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3e64ec:
    // 0x3e64ec: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3e64ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3e64f0:
    // 0x3e64f0: 0x800008  jr          $a0
label_3e64f4:
    if (ctx->pc == 0x3E64F4u) {
        ctx->pc = 0x3E64F8u;
        goto label_3e64f8;
    }
    ctx->pc = 0x3E64F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3E64F8u: goto label_3e64f8;
            case 0x3E6514u: goto label_3e6514;
            case 0x3E6524u: goto label_3e6524;
            case 0x3E6534u: goto label_3e6534;
            case 0x3E6548u: goto label_3e6548;
            case 0x3E655Cu: goto label_3e655c;
            case 0x3E6570u: goto label_3e6570;
            case 0x3E6584u: goto label_3e6584;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E64F0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3E64F8u;
label_3e64f8:
    // 0x3e64f8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3e64f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3e64fc:
    // 0x3e64fc: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x3e64fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
label_3e6500:
    // 0x3e6500: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x3e6500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_3e6504:
    // 0x3e6504: 0x60f809  jalr        $v1
label_3e6508:
    if (ctx->pc == 0x3E6508u) {
        ctx->pc = 0x3E6508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6504u;
        // 0x3e6508: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E650Cu;
        goto label_3e650c;
    }
    ctx->pc = 0x3E6504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3E650Cu);
        ctx->pc = 0x3E6508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6504u;
        // 0x3e6508: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E6504u, 0x3E650Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E650Cu;
label_3e650c:
    // 0x3e650c: 0x10000023  b           . + 4 + (0x23 << 2)
label_3e6510:
    if (ctx->pc == 0x3E6510u) {
        ctx->pc = 0x3E6510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E650Cu;
        // 0x3e6510: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E6514u;
        goto label_3e6514;
    }
    ctx->pc = 0x3E650Cu;
    {
        const bool branch_taken_0x3e650c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E6510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E650Cu;
        // 0x3e6510: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e650c) {
            ctx->pc = 0x3E659Cu;
            return;
        }
    }
    ctx->pc = 0x3E6514u;
label_3e6514:
    // 0x3e6514: 0xc0ea146  jal         func_3A8518
label_3e6518:
    if (ctx->pc == 0x3E6518u) {
        ctx->pc = 0x3E6518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6514u;
        // 0x3e6518: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E651Cu;
        goto label_3e651c;
    }
    ctx->pc = 0x3E6514u;
    SET_GPR_U32(ctx, 31, 0x3E651Cu);
    ctx->pc = 0x3E6518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6514u;
    // 0x3e6518: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3E6514u, 0x3E651Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E651Cu;
label_3e651c:
    // 0x3e651c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_3e6520:
    if (ctx->pc == 0x3E6520u) {
        ctx->pc = 0x3E6520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E651Cu;
        // 0x3e6520: 0x8e220054  lw          $v0, 0x54($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E6524u;
        goto label_3e6524;
    }
    ctx->pc = 0x3E651Cu;
    {
        const bool branch_taken_0x3e651c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e651c) {
            ctx->pc = 0x3E6520u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E651Cu;
            // 0x3e6520: 0x8e220054  lw          $v0, 0x54($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E6538u;
            goto label_3e6538;
        }
    }
    ctx->pc = 0x3E6524u;
label_3e6524:
    // 0x3e6524: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x3e6524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_3e6528:
    // 0x3e6528: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x3e6528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_3e652c:
    // 0x3e652c: 0x1000001a  b           . + 4 + (0x1A << 2)
label_3e6530:
    if (ctx->pc == 0x3E6530u) {
        ctx->pc = 0x3E6530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E652Cu;
        // 0x3e6530: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E6534u;
        goto label_3e6534;
    }
    ctx->pc = 0x3E652Cu;
    {
        const bool branch_taken_0x3e652c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E6530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E652Cu;
        // 0x3e6530: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e652c) {
            ctx->pc = 0x3E6598u;
            return;
        }
    }
    ctx->pc = 0x3E6534u;
label_3e6534:
    // 0x3e6534: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x3e6534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_3e6538:
    // 0x3e6538: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x3e6538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_3e653c:
    // 0x3e653c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3e653cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3e6540:
    // 0x3e6540: 0x10000015  b           . + 4 + (0x15 << 2)
label_3e6544:
    if (ctx->pc == 0x3E6544u) {
        ctx->pc = 0x3E6544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6540u;
        // 0x3e6544: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E6548u;
        goto label_3e6548;
    }
    ctx->pc = 0x3E6540u;
    {
        const bool branch_taken_0x3e6540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E6544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6540u;
        // 0x3e6544: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6540) {
            ctx->pc = 0x3E6598u;
            return;
        }
    }
    ctx->pc = 0x3E6548u;
label_3e6548:
    // 0x3e6548: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e6548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e654c:
    // 0x3e654c: 0xc0f98b2  jal         func_3E62C8
label_3e6550:
    if (ctx->pc == 0x3E6550u) {
        ctx->pc = 0x3E6550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E654Cu;
        // 0x3e6550: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E6554u;
        goto label_3e6554;
    }
    ctx->pc = 0x3E654Cu;
    SET_GPR_U32(ctx, 31, 0x3E6554u);
    ctx->pc = 0x3E6550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E654Cu;
    // 0x3e6550: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E62C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E62C8u, 0x3E654Cu, 0x3E6554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6554u;
label_3e6554:
    // 0x3e6554: 0x10000011  b           . + 4 + (0x11 << 2)
label_3e6558:
    if (ctx->pc == 0x3E6558u) {
        ctx->pc = 0x3E6558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6554u;
        // 0x3e6558: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E655Cu;
        goto label_3e655c;
    }
    ctx->pc = 0x3E6554u;
    {
        const bool branch_taken_0x3e6554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E6558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6554u;
        // 0x3e6558: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6554) {
            ctx->pc = 0x3E659Cu;
            return;
        }
    }
    ctx->pc = 0x3E655Cu;
label_3e655c:
    // 0x3e655c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e655cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e6560:
    // 0x3e6560: 0xc0f98d6  jal         func_3E6358
label_3e6564:
    if (ctx->pc == 0x3E6564u) {
        ctx->pc = 0x3E6564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6560u;
        // 0x3e6564: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E6568u;
        goto label_3e6568;
    }
    ctx->pc = 0x3E6560u;
    SET_GPR_U32(ctx, 31, 0x3E6568u);
    ctx->pc = 0x3E6564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6560u;
    // 0x3e6564: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E6358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E6358u, 0x3E6560u, 0x3E6568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6568u;
label_3e6568:
    // 0x3e6568: 0x1000000c  b           . + 4 + (0xC << 2)
label_3e656c:
    if (ctx->pc == 0x3E656Cu) {
        ctx->pc = 0x3E656Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6568u;
        // 0x3e656c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E6570u;
        goto label_3e6570;
    }
    ctx->pc = 0x3E6568u;
    {
        const bool branch_taken_0x3e6568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E656Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6568u;
        // 0x3e656c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6568) {
            ctx->pc = 0x3E659Cu;
            return;
        }
    }
    ctx->pc = 0x3E6570u;
label_3e6570:
    // 0x3e6570: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e6570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e6574:
    // 0x3e6574: 0xc0f9900  jal         func_3E6400
label_3e6578:
    if (ctx->pc == 0x3E6578u) {
        ctx->pc = 0x3E6578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6574u;
        // 0x3e6578: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E657Cu;
        goto label_3e657c;
    }
    ctx->pc = 0x3E6574u;
    SET_GPR_U32(ctx, 31, 0x3E657Cu);
    ctx->pc = 0x3E6578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6574u;
    // 0x3e6578: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E6400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E6400u, 0x3E6574u, 0x3E657Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E657Cu;
label_3e657c:
    // 0x3e657c: 0x10000007  b           . + 4 + (0x7 << 2)
label_3e6580:
    if (ctx->pc == 0x3E6580u) {
        ctx->pc = 0x3E6580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E657Cu;
        // 0x3e6580: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E6584u;
        goto label_3e6584;
    }
    ctx->pc = 0x3E657Cu;
    {
        const bool branch_taken_0x3e657c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E6580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E657Cu;
        // 0x3e6580: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e657c) {
            ctx->pc = 0x3E659Cu;
            return;
        }
    }
    ctx->pc = 0x3E6584u;
label_3e6584:
    // 0x3e6584: 0xc0ea146  jal         func_3A8518
label_3e6588:
    if (ctx->pc == 0x3E6588u) {
        ctx->pc = 0x3E6588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6584u;
        // 0x3e6588: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E658Cu;
        goto label_3e658c;
    }
    ctx->pc = 0x3E6584u;
    SET_GPR_U32(ctx, 31, 0x3E658Cu);
    ctx->pc = 0x3E6588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6584u;
    // 0x3e6588: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3E6584u, 0x3E658Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E658Cu;
label_3e658c:
    // 0x3e658c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e658cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e6590:
    // 0x3e6590: 0xc0e6ec6  jal         func_39BB18
label_3e6594:
    if (ctx->pc == 0x3E6594u) {
        ctx->pc = 0x3E6594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6590u;
        // 0x3e6594: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E6598u;
        goto label_fallthrough_0x3e6590;
    }
    ctx->pc = 0x3E6590u;
    SET_GPR_U32(ctx, 31, 0x3E6598u);
    ctx->pc = 0x3E6594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6590u;
    // 0x3e6594: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39BB18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BB18u, 0x3E6590u, 0x3E6598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_fallthrough_0x3e6590:
    ctx->pc = 0x3E6598u;
}
