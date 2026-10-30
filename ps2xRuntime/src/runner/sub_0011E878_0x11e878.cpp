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

// Function: sub_0011E878
// Address: 0x11e878 - 0x11e978
void sub_0011E878_0x11e878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011E878_0x11e878");
#endif

    switch (ctx->pc) {
        case 0x11e878u: goto label_11e878;
        case 0x11e87cu: goto label_11e87c;
        case 0x11e880u: goto label_11e880;
        case 0x11e884u: goto label_11e884;
        case 0x11e888u: goto label_11e888;
        case 0x11e88cu: goto label_11e88c;
        case 0x11e890u: goto label_11e890;
        case 0x11e894u: goto label_11e894;
        case 0x11e898u: goto label_11e898;
        case 0x11e89cu: goto label_11e89c;
        case 0x11e8a0u: goto label_11e8a0;
        case 0x11e8a4u: goto label_11e8a4;
        case 0x11e8a8u: goto label_11e8a8;
        case 0x11e8acu: goto label_11e8ac;
        case 0x11e8b0u: goto label_11e8b0;
        case 0x11e8b4u: goto label_11e8b4;
        case 0x11e8b8u: goto label_11e8b8;
        case 0x11e8bcu: goto label_11e8bc;
        case 0x11e8c0u: goto label_11e8c0;
        case 0x11e8c4u: goto label_11e8c4;
        case 0x11e8c8u: goto label_11e8c8;
        case 0x11e8ccu: goto label_11e8cc;
        case 0x11e8d0u: goto label_11e8d0;
        case 0x11e8d4u: goto label_11e8d4;
        case 0x11e8d8u: goto label_11e8d8;
        case 0x11e8dcu: goto label_11e8dc;
        case 0x11e8e0u: goto label_11e8e0;
        case 0x11e8e4u: goto label_11e8e4;
        case 0x11e8e8u: goto label_11e8e8;
        case 0x11e8ecu: goto label_11e8ec;
        case 0x11e8f0u: goto label_11e8f0;
        case 0x11e8f4u: goto label_11e8f4;
        case 0x11e8f8u: goto label_11e8f8;
        case 0x11e8fcu: goto label_11e8fc;
        case 0x11e900u: goto label_11e900;
        case 0x11e904u: goto label_11e904;
        case 0x11e908u: goto label_11e908;
        case 0x11e90cu: goto label_11e90c;
        case 0x11e910u: goto label_11e910;
        case 0x11e914u: goto label_11e914;
        case 0x11e918u: goto label_11e918;
        case 0x11e91cu: goto label_11e91c;
        case 0x11e920u: goto label_11e920;
        case 0x11e924u: goto label_11e924;
        case 0x11e928u: goto label_11e928;
        case 0x11e92cu: goto label_11e92c;
        case 0x11e930u: goto label_11e930;
        case 0x11e934u: goto label_11e934;
        case 0x11e938u: goto label_11e938;
        case 0x11e93cu: goto label_11e93c;
        case 0x11e940u: goto label_11e940;
        case 0x11e944u: goto label_11e944;
        case 0x11e948u: goto label_11e948;
        case 0x11e94cu: goto label_11e94c;
        case 0x11e950u: goto label_11e950;
        case 0x11e954u: goto label_11e954;
        case 0x11e958u: goto label_11e958;
        case 0x11e95cu: goto label_11e95c;
        case 0x11e960u: goto label_11e960;
        case 0x11e964u: goto label_11e964;
        case 0x11e968u: goto label_11e968;
        case 0x11e96cu: goto label_11e96c;
        case 0x11e970u: goto label_11e970;
        case 0x11e974u: goto label_11e974;
        default: break;
    }

    ctx->pc = 0x11e878u;

label_11e878:
    // 0x11e878: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x11e878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_11e87c:
    // 0x11e87c: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x11e87cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_11e880:
    // 0x11e880: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x11e880u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_11e884:
    // 0x11e884: 0x248491a8  addiu       $a0, $a0, -0x6E58
    ctx->pc = 0x11e884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939048));
label_11e888:
    // 0x11e888: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x11e888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_11e88c:
    // 0x11e88c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x11e88cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_11e890:
    // 0x11e890: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11e890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_11e894:
    // 0x11e894: 0xc136b50  jal         func_4DAD40
label_11e898:
    if (ctx->pc == 0x11E898u) {
        ctx->pc = 0x11E898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E894u;
        // 0x11e898: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E89Cu;
        goto label_11e89c;
    }
    ctx->pc = 0x11E894u;
    SET_GPR_U32(ctx, 31, 0x11E89Cu);
    ctx->pc = 0x11E898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E894u;
    // 0x11e898: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAD40u, 0x11E894u, 0x11E89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E89Cu;
