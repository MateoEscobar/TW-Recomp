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

// Function: sub_001148E8
// Address: 0x1148e8 - 0x114a38
void sub_001148E8_0x1148e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001148E8_0x1148e8");
#endif

    switch (ctx->pc) {
        case 0x114918u: goto label_114918;
        case 0x114954u: goto label_114954;
        case 0x1149a8u: goto label_1149a8;
        case 0x1149f0u: goto label_1149f0;
        case 0x114a00u: goto label_114a00;
        case 0x114a14u: goto label_114a14;
        default: break;
    }

    ctx->pc = 0x1148e8u;

    // 0x1148e8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1148e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1148ec: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1148ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1148f0: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x1148f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x1148f4: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x1148f4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1148f8: 0x10e00009  beqz        $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x1148F8u;
    {
        const bool branch_taken_0x1148f8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1148FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1148F8u;
        // 0x1148fc: 0xffbf0080  sd          $ra, 0x80($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1148f8) {
            ctx->pc = 0x114920u;
            goto label_114920;
        }
    }
    ctx->pc = 0x114900u;
    // 0x114900: 0x3c050054  lui         $a1, 0x54
    ctx->pc = 0x114900u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)84 << 16));
    // 0x114904: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x114904u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114908: 0x24a57d10  addiu       $a1, $a1, 0x7D10
    ctx->pc = 0x114908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32016));
    // 0x11490c: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x11490cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114910: 0xc10ca28  jal         func_4328A0
    ctx->pc = 0x114910u;
    SET_GPR_U32(ctx, 31, 0x114918u);
    ctx->pc = 0x114914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114910u;
    // 0x114914: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4328A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4328A0u, 0x114910u, 0x114918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114918u;
label_114918:
    // 0x114918: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x114918u;
    {
        const bool branch_taken_0x114918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11491Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114918u;
        // 0x11491c: 0x3c04005e  lui         $a0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114918) {
            ctx->pc = 0x1149F4u;
            goto label_1149f4;
        }
    }
    ctx->pc = 0x114920u;
label_114920:
    // 0x114920: 0x1160000e  beqz        $t3, . + 4 + (0xE << 2)
    ctx->pc = 0x114920u;
    {
        const bool branch_taken_0x114920 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x114924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114920u;
        // 0x114924: 0x3c020054  lui         $v0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114920) {
            ctx->pc = 0x11495Cu;
            goto label_11495c;
        }
    }
    ctx->pc = 0x114928u;
    // 0x114928: 0x11000004  beqz        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x114928u;
    {
        const bool branch_taken_0x114928 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x11492Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114928u;
        // 0x11492c: 0x24457d40  addiu       $a1, $v0, 0x7D40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32064));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114928) {
            ctx->pc = 0x11493Cu;
            goto label_11493c;
        }
    }
    ctx->pc = 0x114930u;
    // 0x114930: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x114930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x114934: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x114934u;
    {
        const bool branch_taken_0x114934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114934u;
        // 0x114938: 0x24477d70  addiu       $a3, $v0, 0x7D70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 32112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114934) {
            ctx->pc = 0x114944u;
            goto label_114944;
        }
    }
    ctx->pc = 0x11493Cu;
label_11493c:
    // 0x11493c: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x11493cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x114940: 0x24477d78  addiu       $a3, $v0, 0x7D78
    ctx->pc = 0x114940u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 32120));
label_114944:
    // 0x114944: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x114944u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114948: 0x140402d  daddu       $t0, $t2, $zero
    ctx->pc = 0x114948u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11494c: 0xc10ca28  jal         func_4328A0
    ctx->pc = 0x11494Cu;
    SET_GPR_U32(ctx, 31, 0x114954u);
    ctx->pc = 0x114950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11494Cu;
    // 0x114950: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4328A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4328A0u, 0x11494Cu, 0x114954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114954u;
label_114954:
    // 0x114954: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x114954u;
    {
        const bool branch_taken_0x114954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114954u;
        // 0x114958: 0x3c04005e  lui         $a0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114954) {
            ctx->pc = 0x1149F4u;
            goto label_1149f4;
        }
    }
    ctx->pc = 0x11495Cu;
label_11495c:
    // 0x11495c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11495cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x114960: 0x15220013  bne         $t1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x114960u;
    {
        const bool branch_taken_0x114960 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        ctx->pc = 0x114964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114960u;
        // 0x114964: 0x3c020054  lui         $v0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114960) {
            ctx->pc = 0x1149B0u;
            goto label_1149b0;
        }
    }
    ctx->pc = 0x114968u;
    // 0x114968: 0x11000004  beqz        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x114968u;
    {
        const bool branch_taken_0x114968 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x11496Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114968u;
        // 0x11496c: 0x24457d80  addiu       $a1, $v0, 0x7D80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114968) {
            ctx->pc = 0x11497Cu;
            goto label_11497c;
        }
    }
    ctx->pc = 0x114970u;
    // 0x114970: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x114970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x114974: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x114974u;
    {
        const bool branch_taken_0x114974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114974u;
        // 0x114978: 0x24477d70  addiu       $a3, $v0, 0x7D70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 32112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114974) {
            ctx->pc = 0x114984u;
            goto label_114984;
        }
    }
    ctx->pc = 0x11497Cu;