label_11e89c:
    // 0x11e89c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x11e89cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_11e8a0:
    // 0x11e8a0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x11e8a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11e8a4:
    // 0x11e8a4: 0xc047e6c  jal         func_11F9B0
label_11e8a8:
    if (ctx->pc == 0x11E8A8u) {
        ctx->pc = 0x11E8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E8A4u;
        // 0x11e8a8: 0xac62b194  sw          $v0, -0x4E6C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294947220), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E8ACu;
        goto label_11e8ac;
    }
    ctx->pc = 0x11E8A4u;
    SET_GPR_U32(ctx, 31, 0x11E8ACu);
    ctx->pc = 0x11E8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E8A4u;
    // 0x11e8a8: 0xac62b194  sw          $v0, -0x4E6C($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294947220), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x11E8A4u, 0x11E8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E8ACu;
label_11e8ac:
    // 0x11e8ac: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x11e8acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_11e8b0:
    // 0x11e8b0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11e8b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11e8b4:
    // 0x11e8b4: 0x8c829150  lw          $v0, -0x6EB0($a0)
    ctx->pc = 0x11e8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294938960)));
label_11e8b8:
    // 0x11e8b8: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
label_11e8bc:
    if (ctx->pc == 0x11E8BCu) {
        ctx->pc = 0x11E8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E8B8u;
        // 0x11e8bc: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E8C0u;
        goto label_11e8c0;
    }
    ctx->pc = 0x11E8B8u;
    {
        const bool branch_taken_0x11e8b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11e8b8) {
            ctx->pc = 0x11E8BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E8B8u;
            // 0x11e8bc: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E8F0u;
            goto label_11e8f0;
        }
    }
    ctx->pc = 0x11E8C0u;
label_11e8c0:
    // 0x11e8c0: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x11e8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
label_11e8c4:
    // 0x11e8c4: 0x8c629148  lw          $v0, -0x6EB8($v1)
    ctx->pc = 0x11e8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294938952)));
label_11e8c8:
    // 0x11e8c8: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_11e8cc:
    if (ctx->pc == 0x11E8CCu) {
        ctx->pc = 0x11E8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E8C8u;
        // 0x11e8cc: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E8D0u;
        goto label_11e8d0;
    }
    ctx->pc = 0x11E8C8u;
    {
        const bool branch_taken_0x11e8c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11e8c8) {
            ctx->pc = 0x11E8CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E8C8u;
            // 0x11e8cc: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E8F0u;
            goto label_11e8f0;
        }
    }
    ctx->pc = 0x11E8D0u;
label_11e8d0:
    // 0x11e8d0: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x11e8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_11e8d4:
    // 0x11e8d4: 0x8c429158  lw          $v0, -0x6EA8($v0)
    ctx->pc = 0x11e8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294938968)));
label_11e8d8:
    // 0x11e8d8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_11e8dc:
    if (ctx->pc == 0x11E8DCu) {
        ctx->pc = 0x11E8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E8D8u;
        // 0x11e8dc: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E8E0u;
        goto label_11e8e0;
    }
    ctx->pc = 0x11E8D8u;
    {
        const bool branch_taken_0x11e8d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e8d8) {
            ctx->pc = 0x11E8DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E8D8u;
            // 0x11e8dc: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E8F0u;
            goto label_11e8f0;
        }
    }
    ctx->pc = 0x11E8E0u;
label_11e8e0:
    // 0x11e8e0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11e8e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11e8e4:
    // 0x11e8e4: 0xac629148  sw          $v0, -0x6EB8($v1)
    ctx->pc = 0x11e8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294938952), GPR_U32(ctx, 2));
label_11e8e8:
    // 0x11e8e8: 0xac859150  sw          $a1, -0x6EB0($a0)
    ctx->pc = 0x11e8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294938960), GPR_U32(ctx, 5));
label_11e8ec:
    // 0x11e8ec: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x11e8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_11e8f0:
    // 0x11e8f0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x11e8f0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_11e8f4:
    // 0x11e8f4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x11e8f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11e8f8:
    // 0x11e8f8: 0x84640130  lh          $a0, 0x130($v1)
    ctx->pc = 0x11e8f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 304)));
label_11e8fc:
    // 0x11e8fc: 0x8c620134  lw          $v0, 0x134($v1)
    ctx->pc = 0x11e8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 308)));
label_11e900:
    // 0x11e900: 0x40f809  jalr        $v0
label_11e904:
    if (ctx->pc == 0x11E904u) {
        ctx->pc = 0x11E904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E900u;
        // 0x11e904: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E908u;
        goto label_11e908;
    }
    ctx->pc = 0x11E900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11E908u);
        ctx->pc = 0x11E904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E900u;
        // 0x11e904: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E900u, 0x11E908u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11E908u;
label_11e908:
    // 0x11e908: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x11e908u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_11e90c:
    // 0x11e90c: 0x8c62b198  lw          $v0, -0x4E68($v1)
    ctx->pc = 0x11e90cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294947224)));
label_11e910:
    // 0x11e910: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x11e910u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_11e914:
    // 0x11e914: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_11e918:
    if (ctx->pc == 0x11E918u) {
        ctx->pc = 0x11E918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E914u;
        // 0x11e918: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E91Cu;
        goto label_11e91c;
    }
    ctx->pc = 0x11E914u;
    {
        const bool branch_taken_0x11e914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E914u;
        // 0x11e918: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e914) {
            ctx->pc = 0x11E95Cu;
            goto label_11e95c;
        }
    }
    ctx->pc = 0x11E91Cu;
label_11e91c:
    // 0x11e91c: 0x0  nop
    ctx->pc = 0x11e91cu;
    // NOP
label_11e920:
    // 0x11e920: 0xc047e6c  jal         func_11F9B0
label_11e924:
    if (ctx->pc == 0x11E924u) {
        ctx->pc = 0x11E924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E920u;
        // 0x11e924: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E928u;
        goto label_11e928;
    }
    ctx->pc = 0x11E920u;
    SET_GPR_U32(ctx, 31, 0x11E928u);
    ctx->pc = 0x11E924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E920u;
    // 0x11e924: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x11E920u, 0x11E928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E928u;
label_11e928:
    // 0x11e928: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11e928u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11e92c:
    // 0x11e92c: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_11e930:
    if (ctx->pc == 0x11E930u) {
        ctx->pc = 0x11E930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E92Cu;
        // 0x11e930: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E934u;
        goto label_11e934;
    }
    ctx->pc = 0x11E92Cu;
    {
        const bool branch_taken_0x11e92c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E92Cu;
        // 0x11e930: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e92c) {
            ctx->pc = 0x11E948u;
            goto label_11e948;
        }
    }
    ctx->pc = 0x11E934u;
label_11e934:
    // 0x11e934: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x11e934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_11e938:
    // 0x11e938: 0x84440130  lh          $a0, 0x130($v0)
    ctx->pc = 0x11e938u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 304)));
label_11e93c:
    // 0x11e93c: 0x8c430134  lw          $v1, 0x134($v0)
    ctx->pc = 0x11e93cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 308)));
label_11e940:
    // 0x11e940: 0x60f809  jalr        $v1
label_11e944:
    if (ctx->pc == 0x11E944u) {
        ctx->pc = 0x11E944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E940u;
        // 0x11e944: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E948u;
        goto label_11e948;
    }
    ctx->pc = 0x11E940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x11E948u);
        ctx->pc = 0x11E944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E940u;
        // 0x11e944: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E940u, 0x11E948u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11E948u;
label_11e948:
    // 0x11e948: 0x8e22b198  lw          $v0, -0x4E68($s1)
    ctx->pc = 0x11e948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294947224)));
label_11e94c:
    // 0x11e94c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x11e94cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_11e950:
    // 0x11e950: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x11e950u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_11e954:
    // 0x11e954: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_11e958:
    if (ctx->pc == 0x11E958u) {
        ctx->pc = 0x11E95Cu;
        goto label_11e95c;
    }
    ctx->pc = 0x11E954u;
    {
        const bool branch_taken_0x11e954 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11e954) {
            ctx->pc = 0x11E920u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11e920;
        }
    }
    ctx->pc = 0x11E95Cu;
label_11e95c:
    // 0x11e95c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x11e95cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_11e960:
    // 0x11e960: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x11e960u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_11e964:
    // 0x11e964: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11e964u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11e968:
    // 0x11e968: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x11e968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_11e96c:
    // 0x11e96c: 0x3e00008  jr          $ra
label_11e970:
    if (ctx->pc == 0x11E970u) {
        ctx->pc = 0x11E970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E96Cu;
        // 0x11e970: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E974u;
        goto label_11e974;
    }
    ctx->pc = 0x11E96Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E96Cu;
        // 0x11e970: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E96Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11E974u;
label_11e974:
    // 0x11e974: 0x0  nop
    ctx->pc = 0x11e974u;
    // NOP
    ctx->pc = 0x11e978u;
}