label_11497c:
    // 0x11497c: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x11497cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x114980: 0x24477d78  addiu       $a3, $v0, 0x7D78
    ctx->pc = 0x114980u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 32120));
label_114984:
    // 0x114984: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x114984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x114988: 0x91880  sll         $v1, $t1, 2
    ctx->pc = 0x114988u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x11498c: 0x2442b120  addiu       $v0, $v0, -0x4EE0
    ctx->pc = 0x11498cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947104));
    // 0x114990: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x114990u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114994: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x114994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x114998: 0x140482d  daddu       $t1, $t2, $zero
    ctx->pc = 0x114998u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11499c: 0x8c680000  lw          $t0, 0x0($v1)
    ctx->pc = 0x11499cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1149a0: 0xc10ca28  jal         func_4328A0
    ctx->pc = 0x1149A0u;
    SET_GPR_U32(ctx, 31, 0x1149A8u);
    ctx->pc = 0x1149A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1149A0u;
    // 0x1149a4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4328A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4328A0u, 0x1149A0u, 0x1149A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1149A8u;
label_1149a8:
    // 0x1149a8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1149A8u;
    {
        const bool branch_taken_0x1149a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1149ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1149A8u;
        // 0x1149ac: 0x3c04005e  lui         $a0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1149a8) {
            ctx->pc = 0x1149F4u;
            goto label_1149f4;
        }
    }
    ctx->pc = 0x1149B0u;
label_1149b0:
    // 0x1149b0: 0x11000004  beqz        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1149B0u;
    {
        const bool branch_taken_0x1149b0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1149B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1149B0u;
        // 0x1149b4: 0x24457d80  addiu       $a1, $v0, 0x7D80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1149b0) {
            ctx->pc = 0x1149C4u;
            goto label_1149c4;
        }
    }
    ctx->pc = 0x1149B8u;
    // 0x1149b8: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1149b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x1149bc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1149BCu;
    {
        const bool branch_taken_0x1149bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1149C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1149BCu;
        // 0x1149c0: 0x24477d70  addiu       $a3, $v0, 0x7D70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 32112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1149bc) {
            ctx->pc = 0x1149CCu;
            goto label_1149cc;
        }
    }
    ctx->pc = 0x1149C4u;
label_1149c4:
    // 0x1149c4: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1149c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x1149c8: 0x24477d78  addiu       $a3, $v0, 0x7D78
    ctx->pc = 0x1149c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 32120));
label_1149cc:
    // 0x1149cc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1149ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1149d0: 0x91880  sll         $v1, $t1, 2
    ctx->pc = 0x1149d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x1149d4: 0x2442b120  addiu       $v0, $v0, -0x4EE0
    ctx->pc = 0x1149d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947104));
    // 0x1149d8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1149d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1149dc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1149dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1149e0: 0x140482d  daddu       $t1, $t2, $zero
    ctx->pc = 0x1149e0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1149e4: 0x8c680000  lw          $t0, 0x0($v1)
    ctx->pc = 0x1149e4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1149e8: 0xc10ca28  jal         func_4328A0
    ctx->pc = 0x1149E8u;
    SET_GPR_U32(ctx, 31, 0x1149F0u);
    ctx->pc = 0x1149ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1149E8u;
    // 0x1149ec: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4328A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4328A0u, 0x1149E8u, 0x1149F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1149F0u;
label_1149f0:
    // 0x1149f0: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x1149f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_1149f4:
    // 0x1149f4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1149f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1149f8: 0xc050fda  jal         func_143F68
    ctx->pc = 0x1149F8u;
    SET_GPR_U32(ctx, 31, 0x114A00u);
    ctx->pc = 0x1149FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1149F8u;
    // 0x1149fc: 0x248491e0  addiu       $a0, $a0, -0x6E20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x1149F8u, 0x114A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114A00u;
label_114a00:
    // 0x114a00: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x114a00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x114a04: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x114a04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114a08: 0x8c64aa84  lw          $a0, -0x557C($v1)
    ctx->pc = 0x114a08u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50AA84u));
    // 0x114a0c: 0xc04436c  jal         func_110DB0
    ctx->pc = 0x114A0Cu;
    SET_GPR_U32(ctx, 31, 0x114A14u);
    ctx->pc = 0x114A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114A0Cu;
    // 0x114a10: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110DB0u, 0x114A0Cu, 0x114A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114A14u;
label_114a14:
    // 0x114a14: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x114a14u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x114a18: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x114a18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x114a1c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x114a1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114a20: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x114a20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x114a24: 0x3e00008  jr          $ra
    ctx->pc = 0x114A24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x114A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114A24u;
        // 0x114a28: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114A24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x114A2Cu;
    // 0x114a2c: 0x0  nop
    ctx->pc = 0x114a2cu;
    // NOP
    // 0x114a30: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x114a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x114a34: 0x0  nop
    ctx->pc = 0x114a34u;
    // NOP
    ctx->pc = 0x114a38u;
}
